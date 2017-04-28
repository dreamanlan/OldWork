#include "global_xref.h"

inline Root::T_x129::T_x129()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressDereferenceExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IAddressDereferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOfExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IAddressOfExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOutExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IAddressOutExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressReferenceExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IAddressReferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_0012:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_0017:                                                                        //ldarg.1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_1=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayCreateExpression::get_Initializer()
	IL_001f:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0024:            A_0->Initializer=Temp_2;                                    //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Initializer(Reflector::CodeModel::IExpression^)
	IL_0029:                                                                        //ldarg.1
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_3=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayCreateExpression::get_Type()
	IL_0031:            Temp_4=this->M_x13(Temp_3);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0036:            A_0->Type=Temp_4;                                           //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Type(Reflector::CodeModel::IType^)
	IL_003b:                                                                        //ldarg.1
	IL_003c:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IArrayDimension^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayDimension^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayDimensionCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IArrayDimension^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::ArrayDimensionCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_4 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IArrayDimension^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IArrayDimensionCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0059;case 1:goto IL_0038;case 2:goto IL_007a;case 3:goto IL_0045;};//switch				(IL_0059,IL_0038,IL_007a,IL_0045)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0024:                                                                        //conv.ovf.u4
	IL_0025:            Temp_1=gcnew array<Reflector::CodeModel::IArrayDimension^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IArrayDimension
	IL_002a:            V_0=Temp_1;                                                 //stloc.0
	IL_002b:                                                                        //ldc.i4.0
	IL_002c:            V_1=0;                                                      //stloc.1
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_3=1;                                                      //stloc				V_3
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldc.i4				0x3
	IL_003f:            V_3=3;                                                      //stloc				V_3
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004c:            if(V_1<Temp_3)goto IL_005b;                                 //blt.s				IL_005b
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_3=0;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_007c;                                               //br.s				IL_007c
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldarg.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0065:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IArrayDimension^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayDimension^)
	IL_006a:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_3=2;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_003a;                                               //br.s				IL_003a
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::ArrayDimensionCollection();//newobj				void Reflector::CodeModel::Memory::ArrayDimensionCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IArrayDimensionCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IArrayDimensionCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_000a:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayIndexerExpression::get_Target()
	IL_0017:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001c:            A_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IArrayIndexerExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0021:                                                                        //ldarg.1
	IL_0022:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expressions;                                    //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayInitializerExpression::get_Expressions()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0012:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0017:                                                                        //pop
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_2=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_001f:            Temp_3=this->M_x1(Temp_2);                                  //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayDimensionCollection^)
	IL_0024:                                                                        //pop
	IL_0025:                                                                        //ldarg.1
	IL_0026:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0013:            this->M_x1(Temp_1);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IModuleCollection^)
	IL_0018:                                                                        //ldarg.1
	IL_0019:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAssignExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Target()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IAssignExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Expression()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IAssignExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IAttachEventStatement::get_Event()
	IL_0013:            Temp_1=this->M_x8(safe_cast<Reflector::CodeModel::IExpression^>(Temp_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //castclass				Reflector::CodeModel::IEventReferenceExpression
	IL_001d:            A_0->Event=safe_cast<Reflector::CodeModel::IEventReferenceExpression^>(Temp_1);//callvirt				void Reflector::CodeModel::IAttachEventStatement::set_Event(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0022:                                                                        //ldarg.1
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAttachEventStatement::get_Listener()
	IL_002a:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002f:            A_0->Listener=Temp_3;                                       //callvirt				void Reflector::CodeModel::IAttachEventStatement::set_Listener(Reflector::CodeModel::IExpression^)
	IL_0034:                                                                        //ldarg.1
	IL_0035:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IBinaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Left=Temp_1;                                           //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Right=Temp_3;                                          //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatementCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IStatementCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBreakStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ICanCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICanCastExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ICanCastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ICastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICastExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ICastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::ICatchClause^ Root::T_x129::M_x1(Reflector::CodeModel::ICatchClause^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.5
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::ICatchClause::get_Variable()
	IL_0013:            Temp_1=this->M_x2(Temp_0);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0018:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::ICatchClause::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICatchClause::get_Condition()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Condition=Temp_3;                                      //callvirt				void Reflector::CodeModel::ICatchClause::set_Condition(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_4=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ICatchClause::get_Body()
	IL_0037:            Temp_5=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_003c:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0041:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5);//callvirt				void Reflector::CodeModel::ICatchClause::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0046:                                                                        //ldarg.1
	IL_0047:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::ICatchClauseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ICatchClause^ Temp_1 = nullptr;
	Reflector::CodeModel::ICatchClause^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001e;                                               //br.s				IL_001e
	IL_0002:            goto IL_0005;                                               //br.s				IL_0005
	IL_0004:                                                                        //break
	IL_0005:                                                                        //ldloc				V_1
	IL_0009:            switch(V_1){case 0:goto IL_002b;case 1:goto IL_0038;case 2:goto IL_004c;case 3:goto IL_0071;};//switch				(IL_002b,IL_0038,IL_004c,IL_0071)
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x0
	IL_0025:            V_1=0;                                                      //stloc				V_1
	IL_0029:            goto IL_0002;                                               //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_1=1;                                                      //stloc				V_1
	IL_0036:            goto IL_0002;                                               //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_1=2;                                                      //stloc				V_1
	IL_004a:            goto IL_0002;                                               //br.s				IL_0002
	IL_004c:            goto IL_0073;                                               //br.s				IL_0073
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ICatchClause^ Reflector::CodeModel::ICatchClauseCollection::get_Item(System::Int32)
	IL_0058:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::ICatchClause^ Root::T_x129::M_x1(Reflector::CodeModel::ICatchClause^)
	IL_005d:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::ICatchClauseCollection::set_Item(System::Int32,Reflector::CodeModel::ICatchClause^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0066:                                                                        //ldc.i4				0x3
	IL_006b:            V_1=3;                                                      //stloc				V_1
	IL_006f:            goto IL_0002;                                               //br.s				IL_0002
	IL_0071:            goto IL_002d;                                               //br.s				IL_002d
	IL_0073:            return;                                                     //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ICommentStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IConditionCase^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IConditionCase::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_001d:            Temp_3=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0022:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0027:            safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_3);//callvirt				void Reflector::CodeModel::ISwitchCase::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionExpression^ A_0)
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
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IConditionExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Then;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Then=Temp_3;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Then(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_4=A_0->Else;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_002f:            Temp_5=this->M_x8(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0034:            A_0->Else=Temp_5;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Else(Reflector::CodeModel::IExpression^)
	IL_0039:                                                                        //ldarg.1
	IL_003a:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
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
	IL_000e:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionStatement::get_Condition()
	IL_0013:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0018:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IConditionStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Then;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Then()
	IL_0025:            Temp_3=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_002a:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_002f:            A_0->Then=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_3);//callvirt				void Reflector::CodeModel::IConditionStatement::set_Then(Reflector::CodeModel::IBlockStatement^)
	IL_0034:                                                                        //ldarg.1
	IL_0035:                                                                        //ldarg.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_4=A_0->Else;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Else()
	IL_003c:            Temp_5=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0041:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0046:            A_0->Else=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5);//callvirt				void Reflector::CodeModel::IConditionStatement::set_Else(Reflector::CodeModel::IBlockStatement^)
	IL_004b:                                                                        //ldarg.1
	IL_004c:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IContinueStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::ICustomAttribute^ Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ICustomAttribute^ Temp_1 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0028;case 1:goto IL_0049;case 2:goto IL_006e;case 3:goto IL_0035;};//switch				(IL_0028,IL_0049,IL_006e,IL_0035)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x0
	IL_0022:            V_1=0;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_1=3;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_1=1;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_007b;                                               //br.s				IL_007b
	IL_004b:                                                                        //ldarg.1
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ICustomAttribute^ Reflector::CodeModel::ICustomAttributeCollection::get_Item(System::Int32)
	IL_0055:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::ICustomAttribute^ Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_005a:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::ICustomAttributeCollection::set_Item(System::Int32,Reflector::CodeModel::ICustomAttribute^)
	IL_005f:                                                                        //ldloc.0
	IL_0060:                                                                        //ldc.i4.1
	IL_0061:                                                                        //add
	IL_0062:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0063:                                                                        //ldc.i4				0x2
	IL_0068:            V_1=2;                                                      //stloc				V_1
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:                                                                        //ldc.i4.7
	IL_006f:                                                                        //dup
	IL_0070:                                                                        //dup
	IL_0071:                                                                        //ldc.i4.2
	IL_0072:                                                                        //add
	IL_0073:                                                                        //bgt				IL_006f
	IL_0078:                                                                        //pop
	IL_0079:            goto IL_002a;                                               //br.s				IL_002a
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IDefaultCase^ Root::T_x129::M_x1(Reflector::CodeModel::IDefaultCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IBlockStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0008:            Temp_1=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_000d:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0012:            safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_1);//callvirt				void Reflector::CodeModel::ISwitchCase::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0017:                                                                        //ldarg.1
	IL_0018:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateCreateExpression::get_Target()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IDelegateCreateExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IDelegateInvokeExpression::get_Arguments()
	IL_0012:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_0017:                                                                        //ldarg.1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateInvokeExpression::get_Target()
	IL_001f:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0024:            A_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IDelegateInvokeExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0029:                                                                        //ldarg.1
	IL_002a:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IDoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDoStatement::get_Condition()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IDoStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IDoStatement::get_Body()
	IL_001d:            Temp_3=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0022:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0027:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_3);//callvirt				void Reflector::CodeModel::IDoStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IEmbeddedResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IResource^>(A_0);    //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0049;case 1:goto IL_0028;case 2:goto IL_0079;case 3:goto IL_0035;};//switch				(IL_0049,IL_0028,IL_0079,IL_0035)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x1
	IL_0022:            V_1=1;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_1=3;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_1=0;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_007b;                                               //br.s				IL_007b
	IL_004b:                                                                        //ldc.i4.1
	IL_004c:                                                                        //dup
	IL_004d:                                                                        //dup
	IL_004e:                                                                        //ldc.i4.6
	IL_004f:                                                                        //add
	IL_0050:                                                                        //bgt				IL_004c
	IL_0055:                                                                        //pop
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventDeclarationCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IEventDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::IEventDeclaration^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x2
	IL_0073:            V_1=2;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_002a;                                               //br.s				IL_002a
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IEventReference^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IEventReferenceExpression::get_Target()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IEventReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0035;case 1:goto IL_0071;case 2:goto IL_0049;case 3:goto IL_0028;};//switch				(IL_0035,IL_0071,IL_0049,IL_0028)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x3
	IL_0022:            V_1=3;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_1=0;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_1=2;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_004c;                                               //br.s				IL_004c
	IL_004b:                                                                        //break
	IL_004c:            goto IL_0073;                                               //br.s				IL_0073
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_0058:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_005d:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IExpressionCollection::set_Item(System::Int32,Reflector::CodeModel::IExpression^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_1=1;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_002a;                                               //br.s				IL_002a
	IL_0073:            return;                                                     //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IExpressionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionStatement::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IExpressionStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0079;case 1:goto IL_0054;case 2:goto IL_0033;case 3:goto IL_0040;};//switch				(IL_0079,IL_0054,IL_0033,IL_0040)
	IL_001b:                                                                        //ldc.i4.6
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.5
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x2
	IL_002d:            V_1=2;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_1=3;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IFieldDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::IFieldDeclaration^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x0
	IL_0073:            V_1=0;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_0035;                                               //br.s				IL_0035
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldReferenceExpression::get_Target()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IFieldReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IFileResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IResource^>(A_0);    //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IFixedStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IFixedStatement::get_Variable()
	IL_0013:            Temp_1=this->M_x2(Temp_0);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0018:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::IFixedStatement::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFixedStatement::get_Expression()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IFixedStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_4=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IFixedStatement::get_Body()
	IL_0037:            Temp_5=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_003c:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0041:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5);//callvirt				void Reflector::CodeModel::IFixedStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0046:                                                                        //ldarg.1
	IL_0047:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IForEachStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IForEachStatement::get_Variable()
	IL_0013:            Temp_1=this->M_x2(Temp_0);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0018:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::IForEachStatement::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForEachStatement::get_Expression()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IForEachStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_4=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForEachStatement::get_Body()
	IL_0037:            Temp_5=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_003c:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0041:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5);//callvirt				void Reflector::CodeModel::IForEachStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0046:                                                                        //ldarg.1
	IL_0047:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IForStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_6 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_7 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Initializer()
	IL_0013:            Temp_1=this->M_x12(Temp_0);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0018:            A_0->Initializer=Temp_1;                                    //callvirt				void Reflector::CodeModel::IForStatement::set_Initializer(Reflector::CodeModel::IStatement^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForStatement::get_Condition()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Condition=Temp_3;                                      //callvirt				void Reflector::CodeModel::IForStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_4=A_0->Increment;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Increment()
	IL_0037:            Temp_5=this->M_x12(Temp_4);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_003c:            A_0->Increment=Temp_5;                                      //callvirt				void Reflector::CodeModel::IForStatement::set_Increment(Reflector::CodeModel::IStatement^)
	IL_0041:                                                                        //ldarg.1
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_6=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForStatement::get_Body()
	IL_0049:            Temp_7=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_6));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_004e:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0053:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_7);//callvirt				void Reflector::CodeModel::IForStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0058:                                                                        //ldarg.1
	IL_0059:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IFunctionPointer^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericArgument^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericParameter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IGotoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ILabeledStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Statement;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::ILabeledStatement::get_Statement()
	IL_0008:            Temp_1=this->M_x12(Temp_0);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_000d:            A_0->Statement=Temp_1;                                      //callvirt				void Reflector::CodeModel::ILabeledStatement::set_Statement(Reflector::CodeModel::IStatement^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ILiteralExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ILockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ILockStatement::get_Expression()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ILockStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ILockStatement::get_Body()
	IL_001d:            Temp_3=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0022:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0027:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_3);//callvirt				void Reflector::CodeModel::ILockStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0)
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
	IL_000e:            Temp_0=A_0->Source;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Source()
	IL_0013:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0018:            A_0->Source=Temp_1;                                         //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Source(Reflector::CodeModel::IExpression^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Destination;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Destination()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Destination=Temp_3;                                    //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Destination(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_4=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Length()
	IL_0037:            Temp_5=this->M_x8(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_003c:            A_0->Length=Temp_5;                                         //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Length(Reflector::CodeModel::IExpression^)
	IL_0041:                                                                        //ldarg.1
	IL_0042:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0)
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
	IL_0006:            Temp_0=A_0->Offset;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Offset()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Offset=Temp_1;                                         //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Offset(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Value()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Value=Temp_3;                                          //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Value(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_4=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Length()
	IL_002f:            Temp_5=this->M_x8(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0034:            A_0->Length=Temp_5;                                         //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Length(Reflector::CodeModel::IExpression^)
	IL_0039:                                                                        //ldarg.1
	IL_003a:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IBlockStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0012:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_001e:            this->M_x1(Temp_1);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Overrides;                                      //callvirt				Reflector::CodeModel::IMethodReferenceCollection^ Reflector::CodeModel::IMethodDeclaration::get_Overrides()
	IL_002a:            this->M_x1(Temp_2);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IMethodReferenceCollection^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_3=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0037:            Temp_4=this->M_x1(Temp_3);                                  //callvirt				Reflector::CodeModel::IMethodReturnType^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnType^)
	IL_003c:            safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType=Temp_4;//callvirt				void Reflector::CodeModel::IMethodSignature::set_ReturnType(Reflector::CodeModel::IMethodReturnType^)
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            Temp_5=A_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_0048:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_004d:            Temp_6=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5)));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0052:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0057:            V_0=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//stloc.0
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldloc.0
	IL_005a:            A_0->Body=safe_cast<System::Object^>(V_0);                  //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Body(System::Object^)
	IL_005f:                                                                        //ldarg.1
	IL_0060:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_002b;case 1:goto IL_0071;case 2:goto IL_004c;case 3:goto IL_0038;};//switch				(IL_002b,IL_0071,IL_004c,IL_0038)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x0
	IL_0025:            V_1=0;                                                      //stloc				V_1
	IL_0029:            /*goto IL_0002;*/goto IL_002b;                              //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x3
	IL_0032:            V_1=3;                                                      //stloc				V_1
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_1=2;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_0073;                                               //br.s				IL_0073
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0058:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_005d:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IMethodDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::IMethodDeclaration^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_1=1;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_002d;                                               //br.s				IL_002d
	IL_0073:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0012:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_0017:                                                                        //ldarg.1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_1=A_0->Method;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_001f:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0024:            A_0->Method=Temp_2;                                         //callvirt				void Reflector::CodeModel::IMethodInvokeExpression::set_Method(Reflector::CodeModel::IExpression^)
	IL_0029:                                                                        //ldarg.1
	IL_002a:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IMethodReferenceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001e;                                               //br.s				IL_001e
	IL_0002:            goto IL_0005;                                               //br.s				IL_0005
	IL_0004:                                                                        //break
	IL_0005:                                                                        //ldloc				V_1
	IL_0009:            switch(V_1){case 0:goto IL_002b;case 1:goto IL_004c;case 2:goto IL_0038;case 3:goto IL_0071;};//switch				(IL_002b,IL_004c,IL_0038,IL_0071)
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x0
	IL_0025:            V_1=0;                                                      //stloc				V_1
	IL_0029:            goto IL_0002;                                               //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            goto IL_0002;                                               //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x1
	IL_0046:            V_1=1;                                                      //stloc				V_1
	IL_004a:            goto IL_0002;                                               //br.s				IL_0002
	IL_004c:            goto IL_0073;                                               //br.s				IL_0073
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceCollection::get_Item(System::Int32)
	IL_0058:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_005d:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IMethodReferenceCollection::set_Item(System::Int32,Reflector::CodeModel::IMethodReference^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0066:                                                                        //ldc.i4				0x3
	IL_006b:            V_1=3;                                                      //stloc				V_1
	IL_006f:            goto IL_0002;                                               //br.s				IL_0002
	IL_0071:            goto IL_002d;                                               //br.s				IL_002d
	IL_0073:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReferenceExpression::get_Target()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IMethodReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReturnStatement::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IMethodReturnStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IMethodReturnType^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IModuleCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	Reflector::CodeModel::IModule^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0033;case 2:goto IL_0040;case 3:goto IL_0079;};//switch				(IL_0054,IL_0033,IL_0040,IL_0079)
	IL_001b:                                                                        //ldc.i4.7
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.4
	IL_001f:                                                                        //sub
	IL_0020:                                                                        //blt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x1
	IL_002d:            V_1=1;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_1=2;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_1=0;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IModuleCollection::set_Item(System::Int32,Reflector::CodeModel::IModule^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x3
	IL_0073:            V_1=3;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_0035;                                               //br.s				IL_0035
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Value=Temp_1;                                          //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Condition()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Expression()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IOptionalModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_000b:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0010:            A_0->ElementType=Temp_1;                                    //callvirt				void Reflector::CodeModel::IOptionalModifier::set_ElementType(Reflector::CodeModel::IType^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_001d:            Temp_3=this->M_x1(Temp_2);                                  //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0022:            A_0->Modifier=Temp_3;                                       //callvirt				void Reflector::CodeModel::IOptionalModifier::set_Modifier(Reflector::CodeModel::ITypeReference^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_000a:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000f:                                                                        //ldarg.1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1=A_0->DefaultValue;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IParameterDeclaration::get_DefaultValue()
	IL_0017:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001c:            A_0->DefaultValue=Temp_2;                                   //callvirt				void Reflector::CodeModel::IParameterDeclaration::set_DefaultValue(Reflector::CodeModel::IExpression^)
	IL_0021:                                                                        //ldarg.1
	IL_0022:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IParameterDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0033;case 2:goto IL_0040;case 3:goto IL_0079;};//switch				(IL_0054,IL_0033,IL_0040,IL_0079)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.4
	IL_0021:                                                                        //add
	IL_0022:                                                                        //bgt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldc.i4				0x1
	IL_002d:            V_1=1;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x2
	IL_003a:            V_1=2;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_1=0;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IParameterDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclaration^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IParameterDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::IParameterDeclaration^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x3
	IL_0073:            V_1=3;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_0035;                                               //br.s				IL_0035
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IPointerType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0008:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_000d:            A_0->ElementType=Temp_1;                                    //callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0040;case 1:goto IL_0079;case 2:goto IL_0033;case 3:goto IL_0054;};//switch				(IL_0040,IL_0079,IL_0033,IL_0054)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4.3
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.2
	IL_0021:                                                                        //sub
	IL_0022:                                                                        //blt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldc.i4				0x2
	IL_002d:            V_1=2;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x0
	IL_003a:            V_1=0;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_1=3;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyDeclarationCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IPropertyDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::IPropertyDeclaration^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x1
	IL_0073:            V_1=1;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_0035;                                               //br.s				IL_0035
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IPropertyReferenceExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_0012:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_0017:                                                                        //ldarg.1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IPropertyReferenceExpression^ Reflector::CodeModel::IPropertyIndexerExpression::get_Target()
	IL_001f:            Temp_2=this->M_x8(safe_cast<Reflector::CodeModel::IExpression^>(Temp_1));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0024:                                                                        //castclass				Reflector::CodeModel::IPropertyReferenceExpression
	IL_0029:            A_0->Target=safe_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(Temp_2);//callvirt				void Reflector::CodeModel::IPropertyIndexerExpression::set_Target(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_002e:                                                                        //ldarg.1
	IL_002f:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IPropertyReference^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IPropertyReferenceExpression::get_Target()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Target=Temp_1;                                         //callvirt				void Reflector::CodeModel::IPropertyReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IReferenceType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0008:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_000d:            A_0->ElementType=Temp_1;                                    //callvirt				void Reflector::CodeModel::IReferenceType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Event()
	IL_000b:            Temp_1=this->M_x8(safe_cast<Reflector::CodeModel::IExpression^>(Temp_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:                                                                        //castclass				Reflector::CodeModel::IEventReferenceExpression
	IL_0015:            A_0->Event=safe_cast<Reflector::CodeModel::IEventReferenceExpression^>(Temp_1);//callvirt				void Reflector::CodeModel::IRemoveEventStatement::set_Event(Reflector::CodeModel::IEventReferenceExpression^)
	IL_001a:                                                                        //ldarg.1
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Listener()
	IL_0022:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0027:            A_0->Listener=Temp_3;                                       //callvirt				void Reflector::CodeModel::IRemoveEventStatement::set_Listener(Reflector::CodeModel::IExpression^)
	IL_002c:                                                                        //ldarg.1
	IL_002d:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IRequiredModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0013:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0018:            A_0->ElementType=Temp_1;                                    //callvirt				void Reflector::CodeModel::IRequiredModifier::set_ElementType(Reflector::CodeModel::IType^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0025:            Temp_3=this->M_x1(Temp_2);                                  //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_002a:            A_0->Modifier=Temp_3;                                       //callvirt				void Reflector::CodeModel::IRequiredModifier::set_Modifier(Reflector::CodeModel::ITypeReference^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:            return safe_cast<Reflector::CodeModel::IType^>(A_0);        //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IResource^ Temp_0 = nullptr;
	Reflector::CodeModel::IResource^ Temp_1 = nullptr;
	System::Globalization::CultureInfo^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	array<System::Object^>^ Temp_4 = nullptr;
	System::Type^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::NotSupportedException^ Temp_8 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_2=18;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_0045;case 2:goto IL_0072;case 3:goto IL_005f;};//switch				(IL_0014,IL_0045,IL_0072,IL_005f)
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //ldarg.1
	IL_0033:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_0038:            if(dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(A_0)==nullptr)goto IL_0054;//brfalse.s				IL_0054
	IL_003a:                                                                        //ldc.i4				0x1
	IL_003f:            V_1=1;                                                      //stloc				V_1
	IL_0043:            /*goto IL_0016;*/goto IL_0045;                              //br.s				IL_0016
	IL_0045:            goto IL_0074;                                               //br.s				IL_0074
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldarg.1
	IL_0049:                                                                        //isinst				Reflector::CodeModel::IFileResource
	IL_004e:            Temp_1=this->M_x1(dynamic_cast<Reflector::CodeModel::IFileResource^>(A_0));//callvirt				Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IFileResource^)
	IL_0053:            return Temp_1;                                              //ret
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_1=3;                                                      //stloc				V_1
	IL_005d:            /*goto IL_0016;*/goto IL_005f;                              //br.s				IL_0016
	IL_005f:                                                                        //ldarg.1
	IL_0060:                                                                        //isinst				Reflector::CodeModel::IFileResource
	IL_0065:            if(dynamic_cast<Reflector::CodeModel::IFileResource^>(A_0)==nullptr)goto IL_0081;//brfalse.s				IL_0081
	IL_0067:                                                                        //ldc.i4				0x2
	IL_006c:            V_1=2;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0016;*/goto IL_0072;                              //br.s				IL_0016
	IL_0072:            goto IL_0047;                                               //br.s				IL_0047
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldarg.1
	IL_0076:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_007b:            Temp_0=this->M_x1(dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(A_0));//callvirt				Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IEmbeddedResource^)
	IL_0080:            return Temp_0;                                              //ret
	IL_0081:            Temp_2=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0086:                                                                        //ldstr				L"\x792F\x5C31\x4233\x5735\x5437\x5339\x583B\x1E3D\x323F\x2741\x3743\x2945\x3D47\x3849\x2F4B\x2B4D\x704F\x2651\x2D53\x2655\x3D57\x7A59\x7B5B\x255D\x505F\x1F61\x4363\x4865"
	IL_008b:                                                                        //ldloc				V_2
	IL_008f:            Temp_3=a(L"\x792F\x5C31\x4233\x5735\x5437\x5339\x583B\x1E3D\x323F\x2741\x3743\x2945\x3D47\x3849\x2F4B\x2B4D\x704F\x2651\x2D53\x2655\x3D57\x7A59\x7B5B\x255D\x505F\x1F61\x4363\x4865",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:                                                                        //ldc.i4.1
	IL_0095:            Temp_4=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_009a:            V_0=Temp_4;                                                 //stloc.0
	IL_009b:                                                                        //ldloc.0
	IL_009c:                                                                        //ldc.i4.0
	IL_009d:                                                                        //ldarg.1
	IL_009e:            Temp_5=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_00a3:            Temp_6=Temp_5->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00a8:            V_0[0]=safe_cast<System::Object^>(Temp_6);                  //stelem.ref
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:            Temp_7=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_2),Temp_3,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00af:            Temp_8=gcnew System::NotSupportedException(Temp_7);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_00b4:            throw Temp_8;                                               //throw

}
inline Reflector::CodeModel::IResourceCollection^ Root::T_x129::M_x1(Reflector::CodeModel::IResourceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IResource^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::ResourceCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IResource^ Temp_4 = nullptr;
	Reflector::CodeModel::IResource^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IResource^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IResourceCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0035;case 1:goto IL_0056;case 2:goto IL_0077;case 3:goto IL_0042;};//switch				(IL_0035,IL_0056,IL_0077,IL_0042)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IResource^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IResource
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_3=0;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x3
	IL_003c:            V_3=3;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_0058;                                 //blt.s				IL_0058
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_3=1;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_0079;                                               //br.s				IL_0079
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IResource^ Reflector::CodeModel::IResourceCollection::get_Item(System::Int32)
	IL_0062:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IResource^ Root::T_x129::M_x1(Reflector::CodeModel::IResource^)
	IL_0067:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006c:                                                                        //ldc.i4				0x2
	IL_0071:            V_3=2;                                                      //stloc				V_3
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_0037;                                               //br.s				IL_0037
	IL_0079:                                                                        //ldc.i4.3
	IL_007a:                                                                        //dup
	IL_007b:                                                                        //dup
	IL_007c:                                                                        //ldc.i4.4
	IL_007d:                                                                        //sub
	IL_007e:                                                                        //blt				IL_007a
	IL_0083:                                                                        //pop
	IL_0084:            Temp_2=gcnew Reflector::CodeModel::Memory::ResourceCollection();//newobj				void Reflector::CodeModel::Memory::ResourceCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::IResourceCollection^>(Temp_2);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IResourceCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ISnippetExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IStackAllocateExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IStackAllocateExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::IStatementCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0040;case 2:goto IL_0079;case 3:goto IL_0028;};//switch				(IL_0054,IL_0040,IL_0079,IL_0028)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x3
	IL_0022:            V_1=3;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:                                                                        //ldc.i4.6
	IL_0029:                                                                        //dup
	IL_002a:                                                                        //dup
	IL_002b:                                                                        //ldc.i4.3
	IL_002c:                                                                        //sub
	IL_002d:                                                                        //blt				IL_0029
	IL_0032:                                                                        //pop
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_1=0;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x12(Temp_1);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::IStatementCollection::set_Item(System::Int32,Reflector::CodeModel::IStatement^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x2
	IL_0073:            V_1=2;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_0035;                                               //br.s				IL_0035
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::ISwitchCase^ Root::T_x129::M_x1(Reflector::CodeModel::ISwitchCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IDefaultCase^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Object^>^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::NotSupportedException^ Temp_7 = nullptr;
	Reflector::CodeModel::IConditionCase^ Temp_8 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x5
	IL_000e:            V_1=5;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0037;                                               //br.s				IL_0037
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00b2;case 1:goto IL_005d;case 2:goto IL_0070;case 3:goto IL_009c;case 4:goto IL_0050;case 5:goto IL_0014;};//switch				(IL_00b2,IL_005d,IL_0070,IL_009c,IL_0050,IL_0014)
	IL_0037:                                                                        //ldc.i4.2
	IL_0038:                                                                        //dup
	IL_0039:                                                                        //dup
	IL_003a:                                                                        //ldc.i4.2
	IL_003b:                                                                        //add
	IL_003c:                                                                        //bgt				IL_0038
	IL_0041:                                                                        //pop
	IL_0042:                                                                        //ldarg.1
	IL_0043:            if(A_0!=nullptr)goto IL_008e;                               //brtrue.s				IL_008e
	IL_0045:                                                                        //ldc.i4				0x4
	IL_004a:            V_1=4;                                                      //stloc				V_1
	IL_004e:            /*goto IL_0016;*/goto IL_0050;                              //br.s				IL_0016
	IL_0050:            goto IL_007f;                                               //br.s				IL_007f
	IL_0052:                                                                        //ldc.i4				0x1
	IL_0057:            V_1=1;                                                      //stloc				V_1
	IL_005b:            /*goto IL_0016;*/goto IL_005d;                              //br.s				IL_0016
	IL_005d:                                                                        //ldarg.1
	IL_005e:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_0063:            if(dynamic_cast<Reflector::CodeModel::IConditionCase^>(A_0)==nullptr)goto IL_00b4;//brfalse.s				IL_00b4
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_1=2;                                                      //stloc				V_1
	IL_006e:            /*goto IL_0016;*/goto IL_0070;                              //br.s				IL_0016
	IL_0070:            goto IL_0081;                                               //br.s				IL_0081
	IL_0072:                                                                        //ldarg.0
	IL_0073:                                                                        //ldarg.1
	IL_0074:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_0079:            Temp_0=this->M_x1(dynamic_cast<Reflector::CodeModel::IDefaultCase^>(A_0));//callvirt				Reflector::CodeModel::IDefaultCase^ Root::T_x129::M_x1(Reflector::CodeModel::IDefaultCase^)
	IL_007e:            return safe_cast<Reflector::CodeModel::ISwitchCase^>(Temp_0);//ret
	IL_007f:                                                                        //ldnull
	IL_0080:            return nullptr;                                             //ret
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldarg.1
	IL_0083:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_0088:            Temp_8=this->M_x1(dynamic_cast<Reflector::CodeModel::IConditionCase^>(A_0));//callvirt				Reflector::CodeModel::IConditionCase^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionCase^)
	IL_008d:            return safe_cast<Reflector::CodeModel::ISwitchCase^>(Temp_8);//ret
	IL_008e:                                                                        //ldc.i4				0x3
	IL_0093:            V_1=3;                                                      //stloc				V_1
	IL_0097:            /*goto IL_0016;*/goto IL_009c;                              //br				IL_0016
	IL_009c:                                                                        //ldarg.1
	IL_009d:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_00a2:            if(dynamic_cast<Reflector::CodeModel::IDefaultCase^>(A_0)==nullptr)goto IL_0052;//brfalse.s				IL_0052
	IL_00a4:                                                                        //ldc.i4				0x0
	IL_00a9:            V_1=0;                                                      //stloc				V_1
	IL_00ad:            /*goto IL_0016;*/goto IL_00b2;                              //br				IL_0016
	IL_00b2:            goto IL_0072;                                               //br.s				IL_0072
	IL_00b4:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00b9:                                                                        //ldstr				L"\x6127\x4429\x5A2B\x4F2D\x5C2F\x5B31\x5033\x1635\x4B37\x4D39\x553B\x4A3D\x233F\x2A41\x6443\x2545\x2947\x3949\x294B\x6E4D\x244F\x2B51\x2453\x3355\x7857\x7D59\x275B\x6E5D\x1D5F\x4561\x4A63"
	IL_00be:                                                                        //ldloc				V_2
	IL_00c2:            Temp_2=a(L"\x6127\x4429\x5A2B\x4F2D\x5C2F\x5B31\x5033\x1635\x4B37\x4D39\x553B\x4A3D\x233F\x2A41\x6443\x2545\x2947\x3949\x294B\x6E4D\x244F\x2B51\x2453\x3355\x7857\x7D59\x275B\x6E5D\x1D5F\x4561\x4A63",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c7:                                                                        //ldc.i4.1
	IL_00c8:            Temp_3=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_00cd:            V_0=Temp_3;                                                 //stloc.0
	IL_00ce:                                                                        //ldloc.0
	IL_00cf:                                                                        //ldc.i4.0
	IL_00d0:                                                                        //ldarg.1
	IL_00d1:            Temp_4=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_00d6:            Temp_5=Temp_4->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00db:            V_0[0]=safe_cast<System::Object^>(Temp_5);                  //stelem.ref
	IL_00dc:                                                                        //ldloc.0
	IL_00dd:            Temp_6=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_1),Temp_2,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00e2:            Temp_7=gcnew System::NotSupportedException(Temp_6);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_00e7:            throw Temp_7;                                               //throw

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::ISwitchCaseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ISwitchCase^ Temp_1 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0038;case 1:goto IL_002b;case 2:goto IL_004c;case 3:goto IL_0071;};//switch				(IL_0038,IL_002b,IL_004c,IL_0071)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x1
	IL_0025:            V_1=1;                                                      //stloc				V_1
	IL_0029:            /*goto IL_0002;*/goto IL_002b;                              //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_1=0;                                                      //stloc				V_1
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_1=2;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_0073;                                               //br.s				IL_0073
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_0058:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::ISwitchCase^ Root::T_x129::M_x1(Reflector::CodeModel::ISwitchCase^)
	IL_005d:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::ISwitchCaseCollection::set_Item(System::Int32,Reflector::CodeModel::ISwitchCase^)
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0066:                                                                        //ldc.i4				0x3
	IL_006b:            V_1=3;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_002d;                                               //br.s				IL_002d
	IL_0073:            return;                                                     //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ISwitchStatement::get_Expression()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ISwitchStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_2=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_001c:            this->M_x1(Temp_2);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ISwitchCaseCollection^)
	IL_0021:                                                                        //ldarg.1
	IL_0022:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IThrowExceptionStatement::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IThrowExceptionStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITryCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITryCastExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ITryCastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IBlockStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Try;                                            //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Try()
	IL_000b:            Temp_1=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0010:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0015:            A_0->Try=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_1);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Try(Reflector::CodeModel::IBlockStatement^)
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_2=A_0->CatchClauses;                                   //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_0021:            this->M_x1(Temp_2);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICatchClauseCollection^)
	IL_0026:                                                                        //ldarg.1
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=A_0->Finally;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Finally()
	IL_002e:            Temp_4=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_3));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0033:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0038:            A_0->Finally=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Finally(Reflector::CodeModel::IBlockStatement^)
	IL_003d:                                                                        //ldarg.1
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldarg.1
	IL_0040:            Temp_5=A_0->Fault;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Fault()
	IL_0045:            Temp_6=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_5));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_004a:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_004f:            A_0->Fault=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Fault(Reflector::CodeModel::IBlockStatement^)
	IL_0054:                                                                        //ldarg.1
	IL_0055:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IType^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::TypeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IType^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ITypeCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0061;case 1:goto IL_0035;case 2:goto IL_004d;case 3:goto IL_0082;};//switch				(IL_0061,IL_0035,IL_004d,IL_0082)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IType^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IType
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldc.i4.2
	IL_0036:                                                                        //dup
	IL_0037:                                                                        //dup
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:                                                                        //add
	IL_003a:                                                                        //bgt				IL_0036
	IL_003f:                                                                        //pop
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldc.i4				0x2
	IL_0047:            V_3=2;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldloc.1
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0054:            if(V_1<Temp_3)goto IL_0063;                                 //blt.s				IL_0063
	IL_0056:                                                                        //ldc.i4				0x0
	IL_005b:            V_3=0;                                                      //stloc				V_3
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0084;                                               //br.s				IL_0084
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_006d:            Temp_5=this->M_x13(Temp_4);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0072:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //add
	IL_0076:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0077:                                                                        //ldc.i4				0x3
	IL_007c:            V_3=3;                                                      //stloc				V_3
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0042;                                               //br.s				IL_0042
	IL_0084:            Temp_2=gcnew Reflector::CodeModel::Memory::TypeCollection();//newobj				void Reflector::CodeModel::Memory::TypeCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_2);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::ITypeCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_000a:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0016:            this->M_x1(Temp_1);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclarationCollection^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_0022:            this->M_x1(Temp_2);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclarationCollection^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=A_0->Properties;                                     //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_002e:            this->M_x1(Temp_3);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclarationCollection^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_4=A_0->Events;                                         //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_003a:            this->M_x1(Temp_4);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclarationCollection^)
	IL_003f:                                                                        //ldarg.0
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_5=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0046:            this->M_x1(Temp_5);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_004b:                                                                        //ldarg.1
	IL_004c:            return A_0;                                                 //ret

}
inline void Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0079;case 1:goto IL_0054;case 2:goto IL_0035;case 3:goto IL_0028;};//switch				(IL_0079,IL_0054,IL_0035,IL_0028)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x3
	IL_0022:            V_1=3;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_1=2;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:                                                                        //dup
	IL_0037:                                                                        //dup
	IL_0038:                                                                        //ldc.i4.2
	IL_0039:                                                                        //add
	IL_003a:                                                                        //bgt				IL_0036
	IL_003f:                                                                        //pop
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_007b;                                               //br.s				IL_007b
	IL_0056:                                                                        //ldarg.1
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.1
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_0060:            Temp_2=this->M_x1(Temp_1);                                  //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0065:            A_0[V_0]=Temp_2;                                            //callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::set_Item(System::Int32,Reflector::CodeModel::ITypeDeclaration^)
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_006e:                                                                        //ldc.i4				0x0
	IL_0073:            V_1=0;                                                      //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:            goto IL_002a;                                               //br.s				IL_002a
	IL_007b:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypedReferenceCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITypedReferenceCreateExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ITypedReferenceCreateExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITypeOfTypedReferenceExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::ITypeOfTypedReferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IUnaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0008:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_000d:            A_0->Expression=Temp_1;                                     //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IUsingStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //ldarg.0
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Variable()
	IL_000b:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0010:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::IUsingStatement::set_Variable(Reflector::CodeModel::IExpression^)
	IL_0015:                                                                        //ldarg.1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Expression()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IUsingStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_4=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IUsingStatement::get_Body()
	IL_002f:            Temp_5=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0034:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0039:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_5);//callvirt				void Reflector::CodeModel::IUsingStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_003e:                                                                        //ldarg.1
	IL_003f:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IValueOfTypedReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.5
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IValueOfTypedReferenceExpression::get_TargetType()
	IL_0013:            Temp_1=this->M_x13(Temp_0);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0018:            A_0->TargetType=Temp_1;                                     //callvirt				void Reflector::CodeModel::IValueOfTypedReferenceExpression::set_TargetType(Reflector::CodeModel::IType^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IValueOfTypedReferenceExpression::get_Expression()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            A_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IValueOfTypedReferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldarg.1
	IL_0030:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableDeclarationExpression::get_Variable()
	IL_0008:            Temp_1=this->M_x2(Temp_0);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_000d:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::IVariableDeclarationExpression::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IVariableReference^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableReference^ Reflector::CodeModel::IVariableReferenceExpression::get_Variable()
	IL_0008:            Temp_1=this->M_x1(Temp_0);                                  //callvirt				Reflector::CodeModel::IVariableReference^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableReference^)
	IL_000d:            A_0->Variable=Temp_1;                                       //callvirt				void Reflector::CodeModel::IVariableReferenceExpression::set_Variable(Reflector::CodeModel::IVariableReference^)
	IL_0012:                                                                        //ldarg.1
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(A_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IWhileStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IWhileStatement::get_Condition()
	IL_0013:            Temp_1=this->M_x8(Temp_0);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0018:            A_0->Condition=Temp_1;                                      //callvirt				void Reflector::CodeModel::IWhileStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_001d:                                                                        //ldarg.1
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IWhileStatement::get_Body()
	IL_0025:            Temp_3=this->M_x12(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_002a:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_002f:            A_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_3);//callvirt				void Reflector::CodeModel::IWhileStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0034:                                                                        //ldarg.1
	IL_0035:            return safe_cast<Reflector::CodeModel::IStatement^>(A_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::Object^>^ Temp_9 = nullptr;
	System::Type^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::NotSupportedException^ Temp_13 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_14 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_15 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_16 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_17 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_18 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_19 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_20 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_21 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_22 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_23 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_24 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_25 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_26 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_27 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_28 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_29 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_2=12;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x16
	IL_000e:            V_1=22;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00e2;                                               //br				IL_00e2
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            switch(V_1){case 0:goto IL_04d7;case 1:goto IL_05a9;case 2:goto IL_0186;case 3:goto IL_031e;case 4:goto IL_0449;case 5:goto IL_012d;case 6:goto IL_01f7;case 7:goto IL_0334;case 8:goto IL_0394;case 9:goto IL_0114;case 10:goto IL_028e;case 11:goto IL_02f5;case 12:goto IL_03f6;case 13:goto IL_0564;case 14:goto IL_0236;case 15:goto IL_04be;case 16:goto IL_045c;case 17:goto IL_03c0;case 18:goto IL_027b;case 19:goto IL_0223;case 20:goto IL_024f;case 21:goto IL_0166;case 22:goto IL_0014;case 23:goto IL_0590;case 24:goto IL_00f6;case 25:goto IL_02d3;case 26:goto IL_057d;case 27:goto IL_052b;case 28:goto IL_04ae;case 29:goto IL_014d;case 30:goto IL_01cb;case 31:goto IL_01b2;case 32:goto IL_03dd;case 33:goto IL_0495;case 34:goto IL_01de;case 35:goto IL_02ba;case 36:goto IL_0544;case 37:goto IL_03a7;case 38:goto IL_020a;case 39:goto IL_0475;case 40:goto IL_02a7;case 41:goto IL_05d5;case 42:goto IL_019f;case 43:goto IL_030e;case 44:goto IL_05bc;case 45:goto IL_0430;case 46:goto IL_037b;case 47:goto IL_0262;};//switch				(IL_04d7,IL_05a9,IL_0186,IL_031e,IL_0449,IL_012d,IL_01f7,IL_0334,IL_0394,IL_0114,IL_028e,IL_02f5,IL_03f6,IL_0564,IL_0236,IL_04be,IL_045c,IL_03c0,IL_027b,IL_0223,IL_024f,IL_0166,IL_0014,IL_0590,IL_00f6,IL_02d3,IL_057d,IL_052b,IL_04ae,IL_014d,IL_01cb,IL_01b2,IL_03dd,IL_0495,IL_01de,IL_02ba,IL_0544,IL_03a7,IL_020a,IL_0475,IL_02a7,IL_05d5,IL_019f,IL_030e,IL_05bc,IL_0430,IL_037b,IL_0262)
	IL_00e2:                                                                        //ldarg.1
	IL_00e3:            if(A_0!=nullptr)goto IL_044e;                               //brtrue				IL_044e
	IL_00e8:                                                                        //ldc.i4				0x18
	IL_00ed:            V_1=24;                                                     //stloc				V_1
	IL_00f1:            /*goto IL_0019;*/goto IL_00f6;                              //br				IL_0019
	IL_00f6:            goto IL_02d8;                                               //br				IL_02d8
	IL_00fb:                                                                        //ldc.i4.5
	IL_00fc:                                                                        //dup
	IL_00fd:                                                                        //dup
	IL_00fe:                                                                        //ldc.i4.6
	IL_00ff:                                                                        //add
	IL_0100:                                                                        //bgt				IL_00fc
	IL_0105:                                                                        //pop
	IL_0106:                                                                        //ldc.i4				0x9
	IL_010b:            V_1=9;                                                      //stloc				V_1
	IL_010f:            /*goto IL_0019;*/goto IL_0114;                              //br				IL_0019
	IL_0114:                                                                        //ldarg.1
	IL_0115:                                                                        //isinst				Reflector::CodeModel::IContinueStatement
	IL_011a:            if(dynamic_cast<Reflector::CodeModel::IContinueStatement^>(A_0)==nullptr)goto IL_04b0;//brfalse				IL_04b0
	IL_011f:                                                                        //ldc.i4				0x5
	IL_0124:            V_1=5;                                                      //stloc				V_1
	IL_0128:            /*goto IL_0019;*/goto IL_012d;                              //br				IL_0019
	IL_012d:            goto IL_0601;                                               //br				IL_0601
	IL_0132:                                                                        //ldarg.0
	IL_0133:                                                                        //ldarg.1
	IL_0134:                                                                        //isinst				Reflector::CodeModel::IAttachEventStatement
	IL_0139:            Temp_17=this->M_x1(dynamic_cast<Reflector::CodeModel::IAttachEventStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IAttachEventStatement^)
	IL_013e:            return Temp_17;                                             //ret
	IL_013f:                                                                        //ldc.i4				0x1d
	IL_0144:            V_1=29;                                                     //stloc				V_1
	IL_0148:            /*goto IL_0019;*/goto IL_014d;                              //br				IL_0019
	IL_014d:                                                                        //ldarg.1
	IL_014e:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_0153:            if(dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(A_0)==nullptr)goto IL_0228;//brfalse				IL_0228
	IL_0158:                                                                        //ldc.i4				0x15
	IL_015d:            V_1=21;                                                     //stloc				V_1
	IL_0161:            /*goto IL_0019;*/goto IL_0166;                              //br				IL_0019
	IL_0166:            goto IL_03c2;                                               //br				IL_03c2
	IL_016b:                                                                        //ldarg.0
	IL_016c:                                                                        //ldarg.1
	IL_016d:                                                                        //isinst				Reflector::CodeModel::IUsingStatement
	IL_0172:            Temp_14=this->M_x1(dynamic_cast<Reflector::CodeModel::IUsingStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IUsingStatement^)
	IL_0177:            return Temp_14;                                             //ret
	IL_0178:                                                                        //ldc.i4				0x2
	IL_017d:            V_1=2;                                                      //stloc				V_1
	IL_0181:            /*goto IL_0019;*/goto IL_0186;                              //br				IL_0019
	IL_0186:                                                                        //ldarg.1
	IL_0187:                                                                        //isinst				Reflector::CodeModel::IConditionStatement
	IL_018c:            if(dynamic_cast<Reflector::CodeModel::IConditionStatement^>(A_0)==nullptr)goto IL_02e7;//brfalse				IL_02e7
	IL_0191:                                                                        //ldc.i4				0x2a
	IL_0196:            V_1=42;                                                     //stloc				V_1
	IL_019a:            /*goto IL_0019;*/goto IL_019f;                              //br				IL_0019
	IL_019f:            goto IL_0549;                                               //br				IL_0549
	IL_01a4:                                                                        //ldc.i4				0x1f
	IL_01a9:            V_1=31;                                                     //stloc				V_1
	IL_01ad:            /*goto IL_0019;*/goto IL_01b2;                              //br				IL_0019
	IL_01b2:                                                                        //ldarg.1
	IL_01b3:                                                                        //isinst				Reflector::CodeModel::IBreakStatement
	IL_01b8:            if(dynamic_cast<Reflector::CodeModel::IBreakStatement^>(A_0)==nullptr)goto IL_00fb;//brfalse				IL_00fb
	IL_01bd:                                                                        //ldc.i4				0x1e
	IL_01c2:            V_1=30;                                                     //stloc				V_1
	IL_01c6:            /*goto IL_0019;*/goto IL_01cb;                              //br				IL_0019
	IL_01cb:            goto IL_05da;                                               //br				IL_05da
	IL_01d0:                                                                        //ldc.i4				0x22
	IL_01d5:            V_1=34;                                                     //stloc				V_1
	IL_01d9:            /*goto IL_0019;*/goto IL_01de;                              //br				IL_0019
	IL_01de:                                                                        //ldarg.1
	IL_01df:                                                                        //isinst				Reflector::CodeModel::IMemoryCopyStatement
	IL_01e4:            if(dynamic_cast<Reflector::CodeModel::IMemoryCopyStatement^>(A_0)==nullptr)goto IL_0280;//brfalse				IL_0280
	IL_01e9:                                                                        //ldc.i4				0x6
	IL_01ee:            V_1=6;                                                      //stloc				V_1
	IL_01f2:            /*goto IL_0019;*/goto IL_01f7;                              //br				IL_0019
	IL_01f7:            goto IL_0510;                                               //br				IL_0510
	IL_01fc:                                                                        //ldc.i4				0x26
	IL_0201:            V_1=38;                                                     //stloc				V_1
	IL_0205:            /*goto IL_0019;*/goto IL_020a;                              //br				IL_0019
	IL_020a:                                                                        //ldarg.1
	IL_020b:                                                                        //isinst				Reflector::CodeModel::IAttachEventStatement
	IL_0210:            if(dynamic_cast<Reflector::CodeModel::IAttachEventStatement^>(A_0)==nullptr)goto IL_0422;//brfalse				IL_0422
	IL_0215:                                                                        //ldc.i4				0x13
	IL_021a:            V_1=19;                                                     //stloc				V_1
	IL_021e:            /*goto IL_0019;*/goto IL_0223;                              //br				IL_0019
	IL_0223:            goto IL_0132;                                               //br				IL_0132
	IL_0228:                                                                        //ldc.i4				0xe
	IL_022d:            V_1=14;                                                     //stloc				V_1
	IL_0231:            /*goto IL_0019;*/goto IL_0236;                              //br				IL_0019
	IL_0236:                                                                        //ldarg.1
	IL_0237:                                                                        //isinst				Reflector::CodeModel::IGotoStatement
	IL_023c:            if(dynamic_cast<Reflector::CodeModel::IGotoStatement^>(A_0)==nullptr)goto IL_0310;//brfalse				IL_0310
	IL_0241:                                                                        //ldc.i4				0x14
	IL_0246:            V_1=20;                                                     //stloc				V_1
	IL_024a:            /*goto IL_0019;*/goto IL_024f;                              //br				IL_0019
	IL_024f:            goto IL_0408;                                               //br				IL_0408
	IL_0254:                                                                        //ldc.i4				0x2f
	IL_0259:            V_1=47;                                                     //stloc				V_1
	IL_025d:            /*goto IL_0019;*/goto IL_0262;                              //br				IL_0019
	IL_0262:                                                                        //ldarg.1
	IL_0263:                                                                        //isinst				Reflector::CodeModel::ILockStatement
	IL_0268:            if(dynamic_cast<Reflector::CodeModel::ILockStatement^>(A_0)==nullptr)goto IL_01d0;//brfalse				IL_01d0
	IL_026d:                                                                        //ldc.i4				0x12
	IL_0272:            V_1=18;                                                     //stloc				V_1
	IL_0276:            /*goto IL_0019;*/goto IL_027b;                              //br				IL_0019
	IL_027b:            goto IL_04e9;                                               //br				IL_04e9
	IL_0280:                                                                        //ldc.i4				0xa
	IL_0285:            V_1=10;                                                     //stloc				V_1
	IL_0289:            /*goto IL_0019;*/goto IL_028e;                              //br				IL_0019
	IL_028e:                                                                        //ldarg.1
	IL_028f:                                                                        //isinst				Reflector::CodeModel::IMemoryInitializeStatement
	IL_0294:            if(dynamic_cast<Reflector::CodeModel::IMemoryInitializeStatement^>(A_0)==nullptr)goto IL_061b;//brfalse				IL_061b
	IL_0299:                                                                        //ldc.i4				0x28
	IL_029e:            V_1=40;                                                     //stloc				V_1
	IL_02a2:            /*goto IL_0019;*/goto IL_02a7;                              //br				IL_0019
	IL_02a7:            goto IL_05f4;                                               //br				IL_05f4
	IL_02ac:                                                                        //ldc.i4				0x23
	IL_02b1:            V_1=35;                                                     //stloc				V_1
	IL_02b5:            /*goto IL_0019;*/goto IL_02ba;                              //br				IL_0019
	IL_02ba:                                                                        //ldarg.1
	IL_02bb:                                                                        //isinst				Reflector::CodeModel::IDoStatement
	IL_02c0:            if(dynamic_cast<Reflector::CodeModel::IDoStatement^>(A_0)==nullptr)goto IL_0487;//brfalse				IL_0487
	IL_02c5:                                                                        //ldc.i4				0x19
	IL_02ca:            V_1=25;                                                     //stloc				V_1
	IL_02ce:            /*goto IL_0019;*/goto IL_02d3;                              //br				IL_0019
	IL_02d3:            goto IL_0360;                                               //br				IL_0360
	IL_02d8:                                                                        //ldnull
	IL_02d9:            return nullptr;                                             //ret
	IL_02da:                                                                        //ldarg.0
	IL_02db:                                                                        //ldarg.1
	IL_02dc:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_02e1:            Temp_29=this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnStatement^)
	IL_02e6:            return Temp_29;                                             //ret
	IL_02e7:                                                                        //ldc.i4				0xb
	IL_02ec:            V_1=11;                                                     //stloc				V_1
	IL_02f0:            /*goto IL_0019;*/goto IL_02f5;                              //br				IL_0019
	IL_02f5:                                                                        //ldarg.1
	IL_02f6:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_02fb:            if(dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0)==nullptr)goto IL_013f;//brfalse				IL_013f
	IL_0300:                                                                        //ldc.i4				0x2b
	IL_0305:            V_1=43;                                                     //stloc				V_1
	IL_0309:            /*goto IL_0019;*/goto IL_030e;                              //br				IL_0019
	IL_030e:            goto IL_02da;                                               //br.s				IL_02da
	IL_0310:                                                                        //ldc.i4				0x3
	IL_0315:            V_1=3;                                                      //stloc				V_1
	IL_0319:            /*goto IL_0019;*/goto IL_031e;                              //br				IL_0019
	IL_031e:                                                                        //ldarg.1
	IL_031f:                                                                        //isinst				Reflector::CodeModel::IForStatement
	IL_0324:            if(dynamic_cast<Reflector::CodeModel::IForStatement^>(A_0)==nullptr)goto IL_0399;//brfalse.s				IL_0399
	IL_0326:                                                                        //ldc.i4				0x7
	IL_032b:            V_1=7;                                                      //stloc				V_1
	IL_032f:            /*goto IL_0019;*/goto IL_0334;                              //br				IL_0019
	IL_0334:            goto IL_03fb;                                               //br				IL_03fb
	IL_0339:                                                                        //ldarg.0
	IL_033a:                                                                        //ldarg.1
	IL_033b:                                                                        //isinst				Reflector::CodeModel::IFixedStatement
	IL_0340:            Temp_21=this->M_x1(dynamic_cast<Reflector::CodeModel::IFixedStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IFixedStatement^)
	IL_0345:            return Temp_21;                                             //ret
	IL_0346:                                                                        //ldarg.0
	IL_0347:                                                                        //ldarg.1
	IL_0348:                                                                        //isinst				Reflector::CodeModel::ICommentStatement
	IL_034d:            Temp_0=this->M_x1(dynamic_cast<Reflector::CodeModel::ICommentStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ICommentStatement^)
	IL_0352:            return Temp_0;                                              //ret
	IL_0353:                                                                        //ldarg.0
	IL_0354:                                                                        //ldarg.1
	IL_0355:                                                                        //isinst				Reflector::CodeModel::IWhileStatement
	IL_035a:            Temp_24=this->M_x1(dynamic_cast<Reflector::CodeModel::IWhileStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IWhileStatement^)
	IL_035f:            return Temp_24;                                             //ret
	IL_0360:                                                                        //ldarg.0
	IL_0361:                                                                        //ldarg.1
	IL_0362:                                                                        //isinst				Reflector::CodeModel::IDoStatement
	IL_0367:            Temp_20=this->M_x1(dynamic_cast<Reflector::CodeModel::IDoStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IDoStatement^)
	IL_036c:            return Temp_20;                                             //ret
	IL_036d:                                                                        //ldc.i4				0x2e
	IL_0372:            V_1=46;                                                     //stloc				V_1
	IL_0376:            /*goto IL_0019;*/goto IL_037b;                              //br				IL_0019
	IL_037b:                                                                        //ldarg.1
	IL_037c:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_0381:            if(dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(A_0)==nullptr)goto IL_01a4;//brfalse				IL_01a4
	IL_0386:                                                                        //ldc.i4				0x8
	IL_038b:            V_1=8;                                                      //stloc				V_1
	IL_038f:            /*goto IL_0019;*/goto IL_0394;                              //br				IL_0019
	IL_0394:            goto IL_060e;                                               //br				IL_060e
	IL_0399:                                                                        //ldc.i4				0x25
	IL_039e:            V_1=37;                                                     //stloc				V_1
	IL_03a2:            /*goto IL_0019;*/goto IL_03a7;                              //br				IL_0019
	IL_03a7:                                                                        //ldarg.1
	IL_03a8:                                                                        //isinst				Reflector::CodeModel::IForEachStatement
	IL_03ad:            if(dynamic_cast<Reflector::CodeModel::IForEachStatement^>(A_0)==nullptr)goto IL_051d;//brfalse				IL_051d
	IL_03b2:                                                                        //ldc.i4				0x11
	IL_03b7:            V_1=17;                                                     //stloc				V_1
	IL_03bb:            /*goto IL_0019;*/goto IL_03c0;                              //br				IL_0019
	IL_03c0:            goto IL_0415;                                               //br.s				IL_0415
	IL_03c2:                                                                        //ldarg.0
	IL_03c3:                                                                        //ldarg.1
	IL_03c4:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_03c9:            Temp_19=this->M_x1(dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ILabeledStatement^)
	IL_03ce:            return Temp_19;                                             //ret
	IL_03cf:                                                                        //ldc.i4				0x20
	IL_03d4:            V_1=32;                                                     //stloc				V_1
	IL_03d8:            /*goto IL_0019;*/goto IL_03dd;                              //br				IL_0019
	IL_03dd:                                                                        //ldarg.1
	IL_03de:                                                                        //isinst				Reflector::CodeModel::IUsingStatement
	IL_03e3:            if(dynamic_cast<Reflector::CodeModel::IUsingStatement^>(A_0)==nullptr)goto IL_0556;//brfalse				IL_0556
	IL_03e8:                                                                        //ldc.i4				0xc
	IL_03ed:            V_1=12;                                                     //stloc				V_1
	IL_03f1:            /*goto IL_0019;*/goto IL_03f6;                              //br				IL_0019
	IL_03f6:            goto IL_016b;                                               //br				IL_016b
	IL_03fb:                                                                        //ldarg.0
	IL_03fc:                                                                        //ldarg.1
	IL_03fd:                                                                        //isinst				Reflector::CodeModel::IForStatement
	IL_0402:            Temp_5=this->M_x1(dynamic_cast<Reflector::CodeModel::IForStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IForStatement^)
	IL_0407:            return Temp_5;                                              //ret
	IL_0408:                                                                        //ldarg.0
	IL_0409:                                                                        //ldarg.1
	IL_040a:                                                                        //isinst				Reflector::CodeModel::IGotoStatement
	IL_040f:            Temp_18=this->M_x1(dynamic_cast<Reflector::CodeModel::IGotoStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IGotoStatement^)
	IL_0414:            return Temp_18;                                             //ret
	IL_0415:                                                                        //ldarg.0
	IL_0416:                                                                        //ldarg.1
	IL_0417:                                                                        //isinst				Reflector::CodeModel::IForEachStatement
	IL_041c:            Temp_15=this->M_x1(dynamic_cast<Reflector::CodeModel::IForEachStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IForEachStatement^)
	IL_0421:            return Temp_15;                                             //ret
	IL_0422:                                                                        //ldc.i4				0x2d
	IL_0427:            V_1=45;                                                     //stloc				V_1
	IL_042b:            /*goto IL_0019;*/goto IL_0430;                              //br				IL_0019
	IL_0430:                                                                        //ldarg.1
	IL_0431:                                                                        //isinst				Reflector::CodeModel::IRemoveEventStatement
	IL_0436:            if(dynamic_cast<Reflector::CodeModel::IRemoveEventStatement^>(A_0)==nullptr)goto IL_036d;//brfalse				IL_036d
	IL_043b:                                                                        //ldc.i4				0x4
	IL_0440:            V_1=4;                                                      //stloc				V_1
	IL_0444:            /*goto IL_0019;*/goto IL_0449;                              //br				IL_0019
	IL_0449:            goto IL_05e7;                                               //br				IL_05e7
	IL_044e:                                                                        //ldc.i4				0x10
	IL_0453:            V_1=16;                                                     //stloc				V_1
	IL_0457:            /*goto IL_0019;*/goto IL_045c;                              //br				IL_0019
	IL_045c:                                                                        //ldarg.1
	IL_045d:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_0462:            if(dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0)==nullptr)goto IL_0582;//brfalse				IL_0582
	IL_0467:                                                                        //ldc.i4				0x27
	IL_046c:            V_1=39;                                                     //stloc				V_1
	IL_0470:            /*goto IL_0019;*/goto IL_0475;                              //br				IL_0019
	IL_0475:            goto IL_0503;                                               //br				IL_0503
	IL_047a:                                                                        //ldarg.0
	IL_047b:                                                                        //ldarg.1
	IL_047c:                                                                        //isinst				Reflector::CodeModel::IThrowExceptionStatement
	IL_0481:            Temp_27=this->M_x1(dynamic_cast<Reflector::CodeModel::IThrowExceptionStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IThrowExceptionStatement^)
	IL_0486:            return Temp_27;                                             //ret
	IL_0487:                                                                        //ldc.i4				0x21
	IL_048c:            V_1=33;                                                     //stloc				V_1
	IL_0490:            /*goto IL_0019;*/goto IL_0495;                              //br				IL_0019
	IL_0495:                                                                        //ldarg.1
	IL_0496:                                                                        //isinst				Reflector::CodeModel::ITryCatchFinallyStatement
	IL_049b:            if(dynamic_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(A_0)==nullptr)goto IL_05ae;//brfalse				IL_05ae
	IL_04a0:                                                                        //ldc.i4				0x1c
	IL_04a5:            V_1=28;                                                     //stloc				V_1
	IL_04a9:            /*goto IL_0019;*/goto IL_04ae;                              //br				IL_0019
	IL_04ae:            goto IL_04dc;                                               //br.s				IL_04dc
	IL_04b0:                                                                        //ldc.i4				0xf
	IL_04b5:            V_1=15;                                                     //stloc				V_1
	IL_04b9:            /*goto IL_0019;*/goto IL_04be;                              //br				IL_0019
	IL_04be:                                                                        //ldarg.1
	IL_04bf:                                                                        //isinst				Reflector::CodeModel::ICommentStatement
	IL_04c4:            if(dynamic_cast<Reflector::CodeModel::ICommentStatement^>(A_0)==nullptr)goto IL_03cf;//brfalse				IL_03cf
	IL_04c9:                                                                        //ldc.i4				0x0
	IL_04ce:            V_1=0;                                                      //stloc				V_1
	IL_04d2:            /*goto IL_0019;*/goto IL_04d7;                              //br				IL_0019
	IL_04d7:            goto IL_0346;                                               //br				IL_0346
	IL_04dc:                                                                        //ldarg.0
	IL_04dd:                                                                        //ldarg.1
	IL_04de:                                                                        //isinst				Reflector::CodeModel::ITryCatchFinallyStatement
	IL_04e3:            Temp_22=this->M_x1(dynamic_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^)
	IL_04e8:            return Temp_22;                                             //ret
	IL_04e9:                                                                        //ldarg.0
	IL_04ea:                                                                        //ldarg.1
	IL_04eb:                                                                        //isinst				Reflector::CodeModel::ILockStatement
	IL_04f0:            Temp_16=this->M_x1(dynamic_cast<Reflector::CodeModel::ILockStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ILockStatement^)
	IL_04f5:            return Temp_16;                                             //ret
	IL_04f6:                                                                        //ldarg.0
	IL_04f7:                                                                        //ldarg.1
	IL_04f8:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_04fd:            Temp_1=this->M_x1(dynamic_cast<Reflector::CodeModel::IBlockStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0502:            return Temp_1;                                              //ret
	IL_0503:                                                                        //ldarg.0
	IL_0504:                                                                        //ldarg.1
	IL_0505:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_050a:            Temp_25=this->M_x1(dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IExpressionStatement^)
	IL_050f:            return Temp_25;                                             //ret
	IL_0510:                                                                        //ldarg.0
	IL_0511:                                                                        //ldarg.1
	IL_0512:                                                                        //isinst				Reflector::CodeModel::IMemoryCopyStatement
	IL_0517:            Temp_4=this->M_x1(dynamic_cast<Reflector::CodeModel::IMemoryCopyStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMemoryCopyStatement^)
	IL_051c:            return Temp_4;                                              //ret
	IL_051d:                                                                        //ldc.i4				0x1b
	IL_0522:            V_1=27;                                                     //stloc				V_1
	IL_0526:            /*goto IL_0019;*/goto IL_052b;                              //br				IL_0019
	IL_052b:                                                                        //ldarg.1
	IL_052c:                                                                        //isinst				Reflector::CodeModel::IWhileStatement
	IL_0531:            if(dynamic_cast<Reflector::CodeModel::IWhileStatement^>(A_0)==nullptr)goto IL_02ac;//brfalse				IL_02ac
	IL_0536:                                                                        //ldc.i4				0x24
	IL_053b:            V_1=36;                                                     //stloc				V_1
	IL_053f:            /*goto IL_0019;*/goto IL_0544;                              //br				IL_0019
	IL_0544:            goto IL_0353;                                               //br				IL_0353
	IL_0549:                                                                        //ldarg.0
	IL_054a:                                                                        //ldarg.1
	IL_054b:                                                                        //isinst				Reflector::CodeModel::IConditionStatement
	IL_0550:            Temp_28=this->M_x1(dynamic_cast<Reflector::CodeModel::IConditionStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionStatement^)
	IL_0555:            return Temp_28;                                             //ret
	IL_0556:                                                                        //ldc.i4				0xd
	IL_055b:            V_1=13;                                                     //stloc				V_1
	IL_055f:            /*goto IL_0019;*/goto IL_0564;                              //br				IL_0019
	IL_0564:                                                                        //ldarg.1
	IL_0565:                                                                        //isinst				Reflector::CodeModel::IFixedStatement
	IL_056a:            if(dynamic_cast<Reflector::CodeModel::IFixedStatement^>(A_0)==nullptr)goto IL_0254;//brfalse				IL_0254
	IL_056f:                                                                        //ldc.i4				0x1a
	IL_0574:            V_1=26;                                                     //stloc				V_1
	IL_0578:            /*goto IL_0019;*/goto IL_057d;                              //br				IL_0019
	IL_057d:            goto IL_0339;                                               //br				IL_0339
	IL_0582:                                                                        //ldc.i4				0x17
	IL_0587:            V_1=23;                                                     //stloc				V_1
	IL_058b:            /*goto IL_0019;*/goto IL_0590;                              //br				IL_0019
	IL_0590:                                                                        //ldarg.1
	IL_0591:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_0596:            if(dynamic_cast<Reflector::CodeModel::IBlockStatement^>(A_0)==nullptr)goto IL_0178;//brfalse				IL_0178
	IL_059b:                                                                        //ldc.i4				0x1
	IL_05a0:            V_1=1;                                                      //stloc				V_1
	IL_05a4:            /*goto IL_0019;*/goto IL_05a9;                              //br				IL_0019
	IL_05a9:            goto IL_04f6;                                               //br				IL_04f6
	IL_05ae:                                                                        //ldc.i4				0x2c
	IL_05b3:            V_1=44;                                                     //stloc				V_1
	IL_05b7:            /*goto IL_0019;*/goto IL_05bc;                              //br				IL_0019
	IL_05bc:                                                                        //ldarg.1
	IL_05bd:                                                                        //isinst				Reflector::CodeModel::IThrowExceptionStatement
	IL_05c2:            if(dynamic_cast<Reflector::CodeModel::IThrowExceptionStatement^>(A_0)==nullptr)goto IL_01fc;//brfalse				IL_01fc
	IL_05c7:                                                                        //ldc.i4				0x29
	IL_05cc:            V_1=41;                                                     //stloc				V_1
	IL_05d0:            /*goto IL_0019;*/goto IL_05d5;                              //br				IL_0019
	IL_05d5:            goto IL_047a;                                               //br				IL_047a
	IL_05da:                                                                        //ldarg.0
	IL_05db:                                                                        //ldarg.1
	IL_05dc:                                                                        //isinst				Reflector::CodeModel::IBreakStatement
	IL_05e1:            Temp_23=this->M_x1(dynamic_cast<Reflector::CodeModel::IBreakStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBreakStatement^)
	IL_05e6:            return Temp_23;                                             //ret
	IL_05e7:                                                                        //ldarg.0
	IL_05e8:                                                                        //ldarg.1
	IL_05e9:                                                                        //isinst				Reflector::CodeModel::IRemoveEventStatement
	IL_05ee:            Temp_2=this->M_x1(dynamic_cast<Reflector::CodeModel::IRemoveEventStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IRemoveEventStatement^)
	IL_05f3:            return Temp_2;                                              //ret
	IL_05f4:                                                                        //ldarg.0
	IL_05f5:                                                                        //ldarg.1
	IL_05f6:                                                                        //isinst				Reflector::CodeModel::IMemoryInitializeStatement
	IL_05fb:            Temp_26=this->M_x1(dynamic_cast<Reflector::CodeModel::IMemoryInitializeStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IMemoryInitializeStatement^)
	IL_0600:            return Temp_26;                                             //ret
	IL_0601:                                                                        //ldarg.0
	IL_0602:                                                                        //ldarg.1
	IL_0603:                                                                        //isinst				Reflector::CodeModel::IContinueStatement
	IL_0608:            Temp_3=this->M_x1(dynamic_cast<Reflector::CodeModel::IContinueStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IContinueStatement^)
	IL_060d:            return Temp_3;                                              //ret
	IL_060e:                                                                        //ldarg.0
	IL_060f:                                                                        //ldarg.1
	IL_0610:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_0615:            Temp_6=this->M_x1(dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(A_0));//callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::ISwitchStatement^)
	IL_061a:            return Temp_6;                                              //ret
	IL_061b:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0620:                                                                        //ldstr				L"\x6329\x422B\x582D\x512F\x5E31\x5D33\x5235\x1837\x4939\x483B\x5F3D\x343F\x2741\x2943\x2345\x2647\x3E49\x6C4B\x3A4D\x294F\x2251\x3153\x7655\x7F57\x2159\x6C5B\x235D\x475F\x4C61"
	IL_0625:                                                                        //ldloc				V_2
	IL_0629:            Temp_8=a(L"\x6329\x422B\x582D\x512F\x5E31\x5D33\x5235\x1837\x4939\x483B\x5F3D\x343F\x2741\x2943\x2345\x2647\x3E49\x6C4B\x3A4D\x294F\x2251\x3153\x7655\x7F57\x2159\x6C5B\x235D\x475F\x4C61",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062e:                                                                        //ldc.i4.1
	IL_062f:            Temp_9=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0634:            V_0=Temp_9;                                                 //stloc.0
	IL_0635:                                                                        //ldloc.0
	IL_0636:                                                                        //ldc.i4.0
	IL_0637:                                                                        //ldarg.1
	IL_0638:            Temp_10=A_0->GetType();                                     //callvirt				System::Type^ System::Object::GetType()
	IL_063d:            Temp_11=Temp_10->Name;                                      //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0642:            V_0[0]=safe_cast<System::Object^>(Temp_11);                 //stelem.ref
	IL_0643:                                                                        //ldloc.0
	IL_0644:            Temp_12=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_7),Temp_8,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0649:            Temp_13=gcnew System::NotSupportedException(Temp_12);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_064e:            throw Temp_13;                                              //throw

}
inline Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::Object^>^ Temp_9 = nullptr;
	System::Type^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::NotSupportedException^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_14 = nullptr;
	Reflector::CodeModel::IType^ Temp_15 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IArrayType^ V_1 = nullptr;
	Reflector::CodeModel::IPointerType^ V_2 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_3 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_4 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_5 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_6 = nullptr;
	Reflector::CodeModel::IGenericParameter^ V_7 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_8 = nullptr;
	array<System::Object^>^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_11=5;                                                     //stloc				V_11
	IL_0009:                                                                        //ldc.i4				0xa
	IL_000e:            V_10=10;                                                    //stloc				V_10
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_006f;                                               //br.s				IL_006f
	IL_0016:                                                                        //ldloc				V_10
	IL_001a:            switch(V_10){case 0:goto IL_01e5;case 1:goto IL_0080;case 2:goto IL_01bd;case 3:goto IL_0152;case 4:goto IL_016a;case 5:goto IL_01ce;case 6:goto IL_017f;case 7:goto IL_0227;case 8:goto IL_00ad;case 9:goto IL_0114;case 10:goto IL_0014;case 11:goto IL_0213;case 12:goto IL_00ff;case 13:goto IL_00d0;case 14:goto IL_025d;case 15:goto IL_009b;case 16:goto IL_013d;case 17:goto IL_01f9;case 18:goto IL_0248;case 19:goto IL_00e4;};//switch				(IL_01e5,IL_0080,IL_01bd,IL_0152,IL_016a,IL_01ce,IL_017f,IL_0227,IL_00ad,IL_0114,IL_0014,IL_0213,IL_00ff,IL_00d0,IL_025d,IL_009b,IL_013d,IL_01f9,IL_0248,IL_00e4)
	IL_006f:                                                                        //ldarg.1
	IL_0070:            if(A_0!=nullptr)goto IL_01d0;                               //brtrue				IL_01d0
	IL_0075:                                                                        //ldc.i4				0x1
	IL_007a:            V_10=1;                                                     //stloc				V_10
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:            goto IL_01a6;                                               //br				IL_01a6
	IL_0085:                                                                        //ldarg.1
	IL_0086:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_008b:            V_6=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_6
	IL_008d:                                                                        //ldc.i4				0xf
	IL_0092:            V_10=15;                                                    //stloc				V_10
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:                                                                        //ldloc.s				V_6
	IL_009d:            if(V_6==nullptr)goto IL_00e9;                               //brfalse.s				IL_00e9
	IL_009f:                                                                        //ldc.i4				0x8
	IL_00a4:            V_10=8;                                                     //stloc				V_10
	IL_00a8:            /*goto IL_0016;*/goto IL_00ad;                              //br				IL_0016
	IL_00ad:            goto IL_0229;                                               //br				IL_0229
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:                                                                        //ldloc.s				V_4
	IL_00b5:            Temp_2=this->M_x1(V_4);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IOptionalModifier^)
	IL_00ba:            return Temp_2;                                              //ret
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_00c1:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.1
	IL_00c2:                                                                        //ldc.i4				0xd
	IL_00c7:            V_10=13;                                                    //stloc				V_10
	IL_00cb:            /*goto IL_0016;*/goto IL_00d0;                              //br				IL_0016
	IL_00d0:                                                                        //ldloc.1
	IL_00d1:            if(V_1==nullptr)goto IL_01a8;                               //brfalse				IL_01a8
	IL_00d6:                                                                        //ldc.i4				0x13
	IL_00db:            V_10=19;                                                    //stloc				V_10
	IL_00df:            /*goto IL_0016;*/goto IL_00e4;                              //br				IL_0016
	IL_00e4:            goto IL_0184;                                               //br				IL_0184
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_00ef:            V_7=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(A_0);//stloc.s				V_7
	IL_00f1:                                                                        //ldc.i4				0xc
	IL_00f6:            V_10=12;                                                    //stloc				V_10
	IL_00fa:            /*goto IL_0016;*/goto IL_00ff;                              //br				IL_0016
	IL_00ff:            goto IL_0102;                                               //br.s				IL_0102
	IL_0101:                                                                        //break
	IL_0102:                                                                        //ldloc.s				V_7
	IL_0104:            if(V_7==nullptr)goto IL_0127;                               //brfalse.s				IL_0127
	IL_0106:                                                                        //ldc.i4				0x9
	IL_010b:            V_10=9;                                                     //stloc				V_10
	IL_010f:            /*goto IL_0016;*/goto IL_0114;                              //br				IL_0016
	IL_0114:            goto IL_018c;                                               //br.s				IL_018c
	IL_0116:                                                                        //ldarg.0
	IL_0117:                                                                        //ldloc.0
	IL_0118:            Temp_14=this->M_x1(V_0);                                    //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_011d:            return safe_cast<Reflector::CodeModel::IType^>(Temp_14);    //ret
	IL_011e:                                                                        //ldarg.0
	IL_011f:                                                                        //ldloc.s				V_5
	IL_0121:            Temp_6=this->M_x1(V_5);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IRequiredModifier^)
	IL_0126:            return Temp_6;                                              //ret
	IL_0127:                                                                        //ldarg.1
	IL_0128:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_012d:            V_8=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_0);//stloc.s				V_8
	IL_012f:                                                                        //ldc.i4				0x10
	IL_0134:            V_10=16;                                                    //stloc				V_10
	IL_0138:            /*goto IL_0016;*/goto IL_013d;                              //br				IL_0016
	IL_013d:                                                                        //ldloc.s				V_8
	IL_013f:            if(V_8==nullptr)goto IL_026a;                               //brfalse				IL_026a
	IL_0144:                                                                        //ldc.i4				0x3
	IL_0149:            V_10=3;                                                     //stloc				V_10
	IL_014d:            /*goto IL_0016;*/goto IL_0152;                              //br				IL_0016
	IL_0152:            goto IL_0195;                                               //br.s				IL_0195
	IL_0154:                                                                        //ldarg.1
	IL_0155:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_015a:            V_4=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_4
	IL_015c:                                                                        //ldc.i4				0x4
	IL_0161:            V_10=4;                                                     //stloc				V_10
	IL_0165:            /*goto IL_0016;*/goto IL_016a;                              //br				IL_0016
	IL_016a:                                                                        //ldloc.s				V_4
	IL_016c:            if(V_4==nullptr)goto IL_0232;                               //brfalse				IL_0232
	IL_0171:                                                                        //ldc.i4				0x6
	IL_0176:            V_10=6;                                                     //stloc				V_10
	IL_017a:            /*goto IL_0016;*/goto IL_017f;                              //br				IL_0016
	IL_017f:            goto IL_00b2;                                               //br				IL_00b2
	IL_0184:                                                                        //ldarg.0
	IL_0185:                                                                        //ldloc.1
	IL_0186:            Temp_15=this->M_x1(V_1);                                    //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayType^)
	IL_018b:            return Temp_15;                                             //ret
	IL_018c:                                                                        //ldarg.0
	IL_018d:                                                                        //ldloc.s				V_7
	IL_018f:            Temp_5=this->M_x1(V_7);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericParameter^)
	IL_0194:            return Temp_5;                                              //ret
	IL_0195:                                                                        //ldarg.0
	IL_0196:                                                                        //ldloc.s				V_8
	IL_0198:            Temp_0=this->M_x1(V_8);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericArgument^)
	IL_019d:            return Temp_0;                                              //ret
	IL_019e:                                                                        //ldarg.0
	IL_019f:                                                                        //ldloc.2
	IL_01a0:            Temp_1=this->M_x1(V_2);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IPointerType^)
	IL_01a5:            return Temp_1;                                              //ret
	IL_01a6:                                                                        //ldnull
	IL_01a7:            return nullptr;                                             //ret
	IL_01a8:                                                                        //ldarg.1
	IL_01a9:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_01ae:            V_2=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.2
	IL_01af:                                                                        //ldc.i4				0x2
	IL_01b4:            V_10=2;                                                     //stloc				V_10
	IL_01b8:            /*goto IL_0016;*/goto IL_01bd;                              //br				IL_0016
	IL_01bd:                                                                        //ldloc.2
	IL_01be:            if(V_2==nullptr)goto IL_01fe;                               //brfalse.s				IL_01fe
	IL_01c0:                                                                        //ldc.i4				0x5
	IL_01c5:            V_10=5;                                                     //stloc				V_10
	IL_01c9:            /*goto IL_0016;*/goto IL_01ce;                              //br				IL_0016
	IL_01ce:            goto IL_019e;                                               //br.s				IL_019e
	IL_01d0:                                                                        //ldarg.1
	IL_01d1:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01d6:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_01d7:                                                                        //ldc.i4				0x0
	IL_01dc:            V_10=0;                                                     //stloc				V_10
	IL_01e0:            /*goto IL_0016;*/goto IL_01e5;                              //br				IL_0016
	IL_01e5:                                                                        //ldloc.0
	IL_01e6:            if(V_0==nullptr)goto IL_00bb;                               //brfalse				IL_00bb
	IL_01eb:                                                                        //ldc.i4				0x11
	IL_01f0:            V_10=17;                                                    //stloc				V_10
	IL_01f4:            /*goto IL_0016;*/goto IL_01f9;                              //br				IL_0016
	IL_01f9:            goto IL_0116;                                               //br				IL_0116
	IL_01fe:                                                                        //ldarg.1
	IL_01ff:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_0204:            V_3=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.3
	IL_0205:                                                                        //ldc.i4				0xb
	IL_020a:            V_10=11;                                                    //stloc				V_10
	IL_020e:            /*goto IL_0016;*/goto IL_0213;                              //br				IL_0016
	IL_0213:                                                                        //ldloc.3
	IL_0214:            if(V_3==nullptr)goto IL_0154;                               //brfalse				IL_0154
	IL_0219:                                                                        //ldc.i4				0x7
	IL_021e:            V_10=7;                                                     //stloc				V_10
	IL_0222:            /*goto IL_0016;*/goto IL_0227;                              //br				IL_0016
	IL_0227:            goto IL_0262;                                               //br.s				IL_0262
	IL_0229:                                                                        //ldarg.0
	IL_022a:                                                                        //ldloc.s				V_6
	IL_022c:            Temp_4=this->M_x1(V_6);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IFunctionPointer^)
	IL_0231:            return Temp_4;                                              //ret
	IL_0232:                                                                        //ldarg.1
	IL_0233:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0238:            V_5=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_5
	IL_023a:                                                                        //ldc.i4				0x12
	IL_023f:            V_10=18;                                                    //stloc				V_10
	IL_0243:            /*goto IL_0016;*/goto IL_0248;                              //br				IL_0016
	IL_0248:                                                                        //ldloc.s				V_5
	IL_024a:            if(V_5==nullptr)goto IL_0085;                               //brfalse				IL_0085
	IL_024f:                                                                        //ldc.i4				0xe
	IL_0254:            V_10=14;                                                    //stloc				V_10
	IL_0258:            /*goto IL_0016;*/goto IL_025d;                              //br				IL_0016
	IL_025d:            goto IL_011e;                                               //br				IL_011e
	IL_0262:                                                                        //ldarg.0
	IL_0263:                                                                        //ldloc.3
	IL_0264:            Temp_3=this->M_x1(V_3);                                     //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x1(Reflector::CodeModel::IReferenceType^)
	IL_0269:            return Temp_3;                                              //ret
	IL_026a:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_026f:                                                                        //ldstr				L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x4732\x4C34\x4736\x5C38\x1B3A\x1A3C\x443E\x7140\x3E42\x6244\x6946"
	IL_0274:                                                                        //ldloc				V_11
	IL_0278:            Temp_8=a(L"\x6A22\x4B24\x5126\x4828\x472A\x442C\x4B2E\x1130\x4732\x4C34\x4736\x5C38\x1B3A\x1A3C\x443E\x7140\x3E42\x6244\x6946",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027d:                                                                        //ldc.i4.1
	IL_027e:            Temp_9=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0283:            V_9=Temp_9;                                                 //stloc.s				V_9
	IL_0285:                                                                        //ldloc.s				V_9
	IL_0287:                                                                        //ldc.i4.0
	IL_0288:                                                                        //ldarg.1
	IL_0289:            Temp_10=A_0->GetType();                                     //callvirt				System::Type^ System::Object::GetType()
	IL_028e:            Temp_11=Temp_10->Name;                                      //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0293:            V_9[0]=safe_cast<System::Object^>(Temp_11);                 //stelem.ref
	IL_0294:                                                                        //ldloc.s				V_9
	IL_0296:            Temp_12=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_7),Temp_8,V_9);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_029b:            Temp_13=gcnew System::NotSupportedException(Temp_12);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_02a0:            throw Temp_13;                                              //throw

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x129::M_x2(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::ICatchClauseCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICatchClauseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::ICatchClause^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ICatchClause^ Temp_3 = nullptr;
	Reflector::CodeModel::ICatchClause^ Temp_4 = nullptr;
	Reflector::CodeModel::Memory::CatchClauseCollection^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICatchClause^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ICatchClauseCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0040;case 1:goto IL_004d;case 2:goto IL_0082;case 3:goto IL_0061;};//switch				(IL_0040,IL_004d,IL_0082,IL_0061)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::ICatchClause^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::ICatchClause
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:                                                                        //dup
	IL_002c:                                                                        //dup
	IL_002d:                                                                        //ldc.i4.6
	IL_002e:                                                                        //add
	IL_002f:                                                                        //bgt				IL_002b
	IL_0034:                                                                        //pop
	IL_0035:                                                                        //ldc.i4				0x0
	IL_003a:            V_3=0;                                                      //stloc				V_3
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldc.i4				0x1
	IL_0047:            V_3=1;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldloc.1
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_2=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0054:            if(V_1<Temp_2)goto IL_0063;                                 //blt.s				IL_0063
	IL_0056:                                                                        //ldc.i4				0x3
	IL_005b:            V_3=3;                                                      //stloc				V_3
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0084;                                               //br.s				IL_0084
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_3=A_0[V_1];                                            //callvirt				Reflector::CodeModel::ICatchClause^ Reflector::CodeModel::ICatchClauseCollection::get_Item(System::Int32)
	IL_006d:            Temp_4=this->M_x1(Temp_3);                                  //callvirt				Reflector::CodeModel::ICatchClause^ Root::T_x129::M_x1(Reflector::CodeModel::ICatchClause^)
	IL_0072:            V_0[V_1]=Temp_4;                                            //stelem.ref
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //add
	IL_0076:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0077:                                                                        //ldc.i4				0x2
	IL_007c:            V_3=2;                                                      //stloc				V_3
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0042;                                               //br.s				IL_0042
	IL_0084:            Temp_5=gcnew Reflector::CodeModel::Memory::CatchClauseCollection();//newobj				void Reflector::CodeModel::Memory::CatchClauseCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::ICatchClauseCollection^>(Temp_5);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::ICatchClauseCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::CustomAttributeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::ICustomAttribute^ Temp_4 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ICustomAttributeCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0077;case 1:goto IL_0035;case 2:goto IL_0056;case 3:goto IL_0042;};//switch				(IL_0077,IL_0035,IL_0056,IL_0042)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x3
	IL_003c:            V_3=3;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_0058;                                 //blt.s				IL_0058
	IL_004b:                                                                        //ldc.i4				0x2
	IL_0050:            V_3=2;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_0079;                                               //br.s				IL_0079
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::ICustomAttribute^ Reflector::CodeModel::ICustomAttributeCollection::get_Item(System::Int32)
	IL_0062:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::ICustomAttribute^ Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_0067:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006c:                                                                        //ldc.i4				0x0
	IL_0071:            V_3=0;                                                      //stloc				V_3
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_0037;                                               //br.s				IL_0037
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::CustomAttributeCollection();//newobj				void Reflector::CodeModel::Memory::CustomAttributeCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IEventDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IEventDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::EventDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IEventDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IEventDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0056;case 1:goto IL_0035;case 2:goto IL_0082;case 3:goto IL_0042;};//switch				(IL_0056,IL_0035,IL_0082,IL_0042)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IEventDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IEventDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x3
	IL_003c:            V_3=3;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_0063;                                 //blt.s				IL_0063
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_3=0;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:                                                                        //dup
	IL_0058:                                                                        //dup
	IL_0059:                                                                        //ldc.i4.3
	IL_005a:                                                                        //add
	IL_005b:                                                                        //bgt				IL_0057
	IL_0060:                                                                        //pop
	IL_0061:            goto IL_0084;                                               //br.s				IL_0084
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventDeclarationCollection::get_Item(System::Int32)
	IL_006d:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0072:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //add
	IL_0076:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0077:                                                                        //ldc.i4				0x2
	IL_007c:            V_3=2;                                                      //stloc				V_3
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0037;                                               //br.s				IL_0037
	IL_0084:            Temp_2=gcnew Reflector::CodeModel::Memory::EventDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::EventDeclarationCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::IEventDeclarationCollection^>(Temp_2);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IEventDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IExpression^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::Memory::ExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IExpression^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IExpressionCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0042;case 1:goto IL_0035;case 2:goto IL_0061;case 3:goto IL_0082;};//switch				(IL_0042,IL_0035,IL_0061,IL_0082)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IExpression^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IExpression
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x0
	IL_003c:            V_3=0;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldc.i4.3
	IL_0043:                                                                        //dup
	IL_0044:                                                                        //dup
	IL_0045:                                                                        //ldc.i4.2
	IL_0046:                                                                        //add
	IL_0047:                                                                        //bgt				IL_0043
	IL_004c:                                                                        //pop
	IL_004d:                                                                        //ldloc.1
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_2=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0054:            if(V_1<Temp_2)goto IL_0063;                                 //blt.s				IL_0063
	IL_0056:                                                                        //ldc.i4				0x2
	IL_005b:            V_3=2;                                                      //stloc				V_3
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0084;                                               //br.s				IL_0084
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_3=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_006d:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0072:            V_0[V_1]=Temp_4;                                            //stelem.ref
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //add
	IL_0076:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0077:                                                                        //ldc.i4				0x3
	IL_007c:            V_3=3;                                                      //stloc				V_3
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0037;                                               //br.s				IL_0037
	IL_0084:            Temp_5=gcnew Reflector::CodeModel::Memory::ExpressionCollection();//newobj				void Reflector::CodeModel::Memory::ExpressionCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::IExpressionCollection^>(Temp_5);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IFieldDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IFieldDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::FieldDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IFieldDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IFieldDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0035;case 1:goto IL_0077;case 2:goto IL_0056;case 3:goto IL_0042;};//switch				(IL_0035,IL_0077,IL_0056,IL_0042)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IFieldDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IFieldDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_3=0;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x3
	IL_003c:            V_3=3;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_0058;                                 //blt.s				IL_0058
	IL_004b:                                                                        //ldc.i4				0x2
	IL_0050:            V_3=2;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_0079;                                               //br.s				IL_0079
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0062:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0067:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006c:                                                                        //ldc.i4				0x1
	IL_0071:            V_3=1;                                                      //stloc				V_3
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_0037;                                               //br.s				IL_0037
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::FieldDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::FieldDeclarationCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IFieldDeclarationCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IFieldDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IFieldReference^ Root::T_x129::M_x2(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IMethodDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::MethodDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IMethodDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IMethodDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0059;case 1:goto IL_0042;case 2:goto IL_007a;case 3:goto IL_0035;};//switch				(IL_0059,IL_0042,IL_007a,IL_0035)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IMethodDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IMethodDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_3=3;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x1
	IL_003c:            V_3=1;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_005b;                                 //blt.s				IL_005b
	IL_004b:            goto IL_004e;                                               //br.s				IL_004e
	IL_004d:                                                                        //break
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_3=0;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_007c;                                               //br.s				IL_007c
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldarg.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0065:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_006a:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_3=2;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0037;                                               //br.s				IL_0037
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::MethodDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::MethodDeclarationCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IMethodDeclarationCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IMethodDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReferenceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IMethodReference^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::MethodReferenceCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IMethodReference^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IMethodReferenceCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0059;case 1:goto IL_007a;case 2:goto IL_0042;case 3:goto IL_0035;};//switch				(IL_0059,IL_007a,IL_0042,IL_0035)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IMethodReference^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IMethodReference
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_3=3;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x2
	IL_003c:            V_3=2;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:            goto IL_0045;                                               //br.s				IL_0045
	IL_0044:                                                                        //break
	IL_0045:                                                                        //ldloc.1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004c:            if(V_1<Temp_3)goto IL_005b;                                 //blt.s				IL_005b
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_3=0;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_007c;                                               //br.s				IL_007c
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldarg.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceCollection::get_Item(System::Int32)
	IL_0065:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_006a:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006f:                                                                        //ldc.i4				0x1
	IL_0074:            V_3=1;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0037;                                               //br.s				IL_0037
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::MethodReferenceCollection();//newobj				void Reflector::CodeModel::Memory::MethodReferenceCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IMethodReferenceCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IMethodReferenceCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IModuleCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IModuleCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::ModuleCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IModule^ Temp_4 = nullptr;
	Reflector::CodeModel::IModule^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IModule^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IModuleCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0059;case 1:goto IL_0045;case 2:goto IL_007a;case 3:goto IL_0035;};//switch				(IL_0059,IL_0045,IL_007a,IL_0035)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IModule^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IModule
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_3=3;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:            goto IL_003a;                                               //br.s				IL_003a
	IL_0039:                                                                        //break
	IL_003a:                                                                        //ldc.i4				0x1
	IL_003f:            V_3=1;                                                      //stloc				V_3
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004c:            if(V_1<Temp_3)goto IL_005b;                                 //blt.s				IL_005b
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_3=0;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_007c;                                               //br.s				IL_007c
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldarg.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0065:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_006a:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_3=2;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0037;                                               //br.s				IL_0037
	IL_007c:            Temp_2=gcnew Reflector::CodeModel::Memory::ModuleCollection();//newobj				void Reflector::CodeModel::Memory::ModuleCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IModuleCollection^>(Temp_2);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IModuleCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IModuleReference^ Root::T_x129::M_x2(Reflector::CodeModel::IModuleReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::INamespace^ Root::T_x129::M_x2(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IParameterDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IParameterDeclaration^>^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::ParameterDeclarationCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IParameterDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IParameterDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0082;case 1:goto IL_0056;case 2:goto IL_0035;case 3:goto IL_0042;};//switch				(IL_0082,IL_0056,IL_0035,IL_0042)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IParameterDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IParameterDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_3=2;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x3
	IL_003c:            V_3=3;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_3)goto IL_0063;                                 //blt.s				IL_0063
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_3=1;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:                                                                        //ldc.i4.0
	IL_0057:                                                                        //dup
	IL_0058:                                                                        //dup
	IL_0059:                                                                        //ldc.i4.3
	IL_005a:                                                                        //sub
	IL_005b:                                                                        //blt				IL_0057
	IL_0060:                                                                        //pop
	IL_0061:            goto IL_0084;                                               //br.s				IL_0084
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldloc.1
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_4=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_006d:            Temp_5=this->M_x1(Temp_4);                                  //callvirt				Reflector::CodeModel::IParameterDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclaration^)
	IL_0072:            V_0[V_1]=Temp_5;                                            //stelem.ref
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:                                                                        //add
	IL_0076:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_3=0;                                                      //stloc				V_3
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_0037;                                               //br.s				IL_0037
	IL_0084:            Temp_2=gcnew Reflector::CodeModel::Memory::ParameterDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::ParameterDeclarationCollection::.ctor()
	IL_0089:            V_2=safe_cast<Reflector::CodeModel::IParameterDeclarationCollection^>(Temp_2);//stloc.2
	IL_008a:                                                                        //ldloc.2
	IL_008b:                                                                        //ldloc.0
	IL_008c:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IParameterDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0091:                                                                        //ldloc.2
	IL_0092:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IPropertyDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IPropertyDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::Memory::PropertyDeclarationCollection^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::IPropertyDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IPropertyDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0042;case 1:goto IL_0056;case 2:goto IL_0077;case 3:goto IL_0035;};//switch				(IL_0042,IL_0056,IL_0077,IL_0035)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::IPropertyDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::IPropertyDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_3=3;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x0
	IL_003c:            V_3=0;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_2=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_2)goto IL_0058;                                 //blt.s				IL_0058
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_3=1;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_0079;                                               //br.s				IL_0079
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_3=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyDeclarationCollection::get_Item(System::Int32)
	IL_0062:            Temp_4=this->M_x1(Temp_3);                                  //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0067:            V_0[V_1]=Temp_4;                                            //stelem.ref
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006c:                                                                        //ldc.i4				0x2
	IL_0071:            V_3=2;                                                      //stloc				V_3
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_0037;                                               //br.s				IL_0037
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:            Temp_5=gcnew Reflector::CodeModel::Memory::PropertyDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::PropertyDeclarationCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::IPropertyDeclarationCollection^>(Temp_5);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::IPropertyDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IStatementCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IStatementCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::IStatement^>^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::Memory::StatementCollection^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<Reflector::CodeModel::IStatement^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IStatementCollection^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_0042;case 1:goto IL_004f;case 2:goto IL_005e;case 3:goto IL_007f;};//switch				(IL_0042,IL_004f,IL_005e,IL_007f)
	IL_001b:                                                                        //ldc.i4.6
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.4
	IL_001f:                                                                        //sub
	IL_0020:                                                                        //blt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldarg.1
	IL_0027:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_002c:            V_0=Temp_0;                                                 //stloc.0
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //conv.ovf.u4
	IL_002f:            Temp_1=gcnew array<Reflector::CodeModel::IStatement^>(safe_cast<System::UInt32>(V_0));//newarr				Reflector::CodeModel::IStatement
	IL_0034:            V_1=Temp_1;                                                 //stloc.1
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:            V_2=0;                                                      //stloc.2
	IL_0037:                                                                        //ldc.i4				0x0
	IL_003c:            V_4=0;                                                      //stloc				V_4
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldc.i4				0x1
	IL_0049:            V_4=1;                                                      //stloc				V_4
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:                                                                        //ldloc.2
	IL_0050:                                                                        //ldloc.0
	IL_0051:            if(V_2<V_0)goto IL_0060;                                    //blt.s				IL_0060
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_4=2;                                                      //stloc				V_4
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:            goto IL_0081;                                               //br.s				IL_0081
	IL_0060:                                                                        //ldloc.1
	IL_0061:                                                                        //ldloc.2
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldarg.1
	IL_0064:                                                                        //ldloc.2
	IL_0065:            Temp_2=A_0[V_2];                                            //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_006a:            Temp_3=this->M_x12(Temp_2);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_006f:            V_1[V_2]=Temp_3;                                            //stelem.ref
	IL_0070:                                                                        //ldloc.2
	IL_0071:                                                                        //ldc.i4.1
	IL_0072:                                                                        //add
	IL_0073:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0074:                                                                        //ldc.i4				0x3
	IL_0079:            V_4=3;                                                      //stloc				V_4
	IL_007d:            /*goto IL_0002;*/goto IL_007f;                              //br.s				IL_0002
	IL_007f:            goto IL_0044;                                               //br.s				IL_0044
	IL_0081:            Temp_4=gcnew Reflector::CodeModel::Memory::StatementCollection();//newobj				void Reflector::CodeModel::Memory::StatementCollection::.ctor()
	IL_0086:            V_3=safe_cast<Reflector::CodeModel::IStatementCollection^>(Temp_4);//stloc.3
	IL_0087:                                                                        //ldloc.3
	IL_0088:                                                                        //ldloc.1
	IL_0089:            V_3->AddRange(safe_cast<System::Collections::ICollection^>(V_1));//callvirt				void Reflector::CodeModel::IStatementCollection::AddRange(System::Collections::ICollection^)
	IL_008e:                                                                        //ldloc.3
	IL_008f:            return V_3;                                                 //ret

}
inline Reflector::CodeModel::ISwitchCaseCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ISwitchCaseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::ISwitchCase^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ISwitchCase^ Temp_3 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_4 = nullptr;
	Reflector::CodeModel::Memory::SwitchCaseCollection^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ISwitchCase^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ISwitchCaseCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0045;case 1:goto IL_0035;case 2:goto IL_0059;case 3:goto IL_007a;};//switch				(IL_0045,IL_0035,IL_0059,IL_007a)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::ISwitchCase^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::ISwitchCase
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_3=1;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0038;                                               //br.s				IL_0038
	IL_0037:                                                                        //break
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_3=0;                                                      //stloc				V_3
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:                                                                        //ldloc.1
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_2=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_004c:            if(V_1<Temp_2)goto IL_005b;                                 //blt.s				IL_005b
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_3=2;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_007c;                                               //br.s				IL_007c
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldloc.1
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldarg.1
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_3=A_0[V_1];                                            //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_0065:            Temp_4=this->M_x1(Temp_3);                                  //callvirt				Reflector::CodeModel::ISwitchCase^ Root::T_x129::M_x1(Reflector::CodeModel::ISwitchCase^)
	IL_006a:            V_0[V_1]=Temp_4;                                            //stelem.ref
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006f:                                                                        //ldc.i4				0x3
	IL_0074:            V_3=3;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_003a;                                               //br.s				IL_003a
	IL_007c:            Temp_5=gcnew Reflector::CodeModel::Memory::SwitchCaseCollection();//newobj				void Reflector::CodeModel::Memory::SwitchCaseCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::ISwitchCaseCollection^>(Temp_5);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::ISwitchCaseCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ITypeDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::Memory::TypeDeclarationCollection^ Temp_5 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ITypeDeclaration^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::ITypeDeclarationCollection^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0035;case 1:goto IL_0042;case 2:goto IL_007a;case 3:goto IL_0056;};//switch				(IL_0035,IL_0042,IL_007a,IL_0056)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0021:                                                                        //conv.ovf.u4
	IL_0022:            Temp_1=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(safe_cast<System::UInt32>(Temp_0));//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0027:            V_0=Temp_1;                                                 //stloc.0
	IL_0028:                                                                        //ldc.i4.0
	IL_0029:            V_1=0;                                                      //stloc.1
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_3=0;                                                      //stloc				V_3
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldc.i4				0x1
	IL_003c:            V_3=1;                                                      //stloc				V_3
	IL_0040:            /*goto IL_0002;*/goto IL_0042;                              //br.s				IL_0002
	IL_0042:                                                                        //ldloc.1
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_2=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0049:            if(V_1<Temp_2)goto IL_0058;                                 //blt.s				IL_0058
	IL_004b:                                                                        //ldc.i4				0x3
	IL_0050:            V_3=3;                                                      //stloc				V_3
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:            goto IL_007c;                                               //br.s				IL_007c
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldloc.1
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_3=A_0[V_1];                                            //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_0062:            Temp_4=this->M_x1(Temp_3);                                  //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0067:            V_0[V_1]=Temp_4;                                            //stelem.ref
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldc.i4.1
	IL_006a:                                                                        //add
	IL_006b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_006c:            goto IL_006f;                                               //br.s				IL_006f
	IL_006e:                                                                        //break
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_3=2;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0002;*/goto IL_007a;                              //br.s				IL_0002
	IL_007a:            goto IL_0037;                                               //br.s				IL_0037
	IL_007c:            Temp_5=gcnew Reflector::CodeModel::Memory::TypeDeclarationCollection();//newobj				void Reflector::CodeModel::Memory::TypeDeclarationCollection::.ctor()
	IL_0081:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclarationCollection^>(Temp_5);//stloc.2
	IL_0082:                                                                        //ldloc.2
	IL_0083:                                                                        //ldloc.0
	IL_0084:            V_2->AddRange(safe_cast<System::Collections::ICollection^>(V_0));//callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0089:                                                                        //ldloc.2
	IL_008a:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            return A_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_8 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_12 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_13 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_14 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_15 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_16 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_17 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_18 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_19 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_20 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_21 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_22 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_23 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_24 = nullptr;
	System::Globalization::CultureInfo^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	array<System::Object^>^ Temp_27 = nullptr;
	System::Type^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::NotSupportedException^ Temp_31 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_32 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_33 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_34 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_35 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_36 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_37 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_38 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_39 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_40 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_41 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_42 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_43 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_44 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_45 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_46 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_47 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_48 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_49 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_50 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_2=8;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x50
	IL_000e:            V_1=80;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_018a;                                               //br				IL_018a
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            switch(V_1){case 0:goto IL_058b;case 1:goto IL_0257;case 2:goto IL_0982;case 3:goto IL_077d;case 4:goto IL_084c;case 5:goto IL_03ea;case 6:goto IL_06d3;case 7:goto IL_05b7;case 8:goto IL_0865;case 9:goto IL_061c;case 10:goto IL_0464;case 11:goto IL_07b9;case 12:goto IL_0325;case 13:goto IL_0a4c;case 14:goto IL_0391;case 15:goto IL_0a33;case 16:goto IL_07ec;case 17:goto IL_0296;case 18:goto IL_093c;case 19:goto IL_0280;case 20:goto IL_0903;case 21:goto IL_0728;case 22:goto IL_09a2;case 23:goto IL_0969;case 24:goto IL_033e;case 25:goto IL_0a5f;case 26:goto IL_0923;case 27:goto IL_0648;case 28:goto IL_08ea;case 29:goto IL_0552;case 30:goto IL_07cf;case 31:goto IL_09ce;case 32:goto IL_021e;case 33:goto IL_0403;case 34:goto IL_0805;case 35:goto IL_0b07;case 36:goto IL_0754;case 37:goto IL_03a4;case 38:goto IL_0237;case 39:goto IL_05d0;case 40:goto IL_0270;case 41:goto IL_05e3;case 42:goto IL_0635;case 43:goto IL_04b3;case 44:goto IL_056b;case 45:goto IL_0a78;case 46:goto IL_0b1d;case 47:goto IL_070f;case 48:goto IL_0661;case 49:goto IL_01fe;case 50:goto IL_0b30;case 51:goto IL_0305;case 52:goto IL_06fc;case 53:goto IL_019e;case 54:goto IL_0a20;case 55:goto IL_04f9;case 56:goto IL_089e;case 57:goto IL_0519;case 58:goto IL_06ba;case 59:goto IL_042d;case 60:goto IL_04e0;case 61:goto IL_0681;case 62:goto IL_0532;case 63:goto IL_0451;case 64:goto IL_07a9;case 65:goto IL_05a4;case 66:goto IL_0378;case 67:goto IL_073b;case 68:goto IL_0ad1;case 69:goto IL_02ec;case 70:goto IL_05fc;case 71:goto IL_08ca;case 72:goto IL_069a;case 73:goto IL_0aa4;case 74:goto IL_06e6;case 75:goto IL_03bd;case 76:goto IL_0a07;case 77:goto IL_08b1;case 78:goto IL_049a;case 79:goto IL_0790;case 80:goto IL_0014;case 81:goto IL_01e5;case 82:goto IL_0b46;case 83:goto IL_0767;case 84:goto IL_0aea;case 85:goto IL_09e7;case 86:goto IL_0885;case 87:goto IL_09bb;case 88:goto IL_047a;case 89:goto IL_0a8b;};//switch				(IL_058b,IL_0257,IL_0982,IL_077d,IL_084c,IL_03ea,IL_06d3,IL_05b7,IL_0865,IL_061c,IL_0464,IL_07b9,IL_0325,IL_0a4c,IL_0391,IL_0a33,IL_07ec,IL_0296,IL_093c,IL_0280,IL_0903,IL_0728,IL_09a2,IL_0969,IL_033e,IL_0a5f,IL_0923,IL_0648,IL_08ea,IL_0552,IL_07cf,IL_09ce,IL_021e,IL_0403,IL_0805,IL_0b07,IL_0754,IL_03a4,IL_0237,IL_05d0,IL_0270,IL_05e3,IL_0635,IL_04b3,IL_056b,IL_0a78,IL_0b1d,IL_070f,IL_0661,IL_01fe,IL_0b30,IL_0305,IL_06fc,IL_019e,IL_0a20,IL_04f9,IL_089e,IL_0519,IL_06ba,IL_042d,IL_04e0,IL_0681,IL_0532,IL_0451,IL_07a9,IL_05a4,IL_0378,IL_073b,IL_0ad1,IL_02ec,IL_05fc,IL_08ca,IL_069a,IL_0aa4,IL_06e6,IL_03bd,IL_0a07,IL_08b1,IL_049a,IL_0790,IL_0014,IL_01e5,IL_0b46,IL_0767,IL_0aea,IL_09e7,IL_0885,IL_09bb,IL_047a,IL_0a8b)
	IL_018a:                                                                        //ldarg.1
	IL_018b:            if(A_0!=nullptr)goto IL_08dc;                               //brtrue				IL_08dc
	IL_0190:                                                                        //ldc.i4				0x35
	IL_0195:            V_1=53;                                                     //stloc				V_1
	IL_0199:            /*goto IL_0019;*/goto IL_019e;                              //br				IL_0019
	IL_019e:            goto IL_02b5;                                               //br				IL_02b5
	IL_01a3:                                                                        //ldarg.0
	IL_01a4:                                                                        //ldarg.1
	IL_01a5:                                                                        //isinst				Reflector::CodeModel::IDelegateInvokeExpression
	IL_01aa:            Temp_0=this->M_x1(dynamic_cast<Reflector::CodeModel::IDelegateInvokeExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IDelegateInvokeExpression^)
	IL_01af:            return Temp_0;                                              //ret
	IL_01b0:                                                                        //ldarg.0
	IL_01b1:                                                                        //ldarg.1
	IL_01b2:                                                                        //isinst				Reflector::CodeModel::IArrayInitializerExpression
	IL_01b7:            Temp_33=this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayInitializerExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayInitializerExpression^)
	IL_01bc:            return Temp_33;                                             //ret
	IL_01bd:                                                                        //ldarg.0
	IL_01be:                                                                        //ldarg.1
	IL_01bf:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_01c4:            Temp_43=this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReferenceExpression^)
	IL_01c9:            return Temp_43;                                             //ret
	IL_01ca:                                                                        //ldarg.0
	IL_01cb:                                                                        //ldarg.1
	IL_01cc:                                                                        //isinst				Reflector::CodeModel::IAddressDereferenceExpression
	IL_01d1:            Temp_3=this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^)
	IL_01d6:            return Temp_3;                                              //ret
	IL_01d7:                                                                        //ldc.i4				0x51
	IL_01dc:            V_1=81;                                                     //stloc				V_1
	IL_01e0:            /*goto IL_0019;*/goto IL_01e5;                              //br				IL_0019
	IL_01e5:                                                                        //ldarg.1
	IL_01e6:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_01eb:            if(dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0)==nullptr)goto IL_0877;//brfalse				IL_0877
	IL_01f0:                                                                        //ldc.i4				0x31
	IL_01f5:            V_1=49;                                                     //stloc				V_1
	IL_01f9:            /*goto IL_0019;*/goto IL_01fe;                              //br				IL_0019
	IL_01fe:            goto IL_04c5;                                               //br				IL_04c5
	IL_0203:                                                                        //ldarg.0
	IL_0204:                                                                        //ldarg.1
	IL_0205:                                                                        //isinst				Reflector::CodeModel::IArrayIndexerExpression
	IL_020a:            Temp_44=this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayIndexerExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayIndexerExpression^)
	IL_020f:            return Temp_44;                                             //ret
	IL_0210:                                                                        //ldc.i4				0x20
	IL_0215:            V_1=32;                                                     //stloc				V_1
	IL_0219:            /*goto IL_0019;*/goto IL_021e;                              //br				IL_0019
	IL_021e:                                                                        //ldarg.1
	IL_021f:                                                                        //isinst				Reflector::CodeModel::IValueOfTypedReferenceExpression
	IL_0224:            if(dynamic_cast<Reflector::CodeModel::IValueOfTypedReferenceExpression^>(A_0)==nullptr)goto IL_09c0;//brfalse				IL_09c0
	IL_0229:                                                                        //ldc.i4				0x26
	IL_022e:            V_1=38;                                                     //stloc				V_1
	IL_0232:            /*goto IL_0019;*/goto IL_0237;                              //br				IL_0019
	IL_0237:            goto IL_04fe;                                               //br				IL_04fe
	IL_023c:                                                                        //ldarg.0
	IL_023d:                                                                        //ldarg.1
	IL_023e:                                                                        //isinst				Reflector::CodeModel::IConditionExpression
	IL_0243:            Temp_1=this->M_x1(dynamic_cast<Reflector::CodeModel::IConditionExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IConditionExpression^)
	IL_0248:            return Temp_1;                                              //ret
	IL_0249:                                                                        //ldc.i4				0x1
	IL_024e:            V_1=1;                                                      //stloc				V_1
	IL_0252:            /*goto IL_0019;*/goto IL_0257;                              //br				IL_0019
	IL_0257:                                                                        //ldarg.1
	IL_0258:                                                                        //isinst				Reflector::CodeModel::IVariableDeclarationExpression
	IL_025d:            if(dynamic_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(A_0)==nullptr)goto IL_03dc;//brfalse				IL_03dc
	IL_0262:                                                                        //ldc.i4				0x28
	IL_0267:            V_1=40;                                                     //stloc				V_1
	IL_026b:            /*goto IL_0019;*/goto IL_0270;                              //br				IL_0019
	IL_0270:            goto IL_02d1;                                               //br.s				IL_02d1
	IL_0272:                                                                        //ldc.i4				0x13
	IL_0277:            V_1=19;                                                     //stloc				V_1
	IL_027b:            /*goto IL_0019;*/goto IL_0280;                              //br				IL_0019
	IL_0280:                                                                        //ldarg.1
	IL_0281:                                                                        //isinst				Reflector::CodeModel::IObjectInitializeExpression
	IL_0286:            if(dynamic_cast<Reflector::CodeModel::IObjectInitializeExpression^>(A_0)==nullptr)goto IL_02de;//brfalse.s				IL_02de
	IL_0288:                                                                        //ldc.i4				0x11
	IL_028d:            V_1=17;                                                     //stloc				V_1
	IL_0291:            /*goto IL_0019;*/goto IL_0296;                              //br				IL_0019
	IL_0296:            goto IL_0ab6;                                               //br				IL_0ab6
	IL_029b:                                                                        //ldarg.0
	IL_029c:                                                                        //ldarg.1
	IL_029d:                                                                        //isinst				Reflector::CodeModel::IGenericDefaultExpression
	IL_02a2:            Temp_22=this->M_x1(dynamic_cast<Reflector::CodeModel::IGenericDefaultExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IGenericDefaultExpression^)
	IL_02a7:            return Temp_22;                                             //ret
	IL_02a8:                                                                        //ldarg.0
	IL_02a9:                                                                        //ldarg.1
	IL_02aa:                                                                        //isinst				Reflector::CodeModel::IFieldOfExpression
	IL_02af:            Temp_2=this->M_x1(dynamic_cast<Reflector::CodeModel::IFieldOfExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldOfExpression^)
	IL_02b4:            return Temp_2;                                              //ret
	IL_02b5:                                                                        //ldnull
	IL_02b6:            return nullptr;                                             //ret
	IL_02b7:                                                                        //ldarg.0
	IL_02b8:                                                                        //ldarg.1
	IL_02b9:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_02be:            Temp_40=this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodInvokeExpression^)
	IL_02c3:            return Temp_40;                                             //ret
	IL_02c4:                                                                        //ldarg.0
	IL_02c5:                                                                        //ldarg.1
	IL_02c6:                                                                        //isinst				Reflector::CodeModel::IThisReferenceExpression
	IL_02cb:            Temp_36=this->M_x1(dynamic_cast<Reflector::CodeModel::IThisReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IThisReferenceExpression^)
	IL_02d0:            return Temp_36;                                             //ret
	IL_02d1:                                                                        //ldarg.0
	IL_02d2:                                                                        //ldarg.1
	IL_02d3:                                                                        //isinst				Reflector::CodeModel::IVariableDeclarationExpression
	IL_02d8:            Temp_17=this->M_x1(dynamic_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableDeclarationExpression^)
	IL_02dd:            return Temp_17;                                             //ret
	IL_02de:                                                                        //ldc.i4				0x45
	IL_02e3:            V_1=69;                                                     //stloc				V_1
	IL_02e7:            /*goto IL_0019;*/goto IL_02ec;                              //br				IL_0019
	IL_02ec:                                                                        //ldarg.1
	IL_02ed:                                                                        //isinst				Reflector::CodeModel::ITypeOfTypedReferenceExpression
	IL_02f2:            if(dynamic_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(A_0)==nullptr)goto IL_0210;//brfalse				IL_0210
	IL_02f7:                                                                        //ldc.i4				0x33
	IL_02fc:            V_1=51;                                                     //stloc				V_1
	IL_0300:            /*goto IL_0019;*/goto IL_0305;                              //br				IL_0019
	IL_0305:            goto IL_0666;                                               //br				IL_0666
	IL_030a:                                                                        //ldarg.0
	IL_030b:                                                                        //ldarg.1
	IL_030c:                                                                        //isinst				Reflector::CodeModel::IAddressOutExpression
	IL_0311:            Temp_20=this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressOutExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressOutExpression^)
	IL_0316:            return Temp_20;                                             //ret
	IL_0317:                                                                        //ldc.i4				0xc
	IL_031c:            V_1=12;                                                     //stloc				V_1
	IL_0320:            /*goto IL_0019;*/goto IL_0325;                              //br				IL_0019
	IL_0325:                                                                        //ldarg.1
	IL_0326:                                                                        //isinst				Reflector::CodeModel::ITypeOfExpression
	IL_032b:            if(dynamic_cast<Reflector::CodeModel::ITypeOfExpression^>(A_0)==nullptr)goto IL_06ac;//brfalse				IL_06ac
	IL_0330:                                                                        //ldc.i4				0x18
	IL_0335:            V_1=24;                                                     //stloc				V_1
	IL_0339:            /*goto IL_0019;*/goto IL_033e;                              //br				IL_0019
	IL_033e:            goto IL_0aa9;                                               //br				IL_0aa9
	IL_0343:                                                                        //ldarg.0
	IL_0344:                                                                        //ldarg.1
	IL_0345:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_034a:            Temp_19=this->M_x1(dynamic_cast<Reflector::CodeModel::ICastExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ICastExpression^)
	IL_034f:            return Temp_19;                                             //ret
	IL_0350:                                                                        //ldarg.0
	IL_0351:                                                                        //ldarg.1
	IL_0352:                                                                        //isinst				Reflector::CodeModel::IDelegateCreateExpression
	IL_0357:            Temp_16=this->M_x1(dynamic_cast<Reflector::CodeModel::IDelegateCreateExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IDelegateCreateExpression^)
	IL_035c:            return Temp_16;                                             //ret
	IL_035d:                                                                        //ldarg.0
	IL_035e:                                                                        //ldarg.1
	IL_035f:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_0364:            Temp_41=this->M_x1(dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IUnaryExpression^)
	IL_0369:            return Temp_41;                                             //ret
	IL_036a:                                                                        //ldc.i4				0x42
	IL_036f:            V_1=66;                                                     //stloc				V_1
	IL_0373:            /*goto IL_0019;*/goto IL_0378;                              //br				IL_0019
	IL_0378:                                                                        //ldarg.1
	IL_0379:                                                                        //isinst				Reflector::CodeModel::IArgumentReferenceExpression
	IL_037e:            if(dynamic_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(A_0)==nullptr)goto IL_0249;//brfalse				IL_0249
	IL_0383:                                                                        //ldc.i4				0xe
	IL_0388:            V_1=14;                                                     //stloc				V_1
	IL_038c:            /*goto IL_0019;*/goto IL_0391;                              //br				IL_0019
	IL_0391:            goto IL_0908;                                               //br				IL_0908
	IL_0396:                                                                        //ldc.i4				0x25
	IL_039b:            V_1=37;                                                     //stloc				V_1
	IL_039f:            /*goto IL_0019;*/goto IL_03a4;                              //br				IL_0019
	IL_03a4:                                                                        //ldarg.1
	IL_03a5:                                                                        //isinst				Reflector::CodeModel::ISizeOfExpression
	IL_03aa:            if(dynamic_cast<Reflector::CodeModel::ISizeOfExpression^>(A_0)==nullptr)goto IL_063a;//brfalse				IL_063a
	IL_03af:                                                                        //ldc.i4				0x4b
	IL_03b4:            V_1=75;                                                     //stloc				V_1
	IL_03b8:            /*goto IL_0019;*/goto IL_03bd;                              //br				IL_0019
	IL_03bd:            goto IL_0601;                                               //br				IL_0601
	IL_03c2:                                                                        //ldarg.0
	IL_03c3:                                                                        //ldarg.1
	IL_03c4:                                                                        //isinst				Reflector::CodeModel::IBaseReferenceExpression
	IL_03c9:            Temp_37=this->M_x1(dynamic_cast<Reflector::CodeModel::IBaseReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IBaseReferenceExpression^)
	IL_03ce:            return Temp_37;                                             //ret
	IL_03cf:                                                                        //ldarg.0
	IL_03d0:                                                                        //ldarg.1
	IL_03d1:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_03d6:            Temp_12=this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReferenceExpression^)
	IL_03db:            return Temp_12;                                             //ret
	IL_03dc:                                                                        //ldc.i4				0x5
	IL_03e1:            V_1=5;                                                      //stloc				V_1
	IL_03e5:            /*goto IL_0019;*/goto IL_03ea;                              //br				IL_0019
	IL_03ea:                                                                        //ldarg.1
	IL_03eb:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_03f0:            if(dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0)==nullptr)goto IL_050b;//brfalse				IL_050b
	IL_03f5:                                                                        //ldc.i4				0x21
	IL_03fa:            V_1=33;                                                     //stloc				V_1
	IL_03fe:            /*goto IL_0019;*/goto IL_0403;                              //br				IL_0019
	IL_0403:            goto IL_03cf;                                               //br.s				IL_03cf
	IL_0405:                                                                        //ldarg.0
	IL_0406:                                                                        //ldarg.1
	IL_0407:                                                                        //isinst				Reflector::CodeModel::IArgumentListExpression
	IL_040c:            Temp_7=this->M_x1(dynamic_cast<Reflector::CodeModel::IArgumentListExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArgumentListExpression^)
	IL_0411:            return Temp_7;                                              //ret
	IL_0412:                                                                        //ldarg.0
	IL_0413:                                                                        //ldarg.1
	IL_0414:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_0419:            Temp_8=this->M_x1(dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableReferenceExpression^)
	IL_041e:            return Temp_8;                                              //ret
	IL_041f:                                                                        //ldc.i4				0x3b
	IL_0424:            V_1=59;                                                     //stloc				V_1
	IL_0428:            /*goto IL_0019;*/goto IL_042d;                              //br				IL_0019
	IL_042d:                                                                        //ldarg.1
	IL_042e:                                                                        //isinst				Reflector::CodeModel::IEventReferenceExpression
	IL_0433:            if(dynamic_cast<Reflector::CodeModel::IEventReferenceExpression^>(A_0)==nullptr)goto IL_0915;//brfalse				IL_0915
	IL_0438:                                                                        //ldc.i4.1
	IL_0439:                                                                        //dup
	IL_043a:                                                                        //dup
	IL_043b:                                                                        //ldc.i4.4
	IL_043c:                                                                        //add
	IL_043d:                                                                        //bgt				IL_0439
	IL_0442:                                                                        //pop
	IL_0443:                                                                        //ldc.i4				0x3f
	IL_0448:            V_1=63;                                                     //stloc				V_1
	IL_044c:            /*goto IL_0019;*/goto IL_0451;                              //br				IL_0019
	IL_0451:            goto IL_0817;                                               //br				IL_0817
	IL_0456:                                                                        //ldc.i4				0xa
	IL_045b:            V_1=10;                                                     //stloc				V_1
	IL_045f:            /*goto IL_0019;*/goto IL_0464;                              //br				IL_0019
	IL_0464:                                                                        //ldarg.1
	IL_0465:                                                                        //isinst				Reflector::CodeModel::ICanCastExpression
	IL_046a:            if(dynamic_cast<Reflector::CodeModel::ICanCastExpression^>(A_0)==nullptr)goto IL_048c;//brfalse.s				IL_048c
	IL_046c:                                                                        //ldc.i4				0x58
	IL_0471:            V_1=88;                                                     //stloc				V_1
	IL_0475:            /*goto IL_0019;*/goto IL_047a;                              //br				IL_0019
	IL_047a:            goto IL_0987;                                               //br				IL_0987
	IL_047f:                                                                        //ldarg.0
	IL_0480:                                                                        //ldarg.1
	IL_0481:                                                                        //isinst				Reflector::CodeModel::IAddressOfExpression
	IL_0486:            Temp_18=this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressOfExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressOfExpression^)
	IL_048b:            return Temp_18;                                             //ret
	IL_048c:                                                                        //ldc.i4				0x4e
	IL_0491:            V_1=78;                                                     //stloc				V_1
	IL_0495:            /*goto IL_0019;*/goto IL_049a;                              //br				IL_0019
	IL_049a:                                                                        //ldarg.1
	IL_049b:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_04a0:            if(dynamic_cast<Reflector::CodeModel::ICastExpression^>(A_0)==nullptr)goto IL_0317;//brfalse				IL_0317
	IL_04a5:                                                                        //ldc.i4				0x2b
	IL_04aa:            V_1=43;                                                     //stloc				V_1
	IL_04ae:            /*goto IL_0019;*/goto IL_04b3;                              //br				IL_0019
	IL_04b3:            goto IL_0343;                                               //br				IL_0343
	IL_04b8:                                                                        //ldarg.0
	IL_04b9:                                                                        //ldarg.1
	IL_04ba:                                                                        //isinst				Reflector::CodeModel::ITypedReferenceCreateExpression
	IL_04bf:            Temp_23=this->M_x1(dynamic_cast<Reflector::CodeModel::ITypedReferenceCreateExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypedReferenceCreateExpression^)
	IL_04c4:            return Temp_23;                                             //ret
	IL_04c5:                                                                        //ldarg.0
	IL_04c6:                                                                        //ldarg.1
	IL_04c7:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_04cc:            Temp_24=this->M_x1(dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IBinaryExpression^)
	IL_04d1:            return Temp_24;                                             //ret
	IL_04d2:                                                                        //ldc.i4				0x3c
	IL_04d7:            V_1=60;                                                     //stloc				V_1
	IL_04db:            /*goto IL_0019;*/goto IL_04e0;                              //br				IL_0019
	IL_04e0:                                                                        //ldarg.1
	IL_04e1:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_04e6:            if(dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0)==nullptr)goto IL_08a3;//brfalse				IL_08a3
	IL_04eb:                                                                        //ldc.i4				0x37
	IL_04f0:            V_1=55;                                                     //stloc				V_1
	IL_04f4:            /*goto IL_0019;*/goto IL_04f9;                              //br				IL_0019
	IL_04f9:            goto IL_09ec;                                               //br				IL_09ec
	IL_04fe:                                                                        //ldarg.0
	IL_04ff:                                                                        //ldarg.1
	IL_0500:                                                                        //isinst				Reflector::CodeModel::IValueOfTypedReferenceExpression
	IL_0505:            Temp_15=this->M_x1(dynamic_cast<Reflector::CodeModel::IValueOfTypedReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IValueOfTypedReferenceExpression^)
	IL_050a:            return Temp_15;                                             //ret
	IL_050b:                                                                        //ldc.i4				0x39
	IL_0510:            V_1=57;                                                     //stloc				V_1
	IL_0514:            /*goto IL_0019;*/goto IL_0519;                              //br				IL_0019
	IL_0519:                                                                        //ldarg.1
	IL_051a:                                                                        //isinst				Reflector::CodeModel::IBaseReferenceExpression
	IL_051f:            if(dynamic_cast<Reflector::CodeModel::IBaseReferenceExpression^>(A_0)==nullptr)goto IL_05d5;//brfalse				IL_05d5
	IL_0524:                                                                        //ldc.i4				0x3e
	IL_0529:            V_1=62;                                                     //stloc				V_1
	IL_052d:            /*goto IL_0019;*/goto IL_0532;                              //br				IL_0019
	IL_0532:            goto IL_03c2;                                               //br				IL_03c2
	IL_0537:                                                                        //ldarg.0
	IL_0538:                                                                        //ldarg.1
	IL_0539:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_053e:            Temp_9=this->M_x1(dynamic_cast<Reflector::CodeModel::IAssignExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAssignExpression^)
	IL_0543:            return Temp_9;                                              //ret
	IL_0544:                                                                        //ldc.i4				0x1d
	IL_0549:            V_1=29;                                                     //stloc				V_1
	IL_054d:            /*goto IL_0019;*/goto IL_0552;                              //br				IL_0019
	IL_0552:                                                                        //ldarg.1
	IL_0553:                                                                        //isinst				Reflector::CodeModel::IAddressOutExpression
	IL_0558:            if(dynamic_cast<Reflector::CodeModel::IAddressOutExpression^>(A_0)==nullptr)goto IL_083e;//brfalse				IL_083e
	IL_055d:                                                                        //ldc.i4				0x2c
	IL_0562:            V_1=44;                                                     //stloc				V_1
	IL_0566:            /*goto IL_0019;*/goto IL_056b;                              //br				IL_0019
	IL_056b:            goto IL_030a;                                               //br				IL_030a
	IL_0570:                                                                        //ldarg.0
	IL_0571:                                                                        //ldarg.1
	IL_0572:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_0577:            Temp_42=this->M_x1(dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldReferenceExpression^)
	IL_057c:            return Temp_42;                                             //ret
	IL_057d:                                                                        //ldc.i4				0x0
	IL_0582:            V_1=0;                                                      //stloc				V_1
	IL_0586:            /*goto IL_0019;*/goto IL_058b;                              //br				IL_0019
	IL_058b:                                                                        //ldarg.1
	IL_058c:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_0591:            if(dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0)==nullptr)goto IL_0673;//brfalse				IL_0673
	IL_0596:                                                                        //ldc.i4				0x41
	IL_059b:            V_1=65;                                                     //stloc				V_1
	IL_059f:            /*goto IL_0019;*/goto IL_05a4;                              //br				IL_0019
	IL_05a4:            goto IL_02b7;                                               //br				IL_02b7
	IL_05a9:                                                                        //ldc.i4				0x7
	IL_05ae:            V_1=7;                                                      //stloc				V_1
	IL_05b2:            /*goto IL_0019;*/goto IL_05b7;                              //br				IL_0019
	IL_05b7:                                                                        //ldarg.1
	IL_05b8:                                                                        //isinst				Reflector::CodeModel::IDelegateCreateExpression
	IL_05bd:            if(dynamic_cast<Reflector::CodeModel::IDelegateCreateExpression^>(A_0)==nullptr)goto IL_0994;//brfalse				IL_0994
	IL_05c2:                                                                        //ldc.i4				0x27
	IL_05c7:            V_1=39;                                                     //stloc				V_1
	IL_05cb:            /*goto IL_0019;*/goto IL_05d0;                              //br				IL_0019
	IL_05d0:            goto IL_0350;                                               //br				IL_0350
	IL_05d5:                                                                        //ldc.i4				0x29
	IL_05da:            V_1=41;                                                     //stloc				V_1
	IL_05de:            /*goto IL_0019;*/goto IL_05e3;                              //br				IL_0019
	IL_05e3:                                                                        //ldarg.1
	IL_05e4:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_05e9:            if(dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0)==nullptr)goto IL_0ac3;//brfalse				IL_0ac3
	IL_05ee:                                                                        //ldc.i4				0x46
	IL_05f3:            V_1=70;                                                     //stloc				V_1
	IL_05f7:            /*goto IL_0019;*/goto IL_05fc;                              //br				IL_0019
	IL_05fc:            goto IL_035d;                                               //br				IL_035d
	IL_0601:                                                                        //ldarg.0
	IL_0602:                                                                        //ldarg.1
	IL_0603:                                                                        //isinst				Reflector::CodeModel::ISizeOfExpression
	IL_0608:            Temp_45=this->M_x1(dynamic_cast<Reflector::CodeModel::ISizeOfExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ISizeOfExpression^)
	IL_060d:            return Temp_45;                                             //ret
	IL_060e:                                                                        //ldc.i4				0x9
	IL_0613:            V_1=9;                                                      //stloc				V_1
	IL_0617:            /*goto IL_0019;*/goto IL_061c;                              //br				IL_0019
	IL_061c:                                                                        //ldarg.1
	IL_061d:                                                                        //isinst				Reflector::CodeModel::IAddressOfExpression
	IL_0622:            if(dynamic_cast<Reflector::CodeModel::IAddressOfExpression^>(A_0)==nullptr)goto IL_072d;//brfalse				IL_072d
	IL_0627:                                                                        //ldc.i4				0x2a
	IL_062c:            V_1=42;                                                     //stloc				V_1
	IL_0630:            /*goto IL_0019;*/goto IL_0635;                              //br				IL_0019
	IL_0635:            goto IL_047f;                                               //br				IL_047f
	IL_063a:                                                                        //ldc.i4				0x1b
	IL_063f:            V_1=27;                                                     //stloc				V_1
	IL_0643:            /*goto IL_0019;*/goto IL_0648;                              //br				IL_0019
	IL_0648:                                                                        //ldarg.1
	IL_0649:                                                                        //isinst				Reflector::CodeModel::ITypedReferenceCreateExpression
	IL_064e:            if(dynamic_cast<Reflector::CodeModel::ITypedReferenceCreateExpression^>(A_0)==nullptr)goto IL_0272;//brfalse				IL_0272
	IL_0653:                                                                        //ldc.i4				0x30
	IL_0658:            V_1=48;                                                     //stloc				V_1
	IL_065c:            /*goto IL_0019;*/goto IL_0661;                              //br				IL_0019
	IL_0661:            goto IL_04b8;                                               //br				IL_04b8
	IL_0666:                                                                        //ldarg.0
	IL_0667:                                                                        //ldarg.1
	IL_0668:                                                                        //isinst				Reflector::CodeModel::ITypeOfTypedReferenceExpression
	IL_066d:            Temp_32=this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^)
	IL_0672:            return Temp_32;                                             //ret
	IL_0673:                                                                        //ldc.i4				0x3d
	IL_0678:            V_1=61;                                                     //stloc				V_1
	IL_067c:            /*goto IL_0019;*/goto IL_0681;                              //br				IL_0019
	IL_0681:                                                                        //ldarg.1
	IL_0682:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_0687:            if(dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(A_0)==nullptr)goto IL_036a;//brfalse				IL_036a
	IL_068c:                                                                        //ldc.i4				0x48
	IL_0691:            V_1=72;                                                     //stloc				V_1
	IL_0695:            /*goto IL_0019;*/goto IL_069a;                              //br				IL_0019
	IL_069a:            goto IL_01bd;                                               //br				IL_01bd
	IL_069f:                                                                        //ldarg.0
	IL_06a0:                                                                        //ldarg.1
	IL_06a1:                                                                        //isinst				Reflector::CodeModel::INullCoalescingExpression
	IL_06a6:            Temp_13=this->M_x1(dynamic_cast<Reflector::CodeModel::INullCoalescingExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::INullCoalescingExpression^)
	IL_06ab:            return Temp_13;                                             //ret
	IL_06ac:                                                                        //ldc.i4				0x3a
	IL_06b1:            V_1=58;                                                     //stloc				V_1
	IL_06b5:            /*goto IL_0019;*/goto IL_06ba;                              //br				IL_0019
	IL_06ba:                                                                        //ldarg.1
	IL_06bb:                                                                        //isinst				Reflector::CodeModel::IFieldOfExpression
	IL_06c0:            if(dynamic_cast<Reflector::CodeModel::IFieldOfExpression^>(A_0)==nullptr)goto IL_07ab;//brfalse				IL_07ab
	IL_06c5:                                                                        //ldc.i4				0x6
	IL_06ca:            V_1=6;                                                      //stloc				V_1
	IL_06ce:            /*goto IL_0019;*/goto IL_06d3;                              //br				IL_0019
	IL_06d3:            goto IL_02a8;                                               //br				IL_02a8
	IL_06d8:                                                                        //ldc.i4				0x4a
	IL_06dd:            V_1=74;                                                     //stloc				V_1
	IL_06e1:            /*goto IL_0019;*/goto IL_06e6;                              //br				IL_0019
	IL_06e6:                                                                        //ldarg.1
	IL_06e7:                                                                        //isinst				Reflector::CodeModel::IArrayInitializerExpression
	IL_06ec:            if(dynamic_cast<Reflector::CodeModel::IArrayInitializerExpression^>(A_0)==nullptr)goto IL_0759;//brfalse.s				IL_0759
	IL_06ee:                                                                        //ldc.i4				0x34
	IL_06f3:            V_1=52;                                                     //stloc				V_1
	IL_06f7:            /*goto IL_0019;*/goto IL_06fc;                              //br				IL_0019
	IL_06fc:            goto IL_01b0;                                               //br				IL_01b0
	IL_0701:                                                                        //ldc.i4				0x2f
	IL_0706:            V_1=47;                                                     //stloc				V_1
	IL_070a:            /*goto IL_0019;*/goto IL_070f;                              //br				IL_0019
	IL_070f:                                                                        //ldarg.1
	IL_0710:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_0715:            if(dynamic_cast<Reflector::CodeModel::IAssignExpression^>(A_0)==nullptr)goto IL_01d7;//brfalse				IL_01d7
	IL_071a:                                                                        //ldc.i4				0x15
	IL_071f:            V_1=21;                                                     //stloc				V_1
	IL_0723:            /*goto IL_0019;*/goto IL_0728;                              //br				IL_0019
	IL_0728:            goto IL_0537;                                               //br				IL_0537
	IL_072d:                                                                        //ldc.i4				0x43
	IL_0732:            V_1=67;                                                     //stloc				V_1
	IL_0736:            /*goto IL_0019;*/goto IL_073b;                              //br				IL_0019
	IL_073b:                                                                        //ldarg.1
	IL_073c:                                                                        //isinst				Reflector::CodeModel::IAddressReferenceExpression
	IL_0741:            if(dynamic_cast<Reflector::CodeModel::IAddressReferenceExpression^>(A_0)==nullptr)goto IL_0544;//brfalse				IL_0544
	IL_0746:                                                                        //ldc.i4				0x24
	IL_074b:            V_1=36;                                                     //stloc				V_1
	IL_074f:            /*goto IL_0019;*/goto IL_0754;                              //br				IL_0019
	IL_0754:            goto IL_094e;                                               //br				IL_094e
	IL_0759:                                                                        //ldc.i4				0x53
	IL_075e:            V_1=83;                                                     //stloc				V_1
	IL_0762:            /*goto IL_0019;*/goto IL_0767;                              //br				IL_0019
	IL_0767:                                                                        //ldarg.1
	IL_0768:                                                                        //isinst				Reflector::CodeModel::IConditionExpression
	IL_076d:            if(dynamic_cast<Reflector::CodeModel::IConditionExpression^>(A_0)==nullptr)goto IL_07de;//brfalse.s				IL_07de
	IL_076f:                                                                        //ldc.i4				0x3
	IL_0774:            V_1=3;                                                      //stloc				V_1
	IL_0778:            /*goto IL_0019;*/goto IL_077d;                              //br				IL_0019
	IL_077d:            goto IL_023c;                                               //br				IL_023c
	IL_0782:                                                                        //ldc.i4				0x4f
	IL_0787:            V_1=79;                                                     //stloc				V_1
	IL_078b:            /*goto IL_0019;*/goto IL_0790;                              //br				IL_0019
	IL_0790:                                                                        //ldarg.1
	IL_0791:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_0796:            if(dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(A_0)==nullptr)goto IL_041f;//brfalse				IL_041f
	IL_079b:                                                                        //ldc.i4				0x40
	IL_07a0:            V_1=64;                                                     //stloc				V_1
	IL_07a4:            /*goto IL_0019;*/goto IL_07a9;                              //br				IL_0019
	IL_07a9:            goto IL_07d1;                                               //br.s				IL_07d1
	IL_07ab:                                                                        //ldc.i4				0xb
	IL_07b0:            V_1=11;                                                     //stloc				V_1
	IL_07b4:            /*goto IL_0019;*/goto IL_07b9;                              //br				IL_0019
	IL_07b9:                                                                        //ldarg.1
	IL_07ba:                                                                        //isinst				Reflector::CodeModel::IMethodOfExpression
	IL_07bf:            if(dynamic_cast<Reflector::CodeModel::IMethodOfExpression^>(A_0)==nullptr)goto IL_0782;//brfalse.s				IL_0782
	IL_07c1:                                                                        //ldc.i4				0x1e
	IL_07c6:            V_1=30;                                                     //stloc				V_1
	IL_07ca:            /*goto IL_0019;*/goto IL_07cf;                              //br				IL_0019
	IL_07cf:            goto IL_0824;                                               //br.s				IL_0824
	IL_07d1:                                                                        //ldarg.0
	IL_07d2:                                                                        //ldarg.1
	IL_07d3:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_07d8:            Temp_39=this->M_x1(dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::INamedArgumentExpression^)
	IL_07dd:            return Temp_39;                                             //ret
	IL_07de:                                                                        //ldc.i4				0x10
	IL_07e3:            V_1=16;                                                     //stloc				V_1
	IL_07e7:            /*goto IL_0019;*/goto IL_07ec;                              //br				IL_0019
	IL_07ec:                                                                        //ldarg.1
	IL_07ed:                                                                        //isinst				Reflector::CodeModel::INullCoalescingExpression
	IL_07f2:            if(dynamic_cast<Reflector::CodeModel::INullCoalescingExpression^>(A_0)==nullptr)goto IL_05a9;//brfalse				IL_05a9
	IL_07f7:                                                                        //ldc.i4				0x22
	IL_07fc:            V_1=34;                                                     //stloc				V_1
	IL_0800:            /*goto IL_0019;*/goto IL_0805;                              //br				IL_0019
	IL_0805:            goto IL_069f;                                               //br				IL_069f
	IL_080a:                                                                        //ldarg.0
	IL_080b:                                                                        //ldarg.1
	IL_080c:                                                                        //isinst				Reflector::CodeModel::IStackAllocateExpression
	IL_0811:            Temp_48=this->M_x1(dynamic_cast<Reflector::CodeModel::IStackAllocateExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IStackAllocateExpression^)
	IL_0816:            return Temp_48;                                             //ret
	IL_0817:                                                                        //ldarg.0
	IL_0818:                                                                        //ldarg.1
	IL_0819:                                                                        //isinst				Reflector::CodeModel::IEventReferenceExpression
	IL_081e:            Temp_38=this->M_x1(dynamic_cast<Reflector::CodeModel::IEventReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0823:            return Temp_38;                                             //ret
	IL_0824:                                                                        //ldarg.0
	IL_0825:                                                                        //ldarg.1
	IL_0826:                                                                        //isinst				Reflector::CodeModel::IMethodOfExpression
	IL_082b:            Temp_11=this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodOfExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodOfExpression^)
	IL_0830:            return Temp_11;                                             //ret
	IL_0831:                                                                        //ldarg.0
	IL_0832:                                                                        //ldarg.1
	IL_0833:                                                                        //isinst				Reflector::CodeModel::IPropertyIndexerExpression
	IL_0838:            Temp_49=this->M_x1(dynamic_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^)
	IL_083d:            return Temp_49;                                             //ret
	IL_083e:                                                                        //ldc.i4				0x4
	IL_0843:            V_1=4;                                                      //stloc				V_1
	IL_0847:            /*goto IL_0019;*/goto IL_084c;                              //br				IL_0019
	IL_084c:                                                                        //ldarg.1
	IL_084d:                                                                        //isinst				Reflector::CodeModel::IAddressDereferenceExpression
	IL_0852:            if(dynamic_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(A_0)==nullptr)goto IL_0396;//brfalse				IL_0396
	IL_0857:                                                                        //ldc.i4				0x8
	IL_085c:            V_1=8;                                                      //stloc				V_1
	IL_0860:            /*goto IL_0019;*/goto IL_0865;                              //br				IL_0019
	IL_0865:            goto IL_01ca;                                               //br				IL_01ca
	IL_086a:                                                                        //ldarg.0
	IL_086b:                                                                        //ldarg.1
	IL_086c:                                                                        //isinst				Reflector::CodeModel::IArrayCreateExpression
	IL_0871:            Temp_21=this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayCreateExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayCreateExpression^)
	IL_0876:            return Temp_21;                                             //ret
	IL_0877:                                                                        //ldc.i4				0x56
	IL_087c:            V_1=86;                                                     //stloc				V_1
	IL_0880:            /*goto IL_0019;*/goto IL_0885;                              //br				IL_0019
	IL_0885:                                                                        //ldarg.1
	IL_0886:                                                                        //isinst				Reflector::CodeModel::IThisReferenceExpression
	IL_088b:            if(dynamic_cast<Reflector::CodeModel::IThisReferenceExpression^>(A_0)==nullptr)goto IL_057d;//brfalse				IL_057d
	IL_0890:                                                                        //ldc.i4				0x38
	IL_0895:            V_1=56;                                                     //stloc				V_1
	IL_0899:            /*goto IL_0019;*/goto IL_089e;                              //br				IL_0019
	IL_089e:            goto IL_02c4;                                               //br				IL_02c4
	IL_08a3:                                                                        //ldc.i4				0x4d
	IL_08a8:            V_1=77;                                                     //stloc				V_1
	IL_08ac:            /*goto IL_0019;*/goto IL_08b1;                              //br				IL_0019
	IL_08b1:                                                                        //ldarg.1
	IL_08b2:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_08b7:            if(dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0)==nullptr)goto IL_09f9;//brfalse				IL_09f9
	IL_08bc:                                                                        //ldc.i4				0x47
	IL_08c1:            V_1=71;                                                     //stloc				V_1
	IL_08c5:            /*goto IL_0019;*/goto IL_08ca;                              //br				IL_0019
	IL_08ca:            goto IL_0570;                                               //br				IL_0570
	IL_08cf:                                                                        //ldarg.0
	IL_08d0:                                                                        //ldarg.1
	IL_08d1:                                                                        //isinst				Reflector::CodeModel::IPropertyReferenceExpression
	IL_08d6:            Temp_34=this->M_x1(dynamic_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_08db:            return Temp_34;                                             //ret
	IL_08dc:                                                                        //ldc.i4				0x1c
	IL_08e1:            V_1=28;                                                     //stloc				V_1
	IL_08e5:            /*goto IL_0019;*/goto IL_08ea;                              //br				IL_0019
	IL_08ea:                                                                        //ldarg.1
	IL_08eb:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_08f0:            if(dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(A_0)==nullptr)goto IL_04d2;//brfalse				IL_04d2
	IL_08f5:                                                                        //ldc.i4				0x14
	IL_08fa:            V_1=20;                                                     //stloc				V_1
	IL_08fe:            /*goto IL_0019;*/goto IL_0903;                              //br				IL_0019
	IL_0903:            goto IL_0412;                                               //br				IL_0412
	IL_0908:                                                                        //ldarg.0
	IL_0909:                                                                        //ldarg.1
	IL_090a:                                                                        //isinst				Reflector::CodeModel::IArgumentReferenceExpression
	IL_090f:            Temp_5=this->M_x1(dynamic_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IArgumentReferenceExpression^)
	IL_0914:            return Temp_5;                                              //ret
	IL_0915:                                                                        //ldc.i4				0x1a
	IL_091a:            V_1=26;                                                     //stloc				V_1
	IL_091e:            /*goto IL_0019;*/goto IL_0923;                              //br				IL_0019
	IL_0923:                                                                        //ldarg.1
	IL_0924:                                                                        //isinst				Reflector::CodeModel::IArgumentListExpression
	IL_0929:            if(dynamic_cast<Reflector::CodeModel::IArgumentListExpression^>(A_0)==nullptr)goto IL_0a51;//brfalse				IL_0a51
	IL_092e:                                                                        //ldc.i4				0x12
	IL_0933:            V_1=18;                                                     //stloc				V_1
	IL_0937:            /*goto IL_0019;*/goto IL_093c;                              //br				IL_0019
	IL_093c:            goto IL_0405;                                               //br				IL_0405
	IL_0941:                                                                        //ldarg.0
	IL_0942:                                                                        //ldarg.1
	IL_0943:                                                                        //isinst				Reflector::CodeModel::IObjectCreateExpression
	IL_0948:            Temp_4=this->M_x1(dynamic_cast<Reflector::CodeModel::IObjectCreateExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IObjectCreateExpression^)
	IL_094d:            return Temp_4;                                              //ret
	IL_094e:                                                                        //ldarg.0
	IL_094f:                                                                        //ldarg.1
	IL_0950:                                                                        //isinst				Reflector::CodeModel::IAddressReferenceExpression
	IL_0955:            Temp_14=this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressReferenceExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IAddressReferenceExpression^)
	IL_095a:            return Temp_14;                                             //ret
	IL_095b:                                                                        //ldc.i4				0x17
	IL_0960:            V_1=23;                                                     //stloc				V_1
	IL_0964:            /*goto IL_0019;*/goto IL_0969;                              //br				IL_0019
	IL_0969:                                                                        //ldarg.1
	IL_096a:                                                                        //isinst				Reflector::CodeModel::IDelegateInvokeExpression
	IL_096f:            if(dynamic_cast<Reflector::CodeModel::IDelegateInvokeExpression^>(A_0)==nullptr)goto IL_0a25;//brfalse				IL_0a25
	IL_0974:                                                                        //ldc.i4				0x2
	IL_0979:            V_1=2;                                                      //stloc				V_1
	IL_097d:            /*goto IL_0019;*/goto IL_0982;                              //br				IL_0019
	IL_0982:            goto IL_01a3;                                               //br				IL_01a3
	IL_0987:                                                                        //ldarg.0
	IL_0988:                                                                        //ldarg.1
	IL_0989:                                                                        //isinst				Reflector::CodeModel::ICanCastExpression
	IL_098e:            Temp_50=this->M_x1(dynamic_cast<Reflector::CodeModel::ICanCastExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ICanCastExpression^)
	IL_0993:            return Temp_50;                                             //ret
	IL_0994:                                                                        //ldc.i4				0x16
	IL_0999:            V_1=22;                                                     //stloc				V_1
	IL_099d:            /*goto IL_0019;*/goto IL_09a2;                              //br				IL_0019
	IL_09a2:                                                                        //ldarg.1
	IL_09a3:                                                                        //isinst				Reflector::CodeModel::IPropertyIndexerExpression
	IL_09a8:            if(dynamic_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(A_0)==nullptr)goto IL_0a7d;//brfalse				IL_0a7d
	IL_09ad:                                                                        //ldc.i4				0x57
	IL_09b2:            V_1=87;                                                     //stloc				V_1
	IL_09b6:            /*goto IL_0019;*/goto IL_09bb;                              //br				IL_0019
	IL_09bb:            goto IL_0831;                                               //br				IL_0831
	IL_09c0:                                                                        //ldc.i4				0x1f
	IL_09c5:            V_1=31;                                                     //stloc				V_1
	IL_09c9:            /*goto IL_0019;*/goto IL_09ce;                              //br				IL_0019
	IL_09ce:                                                                        //ldarg.1
	IL_09cf:                                                                        //isinst				Reflector::CodeModel::IStackAllocateExpression
	IL_09d4:            if(dynamic_cast<Reflector::CodeModel::IStackAllocateExpression^>(A_0)==nullptr)goto IL_0af9;//brfalse				IL_0af9
	IL_09d9:                                                                        //ldc.i4				0x55
	IL_09de:            V_1=85;                                                     //stloc				V_1
	IL_09e2:            /*goto IL_0019;*/goto IL_09e7;                              //br				IL_0019
	IL_09e7:            goto IL_080a;                                               //br				IL_080a
	IL_09ec:                                                                        //ldarg.0
	IL_09ed:                                                                        //ldarg.1
	IL_09ee:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_09f3:            Temp_35=this->M_x1(dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ILiteralExpression^)
	IL_09f8:            return Temp_35;                                             //ret
	IL_09f9:                                                                        //ldc.i4				0x4c
	IL_09fe:            V_1=76;                                                     //stloc				V_1
	IL_0a02:            /*goto IL_0019;*/goto IL_0a07;                              //br				IL_0019
	IL_0a07:                                                                        //ldarg.1
	IL_0a08:                                                                        //isinst				Reflector::CodeModel::IPropertyReferenceExpression
	IL_0a0d:            if(dynamic_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(A_0)==nullptr)goto IL_0701;//brfalse				IL_0701
	IL_0a12:                                                                        //ldc.i4				0x36
	IL_0a17:            V_1=54;                                                     //stloc				V_1
	IL_0a1b:            /*goto IL_0019;*/goto IL_0a20;                              //br				IL_0019
	IL_0a20:            goto IL_08cf;                                               //br				IL_08cf
	IL_0a25:                                                                        //ldc.i4				0xf
	IL_0a2a:            V_1=15;                                                     //stloc				V_1
	IL_0a2e:            /*goto IL_0019;*/goto IL_0a33;                              //br				IL_0019
	IL_0a33:                                                                        //ldarg.1
	IL_0a34:                                                                        //isinst				Reflector::CodeModel::IObjectCreateExpression
	IL_0a39:            if(dynamic_cast<Reflector::CodeModel::IObjectCreateExpression^>(A_0)==nullptr)goto IL_060e;//brfalse				IL_060e
	IL_0a3e:                                                                        //ldc.i4				0xd
	IL_0a43:            V_1=13;                                                     //stloc				V_1
	IL_0a47:            /*goto IL_0019;*/goto IL_0a4c;                              //br				IL_0019
	IL_0a4c:            goto IL_0941;                                               //br				IL_0941
	IL_0a51:                                                                        //ldc.i4				0x19
	IL_0a56:            V_1=25;                                                     //stloc				V_1
	IL_0a5a:            /*goto IL_0019;*/goto IL_0a5f;                              //br				IL_0019
	IL_0a5f:                                                                        //ldarg.1
	IL_0a60:                                                                        //isinst				Reflector::CodeModel::IArrayCreateExpression
	IL_0a65:            if(dynamic_cast<Reflector::CodeModel::IArrayCreateExpression^>(A_0)==nullptr)goto IL_06d8;//brfalse				IL_06d8
	IL_0a6a:                                                                        //ldc.i4				0x2d
	IL_0a6f:            V_1=45;                                                     //stloc				V_1
	IL_0a73:            /*goto IL_0019;*/goto IL_0a78;                              //br				IL_0019
	IL_0a78:            goto IL_086a;                                               //br				IL_086a
	IL_0a7d:                                                                        //ldc.i4				0x59
	IL_0a82:            V_1=89;                                                     //stloc				V_1
	IL_0a86:            /*goto IL_0019;*/goto IL_0a8b;                              //br				IL_0019
	IL_0a8b:                                                                        //ldarg.1
	IL_0a8c:                                                                        //isinst				Reflector::CodeModel::IArrayIndexerExpression
	IL_0a91:            if(dynamic_cast<Reflector::CodeModel::IArrayIndexerExpression^>(A_0)==nullptr)goto IL_095b;//brfalse				IL_095b
	IL_0a96:                                                                        //ldc.i4				0x49
	IL_0a9b:            V_1=73;                                                     //stloc				V_1
	IL_0a9f:            /*goto IL_0019;*/goto IL_0aa4;                              //br				IL_0019
	IL_0aa4:            goto IL_0203;                                               //br				IL_0203
	IL_0aa9:                                                                        //ldarg.0
	IL_0aaa:                                                                        //ldarg.1
	IL_0aab:                                                                        //isinst				Reflector::CodeModel::ITypeOfExpression
	IL_0ab0:            Temp_10=this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeOfExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeOfExpression^)
	IL_0ab5:            return Temp_10;                                             //ret
	IL_0ab6:                                                                        //ldarg.0
	IL_0ab7:                                                                        //ldarg.1
	IL_0ab8:                                                                        //isinst				Reflector::CodeModel::IObjectInitializeExpression
	IL_0abd:            Temp_6=this->M_x1(dynamic_cast<Reflector::CodeModel::IObjectInitializeExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IObjectInitializeExpression^)
	IL_0ac2:            return Temp_6;                                              //ret
	IL_0ac3:                                                                        //ldc.i4				0x44
	IL_0ac8:            V_1=68;                                                     //stloc				V_1
	IL_0acc:            /*goto IL_0019;*/goto IL_0ad1;                              //br				IL_0019
	IL_0ad1:                                                                        //ldarg.1
	IL_0ad2:                                                                        //isinst				Reflector::CodeModel::ITryCastExpression
	IL_0ad7:            if(dynamic_cast<Reflector::CodeModel::ITryCastExpression^>(A_0)==nullptr)goto IL_0456;//brfalse				IL_0456
	IL_0adc:                                                                        //ldc.i4				0x54
	IL_0ae1:            V_1=84;                                                     //stloc				V_1
	IL_0ae5:            /*goto IL_0019;*/goto IL_0aea;                              //br				IL_0019
	IL_0aea:            goto IL_0b48;                                               //br.s				IL_0b48
	IL_0aec:                                                                        //ldarg.0
	IL_0aed:                                                                        //ldarg.1
	IL_0aee:                                                                        //isinst				Reflector::CodeModel::ISnippetExpression
	IL_0af3:            Temp_46=this->M_x1(dynamic_cast<Reflector::CodeModel::ISnippetExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ISnippetExpression^)
	IL_0af8:            return Temp_46;                                             //ret
	IL_0af9:                                                                        //ldc.i4				0x23
	IL_0afe:            V_1=35;                                                     //stloc				V_1
	IL_0b02:            /*goto IL_0019;*/goto IL_0b07;                              //br				IL_0019
	IL_0b07:                                                                        //ldarg.1
	IL_0b08:                                                                        //isinst				Reflector::CodeModel::IGenericDefaultExpression
	IL_0b0d:            if(dynamic_cast<Reflector::CodeModel::IGenericDefaultExpression^>(A_0)==nullptr)goto IL_0b22;//brfalse.s				IL_0b22
	IL_0b0f:                                                                        //ldc.i4				0x2e
	IL_0b14:            V_1=46;                                                     //stloc				V_1
	IL_0b18:            /*goto IL_0019;*/goto IL_0b1d;                              //br				IL_0019
	IL_0b1d:            goto IL_029b;                                               //br				IL_029b
	IL_0b22:                                                                        //ldc.i4				0x32
	IL_0b27:            V_1=50;                                                     //stloc				V_1
	IL_0b2b:            /*goto IL_0019;*/goto IL_0b30;                              //br				IL_0019
	IL_0b30:                                                                        //ldarg.1
	IL_0b31:                                                                        //isinst				Reflector::CodeModel::ISnippetExpression
	IL_0b36:            if(dynamic_cast<Reflector::CodeModel::ISnippetExpression^>(A_0)==nullptr)goto IL_0b55;//brfalse.s				IL_0b55
	IL_0b38:                                                                        //ldc.i4				0x52
	IL_0b3d:            V_1=82;                                                     //stloc				V_1
	IL_0b41:            /*goto IL_0019;*/goto IL_0b46;                              //br				IL_0019
	IL_0b46:            goto IL_0aec;                                               //br.s				IL_0aec
	IL_0b48:                                                                        //ldarg.0
	IL_0b49:                                                                        //ldarg.1
	IL_0b4a:                                                                        //isinst				Reflector::CodeModel::ITryCastExpression
	IL_0b4f:            Temp_47=this->M_x1(dynamic_cast<Reflector::CodeModel::ITryCastExpression^>(A_0));//callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::ITryCastExpression^)
	IL_0b54:            return Temp_47;                                             //ret
	IL_0b55:            Temp_25=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0b5a:                                                                        //ldstr				L"\x6F25\x4627\x5C29\x4D2B\x422D\x592F\x5631\x1433\x5335\x4037\x4A39\x4E3B\x5B3D\x333F\x3141\x2D43\x2945\x2647\x6A49\x384B\x374D\x204F\x3751\x7453\x7155\x2357\x6A59\x215B\x795D\x4E5F"
	IL_0b5f:                                                                        //ldloc				V_2
	IL_0b63:            Temp_26=a(L"\x6F25\x4627\x5C29\x4D2B\x422D\x592F\x5631\x1433\x5335\x4037\x4A39\x4E3B\x5B3D\x333F\x3141\x2D43\x2945\x2647\x6A49\x384B\x374D\x204F\x3751\x7453\x7155\x2357\x6A59\x215B\x795D\x4E5F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b68:                                                                        //ldc.i4.1
	IL_0b69:            Temp_27=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_0b6e:            V_0=Temp_27;                                                //stloc.0
	IL_0b6f:                                                                        //ldloc.0
	IL_0b70:                                                                        //ldc.i4.0
	IL_0b71:                                                                        //ldarg.1
	IL_0b72:            Temp_28=A_0->GetType();                                     //callvirt				System::Type^ System::Object::GetType()
	IL_0b77:            Temp_29=Temp_28->Name;                                      //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0b7c:            V_0[0]=safe_cast<System::Object^>(Temp_29);                 //stelem.ref
	IL_0b7d:                                                                        //ldloc.0
	IL_0b7e:            Temp_30=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_25),Temp_26,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0b83:            Temp_31=gcnew System::NotSupportedException(Temp_30);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0b88:            throw Temp_31;                                              //throw

}
