#include "global_xref.h"

inline Root::T_x61::T_x61()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressDereferenceExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOfExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOutExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressReferenceExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayCreateExpression::get_Type()
	IL_000a:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayCreateExpression::get_Initializer()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_0022:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayDimension^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayDimensionCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0028;case 1:goto IL_006a;case 2:goto IL_004c;case 3:goto IL_0035;};//switch				(IL_0028,IL_006a,IL_004c,IL_0035)
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
	IL_003c:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_003e:            goto IL_0041;                                               //br.s				IL_0041
	IL_0040:                                                                        //break
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_1=2;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_006c;                                               //br.s				IL_006c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayDimension^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x1
	IL_0064:            V_1=1;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_002a;                                               //br.s				IL_002a
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayIndexerExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expressions;                                    //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayInitializerExpression::get_Expressions()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IArrayType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayDimensionCollection^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IModuleCollection^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAssignExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Target()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IAttachEventStatement::get_Event()
	IL_0007:            this->M_x1(safe_cast<Reflector::CodeModel::IExpression^>(Temp_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAttachEventStatement::get_Listener()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IBinaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IBlockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatementCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatementCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IBreakStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICanCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICanCastExpression::get_TargetType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICanCastExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICastExpression::get_TargetType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICastExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICatchClause^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::ICatchClause::get_Variable()
	IL_000a:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICatchClause::get_Condition()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ICatchClause::get_Body()
	IL_0022:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICatchClauseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ICatchClause^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0028;case 1:goto IL_0035;case 2:goto IL_0067;case 3:goto IL_0049;};//switch				(IL_0028,IL_0035,IL_0067,IL_0049)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x0
	IL_0022:            V_1=0;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_1=1;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x3
	IL_0043:            V_1=3;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_006c;                                               //br.s				IL_006c
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ICatchClause^ Reflector::CodeModel::ICatchClauseCollection::get_Item(System::Int32)
	IL_0053:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICatchClause^)
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldc.i4.1
	IL_005a:                                                                        //add
	IL_005b:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005c:                                                                        //ldc.i4				0x2
	IL_0061:            V_1=2;                                                      //stloc				V_1
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_006a;                                               //br.s				IL_006a
	IL_0069:                                                                        //break
	IL_006a:            goto IL_002a;                                               //br.s				IL_002a
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICommentStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IConditionCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IConditionExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Condition()
	IL_0012:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=A_0->Then;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_001e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Else;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_002a:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_002f:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IConditionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionStatement::get_Condition()
	IL_000a:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Then;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Then()
	IL_0016:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Else;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Else()
	IL_0022:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IContinueStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ICustomAttribute^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0033;case 1:goto IL_0072;case 2:goto IL_0054;case 3:goto IL_0040;};//switch				(IL_0033,IL_0072,IL_0054,IL_0040)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4.1
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.7
	IL_0021:                                                                        //add
	IL_0022:                                                                        //bgt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldc.i4				0x0
	IL_002d:            V_1=0;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_1=3;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_1=2;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ICustomAttribute^ Reflector::CodeModel::ICustomAttributeCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IDefaultCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IBlockStatement^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0007:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->DelegateType;                                   //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IDelegateCreateExpression::get_DelegateType()
	IL_0007:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateCreateExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IDelegateInvokeExpression::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateInvokeExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IDoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDoStatement::get_Condition()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IDoStatement::get_Body()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IEmbeddedResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=safe_cast<Reflector::CodeModel::IEventReference^>(A_0)->EventType;//callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_0013:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_1));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IEventDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IEventDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0049;case 1:goto IL_0035;case 2:goto IL_0028;case 3:goto IL_006a;};//switch				(IL_0049,IL_0035,IL_0028,IL_006a)
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
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_1=0;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_006c;                                               //br.s				IL_006c
	IL_004b:            goto IL_004e;                                               //br.s				IL_004e
	IL_004d:                                                                        //break
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventDeclarationCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x3
	IL_0064:            V_1=3;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_002a;                                               //br.s				IL_002a
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->EventType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_0007:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReference^ Reflector::CodeModel::IEventReferenceExpression::get_Event()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IEventReference^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IEventReferenceExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_2=6;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x49
	IL_000e:            V_1=73;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_018a;                                               //br				IL_018a
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            switch(V_1){case 0:goto IL_046e;case 1:goto IL_02eb;case 2:goto IL_042c;case 3:goto IL_0a77;case 4:goto IL_01fe;case 5:goto IL_0445;case 6:goto IL_0390;case 7:goto IL_0280;case 8:goto IL_01e5;case 9:goto IL_0930;case 10:goto IL_0237;case 11:goto IL_05c4;case 12:goto IL_09fb;case 13:goto IL_0859;case 14:goto IL_03bc;case 15:goto IL_05d7;case 16:goto IL_0b06;case 17:goto IL_019e;case 18:goto IL_063c;case 19:goto IL_0996;case 20:goto IL_0917;case 21:goto IL_05ab;case 22:goto IL_09af;case 23:goto IL_07ad;case 24:goto IL_0784;case 25:goto IL_0655;case 26:goto IL_0324;case 27:goto IL_06ae;case 28:goto IL_021e;case 29:goto IL_0a5e;case 30:goto IL_095d;case 31:goto IL_068e;case 32:goto IL_08a5;case 33:goto IL_08be;case 34:goto IL_072f;case 35:goto IL_0270;case 36:goto IL_07f9;case 37:goto IL_0a4b;case 38:goto IL_04d4;case 39:goto IL_0610;case 40:goto IL_0257;case 41:goto IL_0a14;case 42:goto IL_071c;case 43:goto IL_0629;case 44:goto IL_0304;case 45:goto IL_0b1c;case 46:goto IL_08f7;case 47:goto IL_0b45;case 48:goto IL_0ae9;case 49:goto IL_04ed;case 50:goto IL_0a27;case 51:goto IL_0a8a;case 52:goto IL_033d;case 53:goto IL_04a7;case 54:goto IL_0377;case 55:goto IL_06da;case 56:goto IL_0296;case 57:goto IL_0976;case 58:goto IL_057f;case 59:goto IL_079d;case 60:goto IL_03a3;case 61:goto IL_0892;case 62:goto IL_0675;case 63:goto IL_07c3;case 64:goto IL_050d;case 65:goto IL_06f0;case 66:goto IL_0598;case 67:goto IL_07e0;case 68:goto IL_0ad0;case 69:goto IL_0aa3;case 70:goto IL_03e9;case 71:goto IL_0771;case 72:goto IL_0703;case 73:goto IL_0014;case 74:goto IL_0879;case 75:goto IL_0458;case 76:goto IL_0840;case 77:goto IL_06c7;case 78:goto IL_048e;case 79:goto IL_0526;case 80:goto IL_0546;case 81:goto IL_08de;case 82:goto IL_09db;case 83:goto IL_05f0;case 84:goto IL_0748;case 85:goto IL_0402;case 86:goto IL_09c2;case 87:goto IL_0b2f;case 88:goto IL_055f;case 89:goto IL_075b;};//switch				(IL_046e,IL_02eb,IL_042c,IL_0a77,IL_01fe,IL_0445,IL_0390,IL_0280,IL_01e5,IL_0930,IL_0237,IL_05c4,IL_09fb,IL_0859,IL_03bc,IL_05d7,IL_0b06,IL_019e,IL_063c,IL_0996,IL_0917,IL_05ab,IL_09af,IL_07ad,IL_0784,IL_0655,IL_0324,IL_06ae,IL_021e,IL_0a5e,IL_095d,IL_068e,IL_08a5,IL_08be,IL_072f,IL_0270,IL_07f9,IL_0a4b,IL_04d4,IL_0610,IL_0257,IL_0a14,IL_071c,IL_0629,IL_0304,IL_0b1c,IL_08f7,IL_0b45,IL_0ae9,IL_04ed,IL_0a27,IL_0a8a,IL_033d,IL_04a7,IL_0377,IL_06da,IL_0296,IL_0976,IL_057f,IL_079d,IL_03a3,IL_0892,IL_0675,IL_07c3,IL_050d,IL_06f0,IL_0598,IL_07e0,IL_0ad0,IL_0aa3,IL_03e9,IL_0771,IL_0703,IL_0014,IL_0879,IL_0458,IL_0840,IL_06c7,IL_048e,IL_0526,IL_0546,IL_08de,IL_09db,IL_05f0,IL_0748,IL_0402,IL_09c2,IL_0b2f,IL_055f,IL_075b)
	IL_018a:                                                                        //ldarg.1
	IL_018b:            if(A_0!=nullptr)goto IL_08d0;                               //brtrue				IL_08d0
	IL_0190:                                                                        //ldc.i4				0x11
	IL_0195:            V_1=17;                                                     //stloc				V_1
	IL_0199:            /*goto IL_0019;*/goto IL_019e;                              //br				IL_0019
	IL_019e:            goto IL_02b5;                                               //br				IL_02b5
	IL_01a3:                                                                        //ldarg.0
	IL_01a4:                                                                        //ldarg.1
	IL_01a5:                                                                        //isinst				Reflector::CodeModel::IDelegateInvokeExpression
	IL_01aa:            this->M_x1(dynamic_cast<Reflector::CodeModel::IDelegateInvokeExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IDelegateInvokeExpression^)
	IL_01af:            return;                                                     //ret
	IL_01b0:                                                                        //ldarg.0
	IL_01b1:                                                                        //ldarg.1
	IL_01b2:                                                                        //isinst				Reflector::CodeModel::IArrayInitializerExpression
	IL_01b7:            this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayInitializerExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayInitializerExpression^)
	IL_01bc:            return;                                                     //ret
	IL_01bd:                                                                        //ldarg.0
	IL_01be:                                                                        //ldarg.1
	IL_01bf:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_01c4:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReferenceExpression^)
	IL_01c9:            return;                                                     //ret
	IL_01ca:                                                                        //ldarg.0
	IL_01cb:                                                                        //ldarg.1
	IL_01cc:                                                                        //isinst				Reflector::CodeModel::IAddressDereferenceExpression
	IL_01d1:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^)
	IL_01d6:            return;                                                     //ret
	IL_01d7:                                                                        //ldc.i4				0x8
	IL_01dc:            V_1=8;                                                      //stloc				V_1
	IL_01e0:            /*goto IL_0019;*/goto IL_01e5;                              //br				IL_0019
	IL_01e5:                                                                        //ldarg.1
	IL_01e6:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_01eb:            if(dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0)==nullptr)goto IL_086b;//brfalse				IL_086b
	IL_01f0:                                                                        //ldc.i4				0x4
	IL_01f5:            V_1=4;                                                      //stloc				V_1
	IL_01f9:            /*goto IL_0019;*/goto IL_01fe;                              //br				IL_0019
	IL_01fe:            goto IL_04b9;                                               //br				IL_04b9
	IL_0203:                                                                        //ldarg.0
	IL_0204:                                                                        //ldarg.1
	IL_0205:                                                                        //isinst				Reflector::CodeModel::IArrayIndexerExpression
	IL_020a:            this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayIndexerExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayIndexerExpression^)
	IL_020f:            return;                                                     //ret
	IL_0210:                                                                        //ldc.i4				0x1c
	IL_0215:            V_1=28;                                                     //stloc				V_1
	IL_0219:            /*goto IL_0019;*/goto IL_021e;                              //br				IL_0019
	IL_021e:                                                                        //ldarg.1
	IL_021f:                                                                        //isinst				Reflector::CodeModel::IValueOfTypedReferenceExpression
	IL_0224:            if(dynamic_cast<Reflector::CodeModel::IValueOfTypedReferenceExpression^>(A_0)==nullptr)goto IL_09b4;//brfalse				IL_09b4
	IL_0229:                                                                        //ldc.i4				0xa
	IL_022e:            V_1=10;                                                     //stloc				V_1
	IL_0232:            /*goto IL_0019;*/goto IL_0237;                              //br				IL_0019
	IL_0237:            goto IL_04f2;                                               //br				IL_04f2
	IL_023c:                                                                        //ldarg.0
	IL_023d:                                                                        //ldarg.1
	IL_023e:                                                                        //isinst				Reflector::CodeModel::IConditionExpression
	IL_0243:            this->M_x1(dynamic_cast<Reflector::CodeModel::IConditionExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IConditionExpression^)
	IL_0248:            return;                                                     //ret
	IL_0249:                                                                        //ldc.i4				0x28
	IL_024e:            V_1=40;                                                     //stloc				V_1
	IL_0252:            /*goto IL_0019;*/goto IL_0257;                              //br				IL_0019
	IL_0257:                                                                        //ldarg.1
	IL_0258:                                                                        //isinst				Reflector::CodeModel::IVariableDeclarationExpression
	IL_025d:            if(dynamic_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(A_0)==nullptr)goto IL_03db;//brfalse				IL_03db
	IL_0262:                                                                        //ldc.i4				0x23
	IL_0267:            V_1=35;                                                     //stloc				V_1
	IL_026b:            /*goto IL_0019;*/goto IL_0270;                              //br				IL_0019
	IL_0270:            goto IL_02d0;                                               //br.s				IL_02d0
	IL_0272:                                                                        //ldc.i4				0x7
	IL_0277:            V_1=7;                                                      //stloc				V_1
	IL_027b:            /*goto IL_0019;*/goto IL_0280;                              //br				IL_0019
	IL_0280:                                                                        //ldarg.1
	IL_0281:                                                                        //isinst				Reflector::CodeModel::IObjectInitializeExpression
	IL_0286:            if(dynamic_cast<Reflector::CodeModel::IObjectInitializeExpression^>(A_0)==nullptr)goto IL_02dd;//brfalse.s				IL_02dd
	IL_0288:                                                                        //ldc.i4				0x38
	IL_028d:            V_1=56;                                                     //stloc				V_1
	IL_0291:            /*goto IL_0019;*/goto IL_0296;                              //br				IL_0019
	IL_0296:            goto IL_0ab5;                                               //br				IL_0ab5
	IL_029b:                                                                        //ldarg.0
	IL_029c:                                                                        //ldarg.1
	IL_029d:                                                                        //isinst				Reflector::CodeModel::IGenericDefaultExpression
	IL_02a2:            this->M_x1(dynamic_cast<Reflector::CodeModel::IGenericDefaultExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IGenericDefaultExpression^)
	IL_02a7:            return;                                                     //ret
	IL_02a8:                                                                        //ldarg.0
	IL_02a9:                                                                        //ldarg.1
	IL_02aa:                                                                        //isinst				Reflector::CodeModel::IFieldOfExpression
	IL_02af:            this->M_x1(dynamic_cast<Reflector::CodeModel::IFieldOfExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldOfExpression^)
	IL_02b4:            return;                                                     //ret
	IL_02b5:            return;                                                     //ret
	IL_02b6:                                                                        //ldarg.0
	IL_02b7:                                                                        //ldarg.1
	IL_02b8:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_02bd:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodInvokeExpression^)
	IL_02c2:            return;                                                     //ret
	IL_02c3:                                                                        //ldarg.0
	IL_02c4:                                                                        //ldarg.1
	IL_02c5:                                                                        //isinst				Reflector::CodeModel::IThisReferenceExpression
	IL_02ca:            this->M_x1(dynamic_cast<Reflector::CodeModel::IThisReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IThisReferenceExpression^)
	IL_02cf:            return;                                                     //ret
	IL_02d0:                                                                        //ldarg.0
	IL_02d1:                                                                        //ldarg.1
	IL_02d2:                                                                        //isinst				Reflector::CodeModel::IVariableDeclarationExpression
	IL_02d7:            this->M_x1(dynamic_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IVariableDeclarationExpression^)
	IL_02dc:            return;                                                     //ret
	IL_02dd:                                                                        //ldc.i4				0x1
	IL_02e2:            V_1=1;                                                      //stloc				V_1
	IL_02e6:            /*goto IL_0019;*/goto IL_02eb;                              //br				IL_0019
	IL_02eb:                                                                        //ldarg.1
	IL_02ec:                                                                        //isinst				Reflector::CodeModel::ITypeOfTypedReferenceExpression
	IL_02f1:            if(dynamic_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(A_0)==nullptr)goto IL_0210;//brfalse				IL_0210
	IL_02f6:                                                                        //ldc.i4				0x2c
	IL_02fb:            V_1=44;                                                     //stloc				V_1
	IL_02ff:            /*goto IL_0019;*/goto IL_0304;                              //br				IL_0019
	IL_0304:            goto IL_065a;                                               //br				IL_065a
	IL_0309:                                                                        //ldarg.0
	IL_030a:                                                                        //ldarg.1
	IL_030b:                                                                        //isinst				Reflector::CodeModel::IAddressOutExpression
	IL_0310:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressOutExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAddressOutExpression^)
	IL_0315:            return;                                                     //ret
	IL_0316:                                                                        //ldc.i4				0x1a
	IL_031b:            V_1=26;                                                     //stloc				V_1
	IL_031f:            /*goto IL_0019;*/goto IL_0324;                              //br				IL_0019
	IL_0324:                                                                        //ldarg.1
	IL_0325:                                                                        //isinst				Reflector::CodeModel::ITypeOfExpression
	IL_032a:            if(dynamic_cast<Reflector::CodeModel::ITypeOfExpression^>(A_0)==nullptr)goto IL_06a0;//brfalse				IL_06a0
	IL_032f:                                                                        //ldc.i4				0x34
	IL_0334:            V_1=52;                                                     //stloc				V_1
	IL_0338:            /*goto IL_0019;*/goto IL_033d;                              //br				IL_0019
	IL_033d:            goto IL_0aa8;                                               //br				IL_0aa8
	IL_0342:                                                                        //ldarg.0
	IL_0343:                                                                        //ldarg.1
	IL_0344:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_0349:            this->M_x1(dynamic_cast<Reflector::CodeModel::ICastExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICastExpression^)
	IL_034e:            return;                                                     //ret
	IL_034f:                                                                        //ldarg.0
	IL_0350:                                                                        //ldarg.1
	IL_0351:                                                                        //isinst				Reflector::CodeModel::IDelegateCreateExpression
	IL_0356:            this->M_x1(dynamic_cast<Reflector::CodeModel::IDelegateCreateExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IDelegateCreateExpression^)
	IL_035b:            return;                                                     //ret
	IL_035c:                                                                        //ldarg.0
	IL_035d:                                                                        //ldarg.1
	IL_035e:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_0363:            this->M_x1(dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IUnaryExpression^)
	IL_0368:            return;                                                     //ret
	IL_0369:                                                                        //ldc.i4				0x36
	IL_036e:            V_1=54;                                                     //stloc				V_1
	IL_0372:            /*goto IL_0019;*/goto IL_0377;                              //br				IL_0019
	IL_0377:                                                                        //ldarg.1
	IL_0378:                                                                        //isinst				Reflector::CodeModel::IArgumentReferenceExpression
	IL_037d:            if(dynamic_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(A_0)==nullptr)goto IL_0249;//brfalse				IL_0249
	IL_0382:                                                                        //ldc.i4				0x6
	IL_0387:            V_1=6;                                                      //stloc				V_1
	IL_038b:            /*goto IL_0019;*/goto IL_0390;                              //br				IL_0019
	IL_0390:            goto IL_08fc;                                               //br				IL_08fc
	IL_0395:                                                                        //ldc.i4				0x3c
	IL_039a:            V_1=60;                                                     //stloc				V_1
	IL_039e:            /*goto IL_0019;*/goto IL_03a3;                              //br				IL_0019
	IL_03a3:                                                                        //ldarg.1
	IL_03a4:                                                                        //isinst				Reflector::CodeModel::ISizeOfExpression
	IL_03a9:            if(dynamic_cast<Reflector::CodeModel::ISizeOfExpression^>(A_0)==nullptr)goto IL_062e;//brfalse				IL_062e
	IL_03ae:                                                                        //ldc.i4				0xe
	IL_03b3:            V_1=14;                                                     //stloc				V_1
	IL_03b7:            /*goto IL_0019;*/goto IL_03bc;                              //br				IL_0019
	IL_03bc:            goto IL_05f5;                                               //br				IL_05f5
	IL_03c1:                                                                        //ldarg.0
	IL_03c2:                                                                        //ldarg.1
	IL_03c3:                                                                        //isinst				Reflector::CodeModel::IBaseReferenceExpression
	IL_03c8:            this->M_x1(dynamic_cast<Reflector::CodeModel::IBaseReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IBaseReferenceExpression^)
	IL_03cd:            return;                                                     //ret
	IL_03ce:                                                                        //ldarg.0
	IL_03cf:                                                                        //ldarg.1
	IL_03d0:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_03d5:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeReferenceExpression^)
	IL_03da:            return;                                                     //ret
	IL_03db:                                                                        //ldc.i4				0x46
	IL_03e0:            V_1=70;                                                     //stloc				V_1
	IL_03e4:            /*goto IL_0019;*/goto IL_03e9;                              //br				IL_0019
	IL_03e9:                                                                        //ldarg.1
	IL_03ea:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_03ef:            if(dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0)==nullptr)goto IL_04ff;//brfalse				IL_04ff
	IL_03f4:                                                                        //ldc.i4				0x55
	IL_03f9:            V_1=85;                                                     //stloc				V_1
	IL_03fd:            /*goto IL_0019;*/goto IL_0402;                              //br				IL_0019
	IL_0402:            goto IL_03ce;                                               //br.s				IL_03ce
	IL_0404:                                                                        //ldarg.0
	IL_0405:                                                                        //ldarg.1
	IL_0406:                                                                        //isinst				Reflector::CodeModel::IArgumentListExpression
	IL_040b:            this->M_x1(dynamic_cast<Reflector::CodeModel::IArgumentListExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArgumentListExpression^)
	IL_0410:            return;                                                     //ret
	IL_0411:                                                                        //ldarg.0
	IL_0412:                                                                        //ldarg.1
	IL_0413:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_0418:            this->M_x1(dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IVariableReferenceExpression^)
	IL_041d:            return;                                                     //ret
	IL_041e:                                                                        //ldc.i4				0x2
	IL_0423:            V_1=2;                                                      //stloc				V_1
	IL_0427:            /*goto IL_0019;*/goto IL_042c;                              //br				IL_0019
	IL_042c:                                                                        //ldarg.1
	IL_042d:                                                                        //isinst				Reflector::CodeModel::IEventReferenceExpression
	IL_0432:            if(dynamic_cast<Reflector::CodeModel::IEventReferenceExpression^>(A_0)==nullptr)goto IL_0909;//brfalse				IL_0909
	IL_0437:                                                                        //ldc.i4				0x5
	IL_043c:            V_1=5;                                                      //stloc				V_1
	IL_0440:            /*goto IL_0019;*/goto IL_0445;                              //br				IL_0019
	IL_0445:            goto IL_080b;                                               //br				IL_080b
	IL_044a:                                                                        //ldc.i4				0x4b
	IL_044f:            V_1=75;                                                     //stloc				V_1
	IL_0453:            /*goto IL_0019;*/goto IL_0458;                              //br				IL_0019
	IL_0458:                                                                        //ldarg.1
	IL_0459:                                                                        //isinst				Reflector::CodeModel::ICanCastExpression
	IL_045e:            if(dynamic_cast<Reflector::CodeModel::ICanCastExpression^>(A_0)==nullptr)goto IL_0480;//brfalse.s				IL_0480
	IL_0460:                                                                        //ldc.i4				0x0
	IL_0465:            V_1=0;                                                      //stloc				V_1
	IL_0469:            /*goto IL_0019;*/goto IL_046e;                              //br				IL_0019
	IL_046e:            goto IL_097b;                                               //br				IL_097b
	IL_0473:                                                                        //ldarg.0
	IL_0474:                                                                        //ldarg.1
	IL_0475:                                                                        //isinst				Reflector::CodeModel::IAddressOfExpression
	IL_047a:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressOfExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAddressOfExpression^)
	IL_047f:            return;                                                     //ret
	IL_0480:                                                                        //ldc.i4				0x4e
	IL_0485:            V_1=78;                                                     //stloc				V_1
	IL_0489:            /*goto IL_0019;*/goto IL_048e;                              //br				IL_0019
	IL_048e:                                                                        //ldarg.1
	IL_048f:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_0494:            if(dynamic_cast<Reflector::CodeModel::ICastExpression^>(A_0)==nullptr)goto IL_0316;//brfalse				IL_0316
	IL_0499:                                                                        //ldc.i4				0x35
	IL_049e:            V_1=53;                                                     //stloc				V_1
	IL_04a2:            /*goto IL_0019;*/goto IL_04a7;                              //br				IL_0019
	IL_04a7:            goto IL_0342;                                               //br				IL_0342
	IL_04ac:                                                                        //ldarg.0
	IL_04ad:                                                                        //ldarg.1
	IL_04ae:                                                                        //isinst				Reflector::CodeModel::ITypedReferenceCreateExpression
	IL_04b3:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITypedReferenceCreateExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypedReferenceCreateExpression^)
	IL_04b8:            return;                                                     //ret
	IL_04b9:                                                                        //ldarg.0
	IL_04ba:                                                                        //ldarg.1
	IL_04bb:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_04c0:            this->M_x1(dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IBinaryExpression^)
	IL_04c5:            return;                                                     //ret
	IL_04c6:                                                                        //ldc.i4				0x26
	IL_04cb:            V_1=38;                                                     //stloc				V_1
	IL_04cf:            /*goto IL_0019;*/goto IL_04d4;                              //br				IL_0019
	IL_04d4:                                                                        //ldarg.1
	IL_04d5:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_04da:            if(dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0)==nullptr)goto IL_0897;//brfalse				IL_0897
	IL_04df:                                                                        //ldc.i4				0x31
	IL_04e4:            V_1=49;                                                     //stloc				V_1
	IL_04e8:            /*goto IL_0019;*/goto IL_04ed;                              //br				IL_0019
	IL_04ed:            goto IL_09e0;                                               //br				IL_09e0
	IL_04f2:                                                                        //ldarg.0
	IL_04f3:                                                                        //ldarg.1
	IL_04f4:                                                                        //isinst				Reflector::CodeModel::IValueOfTypedReferenceExpression
	IL_04f9:            this->M_x1(dynamic_cast<Reflector::CodeModel::IValueOfTypedReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IValueOfTypedReferenceExpression^)
	IL_04fe:            return;                                                     //ret
	IL_04ff:                                                                        //ldc.i4				0x40
	IL_0504:            V_1=64;                                                     //stloc				V_1
	IL_0508:            /*goto IL_0019;*/goto IL_050d;                              //br				IL_0019
	IL_050d:                                                                        //ldarg.1
	IL_050e:                                                                        //isinst				Reflector::CodeModel::IBaseReferenceExpression
	IL_0513:            if(dynamic_cast<Reflector::CodeModel::IBaseReferenceExpression^>(A_0)==nullptr)goto IL_05c9;//brfalse				IL_05c9
	IL_0518:                                                                        //ldc.i4				0x4f
	IL_051d:            V_1=79;                                                     //stloc				V_1
	IL_0521:            /*goto IL_0019;*/goto IL_0526;                              //br				IL_0019
	IL_0526:            goto IL_03c1;                                               //br				IL_03c1
	IL_052b:                                                                        //ldarg.0
	IL_052c:                                                                        //ldarg.1
	IL_052d:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_0532:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAssignExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAssignExpression^)
	IL_0537:            return;                                                     //ret
	IL_0538:                                                                        //ldc.i4				0x50
	IL_053d:            V_1=80;                                                     //stloc				V_1
	IL_0541:            /*goto IL_0019;*/goto IL_0546;                              //br				IL_0019
	IL_0546:                                                                        //ldarg.1
	IL_0547:                                                                        //isinst				Reflector::CodeModel::IAddressOutExpression
	IL_054c:            if(dynamic_cast<Reflector::CodeModel::IAddressOutExpression^>(A_0)==nullptr)goto IL_0832;//brfalse				IL_0832
	IL_0551:                                                                        //ldc.i4				0x58
	IL_0556:            V_1=88;                                                     //stloc				V_1
	IL_055a:            /*goto IL_0019;*/goto IL_055f;                              //br				IL_0019
	IL_055f:            goto IL_0309;                                               //br				IL_0309
	IL_0564:                                                                        //ldarg.0
	IL_0565:                                                                        //ldarg.1
	IL_0566:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_056b:            this->M_x1(dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReferenceExpression^)
	IL_0570:            return;                                                     //ret
	IL_0571:                                                                        //ldc.i4				0x3a
	IL_0576:            V_1=58;                                                     //stloc				V_1
	IL_057a:            /*goto IL_0019;*/goto IL_057f;                              //br				IL_0019
	IL_057f:                                                                        //ldarg.1
	IL_0580:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_0585:            if(dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0)==nullptr)goto IL_0667;//brfalse				IL_0667
	IL_058a:                                                                        //ldc.i4				0x42
	IL_058f:            V_1=66;                                                     //stloc				V_1
	IL_0593:            /*goto IL_0019;*/goto IL_0598;                              //br				IL_0019
	IL_0598:            goto IL_02b6;                                               //br				IL_02b6
	IL_059d:                                                                        //ldc.i4				0x15
	IL_05a2:            V_1=21;                                                     //stloc				V_1
	IL_05a6:            /*goto IL_0019;*/goto IL_05ab;                              //br				IL_0019
	IL_05ab:                                                                        //ldarg.1
	IL_05ac:                                                                        //isinst				Reflector::CodeModel::IDelegateCreateExpression
	IL_05b1:            if(dynamic_cast<Reflector::CodeModel::IDelegateCreateExpression^>(A_0)==nullptr)goto IL_0988;//brfalse				IL_0988
	IL_05b6:                                                                        //ldc.i4				0xb
	IL_05bb:            V_1=11;                                                     //stloc				V_1
	IL_05bf:            /*goto IL_0019;*/goto IL_05c4;                              //br				IL_0019
	IL_05c4:            goto IL_034f;                                               //br				IL_034f
	IL_05c9:                                                                        //ldc.i4				0xf
	IL_05ce:            V_1=15;                                                     //stloc				V_1
	IL_05d2:            /*goto IL_0019;*/goto IL_05d7;                              //br				IL_0019
	IL_05d7:                                                                        //ldarg.1
	IL_05d8:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_05dd:            if(dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0)==nullptr)goto IL_0ac2;//brfalse				IL_0ac2
	IL_05e2:                                                                        //ldc.i4				0x53
	IL_05e7:            V_1=83;                                                     //stloc				V_1
	IL_05eb:            /*goto IL_0019;*/goto IL_05f0;                              //br				IL_0019
	IL_05f0:            goto IL_035c;                                               //br				IL_035c
	IL_05f5:                                                                        //ldarg.0
	IL_05f6:                                                                        //ldarg.1
	IL_05f7:                                                                        //isinst				Reflector::CodeModel::ISizeOfExpression
	IL_05fc:            this->M_x1(dynamic_cast<Reflector::CodeModel::ISizeOfExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ISizeOfExpression^)
	IL_0601:            return;                                                     //ret
	IL_0602:                                                                        //ldc.i4				0x27
	IL_0607:            V_1=39;                                                     //stloc				V_1
	IL_060b:            /*goto IL_0019;*/goto IL_0610;                              //br				IL_0019
	IL_0610:                                                                        //ldarg.1
	IL_0611:                                                                        //isinst				Reflector::CodeModel::IAddressOfExpression
	IL_0616:            if(dynamic_cast<Reflector::CodeModel::IAddressOfExpression^>(A_0)==nullptr)goto IL_0721;//brfalse				IL_0721
	IL_061b:                                                                        //ldc.i4				0x2b
	IL_0620:            V_1=43;                                                     //stloc				V_1
	IL_0624:            /*goto IL_0019;*/goto IL_0629;                              //br				IL_0019
	IL_0629:            goto IL_0473;                                               //br				IL_0473
	IL_062e:                                                                        //ldc.i4				0x12
	IL_0633:            V_1=18;                                                     //stloc				V_1
	IL_0637:            /*goto IL_0019;*/goto IL_063c;                              //br				IL_0019
	IL_063c:                                                                        //ldarg.1
	IL_063d:                                                                        //isinst				Reflector::CodeModel::ITypedReferenceCreateExpression
	IL_0642:            if(dynamic_cast<Reflector::CodeModel::ITypedReferenceCreateExpression^>(A_0)==nullptr)goto IL_0272;//brfalse				IL_0272
	IL_0647:                                                                        //ldc.i4				0x19
	IL_064c:            V_1=25;                                                     //stloc				V_1
	IL_0650:            /*goto IL_0019;*/goto IL_0655;                              //br				IL_0019
	IL_0655:            goto IL_04ac;                                               //br				IL_04ac
	IL_065a:                                                                        //ldarg.0
	IL_065b:                                                                        //ldarg.1
	IL_065c:                                                                        //isinst				Reflector::CodeModel::ITypeOfTypedReferenceExpression
	IL_0661:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^)
	IL_0666:            return;                                                     //ret
	IL_0667:                                                                        //ldc.i4				0x3e
	IL_066c:            V_1=62;                                                     //stloc				V_1
	IL_0670:            /*goto IL_0019;*/goto IL_0675;                              //br				IL_0019
	IL_0675:                                                                        //ldarg.1
	IL_0676:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_067b:            if(dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(A_0)==nullptr)goto IL_0369;//brfalse				IL_0369
	IL_0680:                                                                        //ldc.i4				0x1f
	IL_0685:            V_1=31;                                                     //stloc				V_1
	IL_0689:            /*goto IL_0019;*/goto IL_068e;                              //br				IL_0019
	IL_068e:            goto IL_01bd;                                               //br				IL_01bd
	IL_0693:                                                                        //ldarg.0
	IL_0694:                                                                        //ldarg.1
	IL_0695:                                                                        //isinst				Reflector::CodeModel::INullCoalescingExpression
	IL_069a:            this->M_x1(dynamic_cast<Reflector::CodeModel::INullCoalescingExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::INullCoalescingExpression^)
	IL_069f:            return;                                                     //ret
	IL_06a0:                                                                        //ldc.i4				0x1b
	IL_06a5:            V_1=27;                                                     //stloc				V_1
	IL_06a9:            /*goto IL_0019;*/goto IL_06ae;                              //br				IL_0019
	IL_06ae:                                                                        //ldarg.1
	IL_06af:                                                                        //isinst				Reflector::CodeModel::IFieldOfExpression
	IL_06b4:            if(dynamic_cast<Reflector::CodeModel::IFieldOfExpression^>(A_0)==nullptr)goto IL_079f;//brfalse				IL_079f
	IL_06b9:                                                                        //ldc.i4				0x4d
	IL_06be:            V_1=77;                                                     //stloc				V_1
	IL_06c2:            /*goto IL_0019;*/goto IL_06c7;                              //br				IL_0019
	IL_06c7:            goto IL_02a8;                                               //br				IL_02a8
	IL_06cc:                                                                        //ldc.i4				0x37
	IL_06d1:            V_1=55;                                                     //stloc				V_1
	IL_06d5:            /*goto IL_0019;*/goto IL_06da;                              //br				IL_0019
	IL_06da:                                                                        //ldarg.1
	IL_06db:                                                                        //isinst				Reflector::CodeModel::IArrayInitializerExpression
	IL_06e0:            if(dynamic_cast<Reflector::CodeModel::IArrayInitializerExpression^>(A_0)==nullptr)goto IL_074d;//brfalse.s				IL_074d
	IL_06e2:                                                                        //ldc.i4				0x41
	IL_06e7:            V_1=65;                                                     //stloc				V_1
	IL_06eb:            /*goto IL_0019;*/goto IL_06f0;                              //br				IL_0019
	IL_06f0:            goto IL_01b0;                                               //br				IL_01b0
	IL_06f5:                                                                        //ldc.i4				0x48
	IL_06fa:            V_1=72;                                                     //stloc				V_1
	IL_06fe:            /*goto IL_0019;*/goto IL_0703;                              //br				IL_0019
	IL_0703:                                                                        //ldarg.1
	IL_0704:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_0709:            if(dynamic_cast<Reflector::CodeModel::IAssignExpression^>(A_0)==nullptr)goto IL_01d7;//brfalse				IL_01d7
	IL_070e:                                                                        //ldc.i4				0x2a
	IL_0713:            V_1=42;                                                     //stloc				V_1
	IL_0717:            /*goto IL_0019;*/goto IL_071c;                              //br				IL_0019
	IL_071c:            goto IL_052b;                                               //br				IL_052b
	IL_0721:                                                                        //ldc.i4				0x22
	IL_0726:            V_1=34;                                                     //stloc				V_1
	IL_072a:            /*goto IL_0019;*/goto IL_072f;                              //br				IL_0019
	IL_072f:                                                                        //ldarg.1
	IL_0730:                                                                        //isinst				Reflector::CodeModel::IAddressReferenceExpression
	IL_0735:            if(dynamic_cast<Reflector::CodeModel::IAddressReferenceExpression^>(A_0)==nullptr)goto IL_0538;//brfalse				IL_0538
	IL_073a:                                                                        //ldc.i4				0x54
	IL_073f:            V_1=84;                                                     //stloc				V_1
	IL_0743:            /*goto IL_0019;*/goto IL_0748;                              //br				IL_0019
	IL_0748:            goto IL_0942;                                               //br				IL_0942
	IL_074d:                                                                        //ldc.i4				0x59
	IL_0752:            V_1=89;                                                     //stloc				V_1
	IL_0756:            /*goto IL_0019;*/goto IL_075b;                              //br				IL_0019
	IL_075b:                                                                        //ldarg.1
	IL_075c:                                                                        //isinst				Reflector::CodeModel::IConditionExpression
	IL_0761:            if(dynamic_cast<Reflector::CodeModel::IConditionExpression^>(A_0)==nullptr)goto IL_07d2;//brfalse.s				IL_07d2
	IL_0763:                                                                        //ldc.i4				0x47
	IL_0768:            V_1=71;                                                     //stloc				V_1
	IL_076c:            /*goto IL_0019;*/goto IL_0771;                              //br				IL_0019
	IL_0771:            goto IL_023c;                                               //br				IL_023c
	IL_0776:                                                                        //ldc.i4				0x18
	IL_077b:            V_1=24;                                                     //stloc				V_1
	IL_077f:            /*goto IL_0019;*/goto IL_0784;                              //br				IL_0019
	IL_0784:                                                                        //ldarg.1
	IL_0785:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_078a:            if(dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(A_0)==nullptr)goto IL_041e;//brfalse				IL_041e
	IL_078f:                                                                        //ldc.i4				0x3b
	IL_0794:            V_1=59;                                                     //stloc				V_1
	IL_0798:            /*goto IL_0019;*/goto IL_079d;                              //br				IL_0019
	IL_079d:            goto IL_07c5;                                               //br.s				IL_07c5
	IL_079f:                                                                        //ldc.i4				0x17
	IL_07a4:            V_1=23;                                                     //stloc				V_1
	IL_07a8:            /*goto IL_0019;*/goto IL_07ad;                              //br				IL_0019
	IL_07ad:                                                                        //ldarg.1
	IL_07ae:                                                                        //isinst				Reflector::CodeModel::IMethodOfExpression
	IL_07b3:            if(dynamic_cast<Reflector::CodeModel::IMethodOfExpression^>(A_0)==nullptr)goto IL_0776;//brfalse.s				IL_0776
	IL_07b5:                                                                        //ldc.i4				0x3f
	IL_07ba:            V_1=63;                                                     //stloc				V_1
	IL_07be:            /*goto IL_0019;*/goto IL_07c3;                              //br				IL_0019
	IL_07c3:            goto IL_0818;                                               //br.s				IL_0818
	IL_07c5:                                                                        //ldarg.0
	IL_07c6:                                                                        //ldarg.1
	IL_07c7:                                                                        //isinst				Reflector::CodeModel::INamedArgumentExpression
	IL_07cc:            this->M_x1(dynamic_cast<Reflector::CodeModel::INamedArgumentExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::INamedArgumentExpression^)
	IL_07d1:            return;                                                     //ret
	IL_07d2:                                                                        //ldc.i4				0x43
	IL_07d7:            V_1=67;                                                     //stloc				V_1
	IL_07db:            /*goto IL_0019;*/goto IL_07e0;                              //br				IL_0019
	IL_07e0:                                                                        //ldarg.1
	IL_07e1:                                                                        //isinst				Reflector::CodeModel::INullCoalescingExpression
	IL_07e6:            if(dynamic_cast<Reflector::CodeModel::INullCoalescingExpression^>(A_0)==nullptr)goto IL_059d;//brfalse				IL_059d
	IL_07eb:                                                                        //ldc.i4				0x24
	IL_07f0:            V_1=36;                                                     //stloc				V_1
	IL_07f4:            /*goto IL_0019;*/goto IL_07f9;                              //br				IL_0019
	IL_07f9:            goto IL_0693;                                               //br				IL_0693
	IL_07fe:                                                                        //ldarg.0
	IL_07ff:                                                                        //ldarg.1
	IL_0800:                                                                        //isinst				Reflector::CodeModel::IStackAllocateExpression
	IL_0805:            this->M_x1(dynamic_cast<Reflector::CodeModel::IStackAllocateExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStackAllocateExpression^)
	IL_080a:            return;                                                     //ret
	IL_080b:                                                                        //ldarg.0
	IL_080c:                                                                        //ldarg.1
	IL_080d:                                                                        //isinst				Reflector::CodeModel::IEventReferenceExpression
	IL_0812:            this->M_x1(dynamic_cast<Reflector::CodeModel::IEventReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0817:            return;                                                     //ret
	IL_0818:                                                                        //ldarg.0
	IL_0819:                                                                        //ldarg.1
	IL_081a:                                                                        //isinst				Reflector::CodeModel::IMethodOfExpression
	IL_081f:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodOfExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodOfExpression^)
	IL_0824:            return;                                                     //ret
	IL_0825:                                                                        //ldarg.0
	IL_0826:                                                                        //ldarg.1
	IL_0827:                                                                        //isinst				Reflector::CodeModel::IPropertyIndexerExpression
	IL_082c:            this->M_x1(dynamic_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^)
	IL_0831:            return;                                                     //ret
	IL_0832:                                                                        //ldc.i4				0x4c
	IL_0837:            V_1=76;                                                     //stloc				V_1
	IL_083b:            /*goto IL_0019;*/goto IL_0840;                              //br				IL_0019
	IL_0840:                                                                        //ldarg.1
	IL_0841:                                                                        //isinst				Reflector::CodeModel::IAddressDereferenceExpression
	IL_0846:            if(dynamic_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(A_0)==nullptr)goto IL_0395;//brfalse				IL_0395
	IL_084b:                                                                        //ldc.i4				0xd
	IL_0850:            V_1=13;                                                     //stloc				V_1
	IL_0854:            /*goto IL_0019;*/goto IL_0859;                              //br				IL_0019
	IL_0859:            goto IL_01ca;                                               //br				IL_01ca
	IL_085e:                                                                        //ldarg.0
	IL_085f:                                                                        //ldarg.1
	IL_0860:                                                                        //isinst				Reflector::CodeModel::IArrayCreateExpression
	IL_0865:            this->M_x1(dynamic_cast<Reflector::CodeModel::IArrayCreateExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayCreateExpression^)
	IL_086a:            return;                                                     //ret
	IL_086b:                                                                        //ldc.i4				0x4a
	IL_0870:            V_1=74;                                                     //stloc				V_1
	IL_0874:            /*goto IL_0019;*/goto IL_0879;                              //br				IL_0019
	IL_0879:                                                                        //ldarg.1
	IL_087a:                                                                        //isinst				Reflector::CodeModel::IThisReferenceExpression
	IL_087f:            if(dynamic_cast<Reflector::CodeModel::IThisReferenceExpression^>(A_0)==nullptr)goto IL_0571;//brfalse				IL_0571
	IL_0884:                                                                        //ldc.i4				0x3d
	IL_0889:            V_1=61;                                                     //stloc				V_1
	IL_088d:            /*goto IL_0019;*/goto IL_0892;                              //br				IL_0019
	IL_0892:            goto IL_02c3;                                               //br				IL_02c3
	IL_0897:                                                                        //ldc.i4				0x20
	IL_089c:            V_1=32;                                                     //stloc				V_1
	IL_08a0:            /*goto IL_0019;*/goto IL_08a5;                              //br				IL_0019
	IL_08a5:                                                                        //ldarg.1
	IL_08a6:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_08ab:            if(dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0)==nullptr)goto IL_09ed;//brfalse				IL_09ed
	IL_08b0:                                                                        //ldc.i4				0x21
	IL_08b5:            V_1=33;                                                     //stloc				V_1
	IL_08b9:            /*goto IL_0019;*/goto IL_08be;                              //br				IL_0019
	IL_08be:            goto IL_0564;                                               //br				IL_0564
	IL_08c3:                                                                        //ldarg.0
	IL_08c4:                                                                        //ldarg.1
	IL_08c5:                                                                        //isinst				Reflector::CodeModel::IPropertyReferenceExpression
	IL_08ca:            this->M_x1(dynamic_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_08cf:            return;                                                     //ret
	IL_08d0:                                                                        //ldc.i4				0x51
	IL_08d5:            V_1=81;                                                     //stloc				V_1
	IL_08d9:            /*goto IL_0019;*/goto IL_08de;                              //br				IL_0019
	IL_08de:                                                                        //ldarg.1
	IL_08df:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_08e4:            if(dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(A_0)==nullptr)goto IL_04c6;//brfalse				IL_04c6
	IL_08e9:                                                                        //ldc.i4				0x2e
	IL_08ee:            V_1=46;                                                     //stloc				V_1
	IL_08f2:            /*goto IL_0019;*/goto IL_08f7;                              //br				IL_0019
	IL_08f7:            goto IL_0411;                                               //br				IL_0411
	IL_08fc:                                                                        //ldarg.0
	IL_08fd:                                                                        //ldarg.1
	IL_08fe:                                                                        //isinst				Reflector::CodeModel::IArgumentReferenceExpression
	IL_0903:            this->M_x1(dynamic_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArgumentReferenceExpression^)
	IL_0908:            return;                                                     //ret
	IL_0909:                                                                        //ldc.i4				0x14
	IL_090e:            V_1=20;                                                     //stloc				V_1
	IL_0912:            /*goto IL_0019;*/goto IL_0917;                              //br				IL_0019
	IL_0917:                                                                        //ldarg.1
	IL_0918:                                                                        //isinst				Reflector::CodeModel::IArgumentListExpression
	IL_091d:            if(dynamic_cast<Reflector::CodeModel::IArgumentListExpression^>(A_0)==nullptr)goto IL_0a50;//brfalse				IL_0a50
	IL_0922:                                                                        //ldc.i4				0x9
	IL_0927:            V_1=9;                                                      //stloc				V_1
	IL_092b:            /*goto IL_0019;*/goto IL_0930;                              //br				IL_0019
	IL_0930:            goto IL_0404;                                               //br				IL_0404
	IL_0935:                                                                        //ldarg.0
	IL_0936:                                                                        //ldarg.1
	IL_0937:                                                                        //isinst				Reflector::CodeModel::IObjectCreateExpression
	IL_093c:            this->M_x1(dynamic_cast<Reflector::CodeModel::IObjectCreateExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IObjectCreateExpression^)
	IL_0941:            return;                                                     //ret
	IL_0942:                                                                        //ldarg.0
	IL_0943:                                                                        //ldarg.1
	IL_0944:                                                                        //isinst				Reflector::CodeModel::IAddressReferenceExpression
	IL_0949:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAddressReferenceExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAddressReferenceExpression^)
	IL_094e:            return;                                                     //ret
	IL_094f:                                                                        //ldc.i4				0x1e
	IL_0954:            V_1=30;                                                     //stloc				V_1
	IL_0958:            /*goto IL_0019;*/goto IL_095d;                              //br				IL_0019
	IL_095d:                                                                        //ldarg.1
	IL_095e:                                                                        //isinst				Reflector::CodeModel::IDelegateInvokeExpression
	IL_0963:            if(dynamic_cast<Reflector::CodeModel::IDelegateInvokeExpression^>(A_0)==nullptr)goto IL_0a19;//brfalse				IL_0a19
	IL_0968:                                                                        //ldc.i4				0x39
	IL_096d:            V_1=57;                                                     //stloc				V_1
	IL_0971:            /*goto IL_0019;*/goto IL_0976;                              //br				IL_0019
	IL_0976:            goto IL_01a3;                                               //br				IL_01a3
	IL_097b:                                                                        //ldarg.0
	IL_097c:                                                                        //ldarg.1
	IL_097d:                                                                        //isinst				Reflector::CodeModel::ICanCastExpression
	IL_0982:            this->M_x1(dynamic_cast<Reflector::CodeModel::ICanCastExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICanCastExpression^)
	IL_0987:            return;                                                     //ret
	IL_0988:                                                                        //ldc.i4				0x13
	IL_098d:            V_1=19;                                                     //stloc				V_1
	IL_0991:            /*goto IL_0019;*/goto IL_0996;                              //br				IL_0019
	IL_0996:                                                                        //ldarg.1
	IL_0997:                                                                        //isinst				Reflector::CodeModel::IPropertyIndexerExpression
	IL_099c:            if(dynamic_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(A_0)==nullptr)goto IL_0a7c;//brfalse				IL_0a7c
	IL_09a1:                                                                        //ldc.i4				0x16
	IL_09a6:            V_1=22;                                                     //stloc				V_1
	IL_09aa:            /*goto IL_0019;*/goto IL_09af;                              //br				IL_0019
	IL_09af:            goto IL_0825;                                               //br				IL_0825
	IL_09b4:                                                                        //ldc.i4				0x56
	IL_09b9:            V_1=86;                                                     //stloc				V_1
	IL_09bd:            /*goto IL_0019;*/goto IL_09c2;                              //br				IL_0019
	IL_09c2:                                                                        //ldarg.1
	IL_09c3:                                                                        //isinst				Reflector::CodeModel::IStackAllocateExpression
	IL_09c8:            if(dynamic_cast<Reflector::CodeModel::IStackAllocateExpression^>(A_0)==nullptr)goto IL_0af8;//brfalse				IL_0af8
	IL_09cd:                                                                        //ldc.i4				0x52
	IL_09d2:            V_1=82;                                                     //stloc				V_1
	IL_09d6:            /*goto IL_0019;*/goto IL_09db;                              //br				IL_0019
	IL_09db:            goto IL_07fe;                                               //br				IL_07fe
	IL_09e0:                                                                        //ldarg.0
	IL_09e1:                                                                        //ldarg.1
	IL_09e2:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_09e7:            this->M_x1(dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ILiteralExpression^)
	IL_09ec:            return;                                                     //ret
	IL_09ed:                                                                        //ldc.i4				0xc
	IL_09f2:            V_1=12;                                                     //stloc				V_1
	IL_09f6:            /*goto IL_0019;*/goto IL_09fb;                              //br				IL_0019
	IL_09fb:                                                                        //ldarg.1
	IL_09fc:                                                                        //isinst				Reflector::CodeModel::IPropertyReferenceExpression
	IL_0a01:            if(dynamic_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(A_0)==nullptr)goto IL_06f5;//brfalse				IL_06f5
	IL_0a06:                                                                        //ldc.i4				0x29
	IL_0a0b:            V_1=41;                                                     //stloc				V_1
	IL_0a0f:            /*goto IL_0019;*/goto IL_0a14;                              //br				IL_0019
	IL_0a14:            goto IL_08c3;                                               //br				IL_08c3
	IL_0a19:                                                                        //ldc.i4				0x32
	IL_0a1e:            V_1=50;                                                     //stloc				V_1
	IL_0a22:            /*goto IL_0019;*/goto IL_0a27;                              //br				IL_0019
	IL_0a27:                                                                        //ldc.i4.0
	IL_0a28:                                                                        //dup
	IL_0a29:                                                                        //dup
	IL_0a2a:                                                                        //ldc.i4.6
	IL_0a2b:                                                                        //add
	IL_0a2c:                                                                        //bgt				IL_0a28
	IL_0a31:                                                                        //pop
	IL_0a32:                                                                        //ldarg.1
	IL_0a33:                                                                        //isinst				Reflector::CodeModel::IObjectCreateExpression
	IL_0a38:            if(dynamic_cast<Reflector::CodeModel::IObjectCreateExpression^>(A_0)==nullptr)goto IL_0602;//brfalse				IL_0602
	IL_0a3d:                                                                        //ldc.i4				0x25
	IL_0a42:            V_1=37;                                                     //stloc				V_1
	IL_0a46:            /*goto IL_0019;*/goto IL_0a4b;                              //br				IL_0019
	IL_0a4b:            goto IL_0935;                                               //br				IL_0935
	IL_0a50:                                                                        //ldc.i4				0x1d
	IL_0a55:            V_1=29;                                                     //stloc				V_1
	IL_0a59:            /*goto IL_0019;*/goto IL_0a5e;                              //br				IL_0019
	IL_0a5e:                                                                        //ldarg.1
	IL_0a5f:                                                                        //isinst				Reflector::CodeModel::IArrayCreateExpression
	IL_0a64:            if(dynamic_cast<Reflector::CodeModel::IArrayCreateExpression^>(A_0)==nullptr)goto IL_06cc;//brfalse				IL_06cc
	IL_0a69:                                                                        //ldc.i4				0x3
	IL_0a6e:            V_1=3;                                                      //stloc				V_1
	IL_0a72:            /*goto IL_0019;*/goto IL_0a77;                              //br				IL_0019
	IL_0a77:            goto IL_085e;                                               //br				IL_085e
	IL_0a7c:                                                                        //ldc.i4				0x33
	IL_0a81:            V_1=51;                                                     //stloc				V_1
	IL_0a85:            /*goto IL_0019;*/goto IL_0a8a;                              //br				IL_0019
	IL_0a8a:                                                                        //ldarg.1
	IL_0a8b:                                                                        //isinst				Reflector::CodeModel::IArrayIndexerExpression
	IL_0a90:            if(dynamic_cast<Reflector::CodeModel::IArrayIndexerExpression^>(A_0)==nullptr)goto IL_094f;//brfalse				IL_094f
	IL_0a95:                                                                        //ldc.i4				0x45
	IL_0a9a:            V_1=69;                                                     //stloc				V_1
	IL_0a9e:            /*goto IL_0019;*/goto IL_0aa3;                              //br				IL_0019
	IL_0aa3:            goto IL_0203;                                               //br				IL_0203
	IL_0aa8:                                                                        //ldarg.0
	IL_0aa9:                                                                        //ldarg.1
	IL_0aaa:                                                                        //isinst				Reflector::CodeModel::ITypeOfExpression
	IL_0aaf:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITypeOfExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeOfExpression^)
	IL_0ab4:            return;                                                     //ret
	IL_0ab5:                                                                        //ldarg.0
	IL_0ab6:                                                                        //ldarg.1
	IL_0ab7:                                                                        //isinst				Reflector::CodeModel::IObjectInitializeExpression
	IL_0abc:            this->M_x1(dynamic_cast<Reflector::CodeModel::IObjectInitializeExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IObjectInitializeExpression^)
	IL_0ac1:            return;                                                     //ret
	IL_0ac2:                                                                        //ldc.i4				0x44
	IL_0ac7:            V_1=68;                                                     //stloc				V_1
	IL_0acb:            /*goto IL_0019;*/goto IL_0ad0;                              //br				IL_0019
	IL_0ad0:                                                                        //ldarg.1
	IL_0ad1:                                                                        //isinst				Reflector::CodeModel::ITryCastExpression
	IL_0ad6:            if(dynamic_cast<Reflector::CodeModel::ITryCastExpression^>(A_0)==nullptr)goto IL_044a;//brfalse				IL_044a
	IL_0adb:                                                                        //ldc.i4				0x30
	IL_0ae0:            V_1=48;                                                     //stloc				V_1
	IL_0ae4:            /*goto IL_0019;*/goto IL_0ae9;                              //br				IL_0019
	IL_0ae9:            goto IL_0b47;                                               //br.s				IL_0b47
	IL_0aeb:                                                                        //ldarg.0
	IL_0aec:                                                                        //ldarg.1
	IL_0aed:                                                                        //isinst				Reflector::CodeModel::ISnippetExpression
	IL_0af2:            this->M_x1(dynamic_cast<Reflector::CodeModel::ISnippetExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ISnippetExpression^)
	IL_0af7:            return;                                                     //ret
	IL_0af8:                                                                        //ldc.i4				0x10
	IL_0afd:            V_1=16;                                                     //stloc				V_1
	IL_0b01:            /*goto IL_0019;*/goto IL_0b06;                              //br				IL_0019
	IL_0b06:                                                                        //ldarg.1
	IL_0b07:                                                                        //isinst				Reflector::CodeModel::IGenericDefaultExpression
	IL_0b0c:            if(dynamic_cast<Reflector::CodeModel::IGenericDefaultExpression^>(A_0)==nullptr)goto IL_0b21;//brfalse.s				IL_0b21
	IL_0b0e:                                                                        //ldc.i4				0x2d
	IL_0b13:            V_1=45;                                                     //stloc				V_1
	IL_0b17:            /*goto IL_0019;*/goto IL_0b1c;                              //br				IL_0019
	IL_0b1c:            goto IL_029b;                                               //br				IL_029b
	IL_0b21:                                                                        //ldc.i4				0x57
	IL_0b26:            V_1=87;                                                     //stloc				V_1
	IL_0b2a:            /*goto IL_0019;*/goto IL_0b2f;                              //br				IL_0019
	IL_0b2f:                                                                        //ldarg.1
	IL_0b30:                                                                        //isinst				Reflector::CodeModel::ISnippetExpression
	IL_0b35:            if(dynamic_cast<Reflector::CodeModel::ISnippetExpression^>(A_0)==nullptr)goto IL_0b54;//brfalse.s				IL_0b54
	IL_0b37:                                                                        //ldc.i4				0x2f
	IL_0b3c:            V_1=47;                                                     //stloc				V_1
	IL_0b40:            /*goto IL_0019;*/goto IL_0b45;                              //br				IL_0019
	IL_0b45:            goto IL_0aeb;                                               //br.s				IL_0aeb
	IL_0b47:                                                                        //ldarg.0
	IL_0b48:                                                                        //ldarg.1
	IL_0b49:                                                                        //isinst				Reflector::CodeModel::ITryCastExpression
	IL_0b4e:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITryCastExpression^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITryCastExpression^)
	IL_0b53:            return;                                                     //ret
	IL_0b54:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0b59:                                                                        //ldstr				L"\x6D23\x4825\x5E27\x4B29\x402B\x472D\x542F\x1231\x5133\x4E35\x4837\x4839\x593B\x4D3D\x333F\x2B41\x2B43\x2845\x6847\x3E49\x354B\x3E4D\x354F\x7251\x7353\x2D55\x6857\x2759\x7B5B\x705D"
	IL_0b5e:                                                                        //ldloc				V_2
	IL_0b62:            Temp_1=a(L"\x6D23\x4825\x5E27\x4B29\x402B\x472D\x542F\x1231\x5133\x4E35\x4837\x4839\x593B\x4D3D\x333F\x2B41\x2B43\x2845\x6847\x3E49\x354B\x3E4D\x354F\x7251\x7353\x2D55\x6857\x2759\x7B5B\x705D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b67:                                                                        //ldc.i4.1
	IL_0b68:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0b6d:            V_0=Temp_2;                                                 //stloc.0
	IL_0b6e:                                                                        //ldloc.0
	IL_0b6f:                                                                        //ldc.i4.0
	IL_0b70:                                                                        //ldarg.1
	IL_0b71:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0b76:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0b7b:            V_0[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_0b7c:                                                                        //ldloc.0
	IL_0b7d:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0b82:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0b87:            throw Temp_6;                                               //throw

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0033;case 2:goto IL_0040;case 3:goto IL_0072;};//switch				(IL_0054,IL_0033,IL_0040,IL_0072)
	IL_001b:                                                                        //ldc.i4.2
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.2
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
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
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_1=3;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionStatement::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=safe_cast<Reflector::CodeModel::IFieldReference^>(A_0)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0013:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFieldDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0028;case 1:goto IL_0035;case 2:goto IL_006a;case 3:goto IL_004c;};//switch				(IL_0028,IL_0035,IL_006a,IL_004c)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x0
	IL_0022:            V_1=0;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_1=1;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_003e:            goto IL_0041;                                               //br.s				IL_0041
	IL_0040:                                                                        //break
	IL_0041:                                                                        //ldc.i4				0x3
	IL_0046:            V_1=3;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_006c;                                               //br.s				IL_006c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_1=2;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_002a;                                               //br.s				IL_002a
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldOfExpression::get_Field()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldReferenceExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFileResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFixedStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IFixedStatement::get_Variable()
	IL_000a:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFixedStatement::get_Expression()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IFixedStatement::get_Body()
	IL_0022:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IForEachStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IForEachStatement::get_Variable()
	IL_000a:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForEachStatement::get_Expression()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForEachStatement::get_Body()
	IL_0022:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IForStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Initializer()
	IL_0012:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForStatement::get_Condition()
	IL_001e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Increment;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Increment()
	IL_002a:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_3=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForStatement::get_Body()
	IL_0036:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_3));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_003b:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IFunctionPointer^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IGenericArgument^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IGenericParameter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IGotoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ILiteralExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ILockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ILockStatement::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ILockStatement::get_Body()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
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
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Source;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Source()
	IL_0012:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=A_0->Destination;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Destination()
	IL_001e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Length()
	IL_002a:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_002f:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->Offset;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Offset()
	IL_000a:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Value()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Length()
	IL_0022:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IBlockStatement^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_006c;case 1:goto IL_005e;case 2:goto IL_008e;};//switch				(IL_006c,IL_005e,IL_008e)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_001e:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_1=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_002a:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_2=A_0->Overrides;                                      //callvirt				Reflector::CodeModel::IMethodReferenceCollection^ Reflector::CodeModel::IMethodDeclaration::get_Overrides()
	IL_0036:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReferenceCollection^)
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldarg.1
	IL_003d:            Temp_3=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0042:            this->M_x1(Temp_3);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReturnType^)
	IL_0047:                                                                        //ldarg.1
	IL_0048:            Temp_4=A_0->Body;                                           //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_004d:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_0052:            V_0=dynamic_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//stloc.0
	IL_0053:                                                                        //ldc.i4				0x1
	IL_0058:            V_1=1;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:                                                                        //ldloc.0
	IL_005f:            if(V_0==nullptr)goto IL_0090;                               //brfalse.s				IL_0090
	IL_0061:                                                                        //ldc.i4				0x0
	IL_0066:            V_1=0;                                                      //stloc				V_1
	IL_006a:            /*goto IL_0002;*/goto IL_006c;                              //br.s				IL_0002
	IL_006c:            goto IL_006e;                                               //br.s				IL_006e
	IL_006e:                                                                        //ldarg.0
	IL_006f:                                                                        //ldloc.0
	IL_0070:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(V_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0075:                                                                        //ldc.i4.4
	IL_0076:                                                                        //dup
	IL_0077:                                                                        //dup
	IL_0078:                                                                        //ldc.i4.2
	IL_0079:                                                                        //sub
	IL_007a:                                                                        //blt				IL_0076
	IL_007f:                                                                        //pop
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_1=2;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:            goto IL_0090;                                               //br.s				IL_0090
	IL_0090:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001e;                                               //br.s				IL_001e
	IL_0002:            goto IL_0005;                                               //br.s				IL_0005
	IL_0004:                                                                        //break
	IL_0005:                                                                        //ldloc				V_1
	IL_0009:            switch(V_1){case 0:goto IL_004c;case 1:goto IL_006a;case 2:goto IL_0038;case 3:goto IL_002b;};//switch				(IL_004c,IL_006a,IL_0038,IL_002b)
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x3
	IL_0025:            V_1=3;                                                      //stloc				V_1
	IL_0029:            goto IL_0002;                                               //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            goto IL_0002;                                               //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x0
	IL_0046:            V_1=0;                                                      //stloc				V_1
	IL_004a:            goto IL_0002;                                               //br.s				IL_0002
	IL_004c:            goto IL_006c;                                               //br.s				IL_006c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x1
	IL_0064:            V_1=1;                                                      //stloc				V_1
	IL_0068:            goto IL_0002;                                               //br.s				IL_0002
	IL_006a:            goto IL_002d;                                               //br.s				IL_002d
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Method;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodOfExpression::get_Method()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReturnType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReturnType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReferenceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_004c;case 1:goto IL_0038;case 2:goto IL_002b;case 3:goto IL_006a;};//switch				(IL_004c,IL_0038,IL_002b,IL_006a)
	IL_001b:            goto IL_001e;                                               //br.s				IL_001e
	IL_001d:                                                                        //break
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            V_0=0;                                                      //stloc.0
	IL_0020:                                                                        //ldc.i4				0x2
	IL_0025:            V_1=2;                                                      //stloc				V_1
	IL_0029:            /*goto IL_0002;*/goto IL_002b;                              //br.s				IL_0002
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_1=1;                                                      //stloc				V_1
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x0
	IL_0046:            V_1=0;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_006c;                                               //br.s				IL_006c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x3
	IL_0064:            V_1=3;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_002d;                                               //br.s				IL_002d
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReferenceExpression::get_Target()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReturnStatement::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReturnType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0013:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IModuleCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0040;case 1:goto IL_0033;case 2:goto IL_0054;case 3:goto IL_0072;};//switch				(IL_0040,IL_0033,IL_0054,IL_0072)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.2
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x1
	IL_002d:            V_1=1;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x0
	IL_003a:            V_1=0;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_1=2;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IModule^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_1=3;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IModuleReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Condition()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IObjectInitializeExpression::get_Type()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IOptionalModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_0007:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0013:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_000a:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->ParameterType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0016:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->DefaultValue;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IParameterDeclaration::get_DefaultValue()
	IL_0022:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IParameterDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0035;case 1:goto IL_0049;case 2:goto IL_0028;case 3:goto IL_0072;};//switch				(IL_0035,IL_0049,IL_0028,IL_0072)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x2
	IL_0022:            V_1=2;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_1=0;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.1
	IL_0037:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_1=1;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_0074;                                               //br.s				IL_0074
	IL_004b:                                                                        //ldc.i4.5
	IL_004c:                                                                        //dup
	IL_004d:                                                                        //dup
	IL_004e:                                                                        //ldc.i4.3
	IL_004f:                                                                        //sub
	IL_0050:                                                                        //blt				IL_004c
	IL_0055:                                                                        //pop
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IParameterDeclaration^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_1=3;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_002a;                                               //br.s				IL_002a
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPointerType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=safe_cast<Reflector::CodeModel::IPropertyReference^>(A_0)->PropertyType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0013:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0026;                                               //br.s				IL_0026
	IL_0002:                                                                        //ldc.i4.1
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0033;case 1:goto IL_0040;case 2:goto IL_0054;case 3:goto IL_0072;};//switch				(IL_0033,IL_0040,IL_0054,IL_0072)
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x0
	IL_002d:            V_1=0;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_1=2;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyDeclarationCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_1=3;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpressionCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IPropertyReferenceExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionCollection^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IPropertyReferenceExpression^ Reflector::CodeModel::IPropertyIndexerExpression::get_Target()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IExpression^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Property;                                       //callvirt				Reflector::CodeModel::IPropertyReference^ Reflector::CodeModel::IPropertyReferenceExpression::get_Property()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IPropertyReferenceExpression::get_Target()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IReferenceType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Event()
	IL_0007:            this->M_x1(safe_cast<Reflector::CodeModel::IExpression^>(Temp_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Listener()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IRequiredModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0007:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0013:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IEmbeddedResource^ V_0 = nullptr;
	Reflector::CodeModel::IFileResource^ V_1 = nullptr;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_4=8;                                                      //stloc				V_4
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_004f;case 1:goto IL_003e;case 2:goto IL_0085;case 3:goto IL_009c;case 4:goto IL_0063;case 5:goto IL_0077;};//switch				(IL_004f,IL_003e,IL_0085,IL_009c,IL_0063,IL_0077)
	IL_002c:                                                                        //ldarg.1
	IL_002d:                                                                        //isinst				Reflector::CodeModel::IEmbeddedResource
	IL_0032:            V_0=dynamic_cast<Reflector::CodeModel::IEmbeddedResource^>(A_0);//stloc.0
	IL_0033:                                                                        //ldc.i4				0x1
	IL_0038:            V_3=1;                                                      //stloc				V_3
	IL_003c:            /*goto IL_000b;*/goto IL_003e;                              //br.s				IL_000b
	IL_003e:                                                                        //ldloc.0
	IL_003f:            if(V_0==nullptr)goto IL_0065;                               //brfalse.s				IL_0065
	IL_0041:            goto IL_0044;                                               //br.s				IL_0044
	IL_0043:                                                                        //break
	IL_0044:                                                                        //ldc.i4				0x0
	IL_0049:            V_3=0;                                                      //stloc				V_3
	IL_004d:            /*goto IL_000b;*/goto IL_004f;                              //br.s				IL_000b
	IL_004f:            goto IL_0087;                                               //br.s				IL_0087
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldloc.1
	IL_0053:            this->M_x1(V_1);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFileResource^)
	IL_0058:                                                                        //ldc.i4				0x4
	IL_005d:            V_3=4;                                                      //stloc				V_3
	IL_0061:            /*goto IL_000b;*/goto IL_0063;                              //br.s				IL_000b
	IL_0063:            goto IL_009e;                                               //br.s				IL_009e
	IL_0065:                                                                        //ldarg.1
	IL_0066:                                                                        //isinst				Reflector::CodeModel::IFileResource
	IL_006b:            V_1=dynamic_cast<Reflector::CodeModel::IFileResource^>(A_0);//stloc.1
	IL_006c:                                                                        //ldc.i4				0x5
	IL_0071:            V_3=5;                                                      //stloc				V_3
	IL_0075:            /*goto IL_000b;*/goto IL_0077;                              //br.s				IL_000b
	IL_0077:                                                                        //ldloc.1
	IL_0078:            if(V_1==nullptr)goto IL_009e;                               //brfalse.s				IL_009e
	IL_007a:                                                                        //ldc.i4				0x2
	IL_007f:            V_3=2;                                                      //stloc				V_3
	IL_0083:            /*goto IL_000b;*/goto IL_0085;                              //br.s				IL_000b
	IL_0085:            goto IL_0051;                                               //br.s				IL_0051
	IL_0087:                                                                        //ldarg.0
	IL_0088:                                                                        //ldloc.0
	IL_0089:            this->M_x1(V_0);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IEmbeddedResource^)
	IL_008e:                                                                        //ldc.i4				0x3
	IL_0093:            V_3=3;                                                      //stloc				V_3
	IL_0097:            /*goto IL_000b;*/goto IL_009c;                              //br				IL_000b
	IL_009c:            goto IL_0065;                                               //br.s				IL_0065
	IL_009e:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a3:                                                                        //ldstr				L"\x6F25\x4627\x5C29\x4D2B\x422D\x592F\x5631\x1433\x4435\x5D37\x4939\x533B\x4B3D\x323F\x2141\x2143\x6645\x3C47\x3349\x3C4B\x2B4D\x704F\x7551\x2F53\x6655\x2557\x7D59\x725B"
	IL_00a8:                                                                        //ldloc				V_4
	IL_00ac:            Temp_1=a(L"\x6F25\x4627\x5C29\x4D2B\x422D\x592F\x5631\x1433\x4435\x5D37\x4939\x533B\x4B3D\x323F\x2141\x2143\x6645\x3C47\x3349\x3C4B\x2B4D\x704F\x7551\x2F53\x6655\x2557\x7D59\x725B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b1:                                                                        //ldc.i4.1
	IL_00b2:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_00b7:            V_2=Temp_2;                                                 //stloc.2
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:                                                                        //ldc.i4.0
	IL_00ba:                                                                        //ldarg.1
	IL_00bb:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_00c0:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00c5:            V_2[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_00c6:                                                                        //ldloc.2
	IL_00c7:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00cc:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_00d1:            throw Temp_6;                                               //throw

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IResourceCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IResource^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_006a;case 1:goto IL_004c;case 2:goto IL_0035;case 3:goto IL_0028;};//switch				(IL_006a,IL_004c,IL_0035,IL_0028)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4				0x3
	IL_0022:            V_1=3;                                                      //stloc				V_1
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:            goto IL_002a;                                               //br.s				IL_002a
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_1=2;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:            goto IL_0038;                                               //br.s				IL_0038
	IL_0037:                                                                        //break
	IL_0038:                                                                        //ldloc.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:            if(V_0<Temp_0)goto IL_004e;                                 //blt.s				IL_004e
	IL_0041:                                                                        //ldc.i4				0x1
	IL_0046:            V_1=1;                                                      //stloc				V_1
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_006c;                                               //br.s				IL_006c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IResource^ Reflector::CodeModel::IResourceCollection::get_Item(System::Int32)
	IL_0056:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IResource^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:                                                                        //add
	IL_005e:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_1=0;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_002a;                                               //br.s				IL_002a
	IL_006c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ISizeOfExpression::get_Type()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ISnippetExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IStackAllocateExpression::get_Type()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IStackAllocateExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x29
	IL_000e:            V_1=41;                                                     //stloc				V_1
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00e2;                                               //br				IL_00e2
	IL_0019:                                                                        //ldloc				V_1
	IL_001d:            switch(V_1){case 0:goto IL_014d;case 1:goto IL_027b;case 2:goto IL_020a;case 3:goto IL_024f;case 4:goto IL_0236;case 5:goto IL_0166;case 6:goto IL_028e;case 7:goto IL_052a;case 8:goto IL_019f;case 9:goto IL_01f7;case 10:goto IL_02ba;case 11:goto IL_058f;case 12:goto IL_04bd;case 13:goto IL_03bf;case 14:goto IL_03dc;case 15:goto IL_05a8;case 16:goto IL_0333;case 17:goto IL_012d;case 18:goto IL_02a7;case 19:goto IL_05bb;case 20:goto IL_04ad;case 21:goto IL_0114;case 22:goto IL_00f6;case 23:goto IL_0186;case 24:goto IL_0223;case 25:goto IL_037a;case 26:goto IL_01b2;case 27:goto IL_02f4;case 28:goto IL_03a6;case 29:goto IL_031d;case 30:goto IL_0563;case 31:goto IL_0448;case 32:goto IL_02d3;case 33:goto IL_042f;case 34:goto IL_030d;case 35:goto IL_057c;case 36:goto IL_05d4;case 37:goto IL_01de;case 38:goto IL_0262;case 39:goto IL_04d6;case 40:goto IL_0474;case 41:goto IL_0014;case 42:goto IL_0494;case 43:goto IL_01cb;case 44:goto IL_03f5;case 45:goto IL_0543;case 46:goto IL_0393;case 47:goto IL_045b;};//switch				(IL_014d,IL_027b,IL_020a,IL_024f,IL_0236,IL_0166,IL_028e,IL_052a,IL_019f,IL_01f7,IL_02ba,IL_058f,IL_04bd,IL_03bf,IL_03dc,IL_05a8,IL_0333,IL_012d,IL_02a7,IL_05bb,IL_04ad,IL_0114,IL_00f6,IL_0186,IL_0223,IL_037a,IL_01b2,IL_02f4,IL_03a6,IL_031d,IL_0563,IL_0448,IL_02d3,IL_042f,IL_030d,IL_057c,IL_05d4,IL_01de,IL_0262,IL_04d6,IL_0474,IL_0014,IL_0494,IL_01cb,IL_03f5,IL_0543,IL_0393,IL_045b)
	IL_00e2:                                                                        //ldarg.1
	IL_00e3:            if(A_0!=nullptr)goto IL_044d;                               //brtrue				IL_044d
	IL_00e8:                                                                        //ldc.i4				0x16
	IL_00ed:            V_1=22;                                                     //stloc				V_1
	IL_00f1:            /*goto IL_0019;*/goto IL_00f6;                              //br				IL_0019
	IL_00f6:            goto IL_02d8;                                               //br				IL_02d8
	IL_00fb:                                                                        //ldc.i4.5
	IL_00fc:                                                                        //dup
	IL_00fd:                                                                        //dup
	IL_00fe:                                                                        //ldc.i4.6
	IL_00ff:                                                                        //add
	IL_0100:                                                                        //bgt				IL_00fc
	IL_0105:                                                                        //pop
	IL_0106:                                                                        //ldc.i4				0x15
	IL_010b:            V_1=21;                                                     //stloc				V_1
	IL_010f:            /*goto IL_0019;*/goto IL_0114;                              //br				IL_0019
	IL_0114:                                                                        //ldarg.1
	IL_0115:                                                                        //isinst				Reflector::CodeModel::IContinueStatement
	IL_011a:            if(dynamic_cast<Reflector::CodeModel::IContinueStatement^>(A_0)==nullptr)goto IL_04af;//brfalse				IL_04af
	IL_011f:                                                                        //ldc.i4				0x11
	IL_0124:            V_1=17;                                                     //stloc				V_1
	IL_0128:            /*goto IL_0019;*/goto IL_012d;                              //br				IL_0019
	IL_012d:            goto IL_0600;                                               //br				IL_0600
	IL_0132:                                                                        //ldarg.0
	IL_0133:                                                                        //ldarg.1
	IL_0134:                                                                        //isinst				Reflector::CodeModel::IAttachEventStatement
	IL_0139:            this->M_x1(dynamic_cast<Reflector::CodeModel::IAttachEventStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IAttachEventStatement^)
	IL_013e:            return;                                                     //ret
	IL_013f:                                                                        //ldc.i4				0x0
	IL_0144:            V_1=0;                                                      //stloc				V_1
	IL_0148:            /*goto IL_0019;*/goto IL_014d;                              //br				IL_0019
	IL_014d:                                                                        //ldarg.1
	IL_014e:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_0153:            if(dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(A_0)==nullptr)goto IL_0228;//brfalse				IL_0228
	IL_0158:                                                                        //ldc.i4				0x5
	IL_015d:            V_1=5;                                                      //stloc				V_1
	IL_0161:            /*goto IL_0019;*/goto IL_0166;                              //br				IL_0019
	IL_0166:            goto IL_03c1;                                               //br				IL_03c1
	IL_016b:                                                                        //ldarg.0
	IL_016c:                                                                        //ldarg.1
	IL_016d:                                                                        //isinst				Reflector::CodeModel::IUsingStatement
	IL_0172:            this->M_x1(dynamic_cast<Reflector::CodeModel::IUsingStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IUsingStatement^)
	IL_0177:            return;                                                     //ret
	IL_0178:                                                                        //ldc.i4				0x17
	IL_017d:            V_1=23;                                                     //stloc				V_1
	IL_0181:            /*goto IL_0019;*/goto IL_0186;                              //br				IL_0019
	IL_0186:                                                                        //ldarg.1
	IL_0187:                                                                        //isinst				Reflector::CodeModel::IConditionStatement
	IL_018c:            if(dynamic_cast<Reflector::CodeModel::IConditionStatement^>(A_0)==nullptr)goto IL_02e6;//brfalse				IL_02e6
	IL_0191:                                                                        //ldc.i4				0x8
	IL_0196:            V_1=8;                                                      //stloc				V_1
	IL_019a:            /*goto IL_0019;*/goto IL_019f;                              //br				IL_0019
	IL_019f:            goto IL_0548;                                               //br				IL_0548
	IL_01a4:                                                                        //ldc.i4				0x1a
	IL_01a9:            V_1=26;                                                     //stloc				V_1
	IL_01ad:            /*goto IL_0019;*/goto IL_01b2;                              //br				IL_0019
	IL_01b2:                                                                        //ldarg.1
	IL_01b3:                                                                        //isinst				Reflector::CodeModel::IBreakStatement
	IL_01b8:            if(dynamic_cast<Reflector::CodeModel::IBreakStatement^>(A_0)==nullptr)goto IL_00fb;//brfalse				IL_00fb
	IL_01bd:                                                                        //ldc.i4				0x2b
	IL_01c2:            V_1=43;                                                     //stloc				V_1
	IL_01c6:            /*goto IL_0019;*/goto IL_01cb;                              //br				IL_0019
	IL_01cb:            goto IL_05d9;                                               //br				IL_05d9
	IL_01d0:                                                                        //ldc.i4				0x25
	IL_01d5:            V_1=37;                                                     //stloc				V_1
	IL_01d9:            /*goto IL_0019;*/goto IL_01de;                              //br				IL_0019
	IL_01de:                                                                        //ldarg.1
	IL_01df:                                                                        //isinst				Reflector::CodeModel::IMemoryCopyStatement
	IL_01e4:            if(dynamic_cast<Reflector::CodeModel::IMemoryCopyStatement^>(A_0)==nullptr)goto IL_0280;//brfalse				IL_0280
	IL_01e9:                                                                        //ldc.i4				0x9
	IL_01ee:            V_1=9;                                                      //stloc				V_1
	IL_01f2:            /*goto IL_0019;*/goto IL_01f7;                              //br				IL_0019
	IL_01f7:            goto IL_050f;                                               //br				IL_050f
	IL_01fc:                                                                        //ldc.i4				0x2
	IL_0201:            V_1=2;                                                      //stloc				V_1
	IL_0205:            /*goto IL_0019;*/goto IL_020a;                              //br				IL_0019
	IL_020a:                                                                        //ldarg.1
	IL_020b:                                                                        //isinst				Reflector::CodeModel::IAttachEventStatement
	IL_0210:            if(dynamic_cast<Reflector::CodeModel::IAttachEventStatement^>(A_0)==nullptr)goto IL_0421;//brfalse				IL_0421
	IL_0215:                                                                        //ldc.i4				0x18
	IL_021a:            V_1=24;                                                     //stloc				V_1
	IL_021e:            /*goto IL_0019;*/goto IL_0223;                              //br				IL_0019
	IL_0223:            goto IL_0132;                                               //br				IL_0132
	IL_0228:                                                                        //ldc.i4				0x4
	IL_022d:            V_1=4;                                                      //stloc				V_1
	IL_0231:            /*goto IL_0019;*/goto IL_0236;                              //br				IL_0019
	IL_0236:                                                                        //ldarg.1
	IL_0237:                                                                        //isinst				Reflector::CodeModel::IGotoStatement
	IL_023c:            if(dynamic_cast<Reflector::CodeModel::IGotoStatement^>(A_0)==nullptr)goto IL_030f;//brfalse				IL_030f
	IL_0241:                                                                        //ldc.i4				0x3
	IL_0246:            V_1=3;                                                      //stloc				V_1
	IL_024a:            /*goto IL_0019;*/goto IL_024f;                              //br				IL_0019
	IL_024f:            goto IL_0407;                                               //br				IL_0407
	IL_0254:                                                                        //ldc.i4				0x26
	IL_0259:            V_1=38;                                                     //stloc				V_1
	IL_025d:            /*goto IL_0019;*/goto IL_0262;                              //br				IL_0019
	IL_0262:                                                                        //ldarg.1
	IL_0263:                                                                        //isinst				Reflector::CodeModel::ILockStatement
	IL_0268:            if(dynamic_cast<Reflector::CodeModel::ILockStatement^>(A_0)==nullptr)goto IL_01d0;//brfalse				IL_01d0
	IL_026d:                                                                        //ldc.i4				0x1
	IL_0272:            V_1=1;                                                      //stloc				V_1
	IL_0276:            /*goto IL_0019;*/goto IL_027b;                              //br				IL_0019
	IL_027b:            goto IL_04e8;                                               //br				IL_04e8
	IL_0280:                                                                        //ldc.i4				0x6
	IL_0285:            V_1=6;                                                      //stloc				V_1
	IL_0289:            /*goto IL_0019;*/goto IL_028e;                              //br				IL_0019
	IL_028e:                                                                        //ldarg.1
	IL_028f:                                                                        //isinst				Reflector::CodeModel::IMemoryInitializeStatement
	IL_0294:            if(dynamic_cast<Reflector::CodeModel::IMemoryInitializeStatement^>(A_0)==nullptr)goto IL_061a;//brfalse				IL_061a
	IL_0299:                                                                        //ldc.i4				0x12
	IL_029e:            V_1=18;                                                     //stloc				V_1
	IL_02a2:            /*goto IL_0019;*/goto IL_02a7;                              //br				IL_0019
	IL_02a7:            goto IL_05f3;                                               //br				IL_05f3
	IL_02ac:                                                                        //ldc.i4				0xa
	IL_02b1:            V_1=10;                                                     //stloc				V_1
	IL_02b5:            /*goto IL_0019;*/goto IL_02ba;                              //br				IL_0019
	IL_02ba:                                                                        //ldarg.1
	IL_02bb:                                                                        //isinst				Reflector::CodeModel::IDoStatement
	IL_02c0:            if(dynamic_cast<Reflector::CodeModel::IDoStatement^>(A_0)==nullptr)goto IL_0486;//brfalse				IL_0486
	IL_02c5:                                                                        //ldc.i4				0x20
	IL_02ca:            V_1=32;                                                     //stloc				V_1
	IL_02ce:            /*goto IL_0019;*/goto IL_02d3;                              //br				IL_0019
	IL_02d3:            goto IL_035f;                                               //br				IL_035f
	IL_02d8:            return;                                                     //ret
	IL_02d9:                                                                        //ldarg.0
	IL_02da:                                                                        //ldarg.1
	IL_02db:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_02e0:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReturnStatement^)
	IL_02e5:            return;                                                     //ret
	IL_02e6:                                                                        //ldc.i4				0x1b
	IL_02eb:            V_1=27;                                                     //stloc				V_1
	IL_02ef:            /*goto IL_0019;*/goto IL_02f4;                              //br				IL_0019
	IL_02f4:                                                                        //ldarg.1
	IL_02f5:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_02fa:            if(dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0)==nullptr)goto IL_013f;//brfalse				IL_013f
	IL_02ff:                                                                        //ldc.i4				0x22
	IL_0304:            V_1=34;                                                     //stloc				V_1
	IL_0308:            /*goto IL_0019;*/goto IL_030d;                              //br				IL_0019
	IL_030d:            goto IL_02d9;                                               //br.s				IL_02d9
	IL_030f:                                                                        //ldc.i4				0x1d
	IL_0314:            V_1=29;                                                     //stloc				V_1
	IL_0318:            /*goto IL_0019;*/goto IL_031d;                              //br				IL_0019
	IL_031d:                                                                        //ldarg.1
	IL_031e:                                                                        //isinst				Reflector::CodeModel::IForStatement
	IL_0323:            if(dynamic_cast<Reflector::CodeModel::IForStatement^>(A_0)==nullptr)goto IL_0398;//brfalse.s				IL_0398
	IL_0325:                                                                        //ldc.i4				0x10
	IL_032a:            V_1=16;                                                     //stloc				V_1
	IL_032e:            /*goto IL_0019;*/goto IL_0333;                              //br				IL_0019
	IL_0333:            goto IL_03fa;                                               //br				IL_03fa
	IL_0338:                                                                        //ldarg.0
	IL_0339:                                                                        //ldarg.1
	IL_033a:                                                                        //isinst				Reflector::CodeModel::IFixedStatement
	IL_033f:            this->M_x1(dynamic_cast<Reflector::CodeModel::IFixedStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFixedStatement^)
	IL_0344:            return;                                                     //ret
	IL_0345:                                                                        //ldarg.0
	IL_0346:                                                                        //ldarg.1
	IL_0347:                                                                        //isinst				Reflector::CodeModel::ICommentStatement
	IL_034c:            this->M_x1(dynamic_cast<Reflector::CodeModel::ICommentStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICommentStatement^)
	IL_0351:            return;                                                     //ret
	IL_0352:                                                                        //ldarg.0
	IL_0353:                                                                        //ldarg.1
	IL_0354:                                                                        //isinst				Reflector::CodeModel::IWhileStatement
	IL_0359:            this->M_x1(dynamic_cast<Reflector::CodeModel::IWhileStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IWhileStatement^)
	IL_035e:            return;                                                     //ret
	IL_035f:                                                                        //ldarg.0
	IL_0360:                                                                        //ldarg.1
	IL_0361:                                                                        //isinst				Reflector::CodeModel::IDoStatement
	IL_0366:            this->M_x1(dynamic_cast<Reflector::CodeModel::IDoStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IDoStatement^)
	IL_036b:            return;                                                     //ret
	IL_036c:                                                                        //ldc.i4				0x19
	IL_0371:            V_1=25;                                                     //stloc				V_1
	IL_0375:            /*goto IL_0019;*/goto IL_037a;                              //br				IL_0019
	IL_037a:                                                                        //ldarg.1
	IL_037b:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_0380:            if(dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(A_0)==nullptr)goto IL_01a4;//brfalse				IL_01a4
	IL_0385:                                                                        //ldc.i4				0x2e
	IL_038a:            V_1=46;                                                     //stloc				V_1
	IL_038e:            /*goto IL_0019;*/goto IL_0393;                              //br				IL_0019
	IL_0393:            goto IL_060d;                                               //br				IL_060d
	IL_0398:                                                                        //ldc.i4				0x1c
	IL_039d:            V_1=28;                                                     //stloc				V_1
	IL_03a1:            /*goto IL_0019;*/goto IL_03a6;                              //br				IL_0019
	IL_03a6:                                                                        //ldarg.1
	IL_03a7:                                                                        //isinst				Reflector::CodeModel::IForEachStatement
	IL_03ac:            if(dynamic_cast<Reflector::CodeModel::IForEachStatement^>(A_0)==nullptr)goto IL_051c;//brfalse				IL_051c
	IL_03b1:                                                                        //ldc.i4				0xd
	IL_03b6:            V_1=13;                                                     //stloc				V_1
	IL_03ba:            /*goto IL_0019;*/goto IL_03bf;                              //br				IL_0019
	IL_03bf:            goto IL_0414;                                               //br.s				IL_0414
	IL_03c1:                                                                        //ldarg.0
	IL_03c2:                                                                        //ldarg.1
	IL_03c3:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_03c8:            this->M_x2(dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(A_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::ILabeledStatement^)
	IL_03cd:            return;                                                     //ret
	IL_03ce:                                                                        //ldc.i4				0xe
	IL_03d3:            V_1=14;                                                     //stloc				V_1
	IL_03d7:            /*goto IL_0019;*/goto IL_03dc;                              //br				IL_0019
	IL_03dc:                                                                        //ldarg.1
	IL_03dd:                                                                        //isinst				Reflector::CodeModel::IUsingStatement
	IL_03e2:            if(dynamic_cast<Reflector::CodeModel::IUsingStatement^>(A_0)==nullptr)goto IL_0555;//brfalse				IL_0555
	IL_03e7:                                                                        //ldc.i4				0x2c
	IL_03ec:            V_1=44;                                                     //stloc				V_1
	IL_03f0:            /*goto IL_0019;*/goto IL_03f5;                              //br				IL_0019
	IL_03f5:            goto IL_016b;                                               //br				IL_016b
	IL_03fa:                                                                        //ldarg.0
	IL_03fb:                                                                        //ldarg.1
	IL_03fc:                                                                        //isinst				Reflector::CodeModel::IForStatement
	IL_0401:            this->M_x1(dynamic_cast<Reflector::CodeModel::IForStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IForStatement^)
	IL_0406:            return;                                                     //ret
	IL_0407:                                                                        //ldarg.0
	IL_0408:                                                                        //ldarg.1
	IL_0409:                                                                        //isinst				Reflector::CodeModel::IGotoStatement
	IL_040e:            this->M_x1(dynamic_cast<Reflector::CodeModel::IGotoStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IGotoStatement^)
	IL_0413:            return;                                                     //ret
	IL_0414:                                                                        //ldarg.0
	IL_0415:                                                                        //ldarg.1
	IL_0416:                                                                        //isinst				Reflector::CodeModel::IForEachStatement
	IL_041b:            this->M_x1(dynamic_cast<Reflector::CodeModel::IForEachStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IForEachStatement^)
	IL_0420:            return;                                                     //ret
	IL_0421:                                                                        //ldc.i4				0x21
	IL_0426:            V_1=33;                                                     //stloc				V_1
	IL_042a:            /*goto IL_0019;*/goto IL_042f;                              //br				IL_0019
	IL_042f:                                                                        //ldarg.1
	IL_0430:                                                                        //isinst				Reflector::CodeModel::IRemoveEventStatement
	IL_0435:            if(dynamic_cast<Reflector::CodeModel::IRemoveEventStatement^>(A_0)==nullptr)goto IL_036c;//brfalse				IL_036c
	IL_043a:                                                                        //ldc.i4				0x1f
	IL_043f:            V_1=31;                                                     //stloc				V_1
	IL_0443:            /*goto IL_0019;*/goto IL_0448;                              //br				IL_0019
	IL_0448:            goto IL_05e6;                                               //br				IL_05e6
	IL_044d:                                                                        //ldc.i4				0x2f
	IL_0452:            V_1=47;                                                     //stloc				V_1
	IL_0456:            /*goto IL_0019;*/goto IL_045b;                              //br				IL_0019
	IL_045b:                                                                        //ldarg.1
	IL_045c:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_0461:            if(dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0)==nullptr)goto IL_0581;//brfalse				IL_0581
	IL_0466:                                                                        //ldc.i4				0x28
	IL_046b:            V_1=40;                                                     //stloc				V_1
	IL_046f:            /*goto IL_0019;*/goto IL_0474;                              //br				IL_0019
	IL_0474:            goto IL_0502;                                               //br				IL_0502
	IL_0479:                                                                        //ldarg.0
	IL_047a:                                                                        //ldarg.1
	IL_047b:                                                                        //isinst				Reflector::CodeModel::IThrowExceptionStatement
	IL_0480:            this->M_x1(dynamic_cast<Reflector::CodeModel::IThrowExceptionStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IThrowExceptionStatement^)
	IL_0485:            return;                                                     //ret
	IL_0486:                                                                        //ldc.i4				0x2a
	IL_048b:            V_1=42;                                                     //stloc				V_1
	IL_048f:            /*goto IL_0019;*/goto IL_0494;                              //br				IL_0019
	IL_0494:                                                                        //ldarg.1
	IL_0495:                                                                        //isinst				Reflector::CodeModel::ITryCatchFinallyStatement
	IL_049a:            if(dynamic_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(A_0)==nullptr)goto IL_05ad;//brfalse				IL_05ad
	IL_049f:                                                                        //ldc.i4				0x14
	IL_04a4:            V_1=20;                                                     //stloc				V_1
	IL_04a8:            /*goto IL_0019;*/goto IL_04ad;                              //br				IL_0019
	IL_04ad:            goto IL_04db;                                               //br.s				IL_04db
	IL_04af:                                                                        //ldc.i4				0xc
	IL_04b4:            V_1=12;                                                     //stloc				V_1
	IL_04b8:            /*goto IL_0019;*/goto IL_04bd;                              //br				IL_0019
	IL_04bd:                                                                        //ldarg.1
	IL_04be:                                                                        //isinst				Reflector::CodeModel::ICommentStatement
	IL_04c3:            if(dynamic_cast<Reflector::CodeModel::ICommentStatement^>(A_0)==nullptr)goto IL_03ce;//brfalse				IL_03ce
	IL_04c8:                                                                        //ldc.i4				0x27
	IL_04cd:            V_1=39;                                                     //stloc				V_1
	IL_04d1:            /*goto IL_0019;*/goto IL_04d6;                              //br				IL_0019
	IL_04d6:            goto IL_0345;                                               //br				IL_0345
	IL_04db:                                                                        //ldarg.0
	IL_04dc:                                                                        //ldarg.1
	IL_04dd:                                                                        //isinst				Reflector::CodeModel::ITryCatchFinallyStatement
	IL_04e2:            this->M_x1(dynamic_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^)
	IL_04e7:            return;                                                     //ret
	IL_04e8:                                                                        //ldarg.0
	IL_04e9:                                                                        //ldarg.1
	IL_04ea:                                                                        //isinst				Reflector::CodeModel::ILockStatement
	IL_04ef:            this->M_x1(dynamic_cast<Reflector::CodeModel::ILockStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ILockStatement^)
	IL_04f4:            return;                                                     //ret
	IL_04f5:                                                                        //ldarg.0
	IL_04f6:                                                                        //ldarg.1
	IL_04f7:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_04fc:            this->M_x1(dynamic_cast<Reflector::CodeModel::IBlockStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0501:            return;                                                     //ret
	IL_0502:                                                                        //ldarg.0
	IL_0503:                                                                        //ldarg.1
	IL_0504:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_0509:            this->M_x1(dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpressionStatement^)
	IL_050e:            return;                                                     //ret
	IL_050f:                                                                        //ldarg.0
	IL_0510:                                                                        //ldarg.1
	IL_0511:                                                                        //isinst				Reflector::CodeModel::IMemoryCopyStatement
	IL_0516:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMemoryCopyStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMemoryCopyStatement^)
	IL_051b:            return;                                                     //ret
	IL_051c:                                                                        //ldc.i4				0x7
	IL_0521:            V_1=7;                                                      //stloc				V_1
	IL_0525:            /*goto IL_0019;*/goto IL_052a;                              //br				IL_0019
	IL_052a:                                                                        //ldarg.1
	IL_052b:                                                                        //isinst				Reflector::CodeModel::IWhileStatement
	IL_0530:            if(dynamic_cast<Reflector::CodeModel::IWhileStatement^>(A_0)==nullptr)goto IL_02ac;//brfalse				IL_02ac
	IL_0535:                                                                        //ldc.i4				0x2d
	IL_053a:            V_1=45;                                                     //stloc				V_1
	IL_053e:            /*goto IL_0019;*/goto IL_0543;                              //br				IL_0019
	IL_0543:            goto IL_0352;                                               //br				IL_0352
	IL_0548:                                                                        //ldarg.0
	IL_0549:                                                                        //ldarg.1
	IL_054a:                                                                        //isinst				Reflector::CodeModel::IConditionStatement
	IL_054f:            this->M_x1(dynamic_cast<Reflector::CodeModel::IConditionStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IConditionStatement^)
	IL_0554:            return;                                                     //ret
	IL_0555:                                                                        //ldc.i4				0x1e
	IL_055a:            V_1=30;                                                     //stloc				V_1
	IL_055e:            /*goto IL_0019;*/goto IL_0563;                              //br				IL_0019
	IL_0563:                                                                        //ldarg.1
	IL_0564:                                                                        //isinst				Reflector::CodeModel::IFixedStatement
	IL_0569:            if(dynamic_cast<Reflector::CodeModel::IFixedStatement^>(A_0)==nullptr)goto IL_0254;//brfalse				IL_0254
	IL_056e:                                                                        //ldc.i4				0x23
	IL_0573:            V_1=35;                                                     //stloc				V_1
	IL_0577:            /*goto IL_0019;*/goto IL_057c;                              //br				IL_0019
	IL_057c:            goto IL_0338;                                               //br				IL_0338
	IL_0581:                                                                        //ldc.i4				0xb
	IL_0586:            V_1=11;                                                     //stloc				V_1
	IL_058a:            /*goto IL_0019;*/goto IL_058f;                              //br				IL_0019
	IL_058f:                                                                        //ldarg.1
	IL_0590:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_0595:            if(dynamic_cast<Reflector::CodeModel::IBlockStatement^>(A_0)==nullptr)goto IL_0178;//brfalse				IL_0178
	IL_059a:                                                                        //ldc.i4				0xf
	IL_059f:            V_1=15;                                                     //stloc				V_1
	IL_05a3:            /*goto IL_0019;*/goto IL_05a8;                              //br				IL_0019
	IL_05a8:            goto IL_04f5;                                               //br				IL_04f5
	IL_05ad:                                                                        //ldc.i4				0x13
	IL_05b2:            V_1=19;                                                     //stloc				V_1
	IL_05b6:            /*goto IL_0019;*/goto IL_05bb;                              //br				IL_0019
	IL_05bb:                                                                        //ldarg.1
	IL_05bc:                                                                        //isinst				Reflector::CodeModel::IThrowExceptionStatement
	IL_05c1:            if(dynamic_cast<Reflector::CodeModel::IThrowExceptionStatement^>(A_0)==nullptr)goto IL_01fc;//brfalse				IL_01fc
	IL_05c6:                                                                        //ldc.i4				0x24
	IL_05cb:            V_1=36;                                                     //stloc				V_1
	IL_05cf:            /*goto IL_0019;*/goto IL_05d4;                              //br				IL_0019
	IL_05d4:            goto IL_0479;                                               //br				IL_0479
	IL_05d9:                                                                        //ldarg.0
	IL_05da:                                                                        //ldarg.1
	IL_05db:                                                                        //isinst				Reflector::CodeModel::IBreakStatement
	IL_05e0:            this->M_x1(dynamic_cast<Reflector::CodeModel::IBreakStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IBreakStatement^)
	IL_05e5:            return;                                                     //ret
	IL_05e6:                                                                        //ldarg.0
	IL_05e7:                                                                        //ldarg.1
	IL_05e8:                                                                        //isinst				Reflector::CodeModel::IRemoveEventStatement
	IL_05ed:            this->M_x1(dynamic_cast<Reflector::CodeModel::IRemoveEventStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IRemoveEventStatement^)
	IL_05f2:            return;                                                     //ret
	IL_05f3:                                                                        //ldarg.0
	IL_05f4:                                                                        //ldarg.1
	IL_05f5:                                                                        //isinst				Reflector::CodeModel::IMemoryInitializeStatement
	IL_05fa:            this->M_x1(dynamic_cast<Reflector::CodeModel::IMemoryInitializeStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMemoryInitializeStatement^)
	IL_05ff:            return;                                                     //ret
	IL_0600:                                                                        //ldarg.0
	IL_0601:                                                                        //ldarg.1
	IL_0602:                                                                        //isinst				Reflector::CodeModel::IContinueStatement
	IL_0607:            this->M_x1(dynamic_cast<Reflector::CodeModel::IContinueStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IContinueStatement^)
	IL_060c:            return;                                                     //ret
	IL_060d:                                                                        //ldarg.0
	IL_060e:                                                                        //ldarg.1
	IL_060f:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_0614:            this->M_x1(dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(A_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchStatement^)
	IL_0619:            return;                                                     //ret
	IL_061a:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_061f:                                                                        //ldstr				L"\x6127\x4429\x5A2B\x4F2D\x5C2F\x5B31\x5033\x1635\x4B37\x4E39\x5D3B\x4A3D\x253F\x2F41\x2143\x2845\x3C47\x6A49\x384B\x374D\x204F\x3751\x7453\x7155\x2357\x6A59\x215B\x795D\x4E5F"
	IL_0624:                                                                        //ldloc				V_2
	IL_0628:            Temp_1=a(L"\x6127\x4429\x5A2B\x4F2D\x5C2F\x5B31\x5033\x1635\x4B37\x4E39\x5D3B\x4A3D\x253F\x2F41\x2143\x2845\x3C47\x6A49\x384B\x374D\x204F\x3751\x7453\x7155\x2357\x6A59\x215B\x795D\x4E5F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062d:                                                                        //ldc.i4.1
	IL_062e:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0633:            V_0=Temp_2;                                                 //stloc.0
	IL_0634:                                                                        //ldloc.0
	IL_0635:                                                                        //ldc.i4.0
	IL_0636:                                                                        //ldarg.1
	IL_0637:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_063c:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0641:            V_0[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_0642:                                                                        //ldloc.0
	IL_0643:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_0);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0648:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_064d:            throw Temp_6;                                               //throw

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IStatementCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0033;case 1:goto IL_0040;case 2:goto IL_0054;case 3:goto IL_0072;};//switch				(IL_0033,IL_0040,IL_0054,IL_0072)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            V_0=0;                                                      //stloc.0
	IL_001d:                                                                        //ldc.i4.6
	IL_001e:                                                                        //dup
	IL_001f:                                                                        //dup
	IL_0020:                                                                        //ldc.i4.5
	IL_0021:                                                                        //sub
	IL_0022:                                                                        //blt				IL_001e
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldc.i4				0x0
	IL_002d:            V_1=0;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x1
	IL_003a:            V_1=1;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_1=2;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x3
	IL_006c:            V_1=3;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IConditionCase^ V_0 = nullptr;
	Reflector::CodeModel::IDefaultCase^ V_1 = nullptr;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_4=7;                                                      //stloc				V_4
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_3=1;                                                      //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0037;                                               //br.s				IL_0037
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_0067;case 1:goto IL_0014;case 2:goto IL_008c;case 3:goto IL_0059;case 4:goto IL_009d;case 5:goto IL_0045;};//switch				(IL_0067,IL_0014,IL_008c,IL_0059,IL_009d,IL_0045)
	IL_0037:                                                                        //ldarg.1
	IL_0038:            if(A_0!=nullptr)goto IL_007a;                               //brtrue.s				IL_007a
	IL_003a:                                                                        //ldc.i4				0x5
	IL_003f:            V_3=5;                                                      //stloc				V_3
	IL_0043:            /*goto IL_0016;*/goto IL_0045;                              //br.s				IL_0016
	IL_0045:            goto IL_0071;                                               //br.s				IL_0071
	IL_0047:                                                                        //ldarg.1
	IL_0048:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_004d:            V_1=dynamic_cast<Reflector::CodeModel::IDefaultCase^>(A_0); //stloc.1
	IL_004e:                                                                        //ldc.i4				0x3
	IL_0053:            V_3=3;                                                      //stloc				V_3
	IL_0057:            /*goto IL_0016;*/goto IL_0059;                              //br.s				IL_0016
	IL_0059:                                                                        //ldloc.1
	IL_005a:            if(V_1==nullptr)goto IL_009f;                               //brfalse.s				IL_009f
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_3=0;                                                      //stloc				V_3
	IL_0065:            /*goto IL_0016;*/goto IL_0067;                              //br.s				IL_0016
	IL_0067:            goto IL_0072;                                               //br.s				IL_0072
	IL_0069:                                                                        //ldarg.0
	IL_006a:                                                                        //ldloc.0
	IL_006b:            this->M_x1(V_0);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IConditionCase^)
	IL_0070:            return;                                                     //ret
	IL_0071:            return;                                                     //ret
	IL_0072:                                                                        //ldarg.0
	IL_0073:                                                                        //ldloc.1
	IL_0074:            this->M_x1(V_1);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IDefaultCase^)
	IL_0079:            return;                                                     //ret
	IL_007a:                                                                        //ldarg.1
	IL_007b:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_0080:            V_0=dynamic_cast<Reflector::CodeModel::IConditionCase^>(A_0);//stloc.0
	IL_0081:                                                                        //ldc.i4				0x2
	IL_0086:            V_3=2;                                                      //stloc				V_3
	IL_008a:            /*goto IL_0016;*/goto IL_008c;                              //br.s				IL_0016
	IL_008c:                                                                        //ldloc.0
	IL_008d:            if(V_0==nullptr)goto IL_0047;                               //brfalse.s				IL_0047
	IL_008f:                                                                        //ldc.i4				0x4
	IL_0094:            V_3=4;                                                      //stloc				V_3
	IL_0098:            /*goto IL_0016;*/goto IL_009d;                              //br				IL_0016
	IL_009d:            goto IL_0069;                                               //br.s				IL_0069
	IL_009f:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a1:                                                                        //break
	IL_00a2:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a7:                                                                        //ldstr				L"\x6C24\x4926\x5F28\x4A2A\x412C\x462E\x5530\x1332\x4634\x4036\x5038\x4F3A\x5E3C\x573E\x6140\x2042\x2444\x3446\x2C48\x6B4A\x394C\x364E\x2150\x3652\x7554\x7056\x2258\x6B5A\x205C\x785E\x4F60"
	IL_00ac:                                                                        //ldloc				V_4
	IL_00b0:            Temp_1=a(L"\x6C24\x4926\x5F28\x4A2A\x412C\x462E\x5530\x1332\x4634\x4036\x5038\x4F3A\x5E3C\x573E\x6140\x2042\x2444\x3446\x2C48\x6B4A\x394C\x364E\x2150\x3652\x7554\x7056\x2258\x6B5A\x205C\x785E\x4F60",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b5:                                                                        //ldc.i4.1
	IL_00b6:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_00bb:            V_2=Temp_2;                                                 //stloc.2
	IL_00bc:                                                                        //ldloc.2
	IL_00bd:                                                                        //ldc.i4.0
	IL_00be:                                                                        //ldarg.1
	IL_00bf:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_00c4:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_00c9:            V_2[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_00ca:                                                                        //ldloc.2
	IL_00cb:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00d0:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_00d5:            throw Temp_6;                                               //throw

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchCaseCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ISwitchCase^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0028;case 1:goto IL_0072;case 2:goto IL_0049;case 3:goto IL_0035;};//switch				(IL_0028,IL_0072,IL_0049,IL_0035)
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
	IL_003c:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_1=2;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldc.i4.0
	IL_004a:                                                                        //dup
	IL_004b:                                                                        //dup
	IL_004c:                                                                        //ldc.i4.5
	IL_004d:                                                                        //add
	IL_004e:                                                                        //bgt				IL_004a
	IL_0053:                                                                        //pop
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_005e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchCase^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_002a;                                               //br.s				IL_002a
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ISwitchStatement::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ISwitchCaseCollection^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IThrowExceptionStatement::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITryCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITryCastExpression::get_TargetType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITryCastExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IBlockStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->Try;                                            //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Try()
	IL_0012:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_0));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=A_0->CatchClauses;                                   //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_001e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICatchClauseCollection^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Finally;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Finally()
	IL_002a:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_3=A_0->Fault;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Fault()
	IL_0036:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_3));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_003b:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0033;case 2:goto IL_0072;case 3:goto IL_0040;};//switch				(IL_0054,IL_0033,IL_0072,IL_0040)
	IL_001b:                                                                        //ldc.i4.1
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.4
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x1
	IL_002d:            V_1=1;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_1=3;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_0=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:            if(V_0<Temp_0)goto IL_0056;                                 //blt.s				IL_0056
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_1=0;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0074;                                               //br.s				IL_0074
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldarg.1
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_005e:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:                                                                        //add
	IL_0066:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0067:                                                                        //ldc.i4				0x2
	IL_006c:            V_1=2;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_0035;                                               //br.s				IL_0035
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
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
	IL_000a:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_1=A_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0016:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodDeclarationCollection^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_2=A_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_0022:            this->M_x1(Temp_2);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldDeclarationCollection^)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_3=A_0->Properties;                                     //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_002e:            this->M_x1(Temp_3);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyDeclarationCollection^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_4=A_0->Events;                                         //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_003a:            this->M_x1(Temp_4);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IEventDeclarationCollection^)
	IL_003f:                                                                        //ldarg.0
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_5=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0046:            this->M_x1(Temp_5);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_004b:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0035;case 1:goto IL_0072;case 2:goto IL_0049;case 3:goto IL_0028;};//switch				(IL_0035,IL_0072,IL_0049,IL_0028)
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
	IL_003c:            if(V_0<Temp_0)goto IL_004b;                                 //blt.s				IL_004b
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_1=2;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_0074;                                               //br.s				IL_0074
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_1=A_0[V_0];                                            //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeDeclarationCollection::get_Item(System::Int32)
	IL_0053:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0058:                                                                        //ldloc.0
	IL_0059:                                                                        //ldc.i4.1
	IL_005a:                                                                        //add
	IL_005b:            V_0=(V_0 + 1);                                              //stloc.0
	IL_005c:                                                                        //ldc.i4.0
	IL_005d:                                                                        //dup
	IL_005e:                                                                        //dup
	IL_005f:                                                                        //ldc.i4.2
	IL_0060:                                                                        //sub
	IL_0061:                                                                        //blt				IL_005d
	IL_0066:                                                                        //pop
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_002a;                                               //br.s				IL_002a
	IL_0074:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypedReferenceCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITypedReferenceCreateExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeOfExpression::get_Type()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITypeOfTypedReferenceExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReferenceExpression::get_Type()
	IL_0007:            this->M_x2(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IUnaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IUsingStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_2 = nullptr;
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
	IL_000d:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Variable()
	IL_0012:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Expression()
	IL_001e:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_2=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IUsingStatement::get_Body()
	IL_002a:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_2));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_002f:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IValueOfTypedReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IValueOfTypedReferenceExpression::get_TargetType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IValueOfTypedReferenceExpression::get_Expression()
	IL_0013:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableDeclarationExpression::get_Variable()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IVariableReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableReference^ Reflector::CodeModel::IVariableReferenceExpression::get_Variable()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IVariableReference^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x1(Reflector::CodeModel::IWhileStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IWhileStatement::get_Condition()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IWhileStatement::get_Body()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IStatement^>(Temp_1));//callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x61::M_x2(Reflector::CodeModel::ILabeledStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatement^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Statement;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::ILabeledStatement::get_Statement()
	IL_0007:            this->M_x1(Temp_0);                                         //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IStatement^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x61::M_x2(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
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
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_11=16;                                                    //stloc				V_11
	IL_0009:                                                                        //ldc.i4				0x7
	IL_000e:            V_10=7;                                                     //stloc				V_10
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_006f;                                               //br.s				IL_006f
	IL_0016:                                                                        //ldloc				V_10
	IL_001a:            switch(V_10){case 0:goto IL_0226;case 1:goto IL_01f8;case 2:goto IL_01cd;case 3:goto IL_0247;case 4:goto IL_0152;case 5:goto IL_00d0;case 6:goto IL_00ff;case 7:goto IL_0014;case 8:goto IL_0212;case 9:goto IL_01e4;case 10:goto IL_00ad;case 11:goto IL_009b;case 12:goto IL_00e4;case 13:goto IL_016a;case 14:goto IL_0080;case 15:goto IL_025c;case 16:goto IL_01bc;case 17:goto IL_017f;case 18:goto IL_013d;case 19:goto IL_0114;};//switch				(IL_0226,IL_01f8,IL_01cd,IL_0247,IL_0152,IL_00d0,IL_00ff,IL_0014,IL_0212,IL_01e4,IL_00ad,IL_009b,IL_00e4,IL_016a,IL_0080,IL_025c,IL_01bc,IL_017f,IL_013d,IL_0114)
	IL_006f:                                                                        //ldarg.1
	IL_0070:            if(A_0!=nullptr)goto IL_01cf;                               //brtrue				IL_01cf
	IL_0075:                                                                        //ldc.i4				0xe
	IL_007a:            V_10=14;                                                    //stloc				V_10
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:            goto IL_01a6;                                               //br				IL_01a6
	IL_0085:                                                                        //ldarg.1
	IL_0086:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_008b:            V_6=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_6
	IL_008d:                                                                        //ldc.i4				0xb
	IL_0092:            V_10=11;                                                    //stloc				V_10
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:                                                                        //ldloc.s				V_6
	IL_009d:            if(V_6==nullptr)goto IL_00e9;                               //brfalse.s				IL_00e9
	IL_009f:                                                                        //ldc.i4				0xa
	IL_00a4:            V_10=10;                                                    //stloc				V_10
	IL_00a8:            /*goto IL_0016;*/goto IL_00ad;                              //br				IL_0016
	IL_00ad:            goto IL_0228;                                               //br				IL_0228
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:                                                                        //ldloc.s				V_4
	IL_00b5:            this->M_x1(V_4);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IOptionalModifier^)
	IL_00ba:            return;                                                     //ret
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_00c1:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.1
	IL_00c2:                                                                        //ldc.i4				0x5
	IL_00c7:            V_10=5;                                                     //stloc				V_10
	IL_00cb:            /*goto IL_0016;*/goto IL_00d0;                              //br				IL_0016
	IL_00d0:                                                                        //ldloc.1
	IL_00d1:            if(V_1==nullptr)goto IL_01a7;                               //brfalse				IL_01a7
	IL_00d6:                                                                        //ldc.i4				0xc
	IL_00db:            V_10=12;                                                    //stloc				V_10
	IL_00df:            /*goto IL_0016;*/goto IL_00e4;                              //br				IL_0016
	IL_00e4:            goto IL_0184;                                               //br				IL_0184
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_00ef:            V_7=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(A_0);//stloc.s				V_7
	IL_00f1:                                                                        //ldc.i4				0x6
	IL_00f6:            V_10=6;                                                     //stloc				V_10
	IL_00fa:            /*goto IL_0016;*/goto IL_00ff;                              //br				IL_0016
	IL_00ff:            goto IL_0102;                                               //br.s				IL_0102
	IL_0101:                                                                        //break
	IL_0102:                                                                        //ldloc.s				V_7
	IL_0104:            if(V_7==nullptr)goto IL_0127;                               //brfalse.s				IL_0127
	IL_0106:                                                                        //ldc.i4				0x13
	IL_010b:            V_10=19;                                                    //stloc				V_10
	IL_010f:            /*goto IL_0016;*/goto IL_0114;                              //br				IL_0016
	IL_0114:            goto IL_018c;                                               //br.s				IL_018c
	IL_0116:                                                                        //ldarg.0
	IL_0117:                                                                        //ldloc.0
	IL_0118:            this->M_x1(V_0);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_011d:            return;                                                     //ret
	IL_011e:                                                                        //ldarg.0
	IL_011f:                                                                        //ldloc.s				V_5
	IL_0121:            this->M_x1(V_5);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IRequiredModifier^)
	IL_0126:            return;                                                     //ret
	IL_0127:                                                                        //ldarg.1
	IL_0128:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_012d:            V_8=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_0);//stloc.s				V_8
	IL_012f:                                                                        //ldc.i4				0x12
	IL_0134:            V_10=18;                                                    //stloc				V_10
	IL_0138:            /*goto IL_0016;*/goto IL_013d;                              //br				IL_0016
	IL_013d:                                                                        //ldloc.s				V_8
	IL_013f:            if(V_8==nullptr)goto IL_0269;                               //brfalse				IL_0269
	IL_0144:                                                                        //ldc.i4				0x4
	IL_0149:            V_10=4;                                                     //stloc				V_10
	IL_014d:            /*goto IL_0016;*/goto IL_0152;                              //br				IL_0016
	IL_0152:            goto IL_0195;                                               //br.s				IL_0195
	IL_0154:                                                                        //ldarg.1
	IL_0155:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_015a:            V_4=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_4
	IL_015c:                                                                        //ldc.i4				0xd
	IL_0161:            V_10=13;                                                    //stloc				V_10
	IL_0165:            /*goto IL_0016;*/goto IL_016a;                              //br				IL_0016
	IL_016a:                                                                        //ldloc.s				V_4
	IL_016c:            if(V_4==nullptr)goto IL_0231;                               //brfalse				IL_0231
	IL_0171:                                                                        //ldc.i4				0x11
	IL_0176:            V_10=17;                                                    //stloc				V_10
	IL_017a:            /*goto IL_0016;*/goto IL_017f;                              //br				IL_0016
	IL_017f:            goto IL_00b2;                                               //br				IL_00b2
	IL_0184:                                                                        //ldarg.0
	IL_0185:                                                                        //ldloc.1
	IL_0186:            this->M_x1(V_1);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IArrayType^)
	IL_018b:            return;                                                     //ret
	IL_018c:                                                                        //ldarg.0
	IL_018d:                                                                        //ldloc.s				V_7
	IL_018f:            this->M_x1(V_7);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IGenericParameter^)
	IL_0194:            return;                                                     //ret
	IL_0195:                                                                        //ldarg.0
	IL_0196:                                                                        //ldloc.s				V_8
	IL_0198:            this->M_x1(V_8);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IGenericArgument^)
	IL_019d:            return;                                                     //ret
	IL_019e:                                                                        //ldarg.0
	IL_019f:                                                                        //ldloc.2
	IL_01a0:            this->M_x1(V_2);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IPointerType^)
	IL_01a5:            return;                                                     //ret
	IL_01a6:            return;                                                     //ret
	IL_01a7:                                                                        //ldarg.1
	IL_01a8:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_01ad:            V_2=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.2
	IL_01ae:                                                                        //ldc.i4				0x10
	IL_01b3:            V_10=16;                                                    //stloc				V_10
	IL_01b7:            /*goto IL_0016;*/goto IL_01bc;                              //br				IL_0016
	IL_01bc:                                                                        //ldloc.2
	IL_01bd:            if(V_2==nullptr)goto IL_01fd;                               //brfalse.s				IL_01fd
	IL_01bf:                                                                        //ldc.i4				0x2
	IL_01c4:            V_10=2;                                                     //stloc				V_10
	IL_01c8:            /*goto IL_0016;*/goto IL_01cd;                              //br				IL_0016
	IL_01cd:            goto IL_019e;                                               //br.s				IL_019e
	IL_01cf:                                                                        //ldarg.1
	IL_01d0:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01d5:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_01d6:                                                                        //ldc.i4				0x9
	IL_01db:            V_10=9;                                                     //stloc				V_10
	IL_01df:            /*goto IL_0016;*/goto IL_01e4;                              //br				IL_0016
	IL_01e4:                                                                        //ldloc.0
	IL_01e5:            if(V_0==nullptr)goto IL_00bb;                               //brfalse				IL_00bb
	IL_01ea:                                                                        //ldc.i4				0x1
	IL_01ef:            V_10=1;                                                     //stloc				V_10
	IL_01f3:            /*goto IL_0016;*/goto IL_01f8;                              //br				IL_0016
	IL_01f8:            goto IL_0116;                                               //br				IL_0116
	IL_01fd:                                                                        //ldarg.1
	IL_01fe:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_0203:            V_3=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.3
	IL_0204:                                                                        //ldc.i4				0x8
	IL_0209:            V_10=8;                                                     //stloc				V_10
	IL_020d:            /*goto IL_0016;*/goto IL_0212;                              //br				IL_0016
	IL_0212:                                                                        //ldloc.3
	IL_0213:            if(V_3==nullptr)goto IL_0154;                               //brfalse				IL_0154
	IL_0218:                                                                        //ldc.i4				0x0
	IL_021d:            V_10=0;                                                     //stloc				V_10
	IL_0221:            /*goto IL_0016;*/goto IL_0226;                              //br				IL_0016
	IL_0226:            goto IL_0261;                                               //br.s				IL_0261
	IL_0228:                                                                        //ldarg.0
	IL_0229:                                                                        //ldloc.s				V_6
	IL_022b:            this->M_x1(V_6);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IFunctionPointer^)
	IL_0230:            return;                                                     //ret
	IL_0231:                                                                        //ldarg.1
	IL_0232:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0237:            V_5=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_5
	IL_0239:                                                                        //ldc.i4				0x3
	IL_023e:            V_10=3;                                                     //stloc				V_10
	IL_0242:            /*goto IL_0016;*/goto IL_0247;                              //br				IL_0016
	IL_0247:                                                                        //ldloc.s				V_5
	IL_0249:            if(V_5==nullptr)goto IL_0085;                               //brfalse				IL_0085
	IL_024e:                                                                        //ldc.i4				0xf
	IL_0253:            V_10=15;                                                    //stloc				V_10
	IL_0257:            /*goto IL_0016;*/goto IL_025c;                              //br				IL_0016
	IL_025c:            goto IL_011e;                                               //br				IL_011e
	IL_0261:                                                                        //ldarg.0
	IL_0262:                                                                        //ldloc.3
	IL_0263:            this->M_x1(V_3);                                            //callvirt				void Root::T_x61::M_x1(Reflector::CodeModel::IReferenceType^)
	IL_0268:            return;                                                     //ret
	IL_0269:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_026e:                                                                        //ldstr				L"\x672D\x5E2F\x4431\x5533\x5A35\x5137\x5E39\x1C3B\x4A3D\x393F\x3241\x2143\x6645\x6F47\x3149\x7C4B\x334D\x774F\x7C51"
	IL_0273:                                                                        //ldloc				V_11
	IL_0277:            Temp_1=a(L"\x672D\x5E2F\x4431\x5533\x5A35\x5137\x5E39\x1C3B\x4A3D\x393F\x3241\x2143\x6645\x6F47\x3149\x7C4B\x334D\x774F\x7C51",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027c:                                                                        //ldc.i4.1
	IL_027d:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0282:            V_9=Temp_2;                                                 //stloc.s				V_9
	IL_0284:                                                                        //ldloc.s				V_9
	IL_0286:                                                                        //ldc.i4.0
	IL_0287:                                                                        //ldarg.1
	IL_0288:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_028d:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ System::Reflection::MemberInfo::get_Name()
	IL_0292:            V_9[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_0293:                                                                        //ldloc.s				V_9
	IL_0295:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_9);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_029a:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_029f:            throw Temp_6;                                               //throw

}
inline void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0007:            this->M_x2(Temp_0);                                         //callvirt				void Root::T_x61::M_x2(Reflector::CodeModel::IType^)
	IL_000c:            return;                                                     //ret

}
