#include "global_xref.h"

inline Root::T_x111::T_x111()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x2=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x2
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldnull
	IL_0010:            this->F_x12=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x12
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldnull
	IL_0017:            this->F_x13=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x13
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldnull
	IL_001e:            this->F_x8=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x8
	IL_0023:                                                                        //ldarg.0
	IL_0024:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0029:            return;                                                     //ret

}
inline Root::T_x111::T_x111(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_14 = nullptr;
	Reflector::CodeModel::MethodCallingConvention Temp_15 = (Reflector::CodeModel::MethodCallingConvention)0;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	Reflector::CodeModel::IType^ Temp_18 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_5=19;                                                     //stloc				V_5
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldnull
	IL_0012:            this->F_x2=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x2
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldnull
	IL_0019:            this->F_x12=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x12
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldnull
	IL_0020:            this->F_x13=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x13
	IL_0025:                                                                        //ldarg.0
	IL_0026:                                                                        //ldnull
	IL_0027:            this->F_x8=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x8
	IL_002c:                                                                        //ldarg.0
	IL_002d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0032:                                                                        //ldarg.1
	IL_0033:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0038:            V_0=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(A_0);//stloc.0
	IL_0039:                                                                        //ldloc.0
	IL_003a:            if(V_0==nullptr)goto IL_00e0;                               //brfalse				IL_00e0
	IL_003f:            goto IL_0100;                                               //br				IL_0100
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldstr				L"\x6130\x0932"
	IL_004a:                                                                        //ldloc				V_5
	IL_004e:            Temp_4=a(L"\x6130\x0932",V_5);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0053:            this->F_x1=Temp_4;                                          //stfld				System::String^ Root::T_x111 F_x1
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldloc.3
	IL_005a:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_005f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0064:            Temp_6=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0069:            this->M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_6));//call				void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_006e:                                                                        //ldarg.0
	IL_006f:                                                                        //ldloc.3
	IL_0070:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(V_3)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0075:            this->F_x13=Temp_7;                                         //stfld				System::String^ Root::T_x111 F_x13
	IL_007a:                                                                        //ldarg.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:                                                                        //ldloc.3
	IL_007d:            Temp_8=safe_cast<Reflector::CodeModel::IPropertyReference^>(V_3)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0082:                                                                        //ldc.i4.0
	IL_0083:            Temp_9=this->M_x1(Temp_8,safe_cast<Reflector::CodeModel::MethodCallingConvention>(0));//call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_0088:            this->F_x8=Temp_9;                                          //stfld				System::String^ Root::T_x111 F_x8
	IL_008d:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldstr				L"\x7C30\x0932"
	IL_0095:                                                                        //ldloc				V_5
	IL_0099:            Temp_10=a(L"\x7C30\x0932",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009e:            this->F_x1=Temp_10;                                         //stfld				System::String^ Root::T_x111 F_x1
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:                                                                        //ldloc.2
	IL_00a5:            Temp_11=safe_cast<Reflector::CodeModel::IMemberReference^>(V_2)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00aa:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00af:            Temp_12=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_11)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00b4:            this->M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_12));//call				void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_00b9:                                                                        //ldarg.0
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //ldloc.2
	IL_00bc:            Temp_13=this->M_x1(V_2);                                    //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00c1:            this->F_x13=Temp_13;                                        //stfld				System::String^ Root::T_x111 F_x13
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:                                                                        //ldarg.0
	IL_00c8:                                                                        //ldloc.2
	IL_00c9:            Temp_14=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_2)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_00ce:                                                                        //ldloc.2
	IL_00cf:            Temp_15=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_2)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_00d4:            Temp_16=this->M_x1(Temp_14,Temp_15);                        //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_00d9:            this->F_x8=Temp_16;                                         //stfld				System::String^ Root::T_x111 F_x8
	IL_00de:            goto IL_011d;                                               //br.s				IL_011d
	IL_00e0:                                                                        //ldarg.1
	IL_00e1:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_00e6:            V_1=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(A_0);//stloc.1
	IL_00e7:                                                                        //ldloc.1
	IL_00e8:            if(V_1==nullptr)goto IL_0166;                               //brfalse.s				IL_0166
	IL_00ea:            goto IL_0175;                                               //br				IL_0175
	IL_00ef:                                                                        //ldarg.1
	IL_00f0:                                                                        //isinst				Reflector::CodeModel::IEventDeclaration
	IL_00f5:            V_4=dynamic_cast<Reflector::CodeModel::IEventDeclaration^>(A_0);//stloc.s				V_4
	IL_00f7:                                                                        //ldloc.s				V_4
	IL_00f9:            if(V_4==nullptr)goto IL_01ad;                               //brfalse				IL_01ad
	IL_00fe:            goto IL_012c;                                               //br.s				IL_012c
	IL_0100:                                                                        //ldarg.0
	IL_0101:                                                                        //ldstr				L"\x6530\x0932"
	IL_0106:                                                                        //ldloc				V_5
	IL_010a:            Temp_21=a(L"\x6530\x0932",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010f:            this->F_x1=Temp_21;                                         //stfld				System::String^ Root::T_x111 F_x1
	IL_0114:                                                                        //ldarg.0
	IL_0115:                                                                        //ldloc.0
	IL_0116:            this->M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(V_0));//call				void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_011b:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_011d:                                                                        //ldarg.1
	IL_011e:                                                                        //isinst				Reflector::CodeModel::IPropertyDeclaration
	IL_0123:            V_3=dynamic_cast<Reflector::CodeModel::IPropertyDeclaration^>(A_0);//stloc.3
	IL_0124:                                                                        //ldloc.3
	IL_0125:            if(V_3==nullptr)goto IL_00ef;                               //brfalse.s				IL_00ef
	IL_0127:            goto IL_0044;                                               //br				IL_0044
	IL_012c:                                                                        //ldarg.0
	IL_012d:                                                                        //ldstr				L"\x7430\x0932"
	IL_0132:                                                                        //ldloc				V_5
	IL_0136:            Temp_0=a(L"\x7430\x0932",V_5);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013b:            this->F_x1=Temp_0;                                          //stfld				System::String^ Root::T_x111 F_x1
	IL_0140:                                                                        //ldarg.0
	IL_0141:                                                                        //ldloc.s				V_4
	IL_0143:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0148:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_014d:            Temp_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_1)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0152:            this->M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_2));//call				void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_0157:                                                                        //ldarg.0
	IL_0158:                                                                        //ldloc.s				V_4
	IL_015a:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_015f:            this->F_x13=Temp_3;                                         //stfld				System::String^ Root::T_x111 F_x13
	IL_0164:            goto IL_01ad;                                               //br.s				IL_01ad
	IL_0166:                                                                        //ldarg.1
	IL_0167:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_016c:            V_2=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(A_0);//stloc.2
	IL_016d:                                                                        //ldloc.2
	IL_016e:            if(V_2==nullptr)goto IL_011d;                               //brfalse.s				IL_011d
	IL_0170:            goto IL_008f;                                               //br				IL_008f
	IL_0175:                                                                        //ldarg.0
	IL_0176:                                                                        //ldstr				L"\x7730\x0932"
	IL_017b:                                                                        //ldloc				V_5
	IL_017f:            Temp_17=a(L"\x7730\x0932",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0184:            this->F_x1=Temp_17;                                         //stfld				System::String^ Root::T_x111 F_x1
	IL_0189:                                                                        //ldarg.0
	IL_018a:                                                                        //ldloc.1
	IL_018b:            Temp_18=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0190:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0195:            Temp_19=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_18)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_019a:            this->M_x12(safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_19));//call				void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_019f:                                                                        //ldarg.0
	IL_01a0:                                                                        //ldloc.1
	IL_01a1:            Temp_20=safe_cast<Reflector::CodeModel::IMemberReference^>(V_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_01a6:            this->F_x13=Temp_20;                                        //stfld				System::String^ Root::T_x111 F_x13
	IL_01ab:            goto IL_0166;                                               //br.s				IL_0166
	IL_01ad:            return;                                                     //ret

}
inline Root::T_x111::T_x111(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::Int32 Temp_15 = 0;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::Char Temp_30 = (System::Char)0;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_4=18;                                                     //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldnull
	IL_0012:            this->F_x2=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x2
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldnull
	IL_0019:            this->F_x12=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x12
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldnull
	IL_0020:            this->F_x13=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x111 F_x13
	IL_0025:                                                                        //ldarg.0
	IL_0026:                                                                        //ldnull
	IL_0027:            this->F_x8=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x111 F_x8
	IL_002c:                                                                        //ldarg.0
	IL_002d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0032:                                                                        //ldarg.1
	IL_0033:            V_0=A_0;                                                    //stloc.0
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_003a:            this->F_x2=Temp_0;                                          //stfld				System::String^ Root::T_x111 F_x2
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0045:            this->F_x12=Temp_1;                                         //stfld				System::String^ Root::T_x111 F_x12
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0050:            this->F_x13=Temp_2;                                         //stfld				System::String^ Root::T_x111 F_x13
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_3=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_005b:            this->F_x8=Temp_3;                                          //stfld				System::String^ Root::T_x111 F_x8
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldstr				L"\x642F\x0831"
	IL_0066:                                                                        //ldloc				V_4
	IL_006a:            Temp_4=a(L"\x642F\x0831",V_4);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006f:            this->F_x1=Temp_4;                                          //stfld				System::String^ Root::T_x111 F_x1
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_5=V_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_007a:                                                                        //ldc.i4.2
	IL_007b:            if(Temp_5<2)goto IL_01b1;                                   //blt				IL_01b1
	IL_0080:            goto IL_01a1;                                               //br				IL_01a1
	IL_0085:                                                                        //ldarg.0
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_22=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_008c:                                                                        //ldc.i4.s				35
	IL_008e:                                                                        //ldc.i4.s				46
	IL_0090:            Temp_23=Temp_22->Replace(safe_cast<System::Char>((System::Char)35),safe_cast<System::Char>((System::Char)46));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_0095:            this->F_x13=Temp_23;                                        //stfld				System::String^ Root::T_x111 F_x13
	IL_009a:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldloc.0
	IL_009e:                                                                        //ldloc.2
	IL_009f:                                                                        //ldc.i4.1
	IL_00a0:                                                                        //add
	IL_00a1:            Temp_24=V_0->Substring((V_2 + 1));                          //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_00a6:            this->F_x13=Temp_24;                                        //stfld				System::String^ Root::T_x111 F_x13
	IL_00ab:                                                                        //ldloc.0
	IL_00ac:                                                                        //ldc.i4.0
	IL_00ad:                                                                        //ldloc.2
	IL_00ae:            Temp_25=V_0->Substring(safe_cast<System::Int32>(0),V_2);    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_00b3:            V_0=Temp_25;                                                //stloc.0
	IL_00b4:            goto IL_0085;                                               //br.s				IL_0085
	IL_00b6:                                                                        //ldloc.0
	IL_00b7:                                                                        //ldc.i4.s				40
	IL_00b9:            Temp_26=V_0->IndexOf(safe_cast<System::Char>((System::Char)40));//callvirt				System::Int32 System::String::IndexOf(System::Char)
	IL_00be:            V_1=Temp_26;                                                //stloc.1
	IL_00bf:                                                                        //ldloc.1
	IL_00c0:                                                                        //ldc.i4.m1
	IL_00c1:            if(V_1==-1)goto IL_0181;                                    //beq				IL_0181
	IL_00c6:            goto IL_013b;                                               //br.s				IL_013b
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:                                                                        //ldc.i4.s				46
	IL_00cb:            Temp_16=V_0->LastIndexOf(safe_cast<System::Char>((System::Char)46));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_00d0:            V_3=Temp_16;                                                //stloc.3
	IL_00d1:                                                                        //ldloc.3
	IL_00d2:                                                                        //ldc.i4.m1
	IL_00d3:            if(V_3==-1)goto IL_016d;                                    //beq				IL_016d
	IL_00d8:            goto IL_00fd;                                               //br.s				IL_00fd
	IL_00da:                                                                        //ldarg.0
	IL_00db:                                                                        //ldloc.0
	IL_00dc:                                                                        //ldc.i4.0
	IL_00dd:                                                                        //ldc.i4.2
	IL_00de:            Temp_31=V_0->Substring(safe_cast<System::Int32>(0),safe_cast<System::Int32>(2));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_00e3:            this->F_x1=Temp_31;                                         //stfld				System::String^ Root::T_x111 F_x1
	IL_00e8:                                                                        //ldloc.0
	IL_00e9:                                                                        //ldc.i4.2
	IL_00ea:            Temp_32=V_0->Substring(safe_cast<System::Int32>(2));        //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_00ef:            V_0=Temp_32;                                                //stloc.0
	IL_00f0:            goto IL_01b1;                                               //br				IL_01b1
	IL_00f5:                                                                        //ldloc.0
	IL_00f6:            if(V_0==nullptr)goto IL_01fd;                               //brfalse				IL_01fd
	IL_00fb:            goto IL_015c;                                               //br.s				IL_015c
	IL_00fd:                                                                        //ldarg.0
	IL_00fe:                                                                        //ldloc.0
	IL_00ff:                                                                        //ldloc.3
	IL_0100:                                                                        //ldc.i4.1
	IL_0101:                                                                        //add
	IL_0102:            Temp_18=V_0->Substring((V_3 + 1));                          //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0107:            this->F_x12=Temp_18;                                        //stfld				System::String^ Root::T_x111 F_x12
	IL_010c:                                                                        //ldarg.0
	IL_010d:                                                                        //ldloc.0
	IL_010e:                                                                        //ldc.i4.0
	IL_010f:                                                                        //ldloc.3
	IL_0110:            Temp_19=V_0->Substring(safe_cast<System::Int32>(0),V_3);    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0115:            this->F_x2=Temp_19;                                         //stfld				System::String^ Root::T_x111 F_x2
	IL_011a:            return;                                                     //ret
	IL_011b:                                                                        //ldarg.0
	IL_011c:            Temp_12=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_0121:                                                                        //ldstr				L"\x642F\x0831"
	IL_0126:                                                                        //ldloc				V_4
	IL_012a:            Temp_13=a(L"\x642F\x0831",V_4);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            Temp_14=(Temp_12 != Temp_13);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0134:            if(!Temp_14)goto IL_00f5;                                   //brfalse.s				IL_00f5
	IL_0136:            goto IL_01d9;                                               //br				IL_01d9
	IL_013b:                                                                        //ldarg.0
	IL_013c:                                                                        //ldloc.0
	IL_013d:                                                                        //ldloc.1
	IL_013e:            Temp_27=V_0->Substring(V_1);                                //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0143:                                                                        //ldc.i4.s				64
	IL_0145:                                                                        //ldc.i4.s				38
	IL_0147:            Temp_28=Temp_27->Replace(safe_cast<System::Char>((System::Char)64),safe_cast<System::Char>((System::Char)38));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_014c:            this->F_x8=Temp_28;                                         //stfld				System::String^ Root::T_x111 F_x8
	IL_0151:                                                                        //ldloc.0
	IL_0152:                                                                        //ldc.i4.0
	IL_0153:                                                                        //ldloc.1
	IL_0154:            Temp_29=V_0->Substring(safe_cast<System::Int32>(0),V_1);    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0159:            V_0=Temp_29;                                                //stloc.0
	IL_015a:            goto IL_0181;                                               //br.s				IL_0181
	IL_015c:                                                                        //ldloc.0
	IL_015d:            Temp_15=V_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_0162:                                                                        //ldc.i4.0
	IL_0163:            if(Temp_15<=0)goto IL_01fd;                                 //ble				IL_01fd
	IL_0168:            goto IL_00c8;                                               //br				IL_00c8
	IL_016d:                                                                        //ldarg.0
	IL_016e:                                                                        //ldloc.0
	IL_016f:            this->F_x12=V_0;                                            //stfld				System::String^ Root::T_x111 F_x12
	IL_0174:                                                                        //ldarg.0
	IL_0175:            Temp_17=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_017a:            this->F_x2=Temp_17;                                         //stfld				System::String^ Root::T_x111 F_x2
	IL_017f:            goto IL_01fd;                                               //br.s				IL_01fd
	IL_0181:                                                                        //ldarg.0
	IL_0182:            Temp_9=this->F_x1;                                          //ldfld				System::String^ Root::T_x111 F_x1
	IL_0187:                                                                        //ldstr				L"\x7E2F\x0831"
	IL_018c:                                                                        //ldloc				V_4
	IL_0190:            Temp_10=a(L"\x7E2F\x0831",V_4);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0195:            Temp_11=(Temp_9 == Temp_10);                                //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_019a:            if(!Temp_11)goto IL_011b;                                   //brfalse				IL_011b
	IL_019f:            goto IL_01d1;                                               //br.s				IL_01d1
	IL_01a1:                                                                        //ldloc.0
	IL_01a2:                                                                        //ldc.i4.1
	IL_01a3:            Temp_30=V_0[safe_cast<System::Int32>(1)];                   //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_01a8:                                                                        //ldc.i4.s				58
	IL_01aa:            if(Temp_30!=(System::Char)58)goto IL_01b1;                  //bne.un.s				IL_01b1
	IL_01ac:            goto IL_00da;                                               //br				IL_00da
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:            Temp_6=this->F_x1;                                          //ldfld				System::String^ Root::T_x111 F_x1
	IL_01b7:                                                                        //ldstr				L"\x642F\x0831"
	IL_01bc:                                                                        //ldloc				V_4
	IL_01c0:            Temp_7=a(L"\x642F\x0831",V_4);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c5:            Temp_8=(Temp_6 != Temp_7);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_01ca:            if(!Temp_8)goto IL_0181;                                    //brfalse.s				IL_0181
	IL_01cc:            goto IL_00b6;                                               //br				IL_00b6
	IL_01d1:                                                                        //ldarg.0
	IL_01d2:                                                                        //ldloc.0
	IL_01d3:            this->F_x2=V_0;                                             //stfld				System::String^ Root::T_x111 F_x2
	IL_01d8:            return;                                                     //ret
	IL_01d9:                                                                        //ldloc.0
	IL_01da:                                                                        //ldc.i4.s				46
	IL_01dc:            Temp_20=V_0->LastIndexOf(safe_cast<System::Char>((System::Char)46));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_01e1:            V_2=Temp_20;                                                //stloc.2
	IL_01e2:                                                                        //ldloc.2
	IL_01e3:                                                                        //ldc.i4.m1
	IL_01e4:            if(V_2==-1)goto IL_01eb;                                    //beq.s				IL_01eb
	IL_01e6:            goto IL_009c;                                               //br				IL_009c
	IL_01eb:                                                                        //ldarg.0
	IL_01ec:                                                                        //ldloc.0
	IL_01ed:            this->F_x13=V_0;                                            //stfld				System::String^ Root::T_x111 F_x13
	IL_01f2:            Temp_21=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_01f7:            V_0=Temp_21;                                                //stloc.0
	IL_01f8:            goto IL_0085;                                               //br				IL_0085
	IL_01fd:            return;                                                     //ret

}
inline System::String^ Root::T_x111::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Globalization::CultureInfo^ Temp_13 = nullptr;
	System::IO::StringWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::IO::StringWriter^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_6=7;                                                      //stloc				V_6
	IL_0009:            goto IL_002b;                                               //br.s				IL_002b
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //sub
	IL_0010:                                                                        //blt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_01ac;case 1:goto IL_0062;case 2:goto IL_0050;};//switch				(IL_01ac,IL_0062,IL_0050)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=this->F_x13;                                         //ldfld				System::String^ Root::T_x111 F_x13
	IL_0031:                                                                        //ldstr				L"\x4524\x4726"
	IL_0036:                                                                        //ldloc				V_6
	IL_003a:            Temp_1=a(L"\x4524\x4726",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003f:            Temp_2=Temp_0->IndexOf(Temp_1);                             //callvirt				System::Int32 System::String::IndexOf(System::String^)
	IL_0044:            V_0=Temp_2;                                                 //stloc.0
	IL_0045:                                                                        //ldc.i4				0x2
	IL_004a:            V_5=2;                                                      //stloc				V_5
	IL_004e:            /*goto IL_000b;*/goto IL_0050;                              //br.s				IL_000b
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldc.i4.m1
	IL_0052:            if(V_0==-1)goto IL_01b1;                                    //beq				IL_01b1
	IL_0057:                                                                        //ldc.i4				0x1
	IL_005c:            V_5=1;                                                      //stloc				V_5
	IL_0060:            /*goto IL_000b;*/goto IL_0062;                              //br.s				IL_000b
	IL_0062:            goto IL_017a;                                               //br				IL_017a
	IL_006201:          try{
	IL_0067:            goto IL_0086;                                               //br.s				IL_0086
	IL_0069:                                                                        //ldloc				V_5
	IL_006d:            switch(V_5){case 0:goto IL_0103;case 1:goto IL_00ba;case 2:goto IL_012f;case 3:goto IL_00ef;case 4:goto IL_00df;};//switch				(IL_0103,IL_00ba,IL_012f,IL_00ef,IL_00df)
	IL_0086:                                                                        //ldloc.2
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_3=this->F_x13;                                         //ldfld				System::String^ Root::T_x111 F_x13
	IL_008d:                                                                        //ldc.i4.0
	IL_008e:                                                                        //ldloc.0
	IL_008f:            Temp_4=Temp_3->Substring(safe_cast<System::Int32>(0),V_0);  //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0094:            V_2->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0099:                                                                        //ldloc.2
	IL_009a:                                                                        //ldstr				L"\x1924"
	IL_009f:                                                                        //ldloc				V_6
	IL_00a3:            Temp_5=a(L"\x1924",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a8:            V_2->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ad:                                                                        //ldc.i4.0
	IL_00ae:            V_3=0;                                                      //stloc.3
	IL_00af:                                                                        //ldc.i4				0x1
	IL_00b4:            V_5=1;                                                      //stloc				V_5
	IL_00b8:            /*goto IL_0069;*/goto IL_00ba;                              //br.s				IL_0069
	IL_00ba:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_00bc:                                                                        //ldloc.2
	IL_00bd:                                                                        //ldstr				L"\x0924"
	IL_00c2:                                                                        //ldloc				V_6
	IL_00c6:            Temp_8=a(L"\x0924",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00cb:            V_2->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d0:                                                                        //ldloc.3
	IL_00d1:                                                                        //ldc.i4.1
	IL_00d2:                                                                        //add
	IL_00d3:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00d4:                                                                        //ldc.i4				0x4
	IL_00d9:            V_5=4;                                                      //stloc				V_5
	IL_00dd:            /*goto IL_0069;*/goto IL_00df;                              //br.s				IL_0069
	IL_00df:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_00e1:                                                                        //ldc.i4				0x3
	IL_00e6:            V_5=3;                                                      //stloc				V_5
	IL_00ea:            /*goto IL_0069;*/goto IL_00ef;                              //br				IL_0069
	IL_00ef:                                                                        //ldloc.3
	IL_00f0:                                                                        //ldloc.1
	IL_00f1:                                                                        //ldc.i4.1
	IL_00f2:                                                                        //sub
	IL_00f3:            if(V_3<(V_1 - 1))goto IL_00bc;                              //blt.s				IL_00bc
	IL_00f5:                                                                        //ldc.i4				0x0
	IL_00fa:            V_5=0;                                                      //stloc				V_5
	IL_00fe:            /*goto IL_0069;*/goto IL_0103;                              //br				IL_0069
	IL_0103:            goto IL_0105;                                               //br.s				IL_0105
	IL_0105:                                                                        //ldloc.2
	IL_0106:                                                                        //ldstr				L"\x1B24"
	IL_010b:                                                                        //ldloc				V_6
	IL_010f:            Temp_6=a(L"\x1B24",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0114:            V_2->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0119:                                                                        //ldloc.2
	IL_011a:            Temp_7=V_2->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_011f:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_0121:                                                                        //ldc.i4				0x2
	IL_0126:            V_5=2;                                                      //stloc				V_5
	IL_012a:            /*goto IL_0069;*/goto IL_012f;                              //br				IL_0069
	IL_012f:            goto IL_01b8;                                               //leave				IL_01b8
	                    ;}
	                    finally{
	IL_0134:                                                                        //ldc.i4				0x1
	IL_0139:            V_5=1;                                                      //stloc				V_5
	IL_013d:            /*goto IL_0141;*/goto IL_013f;                              //br.s				IL_0141
	IL_013f:            goto IL_0156;                                               //br.s				IL_0156
	IL_0141:                                                                        //ldloc				V_5
	IL_0145:            switch(V_5){case 0:goto IL_0177;case 1:goto IL_013f;case 2:goto IL_0164;};//switch				(IL_0177,IL_013f,IL_0164)
	IL_0156:                                                                        //ldloc.2
	IL_0157:            if(V_2==nullptr)goto IL_0179;                               //brfalse.s				IL_0179
	IL_0159:                                                                        //ldc.i4				0x2
	IL_015e:            V_5=2;                                                      //stloc				V_5
	IL_0162:            /*goto IL_0141;*/goto IL_0164;                              //br.s				IL_0141
	IL_0164:            goto IL_0166;                                               //br.s				IL_0166
	IL_0166:                                                                        //ldloc.2
	IL_0167:            /*safe_cast<System::IDisposable^>(V_2)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_016c:                                                                        //ldc.i4				0x0
	IL_0171:            V_5=0;                                                      //stloc				V_5
	IL_0175:            /*goto IL_0141;*/goto IL_0177;                              //br.s				IL_0141
	IL_0177:            goto IL_0179;                                               //br.s				IL_0179
	IL_0179:                                                                        //endfinally
	                    ;}
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_9=this->F_x13;                                         //ldfld				System::String^ Root::T_x111 F_x13
	IL_0180:                                                                        //ldloc.0
	IL_0181:                                                                        //ldc.i4.2
	IL_0182:                                                                        //add
	IL_0183:            Temp_10=Temp_9->Substring((V_0 + 2));                       //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0188:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_018d:            Temp_12=System::Int32::Parse(Temp_10,safe_cast<System::IFormatProvider^>(Temp_11));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0192:            V_1=Temp_12;                                                //stloc.1
	IL_0193:            Temp_13=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0198:            Temp_14=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_13));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_019d:            V_2=Temp_14;                                                //stloc.2
	IL_019e:                                                                        //ldc.i4				0x0
	IL_01a3:            V_5=0;                                                      //stloc				V_5
	IL_01a7:            /*goto IL_000b;*/goto IL_01ac;                              //br				IL_000b
	IL_01ac:            /*goto IL_0067;*/goto IL_006201;                            //br				IL_0067
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:            Temp_15=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_01b7:            return Temp_15;                                             //ret
	IL_01b8:                                                                        //ldloc.s				V_4
	IL_01ba:            return V_4;                                                 //ret

}
inline System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IAssemblyCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::InvalidOperationException^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_9 = nullptr;
	System::Collections::IEnumerator^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::String^ Temp_16 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_17 = nullptr;
	System::Collections::IEnumerator^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_23 = nullptr;
	System::Collections::IEnumerator^ Temp_24 = nullptr;
	System::Boolean Temp_25 = false;
	System::Object^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_28 = nullptr;
	Reflector::CodeModel::MethodCallingConvention Temp_29 = (Reflector::CodeModel::MethodCallingConvention)0;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	System::Boolean Temp_33 = false;
	System::Object^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Boolean Temp_37 = false;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_44 = nullptr;
	System::Collections::IEnumerator^ Temp_45 = nullptr;
	System::Boolean Temp_46 = false;
	System::Object^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::Boolean Temp_52 = false;
	System::Boolean Temp_53 = false;
	System::Object^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_59 = nullptr;
	System::Collections::IEnumerator^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::ArgumentNullException^ Temp_65 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	Reflector::CodeModel::IModule^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_5 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_6 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_7 = nullptr;
	System::Object^ V_8 = nullptr;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::Collections::IEnumerator^ V_10 = nullptr;
	System::String^ V_11 = nullptr;
	System::Collections::IEnumerator^ V_12 = nullptr;
	System::IDisposable^ V_13 = nullptr;
	System::Int32 V_14 = 0;
	System::Int32 V_15 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_15=7;                                                     //stloc				V_15
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_14=4;                                                     //stloc				V_14
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_14
	IL_001a:            switch(V_14){case 0:goto IL_0954;case 1:goto IL_097d;case 2:goto IL_0941;case 3:goto IL_0044;case 4:goto IL_0014;};//switch				(IL_0954,IL_097d,IL_0941,IL_0044,IL_0014)
	IL_0033:                                                                        //ldarg.1
	IL_0034:            if(A_0!=nullptr)goto IL_0946;                               //brtrue				IL_0946
	IL_0039:                                                                        //ldc.i4				0x3
	IL_003e:            V_14=3;                                                     //stloc				V_14
	IL_0042:            /*goto IL_0016;*/goto IL_0044;                              //br.s				IL_0016
	IL_0044:            goto IL_0984;                                               //br				IL_0984
	IL_004401:          try{
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_14=3;                                                     //stloc				V_14
	IL_0052:            /*goto IL_0056;*/goto IL_0054;                              //br.s				IL_0056
	IL_0054:            goto IL_0073;                                               //br.s				IL_0073
	IL_0056:                                                                        //ldloc				V_14
	IL_005a:            switch(V_14){case 0:goto IL_00aa;case 1:goto IL_009d;case 2:goto IL_00c1;case 3:goto IL_0054;case 4:goto IL_08d0;};//switch				(IL_00aa,IL_009d,IL_00c1,IL_0054,IL_08d0)
	IL_0073:            goto IL_009f;                                               //br				IL_009f
	IL_0078:                                                                        //ldloc.s				V_9
	IL_007a:            Temp_8=V_9->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_007f:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0084:            V_0=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_8);    //stloc.0
	IL_0085:                                                                        //ldloc.0
	IL_0086:            Temp_9=V_0->Modules;                                        //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_008b:            Temp_10=safe_cast<System::Collections::IEnumerable^>(Temp_9)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0090:            V_10=Temp_10;                                               //stloc.s				V_10
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_14=1;                                                     //stloc				V_14
	IL_009b:            /*goto IL_0056;*/goto IL_009d;                              //br.s				IL_0056
	IL_009d:            /*goto IL_00c6;*/goto IL_00C101;                            //br.s				IL_00c6
	IL_009f:                                                                        //ldc.i4				0x0
	IL_00a4:            V_14=0;                                                     //stloc				V_14
	IL_00a8:            /*goto IL_0056;*/goto IL_00aa;                              //br.s				IL_0056
	IL_00aa:                                                                        //ldloc.s				V_9
	IL_00ac:            Temp_7=V_9->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00b1:            if(Temp_7)goto IL_0078;                                     //brtrue				IL_0078
	IL_00b6:                                                                        //ldc.i4				0x2
	IL_00bb:            V_14=2;                                                     //stloc				V_14
	IL_00bf:            /*goto IL_0056;*/goto IL_00c1;                              //br.s				IL_0056
	IL_00c1:            goto IL_08c2;                                               //br				IL_08c2
	IL_00C101:          try{
	IL_00c6:                                                                        //ldc.i4				0x2
	IL_00cb:            V_14=2;                                                     //stloc				V_14
	IL_00cf:            /*goto IL_00d3;*/goto IL_00d1;                              //br.s				IL_00d3
	IL_00d1:            goto IL_0140;                                               //br.s				IL_0140
	IL_00d3:                                                                        //ldloc				V_14
	IL_00d7:            switch(V_14){case 0:goto IL_0160;case 1:goto IL_0366;case 2:goto IL_00d1;case 3:goto IL_01f0;case 4:goto IL_081c;case 5:goto IL_01a7;case 6:goto IL_01ba;case 7:goto IL_0839;case 8:goto IL_0399;case 9:goto IL_0246;case 10:goto IL_0859;case 11:goto IL_0213;case 12:goto IL_0193;case 13:goto IL_0569;case 14:goto IL_0223;case 15:goto IL_0386;case 16:goto IL_0802;case 17:goto IL_04f2;case 18:goto IL_03d5;case 19:goto IL_01dd;case 20:goto IL_0544;case 21:goto IL_0528;case 22:goto IL_03b5;case 23:goto IL_0515;case 24:goto IL_086c;};//switch				(IL_0160,IL_0366,IL_00d1,IL_01f0,IL_081c,IL_01a7,IL_01ba,IL_0839,IL_0399,IL_0246,IL_0859,IL_0213,IL_0193,IL_0569,IL_0223,IL_0386,IL_0802,IL_04f2,IL_03d5,IL_01dd,IL_0544,IL_0528,IL_03b5,IL_0515,IL_086c)
	IL_0140:            goto IL_07f4;                                               //br				IL_07f4
	IL_0145:                                                                        //ldloc.2
	IL_0146:            Temp_17=V_2->Fields;                                        //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_014b:            Temp_18=safe_cast<System::Collections::IEnumerable^>(Temp_17)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0150:            V_12=Temp_18;                                               //stloc.s				V_12
	IL_0152:                                                                        //ldc.i4				0x0
	IL_0157:            V_14=0;                                                     //stloc				V_14
	IL_015b:            /*goto IL_00d3;*/goto IL_0160;                              //br				IL_00d3
	IL_0160:            /*goto IL_024b;*/goto IL_024601;                            //br				IL_024b
	IL_0165:                                                                        //ldloc.s				V_10
	IL_0167:            Temp_54=V_10->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_016c:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_0171:            V_1=safe_cast<Reflector::CodeModel::IModule^>(Temp_54);     //stloc.1
	IL_0172:                                                                        //ldloc.1
	IL_0173:                                                                        //ldarg.0
	IL_0174:            Temp_55=this->F_x2;                                         //ldfld				System::String^ Root::T_x111 F_x2
	IL_0179:                                                                        //ldarg.0
	IL_017a:            Temp_56=this->F_x12;                                        //ldfld				System::String^ Root::T_x111 F_x12
	IL_017f:            Temp_57=Root::T_x111::M_x1(V_1,Temp_55,Temp_56);            //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x111::M_x1(Reflector::CodeModel::IModule^,System::String^,System::String^)
	IL_0184:            V_2=Temp_57;                                                //stloc.2
	IL_0185:                                                                        //ldc.i4				0xc
	IL_018a:            V_14=12;                                                    //stloc				V_14
	IL_018e:            /*goto IL_00d3;*/goto IL_0193;                              //br				IL_00d3
	IL_0193:                                                                        //ldloc.2
	IL_0194:            if(V_2==nullptr)goto IL_07f4;                               //brfalse				IL_07f4
	IL_0199:                                                                        //ldc.i4				0x5
	IL_019e:            V_14=5;                                                     //stloc				V_14
	IL_01a2:            /*goto IL_00d3;*/goto IL_01a7;                              //br				IL_00d3
	IL_01a7:            goto IL_0549;                                               //br				IL_0549
	IL_01ac:                                                                        //ldc.i4				0x6
	IL_01b1:            V_14=6;                                                     //stloc				V_14
	IL_01b5:            /*goto IL_00d3;*/goto IL_01ba;                              //br				IL_00d3
	IL_01ba:                                                                        //ldloc.s				V_11
	IL_01bc:                                                                        //ldstr				L"\x6824\x1D26"
	IL_01c1:                                                                        //ldloc				V_15
	IL_01c5:            Temp_22=a(L"\x6824\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ca:            if(V_11==Temp_22)goto IL_081e;                              //beq				IL_081e
	IL_01cf:                                                                        //ldc.i4				0x13
	IL_01d4:            V_14=19;                                                    //stloc				V_14
	IL_01d8:            /*goto IL_00d3;*/goto IL_01dd;                              //br				IL_00d3
	IL_01dd:            goto IL_04e4;                                               //br				IL_04e4
	IL_01e2:                                                                        //ldc.i4				0x3
	IL_01e7:            V_14=3;                                                     //stloc				V_14
	IL_01eb:            /*goto IL_00d3;*/goto IL_01f0;                              //br				IL_00d3
	IL_01f0:                                                                        //ldloc.s				V_11
	IL_01f2:                                                                        //ldstr				L"\x6324\x1D26"
	IL_01f7:                                                                        //ldloc				V_15
	IL_01fb:            Temp_16=a(L"\x6324\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0200:            if(V_11==Temp_16)goto IL_0145;                              //beq				IL_0145
	IL_0205:                                                                        //ldc.i4				0xb
	IL_020a:            V_14=11;                                                    //stloc				V_14
	IL_020e:            /*goto IL_00d3;*/goto IL_0213;                              //br				IL_00d3
	IL_0213:            goto IL_01ac;                                               //br.s				IL_01ac
	IL_0215:                                                                        //ldc.i4				0xe
	IL_021a:            V_14=14;                                                    //stloc				V_14
	IL_021e:            /*goto IL_00d3;*/goto IL_0223;                              //br				IL_00d3
	IL_0223:                                                                        //ldloc.s				V_11
	IL_0225:                                                                        //ldstr				L"\x6024\x1D26"
	IL_022a:                                                                        //ldloc				V_15
	IL_022e:            Temp_43=a(L"\x6024\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0233:            if(V_11==Temp_43)goto IL_083e;                              //beq				IL_083e
	IL_0238:                                                                        //ldc.i4				0x9
	IL_023d:            V_14=9;                                                     //stloc				V_14
	IL_0241:            /*goto IL_00d3;*/goto IL_0246;                              //br				IL_00d3
	IL_0246:            goto IL_038b;                                               //br				IL_038b
	IL_024601:          try{
	IL_024b:                                                                        //ldc.i4				0x0
	IL_0250:            V_14=0;                                                     //stloc				V_14
	IL_0254:            /*goto IL_0258;*/goto IL_0256;                              //br.s				IL_0258
	IL_0256:            goto IL_027d;                                               //br.s				IL_027d
	IL_0258:                                                                        //ldloc				V_14
	IL_025c:            switch(V_14){case 0:goto IL_0256;case 1:goto IL_02d8;case 2:goto IL_02b7;case 3:goto IL_02ff;case 4:goto IL_02c8;case 5:goto IL_02ef;case 6:goto IL_0298;};//switch				(IL_0256,IL_02d8,IL_02b7,IL_02ff,IL_02c8,IL_02ef,IL_0298)
	IL_027d:            goto IL_02cd;                                               //br.s				IL_02cd
	IL_027f:                                                                        //ldloc.s				V_12
	IL_0281:            Temp_12=V_12->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0286:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_028b:            V_4=safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_12);//stloc.s				V_4
	IL_028d:                                                                        //ldc.i4				0x6
	IL_0292:            V_14=6;                                                     //stloc				V_14
	IL_0296:            /*goto IL_0258;*/goto IL_0298;                              //br.s				IL_0258
	IL_0298:                                                                        //ldarg.0
	IL_0299:            Temp_13=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_029e:                                                                        //ldloc.s				V_4
	IL_02a0:            Temp_14=safe_cast<Reflector::CodeModel::IMemberReference^>(V_4)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_02a5:            Temp_15=(Temp_13 == Temp_14);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_02aa:            if(!Temp_15)goto IL_02cd;                                   //brfalse.s				IL_02cd
	IL_02ac:                                                                        //ldc.i4				0x2
	IL_02b1:            V_14=2;                                                     //stloc				V_14
	IL_02b5:            /*goto IL_0258;*/goto IL_02b7;                              //br.s				IL_0258
	IL_02b7:            goto IL_02b9;                                               //br.s				IL_02b9
	IL_02b9:                                                                        //ldloc.s				V_4
	IL_02bb:            V_8=safe_cast<System::Object^>(V_4);                        //stloc.s				V_8
	IL_02bd:                                                                        //ldc.i4				0x4
	IL_02c2:            V_14=4;                                                     //stloc				V_14
	IL_02c6:            /*goto IL_0258;*/goto IL_02c8;                              //br.s				IL_0258
	IL_02c8:            goto IL_09ac;                                               //leave				IL_09ac
	IL_02cd:                                                                        //ldc.i4				0x1
	IL_02d2:            V_14=1;                                                     //stloc				V_14
	IL_02d6:            /*goto IL_0258;*/goto IL_02d8;                              //br.s				IL_0258
	IL_02d8:                                                                        //ldloc.s				V_12
	IL_02da:            Temp_11=V_12->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_02df:            if(Temp_11)goto IL_027f;                                    //brtrue.s				IL_027f
	IL_02e1:                                                                        //ldc.i4				0x5
	IL_02e6:            V_14=5;                                                     //stloc				V_14
	IL_02ea:            /*goto IL_0258;*/goto IL_02ef;                              //br				IL_0258
	IL_02ef:            goto IL_02f1;                                               //br.s				IL_02f1
	IL_02f1:                                                                        //ldc.i4				0x3
	IL_02f6:            V_14=3;                                                     //stloc				V_14
	IL_02fa:            /*goto IL_0258;*/goto IL_02ff;                              //br				IL_0258
	IL_02ff:            goto IL_07f4;                                               //leave				IL_07f4
	                    ;}
	                    finally{
	IL_0304:            goto IL_031b;                                               //br.s				IL_031b
	IL_0306:                                                                        //ldloc				V_14
	IL_030a:            switch(V_14){case 0:goto IL_0352;case 1:goto IL_033e;case 2:goto IL_032f;};//switch				(IL_0352,IL_033e,IL_032f)
	IL_031b:                                                                        //ldloc.s				V_12
	IL_031d:                                                                        //isinst				System::IDisposable
	IL_0322:            V_13=dynamic_cast<System::IDisposable^>(V_12);              //stloc.s				V_13
	IL_0324:                                                                        //ldc.i4				0x2
	IL_0329:            V_14=2;                                                     //stloc				V_14
	IL_032d:            /*goto IL_0306;*/goto IL_032f;                              //br.s				IL_0306
	IL_032f:                                                                        //ldloc.s				V_13
	IL_0331:            if(V_13==nullptr)goto IL_0354;                              //brfalse.s				IL_0354
	IL_0333:                                                                        //ldc.i4				0x1
	IL_0338:            V_14=1;                                                     //stloc				V_14
	IL_033c:            /*goto IL_0306;*/goto IL_033e;                              //br.s				IL_0306
	IL_033e:            goto IL_0340;                                               //br.s				IL_0340
	IL_0340:                                                                        //ldloc.s				V_13
	IL_0342:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0347:                                                                        //ldc.i4				0x0
	IL_034c:            V_14=0;                                                     //stloc				V_14
	IL_0350:            /*goto IL_0306;*/goto IL_0352;                              //br.s				IL_0306
	IL_0352:            goto IL_0354;                                               //br.s				IL_0354
	IL_0354:                                                                        //endfinally
	                    ;}
	IL_0355:                                                                        //ldloc.2
	IL_0356:            V_8=safe_cast<System::Object^>(V_2);                        //stloc.s				V_8
	IL_0358:                                                                        //ldc.i4				0x1
	IL_035d:            V_14=1;                                                     //stloc				V_14
	IL_0361:            /*goto IL_00d3;*/goto IL_0366;                              //br				IL_00d3
	IL_0366:            goto IL_09ac;                                               //leave				IL_09ac
	IL_036b:                                                                        //ldloc.2
	IL_036c:            Temp_59=V_2->Properties;                                    //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_0371:            Temp_60=safe_cast<System::Collections::IEnumerable^>(Temp_59)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0376:            V_12=Temp_60;                                               //stloc.s				V_12
	IL_0378:                                                                        //ldc.i4				0xf
	IL_037d:            V_14=15;                                                    //stloc				V_14
	IL_0381:            /*goto IL_00d3;*/goto IL_0386;                              //br				IL_00d3
	IL_0386:            /*goto IL_05b4;*/goto IL_05AF01;                            //br				IL_05b4
	IL_038b:                                                                        //ldc.i4				0x8
	IL_0390:            V_14=8;                                                     //stloc				V_14
	IL_0394:            /*goto IL_00d3;*/goto IL_0399;                              //br				IL_00d3
	IL_0399:            goto IL_07f4;                                               //br				IL_07f4
	IL_039e:                                                                        //ldloc.s				V_11
	IL_03a0:            Temp_61=System::String::IsInterned(V_11);                   //call				System::String^ System::String::IsInterned(System::String^)
	IL_03a5:            V_11=Temp_61;                                               //stloc.s				V_11
	IL_03a7:                                                                        //ldc.i4				0x16
	IL_03ac:            V_14=22;                                                    //stloc				V_14
	IL_03b0:            /*goto IL_00d3;*/goto IL_03b5;                              //br				IL_00d3
	IL_03b5:                                                                        //ldloc.s				V_11
	IL_03b7:                                                                        //ldstr				L"\x7124\x1D26"
	IL_03bc:                                                                        //ldloc				V_15
	IL_03c0:            Temp_63=a(L"\x7124\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c5:            if(V_11==Temp_63)goto IL_0355;                              //beq.s				IL_0355
	IL_03c7:                                                                        //ldc.i4				0x12
	IL_03cc:            V_14=18;                                                    //stloc				V_14
	IL_03d0:            /*goto IL_00d3;*/goto IL_03d5;                              //br				IL_00d3
	IL_03d5:            goto IL_01e2;                                               //br				IL_01e2
	IL_03D501:          try{
	IL_03da:                                                                        //ldc.i4				0x1
	IL_03df:            V_14=1;                                                     //stloc				V_14
	IL_03e3:            /*goto IL_03e7;*/goto IL_03e5;                              //br.s				IL_03e7
	IL_03e5:            goto IL_040c;                                               //br.s				IL_040c
	IL_03e7:                                                                        //ldloc				V_14
	IL_03eb:            switch(V_14){case 0:goto IL_0467;case 1:goto IL_03e5;case 2:goto IL_0457;case 3:goto IL_0446;case 4:goto IL_047e;case 5:goto IL_0427;case 6:goto IL_048e;};//switch				(IL_0467,IL_03e5,IL_0457,IL_0446,IL_047e,IL_0427,IL_048e)
	IL_040c:            goto IL_045c;                                               //br.s				IL_045c
	IL_040e:                                                                        //ldloc.s				V_12
	IL_0410:            Temp_34=V_12->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0415:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_041a:            V_7=safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_34);//stloc.s				V_7
	IL_041c:                                                                        //ldc.i4				0x5
	IL_0421:            V_14=5;                                                     //stloc				V_14
	IL_0425:            /*goto IL_03e7;*/goto IL_0427;                              //br.s				IL_03e7
	IL_0427:                                                                        //ldarg.0
	IL_0428:            Temp_35=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_042d:                                                                        //ldloc.s				V_7
	IL_042f:            Temp_36=safe_cast<Reflector::CodeModel::IMemberReference^>(V_7)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0434:            Temp_37=(Temp_35 == Temp_36);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0439:            if(!Temp_37)goto IL_045c;                                   //brfalse.s				IL_045c
	IL_043b:                                                                        //ldc.i4				0x3
	IL_0440:            V_14=3;                                                     //stloc				V_14
	IL_0444:            /*goto IL_03e7;*/goto IL_0446;                              //br.s				IL_03e7
	IL_0446:            goto IL_0448;                                               //br.s				IL_0448
	IL_0448:                                                                        //ldloc.s				V_7
	IL_044a:            V_8=safe_cast<System::Object^>(V_7);                        //stloc.s				V_8
	IL_044c:                                                                        //ldc.i4				0x2
	IL_0451:            V_14=2;                                                     //stloc				V_14
	IL_0455:            /*goto IL_03e7;*/goto IL_0457;                              //br.s				IL_03e7
	IL_0457:            goto IL_09ac;                                               //leave				IL_09ac
	IL_045c:                                                                        //ldc.i4				0x0
	IL_0461:            V_14=0;                                                     //stloc				V_14
	IL_0465:            /*goto IL_03e7;*/goto IL_0467;                              //br.s				IL_03e7
	IL_0467:                                                                        //ldloc.s				V_12
	IL_0469:            Temp_33=V_12->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_046e:            if(Temp_33)goto IL_040e;                                    //brtrue.s				IL_040e
	IL_0470:                                                                        //ldc.i4				0x4
	IL_0475:            V_14=4;                                                     //stloc				V_14
	IL_0479:            /*goto IL_03e7;*/goto IL_047e;                              //br				IL_03e7
	IL_047e:            goto IL_0480;                                               //br.s				IL_0480
	IL_0480:                                                                        //ldc.i4				0x6
	IL_0485:            V_14=6;                                                     //stloc				V_14
	IL_0489:            /*goto IL_03e7;*/goto IL_048e;                              //br				IL_03e7
	IL_048e:            goto IL_07f4;                                               //leave				IL_07f4
	                    ;}
	                    finally{
	IL_0493:            goto IL_04aa;                                               //br.s				IL_04aa
	IL_0495:                                                                        //ldloc				V_14
	IL_0499:            switch(V_14){case 0:goto IL_04be;case 1:goto IL_04cd;case 2:goto IL_04e1;};//switch				(IL_04be,IL_04cd,IL_04e1)
	IL_04aa:                                                                        //ldloc.s				V_12
	IL_04ac:                                                                        //isinst				System::IDisposable
	IL_04b1:            V_13=dynamic_cast<System::IDisposable^>(V_12);              //stloc.s				V_13
	IL_04b3:                                                                        //ldc.i4				0x0
	IL_04b8:            V_14=0;                                                     //stloc				V_14
	IL_04bc:            /*goto IL_0495;*/goto IL_04be;                              //br.s				IL_0495
	IL_04be:                                                                        //ldloc.s				V_13
	IL_04c0:            if(V_13==nullptr)goto IL_04e3;                              //brfalse.s				IL_04e3
	IL_04c2:                                                                        //ldc.i4				0x1
	IL_04c7:            V_14=1;                                                     //stloc				V_14
	IL_04cb:            /*goto IL_0495;*/goto IL_04cd;                              //br.s				IL_0495
	IL_04cd:            goto IL_04cf;                                               //br.s				IL_04cf
	IL_04cf:                                                                        //ldloc.s				V_13
	IL_04d1:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_04d6:                                                                        //ldc.i4				0x2
	IL_04db:            V_14=2;                                                     //stloc				V_14
	IL_04df:            /*goto IL_0495;*/goto IL_04e1;                              //br.s				IL_0495
	IL_04e1:            goto IL_04e3;                                               //br.s				IL_04e3
	IL_04e3:                                                                        //endfinally
	                    ;}
	IL_04e4:                                                                        //ldc.i4				0x11
	IL_04e9:            V_14=17;                                                    //stloc				V_14
	IL_04ed:            /*goto IL_00d3;*/goto IL_04f2;                              //br				IL_00d3
	IL_04f2:                                                                        //ldloc.s				V_11
	IL_04f4:                                                                        //ldstr				L"\x7524\x1D26"
	IL_04f9:                                                                        //ldloc				V_15
	IL_04fd:            Temp_58=a(L"\x7524\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0502:            if(V_11==Temp_58)goto IL_036b;                              //beq				IL_036b
	IL_0507:                                                                        //ldc.i4				0x17
	IL_050c:            V_14=23;                                                    //stloc				V_14
	IL_0510:            /*goto IL_00d3;*/goto IL_0515;                              //br				IL_00d3
	IL_0515:            goto IL_0215;                                               //br				IL_0215
	IL_051a:                                                                        //ldc.i4				0x15
	IL_051f:            V_14=21;                                                    //stloc				V_14
	IL_0523:            /*goto IL_00d3;*/goto IL_0528;                              //br				IL_00d3
	IL_0528:                                                                        //ldarg.0
	IL_0529:            Temp_62=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_052e:                                                                        //dup
	IL_052f:            V_11=Temp_62;                                               //stloc.s				V_11
	IL_0531:            if(V_11==nullptr)goto IL_07f4;                              //brfalse				IL_07f4
	IL_0536:                                                                        //ldc.i4				0x14
	IL_053b:            V_14=20;                                                    //stloc				V_14
	IL_053f:            /*goto IL_00d3;*/goto IL_0544;                              //br				IL_00d3
	IL_0544:            goto IL_039e;                                               //br				IL_039e
	IL_0549:                                                                        //ldarg.0
	IL_054a:            Temp_19=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_054f:                                                                        //ldarg.0
	IL_0550:            Temp_20=this->F_x8;                                         //ldfld				System::String^ Root::T_x111 F_x8
	IL_0555:            Temp_21=System::String::Concat(Temp_19,Temp_20);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_055a:            V_3=Temp_21;                                                //stloc.3
	IL_055b:                                                                        //ldc.i4				0xd
	IL_0560:            V_14=13;                                                    //stloc				V_14
	IL_0564:            /*goto IL_00d3;*/goto IL_0569;                              //br				IL_00d3
	IL_0569:                                                                        //ldstr				L"\x7124\x1D26"
	IL_056e:                                                                        //ldloc				V_15
	IL_0572:            Temp_38=a(L"\x7124\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0577:                                                                        //ldstr				L"\x6324\x1D26"
	IL_057c:                                                                        //ldloc				V_15
	IL_0580:            Temp_39=a(L"\x6324\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0585:                                                                        //ldstr				L"\x6824\x1D26"
	IL_058a:                                                                        //ldloc				V_15
	IL_058e:            Temp_40=a(L"\x6824\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0593:                                                                        //ldstr				L"\x7524\x1D26"
	IL_0598:                                                                        //ldloc				V_15
	IL_059c:            Temp_41=a(L"\x7524\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05a1:                                                                        //ldstr				L"\x6024\x1D26"
	IL_05a6:                                                                        //ldloc				V_15
	IL_05aa:            Temp_42=a(L"\x6024\x1D26",V_15);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05af:            goto IL_051a;                                               //leave				IL_051a
	IL_05AF01:          try{
	IL_05b4:                                                                        //ldc.i4				0x5
	IL_05b9:            V_14=5;                                                     //stloc				V_14
	IL_05bd:            /*goto IL_05c1;*/goto IL_05bf;                              //br.s				IL_05c1
	IL_05bf:            goto IL_05e6;                                               //br.s				IL_05e6
	IL_05c1:                                                                        //ldloc				V_14
	IL_05c5:            switch(V_14){case 0:goto IL_0679;case 1:goto IL_063f;case 2:goto IL_062e;case 3:goto IL_0669;case 4:goto IL_0652;case 5:goto IL_05bf;case 6:goto IL_0601;};//switch				(IL_0679,IL_063f,IL_062e,IL_0669,IL_0652,IL_05bf,IL_0601)
	IL_05e6:            goto IL_0644;                                               //br.s				IL_0644
	IL_05e8:                                                                        //ldloc.s				V_12
	IL_05ea:            Temp_47=V_12->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_05ef:                                                                        //castclass				Reflector::CodeModel::IPropertyDeclaration
	IL_05f4:            V_6=safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_47);//stloc.s				V_6
	IL_05f6:                                                                        //ldc.i4				0x6
	IL_05fb:            V_14=6;                                                     //stloc				V_14
	IL_05ff:            /*goto IL_05c1;*/goto IL_0601;                              //br.s				IL_05c1
	IL_0601:                                                                        //ldloc.3
	IL_0602:                                                                        //ldloc.s				V_6
	IL_0604:            Temp_48=safe_cast<Reflector::CodeModel::IMemberReference^>(V_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0609:                                                                        //ldarg.0
	IL_060a:                                                                        //ldloc.s				V_6
	IL_060c:            Temp_49=safe_cast<Reflector::CodeModel::IPropertyReference^>(V_6)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0611:                                                                        //ldc.i4.0
	IL_0612:            Temp_50=this->M_x1(Temp_49,safe_cast<Reflector::CodeModel::MethodCallingConvention>(0));//call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_0617:            Temp_51=System::String::Concat(Temp_48,Temp_50);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_061c:            Temp_52=(V_3 == Temp_51);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0621:            if(!Temp_52)goto IL_0644;                                   //brfalse.s				IL_0644
	IL_0623:                                                                        //ldc.i4				0x2
	IL_0628:            V_14=2;                                                     //stloc				V_14
	IL_062c:            /*goto IL_05c1;*/goto IL_062e;                              //br.s				IL_05c1
	IL_062e:            goto IL_0630;                                               //br.s				IL_0630
	IL_0630:                                                                        //ldloc.s				V_6
	IL_0632:            V_8=safe_cast<System::Object^>(V_6);                        //stloc.s				V_8
	IL_0634:                                                                        //ldc.i4				0x1
	IL_0639:            V_14=1;                                                     //stloc				V_14
	IL_063d:            /*goto IL_05c1;*/goto IL_063f;                              //br.s				IL_05c1
	IL_063f:            goto IL_09ac;                                               //leave				IL_09ac
	IL_0644:                                                                        //ldc.i4				0x4
	IL_0649:            V_14=4;                                                     //stloc				V_14
	IL_064d:            /*goto IL_05c1;*/goto IL_0652;                              //br				IL_05c1
	IL_0652:                                                                        //ldloc.s				V_12
	IL_0654:            Temp_46=V_12->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0659:            if(Temp_46)goto IL_05e8;                                    //brtrue.s				IL_05e8
	IL_065b:                                                                        //ldc.i4				0x3
	IL_0660:            V_14=3;                                                     //stloc				V_14
	IL_0664:            /*goto IL_05c1;*/goto IL_0669;                              //br				IL_05c1
	IL_0669:            goto IL_066b;                                               //br.s				IL_066b
	IL_066b:                                                                        //ldc.i4				0x0
	IL_0670:            V_14=0;                                                     //stloc				V_14
	IL_0674:            /*goto IL_05c1;*/goto IL_0679;                              //br				IL_05c1
	IL_0679:            goto IL_07f4;                                               //leave				IL_07f4
	                    ;}
	                    finally{
	IL_067e:            goto IL_0695;                                               //br.s				IL_0695
	IL_0680:                                                                        //ldloc				V_14
	IL_0684:            switch(V_14){case 0:goto IL_06a9;case 1:goto IL_06cc;case 2:goto IL_06b8;};//switch				(IL_06a9,IL_06cc,IL_06b8)
	IL_0695:                                                                        //ldloc.s				V_12
	IL_0697:                                                                        //isinst				System::IDisposable
	IL_069c:            V_13=dynamic_cast<System::IDisposable^>(V_12);              //stloc.s				V_13
	IL_069e:                                                                        //ldc.i4				0x0
	IL_06a3:            V_14=0;                                                     //stloc				V_14
	IL_06a7:            /*goto IL_0680;*/goto IL_06a9;                              //br.s				IL_0680
	IL_06a9:                                                                        //ldloc.s				V_13
	IL_06ab:            if(V_13==nullptr)goto IL_06ce;                              //brfalse.s				IL_06ce
	IL_06ad:                                                                        //ldc.i4				0x2
	IL_06b2:            V_14=2;                                                     //stloc				V_14
	IL_06b6:            /*goto IL_0680;*/goto IL_06b8;                              //br.s				IL_0680
	IL_06b8:            goto IL_06ba;                                               //br.s				IL_06ba
	IL_06ba:                                                                        //ldloc.s				V_13
	IL_06bc:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_06c1:                                                                        //ldc.i4				0x1
	IL_06c6:            V_14=1;                                                     //stloc				V_14
	IL_06ca:            /*goto IL_0680;*/goto IL_06cc;                              //br.s				IL_0680
	IL_06cc:            goto IL_06ce;                                               //br.s				IL_06ce
	IL_06ce:                                                                        //endfinally
	                    ;}
	IL_06CE02:          try{
	IL_06cf:                                                                        //ldc.i4				0x5
	IL_06d4:            V_14=5;                                                     //stloc				V_14
	IL_06d8:            /*goto IL_06dc;*/goto IL_06da;                              //br.s				IL_06dc
	IL_06da:            goto IL_0701;                                               //br.s				IL_0701
	IL_06dc:                                                                        //ldloc				V_14
	IL_06e0:            switch(V_14){case 0:goto IL_0750;case 1:goto IL_079e;case 2:goto IL_0760;case 3:goto IL_078b;case 4:goto IL_071c;case 5:goto IL_06da;case 6:goto IL_0777;};//switch				(IL_0750,IL_079e,IL_0760,IL_078b,IL_071c,IL_06da,IL_0777)
	IL_0701:            goto IL_0752;                                               //br.s				IL_0752
	IL_0703:                                                                        //ldloc.s				V_12
	IL_0705:            Temp_26=V_12->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_070a:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_070f:            V_5=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_26);//stloc.s				V_5
	IL_0711:                                                                        //ldc.i4				0x4
	IL_0716:            V_14=4;                                                     //stloc				V_14
	IL_071a:            /*goto IL_06dc;*/goto IL_071c;                              //br.s				IL_06dc
	IL_071c:                                                                        //ldloc.3
	IL_071d:                                                                        //ldarg.0
	IL_071e:                                                                        //ldloc.s				V_5
	IL_0720:            Temp_27=this->M_x1(V_5);                                    //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0725:                                                                        //ldarg.0
	IL_0726:                                                                        //ldloc.s				V_5
	IL_0728:            Temp_28=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_5)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_072d:                                                                        //ldloc.s				V_5
	IL_072f:            Temp_29=safe_cast<Reflector::CodeModel::IMethodSignature^>(V_5)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_0734:            Temp_30=this->M_x1(Temp_28,Temp_29);                        //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^,Reflector::CodeModel::MethodCallingConvention)
	IL_0739:            Temp_31=System::String::Concat(Temp_27,Temp_30);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_073e:            Temp_32=(V_3 == Temp_31);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0743:            if(!Temp_32)goto IL_0752;                                   //brfalse.s				IL_0752
	IL_0745:                                                                        //ldc.i4				0x0
	IL_074a:            V_14=0;                                                     //stloc				V_14
	IL_074e:            /*goto IL_06dc;*/goto IL_0750;                              //br.s				IL_06dc
	IL_0750:            goto IL_0779;                                               //br.s				IL_0779
	IL_0752:                                                                        //ldc.i4				0x2
	IL_0757:            V_14=2;                                                     //stloc				V_14
	IL_075b:            /*goto IL_06dc;*/goto IL_0760;                              //br				IL_06dc
	IL_0760:                                                                        //ldloc.s				V_12
	IL_0762:            Temp_25=V_12->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0767:            if(Temp_25)goto IL_0703;                                    //brtrue.s				IL_0703
	IL_0769:                                                                        //ldc.i4				0x6
	IL_076e:            V_14=6;                                                     //stloc				V_14
	IL_0772:            /*goto IL_06dc;*/goto IL_0777;                              //br				IL_06dc
	IL_0777:            goto IL_0790;                                               //br.s				IL_0790
	IL_0779:                                                                        //ldloc.s				V_5
	IL_077b:            V_8=safe_cast<System::Object^>(V_5);                        //stloc.s				V_8
	IL_077d:                                                                        //ldc.i4				0x3
	IL_0782:            V_14=3;                                                     //stloc				V_14
	IL_0786:            /*goto IL_06dc;*/goto IL_078b;                              //br				IL_06dc
	IL_078b:            goto IL_09ac;                                               //leave				IL_09ac
	IL_0790:                                                                        //ldc.i4				0x1
	IL_0795:            V_14=1;                                                     //stloc				V_14
	IL_0799:            /*goto IL_06dc;*/goto IL_079e;                              //br				IL_06dc
	IL_079e:            goto IL_07f4;                                               //leave				IL_07f4
	                    ;}
	                    finally{
	IL_07a3:            goto IL_07ba;                                               //br.s				IL_07ba
	IL_07a5:                                                                        //ldloc				V_14
	IL_07a9:            switch(V_14){case 0:goto IL_07ce;case 1:goto IL_07dd;case 2:goto IL_07f1;};//switch				(IL_07ce,IL_07dd,IL_07f1)
	IL_07ba:                                                                        //ldloc.s				V_12
	IL_07bc:                                                                        //isinst				System::IDisposable
	IL_07c1:            V_13=dynamic_cast<System::IDisposable^>(V_12);              //stloc.s				V_13
	IL_07c3:                                                                        //ldc.i4				0x0
	IL_07c8:            V_14=0;                                                     //stloc				V_14
	IL_07cc:            /*goto IL_07a5;*/goto IL_07ce;                              //br.s				IL_07a5
	IL_07ce:                                                                        //ldloc.s				V_13
	IL_07d0:            if(V_13==nullptr)goto IL_07f3;                              //brfalse.s				IL_07f3
	IL_07d2:                                                                        //ldc.i4				0x1
	IL_07d7:            V_14=1;                                                     //stloc				V_14
	IL_07db:            /*goto IL_07a5;*/goto IL_07dd;                              //br.s				IL_07a5
	IL_07dd:            goto IL_07df;                                               //br.s				IL_07df
	IL_07df:                                                                        //ldloc.s				V_13
	IL_07e1:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_07e6:                                                                        //ldc.i4				0x2
	IL_07eb:            V_14=2;                                                     //stloc				V_14
	IL_07ef:            /*goto IL_07a5;*/goto IL_07f1;                              //br.s				IL_07a5
	IL_07f1:            goto IL_07f3;                                               //br.s				IL_07f3
	IL_07f3:                                                                        //endfinally
	                    ;}
	IL_07f4:                                                                        //ldc.i4				0x10
	IL_07f9:            V_14=16;                                                    //stloc				V_14
	IL_07fd:            /*goto IL_00d3;*/goto IL_0802;                              //br				IL_00d3
	IL_0802:                                                                        //ldloc.s				V_10
	IL_0804:            Temp_53=V_10->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0809:            if(Temp_53)goto IL_0165;                                    //brtrue				IL_0165
	IL_080e:                                                                        //ldc.i4				0x4
	IL_0813:            V_14=4;                                                     //stloc				V_14
	IL_0817:            /*goto IL_00d3;*/goto IL_081c;                              //br				IL_00d3
	IL_081c:            goto IL_085e;                                               //br.s				IL_085e
	IL_081e:                                                                        //ldloc.2
	IL_081f:            Temp_23=V_2->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0824:            Temp_24=safe_cast<System::Collections::IEnumerable^>(Temp_23)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0829:            V_12=Temp_24;                                               //stloc.s				V_12
	IL_082b:                                                                        //ldc.i4				0x7
	IL_0830:            V_14=7;                                                     //stloc				V_14
	IL_0834:            /*goto IL_00d3;*/goto IL_0839;                              //br				IL_00d3
	IL_0839:            /*goto IL_06cf;*/goto IL_06CE02;                            //br				IL_06cf
	IL_083e:                                                                        //ldloc.2
	IL_083f:            Temp_44=V_2->Events;                                        //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_0844:            Temp_45=safe_cast<System::Collections::IEnumerable^>(Temp_44)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0849:            V_12=Temp_45;                                               //stloc.s				V_12
	IL_084b:                                                                        //ldc.i4				0xa
	IL_0850:            V_14=10;                                                    //stloc				V_14
	IL_0854:            /*goto IL_00d3;*/goto IL_0859;                              //br				IL_00d3
	IL_0859:            /*goto IL_03da;*/goto IL_03D501;                            //br				IL_03da
	IL_085e:                                                                        //ldc.i4				0x18
	IL_0863:            V_14=24;                                                    //stloc				V_14
	IL_0867:            /*goto IL_00d3;*/goto IL_086c;                              //br				IL_00d3
	IL_086c:            goto IL_009f;                                               //leave				IL_009f
	                    ;}
	                    finally{
	IL_0871:            goto IL_0888;                                               //br.s				IL_0888
	IL_0873:                                                                        //ldloc				V_14
	IL_0877:            switch(V_14){case 0:goto IL_08bf;case 1:goto IL_08ab;case 2:goto IL_089c;};//switch				(IL_08bf,IL_08ab,IL_089c)
	IL_0888:                                                                        //ldloc.s				V_10
	IL_088a:                                                                        //isinst				System::IDisposable
	IL_088f:            V_13=dynamic_cast<System::IDisposable^>(V_10);              //stloc.s				V_13
	IL_0891:                                                                        //ldc.i4				0x2
	IL_0896:            V_14=2;                                                     //stloc				V_14
	IL_089a:            /*goto IL_0873;*/goto IL_089c;                              //br.s				IL_0873
	IL_089c:                                                                        //ldloc.s				V_13
	IL_089e:            if(V_13==nullptr)goto IL_08c1;                              //brfalse.s				IL_08c1
	IL_08a0:                                                                        //ldc.i4				0x1
	IL_08a5:            V_14=1;                                                     //stloc				V_14
	IL_08a9:            /*goto IL_0873;*/goto IL_08ab;                              //br.s				IL_0873
	IL_08ab:            goto IL_08ad;                                               //br.s				IL_08ad
	IL_08ad:                                                                        //ldloc.s				V_13
	IL_08af:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_08b4:                                                                        //ldc.i4				0x0
	IL_08b9:            V_14=0;                                                     //stloc				V_14
	IL_08bd:            /*goto IL_0873;*/goto IL_08bf;                              //br.s				IL_0873
	IL_08bf:            goto IL_08c1;                                               //br.s				IL_08c1
	IL_08c1:                                                                        //endfinally
	                    ;}
	IL_08c2:                                                                        //ldc.i4				0x4
	IL_08c7:            V_14=4;                                                     //stloc				V_14
	IL_08cb:            /*goto IL_0056;*/goto IL_08d0;                              //br				IL_0056
	IL_08d0:            goto IL_097f;                                               //leave				IL_097f
	                    ;}
	                    finally{
	IL_08d5:            goto IL_08ec;                                               //br.s				IL_08ec
	IL_08d7:                                                                        //ldloc				V_14
	IL_08db:            switch(V_14){case 0:goto IL_090f;case 1:goto IL_0923;case 2:goto IL_0900;};//switch				(IL_090f,IL_0923,IL_0900)
	IL_08ec:                                                                        //ldloc.s				V_9
	IL_08ee:                                                                        //isinst				System::IDisposable
	IL_08f3:            V_13=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_13
	IL_08f5:                                                                        //ldc.i4				0x2
	IL_08fa:            V_14=2;                                                     //stloc				V_14
	IL_08fe:            /*goto IL_08d7;*/goto IL_0900;                              //br.s				IL_08d7
	IL_0900:                                                                        //ldloc.s				V_13
	IL_0902:            if(V_13==nullptr)goto IL_0925;                              //brfalse.s				IL_0925
	IL_0904:                                                                        //ldc.i4				0x0
	IL_0909:            V_14=0;                                                     //stloc				V_14
	IL_090d:            /*goto IL_08d7;*/goto IL_090f;                              //br.s				IL_08d7
	IL_090f:            goto IL_0911;                                               //br.s				IL_0911
	IL_0911:                                                                        //ldloc.s				V_13
	IL_0913:            /*V_13->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0918:                                                                        //ldc.i4				0x1
	IL_091d:            V_14=1;                                                     //stloc				V_14
	IL_0921:            /*goto IL_08d7;*/goto IL_0923;                              //br.s				IL_08d7
	IL_0923:            goto IL_0925;                                               //br.s				IL_0925
	IL_0925:                                                                        //endfinally
	                    ;}
	IL_0926:                                                                        //ldarg.1
	IL_0927:            Temp_3=A_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_092c:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0931:            V_9=Temp_4;                                                 //stloc.s				V_9
	IL_0933:                                                                        //ldc.i4				0x2
	IL_0938:            V_14=2;                                                     //stloc				V_14
	IL_093c:            /*goto IL_0016;*/goto IL_0941;                              //br				IL_0016
	IL_0941:            /*goto IL_0049;*/goto IL_004401;                            //br				IL_0049
	IL_0946:                                                                        //ldc.i4				0x0
	IL_094b:            V_14=0;                                                     //stloc				V_14
	IL_094f:            /*goto IL_0016;*/goto IL_0954;                              //br				IL_0016
	IL_0954:                                                                        //ldarg.0
	IL_0955:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x111 F_x1
	IL_095a:                                                                        //ldstr				L"\x6B24\x1D26"
	IL_095f:                                                                        //ldloc				V_15
	IL_0963:            Temp_1=a(L"\x6B24\x1D26",V_15);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0968:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_096d:            if(!Temp_2)goto IL_0926;                                    //brfalse.s				IL_0926
	IL_096f:                                                                        //ldc.i4				0x1
	IL_0974:            V_14=1;                                                     //stloc				V_14
	IL_0978:            /*goto IL_0016;*/goto IL_097d;                              //br				IL_0016
	IL_097d:            goto IL_0998;                                               //br.s				IL_0998
	IL_097f:            goto IL_0982;                                               //br.s				IL_0982
	IL_0981:                                                                        //break
	IL_0982:                                                                        //ldnull
	IL_0983:            return nullptr;                                             //ret
	IL_0984:                                                                        //ldstr				L"\x4424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x7834\x5636\x5738\x5A3A\x5A3C\x5A3E\x3340"
	IL_0989:                                                                        //ldloc				V_15
	IL_098d:            Temp_64=a(L"\x4424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x7834\x5636\x5738\x5A3A\x5A3C\x5A3E\x3340",V_15);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0992:            Temp_65=gcnew System::ArgumentNullException(Temp_64);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_0997:            throw Temp_65;                                              //throw
	IL_0998:                                                                        //ldstr				L"\x6B24\x4626\x4428\x4E2A\x5E2C\x5F2E\x5030\x5032\x5034\x1736\x6138\x763A\x713C\x1F3E\x2540\x2C42\x2644\x3246\x2448\x2E4A\x234C\x3B4E\x3050\x2752\x3C54\x3856\x3758\x7B5A\x365C\x3A5E\x1860\x1062\x4564\x0466\x0868\x056A\x036C\x006E\x0570\x5372\x1774\x1276\x5978\x097A\x187C\x0C7E\xEE80\xEF82\xF384\xE286\xED88\xA58A"
	IL_099d:                                                                        //ldloc				V_15
	IL_09a1:            Temp_5=a(L"\x6B24\x4626\x4428\x4E2A\x5E2C\x5F2E\x5030\x5032\x5034\x1736\x6138\x763A\x713C\x1F3E\x2540\x2C42\x2644\x3246\x2448\x2E4A\x234C\x3B4E\x3050\x2752\x3C54\x3856\x3758\x7B5A\x365C\x3A5E\x1860\x1062\x4564\x0466\x0868\x056A\x036C\x006E\x0570\x5372\x1774\x1276\x5978\x097A\x187C\x0C7E\xEE80\xEF82\xF384\xE286\xED88\xA58A",V_15);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09a6:            Temp_6=gcnew System::InvalidOperationException(Temp_5);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_09ab:            throw Temp_6;                                               //throw
	IL_09ac:                                                                        //ldloc.s				V_8
	IL_09ae:            return V_8;                                                 //ret

}
inline System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_1=14;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.1
	IL_000a:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_000f:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0014:            if(Temp_1==0)goto IL_004d;                                  //brfalse.s				IL_004d
	IL_0016:            goto IL_0019;                                               //br.s				IL_0019
	IL_0018:                                                                        //break
	IL_0019:            goto IL_001b;                                               //br.s				IL_001b
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_3=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0021:                                                                        //ldstr				L"\x4C2B\x4E2D"
	IL_0026:                                                                        //ldloc				V_1
	IL_002a:            Temp_4=a(L"\x4C2B\x4E2D",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_5=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0035:            Temp_6=safe_cast<System::Collections::ICollection^>(Temp_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003a:            V_0=Temp_6;                                                 //stloc.0
	IL_003b:                                                                        //ldloca.s				V_0
	IL_003d:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0042:            Temp_8=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_7));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0047:            Temp_9=System::String::Concat(Temp_3,Temp_4,Temp_8);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_004c:            return Temp_9;                                              //ret
	IL_004d:                                                                        //ldarg.1
	IL_004e:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0053:            return Temp_2;                                              //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x111::M_x1(Reflector::CodeModel::IModule^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::ArgumentNullException^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::ArgumentNullException^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Reflector::CodeModel::ITypeCollection^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Boolean Temp_20 = false;
	System::Object^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	System::String^ Temp_23 = nullptr;
	System::ArgumentNullException^ Temp_24 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_27 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Collections::IEnumerable^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	Reflector::CodeModel::ITypeDeclaration^ V_7 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_8 = nullptr;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::IDisposable^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_12=14;                                                    //stloc				V_12
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_11=4;                                                     //stloc				V_11
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0067;                                               //br.s				IL_0067
	IL_0016:                                                                        //ldloc				V_11
	IL_001a:            switch(V_11){case 0:goto IL_00cb;case 1:goto IL_0331;case 2:goto IL_041d;case 3:goto IL_02f4;case 4:goto IL_0014;case 5:goto IL_0397;case 6:goto IL_02c6;case 7:goto IL_00b8;case 8:goto IL_00df;case 9:goto IL_0106;case 10:goto IL_0382;case 11:goto IL_03ef;case 12:goto IL_0307;case 13:goto IL_02da;case 14:goto IL_0360;case 15:goto IL_00f2;case 16:goto IL_0078;case 17:goto IL_0403;};//switch				(IL_00cb,IL_0331,IL_041d,IL_02f4,IL_0014,IL_0397,IL_02c6,IL_00b8,IL_00df,IL_0106,IL_0382,IL_03ef,IL_0307,IL_02da,IL_0360,IL_00f2,IL_0078,IL_0403)
	IL_0067:                                                                        //ldarg.2
	IL_0068:            if(A_2!=nullptr)goto IL_02b8;                               //brtrue				IL_02b8
	IL_006d:                                                                        //ldc.i4				0x10
	IL_0072:            V_11=16;                                                    //stloc				V_11
	IL_0076:            /*goto IL_0016;*/goto IL_0078;                              //br.s				IL_0016
	IL_0078:            goto IL_0399;                                               //br				IL_0399
	IL_007d:                                                                        //ldc.i4.3
	IL_007e:                                                                        //dup
	IL_007f:                                                                        //dup
	IL_0080:                                                                        //ldc.i4.3
	IL_0081:                                                                        //sub
	IL_0082:                                                                        //blt				IL_007e
	IL_0087:                                                                        //pop
	IL_0088:                                                                        //ldloc.0
	IL_0089:                                                                        //ldarg.2
	IL_008a:                                                                        //ldloc.s				V_6
	IL_008c:                                                                        //ldc.i4.1
	IL_008d:                                                                        //add
	IL_008e:            Temp_8=A_2->Substring((V_6 + 1));                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0093:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0098:            Temp_10=System::Int32::Parse(Temp_8,safe_cast<System::IFormatProvider^>(Temp_9));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_009d:                                                                        //add
	IL_009e:            V_0=(V_0 + Temp_10);                                        //stloc.0
	IL_009f:                                                                        //ldarg.2
	IL_00a0:                                                                        //ldc.i4.0
	IL_00a1:                                                                        //ldloc.s				V_6
	IL_00a3:            Temp_11=A_2->Substring(safe_cast<System::Int32>(0),V_6);    //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_00a8:            A_2=Temp_11;                                                //starg.s				A_2
	IL_00aa:                                                                        //ldc.i4				0x7
	IL_00af:            V_11=7;                                                     //stloc				V_11
	IL_00b3:            /*goto IL_0016;*/goto IL_00b8;                              //br				IL_0016
	IL_00b8:            goto IL_034a;                                               //br				IL_034a
	IL_00bd:                                                                        //ldc.i4				0x0
	IL_00c2:            V_11=0;                                                     //stloc				V_11
	IL_00c6:            /*goto IL_0016;*/goto IL_00cb;                              //br				IL_0016
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:            if(V_1!=nullptr)goto IL_02dc;                               //brtrue				IL_02dc
	IL_00d1:                                                                        //ldc.i4				0x8
	IL_00d6:            V_11=8;                                                     //stloc				V_11
	IL_00da:            /*goto IL_0016;*/goto IL_00df;                              //br				IL_0016
	IL_00df:            goto IL_0408;                                               //br				IL_0408
	IL_00e4:                                                                        //ldc.i4				0xf
	IL_00e9:            V_11=15;                                                    //stloc				V_11
	IL_00ed:            /*goto IL_0016;*/goto IL_00f2;                              //br				IL_0016
	IL_00f2:                                                                        //ldarg.0
	IL_00f3:            if(A_0!=nullptr)goto IL_0365;                               //brtrue				IL_0365
	IL_00f8:                                                                        //ldc.i4				0x9
	IL_00fd:            V_11=9;                                                     //stloc				V_11
	IL_0101:            /*goto IL_0016;*/goto IL_0106;                              //br				IL_0016
	IL_0106:            goto IL_03ad;                                               //br				IL_03ad
	IL_010601:          try{
	IL_010b:                                                                        //ldc.i4				0x1
	IL_0110:            V_11=1;                                                     //stloc				V_11
	IL_0114:            /*goto IL_0118;*/goto IL_0116;                              //br.s				IL_0118
	IL_0116:            goto IL_0155;                                               //br.s				IL_0155
	IL_0118:                                                                        //ldloc				V_11
	IL_011c:            switch(V_11){case 0:goto IL_0262;case 1:goto IL_0116;case 2:goto IL_01b1;case 3:goto IL_01c1;case 4:goto IL_022f;case 5:goto IL_018d;case 6:goto IL_01de;case 7:goto IL_01ee;case 8:goto IL_0179;case 9:goto IL_0162;case 10:goto IL_01a0;case 11:goto IL_020e;case 12:goto IL_024f;};//switch				(IL_0262,IL_0116,IL_01b1,IL_01c1,IL_022f,IL_018d,IL_01de,IL_01ee,IL_0179,IL_0162,IL_01a0,IL_020e,IL_024f)
	IL_0155:            goto IL_0157;                                               //br.s				IL_0157
	IL_0157:                                                                        //ldc.i4				0x9
	IL_015c:            V_11=9;                                                     //stloc				V_11
	IL_0160:            /*goto IL_0118;*/goto IL_0162;                              //br.s				IL_0118
	IL_0162:                                                                        //ldloc.s				V_9
	IL_0164:            Temp_20=V_9->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0169:            if(Temp_20)goto IL_0213;                                    //brtrue				IL_0213
	IL_016e:                                                                        //ldc.i4				0x8
	IL_0173:            V_11=8;                                                     //stloc				V_11
	IL_0177:            /*goto IL_0118;*/goto IL_0179;                              //br.s				IL_0118
	IL_0179:            goto IL_0254;                                               //br				IL_0254
	IL_017e:                                                                        //ldloc.s				V_7
	IL_0180:            V_8=V_7;                                                    //stloc.s				V_8
	IL_0182:                                                                        //ldc.i4				0x5
	IL_0187:            V_11=5;                                                     //stloc				V_11
	IL_018b:            /*goto IL_0118;*/goto IL_018d;                              //br.s				IL_0118
	IL_018d:            goto IL_0422;                                               //leave				IL_0422
	IL_0192:                                                                        //ldc.i4				0xa
	IL_0197:            V_11=10;                                                    //stloc				V_11
	IL_019b:            /*goto IL_0118;*/goto IL_01a0;                              //br				IL_0118
	IL_01a0:                                                                        //ldloc.2
	IL_01a1:            if(V_2!=nullptr)goto IL_01e0;                               //brtrue.s				IL_01e0
	IL_01a3:                                                                        //ldc.i4				0x2
	IL_01a8:            V_11=2;                                                     //stloc				V_11
	IL_01ac:            /*goto IL_0118;*/goto IL_01b1;                              //br				IL_0118
	IL_01b1:            goto IL_01b3;                                               //br.s				IL_01b3
	IL_01b3:                                                                        //ldc.i4				0x3
	IL_01b8:            V_11=3;                                                     //stloc				V_11
	IL_01bc:            /*goto IL_0118;*/goto IL_01c1;                              //br				IL_0118
	IL_01c1:                                                                        //ldarg.1
	IL_01c2:                                                                        //ldloc.s				V_7
	IL_01c4:            Temp_14=safe_cast<Reflector::CodeModel::ITypeReference^>(V_7)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_01c9:            Temp_15=(A_1 == Temp_14);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01ce:            if(!Temp_15)goto IL_0157;                                   //brfalse.s				IL_0157
	IL_01d0:                                                                        //ldc.i4				0x6
	IL_01d5:            V_11=6;                                                     //stloc				V_11
	IL_01d9:            /*goto IL_0118;*/goto IL_01de;                              //br				IL_0118
	IL_01de:            goto IL_01e0;                                               //br.s				IL_01e0
	IL_01e0:                                                                        //ldc.i4				0x7
	IL_01e5:            V_11=7;                                                     //stloc				V_11
	IL_01e9:            /*goto IL_0118;*/goto IL_01ee;                              //br				IL_0118
	IL_01ee:                                                                        //ldloc.0
	IL_01ef:                                                                        //ldloc.s				V_7
	IL_01f1:            Temp_18=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_7)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_01f6:            Temp_19=safe_cast<System::Collections::ICollection^>(Temp_18)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01fb:            if(V_0!=Temp_19)goto IL_0157;                               //bne.un				IL_0157
	IL_0200:                                                                        //ldc.i4				0xb
	IL_0205:            V_11=11;                                                    //stloc				V_11
	IL_0209:            /*goto IL_0118;*/goto IL_020e;                              //br				IL_0118
	IL_020e:            goto IL_017e;                                               //br				IL_017e
	IL_0213:                                                                        //ldloc.s				V_9
	IL_0215:            Temp_21=V_9->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_021a:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_021f:            V_7=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_21);//stloc.s				V_7
	IL_0221:                                                                        //ldc.i4				0x4
	IL_0226:            V_11=4;                                                     //stloc				V_11
	IL_022a:            /*goto IL_0118;*/goto IL_022f;                              //br				IL_0118
	IL_022f:                                                                        //ldarg.2
	IL_0230:                                                                        //ldloc.s				V_7
	IL_0232:            Temp_16=safe_cast<Reflector::CodeModel::ITypeReference^>(V_7)->Name;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0237:            Temp_17=(A_2 == Temp_16);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_023c:            if(!Temp_17)goto IL_0157;                                   //brfalse				IL_0157
	IL_0241:                                                                        //ldc.i4				0xc
	IL_0246:            V_11=12;                                                    //stloc				V_11
	IL_024a:            /*goto IL_0118;*/goto IL_024f;                              //br				IL_0118
	IL_024f:            goto IL_0192;                                               //br				IL_0192
	IL_0254:                                                                        //ldc.i4				0x0
	IL_0259:            V_11=0;                                                     //stloc				V_11
	IL_025d:            /*goto IL_0118;*/goto IL_0262;                              //br				IL_0118
	IL_0262:            goto IL_030c;                                               //leave				IL_030c
	                    ;}
	                    finally{
	IL_0267:            goto IL_027e;                                               //br.s				IL_027e
	IL_0269:                                                                        //ldloc				V_11
	IL_026d:            switch(V_11){case 0:goto IL_02b5;case 1:goto IL_0292;case 2:goto IL_02a1;};//switch				(IL_02b5,IL_0292,IL_02a1)
	IL_027e:                                                                        //ldloc.s				V_9
	IL_0280:                                                                        //isinst				System::IDisposable
	IL_0285:            V_10=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_10
	IL_0287:                                                                        //ldc.i4				0x1
	IL_028c:            V_11=1;                                                     //stloc				V_11
	IL_0290:            /*goto IL_0269;*/goto IL_0292;                              //br.s				IL_0269
	IL_0292:                                                                        //ldloc.s				V_10
	IL_0294:            if(V_10==nullptr)goto IL_02b7;                              //brfalse.s				IL_02b7
	IL_0296:                                                                        //ldc.i4				0x2
	IL_029b:            V_11=2;                                                     //stloc				V_11
	IL_029f:            /*goto IL_0269;*/goto IL_02a1;                              //br.s				IL_0269
	IL_02a1:            goto IL_02a3;                                               //br.s				IL_02a3
	IL_02a3:                                                                        //ldloc.s				V_10
	IL_02a5:            /*V_10->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_02aa:                                                                        //ldc.i4				0x0
	IL_02af:            V_11=0;                                                     //stloc				V_11
	IL_02b3:            /*goto IL_0269;*/goto IL_02b5;                              //br.s				IL_0269
	IL_02b5:            goto IL_02b7;                                               //br.s				IL_02b7
	IL_02b7:                                                                        //endfinally
	                    ;}
	IL_02b8:                                                                        //ldc.i4				0x6
	IL_02bd:            V_11=6;                                                     //stloc				V_11
	IL_02c1:            /*goto IL_0016;*/goto IL_02c6;                              //br				IL_0016
	IL_02c6:                                                                        //ldarg.1
	IL_02c7:            if(A_1!=nullptr)goto IL_00e4;                               //brtrue				IL_00e4
	IL_02cc:                                                                        //ldc.i4				0xd
	IL_02d1:            V_11=13;                                                    //stloc				V_11
	IL_02d5:            /*goto IL_0016;*/goto IL_02da;                              //br				IL_0016
	IL_02da:            goto IL_0336;                                               //br.s				IL_0336
	IL_02dc:                                                                        //ldarg.2
	IL_02dd:                                                                        //ldc.i4.s				96
	IL_02df:            Temp_0=A_2->IndexOf(safe_cast<System::Char>((System::Char)96));//callvirt				System::Int32 System::String::IndexOf(System::Char)
	IL_02e4:            V_6=Temp_0;                                                 //stloc.s				V_6
	IL_02e6:                                                                        //ldc.i4				0x3
	IL_02eb:            V_11=3;                                                     //stloc				V_11
	IL_02ef:            /*goto IL_0016;*/goto IL_02f4;                              //br				IL_0016
	IL_02f4:                                                                        //ldloc.s				V_6
	IL_02f6:                                                                        //ldc.i4.m1
	IL_02f7:            if(V_6==-1)goto IL_034a;                                    //beq.s				IL_034a
	IL_02f9:                                                                        //ldc.i4				0xc
	IL_02fe:            V_11=12;                                                    //stloc				V_11
	IL_0302:            /*goto IL_0016;*/goto IL_0307;                              //br				IL_0016
	IL_0307:            goto IL_007d;                                               //br				IL_007d
	IL_030c:                                                                        //ldnull
	IL_030d:            return nullptr;                                             //ret
	IL_030e:                                                                        //ldloc.0
	IL_030f:                                                                        //ldloc.2
	IL_0310:            Temp_25=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_2)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0315:            Temp_26=safe_cast<System::Collections::ICollection^>(Temp_25)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_031a:                                                                        //add
	IL_031b:            V_0=(V_0 + Temp_26);                                        //stloc.0
	IL_031c:                                                                        //ldloc.2
	IL_031d:            Temp_27=V_2->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0322:            V_1=safe_cast<System::Collections::IEnumerable^>(Temp_27);  //stloc.1
	IL_0323:                                                                        //ldc.i4				0x1
	IL_0328:            V_11=1;                                                     //stloc				V_11
	IL_032c:            /*goto IL_0016;*/goto IL_0331;                              //br				IL_0016
	IL_0331:            goto IL_00bd;                                               //br				IL_00bd
	IL_0336:                                                                        //ldstr				L"\x5E2B\x4B2D\x432F\x5D31\x5833\x4335\x4C37\x5339\x533B\x503D\x133F\x2141\x2B43\x3645\x2D47"
	IL_033b:                                                                        //ldloc				V_12
	IL_033f:            Temp_12=a(L"\x5E2B\x4B2D\x432F\x5D31\x5833\x4335\x4C37\x5339\x533B\x503D\x133F\x2141\x2B43\x3645\x2D47",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0344:            Temp_13=gcnew System::ArgumentNullException(Temp_12);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_0349:            throw Temp_13;                                              //throw
	IL_034a:                                                                        //ldloc.1
	IL_034b:            Temp_1=V_1->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0350:            V_9=Temp_1;                                                 //stloc.s				V_9
	IL_0352:                                                                        //ldc.i4				0xe
	IL_0357:            V_11=14;                                                    //stloc				V_11
	IL_035b:            /*goto IL_0016;*/goto IL_0360;                              //br				IL_0016
	IL_0360:            /*goto IL_010b;*/goto IL_010601;                            //br				IL_010b
	IL_0365:                                                                        //ldc.i4.0
	IL_0366:            V_0=0;                                                      //stloc.0
	IL_0367:                                                                        //ldnull
	IL_0368:            V_1=safe_cast<System::Collections::IEnumerable^>(nullptr);  //stloc.1
	IL_0369:                                                                        //ldnull
	IL_036a:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(nullptr);//stloc.2
	IL_036b:                                                                        //ldarg.1
	IL_036c:                                                                        //ldc.i4.s				46
	IL_036e:            Temp_22=A_1->LastIndexOf(safe_cast<System::Char>((System::Char)46));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_0373:            V_3=Temp_22;                                                //stloc.3
	IL_0374:                                                                        //ldc.i4				0xa
	IL_0379:            V_11=10;                                                    //stloc				V_11
	IL_037d:            /*goto IL_0016;*/goto IL_0382;                              //br				IL_0016
	IL_0382:                                                                        //ldloc.3
	IL_0383:                                                                        //ldc.i4.m1
	IL_0384:            if(V_3==-1)goto IL_00bd;                                    //beq				IL_00bd
	IL_0389:                                                                        //ldc.i4				0x5
	IL_038e:            V_11=5;                                                     //stloc				V_11
	IL_0392:            /*goto IL_0016;*/goto IL_0397;                              //br				IL_0016
	IL_0397:            goto IL_03c1;                                               //br.s				IL_03c1
	IL_0399:                                                                        //ldstr				L"\x422B\x4F2D\x5D2F\x5731"
	IL_039e:                                                                        //ldloc				V_12
	IL_03a2:            Temp_23=a(L"\x422B\x4F2D\x5D2F\x5731",V_12);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a7:            Temp_24=gcnew System::ArgumentNullException(Temp_23);       //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_03ac:            throw Temp_24;                                              //throw
	IL_03ad:                                                                        //ldstr				L"\x412B\x412D\x542F\x4731\x5833\x5335"
	IL_03b2:                                                                        //ldloc				V_12
	IL_03b6:            Temp_6=a(L"\x412B\x412D\x542F\x4731\x5833\x5335",V_12);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03bb:            Temp_7=gcnew System::ArgumentNullException(Temp_6);         //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_03c0:            throw Temp_7;                                               //throw
	IL_03c1:                                                                        //ldarg.1
	IL_03c2:                                                                        //ldc.i4.0
	IL_03c3:                                                                        //ldloc.3
	IL_03c4:            Temp_2=A_1->Substring(safe_cast<System::Int32>(0),V_3);     //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_03c9:            V_4=Temp_2;                                                 //stloc.s				V_4
	IL_03cb:                                                                        //ldarg.1
	IL_03cc:                                                                        //ldloc.3
	IL_03cd:                                                                        //ldc.i4.1
	IL_03ce:                                                                        //add
	IL_03cf:            Temp_3=A_1->Substring((V_3 + 1));                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_03d4:            V_5=Temp_3;                                                 //stloc.s				V_5
	IL_03d6:                                                                        //ldarg.0
	IL_03d7:                                                                        //ldloc.s				V_4
	IL_03d9:                                                                        //ldloc.s				V_5
	IL_03db:            Temp_4=Root::T_x111::M_x1(A_0,V_4,V_5);                     //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x111::M_x1(Reflector::CodeModel::IModule^,System::String^,System::String^)
	IL_03e0:            V_2=Temp_4;                                                 //stloc.2
	IL_03e1:                                                                        //ldc.i4				0xb
	IL_03e6:            V_11=11;                                                    //stloc				V_11
	IL_03ea:            /*goto IL_0016;*/goto IL_03ef;                              //br				IL_0016
	IL_03ef:                                                                        //ldloc.2
	IL_03f0:            if(V_2==nullptr)goto IL_00bd;                               //brfalse				IL_00bd
	IL_03f5:                                                                        //ldc.i4				0x11
	IL_03fa:            V_11=17;                                                    //stloc				V_11
	IL_03fe:            /*goto IL_0016;*/goto IL_0403;                              //br				IL_0016
	IL_0403:            goto IL_030e;                                               //br				IL_030e
	IL_0408:                                                                        //ldarg.0
	IL_0409:            Temp_5=A_0->Types;                                          //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_040e:            V_1=safe_cast<System::Collections::IEnumerable^>(Temp_5);   //stloc.1
	IL_040f:                                                                        //ldc.i4				0x2
	IL_0414:            V_11=2;                                                     //stloc				V_11
	IL_0418:            /*goto IL_0016;*/goto IL_041d;                              //br				IL_0016
	IL_041d:            goto IL_02dc;                                               //br				IL_02dc
	IL_0422:                                                                        //ldloc.s				V_8
	IL_0424:            return V_8;                                                 //ret

}
inline System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::MethodCallingConvention A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IType^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_5=2;                                                      //stloc				V_5
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_4=1;                                                      //stloc				V_4
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_4
	IL_001a:            switch(V_4){case 0:goto IL_0045;case 1:goto IL_0014;case 2:goto IL_0217;};//switch				(IL_0045,IL_0014,IL_0217)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:                                                                        //ldarg.1
	IL_002f:            Temp_11=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0034:                                                                        //ldc.i4.0
	IL_0035:            if(Temp_11<=0)goto IL_021c;                                 //ble				IL_021c
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_4=0;                                                      //stloc				V_4
	IL_0043:            /*goto IL_0016;*/goto IL_0045;                              //br.s				IL_0016
	IL_0045:            goto IL_01fe;                                               //br				IL_01fe
	IL_004501:          try{
	IL_004a:            goto IL_0081;                                               //br.s				IL_0081
	IL_004c:                                                                        //ldloc				V_4
	IL_0050:            switch(V_4){case 0:goto IL_00d0;case 1:goto IL_00e5;case 2:goto IL_00c0;case 3:goto IL_00b2;case 4:goto IL_0109;case 5:goto IL_0188;case 6:goto IL_013a;case 7:goto IL_015e;case 8:goto IL_00a2;case 9:goto IL_016e;case 10:goto IL_01b6;};//switch				(IL_00d0,IL_00e5,IL_00c0,IL_00b2,IL_0109,IL_0188,IL_013a,IL_015e,IL_00a2,IL_016e,IL_01b6)
	IL_0081:                                                                        //ldloc.0
	IL_0082:                                                                        //ldstr				L"\x081F"
	IL_0087:                                                                        //ldloc				V_5
	IL_008b:            Temp_2=a(L"\x081F",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0095:                                                                        //ldc.i4.0
	IL_0096:            V_1=0;                                                      //stloc.1
	IL_0097:                                                                        //ldc.i4				0x8
	IL_009c:            V_4=8;                                                      //stloc				V_4
	IL_00a0:            /*goto IL_004c;*/goto IL_00a2;                              //br.s				IL_004c
	IL_00a2:            goto IL_0160;                                               //br				IL_0160
	IL_00a7:                                                                        //ldc.i4				0x3
	IL_00ac:            V_4=3;                                                      //stloc				V_4
	IL_00b0:            /*goto IL_004c;*/goto IL_00b2;                              //br.s				IL_004c
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:            if(V_1==0)goto IL_010e;                                     //brfalse.s				IL_010e
	IL_00b5:                                                                        //ldc.i4				0x2
	IL_00ba:            V_4=2;                                                      //stloc				V_4
	IL_00be:            /*goto IL_004c;*/goto IL_00c0;                              //br.s				IL_004c
	IL_00c0:            goto IL_013c;                                               //br.s				IL_013c
	IL_00c2:                                                                        //ldc.i4				0x0
	IL_00c7:            V_4=0;                                                      //stloc				V_4
	IL_00cb:            /*goto IL_004c;*/goto IL_00d0;                              //br				IL_004c
	IL_00d0:                                                                        //ldarg.2
	IL_00d1:                                                                        //ldc.i4.5
	IL_00d2:            if(safe_cast<System::Int32>(A_1)!=5)goto IL_018d;           //bne.un				IL_018d
	IL_00d7:                                                                        //ldc.i4				0x1
	IL_00dc:            V_4=1;                                                      //stloc				V_4
	IL_00e0:            /*goto IL_004c;*/goto IL_00e5;                              //br				IL_004c
	IL_00e5:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:                                                                        //ldstr				L"\x0C1F"
	IL_00ed:                                                                        //ldloc				V_5
	IL_00f1:            Temp_5=a(L"\x0C1F",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f6:            V_0->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fb:                                                                        //ldc.i4				0x4
	IL_0100:            V_4=4;                                                      //stloc				V_4
	IL_0104:            /*goto IL_004c;*/goto IL_0109;                              //br				IL_004c
	IL_0109:            goto IL_018d;                                               //br				IL_018d
	IL_010e:                                                                        //ldarg.1
	IL_010f:                                                                        //ldloc.1
	IL_0110:            Temp_7=A_0[V_1];                                            //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_0115:            Temp_8=Temp_7->ParameterType;                               //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_011a:            V_2=Temp_8;                                                 //stloc.2
	IL_011b:                                                                        //ldloc.0
	IL_011c:                                                                        //ldarg.0
	IL_011d:                                                                        //ldloc.2
	IL_011e:            Temp_9=this->M_x1(V_2);                                     //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_0123:            V_0->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0128:                                                                        //ldloc.1
	IL_0129:                                                                        //ldc.i4.1
	IL_012a:                                                                        //add
	IL_012b:            V_1=(V_1 + 1);                                              //stloc.1
	IL_012c:                                                                        //ldc.i4				0x6
	IL_0131:            V_4=6;                                                      //stloc				V_4
	IL_0135:            /*goto IL_004c;*/goto IL_013a;                              //br				IL_004c
	IL_013a:            goto IL_0160;                                               //br.s				IL_0160
	IL_013c:                                                                        //ldloc.0
	IL_013d:                                                                        //ldstr				L"\x0C1F"
	IL_0142:                                                                        //ldloc				V_5
	IL_0146:            Temp_6=a(L"\x0C1F",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014b:            V_0->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0150:                                                                        //ldc.i4				0x7
	IL_0155:            V_4=7;                                                      //stloc				V_4
	IL_0159:            /*goto IL_004c;*/goto IL_015e;                              //br				IL_004c
	IL_015e:            goto IL_010e;                                               //br.s				IL_010e
	IL_0160:                                                                        //ldc.i4				0x9
	IL_0165:            V_4=9;                                                      //stloc				V_4
	IL_0169:            /*goto IL_004c;*/goto IL_016e;                              //br				IL_004c
	IL_016e:                                                                        //ldloc.1
	IL_016f:                                                                        //ldarg.1
	IL_0170:            Temp_10=safe_cast<System::Collections::ICollection^>(A_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0175:            if(V_1<Temp_10)goto IL_00a7;                                //blt				IL_00a7
	IL_017a:                                                                        //ldc.i4				0x5
	IL_017f:            V_4=5;                                                      //stloc				V_4
	IL_0183:            /*goto IL_004c;*/goto IL_0188;                              //br				IL_004c
	IL_0188:            goto IL_00c2;                                               //br				IL_00c2
	IL_018d:                                                                        //ldloc.0
	IL_018e:                                                                        //ldstr				L"\x091F"
	IL_0193:                                                                        //ldloc				V_5
	IL_0197:            Temp_3=a(L"\x091F",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019c:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01a1:                                                                        //ldloc.0
	IL_01a2:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01a7:            V_3=Temp_4;                                                 //stloc.3
	IL_01a8:                                                                        //ldc.i4				0xa
	IL_01ad:            V_4=10;                                                     //stloc				V_4
	IL_01b1:            /*goto IL_004c;*/goto IL_01b6;                              //br				IL_004c
	IL_01b6:            goto IL_0222;                                               //leave.s				IL_0222
	                    ;}
	                    finally{
	IL_01b8:                                                                        //ldc.i4				0x1
	IL_01bd:            V_4=1;                                                      //stloc				V_4
	IL_01c1:            /*goto IL_01c5;*/goto IL_01c3;                              //br.s				IL_01c5
	IL_01c3:            goto IL_01da;                                               //br.s				IL_01da
	IL_01c5:                                                                        //ldloc				V_4
	IL_01c9:            switch(V_4){case 0:goto IL_01e8;case 1:goto IL_01c3;case 2:goto IL_01fb;};//switch				(IL_01e8,IL_01c3,IL_01fb)
	IL_01da:                                                                        //ldloc.0
	IL_01db:            if(V_0==nullptr)goto IL_01fd;                               //brfalse.s				IL_01fd
	IL_01dd:                                                                        //ldc.i4				0x0
	IL_01e2:            V_4=0;                                                      //stloc				V_4
	IL_01e6:            /*goto IL_01c5;*/goto IL_01e8;                              //br.s				IL_01c5
	IL_01e8:            goto IL_01ea;                                               //br.s				IL_01ea
	IL_01ea:                                                                        //ldloc.0
	IL_01eb:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01f0:                                                                        //ldc.i4				0x2
	IL_01f5:            V_4=2;                                                      //stloc				V_4
	IL_01f9:            /*goto IL_01c5;*/goto IL_01fb;                              //br.s				IL_01c5
	IL_01fb:            goto IL_01fd;                                               //br.s				IL_01fd
	IL_01fd:                                                                        //endfinally
	                    ;}
	IL_01fe:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0203:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0208:            V_0=Temp_1;                                                 //stloc.0
	IL_0209:                                                                        //ldc.i4				0x2
	IL_020e:            V_4=2;                                                      //stloc				V_4
	IL_0212:            /*goto IL_0016;*/goto IL_0217;                              //br				IL_0016
	IL_0217:            /*goto IL_004a;*/goto IL_004501;                            //br				IL_004a
	IL_021c:            Temp_12=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0221:            return Temp_12;                                             //ret
	IL_0222:                                                                        //ldloc.3
	IL_0223:            return V_3;                                                 //ret

}
inline System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Globalization::CultureInfo^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	System::Globalization::CultureInfo^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Globalization::CultureInfo^ Temp_21 = nullptr;
	System::IO::StringWriter^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Reflector::CodeModel::IType^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	Reflector::CodeModel::IType^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::Int32 Temp_38 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_39 = nullptr;
	System::Int32 Temp_40 = 0;
	Reflector::CodeModel::ITypeCollection^ Temp_41 = nullptr;
	System::Int32 Temp_42 = 0;
	Reflector::CodeModel::IType^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ Temp_46 = nullptr;
	Reflector::CodeModel::IArrayDimension^ Temp_47 = nullptr;
	System::Int32 Temp_48 = 0;
	Reflector::CodeModel::IArrayDimension^ Temp_49 = nullptr;
	System::Int32 Temp_50 = 0;
	System::Int32 Temp_51 = 0;
	System::Globalization::CultureInfo^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::Globalization::CultureInfo^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_60 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_61 = nullptr;
	Reflector::CodeModel::IType^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	Reflector::CodeModel::IArrayType^ V_4 = nullptr;
	System::IO::StringWriter^ V_5 = nullptr;
	Reflector::CodeModel::IArrayDimensionCollection^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	Reflector::CodeModel::IReferenceType^ V_10 = nullptr;
	Reflector::CodeModel::IPointerType^ V_11 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_12 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_13 = nullptr;
	Reflector::CodeModel::IGenericParameter^ V_14 = nullptr;
	Reflector::CodeModel::IGenericArgument^ V_15 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_16 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_17 = nullptr;
	System::String^ V_18 = nullptr;
	System::Int32 V_19 = 0;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_21=18;                                                    //stloc				V_21
	IL_0009:            goto IL_009b;                                               //br				IL_009b
	IL_000e:                                                                        //ldloc				V_20
	IL_0012:            switch(V_20){case 0:goto IL_0185;case 1:goto IL_012a;case 2:goto IL_06f3;case 3:goto IL_0738;case 4:goto IL_02cf;case 5:goto IL_01eb;case 6:goto IL_0331;case 7:goto IL_0366;case 8:goto IL_0708;case 9:goto IL_0301;case 10:goto IL_00b0;case 11:goto IL_0148;case 12:goto IL_06d0;case 13:goto IL_067e;case 14:goto IL_0240;case 15:goto IL_0396;case 16:goto IL_06bc;case 17:goto IL_0102;case 18:goto IL_00c4;case 19:goto IL_01d6;case 20:goto IL_0693;case 21:goto IL_0226;case 22:goto IL_02e2;case 23:goto IL_0762;case 24:goto IL_02b1;case 25:goto IL_01a0;case 26:goto IL_0297;case 27:goto IL_0723;case 28:goto IL_0381;case 29:goto IL_015d;case 30:goto IL_0351;case 31:goto IL_01b5;case 32:goto IL_00ed;};//switch				(IL_0185,IL_012a,IL_06f3,IL_0738,IL_02cf,IL_01eb,IL_0331,IL_0366,IL_0708,IL_0301,IL_00b0,IL_0148,IL_06d0,IL_067e,IL_0240,IL_0396,IL_06bc,IL_0102,IL_00c4,IL_01d6,IL_0693,IL_0226,IL_02e2,IL_0762,IL_02b1,IL_01a0,IL_0297,IL_0723,IL_0381,IL_015d,IL_0351,IL_01b5,IL_00ed)
	IL_009b:                                                                        //ldarg.1
	IL_009c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00a1:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_00a2:                                                                        //ldc.i4				0xa
	IL_00a7:            V_20=10;                                                    //stloc				V_20
	IL_00ab:            /*goto IL_000e;*/goto IL_00b0;                              //br				IL_000e
	IL_00b0:                                                                        //ldloc.0
	IL_00b1:            if(V_0==nullptr)goto IL_06dd;                               //brfalse				IL_06dd
	IL_00b6:                                                                        //ldc.i4				0x12
	IL_00bb:            V_20=18;                                                    //stloc				V_20
	IL_00bf:            /*goto IL_000e;*/goto IL_00c4;                              //br				IL_000e
	IL_00c4:            goto IL_029c;                                               //br				IL_029c
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:                                                                        //ldloc.s				V_13
	IL_00cc:            Temp_62=V_13->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_00d1:            Temp_63=this->M_x1(Temp_62);                                //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_00d6:            return Temp_63;                                             //ret
	IL_00d7:                                                                        //ldarg.1
	IL_00d8:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_00dd:            V_11=dynamic_cast<Reflector::CodeModel::IPointerType^>(A_0);//stloc.s				V_11
	IL_00df:                                                                        //ldc.i4				0x20
	IL_00e4:            V_20=32;                                                    //stloc				V_20
	IL_00e8:            /*goto IL_000e;*/goto IL_00ed;                              //br				IL_000e
	IL_00ed:                                                                        //ldloc.s				V_11
	IL_00ef:            if(V_11==nullptr)goto IL_0668;                              //brfalse				IL_0668
	IL_00f4:                                                                        //ldc.i4				0x11
	IL_00f9:            V_20=17;                                                    //stloc				V_20
	IL_00fd:            /*goto IL_000e;*/goto IL_0102;                              //br				IL_000e
	IL_0102:            goto IL_0775;                                               //br				IL_0775
	IL_0107:                                                                        //ldloc.1
	IL_0108:                                                                        //ldstr				L"\x4D2F"
	IL_010d:                                                                        //ldloc				V_21
	IL_0111:            Temp_23=a(L"\x4D2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0116:            Temp_24=System::String::Concat(V_1,Temp_23);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_011b:            V_1=Temp_24;                                                //stloc.1
	IL_011c:                                                                        //ldc.i4				0x1
	IL_0121:            V_20=1;                                                     //stloc				V_20
	IL_0125:            /*goto IL_000e;*/goto IL_012a;                              //br				IL_000e
	IL_012a:            goto IL_012d;                                               //br.s				IL_012d
	IL_012c:                                                                        //break
	IL_012d:            goto IL_0211;                                               //br				IL_0211
	IL_0132:                                                                        //ldarg.1
	IL_0133:                                                                        //isinst				Reflector::CodeModel::IGenericArgument
	IL_0138:            V_15=dynamic_cast<Reflector::CodeModel::IGenericArgument^>(A_0);//stloc.s				V_15
	IL_013a:                                                                        //ldc.i4				0xb
	IL_013f:            V_20=11;                                                    //stloc				V_20
	IL_0143:            /*goto IL_000e;*/goto IL_0148;                              //br				IL_000e
	IL_0148:                                                                        //ldloc.s				V_15
	IL_014a:            if(V_15==nullptr)goto IL_026e;                              //brfalse				IL_026e
	IL_014f:                                                                        //ldc.i4				0x1d
	IL_0154:            V_20=29;                                                    //stloc				V_20
	IL_0158:            /*goto IL_000e;*/goto IL_015d;                              //br				IL_000e
	IL_015d:            goto IL_0335;                                               //br				IL_0335
	IL_0162:                                                                        //ldloc.1
	IL_0163:                                                                        //ldstr				L"\x1C2F"
	IL_0168:                                                                        //ldloc				V_21
	IL_016c:            Temp_26=a(L"\x1C2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0171:            Temp_27=System::String::Concat(V_1,Temp_26);                //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0176:            V_1=Temp_27;                                                //stloc.1
	IL_0177:                                                                        //ldc.i4				0x0
	IL_017c:            V_20=0;                                                     //stloc				V_20
	IL_0180:            /*goto IL_000e;*/goto IL_0185;                              //br				IL_000e
	IL_0185:            goto IL_0306;                                               //br				IL_0306
	IL_018a:                                                                        //ldarg.1
	IL_018b:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0190:            V_13=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.s				V_13
	IL_0192:                                                                        //ldc.i4				0x19
	IL_0197:            V_20=25;                                                    //stloc				V_20
	IL_019b:            /*goto IL_000e;*/goto IL_01a0;                              //br				IL_000e
	IL_01a0:                                                                        //ldloc.s				V_13
	IL_01a2:            if(V_13==nullptr)goto IL_036b;                              //brfalse				IL_036b
	IL_01a7:                                                                        //ldc.i4				0x1f
	IL_01ac:            V_20=31;                                                    //stloc				V_20
	IL_01b0:            /*goto IL_000e;*/goto IL_01b5;                              //br				IL_000e
	IL_01b5:            goto IL_00c9;                                               //br				IL_00c9
	IL_01ba:                                                                        //ldloc.s				V_15
	IL_01bc:            Temp_61=V_15->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_01c1:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_01c6:            V_17=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_61);//stloc.s				V_17
	IL_01c8:                                                                        //ldc.i4				0x13
	IL_01cd:            V_20=19;                                                    //stloc				V_20
	IL_01d1:            /*goto IL_000e;*/goto IL_01d6;                              //br				IL_000e
	IL_01d6:                                                                        //ldloc.s				V_17
	IL_01d8:            if(V_17==nullptr)goto IL_026e;                              //brfalse				IL_026e
	IL_01dd:                                                                        //ldc.i4				0x5
	IL_01e2:            V_20=5;                                                     //stloc				V_20
	IL_01e6:            /*goto IL_000e;*/goto IL_01eb;                              //br				IL_000e
	IL_01eb:            goto IL_0796;                                               //br				IL_0796
	IL_01f0:                                                                        //ldarg.0
	IL_01f1:                                                                        //ldloc.s				V_10
	IL_01f3:            Temp_5=V_10->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_01f8:            Temp_6=this->M_x1(Temp_5);                                  //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_01fd:                                                                        //ldstr				L"\x162F"
	IL_0202:                                                                        //ldloc				V_21
	IL_0206:            Temp_7=a(L"\x162F",V_21);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020b:            Temp_8=System::String::Concat(Temp_6,Temp_7);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0210:            return Temp_8;                                              //ret
	IL_0211:                                                                        //ldloc.0
	IL_0212:            Temp_4=Root::T_x111::M_x1(V_0);                             //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0217:            V_3=Temp_4;                                                 //stloc.3
	IL_0218:                                                                        //ldc.i4				0x15
	IL_021d:            V_20=21;                                                    //stloc				V_20
	IL_0221:            /*goto IL_000e;*/goto IL_0226;                              //br				IL_000e
	IL_0226:                                                                        //ldloc.3
	IL_0227:            Temp_38=V_3->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_022c:                                                                        //ldc.i4.0
	IL_022d:            if(Temp_38<=0)goto IL_0333;                                 //ble				IL_0333
	IL_0232:                                                                        //ldc.i4				0xe
	IL_0237:            V_20=14;                                                    //stloc				V_20
	IL_023b:            /*goto IL_000e;*/goto IL_0240;                              //br				IL_000e
	IL_0240:            goto IL_0698;                                               //br				IL_0698
	IL_0245:                                                                        //ldstr				L"\x502F"
	IL_024a:                                                                        //ldloc				V_21
	IL_024e:            Temp_16=a(L"\x502F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0253:                                                                        //ldloc.s				V_15
	IL_0255:            Temp_17=V_15->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_025a:            V_19=Temp_17;                                               //stloc.s				V_19
	IL_025c:                                                                        //ldloca.s				V_19
	IL_025e:            Temp_18=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0263:            Temp_19=V_19.ToString(safe_cast<System::IFormatProvider^>(Temp_18));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0268:            Temp_20=System::String::Concat(Temp_16,Temp_19);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_026d:            return Temp_20;                                             //ret
	IL_026e:                                                                        //ldstr				L"\x0F2F"
	IL_0273:                                                                        //ldloc				V_21
	IL_0277:            Temp_25=a(L"\x0F2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027c:            return Temp_25;                                             //ret
	IL_027d:            Temp_21=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0282:            Temp_22=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_21));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0287:            V_5=Temp_22;                                                //stloc.s				V_5
	IL_0289:                                                                        //ldc.i4				0x1a
	IL_028e:            V_20=26;                                                    //stloc				V_20
	IL_0292:            /*goto IL_000e;*/goto IL_0297;                              //br				IL_000e
	IL_0297:            /*goto IL_039b;*/goto IL_039601;                            //br				IL_039b
	IL_029c:                                                                        //ldloc.0
	IL_029d:            Temp_35=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_02a2:            V_1=Temp_35;                                                //stloc.1
	IL_02a3:                                                                        //ldc.i4				0x18
	IL_02a8:            V_20=24;                                                    //stloc				V_20
	IL_02ac:            /*goto IL_000e;*/goto IL_02b1;                              //br				IL_000e
	IL_02b1:                                                                        //ldloc.0
	IL_02b2:            Temp_41=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02b7:            Temp_42=safe_cast<System::Collections::ICollection^>(Temp_41)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02bc:            if(Temp_42==0)goto IL_0211;                                 //brfalse				IL_0211
	IL_02c1:                                                                        //ldc.i4				0x4
	IL_02c6:            V_20=4;                                                     //stloc				V_20
	IL_02ca:            /*goto IL_000e;*/goto IL_02cf;                              //br				IL_000e
	IL_02cf:            goto IL_073d;                                               //br				IL_073d
	IL_02d4:                                                                        //ldc.i4				0x16
	IL_02d9:            V_20=22;                                                    //stloc				V_20
	IL_02dd:            /*goto IL_000e;*/goto IL_02e2;                              //br				IL_000e
	IL_02e2:                                                                        //ldloc.2
	IL_02e3:                                                                        //ldloc.0
	IL_02e4:            Temp_39=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_02e9:            Temp_40=safe_cast<System::Collections::ICollection^>(Temp_39)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_02ee:            if(V_2<Temp_40)goto IL_06ae;                                //blt				IL_06ae
	IL_02f3:                                                                        //ldc.i4				0x9
	IL_02f8:            V_20=9;                                                     //stloc				V_20
	IL_02fc:            /*goto IL_000e;*/goto IL_0301;                              //br				IL_000e
	IL_0301:            goto IL_0107;                                               //br				IL_0107
	IL_0306:                                                                        //ldloc.1
	IL_0307:                                                                        //ldarg.0
	IL_0308:                                                                        //ldloc.0
	IL_0309:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_030e:                                                                        //ldloc.2
	IL_030f:            Temp_1=Temp_0[V_2];                                         //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_0314:            Temp_2=this->M_x1(Temp_1);                                  //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_0319:            Temp_3=System::String::Concat(V_1,Temp_2);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_031e:            V_1=Temp_3;                                                 //stloc.1
	IL_031f:                                                                        //ldloc.2
	IL_0320:                                                                        //ldc.i4.1
	IL_0321:                                                                        //add
	IL_0322:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0323:                                                                        //ldc.i4				0x6
	IL_0328:            V_20=6;                                                     //stloc				V_20
	IL_032c:            /*goto IL_000e;*/goto IL_0331;                              //br				IL_000e
	IL_0331:            goto IL_02d4;                                               //br.s				IL_02d4
	IL_0333:                                                                        //ldloc.1
	IL_0334:            return V_1;                                                 //ret
	IL_0335:                                                                        //ldloc.s				V_15
	IL_0337:            Temp_60=V_15->Owner;                                        //callvirt				Reflector::CodeModel::IGenericArgumentProvider^ Reflector::CodeModel::IGenericArgument::get_Owner()
	IL_033c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0341:            V_16=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_60);//stloc.s				V_16
	IL_0343:                                                                        //ldc.i4				0x1e
	IL_0348:            V_20=30;                                                    //stloc				V_20
	IL_034c:            /*goto IL_000e;*/goto IL_0351;                              //br				IL_000e
	IL_0351:                                                                        //ldloc.s				V_16
	IL_0353:            if(V_16==nullptr)goto IL_01ba;                              //brfalse				IL_01ba
	IL_0358:                                                                        //ldc.i4				0x7
	IL_035d:            V_20=7;                                                     //stloc				V_20
	IL_0361:            /*goto IL_000e;*/goto IL_0366;                              //br				IL_000e
	IL_0366:            goto IL_0245;                                               //br				IL_0245
	IL_036b:                                                                        //ldarg.1
	IL_036c:                                                                        //isinst				Reflector::CodeModel::IGenericParameter
	IL_0371:            V_14=dynamic_cast<Reflector::CodeModel::IGenericParameter^>(A_0);//stloc.s				V_14
	IL_0373:                                                                        //ldc.i4				0x1c
	IL_0378:            V_20=28;                                                    //stloc				V_20
	IL_037c:            /*goto IL_000e;*/goto IL_0381;                              //br				IL_000e
	IL_0381:                                                                        //ldloc.s				V_14
	IL_0383:            if(V_14==nullptr)goto IL_0132;                              //brfalse				IL_0132
	IL_0388:                                                                        //ldc.i4				0xf
	IL_038d:            V_20=15;                                                    //stloc				V_20
	IL_0391:            /*goto IL_000e;*/goto IL_0396;                              //br				IL_000e
	IL_0396:            goto IL_06d5;                                               //br				IL_06d5
	IL_039601:          try{
	IL_039b:            goto IL_03f2;                                               //br.s				IL_03f2
	IL_039d:                                                                        //ldloc				V_20
	IL_03a1:            switch(V_20){case 0:goto IL_04e2;case 1:goto IL_045b;case 2:goto IL_0563;case 3:goto IL_0514;case 4:goto IL_0435;case 5:goto IL_0579;case 6:goto IL_0504;case 7:goto IL_05ed;case 8:goto IL_05af;case 9:goto IL_058c;case 10:goto IL_061b;case 11:goto IL_047e;case 12:goto IL_04a4;case 13:goto IL_048e;case 14:goto IL_059f;case 15:goto IL_04bd;case 16:goto IL_0530;case 17:goto IL_05c5;case 18:goto IL_04f2;};//switch				(IL_04e2,IL_045b,IL_0563,IL_0514,IL_0435,IL_0579,IL_0504,IL_05ed,IL_05af,IL_058c,IL_061b,IL_047e,IL_04a4,IL_048e,IL_059f,IL_04bd,IL_0530,IL_05c5,IL_04f2)
	IL_03f2:                                                                        //ldloc.s				V_5
	IL_03f4:                                                                        //ldarg.0
	IL_03f5:                                                                        //ldloc.s				V_4
	IL_03f7:            Temp_43=V_4->ElementType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_03fc:            Temp_44=this->M_x1(Temp_43);                                //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_0401:            V_5->Write(Temp_44);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0406:                                                                        //ldloc.s				V_5
	IL_0408:                                                                        //ldstr				L"\x6B2F"
	IL_040d:                                                                        //ldloc				V_21
	IL_0411:            Temp_45=a(L"\x6B2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0416:            V_5->Write(Temp_45);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_041b:                                                                        //ldloc.s				V_4
	IL_041d:            Temp_46=V_4->Dimensions;                                    //callvirt				Reflector::CodeModel::IArrayDimensionCollection^ Reflector::CodeModel::IArrayType::get_Dimensions()
	IL_0422:            V_6=Temp_46;                                                //stloc.s				V_6
	IL_0424:                                                                        //ldc.i4.0
	IL_0425:            V_7=0;                                                      //stloc.s				V_7
	IL_0427:                                                                        //ldc.i4				0x4
	IL_042c:            V_20=4;                                                     //stloc				V_20
	IL_0430:            /*goto IL_039d;*/goto IL_0435;                              //br				IL_039d
	IL_0435:            goto IL_0506;                                               //br				IL_0506
	IL_043a:                                                                        //ldloc.s				V_5
	IL_043c:                                                                        //ldloca.s				V_8
	IL_043e:            Temp_52=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0443:            Temp_53=V_8.ToString(safe_cast<System::IFormatProvider^>(Temp_52));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0448:            V_5->Write(Temp_53);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_044d:                                                                        //ldc.i4				0x1
	IL_0452:            V_20=1;                                                     //stloc				V_20
	IL_0456:            /*goto IL_039d;*/goto IL_045b;                              //br				IL_039d
	IL_045b:            goto IL_0480;                                               //br.s				IL_0480
	IL_045d:                                                                        //ldloc.s				V_5
	IL_045f:                                                                        //ldloca.s				V_9
	IL_0461:            Temp_58=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0466:            Temp_59=V_9.ToString(safe_cast<System::IFormatProvider^>(Temp_58));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_046b:            V_5->Write(Temp_59);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0470:                                                                        //ldc.i4				0xb
	IL_0475:            V_20=11;                                                    //stloc				V_20
	IL_0479:            /*goto IL_039d;*/goto IL_047e;                              //br				IL_039d
	IL_047e:            goto IL_04a9;                                               //br.s				IL_04a9
	IL_0480:                                                                        //ldc.i4				0xd
	IL_0485:            V_20=13;                                                    //stloc				V_20
	IL_0489:            /*goto IL_039d;*/goto IL_048e;                              //br				IL_039d
	IL_048e:                                                                        //ldloc.s				V_8
	IL_0490:                                                                        //ldc.i4.m1
	IL_0491:            if(V_8!=-1)goto IL_05ca;                                    //bne.un				IL_05ca
	IL_0496:                                                                        //ldc.i4				0xc
	IL_049b:            V_20=12;                                                    //stloc				V_20
	IL_049f:            /*goto IL_039d;*/goto IL_04a4;                              //br				IL_039d
	IL_04a4:            goto IL_057e;                                               //br				IL_057e
	IL_04a9:                                                                        //ldloc.s				V_7
	IL_04ab:                                                                        //ldc.i4.1
	IL_04ac:                                                                        //add
	IL_04ad:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_04af:                                                                        //ldc.i4				0xf
	IL_04b4:            V_20=15;                                                    //stloc				V_20
	IL_04b8:            /*goto IL_039d;*/goto IL_04bd;                              //br				IL_039d
	IL_04bd:            goto IL_0506;                                               //br.s				IL_0506
	IL_04bf:                                                                        //ldloc.s				V_5
	IL_04c1:                                                                        //ldstr				L"\x1C2F"
	IL_04c6:                                                                        //ldloc				V_21
	IL_04ca:            Temp_54=a(L"\x1C2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cf:            V_5->Write(Temp_54);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_04d4:                                                                        //ldc.i4				0x0
	IL_04d9:            V_20=0;                                                     //stloc				V_20
	IL_04dd:            /*goto IL_039d;*/goto IL_04e2;                              //br				IL_039d
	IL_04e2:            goto IL_0535;                                               //br.s				IL_0535
	IL_04e4:                                                                        //ldc.i4				0x12
	IL_04e9:            V_20=18;                                                    //stloc				V_20
	IL_04ed:            /*goto IL_039d;*/goto IL_04f2;                              //br				IL_039d
	IL_04f2:                                                                        //ldloc.s				V_7
	IL_04f4:            if(V_7==0)goto IL_0535;                                     //brfalse.s				IL_0535
	IL_04f6:                                                                        //ldc.i4				0x6
	IL_04fb:            V_20=6;                                                     //stloc				V_20
	IL_04ff:            /*goto IL_039d;*/goto IL_0504;                              //br				IL_039d
	IL_0504:            goto IL_04bf;                                               //br.s				IL_04bf
	IL_0506:                                                                        //ldc.i4				0x3
	IL_050b:            V_20=3;                                                     //stloc				V_20
	IL_050f:            /*goto IL_039d;*/goto IL_0514;                              //br				IL_039d
	IL_0514:                                                                        //ldloc.s				V_7
	IL_0516:                                                                        //ldloc.s				V_6
	IL_0518:            Temp_51=safe_cast<System::Collections::ICollection^>(V_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_051d:            if(V_7<Temp_51)goto IL_04e4;                                //blt				IL_04e4
	IL_0522:                                                                        //ldc.i4				0x10
	IL_0527:            V_20=16;                                                    //stloc				V_20
	IL_052b:            /*goto IL_039d;*/goto IL_0530;                              //br				IL_039d
	IL_0530:            goto IL_05ef;                                               //br				IL_05ef
	IL_0535:                                                                        //ldloc.s				V_6
	IL_0537:                                                                        //ldloc.s				V_7
	IL_0539:            Temp_47=V_6[V_7];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_053e:            Temp_48=Temp_47->LowerBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_LowerBound()
	IL_0543:            V_8=Temp_48;                                                //stloc.s				V_8
	IL_0545:                                                                        //ldloc.s				V_6
	IL_0547:                                                                        //ldloc.s				V_7
	IL_0549:            Temp_49=V_6[V_7];                                           //callvirt				Reflector::CodeModel::IArrayDimension^ Reflector::CodeModel::IArrayDimensionCollection::get_Item(System::Int32)
	IL_054e:            Temp_50=Temp_49->UpperBound;                                //callvirt				System::Int32 Reflector::CodeModel::IArrayDimension::get_UpperBound()
	IL_0553:            V_9=Temp_50;                                                //stloc.s				V_9
	IL_0555:                                                                        //ldc.i4				0x2
	IL_055a:            V_20=2;                                                     //stloc				V_20
	IL_055e:            /*goto IL_039d;*/goto IL_0563;                              //br				IL_039d
	IL_0563:                                                                        //ldloc.s				V_8
	IL_0565:                                                                        //ldc.i4.m1
	IL_0566:            if(V_8==-1)goto IL_0480;                                    //beq				IL_0480
	IL_056b:                                                                        //ldc.i4				0x5
	IL_0570:            V_20=5;                                                     //stloc				V_20
	IL_0574:            /*goto IL_039d;*/goto IL_0579;                              //br				IL_039d
	IL_0579:            goto IL_043a;                                               //br				IL_043a
	IL_057e:                                                                        //ldc.i4				0x9
	IL_0583:            V_20=9;                                                     //stloc				V_20
	IL_0587:            /*goto IL_039d;*/goto IL_058c;                              //br				IL_039d
	IL_058c:                                                                        //ldloc.s				V_9
	IL_058e:                                                                        //ldc.i4.m1
	IL_058f:            if(V_9==-1)goto IL_05a1;                                    //beq.s				IL_05a1
	IL_0591:                                                                        //ldc.i4				0xe
	IL_0596:            V_20=14;                                                    //stloc				V_20
	IL_059a:            /*goto IL_039d;*/goto IL_059f;                              //br				IL_039d
	IL_059f:            goto IL_05ca;                                               //br.s				IL_05ca
	IL_05a1:                                                                        //ldc.i4				0x8
	IL_05a6:            V_20=8;                                                     //stloc				V_20
	IL_05aa:            /*goto IL_039d;*/goto IL_05af;                              //br				IL_039d
	IL_05af:                                                                        //ldloc.s				V_9
	IL_05b1:                                                                        //ldc.i4.m1
	IL_05b2:            if(V_9==-1)goto IL_04a9;                                    //beq				IL_04a9
	IL_05b7:                                                                        //ldc.i4				0x11
	IL_05bc:            V_20=17;                                                    //stloc				V_20
	IL_05c0:            /*goto IL_039d;*/goto IL_05c5;                              //br				IL_039d
	IL_05c5:            goto IL_045d;                                               //br				IL_045d
	IL_05ca:                                                                        //ldloc.s				V_5
	IL_05cc:                                                                        //ldstr				L"\x0A2F"
	IL_05d1:                                                                        //ldloc				V_21
	IL_05d5:            Temp_55=a(L"\x0A2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05da:            V_5->Write(Temp_55);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_05df:                                                                        //ldc.i4				0x7
	IL_05e4:            V_20=7;                                                     //stloc				V_20
	IL_05e8:            /*goto IL_039d;*/goto IL_05ed;                              //br				IL_039d
	IL_05ed:            goto IL_05a1;                                               //br.s				IL_05a1
	IL_05ef:                                                                        //ldloc.s				V_5
	IL_05f1:                                                                        //ldstr				L"\x6D2F"
	IL_05f6:                                                                        //ldloc				V_21
	IL_05fa:            Temp_56=a(L"\x6D2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05ff:            V_5->Write(Temp_56);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0604:                                                                        //ldloc.s				V_5
	IL_0606:            Temp_57=V_5->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_060b:            V_18=Temp_57;                                               //stloc.s				V_18
	IL_060d:                                                                        //ldc.i4				0xa
	IL_0612:            V_20=10;                                                    //stloc				V_20
	IL_0616:            /*goto IL_039d;*/goto IL_061b;                              //br				IL_039d
	IL_061b:            goto IL_07bf;                                               //leave				IL_07bf
	                    ;}
	                    finally{
	IL_0620:                                                                        //ldc.i4				0x2
	IL_0625:            V_20=2;                                                     //stloc				V_20
	IL_0629:            /*goto IL_062d;*/goto IL_062b;                              //br.s				IL_062d
	IL_062b:            goto IL_0642;                                               //br.s				IL_0642
	IL_062d:                                                                        //ldloc				V_20
	IL_0631:            switch(V_20){case 0:goto IL_0665;case 1:goto IL_0651;case 2:goto IL_062b;};//switch				(IL_0665,IL_0651,IL_062b)
	IL_0642:                                                                        //ldloc.s				V_5
	IL_0644:            if(V_5==nullptr)goto IL_0667;                               //brfalse.s				IL_0667
	IL_0646:                                                                        //ldc.i4				0x1
	IL_064b:            V_20=1;                                                     //stloc				V_20
	IL_064f:            /*goto IL_062d;*/goto IL_0651;                              //br.s				IL_062d
	IL_0651:            goto IL_0653;                                               //br.s				IL_0653
	IL_0653:                                                                        //ldloc.s				V_5
	IL_0655:            /*safe_cast<System::IDisposable^>(V_5)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_065a:                                                                        //ldc.i4				0x0
	IL_065f:            V_20=0;                                                     //stloc				V_20
	IL_0663:            /*goto IL_062d;*/goto IL_0665;                              //br.s				IL_062d
	IL_0665:            goto IL_0667;                                               //br.s				IL_0667
	IL_0667:                                                                        //endfinally
	                    ;}
	IL_0668:                                                                        //ldarg.1
	IL_0669:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_066e:            V_12=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.s				V_12
	IL_0670:                                                                        //ldc.i4				0xd
	IL_0675:            V_20=13;                                                    //stloc				V_20
	IL_0679:            /*goto IL_000e;*/goto IL_067e;                              //br				IL_000e
	IL_067e:                                                                        //ldloc.s				V_12
	IL_0680:            if(V_12==nullptr)goto IL_018a;                              //brfalse				IL_018a
	IL_0685:                                                                        //ldc.i4				0x14
	IL_068a:            V_20=20;                                                    //stloc				V_20
	IL_068e:            /*goto IL_000e;*/goto IL_0693;                              //br				IL_000e
	IL_0693:            goto IL_0767;                                               //br				IL_0767
	IL_0698:                                                                        //ldloc.3
	IL_0699:                                                                        //ldstr				L"\x1E2F"
	IL_069e:                                                                        //ldloc				V_21
	IL_06a2:            Temp_28=a(L"\x1E2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06a7:                                                                        //ldloc.1
	IL_06a8:            Temp_29=System::String::Concat(V_3,Temp_28,V_1);            //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_06ad:            return Temp_29;                                             //ret
	IL_06ae:                                                                        //ldc.i4				0x10
	IL_06b3:            V_20=16;                                                    //stloc				V_20
	IL_06b7:            /*goto IL_000e;*/goto IL_06bc;                              //br				IL_000e
	IL_06bc:                                                                        //ldloc.2
	IL_06bd:            if(V_2==0)goto IL_0306;                                     //brfalse				IL_0306
	IL_06c2:                                                                        //ldc.i4				0xc
	IL_06c7:            V_20=12;                                                    //stloc				V_20
	IL_06cb:            /*goto IL_000e;*/goto IL_06d0;                              //br				IL_000e
	IL_06d0:            goto IL_0162;                                               //br				IL_0162
	IL_06d5:                                                                        //ldloc.s				V_14
	IL_06d7:            Temp_30=V_14->Name;                                         //callvirt				System::String^ Reflector::CodeModel::IGenericParameter::get_Name()
	IL_06dc:            return Temp_30;                                             //ret
	IL_06dd:                                                                        //ldarg.1
	IL_06de:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_06e3:            V_4=dynamic_cast<Reflector::CodeModel::IArrayType^>(A_0);   //stloc.s				V_4
	IL_06e5:                                                                        //ldc.i4				0x2
	IL_06ea:            V_20=2;                                                     //stloc				V_20
	IL_06ee:            /*goto IL_000e;*/goto IL_06f3;                              //br				IL_000e
	IL_06f3:                                                                        //ldloc.s				V_4
	IL_06f5:            if(V_4==nullptr)goto IL_070d;                               //brfalse				IL_070d
	IL_06fa:                                                                        //ldc.i4				0x8
	IL_06ff:            V_20=8;                                                     //stloc				V_20
	IL_0703:            /*goto IL_000e;*/goto IL_0708;                              //br				IL_000e
	IL_0708:            goto IL_027d;                                               //br				IL_027d
	IL_070d:                                                                        //ldarg.1
	IL_070e:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_0713:            V_10=dynamic_cast<Reflector::CodeModel::IReferenceType^>(A_0);//stloc.s				V_10
	IL_0715:                                                                        //ldc.i4				0x1b
	IL_071a:            V_20=27;                                                    //stloc				V_20
	IL_071e:            /*goto IL_000e;*/goto IL_0723;                              //br				IL_000e
	IL_0723:                                                                        //ldloc.s				V_10
	IL_0725:            if(V_10==nullptr)goto IL_00d7;                              //brfalse				IL_00d7
	IL_072a:                                                                        //ldc.i4				0x3
	IL_072f:            V_20=3;                                                     //stloc				V_20
	IL_0733:            /*goto IL_000e;*/goto IL_0738;                              //br				IL_000e
	IL_0738:            goto IL_01f0;                                               //br				IL_01f0
	IL_073d:                                                                        //ldloc.1
	IL_073e:                                                                        //ldstr				L"\x4B2F"
	IL_0743:                                                                        //ldloc				V_21
	IL_0747:            Temp_9=a(L"\x4B2F",V_21);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_074c:            Temp_10=System::String::Concat(V_1,Temp_9);                 //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0751:            V_1=Temp_10;                                                //stloc.1
	IL_0752:                                                                        //ldc.i4.0
	IL_0753:            V_2=0;                                                      //stloc.2
	IL_0754:                                                                        //ldc.i4				0x17
	IL_0759:            V_20=23;                                                    //stloc				V_20
	IL_075d:            /*goto IL_000e;*/goto IL_0762;                              //br				IL_000e
	IL_0762:            goto IL_02d4;                                               //br				IL_02d4
	IL_0767:                                                                        //ldarg.0
	IL_0768:                                                                        //ldloc.s				V_12
	IL_076a:            Temp_36=V_12->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_076f:            Temp_37=this->M_x1(Temp_36);                                //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_0774:            return Temp_37;                                             //ret
	IL_0775:                                                                        //ldarg.0
	IL_0776:                                                                        //ldloc.s				V_11
	IL_0778:            Temp_31=V_11->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_077d:            Temp_32=this->M_x1(Temp_31);                                //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::IType^)
	IL_0782:                                                                        //ldstr				L"\x1A2F"
	IL_0787:                                                                        //ldloc				V_21
	IL_078b:            Temp_33=a(L"\x1A2F",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0790:            Temp_34=System::String::Concat(Temp_32,Temp_33);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0795:            return Temp_34;                                             //ret
	IL_0796:                                                                        //ldstr				L"\x502F\x5231"
	IL_079b:                                                                        //ldloc				V_21
	IL_079f:            Temp_11=a(L"\x502F\x5231",V_21);                            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07a4:                                                                        //ldloc.s				V_15
	IL_07a6:            Temp_12=V_15->Position;                                     //callvirt				System::Int32 Reflector::CodeModel::IGenericArgument::get_Position()
	IL_07ab:            V_19=Temp_12;                                               //stloc.s				V_19
	IL_07ad:                                                                        //ldloca.s				V_19
	IL_07af:            Temp_13=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_07b4:            Temp_14=V_19.ToString(safe_cast<System::IFormatProvider^>(Temp_13));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_07b9:            Temp_15=System::String::Concat(Temp_11,Temp_14);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_07be:            return Temp_15;                                             //ret
	IL_07bf:                                                                        //ldloc.s				V_18
	IL_07c1:            return V_18;                                                //ret

}
inline System::String^ Root::T_x111::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_009e;case 1:goto IL_004d;case 2:goto IL_003f;case 3:goto IL_0087;case 4:goto IL_00b5;};//switch				(IL_009e,IL_004d,IL_003f,IL_0087,IL_00b5)
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_002e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0033:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_2=2;                                                      //stloc				V_2
	IL_003d:            /*goto IL_000b;*/goto IL_003f;                              //br.s				IL_000b
	IL_003f:                                                                        //ldloc.0
	IL_0040:            if(V_0==nullptr)goto IL_00b7;                               //brfalse.s				IL_00b7
	IL_0042:                                                                        //ldc.i4				0x1
	IL_0047:            V_2=1;                                                      //stloc				V_2
	IL_004b:            /*goto IL_000b;*/goto IL_004d;                              //br.s				IL_000b
	IL_004d:            goto IL_0089;                                               //br.s				IL_0089
	IL_004f:                                                                        //ldloc.1
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_2=Root::T_x111::M_x2(V_0);                             //call				System::String^ Root::T_x111::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0056:            Temp_3=System::String::Concat(V_1,Temp_2);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_005b:            return Temp_3;                                              //ret
	IL_005c:                                                                        //ldc.i4.2
	IL_005d:                                                                        //dup
	IL_005e:                                                                        //dup
	IL_005f:                                                                        //ldc.i4.7
	IL_0060:                                                                        //add
	IL_0061:                                                                        //bgt				IL_005d
	IL_0066:                                                                        //pop
	IL_0067:                                                                        //ldloc.1
	IL_0068:                                                                        //ldstr				L"\x0B24"
	IL_006d:                                                                        //ldloc				V_3
	IL_0071:            Temp_6=a(L"\x0B24",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0076:            Temp_7=System::String::Concat(V_1,Temp_6);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_007b:            V_1=Temp_7;                                                 //stloc.1
	IL_007c:                                                                        //ldc.i4				0x3
	IL_0081:            V_2=3;                                                      //stloc				V_2
	IL_0085:            /*goto IL_000b;*/goto IL_0087;                              //br.s				IL_000b
	IL_0087:            goto IL_004f;                                               //br.s				IL_004f
	IL_0089:                                                                        //ldloc.0
	IL_008a:            Temp_4=Root::T_x111::M_x1(V_0);                             //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_008f:            V_1=Temp_4;                                                 //stloc.1
	IL_0090:                                                                        //ldc.i4				0x0
	IL_0095:            V_2=0;                                                      //stloc				V_2
	IL_0099:            /*goto IL_000b;*/goto IL_009e;                              //br				IL_000b
	IL_009e:                                                                        //ldloc.1
	IL_009f:            Temp_1=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            if(Temp_1<=0)goto IL_004f;                                  //ble.s				IL_004f
	IL_00a7:                                                                        //ldc.i4				0x4
	IL_00ac:            V_2=4;                                                      //stloc				V_2
	IL_00b0:            /*goto IL_000b;*/goto IL_00b5;                              //br				IL_000b
	IL_00b5:            goto IL_005c;                                               //br.s				IL_005c
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:            Temp_5=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00bd:            return Temp_5;                                              //ret

}
inline System::String^ Root::T_x111::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::String^>^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
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
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	array<System::String^>^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::Globalization::CultureInfo^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	array<System::Object^>^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::NotSupportedException^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Int32 Temp_45 = 0;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::Boolean Temp_48 = false;
	System::String^ Temp_49 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	array<System::String^>^ V_2 = nullptr;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_5=10;                                                     //stloc				V_5
	IL_0009:                                                                        //ldc.i4				0x12
	IL_000e:            V_4=18;                                                     //stloc				V_4
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_006f;                                               //br.s				IL_006f
	IL_0016:                                                                        //ldloc				V_4
	IL_001a:            switch(V_4){case 0:goto IL_0201;case 1:goto IL_00e3;case 2:goto IL_0236;case 3:goto IL_0115;case 4:goto IL_009b;case 5:goto IL_0105;case 6:goto IL_018e;case 7:goto IL_015f;case 8:goto IL_02ba;case 9:goto IL_00d0;case 10:goto IL_016f;case 11:goto IL_035b;case 12:goto IL_037d;case 13:goto IL_00ae;case 14:goto IL_0348;case 15:goto IL_032d;case 16:goto IL_0140;case 17:goto IL_0223;case 18:goto IL_0014;case 19:goto IL_02a6;};//switch				(IL_0201,IL_00e3,IL_0236,IL_0115,IL_009b,IL_0105,IL_018e,IL_015f,IL_02ba,IL_00d0,IL_016f,IL_035b,IL_037d,IL_00ae,IL_0348,IL_032d,IL_0140,IL_0223,IL_0014,IL_02a6)
	IL_006f:                                                                        //ldarg.0
	IL_0070:            Temp_46=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_0075:                                                                        //ldstr				L"\x6627\x1029"
	IL_007a:                                                                        //ldloc				V_5
	IL_007e:            Temp_47=a(L"\x6627\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            Temp_48=(Temp_46 == Temp_47);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0088:            if(!Temp_48)goto IL_0132;                                   //brfalse				IL_0132
	IL_008d:                                                                        //ldc.i4				0x4
	IL_0092:            V_4=4;                                                      //stloc				V_4
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:            goto IL_0302;                                               //br				IL_0302
	IL_00a0:                                                                        //ldc.i4				0xd
	IL_00a5:            V_4=13;                                                     //stloc				V_4
	IL_00a9:            /*goto IL_0016;*/goto IL_00ae;                              //br				IL_0016
	IL_00ae:                                                                        //ldloc.1
	IL_00af:                                                                        //ldstr				L"\x7827\x1029"
	IL_00b4:                                                                        //ldloc				V_5
	IL_00b8:            Temp_35=a(L"\x7827\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bd:            if(V_1==Temp_35)goto IL_0193;                               //beq				IL_0193
	IL_00c2:                                                                        //ldc.i4				0x9
	IL_00c7:            V_4=9;                                                      //stloc				V_4
	IL_00cb:            /*goto IL_0016;*/goto IL_00d0;                              //br				IL_0016
	IL_00d0:            goto IL_0298;                                               //br				IL_0298
	IL_00d5:                                                                        //ldc.i4				0x1
	IL_00da:            V_4=1;                                                      //stloc				V_4
	IL_00de:            /*goto IL_0016;*/goto IL_00e3;                              //br				IL_0016
	IL_00e3:                                                                        //ldloc.1
	IL_00e4:                                                                        //ldstr				L"\x6E27\x1029"
	IL_00e9:                                                                        //ldloc				V_5
	IL_00ed:            Temp_4=a(L"\x6E27\x1029",V_5);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f2:            if(V_1==Temp_4)goto IL_0251;                                //beq				IL_0251
	IL_00f7:                                                                        //ldc.i4				0x5
	IL_00fc:            V_4=5;                                                      //stloc				V_4
	IL_0100:            /*goto IL_0016;*/goto IL_0105;                              //br				IL_0016
	IL_0105:            goto IL_0161;                                               //br.s				IL_0161
	IL_0107:                                                                        //ldc.i4				0x3
	IL_010c:            V_4=3;                                                      //stloc				V_4
	IL_0110:            /*goto IL_0016;*/goto IL_0115;                              //br				IL_0016
	IL_0115:            Temp_15=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_011a:            Temp_49=Temp_15;goto IL_02ab;                               //br				IL_02ab
	IL_011f:                                                                        //ldarg.0
	IL_0120:            Temp_1=this->F_x1;                                          //ldfld				System::String^ Root::T_x111 F_x1
	IL_0125:                                                                        //ldloc.0
	IL_0126:                                                                        //ldarg.0
	IL_0127:            Temp_2=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_012c:            Temp_3=System::String::Concat(Temp_1,V_0,Temp_2);           //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0131:            return Temp_3;                                              //ret
	IL_0132:                                                                        //ldc.i4				0x10
	IL_0137:            V_4=16;                                                     //stloc				V_4
	IL_013b:            /*goto IL_0016;*/goto IL_0140;                              //br				IL_0016
	IL_0140:                                                                        //ldarg.0
	IL_0141:            Temp_44=this->F_x2;                                         //ldfld				System::String^ Root::T_x111 F_x2
	IL_0146:            Temp_45=Temp_44->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_014b:                                                                        //ldc.i4.0
	IL_014c:            if(Temp_45>0)goto IL_0228;                                  //bgt				IL_0228
	IL_0151:                                                                        //ldc.i4				0x7
	IL_0156:            V_4=7;                                                      //stloc				V_4
	IL_015a:            /*goto IL_0016;*/goto IL_015f;                              //br				IL_0016
	IL_015f:            goto IL_0107;                                               //br.s				IL_0107
	IL_0161:                                                                        //ldc.i4				0xa
	IL_0166:            V_4=10;                                                     //stloc				V_4
	IL_016a:            /*goto IL_0016;*/goto IL_016f;                              //br				IL_0016
	IL_016f:                                                                        //ldloc.1
	IL_0170:                                                                        //ldstr				L"\x6527\x1029"
	IL_0175:                                                                        //ldloc				V_5
	IL_0179:            Temp_24=a(L"\x6527\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017e:            if(V_1==Temp_24)goto IL_0193;                               //beq.s				IL_0193
	IL_0180:                                                                        //ldc.i4				0x6
	IL_0185:            V_4=6;                                                      //stloc				V_4
	IL_0189:            /*goto IL_0016;*/goto IL_018e;                              //br				IL_0016
	IL_018e:            goto IL_00a0;                                               //br				IL_00a0
	IL_0193:                                                                        //ldc.i4.6
	IL_0194:            Temp_25=gcnew array<System::String^>(6);                    //newarr				System::String
	IL_0199:            V_2=Temp_25;                                                //stloc.2
	IL_019a:                                                                        //ldloc.2
	IL_019b:                                                                        //ldc.i4.0
	IL_019c:                                                                        //ldarg.0
	IL_019d:            Temp_26=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_01a2:            V_2[0]=Temp_26;                                             //stelem.ref
	IL_01a3:                                                                        //ldloc.2
	IL_01a4:                                                                        //ldc.i4.1
	IL_01a5:                                                                        //ldloc.0
	IL_01a6:            V_2[1]=V_0;                                                 //stelem.ref
	IL_01a7:                                                                        //ldloc.2
	IL_01a8:                                                                        //ldc.i4.2
	IL_01a9:                                                                        //ldarg.0
	IL_01aa:            Temp_27=this->F_x12;                                        //ldfld				System::String^ Root::T_x111 F_x12
	IL_01af:            V_2[2]=Temp_27;                                             //stelem.ref
	IL_01b0:                                                                        //ldloc.2
	IL_01b1:                                                                        //ldc.i4.3
	IL_01b2:                                                                        //ldstr				L"\x0627"
	IL_01b7:                                                                        //ldloc				V_5
	IL_01bb:            Temp_28=a(L"\x0627",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c0:            V_2[3]=Temp_28;                                             //stelem.ref
	IL_01c1:                                                                        //ldloc.2
	IL_01c2:                                                                        //ldc.i4.4
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_29=this->F_x13;                                        //ldfld				System::String^ Root::T_x111 F_x13
	IL_01c9:                                                                        //ldc.i4.s				46
	IL_01cb:                                                                        //ldc.i4.s				35
	IL_01cd:            Temp_30=Temp_29->Replace(safe_cast<System::Char>((System::Char)46),safe_cast<System::Char>((System::Char)35));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_01d2:            V_2[4]=Temp_30;                                             //stelem.ref
	IL_01d3:                                                                        //ldloc.2
	IL_01d4:                                                                        //ldc.i4.5
	IL_01d5:                                                                        //ldarg.0
	IL_01d6:            Temp_31=this->F_x8;                                         //ldfld				System::String^ Root::T_x111 F_x8
	IL_01db:                                                                        //ldc.i4.s				38
	IL_01dd:                                                                        //ldc.i4.s				64
	IL_01df:            Temp_32=Temp_31->Replace(safe_cast<System::Char>((System::Char)38),safe_cast<System::Char>((System::Char)64));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_01e4:            V_2[5]=Temp_32;                                             //stelem.ref
	IL_01e5:                                                                        //ldloc.2
	IL_01e6:            Temp_33=System::String::Concat(V_2);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_01eb:            return Temp_33;                                             //ret
	IL_01ec:                                                                        //ldloc.1
	IL_01ed:            Temp_36=System::String::IsInterned(V_1);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_01f2:            V_1=Temp_36;                                                //stloc.1
	IL_01f3:                                                                        //ldc.i4				0x0
	IL_01f8:            V_4=0;                                                      //stloc				V_4
	IL_01fc:            /*goto IL_0016;*/goto IL_0201;                              //br				IL_0016
	IL_0201:                                                                        //ldloc.1
	IL_0202:                                                                        //ldstr				L"\x7C27\x1029"
	IL_0207:                                                                        //ldloc				V_5
	IL_020b:            Temp_0=a(L"\x7C27\x1029",V_5);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0210:            if(V_1==Temp_0)goto IL_011f;                                //beq				IL_011f
	IL_0215:                                                                        //ldc.i4				0x11
	IL_021a:            V_4=17;                                                     //stloc				V_4
	IL_021e:            /*goto IL_0016;*/goto IL_0223;                              //br				IL_0016
	IL_0223:            goto IL_034d;                                               //br				IL_034d
	IL_0228:                                                                        //ldc.i4				0x2
	IL_022d:            V_4=2;                                                      //stloc				V_4
	IL_0231:            /*goto IL_0016;*/goto IL_0236;                              //br				IL_0016
	IL_0236:                                                                        //ldarg.0
	IL_0237:            Temp_12=this->F_x2;                                         //ldfld				System::String^ Root::T_x111 F_x2
	IL_023c:                                                                        //ldstr				L"\x0627"
	IL_0241:                                                                        //ldloc				V_5
	IL_0245:            Temp_13=a(L"\x0627",V_5);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024a:            Temp_14=System::String::Concat(Temp_12,Temp_13);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_024f:            Temp_49=Temp_14;goto IL_02ab;                               //br.s				IL_02ab
	IL_0251:                                                                        //ldc.i4.5
	IL_0252:            Temp_5=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0257:            V_2=Temp_5;                                                 //stloc.2
	IL_0258:                                                                        //ldloc.2
	IL_0259:                                                                        //ldc.i4.0
	IL_025a:                                                                        //ldarg.0
	IL_025b:            Temp_6=this->F_x1;                                          //ldfld				System::String^ Root::T_x111 F_x1
	IL_0260:            V_2[0]=Temp_6;                                              //stelem.ref
	IL_0261:                                                                        //ldloc.2
	IL_0262:                                                                        //ldc.i4.1
	IL_0263:                                                                        //ldloc.0
	IL_0264:            V_2[1]=V_0;                                                 //stelem.ref
	IL_0265:                                                                        //ldloc.2
	IL_0266:                                                                        //ldc.i4.2
	IL_0267:                                                                        //ldarg.0
	IL_0268:            Temp_7=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_026d:            V_2[2]=Temp_7;                                              //stelem.ref
	IL_026e:                                                                        //ldloc.2
	IL_026f:                                                                        //ldc.i4.3
	IL_0270:                                                                        //ldstr				L"\x0627"
	IL_0275:                                                                        //ldloc				V_5
	IL_0279:            Temp_8=a(L"\x0627",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027e:            V_2[3]=Temp_8;                                              //stelem.ref
	IL_027f:                                                                        //ldloc.2
	IL_0280:                                                                        //ldc.i4.4
	IL_0281:                                                                        //ldarg.0
	IL_0282:            Temp_9=this->F_x13;                                         //ldfld				System::String^ Root::T_x111 F_x13
	IL_0287:                                                                        //ldc.i4.s				46
	IL_0289:                                                                        //ldc.i4.s				35
	IL_028b:            Temp_10=Temp_9->Replace(safe_cast<System::Char>((System::Char)46),safe_cast<System::Char>((System::Char)35));//callvirt				System::String^ System::String::Replace(System::Char,System::Char)
	IL_0290:            V_2[4]=Temp_10;                                             //stelem.ref
	IL_0291:                                                                        //ldloc.2
	IL_0292:            Temp_11=System::String::Concat(V_2);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0297:            return Temp_11;                                             //ret
	IL_0298:                                                                        //ldc.i4				0x13
	IL_029d:            V_4=19;                                                     //stloc				V_4
	IL_02a1:            /*goto IL_0016;*/goto IL_02a6;                              //br				IL_0016
	IL_02a6:            goto IL_0382;                                               //br				IL_0382
	IL_02ab:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.0
	IL_02ac:                                                                        //ldc.i4				0x8
	IL_02b1:            V_4=8;                                                      //stloc				V_4
	IL_02b5:            /*goto IL_0016;*/goto IL_02ba;                              //br				IL_0016
	IL_02ba:                                                                        //ldstr				L"\x7C27\x1029"
	IL_02bf:                                                                        //ldloc				V_5
	IL_02c3:            Temp_19=a(L"\x7C27\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c8:                                                                        //ldstr				L"\x6D27\x1029"
	IL_02cd:                                                                        //ldloc				V_5
	IL_02d1:            Temp_20=a(L"\x6D27\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d6:                                                                        //ldstr				L"\x6E27\x1029"
	IL_02db:                                                                        //ldloc				V_5
	IL_02df:            Temp_21=a(L"\x6E27\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e4:                                                                        //ldstr				L"\x6527\x1029"
	IL_02e9:                                                                        //ldloc				V_5
	IL_02ed:            Temp_22=a(L"\x6527\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f2:                                                                        //ldstr				L"\x7827\x1029"
	IL_02f7:                                                                        //ldloc				V_5
	IL_02fb:            Temp_23=a(L"\x7827\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0300:            goto IL_0314;                                               //leave.s				IL_0314
	IL_0302:                                                                        //ldarg.0
	IL_0303:            Temp_16=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_0308:                                                                        //ldarg.0
	IL_0309:            Temp_17=this->F_x2;                                         //ldfld				System::String^ Root::T_x111 F_x2
	IL_030e:            Temp_18=System::String::Concat(Temp_16,Temp_17);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0313:            return Temp_18;                                             //ret
	IL_0314:                                                                        //ldc.i4.4
	IL_0315:                                                                        //dup
	IL_0316:                                                                        //dup
	IL_0317:                                                                        //ldc.i4.2
	IL_0318:                                                                        //sub
	IL_0319:                                                                        //blt				IL_0315
	IL_031e:                                                                        //pop
	IL_031f:                                                                        //ldc.i4				0xf
	IL_0324:            V_4=15;                                                     //stloc				V_4
	IL_0328:            /*goto IL_0016;*/goto IL_032d;                              //br				IL_0016
	IL_032d:                                                                        //ldarg.0
	IL_032e:            Temp_37=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_0333:                                                                        //dup
	IL_0334:            V_1=Temp_37;                                                //stloc.1
	IL_0335:            if(V_1==nullptr)goto IL_0382;                               //brfalse				IL_0382
	IL_033a:                                                                        //ldc.i4				0xe
	IL_033f:            V_4=14;                                                     //stloc				V_4
	IL_0343:            /*goto IL_0016;*/goto IL_0348;                              //br				IL_0016
	IL_0348:            goto IL_01ec;                                               //br				IL_01ec
	IL_034d:                                                                        //ldc.i4				0xb
	IL_0352:            V_4=11;                                                     //stloc				V_4
	IL_0356:            /*goto IL_0016;*/goto IL_035b;                              //br				IL_0016
	IL_035b:                                                                        //ldloc.1
	IL_035c:                                                                        //ldstr				L"\x6D27\x1029"
	IL_0361:                                                                        //ldloc				V_5
	IL_0365:            Temp_34=a(L"\x6D27\x1029",V_5);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_036a:            if(V_1==Temp_34)goto IL_0251;                               //beq				IL_0251
	IL_036f:                                                                        //ldc.i4				0xc
	IL_0374:            V_4=12;                                                     //stloc				V_4
	IL_0378:            /*goto IL_0016;*/goto IL_037d;                              //br				IL_0016
	IL_037d:            goto IL_00d5;                                               //br				IL_00d5
	IL_0382:            Temp_38=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0387:                                                                        //ldstr				L"\x7827\x5829\x492B\x482D\x592F\x4A31\x1433\x1135\x4337\x0A39\x413B\x193D\x603F\x2C41\x2B43\x3245\x6847\x3949\x394B\x3E4D\x204F\x3D51\x2653\x2255\x3D57\x3E59\x725B"
	IL_038c:                                                                        //ldloc				V_5
	IL_0390:            Temp_39=a(L"\x7827\x5829\x492B\x482D\x592F\x4A31\x1433\x1135\x4337\x0A39\x413B\x193D\x603F\x2C41\x2B43\x3245\x6847\x3949\x394B\x3E4D\x204F\x3D51\x2653\x2255\x3D57\x3E59\x725B",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0395:                                                                        //ldc.i4.1
	IL_0396:            Temp_40=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_039b:            V_3=Temp_40;                                                //stloc.3
	IL_039c:                                                                        //ldloc.3
	IL_039d:                                                                        //ldc.i4.0
	IL_039e:                                                                        //ldarg.0
	IL_039f:            Temp_41=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_03a4:            V_3[0]=safe_cast<System::Object^>(Temp_41);                 //stelem.ref
	IL_03a5:                                                                        //ldloc.3
	IL_03a6:            Temp_42=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_38),Temp_39,V_3);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_03ab:            Temp_43=gcnew System::NotSupportedException(Temp_42);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_03b0:            throw Temp_43;                                              //throw

}
inline void Root::T_x111::M_x12(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=Root::T_x111::M_x1(A_0);                             //call				System::String^ Root::T_x111::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0007:            this->F_x2=Temp_0;                                          //stfld				System::String^ Root::T_x111 F_x2
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            Temp_1=Root::T_x111::M_x2(A_0);                             //call				System::String^ Root::T_x111::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0013:            this->F_x12=Temp_1;                                         //stfld				System::String^ Root::T_x111 F_x12
	IL_0018:            return;                                                     //ret

}
inline System::String^ Root::T_x111::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::NotSupportedException^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
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
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_2=8;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005f;                                               //br.s				IL_005f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_01b0;case 2:goto IL_0217;case 3:goto IL_0191;case 4:goto IL_00ff;case 5:goto IL_0177;case 6:goto IL_01f5;case 7:goto IL_00ef;case 8:goto IL_024c;case 9:goto IL_0167;case 10:goto IL_0124;case 11:goto IL_022a;case 12:goto IL_01db;case 13:goto IL_0145;case 14:goto IL_00cd;case 15:goto IL_01c0;};//switch				(IL_0014,IL_01b0,IL_0217,IL_0191,IL_00ff,IL_0177,IL_01f5,IL_00ef,IL_024c,IL_0167,IL_0124,IL_022a,IL_01db,IL_0145,IL_00cd,IL_01c0)
	IL_005f:                                                                        //ldstr				L"\x6825\x1227"
	IL_0064:                                                                        //ldloc				V_2
	IL_0068:            Temp_13=a(L"\x6825\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:                                                                        //ldstr				L"\x7225\x1227"
	IL_0072:                                                                        //ldloc				V_2
	IL_0076:            Temp_14=a(L"\x7225\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007b:                                                                        //ldstr				L"\x6B25\x1227"
	IL_0080:                                                                        //ldloc				V_2
	IL_0084:            Temp_15=a(L"\x6B25\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:                                                                        //ldstr				L"\x7625\x1227"
	IL_008e:                                                                        //ldloc				V_2
	IL_0092:            Temp_16=a(L"\x7625\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0097:                                                                        //ldstr				L"\x6325\x1227"
	IL_009c:                                                                        //ldloc				V_2
	IL_00a0:            Temp_17=a(L"\x6325\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a5:                                                                        //ldstr				L"\x6025\x1227"
	IL_00aa:                                                                        //ldloc				V_2
	IL_00ae:            Temp_18=a(L"\x6025\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:            goto IL_01b2;                                               //leave				IL_01b2
	IL_00b8:                                                                        //ldarg.0
	IL_00b9:            Temp_10=this->F_x2;                                         //ldfld				System::String^ Root::T_x111 F_x2
	IL_00be:            return Temp_10;                                             //ret
	IL_00bf:                                                                        //ldc.i4				0xe
	IL_00c4:            V_1=14;                                                     //stloc				V_1
	IL_00c8:            /*goto IL_0016;*/goto IL_00cd;                              //br				IL_0016
	IL_00cd:                                                                        //ldloc.0
	IL_00ce:                                                                        //ldstr				L"\x6025\x1227"
	IL_00d3:                                                                        //ldloc				V_2
	IL_00d7:            Temp_11=a(L"\x6025\x1227",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dc:            if(V_0==Temp_11)goto IL_017c;                               //beq				IL_017c
	IL_00e1:                                                                        //ldc.i4				0x7
	IL_00e6:            V_1=7;                                                      //stloc				V_1
	IL_00ea:            /*goto IL_0016;*/goto IL_00ef;                              //br				IL_0016
	IL_00ef:            goto IL_0169;                                               //br.s				IL_0169
	IL_00f1:                                                                        //ldc.i4				0x4
	IL_00f6:            V_1=4;                                                      //stloc				V_1
	IL_00fa:            /*goto IL_0016;*/goto IL_00ff;                              //br				IL_0016
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldstr				L"\x7225\x1227"
	IL_0105:                                                                        //ldloc				V_2
	IL_0109:            Temp_2=a(L"\x7225\x1227",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010e:            if(V_0==Temp_2)goto IL_01e0;                                //beq				IL_01e0
	IL_0113:            goto IL_0116;                                               //br.s				IL_0116
	IL_0115:                                                                        //break
	IL_0116:                                                                        //ldc.i4				0xa
	IL_011b:            V_1=10;                                                     //stloc				V_1
	IL_011f:            /*goto IL_0016;*/goto IL_0124;                              //br				IL_0016
	IL_0124:            goto IL_021c;                                               //br				IL_021c
	IL_0129:                                                                        //ldarg.0
	IL_012a:            Temp_7=this->M_x1();                                        //call				System::String^ Root::T_x111::M_x1()
	IL_012f:            return Temp_7;                                              //ret
	IL_0130:                                                                        //ldloc.0
	IL_0131:            Temp_8=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0136:            V_0=Temp_8;                                                 //stloc.0
	IL_0137:                                                                        //ldc.i4				0xd
	IL_013c:            V_1=13;                                                     //stloc				V_1
	IL_0140:            /*goto IL_0016;*/goto IL_0145;                              //br				IL_0016
	IL_0145:                                                                        //ldloc.0
	IL_0146:                                                                        //ldstr				L"\x6825\x1227"
	IL_014b:                                                                        //ldloc				V_2
	IL_014f:            Temp_9=a(L"\x6825\x1227",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0154:            if(V_0==Temp_9)goto IL_00b8;                                //beq				IL_00b8
	IL_0159:                                                                        //ldc.i4				0x9
	IL_015e:            V_1=9;                                                      //stloc				V_1
	IL_0162:            /*goto IL_0016;*/goto IL_0167;                              //br				IL_0016
	IL_0167:            goto IL_00f1;                                               //br.s				IL_00f1
	IL_0169:                                                                        //ldc.i4				0x5
	IL_016e:            V_1=5;                                                      //stloc				V_1
	IL_0172:            /*goto IL_0016;*/goto IL_0177;                              //br				IL_0016
	IL_0177:            goto IL_0251;                                               //br				IL_0251
	IL_017c:                                                                        //ldarg.0
	IL_017d:            Temp_1=this->F_x13;                                         //ldfld				System::String^ Root::T_x111 F_x13
	IL_0182:            return Temp_1;                                              //ret
	IL_0183:                                                                        //ldc.i4				0x3
	IL_0188:            V_1=3;                                                      //stloc				V_1
	IL_018c:            /*goto IL_0016;*/goto IL_0191;                              //br				IL_0016
	IL_0191:                                                                        //ldloc.0
	IL_0192:                                                                        //ldstr				L"\x7625\x1227"
	IL_0197:                                                                        //ldloc				V_2
	IL_019b:            Temp_0=a(L"\x7625\x1227",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a0:            if(V_0==Temp_0)goto IL_017c;                                //beq.s				IL_017c
	IL_01a2:                                                                        //ldc.i4				0x1
	IL_01a7:            V_1=1;                                                      //stloc				V_1
	IL_01ab:            /*goto IL_0016;*/goto IL_01b0;                              //br				IL_0016
	IL_01b0:            goto IL_01e7;                                               //br.s				IL_01e7
	IL_01b2:                                                                        //ldc.i4				0xf
	IL_01b7:            V_1=15;                                                     //stloc				V_1
	IL_01bb:            /*goto IL_0016;*/goto IL_01c0;                              //br				IL_0016
	IL_01c0:                                                                        //ldarg.0
	IL_01c1:            Temp_12=this->F_x1;                                         //ldfld				System::String^ Root::T_x111 F_x1
	IL_01c6:                                                                        //dup
	IL_01c7:            V_0=Temp_12;                                                //stloc.0
	IL_01c8:            if(V_0==nullptr)goto IL_0251;                               //brfalse				IL_0251
	IL_01cd:                                                                        //ldc.i4				0xc
	IL_01d2:            V_1=12;                                                     //stloc				V_1
	IL_01d6:            /*goto IL_0016;*/goto IL_01db;                              //br				IL_0016
	IL_01db:            goto IL_0130;                                               //br				IL_0130
	IL_01e0:                                                                        //ldarg.0
	IL_01e1:            Temp_3=this->M_x2();                                        //call				System::String^ Root::T_x111::M_x2()
	IL_01e6:            return Temp_3;                                              //ret
	IL_01e7:                                                                        //ldc.i4				0x6
	IL_01ec:            V_1=6;                                                      //stloc				V_1
	IL_01f0:            /*goto IL_0016;*/goto IL_01f5;                              //br				IL_0016
	IL_01f5:                                                                        //ldloc.0
	IL_01f6:                                                                        //ldstr				L"\x6325\x1227"
	IL_01fb:                                                                        //ldloc				V_2
	IL_01ff:            Temp_5=a(L"\x6325\x1227",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0204:            if(V_0==Temp_5)goto IL_017c;                                //beq				IL_017c
	IL_0209:                                                                        //ldc.i4				0x2
	IL_020e:            V_1=2;                                                      //stloc				V_1
	IL_0212:            /*goto IL_0016;*/goto IL_0217;                              //br				IL_0016
	IL_0217:            goto IL_00bf;                                               //br				IL_00bf
	IL_021c:                                                                        //ldc.i4				0xb
	IL_0221:            V_1=11;                                                     //stloc				V_1
	IL_0225:            /*goto IL_0016;*/goto IL_022a;                              //br				IL_0016
	IL_022a:                                                                        //ldloc.0
	IL_022b:                                                                        //ldstr				L"\x6B25\x1227"
	IL_0230:                                                                        //ldloc				V_2
	IL_0234:            Temp_6=a(L"\x6B25\x1227",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0239:            if(V_0==Temp_6)goto IL_0129;                                //beq				IL_0129
	IL_023e:                                                                        //ldc.i4				0x8
	IL_0243:            V_1=8;                                                      //stloc				V_1
	IL_0247:            /*goto IL_0016;*/goto IL_024c;                              //br				IL_0016
	IL_024c:            goto IL_0183;                                               //br				IL_0183
	IL_0251:            Temp_4=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0256:            throw Temp_4;                                               //throw

}
inline System::String^ Root::T_x111::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::IO::StringWriter^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::IO::StringWriter^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_6=10;                                                     //stloc				V_6
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_0056;case 1:goto IL_0044;case 2:goto IL_01a0;};//switch				(IL_0056,IL_0044,IL_01a0)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_0031:                                                                        //ldc.i4.s				96
	IL_0033:            Temp_1=Temp_0->IndexOf(safe_cast<System::Char>((System::Char)96));//callvirt				System::Int32 System::String::IndexOf(System::Char)
	IL_0038:            V_0=Temp_1;                                                 //stloc.0
	IL_0039:                                                                        //ldc.i4				0x1
	IL_003e:            V_5=1;                                                      //stloc				V_5
	IL_0042:            /*goto IL_0016;*/goto IL_0044;                              //br.s				IL_0016
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldc.i4.m1
	IL_0046:            if(V_0==-1)goto IL_01a5;                                    //beq				IL_01a5
	IL_004b:                                                                        //ldc.i4				0x0
	IL_0050:            V_5=0;                                                      //stloc				V_5
	IL_0054:            /*goto IL_0016;*/goto IL_0056;                              //br.s				IL_0016
	IL_0056:            goto IL_016e;                                               //br				IL_016e
	IL_005601:          try{
	IL_005b:            goto IL_007a;                                               //br.s				IL_007a
	IL_005d:                                                                        //ldloc				V_5
	IL_0061:            switch(V_5){case 0:goto IL_00d3;case 1:goto IL_0123;case 2:goto IL_00e3;case 3:goto IL_00ae;case 4:goto IL_00f7;};//switch				(IL_00d3,IL_0123,IL_00e3,IL_00ae,IL_00f7)
	IL_007a:                                                                        //ldloc.2
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_9=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_0081:                                                                        //ldc.i4.0
	IL_0082:                                                                        //ldloc.0
	IL_0083:            Temp_10=Temp_9->Substring(safe_cast<System::Int32>(0),V_0); //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_0088:            V_2->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008d:                                                                        //ldloc.2
	IL_008e:                                                                        //ldstr				L"\x1427"
	IL_0093:                                                                        //ldloc				V_6
	IL_0097:            Temp_11=a(L"\x1427",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009c:            V_2->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00a1:                                                                        //ldc.i4.0
	IL_00a2:            V_3=0;                                                      //stloc.3
	IL_00a3:                                                                        //ldc.i4				0x3
	IL_00a8:            V_5=3;                                                      //stloc				V_5
	IL_00ac:            /*goto IL_005d;*/goto IL_00ae;                              //br.s				IL_005d
	IL_00ae:            goto IL_00d5;                                               //br.s				IL_00d5
	IL_00b0:                                                                        //ldloc.2
	IL_00b1:                                                                        //ldstr				L"\x0427"
	IL_00b6:                                                                        //ldloc				V_6
	IL_00ba:            Temp_12=a(L"\x0427",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bf:            V_2->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00c4:                                                                        //ldloc.3
	IL_00c5:                                                                        //ldc.i4.1
	IL_00c6:                                                                        //add
	IL_00c7:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00c8:                                                                        //ldc.i4				0x0
	IL_00cd:            V_5=0;                                                      //stloc				V_5
	IL_00d1:            /*goto IL_005d;*/goto IL_00d3;                              //br.s				IL_005d
	IL_00d3:            goto IL_00d5;                                               //br.s				IL_00d5
	IL_00d5:                                                                        //ldc.i4				0x2
	IL_00da:            V_5=2;                                                      //stloc				V_5
	IL_00de:            /*goto IL_005d;*/goto IL_00e3;                              //br				IL_005d
	IL_00e3:                                                                        //ldloc.3
	IL_00e4:                                                                        //ldloc.1
	IL_00e5:                                                                        //ldc.i4.1
	IL_00e6:                                                                        //sub
	IL_00e7:            if(V_3<(V_1 - 1))goto IL_00b0;                              //blt.s				IL_00b0
	IL_00e9:                                                                        //ldc.i4				0x4
	IL_00ee:            V_5=4;                                                      //stloc				V_5
	IL_00f2:            /*goto IL_005d;*/goto IL_00f7;                              //br				IL_005d
	IL_00f7:            goto IL_00f9;                                               //br.s				IL_00f9
	IL_00f9:                                                                        //ldloc.2
	IL_00fa:                                                                        //ldstr				L"\x1627"
	IL_00ff:                                                                        //ldloc				V_6
	IL_0103:            Temp_13=a(L"\x1627",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0108:            V_2->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_010d:                                                                        //ldloc.2
	IL_010e:            Temp_14=V_2->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0113:            V_4=Temp_14;                                                //stloc.s				V_4
	IL_0115:                                                                        //ldc.i4				0x1
	IL_011a:            V_5=1;                                                      //stloc				V_5
	IL_011e:            /*goto IL_005d;*/goto IL_0123;                              //br				IL_005d
	IL_0123:            goto IL_01ac;                                               //leave				IL_01ac
	                    ;}
	                    finally{
	IL_0128:                                                                        //ldc.i4				0x1
	IL_012d:            V_5=1;                                                      //stloc				V_5
	IL_0131:            /*goto IL_0135;*/goto IL_0133;                              //br.s				IL_0135
	IL_0133:            goto IL_014a;                                               //br.s				IL_014a
	IL_0135:                                                                        //ldloc				V_5
	IL_0139:            switch(V_5){case 0:goto IL_0158;case 1:goto IL_0133;case 2:goto IL_016b;};//switch				(IL_0158,IL_0133,IL_016b)
	IL_014a:                                                                        //ldloc.2
	IL_014b:            if(V_2==nullptr)goto IL_016d;                               //brfalse.s				IL_016d
	IL_014d:                                                                        //ldc.i4				0x0
	IL_0152:            V_5=0;                                                      //stloc				V_5
	IL_0156:            /*goto IL_0135;*/goto IL_0158;                              //br.s				IL_0135
	IL_0158:            goto IL_015a;                                               //br.s				IL_015a
	IL_015a:                                                                        //ldloc.2
	IL_015b:            /*safe_cast<System::IDisposable^>(V_2)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0160:                                                                        //ldc.i4				0x2
	IL_0165:            V_5=2;                                                      //stloc				V_5
	IL_0169:            /*goto IL_0135;*/goto IL_016b;                              //br.s				IL_0135
	IL_016b:            goto IL_016d;                                               //br.s				IL_016d
	IL_016d:                                                                        //endfinally
	                    ;}
	IL_016e:                                                                        //ldarg.0
	IL_016f:            Temp_2=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_0174:                                                                        //ldloc.0
	IL_0175:                                                                        //ldc.i4.1
	IL_0176:                                                                        //add
	IL_0177:            Temp_3=Temp_2->Substring((V_0 + 1));                        //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_017c:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0181:            Temp_5=System::Int32::Parse(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_0186:            V_1=Temp_5;                                                 //stloc.1
	IL_0187:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_018c:            Temp_7=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_6));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0191:            V_2=Temp_7;                                                 //stloc.2
	IL_0192:                                                                        //ldc.i4				0x2
	IL_0197:            V_5=2;                                                      //stloc				V_5
	IL_019b:            /*goto IL_0016;*/goto IL_01a0;                              //br				IL_0016
	IL_01a0:            /*goto IL_005b;*/goto IL_005601;                            //br				IL_005b
	IL_01a5:                                                                        //ldarg.0
	IL_01a6:            Temp_8=this->F_x12;                                         //ldfld				System::String^ Root::T_x111 F_x12
	IL_01ab:            return Temp_8;                                              //ret
	IL_01ac:                                                                        //ldloc.s				V_4
	IL_01ae:            return V_4;                                                 //ret

}
inline System::String^ Root::T_x111::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_3=12;                                                     //stloc				V_3
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_004b;case 1:goto IL_00a3;case 2:goto IL_008f;case 3:goto IL_0059;case 4:goto IL_00c1;};//switch				(IL_004b,IL_00a3,IL_008f,IL_0059,IL_00c1)
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_002e:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0033:            V_0=Temp_1;                                                 //stloc.0
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_2=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_003a:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003f:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_2);//stloc.1
	IL_0040:                                                                        //ldc.i4				0x0
	IL_0045:            V_2=0;                                                      //stloc				V_2
	IL_0049:            /*goto IL_000b;*/goto IL_004b;                              //br.s				IL_000b
	IL_004b:                                                                        //ldloc.1
	IL_004c:            if(V_1==nullptr)goto IL_0081;                               //brfalse.s				IL_0081
	IL_004e:                                                                        //ldc.i4				0x3
	IL_0053:            V_2=3;                                                      //stloc				V_2
	IL_0057:            /*goto IL_000b;*/goto IL_0059;                              //br.s				IL_000b
	IL_0059:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_3=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0061:                                                                        //ldstr				L"\x4A29"
	IL_0066:                                                                        //ldloc				V_3
	IL_006a:            Temp_4=a(L"\x4A29",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006f:                                                                        //ldloca.s				V_0
	IL_0071:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0076:            Temp_6=V_0.ToString(safe_cast<System::IFormatProvider^>(Temp_5));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_007b:            Temp_7=System::String::Concat(Temp_3,Temp_4,Temp_6);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0080:            return Temp_7;                                              //ret
	IL_0081:                                                                        //ldc.i4				0x2
	IL_0086:            V_2=2;                                                      //stloc				V_2
	IL_008a:            /*goto IL_000b;*/goto IL_008f;                              //br				IL_000b
	IL_008f:                                                                        //ldloc.0
	IL_0090:            if(V_0==0)goto IL_00c3;                                     //brfalse.s				IL_00c3
	IL_0092:            goto IL_0095;                                               //br.s				IL_0095
	IL_0094:                                                                        //break
	IL_0095:                                                                        //ldc.i4				0x1
	IL_009a:            V_2=1;                                                      //stloc				V_2
	IL_009e:            /*goto IL_000b;*/goto IL_00a3;                              //br				IL_000b
	IL_00a3:            goto IL_005b;                                               //br.s				IL_005b
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            Temp_9=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_00ac:            Temp_10=safe_cast<System::Collections::ICollection^>(Temp_9)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b1:                                                                        //sub
	IL_00b2:            V_0=(V_0 - Temp_10);                                        //stloc.0
	IL_00b3:                                                                        //ldc.i4				0x4
	IL_00b8:            V_2=4;                                                      //stloc				V_2
	IL_00bc:            /*goto IL_000b;*/goto IL_00c1;                              //br				IL_000b
	IL_00c1:            goto IL_0081;                                               //br.s				IL_0081
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:            Temp_8=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00c9:            return Temp_8;                                              //ret

}
