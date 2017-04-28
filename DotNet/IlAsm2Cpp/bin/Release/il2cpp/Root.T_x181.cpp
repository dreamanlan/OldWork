#include "global_xref.h"

inline Root::T_x181::T_x181()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Collections::Hashtable^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x181 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x181 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0014:            this->F_x12=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_001f:            this->F_x13=safe_cast<System::Collections::IDictionary^>(Temp_1);//stfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldnull
	IL_0026:            this->F_x8=safe_cast<System::Object^>(nullptr);             //stfld				System::Object^ Root::T_x181 F_x8
	IL_002b:                                                                        //ldarg.0
	IL_002c:            /*Root::T_x129();*/                                         //call				void Root::T_x129::.ctor()
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x181 F_x1
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldc.i4.0
	IL_003a:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x181 F_x2
	IL_003f:            return;                                                     //ret

}
inline Root::T_x181::T_x181(System::Boolean A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Collections::Hashtable^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x181 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x181 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0014:            this->F_x12=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_1=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_001f:            this->F_x13=safe_cast<System::Collections::IDictionary^>(Temp_1);//stfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldnull
	IL_0026:            this->F_x8=safe_cast<System::Object^>(nullptr);             //stfld				System::Object^ Root::T_x181 F_x8
	IL_002b:                                                                        //ldarg.0
	IL_002c:            /*Root::T_x129();*/                                         //call				void Root::T_x129::.ctor()
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.1
	IL_0033:            this->F_x1=A_0;                                             //stfld				System::Boolean Root::T_x181 F_x1
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldarg.2
	IL_003a:            this->F_x2=A_1;                                             //stfld				System::Boolean Root::T_x181 F_x2
	IL_003f:            return;                                                     //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AddressDereferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAddressDereferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::AddressDereferenceExpression();//newobj				void Reflector::CodeModel::Memory::AddressDereferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressDereferenceExpression::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IAddressDereferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AddressOfExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAddressOfExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::AddressOfExpression();//newobj				void Reflector::CodeModel::Memory::AddressOfExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IAddressOfExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOfExpression::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IAddressOfExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AddressOutExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAddressOutExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::AddressOutExpression();//newobj				void Reflector::CodeModel::Memory::AddressOutExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IAddressOutExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOutExpression::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IAddressOutExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AddressReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAddressReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::AddressReferenceExpression();//newobj				void Reflector::CodeModel::Memory::AddressReferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IAddressReferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressReferenceExpression::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IAddressReferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArgumentListExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ArgumentListExpression();//newobj				void Reflector::CodeModel::Memory::ArgumentListExpression::.ctor()
	IL_0005:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_0);//ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArgumentReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IParameterReference^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IArgumentReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ArgumentReferenceExpression();//newobj				void Reflector::CodeModel::Memory::ArgumentReferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->Parameter;                                      //callvirt				Reflector::CodeModel::IParameterReference^ Reflector::CodeModel::IArgumentReferenceExpression::get_Parameter()
	IL_000d:            V_0->Parameter=Temp_1;                                      //callvirt				void Reflector::CodeModel::IArgumentReferenceExpression::set_Parameter(Reflector::CodeModel::IParameterReference^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArrayCreateExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::IArrayCreateExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ArrayCreateExpression();//newobj				void Reflector::CodeModel::Memory::ArrayCreateExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IArrayCreateExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayCreateExpression::get_Type()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayCreateExpression::get_Initializer()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Initializer=Temp_4;                                    //callvirt				void Reflector::CodeModel::IArrayCreateExpression::set_Initializer(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            Temp_5=V_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldarg.1
	IL_003d:            Temp_6=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayCreateExpression::get_Dimensions()
	IL_0042:            Temp_7=this->M_x2(Temp_6);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_0047:            Temp_5->AddRange(safe_cast<System::Collections::ICollection^>(Temp_7));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_004c:                                                                        //ldloc.0
	IL_004d:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IArrayDimension^ Root::T_x181::M_x1(Reflector::CodeModel::IArrayDimension^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArrayDimension^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	//local variables.
	Reflector::CodeModel::IArrayDimension^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ArrayDimension();//newobj				void Reflector::CodeModel::Memory::ArrayDimension::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IArrayDimension^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=A_0->LowerBound;                                     //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_0018:            V_0->LowerBound=Temp_1;                                     //callvirt				void Reflector::CodeModel::IArrayDimension::set_LowerBound(System::Int32)
	IL_001d:                                                                        //ldloc.0
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_2=A_0->UpperBound;                                     //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_0024:            V_0->UpperBound=Temp_2;                                     //callvirt				void Reflector::CodeModel::IArrayDimension::set_UpperBound(System::Int32)
	IL_0029:                                                                        //ldloc.0
	IL_002a:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArrayIndexerExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IArrayIndexerExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::ArrayIndexerExpression();//newobj				void Reflector::CodeModel::Memory::ArrayIndexerExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IArrayIndexerExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayIndexerExpression::get_Target()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IArrayIndexerExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_3=V_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_4=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayIndexerExpression::get_Indices()
	IL_0028:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_002d:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArrayInitializerExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IArrayInitializerExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ArrayInitializerExpression();//newobj				void Reflector::CodeModel::Memory::ArrayInitializerExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IArrayInitializerExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_1=V_0->Expressions;                                    //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayInitializerExpression::get_Expressions()
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            Temp_2=A_0->Expressions;                                    //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IArrayInitializerExpression::get_Expressions()
	IL_001e:            Temp_3=this->M_x2(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_0023:            Temp_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_3));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x181::M_x1(Reflector::CodeModel::IArrayType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ArrayType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IArrayType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.7
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ArrayType();     //newobj				void Reflector::CodeModel::Memory::ArrayType::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IArrayType^>(Temp_0);   //stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->ElementType=Temp_2;                                    //callvirt				void Reflector::CodeModel::IArrayType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:            Temp_3=V_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_4=A_0->Dimensions;                                     //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0030:            Temp_5=Root::T_x129::M_x1(Temp_4);                          //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Root::T_x129::M_x1(Reflector::CodeModel::IArrayDimensionCollection^)
	IL_0035:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IArrayDimensionCollection::AddRange(System::Collections::ICollection^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IType^>(V_0);        //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x181::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::InvalidOperationException^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::Memory::Assembly^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Version^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	array<System::Byte>^ Temp_8 = nullptr;
	array<System::Byte>^ Temp_9 = nullptr;
	Reflector::CodeModel::HashAlgorithm Temp_10 = (Reflector::CodeModel::HashAlgorithm)0;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_12 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::String^ Temp_15 = nullptr;
	System::ArgumentNullException^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_2=19;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_1=4;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0037;                                               //br.s				IL_0037
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_006e;case 1:goto IL_007b;case 2:goto IL_0048;case 3:goto IL_008e;case 4:goto IL_0014;case 5:goto IL_0055;};//switch				(IL_006e,IL_007b,IL_0048,IL_008e,IL_0014,IL_0055)
	IL_0037:                                                                        //ldarg.1
	IL_0038:            if(A_0!=nullptr)goto IL_0070;                               //brtrue.s				IL_0070
	IL_003a:            goto IL_003d;                                               //br.s				IL_003d
	IL_003c:                                                                        //break
	IL_003d:                                                                        //ldc.i4				0x2
	IL_0042:            V_1=2;                                                      //stloc				V_1
	IL_0046:            /*goto IL_0016;*/goto IL_0048;                              //br.s				IL_0016
	IL_0048:            goto IL_0090;                                               //br.s				IL_0090
	IL_004a:                                                                        //ldc.i4				0x5
	IL_004f:            V_1=5;                                                      //stloc				V_1
	IL_0053:            /*goto IL_0016;*/goto IL_0055;                              //br.s				IL_0016
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_17=A_0->Status;                                        //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_005b:            Temp_18=Temp_17->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_0060:                                                                        //ldc.i4.0
	IL_0061:            if(Temp_18<=0)goto IL_00aa;                                 //ble.s				IL_00aa
	IL_0063:                                                                        //ldc.i4				0x0
	IL_0068:            V_1=0;                                                      //stloc				V_1
	IL_006c:            /*goto IL_0016;*/goto IL_006e;                              //br.s				IL_0016
	IL_006e:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_1=1;                                                      //stloc				V_1
	IL_0079:            /*goto IL_0016;*/goto IL_007b;                              //br.s				IL_0016
	IL_007b:                                                                        //ldarg.1
	IL_007c:            Temp_1=A_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0081:            if(Temp_1==nullptr)goto IL_00aa;                            //brfalse.s				IL_00aa
	IL_0083:                                                                        //ldc.i4				0x3
	IL_0088:            V_1=3;                                                      //stloc				V_1
	IL_008c:            /*goto IL_0016;*/goto IL_008e;                              //br.s				IL_0016
	IL_008e:            goto IL_004a;                                               //br.s				IL_004a
	IL_0090:                                                                        //ldstr				L"\x4730\x5232\x5934\x4236\x5C38"
	IL_0095:                                                                        //ldloc				V_2
	IL_0099:            Temp_15=a(L"\x4730\x5232\x5934\x4236\x5C38",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009e:            Temp_16=gcnew System::ArgumentNullException(Temp_15);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_00a3:            throw Temp_16;                                              //throw
	IL_00a4:            Temp_0=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_00a9:            throw Temp_0;                                               //throw
	IL_00aa:            Temp_2=gcnew Reflector::CodeModel::Memory::Assembly();      //newobj				void Reflector::CodeModel::Memory::Assembly::.ctor()
	IL_00af:            V_0=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_2);    //stloc.0
	IL_00b0:                                                                        //ldloc.0
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:            Temp_3=A_0->AssemblyManager;                                //callvirt				Reflector::CodeModel::IAssemblyManager^ Reflector::CodeModel::IAssembly::get_AssemblyManager()
	IL_00b7:            V_0->AssemblyManager=Temp_3;                                //callvirt				void Reflector::CodeModel::IAssembly::set_AssemblyManager(Reflector::CodeModel::IAssemblyManager^)
	IL_00bc:                                                                        //ldloc.0
	IL_00bd:                                                                        //ldarg.1
	IL_00be:            Temp_4=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_00c3:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->Name=Temp_4;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_Name(System::String^)
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:                                                                        //ldarg.1
	IL_00ca:            Temp_5=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Version;//callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_00cf:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->Version=Temp_5;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_Version(System::Version^)
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:                                                                        //ldarg.1
	IL_00d6:            Temp_6=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->Culture;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_00db:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->Culture=Temp_6;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_Culture(System::String^)
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:                                                                        //ldarg.1
	IL_00e2:            Temp_7=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->PublicKey;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_00e7:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->PublicKey=Temp_7;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_PublicKey(array<System::Byte>^)
	IL_00ec:                                                                        //ldloc.0
	IL_00ed:                                                                        //ldarg.1
	IL_00ee:            Temp_8=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->PublicKeyToken;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_00f3:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->PublicKeyToken=Temp_8;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_PublicKeyToken(array<System::Byte>^)
	IL_00f8:                                                                        //ldloc.0
	IL_00f9:                                                                        //ldarg.1
	IL_00fa:            Temp_9=safe_cast<Reflector::CodeModel::IAssemblyReference^>(A_0)->HashValue;//callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_HashValue()
	IL_00ff:            safe_cast<Reflector::CodeModel::IAssemblyReference^>(V_0)->HashValue=Temp_9;//callvirt				void Reflector::CodeModel::IAssemblyReference::set_HashValue(array<System::Byte>^)
	IL_0104:                                                                        //ldloc.0
	IL_0105:                                                                        //ldarg.1
	IL_0106:            Temp_10=A_0->HashAlgorithm;                                 //callvirt				Reflector::CodeModel::HashAlgorithm Reflector::CodeModel::IAssembly::get_HashAlgorithm()
	IL_010b:            V_0->HashAlgorithm=Temp_10;                                 //callvirt				void Reflector::CodeModel::IAssembly::set_HashAlgorithm(Reflector::CodeModel::HashAlgorithm)
	IL_0110:                                                                        //ldloc.0
	IL_0111:            Temp_11=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0116:                                                                        //ldarg.0
	IL_0117:                                                                        //ldarg.1
	IL_0118:            Temp_12=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_011d:            Temp_13=this->M_x2(Temp_12);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0122:            Temp_11->AddRange(safe_cast<System::Collections::ICollection^>(Temp_13));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_0127:                                                                        //ldarg.0
	IL_0128:            Temp_14=this->F_x1;                                         //ldfld				System::Boolean Root::T_x181 F_x1
	IL_012d:                                                                        //pop
	IL_012e:                                                                        //ldloc.0
	IL_012f:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IAssignExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AssignExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssignExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::AssignExpression();//newobj				void Reflector::CodeModel::Memory::AssignExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IAssignExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Target()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IAssignExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Expression()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IAssignExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::AttachEventStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IEventReferenceExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IAttachEventStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::AttachEventStatement();//newobj				void Reflector::CodeModel::Memory::AttachEventStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IAttachEventStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IAttachEventStatement::get_Event()
	IL_0011:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0016:                                                                        //castclass				Reflector::CodeModel::IEventReferenceExpression
	IL_001b:            V_0->Event=safe_cast<Reflector::CodeModel::IEventReferenceExpression^>(Temp_2);//callvirt				void Reflector::CodeModel::IAttachEventStatement::set_Event(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0020:                                                                        //ldloc.0
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_3=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAttachEventStatement::get_Listener()
	IL_0028:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002d:            V_0->Listener=Temp_4;                                       //callvirt				void Reflector::CodeModel::IAttachEventStatement::set_Listener(Reflector::CodeModel::IExpression^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::BaseReferenceExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::BaseReferenceExpression();//newobj				void Reflector::CodeModel::Memory::BaseReferenceExpression::.ctor()
	IL_0005:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_0);//ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IBinaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::BinaryExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_1 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IBinaryExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::BinaryExpression();//newobj				void Reflector::CodeModel::Memory::BinaryExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IBinaryExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=A_0->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0010:            V_0->Operator=Temp_1;                                       //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Operator(Reflector::CodeModel::BinaryOperator)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_001d:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0022:            V_0->Left=Temp_3;                                           //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_0027:                                                                        //ldloc.0
	IL_0028:                                                                        //ldarg.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_4=A_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_002f:            Temp_5=this->M_x8(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0034:            V_0->Right=Temp_5;                                          //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_0039:                                                                        //ldloc.0
	IL_003a:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IBlockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::BlockStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IBlockStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::BlockStatement();//newobj				void Reflector::CodeModel::Memory::BlockStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:            Temp_1=V_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_2=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0016:            Temp_3=this->M_x2(Temp_2);                                  //callvirt				Reflector::CodeModel::IStatementCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IStatementCollection^)
	IL_001b:            Temp_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_3));//callvirt				void Reflector::CodeModel::IStatementCollection::AddRange(System::Collections::ICollection^)
	IL_0020:                                                                        //ldloc.0
	IL_0021:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IBreakStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::BreakStatement^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::BreakStatement();//newobj				void Reflector::CodeModel::Memory::BreakStatement::.ctor()
	IL_0005:            return safe_cast<Reflector::CodeModel::IStatement^>(Temp_0);//ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ICanCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::CanCastExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ICanCastExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::CanCastExpression();//newobj				void Reflector::CodeModel::Memory::CanCastExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ICanCastExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICanCastExpression::get_TargetType()
	IL_0011:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0016:            V_0->TargetType=Temp_2;                                     //callvirt				void Reflector::CodeModel::ICanCastExpression::set_TargetType(Reflector::CodeModel::IType^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICanCastExpression::get_Expression()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::ICanCastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ICastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::CastExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ICastExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::CastExpression();//newobj				void Reflector::CodeModel::Memory::CastExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ICastExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICastExpression::get_TargetType()
	IL_0011:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0016:            V_0->TargetType=Temp_2;                                     //callvirt				void Reflector::CodeModel::ICastExpression::set_TargetType(Reflector::CodeModel::IType^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICastExpression::get_Expression()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::ICastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::ICatchClause^ Root::T_x181::M_x1(Reflector::CodeModel::ICatchClause^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::CatchClause^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ICatchClause^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.7
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::CatchClause();   //newobj				void Reflector::CodeModel::Memory::CatchClause::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::ICatchClause^>(Temp_0); //stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ICatchClause::get_Condition()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::ICatchClause::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::ICatchClause::get_Variable()
	IL_002b:            Temp_4=this->M_x2(Temp_3);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0030:            V_0->Variable=Temp_4;                                       //callvirt				void Reflector::CodeModel::ICatchClause::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_5=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ICatchClause::get_Body()
	IL_003d:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0042:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0047:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::ICatchClause::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_004c:                                                                        //ldloc.0
	IL_004d:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IConditionCase^ Root::T_x181::M_x1(Reflector::CodeModel::IConditionCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ConditionCase^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IConditionCase^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::ConditionCase(); //newobj				void Reflector::CodeModel::Memory::ConditionCase::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IConditionCase^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::IConditionCase::set_Condition(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0023:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0028:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_002d:            safe_cast<Reflector::CodeModel::ISwitchCase^>(V_0)->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::ISwitchCase::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IConditionExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ConditionExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IConditionExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ConditionExpression();//newobj				void Reflector::CodeModel::Memory::ConditionExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IConditionExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Condition()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::IConditionExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Then;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Then=Temp_4;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Then(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_5=A_0->Else;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_003d:            Temp_6=this->M_x8(Temp_5);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0042:            V_0->Else=Temp_6;                                           //callvirt				void Reflector::CodeModel::IConditionExpression::set_Else(Reflector::CodeModel::IExpression^)
	IL_0047:                                                                        //ldloc.0
	IL_0048:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IConditionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ConditionStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IConditionStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ConditionStatement();//newobj				void Reflector::CodeModel::Memory::ConditionStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IConditionStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionStatement::get_Condition()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::IConditionStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Then;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Then()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0030:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0035:            V_0->Then=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::IConditionStatement::set_Then(Reflector::CodeModel::IBlockStatement^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldarg.1
	IL_003d:            Temp_5=A_0->Else;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Else()
	IL_0042:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0047:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_004c:            V_0->Else=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::IConditionStatement::set_Else(Reflector::CodeModel::IBlockStatement^)
	IL_0051:                                                                        //ldloc.0
	IL_0052:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IContinueStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ContinueStatement^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ContinueStatement();//newobj				void Reflector::CodeModel::Memory::ContinueStatement::.ctor()
	IL_0005:            return safe_cast<Reflector::CodeModel::IStatement^>(Temp_0);//ret

}
inline Reflector::CodeModel::ICustomAttribute^ Root::T_x181::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::CustomAttribute^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::CustomAttribute();//newobj				void Reflector::CodeModel::Memory::CustomAttribute::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0011:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_0016:            V_0->Constructor=Temp_2;                                    //callvirt				void Reflector::CodeModel::ICustomAttribute::set_Constructor(Reflector::CodeModel::IMethodReference^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_3=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0028:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_002d:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_6=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::ICustomAttribute^ Root::T_x129::M_x1(Reflector::CodeModel::ICustomAttribute^)
	IL_0039:            return Temp_6;                                              //ret

}
inline Reflector::CodeModel::IDefaultCase^ Root::T_x181::M_x1(Reflector::CodeModel::IDefaultCase^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::DefaultCase^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IDefaultCase^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::DefaultCase();   //newobj				void Reflector::CodeModel::Memory::DefaultCase::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IDefaultCase^>(Temp_0); //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=safe_cast<Reflector::CodeModel::ISwitchCase^>(A_0)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0011:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0016:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_001b:            safe_cast<Reflector::CodeModel::ISwitchCase^>(V_0)->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_2);//callvirt				void Reflector::CodeModel::ISwitchCase::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0020:                                                                        //ldloc.0
	IL_0021:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::DelegateCreateExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IDelegateCreateExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::DelegateCreateExpression();//newobj				void Reflector::CodeModel::Memory::DelegateCreateExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IDelegateCreateExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateCreateExpression::get_Target()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IDelegateCreateExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IDelegateCreateExpression::get_Method()
	IL_002b:            Temp_4=this->M_x2(Temp_3);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_0030:            V_0->Method=Temp_4;                                         //callvirt				void Reflector::CodeModel::IDelegateCreateExpression::set_Method(Reflector::CodeModel::IMethodReference^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_5=A_0->DelegateType;                                   //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IDelegateCreateExpression::get_DelegateType()
	IL_003d:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0042:            V_0->DelegateType=Temp_6;                                   //callvirt				void Reflector::CodeModel::IDelegateCreateExpression::set_DelegateType(Reflector::CodeModel::ITypeReference^)
	IL_0047:                                                                        //ldloc.0
	IL_0048:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::DelegateInvokeExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IDelegateInvokeExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::DelegateInvokeExpression();//newobj				void Reflector::CodeModel::Memory::DelegateInvokeExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IDelegateInvokeExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDelegateInvokeExpression::get_Target()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IDelegateInvokeExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:            Temp_3=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IDelegateInvokeExpression::get_Arguments()
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IDelegateInvokeExpression::get_Arguments()
	IL_0030:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_0035:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IDoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::DoStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IDoStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::DoStatement();   //newobj				void Reflector::CodeModel::Memory::DoStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IDoStatement^>(Temp_0); //stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IDoStatement::get_Condition()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::IDoStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IDoStatement::get_Body()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0030:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0035:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::IDoStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x181::M_x1(Reflector::CodeModel::IEmbeddedResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::EmbeddedResource^ Temp_0 = nullptr;
	Reflector::CodeModel::ResourceVisibility Temp_1 = (Reflector::CodeModel::ResourceVisibility)0;
	System::String^ Temp_2 = nullptr;
	array<System::Byte>^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IEmbeddedResource^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::EmbeddedResource();//newobj				void Reflector::CodeModel::Memory::EmbeddedResource::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IEmbeddedResource^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=safe_cast<Reflector::CodeModel::IResource^>(A_0)->Visibility;//callvirt				Reflector::CodeModel::ResourceVisibility Reflector::CodeModel::IResource::get_Visibility()
	IL_0010:            safe_cast<Reflector::CodeModel::IResource^>(V_0)->Visibility=Temp_1;//callvirt				void Reflector::CodeModel::IResource::set_Visibility(Reflector::CodeModel::ResourceVisibility)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_2=safe_cast<Reflector::CodeModel::IResource^>(V_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_001c:            safe_cast<Reflector::CodeModel::IResource^>(V_0)->Name=Temp_2;//callvirt				void Reflector::CodeModel::IResource::set_Name(System::String^)
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_3=A_0->Value;                                          //callvirt				array<System::Byte>^ Reflector::CodeModel::IEmbeddedResource::get_Value()
	IL_0028:            V_0->Value=Temp_3;                                          //callvirt				void Reflector::CodeModel::IEmbeddedResource::set_Value(array<System::Byte>^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:            return safe_cast<Reflector::CodeModel::IResource^>(V_0);    //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::EventDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_17 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_18 = nullptr;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_22 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_23 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_24 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_25 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_26 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_27 = nullptr;
	Reflector::CodeModel::IType^ Temp_28 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_29 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_003f;                                               //br.s				IL_003f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_01d7;case 1:goto IL_00d5;case 2:goto IL_0165;case 3:goto IL_008e;case 4:goto IL_013b;case 5:goto IL_0203;case 6:goto IL_01c1;case 7:goto IL_0106;case 8:goto IL_005b;case 9:goto IL_00b5;case 10:goto IL_01ea;case 11:goto IL_00ee;case 12:goto IL_011c;};//switch				(IL_01d7,IL_00d5,IL_0165,IL_008e,IL_013b,IL_0203,IL_01c1,IL_0106,IL_005b,IL_00b5,IL_01ea,IL_00ee,IL_011c)
	IL_003f:                                                                        //ldc.i4.5
	IL_0040:                                                                        //dup
	IL_0041:                                                                        //dup
	IL_0042:                                                                        //ldc.i4.6
	IL_0043:                                                                        //sub
	IL_0044:                                                                        //blt				IL_0040
	IL_0049:                                                                        //pop
	IL_004a:            Temp_0=gcnew Reflector::CodeModel::Memory::EventDeclaration();//newobj				void Reflector::CodeModel::Memory::EventDeclaration::.ctor()
	IL_004f:            V_0=safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_0);//stloc.0
	IL_0050:                                                                        //ldc.i4				0x8
	IL_0055:            V_1=8;                                                      //stloc				V_1
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_10=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0062:            Temp_26=V_0;if(Temp_10!=nullptr)goto IL_00b7;               //brtrue.s				IL_00b7
	IL_0064:            Temp_27=Temp_26;goto IL_00f0;                               //br				IL_00f0
	IL_0069:                                                                        //ldloc.0
	IL_006a:                                                                        //ldarg.0
	IL_006b:                                                                        //ldarg.1
	IL_006c:            Temp_22=A_0->InvokeMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_0071:            Temp_23=Temp_22->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0076:            Temp_24=Root::T_x129::M_x1(Temp_23);                        //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_007b:            V_0->InvokeMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_24);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_InvokeMethod(Reflector::CodeModel::IMethodReference^)
	IL_0080:                                                                        //ldc.i4				0x3
	IL_0085:            V_1=3;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_0090:                                                                        //ldloc.0
	IL_0091:                                                                        //ldarg.0
	IL_0092:                                                                        //ldarg.1
	IL_0093:            Temp_5=A_0->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0098:            Temp_6=Temp_5->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_009d:            Temp_7=Root::T_x129::M_x1(Temp_6);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00a2:            V_0->RemoveMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_7);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_RemoveMethod(Reflector::CodeModel::IMethodReference^)
	IL_00a7:                                                                        //ldc.i4				0x9
	IL_00ac:            V_1=9;                                                      //stloc				V_1
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:            goto IL_00f8;                                               //br.s				IL_00f8
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:            Temp_11=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_00bd:                                                                        //castclass				Reflector::CodeModel::IType
	IL_00c2:            Temp_29=Temp_26;Temp_28=safe_cast<Reflector::CodeModel::IType^>(Temp_11);goto IL_0167;//br				IL_0167
	IL_00c7:                                                                        //ldc.i4				0x1
	IL_00cc:            V_1=1;                                                      //stloc				V_1
	IL_00d0:            /*goto IL_0002;*/goto IL_00d5;                              //br				IL_0002
	IL_00d5:                                                                        //ldarg.0
	IL_00d6:            Temp_4=this->F_x2;                                          //ldfld				System::Boolean Root::T_x181 F_x2
	IL_00db:            if(!Temp_4)goto IL_0208;                                    //brfalse				IL_0208
	IL_00e0:                                                                        //ldc.i4				0xb
	IL_00e5:            V_1=11;                                                     //stloc				V_1
	IL_00e9:            /*goto IL_0002;*/goto IL_00ee;                              //br				IL_0002
	IL_00ee:            goto IL_0121;                                               //br.s				IL_0121
	IL_00f0:                                                                        //ldarg.1
	IL_00f1:            Temp_19=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00f6:            Temp_29=Temp_27;Temp_28=Temp_19;goto IL_0167;               //br.s				IL_0167
	IL_00f8:                                                                        //ldc.i4				0x7
	IL_00fd:            V_1=7;                                                      //stloc				V_1
	IL_0101:            /*goto IL_0002;*/goto IL_0106;                              //br				IL_0002
	IL_0106:                                                                        //ldarg.1
	IL_0107:            Temp_9=A_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_010c:            if(Temp_9==nullptr)goto IL_00c7;                            //brfalse.s				IL_00c7
	IL_010e:                                                                        //ldc.i4				0xc
	IL_0113:            V_1=12;                                                     //stloc				V_1
	IL_0117:            /*goto IL_0002;*/goto IL_011c;                              //br				IL_0002
	IL_011c:            goto IL_0069;                                               //br				IL_0069
	IL_0121:                                                                        //ldloc.0
	IL_0122:                                                                        //ldarg.1
	IL_0123:            Temp_21=safe_cast<Reflector::CodeModel::IDocumentationProvider^>(A_0)->Documentation;//callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_0128:            safe_cast<Reflector::CodeModel::IDocumentationProvider^>(V_0)->Documentation=Temp_21;//callvirt				void Reflector::CodeModel::IDocumentationProvider::set_Documentation(System::String^)
	IL_012d:                                                                        //ldc.i4				0x4
	IL_0132:            V_1=4;                                                      //stloc				V_1
	IL_0136:            /*goto IL_0002;*/goto IL_013b;                              //br				IL_0002
	IL_013b:            goto IL_0208;                                               //br				IL_0208
	IL_0140:                                                                        //ldloc.0
	IL_0141:                                                                        //ldarg.0
	IL_0142:                                                                        //ldarg.1
	IL_0143:            Temp_1=A_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_0148:            Temp_2=Temp_1->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_014d:            Temp_3=Root::T_x129::M_x1(Temp_2);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0152:            V_0->AddMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_3);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_AddMethod(Reflector::CodeModel::IMethodReference^)
	IL_0157:                                                                        //ldc.i4				0x2
	IL_015c:            V_1=2;                                                      //stloc				V_1
	IL_0160:            /*goto IL_0002;*/goto IL_0165;                              //br				IL_0002
	IL_0165:            goto IL_01dc;                                               //br.s				IL_01dc
	IL_0167:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_29)->DeclaringType=Temp_28;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_016c:                                                                        //ldloc.0
	IL_016d:                                                                        //ldarg.1
	IL_016e:            Temp_12=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0173:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_0)->Name=Temp_12;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_0178:                                                                        //ldloc.0
	IL_0179:                                                                        //ldarg.1
	IL_017a:            Temp_13=safe_cast<Reflector::CodeModel::IEventReference^>(A_0)->EventType;//callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IEventReference::get_EventType()
	IL_017f:            safe_cast<Reflector::CodeModel::IEventReference^>(V_0)->EventType=Temp_13;//callvirt				void Reflector::CodeModel::IEventReference::set_EventType(Reflector::CodeModel::ITypeReference^)
	IL_0184:                                                                        //ldloc.0
	IL_0185:                                                                        //ldarg.1
	IL_0186:            Temp_14=A_0->RuntimeSpecialName;                            //callvirt				System::Boolean Reflector::CodeModel::IEventDeclaration::get_RuntimeSpecialName()
	IL_018b:            V_0->RuntimeSpecialName=Temp_14;                            //callvirt				void Reflector::CodeModel::IEventDeclaration::set_RuntimeSpecialName(System::Boolean)
	IL_0190:                                                                        //ldloc.0
	IL_0191:                                                                        //ldarg.1
	IL_0192:            Temp_15=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::IEventDeclaration::get_SpecialName()
	IL_0197:            V_0->SpecialName=Temp_15;                                   //callvirt				void Reflector::CodeModel::IEventDeclaration::set_SpecialName(System::Boolean)
	IL_019c:                                                                        //ldloc.0
	IL_019d:            Temp_16=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_01a2:                                                                        //ldarg.0
	IL_01a3:                                                                        //ldarg.1
	IL_01a4:            Temp_17=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_01a9:            Temp_18=this->M_x2(Temp_17);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_01ae:            Temp_16->AddRange(safe_cast<System::Collections::ICollection^>(Temp_18));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_01b3:                                                                        //ldc.i4				0x6
	IL_01b8:            V_1=6;                                                      //stloc				V_1
	IL_01bc:            /*goto IL_0002;*/goto IL_01c1;                              //br				IL_0002
	IL_01c1:                                                                        //ldarg.1
	IL_01c2:            Temp_8=A_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_01c7:            if(Temp_8==nullptr)goto IL_01dc;                            //brfalse.s				IL_01dc
	IL_01c9:                                                                        //ldc.i4				0x0
	IL_01ce:            V_1=0;                                                      //stloc				V_1
	IL_01d2:            /*goto IL_0002;*/goto IL_01d7;                              //br				IL_0002
	IL_01d7:            goto IL_0140;                                               //br				IL_0140
	IL_01dc:                                                                        //ldc.i4				0xa
	IL_01e1:            V_1=10;                                                     //stloc				V_1
	IL_01e5:            /*goto IL_0002;*/goto IL_01ea;                              //br				IL_0002
	IL_01ea:                                                                        //ldarg.1
	IL_01eb:            Temp_20=A_0->RemoveMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_01f0:            if(Temp_20==nullptr)goto IL_00f8;                           //brfalse				IL_00f8
	IL_01f5:                                                                        //ldc.i4				0x5
	IL_01fa:            V_1=5;                                                      //stloc				V_1
	IL_01fe:            /*goto IL_0002;*/goto IL_0203;                              //br				IL_0002
	IL_0203:            goto IL_0090;                                               //br				IL_0090
	IL_0208:                                                                        //ldloc.0
	IL_0209:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::EventReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IEventReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IEventReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::EventReferenceExpression();//newobj				void Reflector::CodeModel::Memory::EventReferenceExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IEventReferenceExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReference^ Reflector::CodeModel::IEventReferenceExpression::get_Event()
	IL_0011:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IEventReference^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReference^)
	IL_0016:            V_0->Event=Temp_2;                                          //callvirt				void Reflector::CodeModel::IEventReferenceExpression::set_Event(Reflector::CodeModel::IEventReference^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IEventReferenceExpression::get_Target()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Target=Temp_4;                                         //callvirt				void Reflector::CodeModel::IEventReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IExpressionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ExpressionStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IExpressionStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ExpressionStatement();//newobj				void Reflector::CodeModel::Memory::ExpressionStatement::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IExpressionStatement^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionStatement::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IExpressionStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::FieldDeclaration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	Reflector::CodeModel::IType^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Boolean Temp_12 = false;
	Reflector::CodeModel::FieldVisibility Temp_13 = (Reflector::CodeModel::FieldVisibility)0;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_14 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_15 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_18 = nullptr;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_20 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_005c;case 1:goto IL_00f7;case 2:goto IL_010d;case 3:goto IL_002c;};//switch				(IL_005c,IL_00f7,IL_010d,IL_002c)
	IL_001b:            Temp_0=gcnew Reflector::CodeModel::Memory::FieldDeclaration();//newobj				void Reflector::CodeModel::Memory::FieldDeclaration::.ctor()
	IL_0020:            V_0=safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_0);//stloc.0
	IL_0021:                                                                        //ldc.i4				0x3
	IL_0026:            V_1=3;                                                      //stloc				V_1
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:            goto IL_002f;                                               //br.s				IL_002f
	IL_002e:                                                                        //break
	IL_002f:                                                                        //ldloc.0
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_3=this->F_x8;                                          //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0036:            Temp_21=V_0;if(Temp_3!=nullptr)goto IL_0112;                //brtrue				IL_0112
	IL_003b:            goto IL_003d;                                               //br.s				IL_003d
	IL_003d:                                                                        //ldarg.1
	IL_003e:            Temp_17=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0043:            Temp_20=Temp_21;Temp_19=Temp_17;goto IL_0061;               //br.s				IL_0061
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_2=safe_cast<Reflector::CodeModel::IDocumentationProvider^>(A_0)->Documentation;//callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_004c:            safe_cast<Reflector::CodeModel::IDocumentationProvider^>(V_0)->Documentation=Temp_2;//callvirt				void Reflector::CodeModel::IDocumentationProvider::set_Documentation(System::String^)
	IL_0051:                                                                        //ldc.i4				0x0
	IL_0056:            V_1=0;                                                      //stloc				V_1
	IL_005a:            /*goto IL_0002;*/goto IL_005c;                              //br.s				IL_0002
	IL_005c:            goto IL_0122;                                               //br				IL_0122
	IL_0061:            Temp_20=Temp_21;Temp_19=safe_cast<Reflector::CodeModel::IType^>(Temp_4);safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_20)->DeclaringType=Temp_19;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldarg.1
	IL_0068:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_006d:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_0)->Name=Temp_5;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_0072:                                                                        //ldloc.0
	IL_0073:                                                                        //ldarg.1
	IL_0074:            Temp_6=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldDeclaration::get_Initializer()
	IL_0079:            V_0->Initializer=Temp_6;                                    //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_Initializer(Reflector::CodeModel::IExpression^)
	IL_007e:                                                                        //ldloc.0
	IL_007f:                                                                        //ldarg.1
	IL_0080:            Temp_7=safe_cast<Reflector::CodeModel::IFieldReference^>(A_0)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0085:            safe_cast<Reflector::CodeModel::IFieldReference^>(V_0)->FieldType=Temp_7;//callvirt				void Reflector::CodeModel::IFieldReference::set_FieldType(Reflector::CodeModel::IType^)
	IL_008a:                                                                        //ldloc.0
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_8=A_0->Literal;                                        //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_Literal()
	IL_0091:            V_0->Literal=Temp_8;                                        //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_Literal(System::Boolean)
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.1
	IL_0098:            Temp_9=A_0->ReadOnly;                                       //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_ReadOnly()
	IL_009d:            V_0->ReadOnly=Temp_9;                                       //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_ReadOnly(System::Boolean)
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:                                                                        //ldarg.1
	IL_00a4:            Temp_10=A_0->RuntimeSpecialName;                            //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_RuntimeSpecialName()
	IL_00a9:            V_0->RuntimeSpecialName=Temp_10;                            //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_RuntimeSpecialName(System::Boolean)
	IL_00ae:                                                                        //ldloc.0
	IL_00af:                                                                        //ldarg.1
	IL_00b0:            Temp_11=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_SpecialName()
	IL_00b5:            V_0->SpecialName=Temp_11;                                   //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_SpecialName(System::Boolean)
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:            Temp_12=A_0->Static;                                        //callvirt				System::Boolean Reflector::CodeModel::IFieldDeclaration::get_Static()
	IL_00c1:            V_0->Static=Temp_12;                                        //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_Static(System::Boolean)
	IL_00c6:                                                                        //ldloc.0
	IL_00c7:                                                                        //ldarg.1
	IL_00c8:            Temp_13=A_0->Visibility;                                    //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_00cd:            V_0->Visibility=Temp_13;                                    //callvirt				void Reflector::CodeModel::IFieldDeclaration::set_Visibility(Reflector::CodeModel::FieldVisibility)
	IL_00d2:                                                                        //ldloc.0
	IL_00d3:            Temp_14=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_00d8:                                                                        //ldarg.0
	IL_00d9:                                                                        //ldarg.1
	IL_00da:            Temp_15=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_00df:            Temp_16=this->M_x2(Temp_15);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_00e4:            Temp_14->AddRange(safe_cast<System::Collections::ICollection^>(Temp_16));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_00e9:                                                                        //ldc.i4				0x1
	IL_00ee:            V_1=1;                                                      //stloc				V_1
	IL_00f2:            /*goto IL_0002;*/goto IL_00f7;                              //br				IL_0002
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x181 F_x2
	IL_00fd:            if(!Temp_1)goto IL_0122;                                    //brfalse.s				IL_0122
	IL_00ff:                                                                        //ldc.i4				0x2
	IL_0104:            V_1=2;                                                      //stloc				V_1
	IL_0108:            /*goto IL_0002;*/goto IL_010d;                              //br				IL_0002
	IL_010d:            goto IL_0045;                                               //br				IL_0045
	IL_0112:                                                                        //ldarg.0
	IL_0113:            Temp_4=this->F_x8;                                          //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0118:                                                                        //castclass				Reflector::CodeModel::IType
	IL_011d:            goto IL_0061;                                               //br				IL_0061
	IL_0122:                                                                        //ldloc.0
	IL_0123:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::FieldOfExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldOfExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::FieldOfExpression();//newobj				void Reflector::CodeModel::Memory::FieldOfExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IFieldOfExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldOfExpression::get_Field()
	IL_000d:            V_0->Field=Temp_1;                                          //callvirt				void Reflector::CodeModel::IFieldOfExpression::set_Field(Reflector::CodeModel::IFieldReference^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::FieldReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::FieldReferenceExpression();//newobj				void Reflector::CodeModel::Memory::FieldReferenceExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IFieldReferenceExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_0010:            V_0->Field=Temp_1;                                          //callvirt				void Reflector::CodeModel::IFieldReferenceExpression::set_Field(Reflector::CodeModel::IFieldReference^)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_2=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldReferenceExpression::get_Target()
	IL_001c:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IFieldReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0021:                                                                        //ldloc.0
	IL_0022:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IResource^ Root::T_x181::M_x1(Reflector::CodeModel::IFileResource^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::FileResource^ Temp_0 = nullptr;
	Reflector::CodeModel::ResourceVisibility Temp_1 = (Reflector::CodeModel::ResourceVisibility)0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	array<System::Byte>^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IFileResource^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::FileResource();  //newobj				void Reflector::CodeModel::Memory::FileResource::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IFileResource^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=safe_cast<Reflector::CodeModel::IResource^>(A_0)->Visibility;//callvirt				Reflector::CodeModel::ResourceVisibility Reflector::CodeModel::IResource::get_Visibility()
	IL_0010:            safe_cast<Reflector::CodeModel::IResource^>(V_0)->Visibility=Temp_1;//callvirt				void Reflector::CodeModel::IResource::set_Visibility(Reflector::CodeModel::ResourceVisibility)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_2=safe_cast<Reflector::CodeModel::IResource^>(V_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_001c:            safe_cast<Reflector::CodeModel::IResource^>(V_0)->Name=Temp_2;//callvirt				void Reflector::CodeModel::IResource::set_Name(System::String^)
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_3=A_0->Location;                                       //callvirt				System::String^ Reflector::CodeModel::IFileResource::get_Location()
	IL_0028:            V_0->Location=Temp_3;                                       //callvirt				void Reflector::CodeModel::IFileResource::set_Location(System::String^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.1
	IL_002f:            Temp_4=A_0->Offset;                                         //callvirt				System::Int32 Reflector::CodeModel::IFileResource::get_Offset()
	IL_0034:            V_0->Offset=Temp_4;                                         //callvirt				void Reflector::CodeModel::IFileResource::set_Offset(System::Int32)
	IL_0039:                                                                        //ldloc.0
	IL_003a:                                                                        //ldarg.1
	IL_003b:            Temp_5=A_0->HashValue;                                      //callvirt				array<System::Byte>^ Reflector::CodeModel::IFileResource::get_HashValue()
	IL_0040:            V_0->HashValue=Temp_5;                                      //callvirt				void Reflector::CodeModel::IFileResource::set_HashValue(array<System::Byte>^)
	IL_0045:                                                                        //ldloc.0
	IL_0046:            return safe_cast<Reflector::CodeModel::IResource^>(V_0);    //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IFixedStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::FixedStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IFixedStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::FixedStatement();//newobj				void Reflector::CodeModel::Memory::FixedStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IFixedStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IFixedStatement::get_Variable()
	IL_0019:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_001e:            V_0->Variable=Temp_2;                                       //callvirt				void Reflector::CodeModel::IFixedStatement::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFixedStatement::get_Expression()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IFixedStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_5=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IFixedStatement::get_Body()
	IL_003d:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0042:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0047:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::IFixedStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_004c:                                                                        //ldloc.0
	IL_004d:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IForEachStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ForEachStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IForEachStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::ForEachStatement();//newobj				void Reflector::CodeModel::Memory::ForEachStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IForEachStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IForEachStatement::get_Variable()
	IL_0011:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0016:            V_0->Variable=Temp_2;                                       //callvirt				void Reflector::CodeModel::IForEachStatement::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForEachStatement::get_Expression()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IForEachStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_5=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForEachStatement::get_Body()
	IL_0035:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_003a:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_003f:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::IForEachStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0044:                                                                        //ldloc.0
	IL_0045:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IForStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ForStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_7 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_8 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_9 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::IForStatement^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_005d;case 1:goto IL_00a2;case 2:goto IL_00e5;case 3:goto IL_0092;case 4:goto IL_0070;case 5:goto IL_00b8;};//switch				(IL_005d,IL_00a2,IL_00e5,IL_0092,IL_0070,IL_00b8)
	IL_0023:            Temp_0=gcnew Reflector::CodeModel::Memory::ForStatement();  //newobj				void Reflector::CodeModel::Memory::ForStatement::.ctor()
	IL_0028:            V_0=safe_cast<Reflector::CodeModel::IForStatement^>(Temp_0);//stloc.0
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.1
	IL_002c:            Temp_1=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForStatement::get_Body()
	IL_0031:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0036:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_003b:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_2);//callvirt				void Reflector::CodeModel::IForStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            Temp_3=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IForStatement::get_Condition()
	IL_0048:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_004d:            V_0->Condition=Temp_4;                                      //callvirt				void Reflector::CodeModel::IForStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0052:                                                                        //ldc.i4				0x0
	IL_0057:            V_1=0;                                                      //stloc				V_1
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_5=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Initializer()
	IL_0063:            if(Temp_5==nullptr)goto IL_0094;                            //brfalse.s				IL_0094
	IL_0065:                                                                        //ldc.i4				0x4
	IL_006a:            V_1=4;                                                      //stloc				V_1
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0072:                                                                        //ldloc.0
	IL_0073:                                                                        //ldarg.0
	IL_0074:                                                                        //ldarg.1
	IL_0075:            Temp_9=A_0->Increment;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Increment()
	IL_007a:            Temp_10=this->M_x12(Temp_9);                                //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_007f:            V_0->Increment=Temp_10;                                     //callvirt				void Reflector::CodeModel::IForStatement::set_Increment(Reflector::CodeModel::IStatement^)
	IL_0084:                                                                        //ldc.i4				0x3
	IL_0089:            V_1=3;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_1=1;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:                                                                        //ldarg.1
	IL_00a3:            Temp_6=A_0->Increment;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Increment()
	IL_00a8:            if(Temp_6==nullptr)goto IL_00e7;                            //brfalse.s				IL_00e7
	IL_00aa:                                                                        //ldc.i4				0x5
	IL_00af:            V_1=5;                                                      //stloc				V_1
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_0072;                                               //br.s				IL_0072
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:                                                                        //ldarg.1
	IL_00bd:            Temp_7=A_0->Initializer;                                    //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IForStatement::get_Initializer()
	IL_00c2:            Temp_8=this->M_x12(Temp_7);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_00c7:            V_0->Initializer=Temp_8;                                    //callvirt				void Reflector::CodeModel::IForStatement::set_Initializer(Reflector::CodeModel::IStatement^)
	IL_00cc:                                                                        //ldc.i4.0
	IL_00cd:                                                                        //dup
	IL_00ce:                                                                        //dup
	IL_00cf:                                                                        //ldc.i4.2
	IL_00d0:                                                                        //sub
	IL_00d1:                                                                        //blt				IL_00cd
	IL_00d6:                                                                        //pop
	IL_00d7:                                                                        //ldc.i4				0x2
	IL_00dc:            V_1=2;                                                      //stloc				V_1
	IL_00e0:            /*goto IL_0002;*/goto IL_00e5;                              //br				IL_0002
	IL_00e5:            goto IL_0094;                                               //br.s				IL_0094
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::GenericDefaultExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IGenericArgument^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IGenericDefaultExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::GenericDefaultExpression();//newobj				void Reflector::CodeModel::Memory::GenericDefaultExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IGenericDefaultExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->GenericArgument;                                //callvirt				Reflector::CodeModel::IGenericArgument^ Reflector::CodeModel::IGenericDefaultExpression::get_GenericArgument()
	IL_0019:            Temp_2=this->M_x13(safe_cast<Reflector::CodeModel::IType^>(Temp_1));//callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:                                                                        //castclass				Reflector::CodeModel::IGenericArgument
	IL_0023:            V_0->GenericArgument=safe_cast<Reflector::CodeModel::IGenericArgument^>(Temp_2);//callvirt				void Reflector::CodeModel::IGenericDefaultExpression::set_GenericArgument(Reflector::CodeModel::IGenericArgument^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IGotoStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::GotoStatement^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IGotoStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::GotoStatement(); //newobj				void Reflector::CodeModel::Memory::GotoStatement::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IGotoStatement^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IGotoStatement::get_Name()
	IL_000d:            V_0->Name=Temp_1;                                           //callvirt				void Reflector::CodeModel::IGotoStatement::set_Name(System::String^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::ILabeledStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::LabeledStatement^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::ILabeledStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::LabeledStatement();//newobj				void Reflector::CodeModel::Memory::LabeledStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ILabeledStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ILabeledStatement::get_Name()
	IL_0010:            V_0->Name=Temp_1;                                           //callvirt				void Reflector::CodeModel::ILabeledStatement::set_Name(System::String^)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2=A_0->Statement;                                      //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::ILabeledStatement::get_Statement()
	IL_001d:            Temp_3=this->M_x12(Temp_2);                                 //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x12(Reflector::CodeModel::IStatement^)
	IL_0022:            V_0->Statement=Temp_3;                                      //callvirt				void Reflector::CodeModel::ILabeledStatement::set_Statement(Reflector::CodeModel::IStatement^)
	IL_0027:                                                                        //ldloc.0
	IL_0028:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ILiteralExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::LiteralExpression^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::ILiteralExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::LiteralExpression();//newobj				void Reflector::CodeModel::Memory::LiteralExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_000d:            V_0->Value=Temp_1;                                          //callvirt				void Reflector::CodeModel::ILiteralExpression::set_Value(System::Object^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::ILockStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::LockStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ILockStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::LockStatement(); //newobj				void Reflector::CodeModel::Memory::LockStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ILockStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ILockStatement::get_Expression()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::ILockStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ILockStatement::get_Body()
	IL_0023:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0028:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_002d:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::ILockStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MemoryCopyStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IMemoryCopyStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.5
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::MemoryCopyStatement();//newobj				void Reflector::CodeModel::Memory::MemoryCopyStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IMemoryCopyStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Destination;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Destination()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Destination=Temp_2;                                    //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Destination(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Source;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Source()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Source=Temp_4;                                         //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Source(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.1
	IL_0038:            Temp_5=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryCopyStatement::get_Length()
	IL_003d:            Temp_6=this->M_x8(Temp_5);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0042:            V_0->Length=Temp_6;                                         //callvirt				void Reflector::CodeModel::IMemoryCopyStatement::set_Length(Reflector::CodeModel::IExpression^)
	IL_0047:                                                                        //ldloc.0
	IL_0048:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MemoryInitializeStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IMemoryInitializeStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::MemoryInitializeStatement();//newobj				void Reflector::CodeModel::Memory::MemoryInitializeStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IMemoryInitializeStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Offset;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Offset()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Offset=Temp_2;                                         //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Offset(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Value()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Value=Temp_4;                                          //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Value(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_5=A_0->Length;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMemoryInitializeStatement::get_Length()
	IL_0035:            Temp_6=this->M_x8(Temp_5);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_003a:            V_0->Length=Temp_6;                                         //callvirt				void Reflector::CodeModel::IMemoryInitializeStatement::set_Length(Reflector::CodeModel::IExpression^)
	IL_003f:                                                                        //ldloc.0
	IL_0040:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Collections::IDictionary^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::Memory::ConstructorDeclaration^ Temp_7 = nullptr;
	System::Collections::IDictionary^ Temp_8 = nullptr;
	Reflector::CodeModel::Memory::MethodDeclaration^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Collections::IDictionary^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::String^ Temp_14 = nullptr;
	System::ArgumentNullException^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Object^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	Reflector::CodeModel::MethodCallingConvention Temp_19 = (Reflector::CodeModel::MethodCallingConvention)0;
	System::Boolean Temp_20 = false;
	System::Boolean Temp_21 = false;
	Reflector::CodeModel::MethodVisibility Temp_22 = (Reflector::CodeModel::MethodVisibility)0;
	System::Boolean Temp_23 = false;
	System::Boolean Temp_24 = false;
	System::Boolean Temp_25 = false;
	System::Boolean Temp_26 = false;
	System::Boolean Temp_27 = false;
	System::Boolean Temp_28 = false;
	System::Boolean Temp_29 = false;
	System::Boolean Temp_30 = false;
	Reflector::CodeModel::IMethodReturnType^ Temp_31 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_32 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_33 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_34 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_35 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_36 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_37 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_38 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_39 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_40 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_41 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_42 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_43 = nullptr;
	Reflector::CodeModel::IMethodReferenceCollection^ Temp_44 = nullptr;
	Reflector::CodeModel::IType^ Temp_45 = nullptr;
	System::Boolean Temp_46 = false;
	System::Object^ Temp_47 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_48 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_49 = nullptr;
	Reflector::CodeModel::IType^ Temp_50 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_51 = nullptr;
	//local variables.
	System::Boolean V_0 = false;
	Reflector::CodeModel::IMethodDeclaration^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_3=4;                                                      //stloc				V_3
	IL_0009:            goto IL_0054;                                               //br.s				IL_0054
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_02dd;case 1:goto IL_0103;case 2:goto IL_009c;case 3:goto IL_014f;case 4:goto IL_0174;case 5:goto IL_02f9;case 6:goto IL_015f;case 7:goto IL_02c7;case 8:goto IL_00f3;case 9:goto IL_013e;case 10:goto IL_012c;case 11:goto IL_00b8;case 12:goto IL_00da;case 13:goto IL_0078;case 14:goto IL_006a;case 15:goto IL_018a;};//switch				(IL_02dd,IL_0103,IL_009c,IL_014f,IL_0174,IL_02f9,IL_015f,IL_02c7,IL_00f3,IL_013e,IL_012c,IL_00b8,IL_00da,IL_0078,IL_006a,IL_018a)
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_0=this->F_x13;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_005a:            Temp_0->Clear();                                            //callvirt				void System::Collections::IDictionary::Clear()
	IL_005f:                                                                        //ldc.i4				0xe
	IL_0064:            V_2=14;                                                     //stloc				V_2
	IL_0068:            /*goto IL_000b;*/goto IL_006a;                              //br.s				IL_000b
	IL_006a:                                                                        //ldarg.1
	IL_006b:            if(A_0!=nullptr)goto IL_008e;                               //brtrue.s				IL_008e
	IL_006d:                                                                        //ldc.i4				0xd
	IL_0072:            V_2=13;                                                     //stloc				V_2
	IL_0076:            /*goto IL_000b;*/goto IL_0078;                              //br.s				IL_000b
	IL_0078:            goto IL_007a;                                               //br.s				IL_007a
	IL_007a:                                                                        //ldstr				L"\x5421\x4523\x4A25\x5D27\x4F29"
	IL_007f:                                                                        //ldloc				V_3
	IL_0083:            Temp_14=a(L"\x5421\x4523\x4A25\x5D27\x4F29",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:            Temp_15=gcnew System::ArgumentNullException(Temp_14);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_008d:            throw Temp_15;                                              //throw
	IL_008e:                                                                        //ldc.i4				0x2
	IL_0093:            V_2=2;                                                      //stloc				V_2
	IL_0097:            /*goto IL_000b;*/goto IL_009c;                              //br				IL_000b
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_5=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_00a2:                                                                        //ldarg.1
	IL_00a3:            Temp_6=Temp_5->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_00a8:            if(!Temp_6)goto IL_00cc;                                    //brfalse.s				IL_00cc
	IL_00aa:                                                                        //ldc.i4				0xb
	IL_00af:            V_2=11;                                                     //stloc				V_2
	IL_00b3:            /*goto IL_000b;*/goto IL_00b8;                              //br				IL_000b
	IL_00b8:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_11=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_00c0:                                                                        //ldarg.1
	IL_00c1:            Temp_12=Temp_11[safe_cast<System::Object^>(A_0)];           //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_00c6:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_00cb:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_12);//ret
	IL_00cc:                                                                        //ldc.i4				0xc
	IL_00d1:            V_2=12;                                                     //stloc				V_2
	IL_00d5:            /*goto IL_000b;*/goto IL_00da;                              //br				IL_000b
	IL_00da:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_00dc:                                                                        //break
	IL_00dd:                                                                        //ldarg.1
	IL_00de:            Temp_13=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_SpecialName()
	IL_00e3:            if(!Temp_13)goto IL_011e;                                   //brfalse.s				IL_011e
	IL_00e5:                                                                        //ldc.i4				0x8
	IL_00ea:            V_2=8;                                                      //stloc				V_2
	IL_00ee:            /*goto IL_000b;*/goto IL_00f3;                              //br				IL_000b
	IL_00f3:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00f5:                                                                        //ldc.i4				0x1
	IL_00fa:            V_2=1;                                                      //stloc				V_2
	IL_00fe:            /*goto IL_000b;*/goto IL_0103;                              //br				IL_000b
	IL_0103:                                                                        //ldarg.1
	IL_0104:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0109:                                                                        //ldstr				L"\x0C21\x4723\x5225\x4727\x5829"
	IL_010e:                                                                        //ldloc				V_3
	IL_0112:            Temp_3=a(L"\x0C21\x4723\x5225\x4727\x5829",V_3);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0117:            Temp_4=(Temp_2 == Temp_3);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_011c:            Temp_46=Temp_4;goto IL_012f;                                //br.s				IL_012f
	IL_011e:                                                                        //ldc.i4				0xa
	IL_0123:            V_2=10;                                                     //stloc				V_2
	IL_0127:            /*goto IL_000b;*/goto IL_012c;                              //br				IL_000b
	IL_012c:                                                                        //ldc.i4.0
	IL_012d:            Temp_46=false;goto IL_012f;                                 //br.s				IL_012f
	IL_012f:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.0
	IL_0130:                                                                        //ldc.i4				0x9
	IL_0135:            V_2=9;                                                      //stloc				V_2
	IL_0139:            /*goto IL_000b;*/goto IL_013e;                              //br				IL_000b
	IL_013e:                                                                        //ldloc.0
	IL_013f:            if(V_0)goto IL_0166;                                        //brtrue.s				IL_0166
	IL_0141:                                                                        //ldc.i4				0x3
	IL_0146:            V_2=3;                                                      //stloc				V_2
	IL_014a:            /*goto IL_000b;*/goto IL_014f;                              //br				IL_000b
	IL_014f:            goto IL_0151;                                               //br.s				IL_0151
	IL_0151:                                                                        //ldc.i4				0x6
	IL_0156:            V_2=6;                                                      //stloc				V_2
	IL_015a:            /*goto IL_000b;*/goto IL_015f;                              //br				IL_000b
	IL_015f:            Temp_9=gcnew Reflector::CodeModel::Memory::MethodDeclaration();//newobj				void Reflector::CodeModel::Memory::MethodDeclaration::.ctor()
	IL_0164:            Temp_47=Temp_9;goto IL_017b;                                //br.s				IL_017b
	IL_0166:                                                                        //ldc.i4				0x4
	IL_016b:            V_2=4;                                                      //stloc				V_2
	IL_016f:            /*goto IL_000b;*/goto IL_0174;                              //br				IL_000b
	IL_0174:            Temp_7=gcnew Reflector::CodeModel::Memory::ConstructorDeclaration();//newobj				void Reflector::CodeModel::Memory::ConstructorDeclaration::.ctor()
	IL_0179:            Temp_47=Temp_7;goto IL_017b;                                //br.s				IL_017b
	IL_017b:            V_1=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_47);/*warning ! semantic stack doesn't empty at joint !;*///stloc.1
	IL_017c:                                                                        //ldc.i4				0xf
	IL_0181:            V_2=15;                                                     //stloc				V_2
	IL_0185:            /*goto IL_000b;*/goto IL_018a;                              //br				IL_000b
	IL_018a:                                                                        //ldloc.1
	IL_018b:                                                                        //ldarg.0
	IL_018c:            Temp_16=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0191:            Temp_49=V_1;if(Temp_16!=nullptr)goto IL_019d;               //brtrue.s				IL_019d
	IL_0193:            goto IL_0195;                                               //br.s				IL_0195
	IL_0195:                                                                        //ldarg.1
	IL_0196:            Temp_45=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_019b:            Temp_51=Temp_49;Temp_50=Temp_45;goto IL_01aa;               //br.s				IL_01aa
	IL_019d:                                                                        //ldarg.0
	IL_019e:            Temp_17=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_01a3:                                                                        //castclass				Reflector::CodeModel::IType
	IL_01a8:            Temp_51=Temp_49;Temp_50=safe_cast<Reflector::CodeModel::IType^>(Temp_17);goto IL_01aa;//br.s				IL_01aa
	IL_01aa:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_51)->DeclaringType=Temp_50;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_01af:                                                                        //ldloc.1
	IL_01b0:                                                                        //ldarg.1
	IL_01b1:            Temp_18=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_01b6:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->Name=Temp_18;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_01bb:                                                                        //ldloc.1
	IL_01bc:                                                                        //ldarg.1
	IL_01bd:            Temp_19=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_01c2:            safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->CallingConvention=Temp_19;//callvirt				void Reflector::CodeModel::IMethodSignature::set_CallingConvention(Reflector::CodeModel::MethodCallingConvention)
	IL_01c7:                                                                        //ldloc.1
	IL_01c8:                                                                        //ldarg.1
	IL_01c9:            Temp_20=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ExplicitThis;//callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_ExplicitThis()
	IL_01ce:            safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->ExplicitThis=Temp_20;//callvirt				void Reflector::CodeModel::IMethodSignature::set_ExplicitThis(System::Boolean)
	IL_01d3:                                                                        //ldloc.1
	IL_01d4:                                                                        //ldarg.1
	IL_01d5:            Temp_21=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->HasThis;//callvirt				System::Boolean Reflector::CodeModel::IMethodSignature::get_HasThis()
	IL_01da:            safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->HasThis=Temp_21;//callvirt				void Reflector::CodeModel::IMethodSignature::set_HasThis(System::Boolean)
	IL_01df:                                                                        //ldloc.1
	IL_01e0:                                                                        //ldarg.1
	IL_01e1:            Temp_22=A_0->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01e6:            V_1->Visibility=Temp_22;                                    //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Visibility(Reflector::CodeModel::MethodVisibility)
	IL_01eb:                                                                        //ldloc.1
	IL_01ec:                                                                        //ldarg.1
	IL_01ed:            Temp_23=A_0->Abstract;                                      //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Abstract()
	IL_01f2:            V_1->Abstract=Temp_23;                                      //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Abstract(System::Boolean)
	IL_01f7:                                                                        //ldloc.1
	IL_01f8:                                                                        //ldarg.1
	IL_01f9:            Temp_24=A_0->Final;                                         //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Final()
	IL_01fe:            V_1->Final=Temp_24;                                         //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Final(System::Boolean)
	IL_0203:                                                                        //ldloc.1
	IL_0204:                                                                        //ldarg.1
	IL_0205:            Temp_25=A_0->HideBySignature;                               //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_HideBySignature()
	IL_020a:            V_1->HideBySignature=Temp_25;                               //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_HideBySignature(System::Boolean)
	IL_020f:                                                                        //ldloc.1
	IL_0210:                                                                        //ldarg.1
	IL_0211:            Temp_26=A_0->NewSlot;                                       //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_NewSlot()
	IL_0216:            V_1->NewSlot=Temp_26;                                       //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_NewSlot(System::Boolean)
	IL_021b:                                                                        //ldloc.1
	IL_021c:                                                                        //ldarg.1
	IL_021d:            Temp_27=A_0->RuntimeSpecialName;                            //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_RuntimeSpecialName()
	IL_0222:            V_1->RuntimeSpecialName=Temp_27;                            //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_RuntimeSpecialName(System::Boolean)
	IL_0227:                                                                        //ldloc.1
	IL_0228:                                                                        //ldarg.1
	IL_0229:            Temp_28=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_SpecialName()
	IL_022e:            V_1->SpecialName=Temp_28;                                   //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_SpecialName(System::Boolean)
	IL_0233:                                                                        //ldloc.1
	IL_0234:                                                                        //ldarg.1
	IL_0235:            Temp_29=A_0->Static;                                        //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_023a:            V_1->Static=Temp_29;                                        //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Static(System::Boolean)
	IL_023f:                                                                        //ldloc.1
	IL_0240:                                                                        //ldarg.1
	IL_0241:            Temp_30=A_0->Virtual;                                       //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Virtual()
	IL_0246:            V_1->Virtual=Temp_30;                                       //callvirt				void Reflector::CodeModel::IMethodDeclaration::set_Virtual(System::Boolean)
	IL_024b:                                                                        //ldloc.1
	IL_024c:                                                                        //ldarg.0
	IL_024d:                                                                        //ldarg.1
	IL_024e:            Temp_31=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_0253:            Temp_32=Root::T_x129::M_x1(Temp_31);                        //callvirt				Reflector::CodeModel::IMethodReturnType^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnType^)
	IL_0258:            safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->ReturnType=Temp_32;//callvirt				void Reflector::CodeModel::IMethodSignature::set_ReturnType(Reflector::CodeModel::IMethodReturnType^)
	IL_025d:                                                                        //ldloc.1
	IL_025e:            Temp_33=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_1)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0263:                                                                        //ldarg.0
	IL_0264:                                                                        //ldarg.1
	IL_0265:            Temp_34=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_026a:            Temp_35=this->M_x2(Temp_34);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_026f:            Temp_33->AddRange(safe_cast<System::Collections::ICollection^>(Temp_35));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_0274:                                                                        //ldloc.1
	IL_0275:            Temp_36=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_027a:                                                                        //ldarg.0
	IL_027b:                                                                        //ldarg.1
	IL_027c:            Temp_37=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0281:            Temp_38=Root::T_x129::M_x1(Temp_37);                        //callvirt				Reflector::CodeModel::ITypeCollection^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeCollection^)
	IL_0286:            Temp_36->AddRange(safe_cast<System::Collections::ICollection^>(Temp_38));//callvirt				void Reflector::CodeModel::ITypeCollection::AddRange(System::Collections::ICollection^)
	IL_028b:                                                                        //ldloc.1
	IL_028c:            Temp_39=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_1)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0291:                                                                        //ldarg.0
	IL_0292:                                                                        //ldarg.1
	IL_0293:            Temp_40=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0298:            Temp_41=this->M_x2(Temp_40);                                //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IParameterDeclarationCollection^)
	IL_029d:            Temp_39->AddRange(safe_cast<System::Collections::ICollection^>(Temp_41));//callvirt				void Reflector::CodeModel::IParameterDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_02a2:                                                                        //ldloc.1
	IL_02a3:            Temp_42=V_1->Overrides;                                     //callvirt				Reflector::CodeModel::IMethodReferenceCollection^ Reflector::CodeModel::IMethodDeclaration::get_Overrides()
	IL_02a8:                                                                        //ldarg.0
	IL_02a9:                                                                        //ldarg.1
	IL_02aa:            Temp_43=A_0->Overrides;                                     //callvirt				Reflector::CodeModel::IMethodReferenceCollection^ Reflector::CodeModel::IMethodDeclaration::get_Overrides()
	IL_02af:            Temp_44=this->M_x2(Temp_43);                                //callvirt				Reflector::CodeModel::IMethodReferenceCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReferenceCollection^)
	IL_02b4:            Temp_42->AddRange(safe_cast<System::Collections::ICollection^>(Temp_44));//callvirt				void Reflector::CodeModel::IMethodReferenceCollection::AddRange(System::Collections::ICollection^)
	IL_02b9:                                                                        //ldc.i4				0x7
	IL_02be:            V_2=7;                                                      //stloc				V_2
	IL_02c2:            /*goto IL_000b;*/goto IL_02c7;                              //br				IL_000b
	IL_02c7:                                                                        //ldarg.0
	IL_02c8:            Temp_10=this->F_x2;                                         //ldfld				System::Boolean Root::T_x181 F_x2
	IL_02cd:            if(!Temp_10)goto IL_02fb;                                   //brfalse.s				IL_02fb
	IL_02cf:                                                                        //ldc.i4				0x0
	IL_02d4:            V_2=0;                                                      //stloc				V_2
	IL_02d8:            /*goto IL_000b;*/goto IL_02dd;                              //br				IL_000b
	IL_02dd:            goto IL_02df;                                               //br.s				IL_02df
	IL_02df:                                                                        //ldloc.1
	IL_02e0:                                                                        //ldarg.1
	IL_02e1:            Temp_1=safe_cast<Reflector::CodeModel::IDocumentationProvider^>(A_0)->Documentation;//callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_02e6:            safe_cast<Reflector::CodeModel::IDocumentationProvider^>(V_1)->Documentation=Temp_1;//callvirt				void Reflector::CodeModel::IDocumentationProvider::set_Documentation(System::String^)
	IL_02eb:                                                                        //ldc.i4				0x5
	IL_02f0:            V_2=5;                                                      //stloc				V_2
	IL_02f4:            /*goto IL_000b;*/goto IL_02f9;                              //br				IL_000b
	IL_02f9:            goto IL_02fb;                                               //br.s				IL_02fb
	IL_02fb:                                                                        //ldarg.0
	IL_02fc:            Temp_8=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0301:                                                                        //ldarg.1
	IL_0302:                                                                        //ldloc.1
	IL_0303:            Temp_8->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_1));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0308:                                                                        //ldloc.1
	IL_0309:            return V_1;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MethodInvokeExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodInvokeExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::MethodInvokeExpression();//newobj				void Reflector::CodeModel::Memory::MethodInvokeExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IMethodInvokeExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Method;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Method=Temp_2;                                         //callvirt				void Reflector::CodeModel::IMethodInvokeExpression::set_Method(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_3=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_0028:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_002d:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MethodOfExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodOfExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::MethodOfExpression();//newobj				void Reflector::CodeModel::Memory::MethodOfExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IMethodOfExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodOfExpression::get_Method()
	IL_000d:            V_0->Method=Temp_1;                                         //callvirt				void Reflector::CodeModel::IMethodOfExpression::set_Method(Reflector::CodeModel::IMethodReference^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MethodReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::MethodReferenceExpression();//newobj				void Reflector::CodeModel::Memory::MethodReferenceExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IMethodReferenceExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceExpression::get_Method()
	IL_0019:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_001e:            V_0->Method=Temp_2;                                         //callvirt				void Reflector::CodeModel::IMethodReferenceExpression::set_Method(Reflector::CodeModel::IMethodReference^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReferenceExpression::get_Target()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Target=Temp_4;                                         //callvirt				void Reflector::CodeModel::IMethodReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MethodReturnStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodReturnStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::MethodReturnStatement();//newobj				void Reflector::CodeModel::Memory::MethodReturnStatement::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IMethodReturnStatement^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodReturnStatement::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IMethodReturnStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IMethodReturnType^ Root::T_x181::M_x1(Reflector::CodeModel::IMethodReturnType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::MethodReturnType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodReturnType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::MethodReturnType();//newobj				void Reflector::CodeModel::Memory::MethodReturnType::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IMethodReturnType^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0018:            V_0->Type=Temp_1;                                           //callvirt				void Reflector::CodeModel::IMethodReturnType::set_Type(Reflector::CodeModel::IType^)
	IL_001d:                                                                        //ldloc.0
	IL_001e:            Temp_2=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0023:                                                                        //ldarg.1
	IL_0024:            Temp_3=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0029:            Temp_2->AddRange(safe_cast<System::Collections::ICollection^>(Temp_3));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldloc.0
	IL_0030:            Temp_4=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::IMethodReturnType^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodReturnType^)
	IL_0035:            return Temp_4;                                              //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x181::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ArgumentNullException^ Temp_1 = nullptr;
	System::NotSupportedException^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::Memory::Module^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Guid Temp_7;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_9 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_1=1;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_003d;case 1:goto IL_0014;case 2:goto IL_00b9;case 3:goto IL_00a3;};//switch				(IL_003d,IL_0014,IL_00b9,IL_00a3)
	IL_002f:                                                                        //ldarg.1
	IL_0030:            if(A_0!=nullptr)goto IL_0048;                               //brtrue.s				IL_0048
	IL_0032:                                                                        //ldc.i4				0x0
	IL_0037:            V_1=0;                                                      //stloc				V_1
	IL_003b:            /*goto IL_0016;*/goto IL_003d;                              //br.s				IL_0016
	IL_003d:            goto IL_00c9;                                               //br				IL_00c9
	IL_0042:            Temp_2=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0047:            throw Temp_2;                                               //throw
	IL_0048:            Temp_4=gcnew Reflector::CodeModel::Memory::Module();        //newobj				void Reflector::CodeModel::Memory::Module::.ctor()
	IL_004d:            V_0=safe_cast<Reflector::CodeModel::IModule^>(Temp_4);      //stloc.0
	IL_004e:                                                                        //ldloc.0
	IL_004f:                                                                        //ldarg.1
	IL_0050:            Temp_5=safe_cast<Reflector::CodeModel::IModuleReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_0055:            safe_cast<Reflector::CodeModel::IModuleReference^>(V_0)->Name=Temp_5;//callvirt				void Reflector::CodeModel::IModuleReference::set_Name(System::String^)
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldarg.1
	IL_005c:            Temp_6=A_0->Location;                                       //callvirt				System::String^ Reflector::CodeModel::IModule::get_Location()
	IL_0061:            V_0->Location=Temp_6;                                       //callvirt				void Reflector::CodeModel::IModule::set_Location(System::String^)
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldarg.1
	IL_0068:            Temp_7=A_0->Version;                                        //callvirt				System::Guid Reflector::CodeModel::IModule::get_Version()
	IL_006d:            V_0->Version=Temp_7;                                        //callvirt				void Reflector::CodeModel::IModule::set_Version(System::Guid)
	IL_0072:                                                                        //ldloc.0
	IL_0073:                                                                        //ldarg.1
	IL_0074:            Temp_8=A_0->TargetRuntimeVersion;                           //callvirt				System::String^ Reflector::CodeModel::IModule::get_TargetRuntimeVersion()
	IL_0079:            V_0->TargetRuntimeVersion=Temp_8;                           //callvirt				void Reflector::CodeModel::IModule::set_TargetRuntimeVersion(System::String^)
	IL_007e:                                                                        //ldloc.0
	IL_007f:            Temp_9=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0084:                                                                        //ldarg.0
	IL_0085:                                                                        //ldarg.1
	IL_0086:            Temp_10=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_008b:            Temp_11=this->M_x2(Temp_10);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0090:            Temp_9->AddRange(safe_cast<System::Collections::ICollection^>(Temp_11));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_0095:                                                                        //ldc.i4				0x3
	IL_009a:            V_1=3;                                                      //stloc				V_1
	IL_009e:            /*goto IL_0016;*/goto IL_00a3;                              //br				IL_0016
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:            Temp_3=this->F_x1;                                          //ldfld				System::Boolean Root::T_x181 F_x1
	IL_00a9:            if(!Temp_3)goto IL_00dd;                                    //brfalse.s				IL_00dd
	IL_00ab:                                                                        //ldc.i4				0x2
	IL_00b0:            V_1=2;                                                      //stloc				V_1
	IL_00b4:            /*goto IL_0016;*/goto IL_00b9;                              //br				IL_0016
	IL_00b9:                                                                        //ldc.i4.4
	IL_00ba:                                                                        //dup
	IL_00bb:                                                                        //dup
	IL_00bc:                                                                        //ldc.i4.2
	IL_00bd:                                                                        //sub
	IL_00be:                                                                        //blt				IL_00ba
	IL_00c3:                                                                        //pop
	IL_00c4:            goto IL_0042;                                               //br				IL_0042
	IL_00c9:                                                                        //ldstr				L"\x691E\x4020\x4F22\x5024\x4226"
	IL_00ce:                                                                        //ldloc				V_2
	IL_00d2:            Temp_0=a(L"\x691E\x4020\x4F22\x5024\x4226",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d7:            Temp_1=gcnew System::ArgumentNullException(Temp_0);         //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_00dc:            throw Temp_1;                                               //throw
	IL_00dd:                                                                        //ldloc.0
	IL_00de:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::NamedArgumentExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IMemberReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IPropertyReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMemberReference^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::INamedArgumentExpression^ V_0 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_1 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0081;case 1:goto IL_004e;case 2:goto IL_0092;case 3:goto IL_0068;case 4:goto IL_0040;case 5:goto IL_00ba;};//switch				(IL_0081,IL_004e,IL_0092,IL_0068,IL_0040,IL_00ba)
	IL_0023:            Temp_0=gcnew Reflector::CodeModel::Memory::NamedArgumentExpression();//newobj				void Reflector::CodeModel::Memory::NamedArgumentExpression::.ctor()
	IL_0028:            V_0=safe_cast<Reflector::CodeModel::INamedArgumentExpression^>(Temp_0);//stloc.0
	IL_0029:                                                                        //ldarg.1
	IL_002a:            Temp_1=A_0->Member;                                         //callvirt				Reflector::CodeModel::IMemberReference^ Reflector::CodeModel::INamedArgumentExpression::get_Member()
	IL_002f:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0034:            V_1=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_1);//stloc.1
	IL_0035:                                                                        //ldc.i4				0x4
	IL_003a:            V_3=4;                                                      //stloc				V_3
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.1
	IL_0041:            if(V_1==nullptr)goto IL_006a;                               //brfalse.s				IL_006a
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_3=1;                                                      //stloc				V_3
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_009f;                                               //br.s				IL_009f
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldloc.2
	IL_0053:            Temp_6=Root::T_x129::M_x1(V_2);                             //callvirt				Reflector::CodeModel::IPropertyReference^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_0058:            V_0->Member=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_6);//callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Member(Reflector::CodeModel::IMemberReference^)
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_3=3;                                                      //stloc				V_3
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:            goto IL_00bc;                                               //br.s				IL_00bc
	IL_006a:                                                                        //ldarg.1
	IL_006b:            Temp_7=A_0->Member;                                         //callvirt				Reflector::CodeModel::IMemberReference^ Reflector::CodeModel::INamedArgumentExpression::get_Member()
	IL_0070:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0075:            V_2=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(Temp_7);//stloc.2
	IL_0076:                                                                        //ldc.i4				0x0
	IL_007b:            V_3=0;                                                      //stloc				V_3
	IL_007f:            /*goto IL_0002;*/goto IL_0081;                              //br.s				IL_0002
	IL_0081:                                                                        //ldloc.2
	IL_0082:            if(V_2==nullptr)goto IL_00bc;                               //brfalse.s				IL_00bc
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_3=2;                                                      //stloc				V_3
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:                                                                        //ldc.i4.5
	IL_0093:                                                                        //dup
	IL_0094:                                                                        //dup
	IL_0095:                                                                        //ldc.i4.3
	IL_0096:                                                                        //sub
	IL_0097:                                                                        //blt				IL_0093
	IL_009c:                                                                        //pop
	IL_009d:            goto IL_0050;                                               //br.s				IL_0050
	IL_009f:                                                                        //ldloc.0
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldloc.1
	IL_00a2:            Temp_5=this->M_x2(V_1);                                     //callvirt				Reflector::CodeModel::IFieldReference^ Root::T_x129::M_x2(Reflector::CodeModel::IFieldReference^)
	IL_00a7:            V_0->Member=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_5);//callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Member(Reflector::CodeModel::IMemberReference^)
	IL_00ac:                                                                        //ldc.i4				0x5
	IL_00b1:            V_3=5;                                                      //stloc				V_3
	IL_00b5:            /*goto IL_0002;*/goto IL_00ba;                              //br				IL_0002
	IL_00ba:            goto IL_006a;                                               //br.s				IL_006a
	IL_00bc:                                                                        //ldloc.0
	IL_00bd:                                                                        //ldarg.0
	IL_00be:                                                                        //ldarg.1
	IL_00bf:            Temp_2=A_0->Value;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INamedArgumentExpression::get_Value()
	IL_00c4:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_00c9:            V_0->Value=Temp_3;                                          //callvirt				void Reflector::CodeModel::INamedArgumentExpression::set_Value(Reflector::CodeModel::IExpression^)
	IL_00ce:                                                                        //ldarg.0
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:            Temp_4=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::INamedArgumentExpression^)
	IL_00d5:            return Temp_4;                                              //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::NullCoalescingExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::INullCoalescingExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::NullCoalescingExpression();//newobj				void Reflector::CodeModel::Memory::NullCoalescingExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::INullCoalescingExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Condition()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Condition(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Expression()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::INullCoalescingExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ObjectCreateExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IObjectCreateExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::ObjectCreateExpression();//newobj				void Reflector::CodeModel::Memory::ObjectCreateExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IObjectCreateExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IObjectCreateExpression::get_Constructor()
	IL_0011:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IMethodReference^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_0016:            V_0->Constructor=Temp_2;                                    //callvirt				void Reflector::CodeModel::IObjectCreateExpression::set_Constructor(Reflector::CodeModel::IMethodReference^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            Temp_3=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_4=A_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IObjectCreateExpression::get_Arguments()
	IL_0028:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_002d:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ObjectInitializeExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IObjectInitializeExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ObjectInitializeExpression();//newobj				void Reflector::CodeModel::Memory::ObjectInitializeExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IObjectInitializeExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IObjectInitializeExpression::get_Type()
	IL_000e:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0013:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::IObjectInitializeExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x181::M_x1(Reflector::CodeModel::IOptionalModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::OptionalModifier^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IOptionalModifier^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::OptionalModifier();//newobj				void Reflector::CodeModel::Memory::OptionalModifier::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IOptionalModifier^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->ElementType=Temp_2;                                    //callvirt				void Reflector::CodeModel::IOptionalModifier::set_ElementType(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IOptionalModifier::get_Modifier()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0030:            V_0->Modifier=Temp_4;                                       //callvirt				void Reflector::CodeModel::IOptionalModifier::set_Modifier(Reflector::CodeModel::ITypeReference^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IType^>(V_0);        //ret

}
inline Reflector::CodeModel::IParameterDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ParameterDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.3
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::ParameterDeclaration();//newobj				void Reflector::CodeModel::Memory::ParameterDeclaration::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IParameterDeclaration^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=safe_cast<Reflector::CodeModel::IParameterReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IParameterReference::get_Name()
	IL_0018:            safe_cast<Reflector::CodeModel::IParameterReference^>(V_0)->Name=Temp_1;//callvirt				void Reflector::CodeModel::IParameterReference::set_Name(System::String^)
	IL_001d:                                                                        //ldloc.0
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_2=A_0->ParameterType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_0024:            V_0->ParameterType=Temp_2;                                  //callvirt				void Reflector::CodeModel::IParameterDeclaration::set_ParameterType(Reflector::CodeModel::IType^)
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_3=A_0->DefaultValue;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IParameterDeclaration::get_DefaultValue()
	IL_0030:            V_0->DefaultValue=Temp_3;                                   //callvirt				void Reflector::CodeModel::IParameterDeclaration::set_DefaultValue(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            Temp_4=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //ldarg.1
	IL_003d:            Temp_5=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0042:            Temp_6=this->M_x2(Temp_5);                                  //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0047:            Temp_4->AddRange(safe_cast<System::Collections::ICollection^>(Temp_6));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_7=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::IParameterDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IParameterDeclaration^)
	IL_0053:            return Temp_7;                                              //ret

}
inline Reflector::CodeModel::IType^ Root::T_x181::M_x1(Reflector::CodeModel::IPointerType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::PointerType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IPointerType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::PointerType();   //newobj				void Reflector::CodeModel::Memory::PointerType::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IPointerType^>(Temp_0); //stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_000e:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0013:            V_0->ElementType=Temp_2;                                    //callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IType^>(V_0);        //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::PropertyDeclaration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_17 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_18 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_19 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_20 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_21 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_22 = nullptr;
	Reflector::CodeModel::IType^ Temp_23 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_24 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_25 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_26 = nullptr;
	Reflector::CodeModel::IType^ Temp_27 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_28 = nullptr;
	//local variables.
	Reflector::CodeModel::IPropertyDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_003e;                                               //br.s				IL_003e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00e6;case 1:goto IL_00cb;case 2:goto IL_007c;case 3:goto IL_00a2;case 4:goto IL_00ff;case 5:goto IL_019c;case 6:goto IL_01b5;case 7:goto IL_008c;case 8:goto IL_004f;case 9:goto IL_0126;};//switch				(IL_00e6,IL_00cb,IL_007c,IL_00a2,IL_00ff,IL_019c,IL_01b5,IL_008c,IL_004f,IL_0126)
	IL_003e:            Temp_0=gcnew Reflector::CodeModel::Memory::PropertyDeclaration();//newobj				void Reflector::CodeModel::Memory::PropertyDeclaration::.ctor()
	IL_0043:            V_0=safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_0);//stloc.0
	IL_0044:                                                                        //ldc.i4				0x8
	IL_0049:            V_1=8;                                                      //stloc				V_1
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:                                                                        //ldloc.0
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_11=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0056:            Temp_25=V_0;if(Temp_11!=nullptr)goto IL_00a4;               //brtrue.s				IL_00a4
	IL_0058:            Temp_26=Temp_25;goto IL_00d0;                               //br.s				IL_00d0
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldarg.1
	IL_005d:            Temp_2=A_0->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0062:            Temp_3=Temp_2->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0067:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_006c:            V_0->GetMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_4);//callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_GetMethod(Reflector::CodeModel::IMethodReference^)
	IL_0071:                                                                        //ldc.i4				0x2
	IL_0076:            V_1=2;                                                      //stloc				V_1
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_007e:                                                                        //ldc.i4				0x7
	IL_0083:            V_1=7;                                                      //stloc				V_1
	IL_0087:            /*goto IL_0002;*/goto IL_008c;                              //br				IL_0002
	IL_008c:                                                                        //ldarg.1
	IL_008d:            Temp_10=A_0->GetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0092:            if(Temp_10==nullptr)goto IL_00d8;                           //brfalse.s				IL_00d8
	IL_0094:                                                                        //ldc.i4				0x3
	IL_0099:            V_1=3;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:            goto IL_005a;                                               //br.s				IL_005a
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_12=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_00aa:                                                                        //castclass				Reflector::CodeModel::IType
	IL_00af:            Temp_28=Temp_25;Temp_27=safe_cast<Reflector::CodeModel::IType^>(Temp_12);goto IL_012b;//br.s				IL_012b
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:                                                                        //ldarg.1
	IL_00b3:            Temp_5=safe_cast<Reflector::CodeModel::IDocumentationProvider^>(A_0)->Documentation;//callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_00b8:            safe_cast<Reflector::CodeModel::IDocumentationProvider^>(V_0)->Documentation=Temp_5;//callvirt				void Reflector::CodeModel::IDocumentationProvider::set_Documentation(System::String^)
	IL_00bd:                                                                        //ldc.i4				0x1
	IL_00c2:            V_1=1;                                                      //stloc				V_1
	IL_00c6:            /*goto IL_0002;*/goto IL_00cb;                              //br				IL_0002
	IL_00cb:            goto IL_01ba;                                               //br				IL_01ba
	IL_00d0:                                                                        //ldarg.1
	IL_00d1:            Temp_23=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00d6:            Temp_28=Temp_26;Temp_27=Temp_23;goto IL_012b;               //br.s				IL_012b
	IL_00d8:                                                                        //ldc.i4				0x0
	IL_00dd:            V_1=0;                                                      //stloc				V_1
	IL_00e1:            /*goto IL_0002;*/goto IL_00e6;                              //br				IL_0002
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x181 F_x2
	IL_00ec:            if(!Temp_1)goto IL_01ba;                                    //brfalse				IL_01ba
	IL_00f1:                                                                        //ldc.i4				0x4
	IL_00f6:            V_1=4;                                                      //stloc				V_1
	IL_00fa:            /*goto IL_0002;*/goto IL_00ff;                              //br				IL_0002
	IL_00ff:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0101:                                                                        //ldloc.0
	IL_0102:                                                                        //ldarg.0
	IL_0103:                                                                        //ldarg.1
	IL_0104:            Temp_7=A_0->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_0109:            Temp_8=Temp_7->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_010e:            Temp_9=Root::T_x129::M_x1(Temp_8);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0113:            V_0->SetMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_9);//callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_SetMethod(Reflector::CodeModel::IMethodReference^)
	IL_0118:                                                                        //ldc.i4				0x9
	IL_011d:            V_1=9;                                                      //stloc				V_1
	IL_0121:            /*goto IL_0002;*/goto IL_0126;                              //br				IL_0002
	IL_0126:            goto IL_007e;                                               //br				IL_007e
	IL_012b:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_28)->DeclaringType=Temp_27;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0130:                                                                        //ldloc.0
	IL_0131:                                                                        //ldarg.1
	IL_0132:            Temp_13=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0137:            safe_cast<Reflector::CodeModel::IMemberReference^>(V_0)->Name=Temp_13;//callvirt				void Reflector::CodeModel::IMemberReference::set_Name(System::String^)
	IL_013c:                                                                        //ldloc.0
	IL_013d:                                                                        //ldarg.1
	IL_013e:            Temp_14=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::IPropertyDeclaration::get_SpecialName()
	IL_0143:            V_0->SpecialName=Temp_14;                                   //callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_SpecialName(System::Boolean)
	IL_0148:                                                                        //ldloc.0
	IL_0149:                                                                        //ldarg.1
	IL_014a:            Temp_15=A_0->RuntimeSpecialName;                            //callvirt				System::Boolean Reflector::CodeModel::IPropertyDeclaration::get_RuntimeSpecialName()
	IL_014f:            V_0->RuntimeSpecialName=Temp_15;                            //callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_RuntimeSpecialName(System::Boolean)
	IL_0154:                                                                        //ldloc.0
	IL_0155:                                                                        //ldarg.1
	IL_0156:            Temp_16=safe_cast<Reflector::CodeModel::IPropertyReference^>(A_0)->PropertyType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_015b:            safe_cast<Reflector::CodeModel::IPropertyReference^>(V_0)->PropertyType=Temp_16;//callvirt				void Reflector::CodeModel::IPropertyReference::set_PropertyType(Reflector::CodeModel::IType^)
	IL_0160:                                                                        //ldloc.0
	IL_0161:            Temp_17=safe_cast<Reflector::CodeModel::IPropertyReference^>(V_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0166:                                                                        //ldarg.0
	IL_0167:                                                                        //ldarg.1
	IL_0168:            Temp_18=safe_cast<Reflector::CodeModel::IPropertyReference^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_016d:            Temp_19=this->M_x2(Temp_18);                                //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IParameterDeclarationCollection^)
	IL_0172:            Temp_17->AddRange(safe_cast<System::Collections::ICollection^>(Temp_19));//callvirt				void Reflector::CodeModel::IParameterDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_0177:                                                                        //ldloc.0
	IL_0178:            Temp_20=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_017d:                                                                        //ldarg.0
	IL_017e:                                                                        //ldarg.1
	IL_017f:            Temp_21=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0184:            Temp_22=this->M_x2(Temp_21);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0189:            Temp_20->AddRange(safe_cast<System::Collections::ICollection^>(Temp_22));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_018e:                                                                        //ldc.i4				0x5
	IL_0193:            V_1=5;                                                      //stloc				V_1
	IL_0197:            /*goto IL_0002;*/goto IL_019c;                              //br				IL_0002
	IL_019c:                                                                        //ldarg.1
	IL_019d:            Temp_6=A_0->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_01a2:            if(Temp_6==nullptr)goto IL_007e;                            //brfalse				IL_007e
	IL_01a7:                                                                        //ldc.i4				0x6
	IL_01ac:            V_1=6;                                                      //stloc				V_1
	IL_01b0:            /*goto IL_0002;*/goto IL_01b5;                              //br				IL_0002
	IL_01b5:            goto IL_0101;                                               //br				IL_0101
	IL_01ba:                                                                        //ldloc.0
	IL_01bb:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::PropertyIndexerExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IPropertyReferenceExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IPropertyIndexerExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::PropertyIndexerExpression();//newobj				void Reflector::CodeModel::Memory::PropertyIndexerExpression::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IPropertyReferenceExpression^ Reflector::CodeModel::IPropertyIndexerExpression::get_Target()
	IL_0011:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_0016:                                                                        //castclass				Reflector::CodeModel::IPropertyReferenceExpression
	IL_001b:            V_0->Target=safe_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(Temp_2);//callvirt				void Reflector::CodeModel::IPropertyIndexerExpression::set_Target(Reflector::CodeModel::IPropertyReferenceExpression^)
	IL_0020:                                                                        //ldloc.0
	IL_0021:            Temp_3=V_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            Temp_4=A_0->Indices;                                        //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IPropertyIndexerExpression::get_Indices()
	IL_002d:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::IExpressionCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IExpressionCollection^)
	IL_0032:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::IExpressionCollection::AddRange(System::Collections::ICollection^)
	IL_0037:                                                                        //ldloc.0
	IL_0038:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::PropertyReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IPropertyReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IPropertyReference^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IPropertyReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.4
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::PropertyReferenceExpression();//newobj				void Reflector::CodeModel::Memory::PropertyReferenceExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IPropertyReferenceExpression::get_Target()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Target=Temp_2;                                         //callvirt				void Reflector::CodeModel::IPropertyReferenceExpression::set_Target(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Property;                                       //callvirt				Reflector::CodeModel::IPropertyReference^ Reflector::CodeModel::IPropertyReferenceExpression::get_Property()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IPropertyReference^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_0030:            V_0->Property=Temp_4;                                       //callvirt				void Reflector::CodeModel::IPropertyReferenceExpression::set_Property(Reflector::CodeModel::IPropertyReference^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IType^ Root::T_x181::M_x1(Reflector::CodeModel::IReferenceType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ReferenceType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IReferenceType^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ReferenceType(); //newobj				void Reflector::CodeModel::Memory::ReferenceType::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IReferenceType^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_000e:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0013:            V_0->ElementType=Temp_2;                                    //callvirt				void Reflector::CodeModel::IReferenceType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IType^>(V_0);        //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::RemoveEventStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IEventReferenceExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IRemoveEventStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.5
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::RemoveEventStatement();//newobj				void Reflector::CodeModel::Memory::RemoveEventStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IRemoveEventStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Event;                                          //callvirt				Reflector::CodeModel::IEventReferenceExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Event()
	IL_0019:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x1(Reflector::CodeModel::IEventReferenceExpression^)
	IL_001e:                                                                        //castclass				Reflector::CodeModel::IEventReferenceExpression
	IL_0023:            V_0->Event=safe_cast<Reflector::CodeModel::IEventReferenceExpression^>(Temp_2);//callvirt				void Reflector::CodeModel::IRemoveEventStatement::set_Event(Reflector::CodeModel::IEventReferenceExpression^)
	IL_0028:                                                                        //ldloc.0
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_3=A_0->Listener;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IRemoveEventStatement::get_Listener()
	IL_0030:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0035:            V_0->Listener=Temp_4;                                       //callvirt				void Reflector::CodeModel::IRemoveEventStatement::set_Listener(Reflector::CodeModel::IExpression^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IType^ Root::T_x181::M_x1(Reflector::CodeModel::IRequiredModifier^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::RequiredModifier^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IRequiredModifier^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::RequiredModifier();//newobj				void Reflector::CodeModel::Memory::RequiredModifier::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IRequiredModifier^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->ElementType=Temp_2;                                    //callvirt				void Reflector::CodeModel::IRequiredModifier::set_ElementType(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Modifier;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IRequiredModifier::get_Modifier()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0030:            V_0->Modifier=Temp_4;                                       //callvirt				void Reflector::CodeModel::IRequiredModifier::set_Modifier(Reflector::CodeModel::ITypeReference^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IType^>(V_0);        //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::SizeOfExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::ISizeOfExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::SizeOfExpression();//newobj				void Reflector::CodeModel::Memory::SizeOfExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ISizeOfExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ISizeOfExpression::get_Type()
	IL_000e:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0013:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::ISizeOfExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::StackAllocateExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IStackAllocateExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::StackAllocateExpression();//newobj				void Reflector::CodeModel::Memory::StackAllocateExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IStackAllocateExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IStackAllocateExpression::get_Type()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::IStackAllocateExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IStackAllocateExpression::get_Expression()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IStackAllocateExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::SwitchStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::ISwitchStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::SwitchStatement();//newobj				void Reflector::CodeModel::Memory::SwitchStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::ISwitchStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ISwitchStatement::get_Expression()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::ISwitchStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:            Temp_3=V_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            Temp_4=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0030:            Temp_5=this->M_x2(Temp_4);                                  //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ISwitchCaseCollection^)
	IL_0035:            Temp_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_5));//callvirt				void Reflector::CodeModel::ISwitchCaseCollection::AddRange(System::Collections::ICollection^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ThisReferenceExpression^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ThisReferenceExpression();//newobj				void Reflector::CodeModel::Memory::ThisReferenceExpression::.ctor()
	IL_0005:            return safe_cast<Reflector::CodeModel::IExpression^>(Temp_0);//ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ThrowExceptionStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IThrowExceptionStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::ThrowExceptionStatement();//newobj				void Reflector::CodeModel::Memory::ThrowExceptionStatement::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IThrowExceptionStatement^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IThrowExceptionStatement::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::IThrowExceptionStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ITryCastExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TryCastExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::ITryCastExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::TryCastExpression();//newobj				void Reflector::CodeModel::Memory::TryCastExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::ITryCastExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->TargetType;                                     //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITryCastExpression::get_TargetType()
	IL_0019:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_001e:            V_0->TargetType=Temp_2;                                     //callvirt				void Reflector::CodeModel::ITryCastExpression::set_TargetType(Reflector::CodeModel::IType^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITryCastExpression::get_Expression()
	IL_002b:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0030:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::ITryCastExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0035:                                                                        //ldloc.0
	IL_0036:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TryCatchFinallyStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_8 = nullptr;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_9 = nullptr;
	//local variables.
	Reflector::CodeModel::ITryCatchFinallyStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::TryCatchFinallyStatement();//newobj				void Reflector::CodeModel::Memory::TryCatchFinallyStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Try;                                            //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Try()
	IL_0011:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0016:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_001b:            V_0->Try=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_2);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Try(Reflector::CodeModel::IBlockStatement^)
	IL_0020:                                                                        //ldloc.0
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_3=A_0->Fault;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Fault()
	IL_0028:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_002d:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0032:            V_0->Fault=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Fault(Reflector::CodeModel::IBlockStatement^)
	IL_0037:                                                                        //ldloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=A_0->Finally;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Finally()
	IL_003f:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0044:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0049:            V_0->Finally=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::ITryCatchFinallyStatement::set_Finally(Reflector::CodeModel::IBlockStatement^)
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_7=V_0->CatchClauses;                                   //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_8=A_0->CatchClauses;                                   //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_005b:            Temp_9=this->M_x2(Temp_8);                                  //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICatchClauseCollection^)
	IL_0060:            Temp_7->AddRange(safe_cast<System::Collections::ICollection^>(Temp_9));//callvirt				void Reflector::CodeModel::ICatchClauseCollection::AddRange(System::Collections::ICollection^)
	IL_0065:                                                                        //ldloc.0
	IL_0066:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x181::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Collections::IDictionary^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::Memory::TypeDeclaration^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_11 = nullptr;
	Reflector::CodeModel::TypeVisibility Temp_12 = (Reflector::CodeModel::TypeVisibility)0;
	System::Boolean Temp_13 = false;
	System::Boolean Temp_14 = false;
	System::Boolean Temp_15 = false;
	System::Boolean Temp_16 = false;
	System::Boolean Temp_17 = false;
	System::Boolean Temp_18 = false;
	Reflector::CodeModel::ITypeCollection^ Temp_19 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_20 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_21 = nullptr;
	System::Collections::IDictionary^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_23 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_24 = nullptr;
	System::Object^ Temp_25 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_26 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_27 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_28 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_29 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_30 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_31 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_32 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_33 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_34 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_35 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_36 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_37 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_38 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_39 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_40 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_41 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_42 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_43 = nullptr;
	System::Object^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::ArgumentNullException^ Temp_46 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_47 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_48 = nullptr;
	Reflector::CodeModel::IType^ Temp_49 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_50 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_51 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_3=8;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_2=3;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003f;                                               //br.s				IL_003f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0085;case 1:goto IL_023f;case 2:goto IL_006c;case 3:goto IL_0014;case 4:goto IL_0229;case 5:goto IL_0269;case 6:goto IL_009b;case 7:goto IL_004d;};//switch				(IL_0085,IL_023f,IL_006c,IL_0014,IL_0229,IL_0269,IL_009b,IL_004d)
	IL_003f:                                                                        //ldarg.1
	IL_0040:            if(A_0!=nullptr)goto IL_0061;                               //brtrue.s				IL_0061
	IL_0042:                                                                        //ldc.i4				0x7
	IL_0047:            V_2=7;                                                      //stloc				V_2
	IL_004b:            /*goto IL_0016;*/goto IL_004d;                              //br.s				IL_0016
	IL_004d:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_005b:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0060:            return safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_1);//ret
	IL_0061:                                                                        //ldc.i4				0x2
	IL_0066:            V_2=2;                                                      //stloc				V_2
	IL_006a:            /*goto IL_0016;*/goto IL_006c;                              //br.s				IL_0016
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_3=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0072:                                                                        //ldarg.1
	IL_0073:            Temp_4=Temp_3->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0078:            if(!Temp_4)goto IL_0087;                                    //brfalse.s				IL_0087
	IL_007a:                                                                        //ldc.i4				0x0
	IL_007f:            V_2=0;                                                      //stloc				V_2
	IL_0083:            /*goto IL_0016;*/goto IL_0085;                              //br.s				IL_0016
	IL_0085:            goto IL_004f;                                               //br.s				IL_004f
	IL_0087:            Temp_5=gcnew Reflector::CodeModel::Memory::TypeDeclaration();//newobj				void Reflector::CodeModel::Memory::TypeDeclaration::.ctor()
	IL_008c:            V_0=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_5);//stloc.0
	IL_008d:                                                                        //ldc.i4				0x6
	IL_0092:            V_2=6;                                                      //stloc				V_2
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:                                                                        //ldloc.0
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_7=this->F_x8;                                          //ldfld				System::Object^ Root::T_x181 F_x8
	IL_00a2:            Temp_48=V_0;if(Temp_7!=nullptr)goto IL_00a9;                //brtrue.s				IL_00a9
	IL_00a4:            Temp_51=Temp_48;goto IL_0244;                               //br				IL_0244
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:            Temp_8=this->F_x8;                                          //ldfld				System::Object^ Root::T_x181 F_x8
	IL_00af:                                                                        //castclass				Reflector::CodeModel::IType
	IL_00b4:            Temp_50=Temp_48;Temp_49=safe_cast<Reflector::CodeModel::IType^>(Temp_8);goto IL_00ca;//br.s				IL_00ca
	IL_00b6:                                                                        //ldstr				L"\x5025\x4927\x4629\x592B\x4B2D"
	IL_00bb:                                                                        //ldloc				V_3
	IL_00bf:            Temp_45=a(L"\x5025\x4927\x4629\x592B\x4B2D",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c4:            Temp_46=gcnew System::ArgumentNullException(Temp_45);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_00c9:            throw Temp_46;                                              //throw
	IL_00ca:            safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_50)->Owner=safe_cast<System::Object^>(Temp_49);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::ITypeReference::set_Owner(System::Object^)
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:                                                                        //ldarg.1
	IL_00d1:            Temp_9=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00d6:            safe_cast<Reflector::CodeModel::ITypeReference^>(V_0)->Name=Temp_9;//callvirt				void Reflector::CodeModel::ITypeReference::set_Name(System::String^)
	IL_00db:                                                                        //ldloc.0
	IL_00dc:                                                                        //ldarg.1
	IL_00dd:            Temp_10=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00e2:            safe_cast<Reflector::CodeModel::ITypeReference^>(V_0)->Namespace=Temp_10;//callvirt				void Reflector::CodeModel::ITypeReference::set_Namespace(System::String^)
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:                                                                        //ldarg.1
	IL_00e9:            Temp_11=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00ee:            V_0->BaseType=Temp_11;                                      //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_BaseType(Reflector::CodeModel::ITypeReference^)
	IL_00f3:                                                                        //ldloc.0
	IL_00f4:                                                                        //ldarg.1
	IL_00f5:            Temp_12=A_0->Visibility;                                    //callvirt				Reflector::CodeModel::TypeVisibility Reflector::CodeModel::ITypeDeclaration::get_Visibility()
	IL_00fa:            V_0->Visibility=Temp_12;                                    //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_Visibility(Reflector::CodeModel::TypeVisibility)
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldarg.1
	IL_0101:            Temp_13=A_0->Interface;                                     //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Interface()
	IL_0106:            V_0->Interface=Temp_13;                                     //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_Interface(System::Boolean)
	IL_010b:                                                                        //ldloc.0
	IL_010c:                                                                        //ldarg.1
	IL_010d:            Temp_14=A_0->Abstract;                                      //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Abstract()
	IL_0112:            V_0->Abstract=Temp_14;                                      //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_Abstract(System::Boolean)
	IL_0117:                                                                        //ldloc.0
	IL_0118:                                                                        //ldarg.1
	IL_0119:            Temp_15=A_0->Sealed;                                        //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_Sealed()
	IL_011e:            V_0->Sealed=Temp_15;                                        //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_Sealed(System::Boolean)
	IL_0123:                                                                        //ldloc.0
	IL_0124:                                                                        //ldarg.1
	IL_0125:            Temp_16=A_0->SpecialName;                                   //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_SpecialName()
	IL_012a:            V_0->SpecialName=Temp_16;                                   //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_SpecialName(System::Boolean)
	IL_012f:                                                                        //ldloc.0
	IL_0130:                                                                        //ldarg.1
	IL_0131:            Temp_17=A_0->RuntimeSpecialName;                            //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_RuntimeSpecialName()
	IL_0136:            V_0->RuntimeSpecialName=Temp_17;                            //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_RuntimeSpecialName(System::Boolean)
	IL_013b:                                                                        //ldloc.0
	IL_013c:                                                                        //ldarg.1
	IL_013d:            Temp_18=A_0->BeforeFieldInit;                               //callvirt				System::Boolean Reflector::CodeModel::ITypeDeclaration::get_BeforeFieldInit()
	IL_0142:            V_0->BeforeFieldInit=Temp_18;                               //callvirt				void Reflector::CodeModel::ITypeDeclaration::set_BeforeFieldInit(System::Boolean)
	IL_0147:                                                                        //ldloc.0
	IL_0148:            Temp_19=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_014d:                                                                        //ldarg.0
	IL_014e:                                                                        //ldarg.1
	IL_014f:            Temp_20=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0154:            Temp_21=Root::T_x129::M_x1(Temp_20);                        //callvirt				Reflector::CodeModel::ITypeCollection^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeCollection^)
	IL_0159:            Temp_19->AddRange(safe_cast<System::Collections::ICollection^>(Temp_21));//callvirt				void Reflector::CodeModel::ITypeCollection::AddRange(System::Collections::ICollection^)
	IL_015e:                                                                        //ldarg.0
	IL_015f:            Temp_22=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x12
	IL_0164:                                                                        //ldarg.1
	IL_0165:                                                                        //ldloc.0
	IL_0166:            Temp_22->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_0));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_016b:                                                                        //ldloc.0
	IL_016c:            Temp_23=V_0->Interfaces;                                    //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0171:                                                                        //ldarg.1
	IL_0172:            Temp_24=A_0->Interfaces;                                    //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0177:            Temp_23->AddRange(safe_cast<System::Collections::ICollection^>(Temp_24));//callvirt				void Reflector::CodeModel::ITypeReferenceCollection::AddRange(System::Collections::ICollection^)
	IL_017c:                                                                        //ldarg.0
	IL_017d:            Temp_25=this->F_x8;                                         //ldfld				System::Object^ Root::T_x181 F_x8
	IL_0182:            V_1=Temp_25;                                                //stloc.1
	IL_0183:                                                                        //ldarg.0
	IL_0184:                                                                        //ldloc.0
	IL_0185:            this->F_x8=safe_cast<System::Object^>(V_0);                 //stfld				System::Object^ Root::T_x181 F_x8
	IL_018a:                                                                        //ldloc.0
	IL_018b:            Temp_26=V_0->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0190:                                                                        //ldarg.0
	IL_0191:                                                                        //ldarg.1
	IL_0192:            Temp_27=A_0->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0197:            Temp_28=this->M_x2(Temp_27);                                //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodDeclarationCollection^)
	IL_019c:            Temp_26->AddRange(safe_cast<System::Collections::ICollection^>(Temp_28));//callvirt				void Reflector::CodeModel::IMethodDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_01a1:                                                                        //ldloc.0
	IL_01a2:            Temp_29=V_0->Fields;                                        //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_01a7:                                                                        //ldarg.0
	IL_01a8:                                                                        //ldarg.1
	IL_01a9:            Temp_30=A_0->Fields;                                        //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_01ae:            Temp_31=this->M_x2(Temp_30);                                //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IFieldDeclarationCollection^)
	IL_01b3:            Temp_29->AddRange(safe_cast<System::Collections::ICollection^>(Temp_31));//callvirt				void Reflector::CodeModel::IFieldDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_01b8:                                                                        //ldloc.0
	IL_01b9:            Temp_32=V_0->Properties;                                    //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_01be:                                                                        //ldarg.0
	IL_01bf:                                                                        //ldarg.1
	IL_01c0:            Temp_33=A_0->Properties;                                    //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_01c5:            Temp_34=this->M_x2(Temp_33);                                //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IPropertyDeclarationCollection^)
	IL_01ca:            Temp_32->AddRange(safe_cast<System::Collections::ICollection^>(Temp_34));//callvirt				void Reflector::CodeModel::IPropertyDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_01cf:                                                                        //ldloc.0
	IL_01d0:            Temp_35=V_0->Events;                                        //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_01d5:                                                                        //ldarg.0
	IL_01d6:                                                                        //ldarg.1
	IL_01d7:            Temp_36=A_0->Events;                                        //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_01dc:            Temp_37=this->M_x2(Temp_36);                                //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IEventDeclarationCollection^)
	IL_01e1:            Temp_35->AddRange(safe_cast<System::Collections::ICollection^>(Temp_37));//callvirt				void Reflector::CodeModel::IEventDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_01e6:                                                                        //ldloc.0
	IL_01e7:            Temp_38=V_0->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_01ec:                                                                        //ldarg.0
	IL_01ed:                                                                        //ldarg.1
	IL_01ee:            Temp_39=A_0->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_01f3:            Temp_40=this->M_x2(Temp_39);                                //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_01f8:            Temp_38->AddRange(safe_cast<System::Collections::ICollection^>(Temp_40));//callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_01fd:                                                                        //ldarg.0
	IL_01fe:                                                                        //ldloc.1
	IL_01ff:            this->F_x8=V_1;                                             //stfld				System::Object^ Root::T_x181 F_x8
	IL_0204:                                                                        //ldloc.0
	IL_0205:            Temp_41=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_020a:                                                                        //ldarg.0
	IL_020b:                                                                        //ldarg.1
	IL_020c:            Temp_42=safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(A_0)->Attributes;//callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0211:            Temp_43=this->M_x2(Temp_42);                                //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ICustomAttributeCollection^)
	IL_0216:            Temp_41->AddRange(safe_cast<System::Collections::ICollection^>(Temp_43));//callvirt				void Reflector::CodeModel::ICustomAttributeCollection::AddRange(System::Collections::ICollection^)
	IL_021b:                                                                        //ldc.i4				0x4
	IL_0220:            V_2=4;                                                      //stloc				V_2
	IL_0224:            /*goto IL_0016;*/goto IL_0229;                              //br				IL_0016
	IL_0229:                                                                        //ldarg.0
	IL_022a:            Temp_6=this->F_x2;                                          //ldfld				System::Boolean Root::T_x181 F_x2
	IL_022f:            if(!Temp_6)goto IL_026b;                                    //brfalse.s				IL_026b
	IL_0231:                                                                        //ldc.i4				0x1
	IL_0236:            V_2=1;                                                      //stloc				V_2
	IL_023a:            /*goto IL_0016;*/goto IL_023f;                              //br				IL_0016
	IL_023f:            goto IL_0242;                                               //br.s				IL_0242
	IL_0241:                                                                        //break
	IL_0242:            goto IL_024f;                                               //br.s				IL_024f
	IL_0244:                                                                        //ldarg.1
	IL_0245:            Temp_44=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_024a:            Temp_50=Temp_51;Temp_49=Temp_44;goto IL_00ca;               //br				IL_00ca
	IL_024f:                                                                        //ldloc.0
	IL_0250:                                                                        //ldarg.1
	IL_0251:            Temp_2=safe_cast<Reflector::CodeModel::IDocumentationProvider^>(A_0)->Documentation;//callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_0256:            safe_cast<Reflector::CodeModel::IDocumentationProvider^>(V_0)->Documentation=Temp_2;//callvirt				void Reflector::CodeModel::IDocumentationProvider::set_Documentation(System::String^)
	IL_025b:                                                                        //ldc.i4				0x5
	IL_0260:            V_2=5;                                                      //stloc				V_2
	IL_0264:            /*goto IL_0016;*/goto IL_0269;                              //br				IL_0016
	IL_0269:            goto IL_026b;                                               //br.s				IL_026b
	IL_026b:                                                                        //ldloc.0
	IL_026c:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TypeOfExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeOfExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::TypeOfExpression();//newobj				void Reflector::CodeModel::Memory::TypeOfExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ITypeOfExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeOfExpression::get_Type()
	IL_000e:            Temp_2=this->M_x13(Temp_1);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_0013:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::ITypeOfExpression::set_Type(Reflector::CodeModel::IType^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TypeOfTypedReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeOfTypedReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::TypeOfTypedReferenceExpression();//newobj				void Reflector::CodeModel::Memory::TypeOfTypedReferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::ITypeOfTypedReferenceExpression::get_Expression()
	IL_000e:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0013:            V_0->Expression=Temp_2;                                     //callvirt				void Reflector::CodeModel::ITypeOfTypedReferenceExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::TypeReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::TypeReferenceExpression();//newobj				void Reflector::CodeModel::Memory::TypeReferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::ITypeReferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Type;                                           //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReferenceExpression::get_Type()
	IL_000e:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::ITypeReference^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0013:            V_0->Type=Temp_2;                                           //callvirt				void Reflector::CodeModel::ITypeReferenceExpression::set_Type(Reflector::CodeModel::ITypeReference^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IUnaryExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::UnaryExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::UnaryOperator Temp_1 = (Reflector::CodeModel::UnaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IUnaryExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::UnaryExpression();//newobj				void Reflector::CodeModel::Memory::UnaryExpression::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IUnaryExpression^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=A_0->Operator;                                       //callvirt				Reflector::CodeModel::UnaryOperator Reflector::CodeModel::IUnaryExpression::get_Operator()
	IL_0018:            V_0->Operator=Temp_1;                                       //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Operator(Reflector::CodeModel::UnaryOperator)
	IL_001d:                                                                        //ldloc.0
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldarg.1
	IL_0020:            Temp_2=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0025:            Temp_3=this->M_x8(Temp_2);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_002a:            V_0->Expression=Temp_3;                                     //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002f:                                                                        //ldloc.0
	IL_0030:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IUsingStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::UsingStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IUsingStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::UsingStatement();//newobj				void Reflector::CodeModel::Memory::UsingStatement::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IUsingStatement^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_1=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Variable()
	IL_0011:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0016:            V_0->Variable=Temp_2;                                       //callvirt				void Reflector::CodeModel::IUsingStatement::set_Variable(Reflector::CodeModel::IExpression^)
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_3=A_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUsingStatement::get_Expression()
	IL_0023:            Temp_4=this->M_x8(Temp_3);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_0028:            V_0->Expression=Temp_4;                                     //callvirt				void Reflector::CodeModel::IUsingStatement::set_Expression(Reflector::CodeModel::IExpression^)
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_5=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IUsingStatement::get_Body()
	IL_0035:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_003a:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_003f:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_6);//callvirt				void Reflector::CodeModel::IUsingStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_0044:                                                                        //ldloc.0
	IL_0045:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::VariableDeclarationExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IVariableDeclarationExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::VariableDeclarationExpression();//newobj				void Reflector::CodeModel::Memory::VariableDeclarationExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableDeclarationExpression::get_Variable()
	IL_000e:            Temp_2=this->M_x2(Temp_1);                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Root::T_x129::M_x2(Reflector::CodeModel::IVariableDeclaration^)
	IL_0013:            V_0->Variable=Temp_2;                                       //callvirt				void Reflector::CodeModel::IVariableDeclarationExpression::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IVariableReference^ Root::T_x181::M_x1(Reflector::CodeModel::IVariableReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::VariableReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Collections::IDictionary^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Collections::IDictionary^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_8 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_9 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_10 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_12 = nullptr;
	//local variables.
	Reflector::CodeModel::IVariableReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.5
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::VariableReference();//newobj				void Reflector::CodeModel::Memory::VariableReference::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IVariableReference^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_1=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IVariableReference::get_Name()
	IL_0018:            V_0->Name=Temp_1;                                           //callvirt				void Reflector::CodeModel::IVariableReference::set_Name(System::String^)
	IL_001d:                                                                        //ldloc.0
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_2=A_0->Identifier;                                     //callvirt				System::Int32 Reflector::CodeModel::IVariableReference::get_Identifier()
	IL_0024:            V_0->Identifier=Temp_2;                                     //callvirt				void Reflector::CodeModel::IVariableReference::set_Identifier(System::Int32)
	IL_0029:                                                                        //ldloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_3=this->F_x13;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_4=Temp_3->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0036:            Temp_9=V_0;if(Temp_4)goto IL_003a;                          //brtrue.s				IL_003a
	IL_0038:            Temp_10=Temp_9;goto IL_004d;                                //br.s				IL_004d
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_5=this->F_x13;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_6=Temp_5[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0046:                                                                        //castclass				Reflector::CodeModel::IVariableDeclaration
	IL_004b:            Temp_12=Temp_9;Temp_11=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(Temp_6);goto IL_0055;//br.s				IL_0055
	IL_004d:                                                                        //ldarg.1
	IL_004e:            Temp_7=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableReference::get_Variable()
	IL_0053:            Temp_12=Temp_10;Temp_11=Temp_7;goto IL_0055;                //br.s				IL_0055
	IL_0055:            Temp_12->Variable=Temp_11;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IVariableReference::set_Variable(Reflector::CodeModel::IVariableDeclaration^)
	IL_005a:                                                                        //ldloc.0
	IL_005b:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x181::M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::VariableReferenceExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IVariableReferenceExpression^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Reflector::CodeModel::Memory::VariableReferenceExpression();//newobj				void Reflector::CodeModel::Memory::VariableReferenceExpression::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::CodeModel::IVariableReferenceExpression^>(Temp_0);//stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            Temp_1=A_0->Variable;                                       //callvirt				Reflector::CodeModel::IVariableReference^ Reflector::CodeModel::IVariableReferenceExpression::get_Variable()
	IL_000e:            Temp_2=Root::T_x129::M_x1(Temp_1);                          //callvirt				Reflector::CodeModel::IVariableReference^ Root::T_x129::M_x1(Reflector::CodeModel::IVariableReference^)
	IL_0013:            V_0->Variable=Temp_2;                                       //callvirt				void Reflector::CodeModel::IVariableReferenceExpression::set_Variable(Reflector::CodeModel::IVariableReference^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:            return safe_cast<Reflector::CodeModel::IExpression^>(V_0);  //ret

}
inline Reflector::CodeModel::IStatement^ Root::T_x181::M_x1(Reflector::CodeModel::IWhileStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::WhileStatement^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_4 = nullptr;
	//local variables.
	Reflector::CodeModel::IWhileStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Reflector::CodeModel::Memory::WhileStatement();//newobj				void Reflector::CodeModel::Memory::WhileStatement::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::CodeModel::IWhileStatement^>(Temp_0);//stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_1=A_0->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IWhileStatement::get_Condition()
	IL_0019:            Temp_2=this->M_x8(Temp_1);                                  //callvirt				Reflector::CodeModel::IExpression^ Root::T_x129::M_x8(Reflector::CodeModel::IExpression^)
	IL_001e:            V_0->Condition=Temp_2;                                      //callvirt				void Reflector::CodeModel::IWhileStatement::set_Condition(Reflector::CodeModel::IExpression^)
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_3=A_0->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IWhileStatement::get_Body()
	IL_002b:            Temp_4=Root::T_x129::M_x1(Temp_3);                          //callvirt				Reflector::CodeModel::IStatement^ Root::T_x129::M_x1(Reflector::CodeModel::IBlockStatement^)
	IL_0030:                                                                        //castclass				Reflector::CodeModel::IBlockStatement
	IL_0035:            V_0->Body=safe_cast<Reflector::CodeModel::IBlockStatement^>(Temp_4);//callvirt				void Reflector::CodeModel::IWhileStatement::set_Body(Reflector::CodeModel::IBlockStatement^)
	IL_003a:                                                                        //ldloc.0
	IL_003b:            return safe_cast<Reflector::CodeModel::IStatement^>(V_0);   //ret

}
inline Reflector::CodeModel::IVariableDeclaration^ Root::T_x181::M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::VariableDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::Collections::IDictionary^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::IVariableDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Reflector::CodeModel::Memory::VariableDeclaration();//newobj				void Reflector::CodeModel::Memory::VariableDeclaration::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(Temp_0);//stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=safe_cast<Reflector::CodeModel::IVariableReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IVariableReference::get_Name()
	IL_0010:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_0)->Name=Temp_1;//callvirt				void Reflector::CodeModel::IVariableReference::set_Name(System::String^)
	IL_0015:                                                                        //ldloc.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_2=safe_cast<Reflector::CodeModel::IVariableReference^>(A_0)->Identifier;//callvirt				System::Int32 Reflector::CodeModel::IVariableReference::get_Identifier()
	IL_001c:            safe_cast<Reflector::CodeModel::IVariableReference^>(V_0)->Identifier=Temp_2;//callvirt				void Reflector::CodeModel::IVariableReference::set_Identifier(System::Int32)
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_3=A_0->Pinned;                                         //callvirt				System::Boolean Reflector::CodeModel::IVariableDeclaration::get_Pinned()
	IL_0028:            V_0->Pinned=Temp_3;                                         //callvirt				void Reflector::CodeModel::IVariableDeclaration::set_Pinned(System::Boolean)
	IL_002d:                                                                        //ldloc.0
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_4=A_0->VariableType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0035:            Temp_5=this->M_x13(Temp_4);                                 //callvirt				Reflector::CodeModel::IType^ Root::T_x129::M_x13(Reflector::CodeModel::IType^)
	IL_003a:            V_0->VariableType=Temp_5;                                   //callvirt				void Reflector::CodeModel::IVariableDeclaration::set_VariableType(Reflector::CodeModel::IType^)
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_6=this->F_x13;                                         //ldfld				System::Collections::IDictionary^ Root::T_x181 F_x13
	IL_0045:                                                                        //ldarg.1
	IL_0046:                                                                        //ldloc.0
	IL_0047:            Temp_6->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_0));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_004c:                                                                        //ldloc.0
	IL_004d:            return V_0;                                                 //ret

}
