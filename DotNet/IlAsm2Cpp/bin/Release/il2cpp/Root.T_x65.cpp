#include "global_xref.h"

inline Root::T_x65::T_x65()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<Reflector::CodeModel::INamespace^>(nullptr);//stfld				Reflector::CodeModel::INamespace^ Root::T_x65 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_000d:            this->F_x2=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x65 F_x2
	IL_0012:                                                                        //ldarg.0
	IL_0013:            /*Root::T_x61();*/                                          //call				void Root::T_x61::.ctor()
	IL_0018:            return;                                                     //ret

}
inline System::Collections::ICollection^ Root::T_x65::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x65 F_x2
	IL_0006:            Temp_0->Sort();                                             //callvirt				void System::Collections::ArrayList::Sort()
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x65 F_x2
	IL_0011:            return safe_cast<System::Collections::ICollection^>(Temp_1);//ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ICanCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICanCastExpression::get_TargetType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ICanCastExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ICastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICastExpression::get_TargetType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ICastExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0007:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_000c:            this->M_x1(Temp_1);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::IEventReference^>(A_0)->EventType;//callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_0007:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::IFieldReference^>(A_0)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldReferenceExpression::get_Target()
	IL_0007:            this->M_x2(Temp_0);                                         //call				void Root::T_x65::M_x2(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IFieldReferenceExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReturnType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclaration^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0007:            Temp_1=Temp_0->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_000c:            this->M_x1(Temp_1);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_2=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0017:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_001c:            V_1=Temp_3;                                                 //stloc.1
	IL_001d:            /*goto IL_001f;*/goto IL_001D01;                            //br.s				IL_001f
	IL_001D01:          try{
	IL_001f:                                                                        //ldc.i4				0x3
	IL_0024:            V_3=3;                                                      //stloc				V_3
	IL_0028:            /*goto IL_002c;*/goto IL_002a;                              //br.s				IL_002c
	IL_002a:            goto IL_0049;                                               //br.s				IL_0049
	IL_002c:                                                                        //ldloc				V_3
	IL_0030:            switch(V_3){case 0:goto IL_007b;case 1:goto IL_008e;case 2:goto IL_006e;case 3:goto IL_002a;case 4:goto IL_009e;};//switch				(IL_007b,IL_008e,IL_006e,IL_002a,IL_009e)
	IL_0049:            goto IL_0070;                                               //br.s				IL_0070
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_5=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0051:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0056:            V_0=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_5);//stloc.0
	IL_0057:                                                                        //ldarg.0
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_6=V_0->ParameterType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_005e:            this->M_x1(Temp_6);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0063:                                                                        //ldc.i4				0x2
	IL_0068:            V_3=2;                                                      //stloc				V_3
	IL_006c:            /*goto IL_002c;*/goto IL_006e;                              //br.s				IL_002c
	IL_006e:            goto IL_0070;                                               //br.s				IL_0070
	IL_0070:                                                                        //ldc.i4				0x0
	IL_0075:            V_3=0;                                                      //stloc				V_3
	IL_0079:            /*goto IL_002c;*/goto IL_007b;                              //br.s				IL_002c
	IL_007b:                                                                        //ldloc.1
	IL_007c:            Temp_4=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0081:            if(Temp_4)goto IL_004b;                                     //brtrue.s				IL_004b
	IL_0083:                                                                        //ldc.i4				0x1
	IL_0088:            V_3=1;                                                      //stloc				V_3
	IL_008c:            /*goto IL_002c;*/goto IL_008e;                              //br.s				IL_002c
	IL_008e:            goto IL_0091;                                               //br.s				IL_0091
	IL_0090:                                                                        //break
	IL_0091:            goto IL_0093;                                               //br.s				IL_0093
	IL_0093:                                                                        //ldc.i4				0x4
	IL_0098:            V_3=4;                                                      //stloc				V_3
	IL_009c:            /*goto IL_002c;*/goto IL_009e;                              //br.s				IL_002c
	IL_009e:            goto IL_00ed;                                               //leave.s				IL_00ed
	                    ;}
	                    finally{
	IL_00a0:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00a2:                                                                        //ldloc				V_4
	IL_00a6:            switch(V_4){case 0:goto IL_00d7;case 1:goto IL_00ea;case 2:goto IL_00c9;};//switch				(IL_00d7,IL_00ea,IL_00c9)
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:                                                                        //isinst				System::IDisposable
	IL_00bd:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00be:                                                                        //ldc.i4				0x2
	IL_00c3:            V_4=2;                                                      //stloc				V_4
	IL_00c7:            /*goto IL_00a2;*/goto IL_00c9;                              //br.s				IL_00a2
	IL_00c9:                                                                        //ldloc.2
	IL_00ca:            if(V_2==nullptr)goto IL_00ec;                               //brfalse.s				IL_00ec
	IL_00cc:                                                                        //ldc.i4				0x0
	IL_00d1:            V_4=0;                                                      //stloc				V_4
	IL_00d5:            /*goto IL_00a2;*/goto IL_00d7;                              //br.s				IL_00a2
	IL_00d7:            goto IL_00d9;                                               //br.s				IL_00d9
	IL_00d9:                                                                        //ldloc.2
	IL_00da:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00df:                                                                        //ldc.i4				0x1
	IL_00e4:            V_4=1;                                                      //stloc				V_4
	IL_00e8:            /*goto IL_00a2;*/goto IL_00ea;                              //br.s				IL_00a2
	IL_00ea:            goto IL_00ec;                                               //br.s				IL_00ec
	IL_00ec:                                                                        //endfinally
	                    ;}
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:                                                                        //ldarg.1
	IL_00ef:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00f4:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReferenceExpression::get_Target()
	IL_0007:            this->M_x2(Temp_0);                                         //call				void Root::T_x65::M_x2(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IMethodReferenceExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::INamespace^ Root::T_x65 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::INamespace^)
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldnull
	IL_0010:            this->F_x1=safe_cast<Reflector::CodeModel::INamespace^>(nullptr);//stfld				Reflector::CodeModel::INamespace^ Root::T_x65 F_x1
	IL_0015:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IObjectCreateExpression::get_Constructor()
	IL_0007:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_000c:            this->M_x1(Temp_1);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IObjectCreateExpression^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IObjectInitializeExpression::get_Type()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IObjectInitializeExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclaration^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=safe_cast<Reflector::CodeModel::IPropertyReference^>(A_0)->PropertyType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_1=safe_cast<Reflector::CodeModel::IPropertyReference^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0012:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0017:            V_1=Temp_2;                                                 //stloc.1
	IL_0018:            /*goto IL_001a;*/goto IL_001801;                            //br.s				IL_001a
	IL_001801:          try{
	IL_001a:                                                                        //ldc.i4				0x4
	IL_001f:            V_3=4;                                                      //stloc				V_3
	IL_0023:            /*goto IL_0027;*/goto IL_0025;                              //br.s				IL_0027
	IL_0025:            goto IL_0044;                                               //br.s				IL_0044
	IL_0027:                                                                        //ldloc				V_3
	IL_002b:            switch(V_3){case 0:goto IL_008c;case 1:goto IL_0099;case 2:goto IL_006c;case 3:goto IL_0079;case 4:goto IL_0025;};//switch				(IL_008c,IL_0099,IL_006c,IL_0079,IL_0025)
	IL_0044:            goto IL_0047;                                               //br.s				IL_0047
	IL_0046:                                                                        //break
	IL_0047:            goto IL_006e;                                               //br.s				IL_006e
	IL_0049:                                                                        //ldloc.1
	IL_004a:            Temp_4=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004f:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0054:            V_0=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_4);//stloc.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_5=V_0->ParameterType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_005c:            this->M_x1(Temp_5);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0061:                                                                        //ldc.i4				0x2
	IL_0066:            V_3=2;                                                      //stloc				V_3
	IL_006a:            /*goto IL_0027;*/goto IL_006c;                              //br.s				IL_0027
	IL_006c:            goto IL_006e;                                               //br.s				IL_006e
	IL_006e:                                                                        //ldc.i4				0x3
	IL_0073:            V_3=3;                                                      //stloc				V_3
	IL_0077:            /*goto IL_0027;*/goto IL_0079;                              //br.s				IL_0027
	IL_0079:                                                                        //ldloc.1
	IL_007a:            Temp_3=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007f:            if(Temp_3)goto IL_0049;                                     //brtrue.s				IL_0049
	IL_0081:                                                                        //ldc.i4				0x0
	IL_0086:            V_3=0;                                                      //stloc				V_3
	IL_008a:            /*goto IL_0027;*/goto IL_008c;                              //br.s				IL_0027
	IL_008c:            goto IL_008e;                                               //br.s				IL_008e
	IL_008e:                                                                        //ldc.i4				0x1
	IL_0093:            V_3=1;                                                      //stloc				V_3
	IL_0097:            /*goto IL_0027;*/goto IL_0099;                              //br.s				IL_0027
	IL_0099:            goto IL_00e8;                                               //leave.s				IL_00e8
	                    ;}
	                    finally{
	IL_009b:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_009d:                                                                        //ldloc				V_4
	IL_00a1:            switch(V_4){case 0:goto IL_00d2;case 1:goto IL_00e5;case 2:goto IL_00c4;};//switch				(IL_00d2,IL_00e5,IL_00c4)
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:                                                                        //isinst				System::IDisposable
	IL_00b8:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00b9:                                                                        //ldc.i4				0x2
	IL_00be:            V_4=2;                                                      //stloc				V_4
	IL_00c2:            /*goto IL_009d;*/goto IL_00c4;                              //br.s				IL_009d
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:            if(V_2==nullptr)goto IL_00e7;                               //brfalse.s				IL_00e7
	IL_00c7:                                                                        //ldc.i4				0x0
	IL_00cc:            V_4=0;                                                      //stloc				V_4
	IL_00d0:            /*goto IL_009d;*/goto IL_00d2;                              //br.s				IL_009d
	IL_00d2:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00da:                                                                        //ldc.i4				0x1
	IL_00df:            V_4=1;                                                      //stloc				V_4
	IL_00e3:            /*goto IL_009d;*/goto IL_00e5;                              //br.s				IL_009d
	IL_00e5:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00e7:                                                                        //endfinally
	                    ;}
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:                                                                        //ldarg.1
	IL_00ea:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_00ef:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IPropertyReferenceExpression::get_Target()
	IL_0007:            this->M_x2(Temp_0);                                         //call				void Root::T_x65::M_x2(Reflector::CodeModel::IExpression^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ISizeOfExpression::get_Type()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ISizeOfExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IStackAllocateExpression::get_Type()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::IStackAllocateExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ITryCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITryCastExpression::get_TargetType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ITryCastExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_11 = nullptr;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	Reflector::CodeModel::IType^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_15 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::IArrayType^ V_2 = nullptr;
	Reflector::CodeModel::IPointerType^ V_3 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_4 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_5 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_6 = nullptr;
	Reflector::CodeModel::IFunctionPointer^ V_7 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_8 = nullptr;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::IDisposable^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_004f;                                               //br.s				IL_004f
	IL_0002:                                                                        //ldloc				V_11
	IL_0006:            switch(V_11){case 0:goto IL_00e8;case 1:goto IL_0305;case 2:goto IL_02d5;case 3:goto IL_01e1;case 4:goto IL_01f6;case 5:goto IL_02ac;case 6:goto IL_00d4;case 7:goto IL_006f;case 8:goto IL_0061;case 9:goto IL_0274;case 10:goto IL_02ea;case 11:goto IL_00a5;case 12:goto IL_0247;case 13:goto IL_0317;case 14:goto IL_02bd;case 15:goto IL_00ba;case 16:goto IL_0285;};//switch				(IL_00e8,IL_0305,IL_02d5,IL_01e1,IL_01f6,IL_02ac,IL_00d4,IL_006f,IL_0061,IL_0274,IL_02ea,IL_00a5,IL_0247,IL_0317,IL_02bd,IL_00ba,IL_0285)
	IL_004f:                                                                        //ldarg.1
	IL_0050:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0055:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0056:                                                                        //ldc.i4				0x8
	IL_005b:            V_11=8;                                                     //stloc				V_11
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:                                                                        //ldloc.0
	IL_0062:            if(V_0==nullptr)goto IL_00bf;                               //brfalse.s				IL_00bf
	IL_0064:                                                                        //ldc.i4				0x7
	IL_0069:            V_11=7;                                                     //stloc				V_11
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:            goto IL_025a;                                               //br				IL_025a
	IL_0074:                                                                        //ldarg.0
	IL_0075:                                                                        //ldloc.s				V_6
	IL_0077:            Temp_1=V_6->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_007c:            this->M_x1(Temp_1);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldloc.s				V_6
	IL_0084:            Temp_2=V_6->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_0089:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_2));//call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_008e:            return;                                                     //ret
	IL_008f:                                                                        //ldarg.1
	IL_0090:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_0095:            V_5=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_5
	IL_0097:                                                                        //ldc.i4				0xb
	IL_009c:            V_11=11;                                                    //stloc				V_11
	IL_00a0:            /*goto IL_0002;*/goto IL_00a5;                              //br				IL_0002
	IL_00a5:                                                                        //ldloc.s				V_5
	IL_00a7:            if(V_5==nullptr)goto IL_01cb;                               //brfalse				IL_01cb
	IL_00ac:                                                                        //ldc.i4				0xf
	IL_00b1:            V_11=15;                                                    //stloc				V_11
	IL_00b5:            /*goto IL_0002;*/goto IL_00ba;                              //br				IL_0002
	IL_00ba:            goto IL_031c;                                               //br				IL_031c
	IL_00bf:                                                                        //ldarg.1
	IL_00c0:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_00c5:            V_2=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.2
	IL_00c6:                                                                        //ldc.i4				0x6
	IL_00cb:            V_11=6;                                                     //stloc				V_11
	IL_00cf:            /*goto IL_0002;*/goto IL_00d4;                              //br				IL_0002
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:            if(V_2==nullptr)goto IL_0297;                               //brfalse				IL_0297
	IL_00da:                                                                        //ldc.i4				0x0
	IL_00df:            V_11=0;                                                     //stloc				V_11
	IL_00e3:            /*goto IL_0002;*/goto IL_00e8;                              //br				IL_0002
	IL_00e8:            goto IL_020c;                                               //br				IL_020c
	IL_00E801:          try{
	IL_00ed:                                                                        //ldc.i4				0x0
	IL_00f2:            V_11=0;                                                     //stloc				V_11
	IL_00f6:            /*goto IL_00fa;*/goto IL_00f8;                              //br.s				IL_00fa
	IL_00f8:            goto IL_0117;                                               //br.s				IL_0117
	IL_00fa:                                                                        //ldloc				V_11
	IL_00fe:            switch(V_11){case 0:goto IL_00f8;case 1:goto IL_0160;case 2:goto IL_016d;case 3:goto IL_013f;case 4:goto IL_014c;};//switch				(IL_00f8,IL_0160,IL_016d,IL_013f,IL_014c)
	IL_0117:            goto IL_0141;                                               //br.s				IL_0141
	IL_0119:                                                                        //ldloc.s				V_9
	IL_011b:            Temp_7=V_9->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0120:                                                                        //castclass				Reflector::CodeModel::IParameterDeclaration
	IL_0125:            V_8=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_7);//stloc.s				V_8
	IL_0127:                                                                        //ldarg.0
	IL_0128:                                                                        //ldloc.s				V_8
	IL_012a:            Temp_8=V_8->ParameterType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_012f:            this->M_x1(Temp_8);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0134:                                                                        //ldc.i4				0x3
	IL_0139:            V_11=3;                                                     //stloc				V_11
	IL_013d:            /*goto IL_00fa;*/goto IL_013f;                              //br.s				IL_00fa
	IL_013f:            goto IL_0141;                                               //br.s				IL_0141
	IL_0141:                                                                        //ldc.i4				0x4
	IL_0146:            V_11=4;                                                     //stloc				V_11
	IL_014a:            /*goto IL_00fa;*/goto IL_014c;                              //br.s				IL_00fa
	IL_014c:                                                                        //ldloc.s				V_9
	IL_014e:            Temp_6=V_9->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0153:            if(Temp_6)goto IL_0119;                                     //brtrue.s				IL_0119
	IL_0155:                                                                        //ldc.i4				0x1
	IL_015a:            V_11=1;                                                     //stloc				V_11
	IL_015e:            /*goto IL_00fa;*/goto IL_0160;                              //br.s				IL_00fa
	IL_0160:            goto IL_0162;                                               //br.s				IL_0162
	IL_0162:                                                                        //ldc.i4				0x2
	IL_0167:            V_11=2;                                                     //stloc				V_11
	IL_016b:            /*goto IL_00fa;*/goto IL_016d;                              //br.s				IL_00fa
	IL_016d:            goto IL_024c;                                               //leave				IL_024c
	                    ;}
	                    finally{
	IL_0172:            goto IL_0189;                                               //br.s				IL_0189
	IL_0174:                                                                        //ldloc				V_11
	IL_0178:            switch(V_11){case 0:goto IL_01ac;case 1:goto IL_019d;case 2:goto IL_01c0;};//switch				(IL_01ac,IL_019d,IL_01c0)
	IL_0189:                                                                        //ldloc.s				V_9
	IL_018b:                                                                        //isinst				System::IDisposable
	IL_0190:            V_10=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_10
	IL_0192:                                                                        //ldc.i4				0x1
	IL_0197:            V_11=1;                                                     //stloc				V_11
	IL_019b:            /*goto IL_0174;*/goto IL_019d;                              //br.s				IL_0174
	IL_019d:                                                                        //ldloc.s				V_10
	IL_019f:            if(V_10==nullptr)goto IL_01c2;                              //brfalse.s				IL_01c2
	IL_01a1:                                                                        //ldc.i4				0x0
	IL_01a6:            V_11=0;                                                     //stloc				V_11
	IL_01aa:            /*goto IL_0174;*/goto IL_01ac;                              //br.s				IL_0174
	IL_01ac:            goto IL_01ae;                                               //br.s				IL_01ae
	IL_01ae:                                                                        //ldloc.s				V_10
	IL_01b0:            /*V_10->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_01b5:                                                                        //ldc.i4				0x2
	IL_01ba:            V_11=2;                                                     //stloc				V_11
	IL_01be:            /*goto IL_0174;*/goto IL_01c0;                              //br.s				IL_0174
	IL_01c0:            goto IL_01c2;                                               //br.s				IL_01c2
	IL_01c2:                                                                        //endfinally
	                    ;}
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:                                                                        //ldloc.1
	IL_01c5:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1));   //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_01ca:            return;                                                     //ret
	IL_01cb:                                                                        //ldarg.1
	IL_01cc:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_01d1:            V_6=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_6
	IL_01d3:                                                                        //ldc.i4				0x3
	IL_01d8:            V_11=3;                                                     //stloc				V_11
	IL_01dc:            /*goto IL_0002;*/goto IL_01e1;                              //br				IL_0002
	IL_01e1:                                                                        //ldloc.s				V_6
	IL_01e3:            if(V_6==nullptr)goto IL_02ef;                               //brfalse				IL_02ef
	IL_01e8:                                                                        //ldc.i4				0x4
	IL_01ed:            V_11=4;                                                     //stloc				V_11
	IL_01f1:            /*goto IL_0002;*/goto IL_01f6;                              //br				IL_0002
	IL_01f6:            goto IL_01f9;                                               //br.s				IL_01f9
	IL_01f8:                                                                        //break
	IL_01f9:            goto IL_0074;                                               //br				IL_0074
	IL_01fe:                                                                        //ldarg.0
	IL_01ff:                                                                        //ldloc.s				V_4
	IL_0201:            Temp_5=V_4->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0206:            this->M_x1(Temp_5);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_020b:            return;                                                     //ret
	IL_020c:                                                                        //ldarg.0
	IL_020d:                                                                        //ldloc.2
	IL_020e:            Temp_0=V_2->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0213:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0218:            return;                                                     //ret
	IL_0219:                                                                        //ldarg.0
	IL_021a:                                                                        //ldloc.s				V_7
	IL_021c:            Temp_9=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_7)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0221:            Temp_10=Temp_9->Type;                                       //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0226:            this->M_x1(Temp_10);                                        //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_022b:                                                                        //ldloc.s				V_7
	IL_022d:            Temp_11=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_7)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0232:            Temp_12=safe_cast<System::Collections::IEnumerable^>(Temp_11)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0237:            V_9=Temp_12;                                                //stloc.s				V_9
	IL_0239:                                                                        //ldc.i4				0xc
	IL_023e:            V_11=12;                                                    //stloc				V_11
	IL_0242:            /*goto IL_0002;*/goto IL_0247;                              //br				IL_0002
	IL_0247:            /*goto IL_00ed;*/goto IL_00E801;                            //br				IL_00ed
	IL_024c:            return;                                                     //ret
	IL_024d:                                                                        //ldarg.0
	IL_024e:                                                                        //ldloc.3
	IL_024f:            Temp_13=V_3->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0254:            this->M_x1(Temp_13);                                        //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0259:            return;                                                     //ret
	IL_025a:                                                                        //ldloc.0
	IL_025b:            Temp_3=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0260:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0265:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_3);//stloc.1
	IL_0266:                                                                        //ldc.i4				0x9
	IL_026b:            V_11=9;                                                     //stloc				V_11
	IL_026f:            /*goto IL_0002;*/goto IL_0274;                              //br				IL_0002
	IL_0274:                                                                        //ldloc.1
	IL_0275:            if(V_1==nullptr)goto IL_028a;                               //brfalse.s				IL_028a
	IL_0277:                                                                        //ldc.i4				0x10
	IL_027c:            V_11=16;                                                    //stloc				V_11
	IL_0280:            /*goto IL_0002;*/goto IL_0285;                              //br				IL_0002
	IL_0285:            goto IL_01c3;                                               //br				IL_01c3
	IL_028a:                                                                        //ldarg.0
	IL_028b:                                                                        //ldloc.0
	IL_028c:            Temp_4=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0291:            this->M_x1(Temp_4);                                         //call				void Root::T_x65::M_x1(System::String^)
	IL_0296:            return;                                                     //ret
	IL_0297:                                                                        //ldarg.1
	IL_0298:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_029d:            V_3=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0); //stloc.3
	IL_029e:                                                                        //ldc.i4				0x5
	IL_02a3:            V_11=5;                                                     //stloc				V_11
	IL_02a7:            /*goto IL_0002;*/goto IL_02ac;                              //br				IL_0002
	IL_02ac:                                                                        //ldloc.3
	IL_02ad:            if(V_3==nullptr)goto IL_02bf;                               //brfalse.s				IL_02bf
	IL_02af:                                                                        //ldc.i4				0xe
	IL_02b4:            V_11=14;                                                    //stloc				V_11
	IL_02b8:            /*goto IL_0002;*/goto IL_02bd;                              //br				IL_0002
	IL_02bd:            goto IL_024d;                                               //br.s				IL_024d
	IL_02bf:                                                                        //ldarg.1
	IL_02c0:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_02c5:            V_4=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.s				V_4
	IL_02c7:                                                                        //ldc.i4				0x2
	IL_02cc:            V_11=2;                                                     //stloc				V_11
	IL_02d0:            /*goto IL_0002;*/goto IL_02d5;                              //br				IL_0002
	IL_02d5:                                                                        //ldloc.s				V_4
	IL_02d7:            if(V_4==nullptr)goto IL_008f;                               //brfalse				IL_008f
	IL_02dc:                                                                        //ldc.i4				0xa
	IL_02e1:            V_11=10;                                                    //stloc				V_11
	IL_02e5:            /*goto IL_0002;*/goto IL_02ea;                              //br				IL_0002
	IL_02ea:            goto IL_01fe;                                               //br				IL_01fe
	IL_02ef:                                                                        //ldarg.1
	IL_02f0:                                                                        //isinst				Reflector::CodeModel::IFunctionPointer
	IL_02f5:            V_7=dynamic_cast<Reflector::CodeModel::IFunctionPointer^>(A_0);//stloc.s				V_7
	IL_02f7:                                                                        //ldc.i4				0x1
	IL_02fc:            V_11=1;                                                     //stloc				V_11
	IL_0300:            /*goto IL_0002;*/goto IL_0305;                              //br				IL_0002
	IL_0305:                                                                        //ldloc.s				V_7
	IL_0307:            if(V_7==nullptr)goto IL_0337;                               //brfalse.s				IL_0337
	IL_0309:                                                                        //ldc.i4				0xd
	IL_030e:            V_11=13;                                                    //stloc				V_11
	IL_0312:            /*goto IL_0002;*/goto IL_0317;                              //br				IL_0002
	IL_0317:            goto IL_0219;                                               //br				IL_0219
	IL_031c:                                                                        //ldarg.0
	IL_031d:                                                                        //ldloc.s				V_5
	IL_031f:            Temp_14=V_5->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0324:            this->M_x1(Temp_14);                                        //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0329:                                                                        //ldarg.0
	IL_032a:                                                                        //ldloc.s				V_5
	IL_032c:            Temp_15=V_5->Modifier;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_0331:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_15));//call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0336:            return;                                                     //ret
	IL_0337:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0007:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_1=A_0->Interfaces;                                     //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0012:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0017:            V_1=Temp_2;                                                 //stloc.1
	IL_0018:            /*goto IL_001a;*/goto IL_001801;                            //br.s				IL_001a
	IL_001801:          try{
	IL_001a:                                                                        //ldc.i4				0x0
	IL_001f:            V_3=0;                                                      //stloc				V_3
	IL_0023:            /*goto IL_0027;*/goto IL_0025;                              //br.s				IL_0027
	IL_0025:            goto IL_0044;                                               //br.s				IL_0044
	IL_0027:                                                                        //ldloc				V_3
	IL_002b:            switch(V_3){case 0:goto IL_0025;case 1:goto IL_009c;case 2:goto IL_007c;case 3:goto IL_008f;case 4:goto IL_006f;};//switch				(IL_0025,IL_009c,IL_007c,IL_008f,IL_006f)
	IL_0044:                                                                        //ldc.i4.2
	IL_0045:                                                                        //dup
	IL_0046:                                                                        //dup
	IL_0047:                                                                        //ldc.i4.4
	IL_0048:                                                                        //sub
	IL_0049:                                                                        //blt				IL_0045
	IL_004e:                                                                        //pop
	IL_004f:            goto IL_0071;                                               //br.s				IL_0071
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_4=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0057:                                                                        //castclass				Reflector::CodeModel::IType
	IL_005c:            V_0=safe_cast<Reflector::CodeModel::IType^>(Temp_4);        //stloc.0
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldloc.0
	IL_005f:            this->M_x1(V_0);                                            //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0064:                                                                        //ldc.i4				0x4
	IL_0069:            V_3=4;                                                      //stloc				V_3
	IL_006d:            /*goto IL_0027;*/goto IL_006f;                              //br.s				IL_0027
	IL_006f:            goto IL_0071;                                               //br.s				IL_0071
	IL_0071:                                                                        //ldc.i4				0x2
	IL_0076:            V_3=2;                                                      //stloc				V_3
	IL_007a:            /*goto IL_0027;*/goto IL_007c;                              //br.s				IL_0027
	IL_007c:                                                                        //ldloc.1
	IL_007d:            Temp_3=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0082:            if(Temp_3)goto IL_0051;                                     //brtrue.s				IL_0051
	IL_0084:                                                                        //ldc.i4				0x3
	IL_0089:            V_3=3;                                                      //stloc				V_3
	IL_008d:            /*goto IL_0027;*/goto IL_008f;                              //br.s				IL_0027
	IL_008f:            goto IL_0091;                                               //br.s				IL_0091
	IL_0091:                                                                        //ldc.i4				0x1
	IL_0096:            V_3=1;                                                      //stloc				V_3
	IL_009a:            /*goto IL_0027;*/goto IL_009c;                              //br.s				IL_0027
	IL_009c:            goto IL_00eb;                                               //leave.s				IL_00eb
	                    ;}
	                    finally{
	IL_009e:            goto IL_00b5;                                               //br.s				IL_00b5
	IL_00a0:                                                                        //ldloc				V_4
	IL_00a4:            switch(V_4){case 0:goto IL_00e8;case 1:goto IL_00c7;case 2:goto IL_00d5;};//switch				(IL_00e8,IL_00c7,IL_00d5)
	IL_00b5:                                                                        //ldloc.1
	IL_00b6:                                                                        //isinst				System::IDisposable
	IL_00bb:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00bc:                                                                        //ldc.i4				0x1
	IL_00c1:            V_4=1;                                                      //stloc				V_4
	IL_00c5:            /*goto IL_00a0;*/goto IL_00c7;                              //br.s				IL_00a0
	IL_00c7:                                                                        //ldloc.2
	IL_00c8:            if(V_2==nullptr)goto IL_00ea;                               //brfalse.s				IL_00ea
	IL_00ca:                                                                        //ldc.i4				0x2
	IL_00cf:            V_4=2;                                                      //stloc				V_4
	IL_00d3:            /*goto IL_00a0;*/goto IL_00d5;                              //br.s				IL_00a0
	IL_00d5:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00d7:                                                                        //ldloc.2
	IL_00d8:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00dd:                                                                        //ldc.i4				0x0
	IL_00e2:            V_4=0;                                                      //stloc				V_4
	IL_00e6:            /*goto IL_00a0;*/goto IL_00e8;                              //br.s				IL_00a0
	IL_00e8:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00ea:                                                                        //endfinally
	                    ;}
	IL_00eb:                                                                        //ldarg.0
	IL_00ec:                                                                        //ldarg.1
	IL_00ed:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00f2:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeOfExpression::get_Type()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x1(A_0);                                     //call				void Root::T_x61::M_x1(Reflector::CodeModel::ITypeOfExpression^)
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x65::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::INamespace^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0048;case 2:goto IL_008b;case 3:goto IL_006f;case 4:goto IL_0062;};//switch				(IL_000b,IL_0048,IL_008b,IL_006f,IL_0062)
	IL_002a:                                                                        //ldarg.1
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_4=this->F_x1;                                          //ldfld				Reflector::CodeModel::INamespace^ Root::T_x65 F_x1
	IL_0031:            Temp_5=Temp_4->Name;                                        //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0036:            Temp_6=(A_0 != Temp_5);                                     //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_003b:            if(!Temp_6)goto IL_008d;                                    //brfalse.s				IL_008d
	IL_003d:                                                                        //ldc.i4				0x1
	IL_0042:            V_0=1;                                                      //stloc				V_0
	IL_0046:            /*goto IL_000d;*/goto IL_0048;                              //br.s				IL_000d
	IL_0048:            goto IL_0064;                                               //br.s				IL_0064
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x65 F_x2
	IL_0050:                                                                        //ldarg.1
	IL_0051:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0056:                                                                        //pop
	IL_0057:                                                                        //ldc.i4				0x4
	IL_005c:            V_0=4;                                                      //stloc				V_0
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_008d;                                               //br.s				IL_008d
	IL_0064:                                                                        //ldc.i4				0x3
	IL_0069:            V_0=3;                                                      //stloc				V_0
	IL_006d:            /*goto IL_000d;*/goto IL_006f;                              //br.s				IL_000d
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_2=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x65 F_x2
	IL_0075:                                                                        //ldarg.1
	IL_0076:            Temp_3=Temp_2->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_007b:            if(Temp_3)goto IL_008d;                                     //brtrue.s				IL_008d
	IL_007d:            goto IL_0080;                                               //br.s				IL_0080
	IL_007f:                                                                        //break
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_0=2;                                                      //stloc				V_0
	IL_0089:            /*goto IL_000d;*/goto IL_008b;                              //br.s				IL_000d
	IL_008b:            goto IL_004a;                                               //br.s				IL_004a
	IL_008d:            return;                                                     //ret

}
inline void Root::T_x65::M_x2(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0);//stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_001a;                               //brfalse.s				IL_001a
	IL_000a:            goto IL_000c;                                               //br.s				IL_000c
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:            Temp_0=V_0->Type;                                           //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReferenceExpression::get_Type()
	IL_0013:            this->M_x1(safe_cast<Reflector::CodeModel::IType^>(Temp_0));//call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_0018:            goto IL_001a;                                               //br.s				IL_001a
	IL_001a:            return;                                                     //ret

}
inline void Root::T_x65::M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x65::M_x1(Reflector::CodeModel::IType^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Root::T_x61::M_x2(A_0);                                     //call				void Root::T_x61::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0013:            return;                                                     //ret

}
