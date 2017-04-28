#include "global_xref.h"

inline Root::T_x115::T_x115()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	System::Boolean V_0 = false;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0052;case 1:goto IL_00bc;case 2:goto IL_006a;case 3:goto IL_003c;case 4:goto IL_00ea;case 5:goto IL_0080;case 6:goto IL_0103;case 7:goto IL_00da;case 8:goto IL_009e;};//switch				(IL_0052,IL_00bc,IL_006a,IL_003c,IL_00ea,IL_0080,IL_0103,IL_00da,IL_009e)
	IL_002f:                                                                        //ldc.i4.0
	IL_0030:            V_0=false;                                                  //stloc.0
	IL_0031:                                                                        //ldc.i4				0x3
	IL_0036:            V_1=3;                                                      //stloc				V_1
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_3=Root::T_x115::M_x8(A_0);                             //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^)
	IL_0042:            if(Temp_3==nullptr)goto IL_00dc;                            //brfalse				IL_00dc
	IL_0047:                                                                        //ldc.i4				0x0
	IL_004c:            V_1=0;                                                      //stloc				V_1
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_0054:                                                                        //ldc.i4.6
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //ldc.i4.5
	IL_0058:                                                                        //sub
	IL_0059:                                                                        //blt				IL_0055
	IL_005e:                                                                        //pop
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_1=2;                                                      //stloc				V_1
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:                                                                        //ldarg.0
	IL_006b:            Temp_2=Root::T_x115::M_x12(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^)
	IL_0070:            if(Temp_2==nullptr)goto IL_0108;                            //brfalse				IL_0108
	IL_0075:                                                                        //ldc.i4				0x5
	IL_007a:            V_1=5;                                                      //stloc				V_1
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:            goto IL_00be;                                               //br.s				IL_00be
	IL_0082:                                                                        //ldloc.0
	IL_0083:                                                                        //ldarg.0
	IL_0084:            Temp_7=Root::T_x115::M_x13(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^)
	IL_0089:            Temp_8=Temp_7->Static;                                      //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_008e:                                                                        //or
	IL_008f:            V_0=safe_cast<System::Boolean>((V_0 | Temp_8));             //stloc.0
	IL_0090:                                                                        //ldc.i4				0x8
	IL_0095:            V_1=8;                                                      //stloc				V_1
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:            goto IL_0054;                                               //br.s				IL_0054
	IL_00a0:                                                                        //ldloc.0
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_0=Root::T_x115::M_x8(A_0);                             //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^)
	IL_00a7:            Temp_1=Temp_0->Static;                                      //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_00ac:                                                                        //or
	IL_00ad:            V_0=safe_cast<System::Boolean>((V_0 | Temp_1));             //stloc.0
	IL_00ae:                                                                        //ldc.i4				0x1
	IL_00b3:            V_1=1;                                                      //stloc				V_1
	IL_00b7:            /*goto IL_0002;*/goto IL_00bc;                              //br				IL_0002
	IL_00bc:            goto IL_00dc;                                               //br.s				IL_00dc
	IL_00be:                                                                        //ldloc.0
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_5=Root::T_x115::M_x12(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^)
	IL_00c5:            Temp_6=Temp_5->Static;                                      //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_00ca:                                                                        //or
	IL_00cb:            V_0=safe_cast<System::Boolean>((V_0 | Temp_6));             //stloc.0
	IL_00cc:                                                                        //ldc.i4				0x7
	IL_00d1:            V_1=7;                                                      //stloc				V_1
	IL_00d5:            /*goto IL_0002;*/goto IL_00da;                              //br				IL_0002
	IL_00da:            goto IL_0108;                                               //br.s				IL_0108
	IL_00dc:                                                                        //ldc.i4				0x4
	IL_00e1:            V_1=4;                                                      //stloc				V_1
	IL_00e5:            /*goto IL_0002;*/goto IL_00ea;                              //br				IL_0002
	IL_00ea:                                                                        //ldarg.0
	IL_00eb:            Temp_4=Root::T_x115::M_x13(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^)
	IL_00f0:            if(Temp_4==nullptr)goto IL_0054;                            //brfalse				IL_0054
	IL_00f5:                                                                        //ldc.i4				0x6
	IL_00fa:            V_1=6;                                                      //stloc				V_1
	IL_00fe:            /*goto IL_0002;*/goto IL_0103;                              //br				IL_0002
	IL_0103:            goto IL_0082;                                               //br				IL_0082
	IL_0108:                                                                        //ldloc.0
	IL_0109:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::MethodVisibility Temp_6 = (Reflector::CodeModel::MethodVisibility)0;
	System::NotSupportedException^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	Reflector::CodeModel::MethodVisibility V_0 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_1=3;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_007f;case 1:goto IL_0049;case 2:goto IL_0064;case 3:goto IL_000b;case 4:goto IL_00af;};//switch				(IL_007f,IL_0049,IL_0064,IL_000b,IL_00af)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_8=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_9=Root::T_x115::M_x1(Temp_8,A_1);                      //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0036:            if(!Temp_9)goto IL_00cc;                                    //brfalse				IL_00cc
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_1=1;                                                      //stloc				V_1
	IL_0047:            /*goto IL_000d;*/goto IL_0049;                              //br.s				IL_000d
	IL_0049:            goto IL_006d;                                               //br.s				IL_006d
	IL_004b:                                                                        //ldarg.1
	IL_004c:            Temp_0=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_0051:            return Temp_0;                                              //ret
	IL_0052:                                                                        //ldarg.1
	IL_0053:            Temp_4=A_1->FamilyOrAssembly;                               //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyOrAssembly()
	IL_0058:            return Temp_4;                                              //ret
	IL_0059:                                                                        //ldc.i4				0x2
	IL_005e:            V_1=2;                                                      //stloc				V_1
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_0066:                                                                        //ldarg.1
	IL_0067:            Temp_1=A_1->FamilyAndAssembly;                              //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyAndAssembly()
	IL_006c:            return Temp_1;                                              //ret
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_6=Root::T_x115::M_x2(A_0);                             //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x2(Reflector::CodeModel::IEventReference^)
	IL_0073:            V_0=Temp_6;                                                 //stloc.0
	IL_0074:                                                                        //ldc.i4				0x0
	IL_0079:            V_1=0;                                                      //stloc				V_1
	IL_007d:            /*goto IL_000d;*/goto IL_007f;                              //br.s				IL_000d
	IL_007f:                                                                        //ldloc.0
	IL_0080:            switch(safe_cast<System::Int32>(V_0)){case 0:goto IL_004b;case 1:goto IL_004b;case 2:goto IL_0066;case 3:goto IL_00be;case 4:goto IL_00b1;case 5:goto IL_0052;case 6:goto IL_00c5;};//switch				(IL_004b,IL_004b,IL_0066,IL_00be,IL_00b1,IL_0052,IL_00c5)
	IL_00a1:                                                                        //ldc.i4				0x4
	IL_00a6:            V_1=4;                                                      //stloc				V_1
	IL_00aa:            /*goto IL_000d;*/goto IL_00af;                              //br				IL_000d
	IL_00af:            goto IL_0059;                                               //br.s				IL_0059
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:            Temp_3=A_1->Family;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Family()
	IL_00b7:            return Temp_3;                                              //ret
	IL_00b8:            Temp_7=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00bd:            throw Temp_7;                                               //throw
	IL_00be:                                                                        //ldarg.1
	IL_00bf:            Temp_2=A_1->Assembly;                                       //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Assembly()
	IL_00c4:            return Temp_2;                                              //ret
	IL_00c5:                                                                        //ldarg.1
	IL_00c6:            Temp_5=A_1->Public;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Public()
	IL_00cb:            return Temp_5;                                              //ret
	IL_00cc:                                                                        //ldc.i4.0
	IL_00cd:            return false;                                               //ret

}
inline System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_0=13;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_000f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0014:            Temp_1=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0019:                                                                        //ldstr				L"\x052A"
	IL_001e:                                                                        //ldloc				V_0
	IL_0022:            Temp_2=a(L"\x052A",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_3=Root::T_x115::M_x2(A_0);                             //call				System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IFieldReference^)
	IL_002d:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0032:            return Temp_4;                                              //ret

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclaration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	Reflector::CodeModel::FieldVisibility Temp_8 = (Reflector::CodeModel::FieldVisibility)0;
	System::NotSupportedException^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	Reflector::CodeModel::IFieldDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::FieldVisibility V_1 = (Reflector::CodeModel::FieldVisibility)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.6
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:                                                                        //sub
	IL_0010:                                                                        //blt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_003d;                                               //br.s				IL_003d
	IL_0018:                                                                        //ldloc				V_2
	IL_001c:            switch(V_2){case 0:goto IL_0059;case 1:goto IL_007b;case 2:goto IL_000b;case 3:goto IL_00ab;case 4:goto IL_00f0;case 5:goto IL_00df;case 6:goto IL_010e;};//switch				(IL_0059,IL_007b,IL_000b,IL_00ab,IL_00f0,IL_00df,IL_010e)
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_10=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_11=Root::T_x115::M_x1(Temp_10,A_1);                    //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0049:            if(!Temp_11)goto IL_0110;                                   //brfalse				IL_0110
	IL_004e:                                                                        //ldc.i4				0x0
	IL_0053:            V_2=0;                                                      //stloc				V_2
	IL_0057:            /*goto IL_0018;*/goto IL_0059;                              //br.s				IL_0018
	IL_0059:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_005b:                                                                        //ldarg.1
	IL_005c:            Temp_2=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_0061:            return Temp_2;                                              //ret
	IL_0062:                                                                        //ldarg.1
	IL_0063:            Temp_6=A_1->FamilyOrAssembly;                               //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyOrAssembly()
	IL_0068:            return Temp_6;                                              //ret
	IL_0069:                                                                        //ldloc.0
	IL_006a:            Temp_8=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::FieldVisibility Reflector::CodeModel::IFieldDeclaration::get_Visibility()
	IL_006f:            V_1=Temp_8;                                                 //stloc.1
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_2=1;                                                      //stloc				V_2
	IL_0079:            /*goto IL_0018;*/goto IL_007b;                              //br.s				IL_0018
	IL_007b:                                                                        //ldloc.1
	IL_007c:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_00ad;case 1:goto IL_005b;case 2:goto IL_00f2;case 3:goto IL_00f9;case 4:goto IL_00b6;case 5:goto IL_0062;case 6:goto IL_00c3;};//switch				(IL_00ad,IL_005b,IL_00f2,IL_00f9,IL_00b6,IL_0062,IL_00c3)
	IL_009d:                                                                        //ldc.i4				0x3
	IL_00a2:            V_2=3;                                                      //stloc				V_2
	IL_00a6:            /*goto IL_0018;*/goto IL_00ab;                              //br				IL_0018
	IL_00ab:            goto IL_0100;                                               //br.s				IL_0100
	IL_00ad:                                                                        //ldarg.1
	IL_00ae:            Temp_1=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_00b3:            return Temp_1;                                              //ret
	IL_00b4:                                                                        //ldc.i4.1
	IL_00b5:            return true;                                                //ret
	IL_00b6:                                                                        //ldarg.1
	IL_00b7:            Temp_5=A_1->Family;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Family()
	IL_00bc:            return Temp_5;                                              //ret
	IL_00bd:            Temp_9=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00c2:            throw Temp_9;                                               //throw
	IL_00c3:                                                                        //ldarg.1
	IL_00c4:            Temp_7=A_1->Public;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Public()
	IL_00c9:            return Temp_7;                                              //ret
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_00d0:            V_0=Temp_0;                                                 //stloc.0
	IL_00d1:                                                                        //ldc.i4				0x5
	IL_00d6:            V_2=5;                                                      //stloc				V_2
	IL_00da:            /*goto IL_0018;*/goto IL_00df;                              //br				IL_0018
	IL_00df:                                                                        //ldloc.0
	IL_00e0:            if(V_0!=nullptr)goto IL_0069;                               //brtrue.s				IL_0069
	IL_00e2:                                                                        //ldc.i4				0x4
	IL_00e7:            V_2=4;                                                      //stloc				V_2
	IL_00eb:            /*goto IL_0018;*/goto IL_00f0;                              //br				IL_0018
	IL_00f0:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_00f2:                                                                        //ldarg.1
	IL_00f3:            Temp_3=A_1->FamilyAndAssembly;                              //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyAndAssembly()
	IL_00f8:            return Temp_3;                                              //ret
	IL_00f9:                                                                        //ldarg.1
	IL_00fa:            Temp_4=A_1->Assembly;                                       //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Assembly()
	IL_00ff:            return Temp_4;                                              //ret
	IL_0100:                                                                        //ldc.i4				0x6
	IL_0105:            V_2=6;                                                      //stloc				V_2
	IL_0109:            /*goto IL_0018;*/goto IL_010e;                              //br				IL_0018
	IL_010e:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_0110:                                                                        //ldc.i4.0
	IL_0111:            return false;                                               //ret

}
inline System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::NotSupportedException^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IArrayType^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_3=18;                                                     //stloc				V_3
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:            goto IL_0027;                                               //br.s				IL_0027
	IL_000e:                                                                        //ldloc				V_2
	IL_0012:            switch(V_2){case 0:goto IL_004c;case 1:goto IL_0085;case 2:goto IL_0096;case 3:goto IL_003e;};//switch				(IL_004c,IL_0085,IL_0096,IL_003e)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_002d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0032:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0033:                                                                        //ldc.i4				0x3
	IL_0038:            V_2=3;                                                      //stloc				V_2
	IL_003c:            /*goto IL_000e;*/goto IL_003e;                              //br.s				IL_000e
	IL_003e:                                                                        //ldloc.0
	IL_003f:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0041:                                                                        //ldc.i4				0x0
	IL_0046:            V_2=0;                                                      //stloc				V_2
	IL_004a:            /*goto IL_000e;*/goto IL_004c;                              //br.s				IL_000e
	IL_004c:            goto IL_0098;                                               //br.s				IL_0098
	IL_004e:                                                                        //ldloc.1
	IL_004f:            Temp_6=V_1->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_0054:                                                                        //ldstr				L"\x1E2F"
	IL_0059:                                                                        //ldloc				V_3
	IL_005d:            Temp_7=a(L"\x1E2F",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_8=Root::T_x115::M_x2(A_0);                             //call				System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_0068:            Temp_9=System::String::Concat(Temp_6,Temp_7,Temp_8);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_006d:            return Temp_9;                                              //ret
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_10=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0074:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_0079:            V_1=dynamic_cast<Reflector::CodeModel::IArrayType^>(Temp_10);//stloc.1
	IL_007a:                                                                        //ldc.i4				0x1
	IL_007f:            V_2=1;                                                      //stloc				V_2
	IL_0083:            /*goto IL_000e;*/goto IL_0085;                              //br.s				IL_000e
	IL_0085:                                                                        //ldloc.1
	IL_0086:            if(V_1==nullptr)goto IL_00b8;                               //brfalse.s				IL_00b8
	IL_0088:                                                                        //ldc.i4				0x2
	IL_008d:            V_2=2;                                                      //stloc				V_2
	IL_0091:            /*goto IL_000e;*/goto IL_0096;                              //br				IL_000e
	IL_0096:            goto IL_004e;                                               //br.s				IL_004e
	IL_0098:                                                                        //ldloc.0
	IL_0099:            Temp_1=Root::T_x115::M_x8(V_0);                             //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_009e:                                                                        //ldstr				L"\x1E2F"
	IL_00a3:                                                                        //ldloc				V_3
	IL_00a7:            Temp_2=a(L"\x1E2F",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:            Temp_3=Root::T_x115::M_x2(A_0);                             //call				System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IMethodReference^)
	IL_00b2:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00b7:            return Temp_4;                                              //ret
	IL_00b8:            Temp_5=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00bd:            throw Temp_5;                                               //throw

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::NotSupportedException^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_8 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::MethodVisibility V_1 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0086;case 1:goto IL_00b6;case 2:goto IL_0061;case 3:goto IL_000b;case 4:goto IL_0046;};//switch				(IL_0086,IL_00b6,IL_0061,IL_000b,IL_0046)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_10=Root::T_x115::M_x1(Temp_9,A_1);                     //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0036:            if(!Temp_10)goto IL_00d3;                                   //brfalse				IL_00d3
	IL_003b:                                                                        //ldc.i4				0x4
	IL_0040:            V_2=4;                                                      //stloc				V_2
	IL_0044:            /*goto IL_000d;*/goto IL_0046;                              //br.s				IL_000d
	IL_0046:            goto IL_006d;                                               //br.s				IL_006d
	IL_0048:                                                                        //ldarg.1
	IL_0049:            Temp_0=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_004e:            return Temp_0;                                              //ret
	IL_004f:                                                                        //ldarg.1
	IL_0050:            Temp_4=A_1->FamilyOrAssembly;                               //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyOrAssembly()
	IL_0055:            return Temp_4;                                              //ret
	IL_0056:                                                                        //ldc.i4				0x2
	IL_005b:            V_2=2;                                                      //stloc				V_2
	IL_005f:            /*goto IL_000d;*/goto IL_0061;                              //br.s				IL_000d
	IL_0061:            goto IL_00bf;                                               //br.s				IL_00bf
	IL_0063:            goto IL_0066;                                               //br.s				IL_0066
	IL_0065:                                                                        //break
	IL_0066:                                                                        //ldarg.1
	IL_0067:            Temp_1=A_1->FamilyAndAssembly;                              //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyAndAssembly()
	IL_006c:            return Temp_1;                                              //ret
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_7=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0073:            V_0=Temp_7;                                                 //stloc.0
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_8=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_007a:            V_1=Temp_8;                                                 //stloc.1
	IL_007b:                                                                        //ldc.i4				0x0
	IL_0080:            V_2=0;                                                      //stloc				V_2
	IL_0084:            /*goto IL_000d;*/goto IL_0086;                              //br.s				IL_000d
	IL_0086:                                                                        //ldloc.1
	IL_0087:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_0048;case 1:goto IL_0048;case 2:goto IL_0063;case 3:goto IL_00c5;case 4:goto IL_00b8;case 5:goto IL_004f;case 6:goto IL_00cc;};//switch				(IL_0048,IL_0048,IL_0063,IL_00c5,IL_00b8,IL_004f,IL_00cc)
	IL_00a8:                                                                        //ldc.i4				0x1
	IL_00ad:            V_2=1;                                                      //stloc				V_2
	IL_00b1:            /*goto IL_000d;*/goto IL_00b6;                              //br				IL_000d
	IL_00b6:            goto IL_0056;                                               //br.s				IL_0056
	IL_00b8:                                                                        //ldarg.1
	IL_00b9:            Temp_3=A_1->Family;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Family()
	IL_00be:            return Temp_3;                                              //ret
	IL_00bf:            Temp_6=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00c4:            throw Temp_6;                                               //throw
	IL_00c5:                                                                        //ldarg.1
	IL_00c6:            Temp_2=A_1->Assembly;                                       //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Assembly()
	IL_00cb:            return Temp_2;                                              //ret
	IL_00cc:                                                                        //ldarg.1
	IL_00cd:            Temp_5=A_1->Public;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Public()
	IL_00d2:            return Temp_5;                                              //ret
	IL_00d3:                                                                        //ldc.i4.0
	IL_00d4:            return false;                                               //ret

}
inline Reflector::CodeModel::MethodVisibility Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_1 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_2 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_3 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_7 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_9 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::MethodVisibility V_0 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IPropertyDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0067;                                               //br.s				IL_0067
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_00bc;case 1:goto IL_007b;case 2:goto IL_012d;case 3:goto IL_0254;case 4:goto IL_0109;case 5:goto IL_0169;case 6:goto IL_021d;case 7:goto IL_00ce;case 8:goto IL_020a;case 9:goto IL_011a;case 10:goto IL_01f6;case 11:goto IL_01b7;case 12:goto IL_01df;case 13:goto IL_017c;case 14:goto IL_00a2;case 15:goto IL_00e1;case 16:goto IL_0151;case 17:goto IL_0140;case 18:goto IL_01ca;case 19:goto IL_008f;case 20:goto IL_00f6;case 21:goto IL_0196;case 22:goto IL_023a;};//switch				(IL_00bc,IL_007b,IL_012d,IL_0254,IL_0109,IL_0169,IL_021d,IL_00ce,IL_020a,IL_011a,IL_01f6,IL_01b7,IL_01df,IL_017c,IL_00a2,IL_00e1,IL_0151,IL_0140,IL_01ca,IL_008f,IL_00f6,IL_0196,IL_023a)
	IL_0067:                                                                        //ldc.i4.6
	IL_0068:            V_0=safe_cast<Reflector::CodeModel::MethodVisibility>(6);   //stloc.0
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyReference::Resolve()
	IL_006f:            V_1=Temp_0;                                                 //stloc.1
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_6=1;                                                      //stloc				V_6
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:                                                                        //ldloc.1
	IL_007c:            if(V_1==nullptr)goto IL_0256;                               //brfalse				IL_0256
	IL_0081:                                                                        //ldc.i4				0x13
	IL_0086:            V_6=19;                                                     //stloc				V_6
	IL_008a:            /*goto IL_0002;*/goto IL_008f;                              //br				IL_0002
	IL_008f:            goto IL_01e1;                                               //br				IL_01e1
	IL_0094:                                                                        //ldc.i4				0xe
	IL_0099:            V_6=14;                                                     //stloc				V_6
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:                                                                        //ldnull
	IL_00a3:            Temp_10=nullptr;goto IL_00a5;                               //br.s				IL_00a5
	IL_00a5:            V_3=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_10);/*warning ! semantic stack doesn't empty at joint !;*///stloc.3
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:            Temp_5=V_1->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_00ac:            V_4=Temp_5;                                                 //stloc.s				V_4
	IL_00ae:                                                                        //ldc.i4				0x0
	IL_00b3:            V_6=0;                                                      //stloc				V_6
	IL_00b7:            /*goto IL_0002;*/goto IL_00bc;                              //br				IL_0002
	IL_00bc:                                                                        //ldloc.s				V_4
	IL_00be:            if(V_4==nullptr)goto IL_011f;                               //brfalse.s				IL_011f
	IL_00c0:                                                                        //ldc.i4				0x7
	IL_00c5:            V_6=7;                                                      //stloc				V_6
	IL_00c9:            /*goto IL_0002;*/goto IL_00ce;                              //br				IL_0002
	IL_00ce:            goto IL_016e;                                               //br				IL_016e
	IL_00d3:                                                                        //ldc.i4				0xf
	IL_00d8:            V_6=15;                                                     //stloc				V_6
	IL_00dc:            /*goto IL_0002;*/goto IL_00e1;                              //br				IL_0002
	IL_00e1:                                                                        //ldloc.s				V_5
	IL_00e3:            if(V_5==nullptr)goto IL_0256;                               //brfalse				IL_0256
	IL_00e8:                                                                        //ldc.i4				0x14
	IL_00ed:            V_6=20;                                                     //stloc				V_6
	IL_00f1:            /*goto IL_0002;*/goto IL_00f6;                              //br				IL_0002
	IL_00f6:            goto IL_01a1;                                               //br				IL_01a1
	IL_00fb:                                                                        //ldc.i4				0x4
	IL_0100:            V_6=4;                                                      //stloc				V_6
	IL_0104:            /*goto IL_0002;*/goto IL_0109;                              //br				IL_0002
	IL_0109:                                                                        //ldloc.3
	IL_010a:            if(V_3==nullptr)goto IL_00d3;                               //brfalse.s				IL_00d3
	IL_010c:                                                                        //ldc.i4				0x9
	IL_0111:            V_6=9;                                                      //stloc				V_6
	IL_0115:            /*goto IL_0002;*/goto IL_011a;                              //br				IL_0002
	IL_011a:            goto IL_023f;                                               //br				IL_023f
	IL_011f:                                                                        //ldc.i4				0x2
	IL_0124:            V_6=2;                                                      //stloc				V_6
	IL_0128:            /*goto IL_0002;*/goto IL_012d;                              //br				IL_0002
	IL_012d:                                                                        //ldnull
	IL_012e:            Temp_11=nullptr;goto IL_0130;                               //br.s				IL_0130
	IL_0130:            V_5=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_11);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_5
	IL_0132:                                                                        //ldc.i4				0x11
	IL_0137:            V_6=17;                                                     //stloc				V_6
	IL_013b:            /*goto IL_0002;*/goto IL_0140;                              //br				IL_0002
	IL_0140:                                                                        //ldloc.3
	IL_0141:            if(V_3==nullptr)goto IL_00fb;                               //brfalse.s				IL_00fb
	IL_0143:                                                                        //ldc.i4				0x10
	IL_0148:            V_6=16;                                                     //stloc				V_6
	IL_014c:            /*goto IL_0002;*/goto IL_0151;                              //br				IL_0002
	IL_0151:            goto IL_01bc;                                               //br.s				IL_01bc
	IL_0153:                                                                        //ldloc.s				V_5
	IL_0155:            Temp_9=V_5->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_015a:            V_0=Temp_9;                                                 //stloc.0
	IL_015b:                                                                        //ldc.i4				0x5
	IL_0160:            V_6=5;                                                      //stloc				V_6
	IL_0164:            /*goto IL_0002;*/goto IL_0169;                              //br				IL_0002
	IL_0169:            goto IL_0256;                                               //br				IL_0256
	IL_016e:                                                                        //ldc.i4				0xd
	IL_0173:            V_6=13;                                                     //stloc				V_6
	IL_0177:            /*goto IL_0002;*/goto IL_017c;                              //br				IL_0002
	IL_017c:                                                                        //ldloc.s				V_4
	IL_017e:            Temp_4=V_4->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0183:            Temp_11=Temp_4;goto IL_0130;                                //br.s				IL_0130
	IL_0185:            goto IL_0188;                                               //br.s				IL_0188
	IL_0187:                                                                        //break
	IL_0188:                                                                        //ldc.i4				0x15
	IL_018d:            V_6=21;                                                     //stloc				V_6
	IL_0191:            /*goto IL_0002;*/goto IL_0196;                              //br				IL_0002
	IL_0196:                                                                        //ldloc.2
	IL_0197:            Temp_8=V_2->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_019c:            Temp_10=Temp_8;goto IL_00a5;                                //br				IL_00a5
	IL_01a1:                                                                        //ldloc.s				V_5
	IL_01a3:            Temp_7=V_5->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01a8:            V_0=Temp_7;                                                 //stloc.0
	IL_01a9:                                                                        //ldc.i4				0xb
	IL_01ae:            V_6=11;                                                     //stloc				V_6
	IL_01b2:            /*goto IL_0002;*/goto IL_01b7;                              //br				IL_0002
	IL_01b7:            goto IL_0256;                                               //br				IL_0256
	IL_01bc:                                                                        //ldc.i4				0x12
	IL_01c1:            V_6=18;                                                     //stloc				V_6
	IL_01c5:            /*goto IL_0002;*/goto IL_01ca;                              //br				IL_0002
	IL_01ca:                                                                        //ldloc.s				V_5
	IL_01cc:            if(V_5==nullptr)goto IL_00fb;                               //brfalse				IL_00fb
	IL_01d1:                                                                        //ldc.i4				0xc
	IL_01d6:            V_6=12;                                                     //stloc				V_6
	IL_01da:            /*goto IL_0002;*/goto IL_01df;                              //br				IL_0002
	IL_01df:            goto IL_020f;                                               //br.s				IL_020f
	IL_01e1:                                                                        //ldloc.1
	IL_01e2:            Temp_6=V_1->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_01e7:            V_2=Temp_6;                                                 //stloc.2
	IL_01e8:                                                                        //ldc.i4				0xa
	IL_01ed:            V_6=10;                                                     //stloc				V_6
	IL_01f1:            /*goto IL_0002;*/goto IL_01f6;                              //br				IL_0002
	IL_01f6:                                                                        //ldloc.2
	IL_01f7:            if(V_2==nullptr)goto IL_0094;                               //brfalse				IL_0094
	IL_01fc:                                                                        //ldc.i4				0x8
	IL_0201:            V_6=8;                                                      //stloc				V_6
	IL_0205:            /*goto IL_0002;*/goto IL_020a;                              //br				IL_0002
	IL_020a:            goto IL_0185;                                               //br				IL_0185
	IL_020f:                                                                        //ldc.i4				0x6
	IL_0214:            V_6=6;                                                      //stloc				V_6
	IL_0218:            /*goto IL_0002;*/goto IL_021d;                              //br				IL_0002
	IL_021d:                                                                        //ldloc.s				V_5
	IL_021f:            Temp_1=V_5->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0224:                                                                        //ldloc.3
	IL_0225:            Temp_2=V_3->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_022a:            if(Temp_1!=Temp_2)goto IL_0256;                             //bne.un.s				IL_0256
	IL_022c:                                                                        //ldc.i4				0x16
	IL_0231:            V_6=22;                                                     //stloc				V_6
	IL_0235:            /*goto IL_0002;*/goto IL_023a;                              //br				IL_0002
	IL_023a:            goto IL_0153;                                               //br				IL_0153
	IL_023f:                                                                        //ldloc.3
	IL_0240:            Temp_3=V_3->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0245:            V_0=Temp_3;                                                 //stloc.0
	IL_0246:                                                                        //ldc.i4				0x3
	IL_024b:            V_6=3;                                                      //stloc				V_6
	IL_024f:            /*goto IL_0002;*/goto IL_0254;                              //br				IL_0002
	IL_0254:            goto IL_0256;                                               //br.s				IL_0256
	IL_0256:                                                                        //ldloc.0
	IL_0257:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::MethodVisibility Temp_7 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	Reflector::CodeModel::MethodVisibility V_0 = (Reflector::CodeModel::MethodVisibility)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            goto IL_000d;                                               //br.s				IL_000d
	IL_000b:            goto IL_002d;                                               //br.s				IL_002d
	IL_000d:            goto IL_0010;                                               //br.s				IL_0010
	IL_000f:                                                                        //break
	IL_0010:                                                                        //ldloc				V_1
	IL_0014:            switch(V_1){case 0:goto IL_0064;case 1:goto IL_007f;case 2:goto IL_000b;case 3:goto IL_0049;case 4:goto IL_00af;};//switch				(IL_0064,IL_007f,IL_000b,IL_0049,IL_00af)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_8=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0033:                                                                        //ldarg.1
	IL_0034:            Temp_9=Root::T_x115::M_x1(Temp_8,A_1);                      //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0039:            if(!Temp_9)goto IL_00cc;                                    //brfalse				IL_00cc
	IL_003e:                                                                        //ldc.i4				0x3
	IL_0043:            V_1=3;                                                      //stloc				V_1
	IL_0047:            goto IL_000d;                                               //br.s				IL_000d
	IL_0049:            goto IL_006d;                                               //br.s				IL_006d
	IL_004b:                                                                        //ldarg.1
	IL_004c:            Temp_1=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_0051:            return Temp_1;                                              //ret
	IL_0052:                                                                        //ldarg.1
	IL_0053:            Temp_5=A_1->FamilyOrAssembly;                               //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyOrAssembly()
	IL_0058:            return Temp_5;                                              //ret
	IL_0059:                                                                        //ldc.i4				0x0
	IL_005e:            V_1=0;                                                      //stloc				V_1
	IL_0062:            goto IL_000d;                                               //br.s				IL_000d
	IL_0064:            goto IL_00b8;                                               //br.s				IL_00b8
	IL_0066:                                                                        //ldarg.1
	IL_0067:            Temp_2=A_1->FamilyAndAssembly;                              //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyAndAssembly()
	IL_006c:            return Temp_2;                                              //ret
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_7=Root::T_x115::M_x1(A_0);                             //call				Reflector::CodeModel::MethodVisibility Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^)
	IL_0073:            V_0=Temp_7;                                                 //stloc.0
	IL_0074:                                                                        //ldc.i4				0x1
	IL_0079:            V_1=1;                                                      //stloc				V_1
	IL_007d:            goto IL_000d;                                               //br.s				IL_000d
	IL_007f:                                                                        //ldloc.0
	IL_0080:            switch(safe_cast<System::Int32>(V_0)){case 0:goto IL_004b;case 1:goto IL_004b;case 2:goto IL_0066;case 3:goto IL_00be;case 4:goto IL_00b1;case 5:goto IL_0052;case 6:goto IL_00c5;};//switch				(IL_004b,IL_004b,IL_0066,IL_00be,IL_00b1,IL_0052,IL_00c5)
	IL_00a1:                                                                        //ldc.i4				0x4
	IL_00a6:            V_1=4;                                                      //stloc				V_1
	IL_00aa:            goto IL_000d;                                               //br				IL_000d
	IL_00af:            goto IL_0059;                                               //br.s				IL_0059
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:            Temp_4=A_1->Family;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Family()
	IL_00b7:            return Temp_4;                                              //ret
	IL_00b8:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00bd:            throw Temp_0;                                               //throw
	IL_00be:                                                                        //ldarg.1
	IL_00bf:            Temp_3=A_1->Assembly;                                       //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Assembly()
	IL_00c4:            return Temp_3;                                              //ret
	IL_00c5:                                                                        //ldarg.1
	IL_00c6:            Temp_6=A_1->Public;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Public()
	IL_00cb:            return Temp_6;                                              //ret
	IL_00cc:                                                                        //ldc.i4.0
	IL_00cd:            return false;                                               //ret

}
inline Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::NotSupportedException^ Temp_3 = nullptr;
	Reflector::CodeModel::IModule^ Temp_4 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_2 = nullptr;
	Reflector::CodeModel::IModule^ V_3 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0036;                                               //br.s				IL_0036
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_00a4;case 1:goto IL_0088;case 2:goto IL_0059;case 3:goto IL_00d1;case 4:goto IL_0048;case 5:goto IL_0073;case 6:goto IL_00b5;case 7:goto IL_00e2;};//switch				(IL_00a4,IL_0088,IL_0059,IL_00d1,IL_0048,IL_0073,IL_00b5,IL_00e2)
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003c:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_003d:                                                                        //ldc.i4				0x4
	IL_0042:            V_5=4;                                                      //stloc				V_5
	IL_0046:            /*goto IL_0002;*/goto IL_0048;                              //br.s				IL_0002
	IL_0048:                                                                        //ldloc.0
	IL_0049:            if(V_0==nullptr)goto IL_00fc;                               //brfalse				IL_00fc
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_5=2;                                                      //stloc				V_5
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_005b:                                                                        //ldloc.0
	IL_005c:            Temp_0=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0061:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_0066:            V_4=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_0);//stloc.s				V_4
	IL_0068:                                                                        //ldc.i4				0x5
	IL_006d:            V_5=5;                                                      //stloc				V_5
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:                                                                        //ldloc.s				V_4
	IL_0075:            if(V_4==nullptr)goto IL_00fc;                               //brfalse				IL_00fc
	IL_007a:                                                                        //ldc.i4				0x1
	IL_007f:            V_5=1;                                                      //stloc				V_5
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_008a:                                                                        //ldloc.0
	IL_008b:            Temp_2=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0090:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_0095:            V_2=dynamic_cast<Reflector::CodeModel::IModuleReference^>(Temp_2);//stloc.2
	IL_0096:                                                                        //ldc.i4				0x0
	IL_009b:            V_5=0;                                                      //stloc				V_5
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:                                                                        //ldloc.2
	IL_00a5:            if(V_2==nullptr)goto IL_005b;                               //brfalse.s				IL_005b
	IL_00a7:                                                                        //ldc.i4				0x6
	IL_00ac:            V_5=6;                                                      //stloc				V_5
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:            goto IL_00ee;                                               //br.s				IL_00ee
	IL_00b7:                                                                        //ldloc.0
	IL_00b8:            Temp_1=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00bd:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_00c2:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_1);//stloc.1
	IL_00c3:                                                                        //ldc.i4				0x3
	IL_00c8:            V_5=3;                                                      //stloc				V_5
	IL_00cc:            /*goto IL_0002;*/goto IL_00d1;                              //br				IL_0002
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:            if(V_1==nullptr)goto IL_008a;                               //brfalse.s				IL_008a
	IL_00d4:                                                                        //ldc.i4				0x7
	IL_00d9:            V_5=7;                                                      //stloc				V_5
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00e4:                                                                        //ldloc.s				V_4
	IL_00e6:            return V_4;                                                 //ret
	IL_00e7:                                                                        //ldloc.1
	IL_00e8:            Temp_6=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_00ed:            return Temp_6;                                              //ret
	IL_00ee:                                                                        //ldloc.2
	IL_00ef:            Temp_4=V_2->Resolve();                                      //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleReference::Resolve()
	IL_00f4:            V_3=Temp_4;                                                 //stloc.3
	IL_00f5:                                                                        //ldloc.3
	IL_00f6:            Temp_5=V_3->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_00fb:            return safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_5);//ret
	IL_00fc:            Temp_3=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0101:            throw Temp_3;                                               //throw

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::TypeVisibility Temp_2 = (Reflector::CodeModel::TypeVisibility)0;
	System::Boolean Temp_3 = false;
	System::NotImplementedException^ Temp_4 = nullptr;
	System::NotSupportedException^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::TypeVisibility V_3 = (Reflector::CodeModel::TypeVisibility)0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0037;                                               //br.s				IL_0037
	IL_0002:                                                                        //ldloc				V_4
	IL_0006:            switch(V_4){case 0:goto IL_005d;case 1:goto IL_0120;case 2:goto IL_010f;case 3:goto IL_00d2;case 4:goto IL_009e;case 5:goto IL_0087;case 6:goto IL_016e;case 7:goto IL_00bb;case 8:goto IL_0049;case 9:goto IL_00e3;case 10:goto IL_013a;};//switch				(IL_005d,IL_0120,IL_010f,IL_00d2,IL_009e,IL_0087,IL_016e,IL_00bb,IL_0049,IL_00e3,IL_013a)
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003d:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_003e:                                                                        //ldc.i4				0x8
	IL_0043:            V_4=8;                                                      //stloc				V_4
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:                                                                        //ldloc.0
	IL_004a:            if(V_0==nullptr)goto IL_0173;                               //brfalse				IL_0173
	IL_004f:            goto IL_0052;                                               //br.s				IL_0052
	IL_0051:                                                                        //break
	IL_0052:                                                                        //ldc.i4				0x0
	IL_0057:            V_4=0;                                                      //stloc				V_4
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:            goto IL_00f5;                                               //br				IL_00f5
	IL_0062:                                                                        //ldarg.1
	IL_0063:            Temp_11=A_1->FamilyOrAssembly;                              //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyOrAssembly()
	IL_0068:            return Temp_11;                                             //ret
	IL_0069:                                                                        //ldarg.1
	IL_006a:            Temp_7=A_1->Public;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Public()
	IL_006f:            return Temp_7;                                              //ret
	IL_0070:                                                                        //ldc.i4.0
	IL_0071:            return false;                                               //ret
	IL_0072:                                                                        //ldarg.1
	IL_0073:            Temp_10=A_1->FamilyAndAssembly;                             //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_FamilyAndAssembly()
	IL_0078:            return Temp_10;                                             //ret
	IL_0079:                                                                        //ldc.i4				0x5
	IL_007e:            V_4=5;                                                      //stloc				V_4
	IL_0082:            /*goto IL_0002;*/goto IL_0087;                              //br				IL_0002
	IL_0087:                                                                        //ldloc.1
	IL_0088:                                                                        //ldarg.1
	IL_0089:            Temp_3=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_008e:            if(Temp_3)goto IL_00bd;                                     //brtrue.s				IL_00bd
	IL_0090:                                                                        //ldc.i4				0x4
	IL_0095:            V_4=4;                                                      //stloc				V_4
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:            goto IL_0070;                                               //br.s				IL_0070
	IL_00a0:                                                                        //ldarg.1
	IL_00a1:            Temp_8=A_1->Family;                                         //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Family()
	IL_00a6:            return Temp_8;                                              //ret
	IL_00a7:            Temp_4=gcnew System::NotImplementedException();             //newobj				void System::NotImplementedException::.ctor()
	IL_00ac:            throw Temp_4;                                               //throw
	IL_00ad:                                                                        //ldc.i4				0x7
	IL_00b2:            V_4=7;                                                      //stloc				V_4
	IL_00b6:            /*goto IL_0002;*/goto IL_00bb;                              //br				IL_0002
	IL_00bb:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00bd:                                                                        //ldloc.0
	IL_00be:            Temp_1=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00c3:            V_2=Temp_1;                                                 //stloc.2
	IL_00c4:                                                                        //ldc.i4				0x3
	IL_00c9:            V_4=3;                                                      //stloc				V_4
	IL_00cd:            /*goto IL_0002;*/goto IL_00d2;                              //br				IL_0002
	IL_00d2:                                                                        //ldloc.2
	IL_00d3:            if(V_2!=nullptr)goto IL_0125;                               //brtrue.s				IL_0125
	IL_00d5:                                                                        //ldc.i4				0x9
	IL_00da:            V_4=9;                                                      //stloc				V_4
	IL_00de:            /*goto IL_0002;*/goto IL_00e3;                              //br				IL_0002
	IL_00e3:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00e5:                                                                        //ldarg.1
	IL_00e6:            Temp_9=A_1->Assembly;                                       //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Assembly()
	IL_00eb:            return Temp_9;                                              //ret
	IL_00ec:                                                                        //ldarg.1
	IL_00ed:            Temp_6=A_1->Private;                                        //callvirt				System::Boolean Reflector::CodeModel::IVisibilityConfiguration::get_Private()
	IL_00f2:            return Temp_6;                                              //ret
	IL_00f3:                                                                        //ldc.i4.1
	IL_00f4:            return true;                                                //ret
	IL_00f5:                                                                        //ldloc.0
	IL_00f6:            Temp_0=V_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_00fb:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0100:            V_1=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.1
	IL_0101:                                                                        //ldc.i4				0x2
	IL_0106:            V_4=2;                                                      //stloc				V_4
	IL_010a:            /*goto IL_0002;*/goto IL_010f;                              //br				IL_0002
	IL_010f:                                                                        //ldloc.1
	IL_0110:            if(V_1==nullptr)goto IL_00bd;                               //brfalse.s				IL_00bd
	IL_0112:                                                                        //ldc.i4				0x1
	IL_0117:            V_4=1;                                                      //stloc				V_4
	IL_011b:            /*goto IL_0002;*/goto IL_0120;                              //br				IL_0002
	IL_0120:            goto IL_0079;                                               //br				IL_0079
	IL_0125:                                                                        //ldloc.2
	IL_0126:            Temp_2=V_2->Visibility;                                     //callvirt				Reflector::CodeModel::TypeVisibility Reflector::CodeModel::ITypeDeclaration::get_Visibility()
	IL_012b:            V_3=Temp_2;                                                 //stloc.3
	IL_012c:                                                                        //ldc.i4				0xa
	IL_0131:            V_4=10;                                                     //stloc				V_4
	IL_0135:            /*goto IL_0002;*/goto IL_013a;                              //br				IL_0002
	IL_013a:                                                                        //ldloc.3
	IL_013b:            switch(safe_cast<System::Int32>(V_3)){case 0:goto IL_00ec;case 1:goto IL_0069;case 2:goto IL_0069;case 3:goto IL_00ec;case 4:goto IL_00a0;case 5:goto IL_00e5;case 6:goto IL_0072;case 7:goto IL_0062;};//switch				(IL_00ec,IL_0069,IL_0069,IL_00ec,IL_00a0,IL_00e5,IL_0072,IL_0062)
	IL_0160:                                                                        //ldc.i4				0x6
	IL_0165:            V_4=6;                                                      //stloc				V_4
	IL_0169:            /*goto IL_0002;*/goto IL_016e;                              //br				IL_0002
	IL_016e:            goto IL_00ad;                                               //br				IL_00ad
	IL_0173:            Temp_5=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0178:            throw Temp_5;                                               //throw

}
inline System::Collections::ICollection^ Root::T_x115::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_5 = nullptr;
	System::Collections::IEnumerator^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Object^ Temp_12 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_15 = nullptr;
	System::Collections::IEnumerator^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_17 = nullptr;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_18 = nullptr;
	System::Collections::IEnumerator^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<Reflector::CodeModel::ITypeReference^>^ Temp_21 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_5 = nullptr;
	array<Reflector::CodeModel::ITypeReference^>^ V_6 = nullptr;
	System::Collections::IEnumerator^ V_7 = nullptr;
	System::IDisposable^ V_8 = nullptr;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_10
	IL_0006:            switch(V_10){case 0:goto IL_0384;case 1:goto IL_026c;case 2:goto IL_004f;case 3:goto IL_0039;};//switch				(IL_0384,IL_026c,IL_004f,IL_0039)
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0021:            V_0=Temp_0;                                                 //stloc.0
	IL_0022:                                                                        //ldloc.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=A_0->Interfaces;                                     //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0029:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_1));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_002e:                                                                        //ldc.i4				0x3
	IL_0033:            V_10=3;                                                     //stloc				V_10
	IL_0037:            /*goto IL_0002;*/goto IL_0039;                              //br.s				IL_0002
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_17=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_003f:            if(Temp_17==nullptr)goto IL_0369;                           //brfalse				IL_0369
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_10=2;                                                     //stloc				V_10
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:            goto IL_0245;                                               //br				IL_0245
	IL_004F01:          try{
	IL_0054:                                                                        //ldc.i4				0x2
	IL_0059:            V_10=2;                                                     //stloc				V_10
	IL_005d:            /*goto IL_0061;*/goto IL_005f;                              //br.s				IL_0061
	IL_005f:            goto IL_007e;                                               //br.s				IL_007e
	IL_0061:                                                                        //ldloc				V_10
	IL_0065:            switch(V_10){case 0:goto IL_008b;case 1:goto IL_01ec;case 2:goto IL_005f;case 3:goto IL_01d9;case 4:goto IL_00a2;};//switch				(IL_008b,IL_01ec,IL_005f,IL_01d9,IL_00a2)
	IL_007e:            goto IL_0080;                                               //br.s				IL_0080
	IL_0080:                                                                        //ldc.i4				0x0
	IL_0085:            V_10=0;                                                     //stloc				V_10
	IL_0089:            /*goto IL_0061;*/goto IL_008b;                              //br.s				IL_0061
	IL_008b:                                                                        //ldloc.s				V_7
	IL_008d:            Temp_2=V_7->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0092:            if(Temp_2)goto IL_01a8;                                     //brtrue				IL_01a8
	IL_0097:                                                                        //ldc.i4				0x4
	IL_009c:            V_10=4;                                                     //stloc				V_10
	IL_00a0:            /*goto IL_0061;*/goto IL_00a2;                              //br.s				IL_0061
	IL_00a2:            goto IL_01de;                                               //br				IL_01de
	IL_00A201:          try{
	IL_00a7:                                                                        //ldc.i4				0x4
	IL_00ac:            V_10=4;                                                     //stloc				V_10
	IL_00b0:            /*goto IL_00b4;*/goto IL_00b2;                              //br.s				IL_00b4
	IL_00b2:            goto IL_00d9;                                               //br.s				IL_00d9
	IL_00b4:                                                                        //ldloc				V_10
	IL_00b8:            switch(V_10){case 0:goto IL_012a;case 1:goto IL_00fa;case 2:goto IL_0152;case 3:goto IL_0142;case 4:goto IL_00b2;case 5:goto IL_00e6;case 6:goto IL_0115;};//switch				(IL_012a,IL_00fa,IL_0152,IL_0142,IL_00b2,IL_00e6,IL_0115)
	IL_00d9:            goto IL_00db;                                               //br.s				IL_00db
	IL_00db:                                                                        //ldc.i4				0x5
	IL_00e0:            V_10=5;                                                     //stloc				V_10
	IL_00e4:            /*goto IL_00b4;*/goto IL_00e6;                              //br.s				IL_00b4
	IL_00e6:                                                                        //ldloc.s				V_9
	IL_00e8:            Temp_7=V_9->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ed:            if(Temp_7)goto IL_00fc;                                     //brtrue.s				IL_00fc
	IL_00ef:                                                                        //ldc.i4				0x1
	IL_00f4:            V_10=1;                                                     //stloc				V_10
	IL_00f8:            /*goto IL_00b4;*/goto IL_00fa;                              //br.s				IL_00b4
	IL_00fa:            goto IL_0144;                                               //br.s				IL_0144
	IL_00fc:                                                                        //ldloc.s				V_9
	IL_00fe:            Temp_8=V_9->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0103:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0108:            V_5=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_8);//stloc.s				V_5
	IL_010a:                                                                        //ldc.i4				0x6
	IL_010f:            V_10=6;                                                     //stloc				V_10
	IL_0113:            /*goto IL_00b4;*/goto IL_0115;                              //br.s				IL_00b4
	IL_0115:                                                                        //ldloc.0
	IL_0116:                                                                        //ldloc.s				V_5
	IL_0118:            Temp_9=V_0->Contains(safe_cast<System::Object^>(V_5));      //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_011d:            if(!Temp_9)goto IL_00db;                                    //brfalse.s				IL_00db
	IL_011f:                                                                        //ldc.i4				0x0
	IL_0124:            V_10=0;                                                     //stloc				V_10
	IL_0128:            /*goto IL_00b4;*/goto IL_012a;                              //br.s				IL_00b4
	IL_012a:            goto IL_012c;                                               //br.s				IL_012c
	IL_012c:                                                                        //ldloc.0
	IL_012d:                                                                        //ldloc.s				V_5
	IL_012f:            V_0->Remove(safe_cast<System::Object^>(V_5));               //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_0134:                                                                        //ldc.i4				0x3
	IL_0139:            V_10=3;                                                     //stloc				V_10
	IL_013d:            /*goto IL_00b4;*/goto IL_0142;                              //br				IL_00b4
	IL_0142:            goto IL_00db;                                               //br.s				IL_00db
	IL_0144:                                                                        //ldc.i4				0x2
	IL_0149:            V_10=2;                                                     //stloc				V_10
	IL_014d:            /*goto IL_00b4;*/goto IL_0152;                              //br				IL_00b4
	IL_0152:            goto IL_0080;                                               //leave				IL_0080
	                    ;}
	                    finally{
	IL_0157:            goto IL_016e;                                               //br.s				IL_016e
	IL_0159:                                                                        //ldloc				V_10
	IL_015d:            switch(V_10){case 0:goto IL_0191;case 1:goto IL_01a5;case 2:goto IL_0182;};//switch				(IL_0191,IL_01a5,IL_0182)
	IL_016e:                                                                        //ldloc.s				V_9
	IL_0170:                                                                        //isinst				System::IDisposable
	IL_0175:            V_8=dynamic_cast<System::IDisposable^>(V_9);                //stloc.s				V_8
	IL_0177:                                                                        //ldc.i4				0x2
	IL_017c:            V_10=2;                                                     //stloc				V_10
	IL_0180:            /*goto IL_0159;*/goto IL_0182;                              //br.s				IL_0159
	IL_0182:                                                                        //ldloc.s				V_8
	IL_0184:            if(V_8==nullptr)goto IL_01a7;                               //brfalse.s				IL_01a7
	IL_0186:                                                                        //ldc.i4				0x0
	IL_018b:            V_10=0;                                                     //stloc				V_10
	IL_018f:            /*goto IL_0159;*/goto IL_0191;                              //br.s				IL_0159
	IL_0191:            goto IL_0193;                                               //br.s				IL_0193
	IL_0193:                                                                        //ldloc.s				V_8
	IL_0195:            /*V_8->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_019a:                                                                        //ldc.i4				0x1
	IL_019f:            V_10=1;                                                     //stloc				V_10
	IL_01a3:            /*goto IL_0159;*/goto IL_01a5;                              //br.s				IL_0159
	IL_01a5:            goto IL_01a7;                                               //br.s				IL_01a7
	IL_01a7:                                                                        //endfinally
	                    ;}
	IL_01a8:                                                                        //ldloc.s				V_7
	IL_01aa:            Temp_3=V_7->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01af:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_01b4:            V_3=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_3);//stloc.3
	IL_01b5:                                                                        //ldloc.3
	IL_01b6:            Temp_4=V_3->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_01bb:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_01bd:                                                                        //ldloc.s				V_4
	IL_01bf:            Temp_5=V_4->Interfaces;                                     //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_01c4:            Temp_6=safe_cast<System::Collections::IEnumerable^>(Temp_5)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_01c9:            V_9=Temp_6;                                                 //stloc.s				V_9
	IL_01cb:                                                                        //ldc.i4				0x3
	IL_01d0:            V_10=3;                                                     //stloc				V_10
	IL_01d4:            /*goto IL_0061;*/goto IL_01d9;                              //br				IL_0061
	IL_01d9:            /*goto IL_00a7;*/goto IL_00A201;                            //br				IL_00a7
	IL_01de:                                                                        //ldc.i4				0x1
	IL_01e3:            V_10=1;                                                     //stloc				V_10
	IL_01e7:            /*goto IL_0061;*/goto IL_01ec;                              //br				IL_0061
	IL_01ec:            goto IL_0389;                                               //leave				IL_0389
	                    ;}
	                    finally{
	IL_01f1:            goto IL_0208;                                               //br.s				IL_0208
	IL_01f3:                                                                        //ldloc				V_10
	IL_01f7:            switch(V_10){case 0:goto IL_021c;case 1:goto IL_0242;case 2:goto IL_022e;};//switch				(IL_021c,IL_0242,IL_022e)
	IL_0208:                                                                        //ldloc.s				V_7
	IL_020a:                                                                        //isinst				System::IDisposable
	IL_020f:            V_8=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_8
	IL_0211:                                                                        //ldc.i4				0x0
	IL_0216:            V_10=0;                                                     //stloc				V_10
	IL_021a:            /*goto IL_01f3;*/goto IL_021c;                              //br.s				IL_01f3
	IL_021c:                                                                        //ldloc.s				V_8
	IL_021e:            if(V_8==nullptr)goto IL_0244;                               //brfalse.s				IL_0244
	IL_0220:            goto IL_0223;                                               //br.s				IL_0223
	IL_0222:                                                                        //break
	IL_0223:                                                                        //ldc.i4				0x2
	IL_0228:            V_10=2;                                                     //stloc				V_10
	IL_022c:            /*goto IL_01f3;*/goto IL_022e;                              //br.s				IL_01f3
	IL_022e:            goto IL_0230;                                               //br.s				IL_0230
	IL_0230:                                                                        //ldloc.s				V_8
	IL_0232:            /*V_8->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0237:                                                                        //ldc.i4				0x1
	IL_023c:            V_10=1;                                                     //stloc				V_10
	IL_0240:            /*goto IL_01f3;*/goto IL_0242;                              //br.s				IL_01f3
	IL_0242:            goto IL_0244;                                               //br.s				IL_0244
	IL_0244:                                                                        //endfinally
	                    ;}
	IL_0245:                                                                        //ldarg.0
	IL_0246:            Temp_13=A_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_024b:            Temp_14=Temp_13->Resolve();                                 //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0250:            V_1=Temp_14;                                                //stloc.1
	IL_0251:                                                                        //ldloc.1
	IL_0252:            Temp_15=V_1->Interfaces;                                    //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0257:            Temp_16=safe_cast<System::Collections::IEnumerable^>(Temp_15)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_025c:            V_7=Temp_16;                                                //stloc.s				V_7
	IL_025e:                                                                        //ldc.i4				0x1
	IL_0263:            V_10=1;                                                     //stloc				V_10
	IL_0267:            /*goto IL_0002;*/goto IL_026c;                              //br				IL_0002
	IL_026c:            /*goto IL_026e;*/goto IL_026C01;                            //br.s				IL_026e
	IL_026C01:          try{
	IL_026e:                                                                        //ldc.i4				0x5
	IL_0273:            V_10=5;                                                     //stloc				V_10
	IL_0277:            /*goto IL_027b;*/goto IL_0279;                              //br.s				IL_027b
	IL_0279:            goto IL_02a0;                                               //br.s				IL_02a0
	IL_027b:                                                                        //ldloc				V_10
	IL_027f:            switch(V_10){case 0:goto IL_02e2;case 1:goto IL_0316;case 2:goto IL_02ba;case 3:goto IL_0306;case 4:goto IL_02ef;case 5:goto IL_0279;case 6:goto IL_02ce;};//switch				(IL_02e2,IL_0316,IL_02ba,IL_0306,IL_02ef,IL_0279,IL_02ce)
	IL_02a0:            goto IL_02e4;                                               //br.s				IL_02e4
	IL_02a2:                                                                        //ldloc.s				V_7
	IL_02a4:            Temp_12=V_7->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_02a9:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_02ae:            V_2=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_12);//stloc.2
	IL_02af:                                                                        //ldc.i4				0x2
	IL_02b4:            V_10=2;                                                     //stloc				V_10
	IL_02b8:            /*goto IL_027b;*/goto IL_02ba;                              //br.s				IL_027b
	IL_02ba:                                                                        //ldloc.0
	IL_02bb:                                                                        //ldloc.2
	IL_02bc:            Temp_10=V_0->Contains(safe_cast<System::Object^>(V_2));     //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_02c1:            if(!Temp_10)goto IL_02e4;                                   //brfalse.s				IL_02e4
	IL_02c3:                                                                        //ldc.i4				0x6
	IL_02c8:            V_10=6;                                                     //stloc				V_10
	IL_02cc:            /*goto IL_027b;*/goto IL_02ce;                              //br.s				IL_027b
	IL_02ce:            goto IL_02d0;                                               //br.s				IL_02d0
	IL_02d0:                                                                        //ldloc.0
	IL_02d1:                                                                        //ldloc.2
	IL_02d2:            V_0->Remove(safe_cast<System::Object^>(V_2));               //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_02d7:                                                                        //ldc.i4				0x0
	IL_02dc:            V_10=0;                                                     //stloc				V_10
	IL_02e0:            /*goto IL_027b;*/goto IL_02e2;                              //br.s				IL_027b
	IL_02e2:            goto IL_02e4;                                               //br.s				IL_02e4
	IL_02e4:                                                                        //ldc.i4				0x4
	IL_02e9:            V_10=4;                                                     //stloc				V_10
	IL_02ed:            /*goto IL_027b;*/goto IL_02ef;                              //br.s				IL_027b
	IL_02ef:                                                                        //ldloc.s				V_7
	IL_02f1:            Temp_11=V_7->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_02f6:            if(Temp_11)goto IL_02a2;                                    //brtrue.s				IL_02a2
	IL_02f8:                                                                        //ldc.i4				0x3
	IL_02fd:            V_10=3;                                                     //stloc				V_10
	IL_0301:            /*goto IL_027b;*/goto IL_0306;                              //br				IL_027b
	IL_0306:            goto IL_0308;                                               //br.s				IL_0308
	IL_0308:                                                                        //ldc.i4				0x1
	IL_030d:            V_10=1;                                                     //stloc				V_10
	IL_0311:            /*goto IL_027b;*/goto IL_0316;                              //br				IL_027b
	IL_0316:            goto IL_0369;                                               //leave.s				IL_0369
	                    ;}
	                    finally{
	IL_0318:            goto IL_032f;                                               //br.s				IL_032f
	IL_031a:                                                                        //ldloc				V_10
	IL_031e:            switch(V_10){case 0:goto IL_0366;case 1:goto IL_0343;case 2:goto IL_0352;};//switch				(IL_0366,IL_0343,IL_0352)
	IL_032f:                                                                        //ldloc.s				V_7
	IL_0331:                                                                        //isinst				System::IDisposable
	IL_0336:            V_8=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_8
	IL_0338:                                                                        //ldc.i4				0x1
	IL_033d:            V_10=1;                                                     //stloc				V_10
	IL_0341:            /*goto IL_031a;*/goto IL_0343;                              //br.s				IL_031a
	IL_0343:                                                                        //ldloc.s				V_8
	IL_0345:            if(V_8==nullptr)goto IL_0368;                               //brfalse.s				IL_0368
	IL_0347:                                                                        //ldc.i4				0x2
	IL_034c:            V_10=2;                                                     //stloc				V_10
	IL_0350:            /*goto IL_031a;*/goto IL_0352;                              //br.s				IL_031a
	IL_0352:            goto IL_0354;                                               //br.s				IL_0354
	IL_0354:                                                                        //ldloc.s				V_8
	IL_0356:            /*V_8->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_035b:                                                                        //ldc.i4				0x0
	IL_0360:            V_10=0;                                                     //stloc				V_10
	IL_0364:            /*goto IL_031a;*/goto IL_0366;                              //br.s				IL_031a
	IL_0366:            goto IL_0368;                                               //br.s				IL_0368
	IL_0368:                                                                        //endfinally
	                    ;}
	IL_0369:                                                                        //ldarg.0
	IL_036a:            Temp_18=A_0->Interfaces;                                    //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_036f:            Temp_19=safe_cast<System::Collections::IEnumerable^>(Temp_18)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0374:            V_7=Temp_19;                                                //stloc.s				V_7
	IL_0376:                                                                        //ldc.i4				0x0
	IL_037b:            V_10=0;                                                     //stloc				V_10
	IL_037f:            /*goto IL_0002;*/goto IL_0384;                              //br				IL_0002
	IL_0384:            /*goto IL_0054;*/goto IL_004F01;                            //br				IL_0054
	IL_0389:                                                                        //ldloc.0
	IL_038a:            Temp_20=V_0->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_038f:                                                                        //conv.ovf.u4
	IL_0390:            Temp_21=gcnew array<Reflector::CodeModel::ITypeReference^>(safe_cast<System::UInt32>(Temp_20));//newarr				Reflector::CodeModel::ITypeReference
	IL_0395:            V_6=Temp_21;                                                //stloc.s				V_6
	IL_0397:                                                                        //ldloc.0
	IL_0398:                                                                        //ldloc.s				V_6
	IL_039a:                                                                        //ldc.i4.0
	IL_039b:            V_0->CopyTo(safe_cast<System::Array^>(V_6),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_03a0:                                                                        //ldloc.s				V_6
	IL_03a2:            return safe_cast<System::Collections::ICollection^>(V_6);   //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ITypeDeclaration^>^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int32 Temp_4 = 0;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Collections::ArrayList^ Temp_7 = nullptr;
	System::Collections::IEnumerator^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_5
	IL_0011:            switch(V_5){case 0:goto IL_0034;case 1:goto IL_0165;case 2:goto IL_004b;};//switch				(IL_0034,IL_0165,IL_004b)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=A_0->NestedTypes;                                    //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_0028:            V_0=Temp_0;                                                 //stloc.0
	IL_0029:                                                                        //ldc.i4				0x0
	IL_002e:            V_5=0;                                                      //stloc				V_5
	IL_0032:            /*goto IL_000d;*/goto IL_0034;                              //br.s				IL_000d
	IL_0034:                                                                        //ldloc.0
	IL_0035:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003a:                                                                        //ldc.i4.0
	IL_003b:            if(Temp_1<=0)goto IL_0172;                                  //ble				IL_0172
	IL_0040:                                                                        //ldc.i4				0x2
	IL_0045:            V_5=2;                                                      //stloc				V_5
	IL_0049:            /*goto IL_000d;*/goto IL_004b;                              //br.s				IL_000d
	IL_004b:            goto IL_0149;                                               //br				IL_0149
	IL_004B01:          try{
	IL_0050:                                                                        //ldc.i4				0x6
	IL_0055:            V_5=6;                                                      //stloc				V_5
	IL_0059:            /*goto IL_005d;*/goto IL_005b;                              //br.s				IL_005d
	IL_005b:            goto IL_0082;                                               //br.s				IL_0082
	IL_005d:                                                                        //ldloc				V_5
	IL_0061:            switch(V_5){case 0:goto IL_00f7;case 1:goto IL_00e7;case 2:goto IL_00cf;case 3:goto IL_009b;case 4:goto IL_00af;case 5:goto IL_00bc;case 6:goto IL_005b;};//switch				(IL_00f7,IL_00e7,IL_00cf,IL_009b,IL_00af,IL_00bc,IL_005b)
	IL_0082:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0084:                                                                        //ldloc.3
	IL_0085:            Temp_6=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008a:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_008f:            V_2=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_6);//stloc.2
	IL_0090:                                                                        //ldc.i4				0x3
	IL_0095:            V_5=3;                                                      //stloc				V_5
	IL_0099:            /*goto IL_005d;*/goto IL_009b;                              //br.s				IL_005d
	IL_009b:                                                                        //ldloc.2
	IL_009c:                                                                        //ldarg.1
	IL_009d:            Temp_3=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00a2:            if(!Temp_3)goto IL_00b1;                                    //brfalse.s				IL_00b1
	IL_00a4:                                                                        //ldc.i4				0x4
	IL_00a9:            V_5=4;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_005d;*/goto IL_00af;                              //br.s				IL_005d
	IL_00af:            goto IL_00d1;                                               //br.s				IL_00d1
	IL_00b1:                                                                        //ldc.i4				0x5
	IL_00b6:            V_5=5;                                                      //stloc				V_5
	IL_00ba:            /*goto IL_005d;*/goto IL_00bc;                              //br.s				IL_005d
	IL_00bc:                                                                        //ldloc.3
	IL_00bd:            Temp_5=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00c2:            if(Temp_5)goto IL_0084;                                     //brtrue.s				IL_0084
	IL_00c4:                                                                        //ldc.i4				0x2
	IL_00c9:            V_5=2;                                                      //stloc				V_5
	IL_00cd:            /*goto IL_005d;*/goto IL_00cf;                              //br.s				IL_005d
	IL_00cf:            goto IL_00e9;                                               //br.s				IL_00e9
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:                                                                        //ldloc.2
	IL_00d3:            Temp_4=V_1->Add(safe_cast<System::Object^>(V_2));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00d8:                                                                        //pop
	IL_00d9:                                                                        //ldc.i4				0x1
	IL_00de:            V_5=1;                                                      //stloc				V_5
	IL_00e2:            /*goto IL_005d;*/goto IL_00e7;                              //br				IL_005d
	IL_00e7:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_00e9:                                                                        //ldc.i4				0x0
	IL_00ee:            V_5=0;                                                      //stloc				V_5
	IL_00f2:            /*goto IL_005d;*/goto IL_00f7;                              //br				IL_005d
	IL_00f7:            goto IL_016a;                                               //leave.s				IL_016a
	                    ;}
	                    finally{
	IL_00f9:            goto IL_0110;                                               //br.s				IL_0110
	IL_00fb:                                                                        //ldloc				V_5
	IL_00ff:            switch(V_5){case 0:goto IL_0132;case 1:goto IL_0123;case 2:goto IL_0146;};//switch				(IL_0132,IL_0123,IL_0146)
	IL_0110:                                                                        //ldloc.3
	IL_0111:                                                                        //isinst				System::IDisposable
	IL_0116:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0118:                                                                        //ldc.i4				0x1
	IL_011d:            V_5=1;                                                      //stloc				V_5
	IL_0121:            /*goto IL_00fb;*/goto IL_0123;                              //br.s				IL_00fb
	IL_0123:                                                                        //ldloc.s				V_4
	IL_0125:            if(V_4==nullptr)goto IL_0148;                               //brfalse.s				IL_0148
	IL_0127:                                                                        //ldc.i4				0x0
	IL_012c:            V_5=0;                                                      //stloc				V_5
	IL_0130:            /*goto IL_00fb;*/goto IL_0132;                              //br.s				IL_00fb
	IL_0132:            goto IL_0134;                                               //br.s				IL_0134
	IL_0134:                                                                        //ldloc.s				V_4
	IL_0136:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_013b:                                                                        //ldc.i4				0x2
	IL_0140:            V_5=2;                                                      //stloc				V_5
	IL_0144:            /*goto IL_00fb;*/goto IL_0146;                              //br.s				IL_00fb
	IL_0146:            goto IL_0148;                                               //br.s				IL_0148
	IL_0148:                                                                        //endfinally
	                    ;}
	IL_0149:                                                                        //ldc.i4.0
	IL_014a:            Temp_7=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_014f:            V_1=Temp_7;                                                 //stloc.1
	IL_0150:                                                                        //ldloc.0
	IL_0151:            Temp_8=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0156:            V_3=Temp_8;                                                 //stloc.3
	IL_0157:                                                                        //ldc.i4				0x1
	IL_015c:            V_5=1;                                                      //stloc				V_5
	IL_0160:            /*goto IL_000d;*/goto IL_0165;                              //br				IL_000d
	IL_0165:            /*goto IL_0050;*/goto IL_004B01;                            //br				IL_0050
	IL_016a:                                                                        //ldloc.1
	IL_016b:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0170:                                                                        //ldloc.1
	IL_0171:            return safe_cast<System::Collections::ICollection^>(V_1);   //ret
	IL_0172:                                                                        //ldc.i4.0
	IL_0173:            Temp_2=gcnew array<Reflector::CodeModel::ITypeDeclaration^>(0);//newarr				Reflector::CodeModel::ITypeDeclaration
	IL_0178:            return safe_cast<System::Collections::ICollection^>(Temp_2);//ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclarationCollection^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_005d;case 1:goto IL_008f;case 2:goto IL_007f;case 3:goto IL_00a6;case 4:goto IL_0037;case 5:goto IL_0048;};//switch				(IL_005d,IL_008f,IL_007f,IL_00a6,IL_0037,IL_0048)
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_0=A_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0029:            V_0=Temp_0;                                                 //stloc.0
	IL_002a:                                                                        //ldc.i4.0
	IL_002b:            V_1=0;                                                      //stloc.1
	IL_002c:                                                                        //ldc.i4				0x4
	IL_0031:            V_2=4;                                                      //stloc				V_2
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:            goto IL_0081;                                               //br.s				IL_0081
	IL_0039:                                                                        //ldloc.1
	IL_003a:                                                                        //ldc.i4.1
	IL_003b:                                                                        //add
	IL_003c:            V_1=(V_1 + 1);                                              //stloc.1
	IL_003d:                                                                        //ldc.i4				0x5
	IL_0042:            V_2=5;                                                      //stloc				V_2
	IL_0046:            /*goto IL_0002;*/goto IL_0048;                              //br.s				IL_0002
	IL_0048:            goto IL_0081;                                               //br.s				IL_0081
	IL_004a:                                                                        //ldloc.0
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_5=V_0[V_1];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0051:            return Temp_5;                                              //ret
	IL_0052:                                                                        //ldc.i4				0x0
	IL_0057:            V_2=0;                                                      //stloc				V_2
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:                                                                        //ldarg.1
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_1=V_0[V_1];                                            //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodDeclarationCollection::get_Item(System::Int32)
	IL_0065:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_1)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_006a:            Temp_3=(A_1 == Temp_2);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_006f:            if(!Temp_3)goto IL_0039;                                    //brfalse.s				IL_0039
	IL_0071:            goto IL_0074;                                               //br.s				IL_0074
	IL_0073:                                                                        //break
	IL_0074:                                                                        //ldc.i4				0x2
	IL_0079:            V_2=2;                                                      //stloc				V_2
	IL_007d:            /*goto IL_0002;*/goto IL_007f;                              //br.s				IL_0002
	IL_007f:            goto IL_004a;                                               //br.s				IL_004a
	IL_0081:                                                                        //ldc.i4				0x1
	IL_0086:            V_2=1;                                                      //stloc				V_2
	IL_008a:            /*goto IL_0002;*/goto IL_008f;                              //br				IL_0002
	IL_008f:                                                                        //ldloc.1
	IL_0090:                                                                        //ldloc.0
	IL_0091:            Temp_4=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0096:            if(V_1<Temp_4)goto IL_0052;                                 //blt.s				IL_0052
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_2=3;                                                      //stloc				V_2
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00a8:                                                                        //ldnull
	IL_00a9:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_3=12;                                                     //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_2=3;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_004a;                                               //br.s				IL_004a
	IL_0021:                                                                        //ldloc				V_2
	IL_0025:            switch(V_2){case 0:goto IL_00fc;case 1:goto IL_00ae;case 2:goto IL_00d3;case 3:goto IL_0014;case 4:goto IL_00bf;case 5:goto IL_0089;case 6:goto IL_0097;case 7:goto IL_005b;};//switch				(IL_00fc,IL_00ae,IL_00d3,IL_0014,IL_00bf,IL_0089,IL_0097,IL_005b)
	IL_004a:                                                                        //ldarg.0
	IL_004b:            if(A_0==nullptr)goto IL_0101;                               //brfalse				IL_0101
	IL_0050:                                                                        //ldc.i4				0x7
	IL_0055:            V_2=7;                                                      //stloc				V_2
	IL_0059:            /*goto IL_0021;*/goto IL_005b;                              //br.s				IL_0021
	IL_005b:            goto IL_0099;                                               //br.s				IL_0099
	IL_005d:                                                                        //ldloc.1
	IL_005e:            Temp_0=V_1->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0063:                                                                        //ldstr				L"\x7929\x552B\x5D2D\x442F\x5731\x5933"
	IL_0068:                                                                        //ldloc				V_3
	IL_006c:            Temp_1=a(L"\x7929\x552B\x5D2D\x442F\x5731\x5933",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0076:            return Temp_2;                                              //ret
	IL_0077:                                                                        //ldloc.0
	IL_0078:            Temp_3=V_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_007d:            V_1=Temp_3;                                                 //stloc.1
	IL_007e:                                                                        //ldc.i4				0x5
	IL_0083:            V_2=5;                                                      //stloc				V_2
	IL_0087:            /*goto IL_0021;*/goto IL_0089;                              //br.s				IL_0021
	IL_0089:                                                                        //ldloc.1
	IL_008a:            if(V_1==nullptr)goto IL_00c1;                               //brfalse.s				IL_00c1
	IL_008c:                                                                        //ldc.i4				0x6
	IL_0091:            V_2=6;                                                      //stloc				V_2
	IL_0095:            /*goto IL_0021;*/goto IL_0097;                              //br.s				IL_0021
	IL_0097:            goto IL_00c5;                                               //br.s				IL_00c5
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_7=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_009f:            V_0=Temp_7;                                                 //stloc.0
	IL_00a0:                                                                        //ldc.i4				0x1
	IL_00a5:            V_2=1;                                                      //stloc				V_2
	IL_00a9:            /*goto IL_0021;*/goto IL_00ae;                              //br				IL_0021
	IL_00ae:                                                                        //ldloc.0
	IL_00af:            if(V_0!=nullptr)goto IL_0077;                               //brtrue.s				IL_0077
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_2=4;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_0021;*/goto IL_00bf;                              //br				IL_0021
	IL_00bf:            goto IL_00c3;                                               //br.s				IL_00c3
	IL_00c1:                                                                        //ldc.i4.0
	IL_00c2:            return false;                                               //ret
	IL_00c3:                                                                        //ldc.i4.0
	IL_00c4:            return false;                                               //ret
	IL_00c5:                                                                        //ldc.i4				0x2
	IL_00ca:            V_2=2;                                                      //stloc				V_2
	IL_00ce:            /*goto IL_0021;*/goto IL_00d3;                              //br				IL_0021
	IL_00d3:                                                                        //ldloc.1
	IL_00d4:            Temp_4=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00d9:                                                                        //ldstr				L"\x6F29\x422B\x5B2D\x5D2F"
	IL_00de:                                                                        //ldloc				V_3
	IL_00e2:            Temp_5=a(L"\x6F29\x422B\x5B2D\x5D2F",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00ec:            if(!Temp_6)goto IL_00c1;                                    //brfalse.s				IL_00c1
	IL_00ee:                                                                        //ldc.i4				0x0
	IL_00f3:            V_2=0;                                                      //stloc				V_2
	IL_00f7:            /*goto IL_0021;*/goto IL_00fc;                              //br				IL_0021
	IL_00fc:            goto IL_005d;                                               //br				IL_005d
	IL_0101:                                                                        //ldc.i4.0
	IL_0102:            return false;                                               //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventReference::Resolve()
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            Temp_1=V_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_000d:            if(Temp_1==nullptr)goto IL_0028;                            //brfalse.s				IL_0028
	IL_000f:                                                                        //ldc.i4.1
	IL_0010:                                                                        //dup
	IL_0011:                                                                        //dup
	IL_0012:                                                                        //ldc.i4.7
	IL_0013:                                                                        //add
	IL_0014:                                                                        //bgt				IL_0010
	IL_0019:                                                                        //pop
	IL_001a:            goto IL_001c;                                               //br.s				IL_001c
	IL_001c:                                                                        //ldloc.0
	IL_001d:            Temp_2=V_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_0022:            Temp_3=Temp_2->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0027:            return Temp_3;                                              //ret
	IL_0028:                                                                        //ldnull
	IL_0029:            return nullptr;                                             //ret

}
inline System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IType^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_6=9;                                                      //stloc				V_6
	IL_0009:            goto IL_002b;                                               //br.s				IL_002b
	IL_000b:                                                                        //ldc.i4.2
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.4
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_0054;case 1:goto IL_003d;case 2:goto IL_022d;};//switch				(IL_0054,IL_003d,IL_022d)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0031:            V_0=Temp_0;                                                 //stloc.0
	IL_0032:                                                                        //ldc.i4				0x1
	IL_0037:            V_5=1;                                                      //stloc				V_5
	IL_003b:            /*goto IL_000b;*/goto IL_003d;                              //br.s				IL_000b
	IL_003d:                                                                        //ldloc.0
	IL_003e:            Temp_3=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0043:                                                                        //ldc.i4.0
	IL_0044:            if(Temp_3<=0)goto IL_0232;                                  //ble				IL_0232
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_5=0;                                                      //stloc				V_5
	IL_0052:            /*goto IL_000b;*/goto IL_0054;                              //br.s				IL_000b
	IL_0054:            goto IL_0214;                                               //br				IL_0214
	IL_005401:          try{
	IL_0059:            goto IL_0094;                                               //br.s				IL_0094
	IL_005b:                                                                        //ldloc				V_5
	IL_005f:            switch(V_5){case 0:goto IL_0116;case 1:goto IL_015e;case 2:goto IL_018a;case 3:goto IL_0179;case 4:goto IL_01cc;case 5:goto IL_00a1;case 6:goto IL_00d0;case 7:goto IL_00bf;case 8:goto IL_013a;case 9:goto IL_00e0;case 10:goto IL_00ae;case 11:goto IL_00f7;};//switch				(IL_0116,IL_015e,IL_018a,IL_0179,IL_01cc,IL_00a1,IL_00d0,IL_00bf,IL_013a,IL_00e0,IL_00ae,IL_00f7)
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            V_2=0;                                                      //stloc.2
	IL_0096:                                                                        //ldc.i4				0x5
	IL_009b:            V_5=5;                                                      //stloc				V_5
	IL_009f:            /*goto IL_005b;*/goto IL_00a1;                              //br.s				IL_005b
	IL_00a1:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00a3:                                                                        //ldc.i4				0xa
	IL_00a8:            V_5=10;                                                     //stloc				V_5
	IL_00ac:            /*goto IL_005b;*/goto IL_00ae;                              //br.s				IL_005b
	IL_00ae:                                                                        //ldloc.2
	IL_00af:            if(V_2==0)goto IL_0163;                                     //brfalse				IL_0163
	IL_00b4:                                                                        //ldc.i4				0x7
	IL_00b9:            V_5=7;                                                      //stloc				V_5
	IL_00bd:            /*goto IL_005b;*/goto IL_00bf;                              //br.s				IL_005b
	IL_00bf:            goto IL_0118;                                               //br.s				IL_0118
	IL_00c1:                                                                        //ldloc.2
	IL_00c2:                                                                        //ldc.i4.1
	IL_00c3:                                                                        //add
	IL_00c4:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00c5:                                                                        //ldc.i4				0x6
	IL_00ca:            V_5=6;                                                      //stloc				V_5
	IL_00ce:            /*goto IL_005b;*/goto IL_00d0;                              //br.s				IL_005b
	IL_00d0:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00d2:                                                                        //ldc.i4				0x9
	IL_00d7:            V_5=9;                                                      //stloc				V_5
	IL_00db:            /*goto IL_005b;*/goto IL_00e0;                              //br				IL_005b
	IL_00e0:                                                                        //ldloc.2
	IL_00e1:                                                                        //ldloc.0
	IL_00e2:            Temp_9=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00e7:            if(V_2<Temp_9)goto IL_00a3;                                 //blt.s				IL_00a3
	IL_00e9:                                                                        //ldc.i4				0xb
	IL_00ee:            V_5=11;                                                     //stloc				V_5
	IL_00f2:            /*goto IL_005b;*/goto IL_00f7;                              //br				IL_005b
	IL_00f7:            goto IL_018f;                                               //br				IL_018f
	IL_00fc:                                                                        //ldloc.1
	IL_00fd:                                                                        //ldloc.3
	IL_00fe:            Temp_5=V_3->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_0103:            V_1->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0108:                                                                        //ldc.i4				0x0
	IL_010d:            V_5=0;                                                      //stloc				V_5
	IL_0111:            /*goto IL_005b;*/goto IL_0116;                              //br				IL_005b
	IL_0116:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0118:                                                                        //ldloc.1
	IL_0119:                                                                        //ldstr				L"\x0B26\x0928"
	IL_011e:                                                                        //ldloc				V_6
	IL_0122:            Temp_7=a(L"\x0B26\x0928",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0127:            V_1->Write(Temp_7);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_012c:                                                                        //ldc.i4				0x8
	IL_0131:            V_5=8;                                                      //stloc				V_5
	IL_0135:            /*goto IL_005b;*/goto IL_013a;                              //br				IL_005b
	IL_013a:            goto IL_0163;                                               //br.s				IL_0163
	IL_013c:                                                                        //ldloc.1
	IL_013d:                                                                        //ldstr				L"\x1826\x1628\x142A"
	IL_0142:                                                                        //ldloc				V_6
	IL_0146:            Temp_6=a(L"\x1826\x1628\x142A",V_6);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014b:            V_1->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0150:                                                                        //ldc.i4				0x1
	IL_0155:            V_5=1;                                                      //stloc				V_5
	IL_0159:            /*goto IL_005b;*/goto IL_015e;                              //br				IL_005b
	IL_015e:            goto IL_00c1;                                               //br				IL_00c1
	IL_0163:                                                                        //ldloc.0
	IL_0164:                                                                        //ldloc.2
	IL_0165:            Temp_8=V_0[V_2];                                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_016a:            V_3=Temp_8;                                                 //stloc.3
	IL_016b:                                                                        //ldc.i4				0x3
	IL_0170:            V_5=3;                                                      //stloc				V_5
	IL_0174:            /*goto IL_005b;*/goto IL_0179;                              //br				IL_005b
	IL_0179:                                                                        //ldloc.3
	IL_017a:            if(V_3==nullptr)goto IL_013c;                               //brfalse.s				IL_013c
	IL_017c:                                                                        //ldc.i4				0x2
	IL_0181:            V_5=2;                                                      //stloc				V_5
	IL_0185:            /*goto IL_005b;*/goto IL_018a;                              //br				IL_005b
	IL_018a:            goto IL_00fc;                                               //br				IL_00fc
	IL_018f:                                                                        //ldarg.0
	IL_0190:            Temp_10=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0195:                                                                        //ldstr				L"\x1B26"
	IL_019a:                                                                        //ldloc				V_6
	IL_019e:            Temp_11=a(L"\x1B26",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a3:                                                                        //ldloc.1
	IL_01a4:            Temp_12=V_1->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01a9:                                                                        //ldstr				L"\x1926"
	IL_01ae:                                                                        //ldloc				V_6
	IL_01b2:            Temp_13=a(L"\x1926",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b7:            Temp_14=System::String::Concat(Temp_10,Temp_11,Temp_12,Temp_13);//call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_01bc:            V_4=Temp_14;                                                //stloc.s				V_4
	IL_01be:                                                                        //ldc.i4				0x4
	IL_01c3:            V_5=4;                                                      //stloc				V_5
	IL_01c7:            /*goto IL_005b;*/goto IL_01cc;                              //br				IL_005b
	IL_01cc:            goto IL_0239;                                               //leave.s				IL_0239
	                    ;}
	                    finally{
	IL_01ce:                                                                        //ldc.i4				0x2
	IL_01d3:            V_5=2;                                                      //stloc				V_5
	IL_01d7:            /*goto IL_01db;*/goto IL_01d9;                              //br.s				IL_01db
	IL_01d9:            goto IL_01f0;                                               //br.s				IL_01f0
	IL_01db:                                                                        //ldloc				V_5
	IL_01df:            switch(V_5){case 0:goto IL_0211;case 1:goto IL_01fe;case 2:goto IL_01d9;};//switch				(IL_0211,IL_01fe,IL_01d9)
	IL_01f0:                                                                        //ldloc.1
	IL_01f1:            if(V_1==nullptr)goto IL_0213;                               //brfalse.s				IL_0213
	IL_01f3:                                                                        //ldc.i4				0x1
	IL_01f8:            V_5=1;                                                      //stloc				V_5
	IL_01fc:            /*goto IL_01db;*/goto IL_01fe;                              //br.s				IL_01db
	IL_01fe:            goto IL_0200;                                               //br.s				IL_0200
	IL_0200:                                                                        //ldloc.1
	IL_0201:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0206:                                                                        //ldc.i4				0x0
	IL_020b:            V_5=0;                                                      //stloc				V_5
	IL_020f:            /*goto IL_01db;*/goto IL_0211;                              //br.s				IL_01db
	IL_0211:            goto IL_0213;                                               //br.s				IL_0213
	IL_0213:                                                                        //endfinally
	                    ;}
	IL_0214:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0219:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_021e:            V_1=Temp_2;                                                 //stloc.1
	IL_021f:                                                                        //ldc.i4				0x2
	IL_0224:            V_5=2;                                                      //stloc				V_5
	IL_0228:            /*goto IL_000b;*/goto IL_022d;                              //br				IL_000b
	IL_022d:            /*goto IL_0059;*/goto IL_005401;                            //br				IL_0059
	IL_0232:                                                                        //ldarg.0
	IL_0233:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0238:            return Temp_4;                                              //ret
	IL_0239:                                                                        //ldloc.s				V_4
	IL_023b:            return V_4;                                                 //ret

}
inline System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_0=7;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_000f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0014:            Temp_1=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0019:                                                                        //ldstr				L"\x0B24"
	IL_001e:                                                                        //ldloc				V_0
	IL_0022:            Temp_2=a(L"\x0B24",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_3=Root::T_x115::M_x13(A_0);                            //call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::IPropertyReference^)
	IL_002d:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0032:            return Temp_4;                                              //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x12(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::IPropertyDeclaration^>^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IPropertyDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0029;case 1:goto IL_004b;case 2:goto IL_018e;};//switch				(IL_0029,IL_004b,IL_018e)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=A_0->Properties;                                     //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_001d:            V_0=Temp_0;                                                 //stloc.0
	IL_001e:                                                                        //ldc.i4				0x0
	IL_0023:            V_5=0;                                                      //stloc				V_5
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:                                                                        //ldc.i4.7
	IL_002a:                                                                        //dup
	IL_002b:                                                                        //dup
	IL_002c:                                                                        //ldc.i4.5
	IL_002d:                                                                        //sub
	IL_002e:                                                                        //blt				IL_002a
	IL_0033:                                                                        //pop
	IL_0034:                                                                        //ldloc.0
	IL_0035:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003a:                                                                        //ldc.i4.0
	IL_003b:            if(Temp_1<=0)goto IL_019b;                                  //ble				IL_019b
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_5=1;                                                      //stloc				V_5
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:            goto IL_0172;                                               //br				IL_0172
	IL_004B01:          try{
	IL_0050:                                                                        //ldc.i4				0x6
	IL_0055:            V_5=6;                                                      //stloc				V_5
	IL_0059:            /*goto IL_005d;*/goto IL_005b;                              //br.s				IL_005d
	IL_005b:            goto IL_008a;                                               //br.s				IL_008a
	IL_005d:                                                                        //ldloc				V_5
	IL_0061:            switch(V_5){case 0:goto IL_00b1;case 1:goto IL_00f9;case 2:goto IL_0110;case 3:goto IL_00a3;case 4:goto IL_0120;case 5:goto IL_00be;case 6:goto IL_005b;case 7:goto IL_00e9;case 8:goto IL_00d1;};//switch				(IL_00b1,IL_00f9,IL_0110,IL_00a3,IL_0120,IL_00be,IL_005b,IL_00e9,IL_00d1)
	IL_008a:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_008c:                                                                        //ldloc.3
	IL_008d:            Temp_8=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0092:                                                                        //castclass				Reflector::CodeModel::IPropertyDeclaration
	IL_0097:            V_2=safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_8);//stloc.2
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_5=3;                                                      //stloc				V_5
	IL_00a1:            /*goto IL_005d;*/goto IL_00a3;                              //br.s				IL_005d
	IL_00a3:                                                                        //ldarg.1
	IL_00a4:            if(A_1==nullptr)goto IL_00d3;                               //brfalse.s				IL_00d3
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_5=0;                                                      //stloc				V_5
	IL_00af:            /*goto IL_005d;*/goto IL_00b1;                              //br.s				IL_005d
	IL_00b1:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00b3:                                                                        //ldc.i4				0x5
	IL_00b8:            V_5=5;                                                      //stloc				V_5
	IL_00bc:            /*goto IL_005d;*/goto IL_00be;                              //br.s				IL_005d
	IL_00be:                                                                        //ldloc.3
	IL_00bf:            Temp_7=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00c4:            if(Temp_7)goto IL_008c;                                     //brtrue.s				IL_008c
	IL_00c6:                                                                        //ldc.i4				0x8
	IL_00cb:            V_5=8;                                                      //stloc				V_5
	IL_00cf:            /*goto IL_005d;*/goto IL_00d1;                              //br.s				IL_005d
	IL_00d1:            goto IL_0112;                                               //br.s				IL_0112
	IL_00d3:                                                                        //ldloc.1
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:            Temp_6=V_1->Add(safe_cast<System::Object^>(V_2));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00da:                                                                        //pop
	IL_00db:                                                                        //ldc.i4				0x7
	IL_00e0:            V_5=7;                                                      //stloc				V_5
	IL_00e4:            /*goto IL_005d;*/goto IL_00e9;                              //br				IL_005d
	IL_00e9:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_00eb:                                                                        //ldc.i4				0x1
	IL_00f0:            V_5=1;                                                      //stloc				V_5
	IL_00f4:            /*goto IL_005d;*/goto IL_00f9;                              //br				IL_005d
	IL_00f9:                                                                        //ldloc.2
	IL_00fa:                                                                        //ldarg.1
	IL_00fb:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IPropertyReference^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IPropertyReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0100:            if(!Temp_5)goto IL_00b3;                                    //brfalse.s				IL_00b3
	IL_0102:                                                                        //ldc.i4				0x2
	IL_0107:            V_5=2;                                                      //stloc				V_5
	IL_010b:            /*goto IL_005d;*/goto IL_0110;                              //br				IL_005d
	IL_0110:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_0112:                                                                        //ldc.i4				0x4
	IL_0117:            V_5=4;                                                      //stloc				V_5
	IL_011b:            /*goto IL_005d;*/goto IL_0120;                              //br				IL_005d
	IL_0120:            goto IL_0193;                                               //leave.s				IL_0193
	                    ;}
	                    finally{
	IL_0122:            goto IL_0139;                                               //br.s				IL_0139
	IL_0124:                                                                        //ldloc				V_5
	IL_0128:            switch(V_5){case 0:goto IL_016f;case 1:goto IL_014c;case 2:goto IL_015b;};//switch				(IL_016f,IL_014c,IL_015b)
	IL_0139:                                                                        //ldloc.3
	IL_013a:                                                                        //isinst				System::IDisposable
	IL_013f:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0141:                                                                        //ldc.i4				0x1
	IL_0146:            V_5=1;                                                      //stloc				V_5
	IL_014a:            /*goto IL_0124;*/goto IL_014c;                              //br.s				IL_0124
	IL_014c:                                                                        //ldloc.s				V_4
	IL_014e:            if(V_4==nullptr)goto IL_0171;                               //brfalse.s				IL_0171
	IL_0150:                                                                        //ldc.i4				0x2
	IL_0155:            V_5=2;                                                      //stloc				V_5
	IL_0159:            /*goto IL_0124;*/goto IL_015b;                              //br.s				IL_0124
	IL_015b:            goto IL_015d;                                               //br.s				IL_015d
	IL_015d:                                                                        //ldloc.s				V_4
	IL_015f:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0164:                                                                        //ldc.i4				0x0
	IL_0169:            V_5=0;                                                      //stloc				V_5
	IL_016d:            /*goto IL_0124;*/goto IL_016f;                              //br.s				IL_0124
	IL_016f:            goto IL_0171;                                               //br.s				IL_0171
	IL_0171:                                                                        //endfinally
	                    ;}
	IL_0172:                                                                        //ldc.i4.0
	IL_0173:            Temp_3=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0178:            V_1=Temp_3;                                                 //stloc.1
	IL_0179:                                                                        //ldloc.0
	IL_017a:            Temp_4=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_017f:            V_3=Temp_4;                                                 //stloc.3
	IL_0180:                                                                        //ldc.i4				0x2
	IL_0185:            V_5=2;                                                      //stloc				V_5
	IL_0189:            /*goto IL_0002;*/goto IL_018e;                              //br				IL_0002
	IL_018e:            /*goto IL_0050;*/goto IL_004B01;                            //br				IL_0050
	IL_0193:                                                                        //ldloc.1
	IL_0194:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0199:                                                                        //ldloc.1
	IL_019a:            return safe_cast<System::Collections::ICollection^>(V_1);   //ret
	IL_019b:                                                                        //ldc.i4.0
	IL_019c:            Temp_2=gcnew array<Reflector::CodeModel::IPropertyDeclaration^>(0);//newarr				Reflector::CodeModel::IPropertyDeclaration
	IL_01a1:            return safe_cast<System::Collections::ICollection^>(Temp_2);//ret

}
inline System::Boolean Root::T_x115::M_x12(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::ITypeReference^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_2=3;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_00f3;case 1:goto IL_0058;case 2:goto IL_0135;case 3:goto IL_0014;case 4:goto IL_008e;case 5:goto IL_0065;case 6:goto IL_0124;case 7:goto IL_009e;case 8:goto IL_00c7;case 9:goto IL_00e2;};//switch				(IL_00f3,IL_0058,IL_0135,IL_0014,IL_008e,IL_0065,IL_0124,IL_009e,IL_00c7,IL_00e2)
	IL_0047:                                                                        //ldarg.0
	IL_0048:            if(A_0==nullptr)goto IL_013a;                               //brfalse				IL_013a
	IL_004d:                                                                        //ldc.i4				0x1
	IL_0052:            V_2=1;                                                      //stloc				V_2
	IL_0056:            /*goto IL_0016;*/goto IL_0058;                              //br.s				IL_0016
	IL_0058:            goto IL_00cd;                                               //br.s				IL_00cd
	IL_005a:                                                                        //ldc.i4				0x5
	IL_005f:            V_2=5;                                                      //stloc				V_2
	IL_0063:            /*goto IL_0016;*/goto IL_0065;                              //br.s				IL_0016
	IL_0065:                                                                        //ldloc.1
	IL_0066:            Temp_4=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_006b:                                                                        //ldstr				L"\x5B1D\x4E1F\x5721\x4923"
	IL_0070:                                                                        //ldloc				V_3
	IL_0074:            Temp_5=a(L"\x5B1D\x4E1F\x5721\x4923",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0079:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_007e:            if(!Temp_6)goto IL_00cb;                                    //brfalse.s				IL_00cb
	IL_0080:            goto IL_0083;                                               //br.s				IL_0083
	IL_0082:                                                                        //break
	IL_0083:                                                                        //ldc.i4				0x4
	IL_0088:            V_2=4;                                                      //stloc				V_2
	IL_008c:            /*goto IL_0016;*/goto IL_008e;                              //br.s				IL_0016
	IL_008e:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_0090:                                                                        //ldc.i4				0x7
	IL_0095:            V_2=7;                                                      //stloc				V_2
	IL_0099:            /*goto IL_0016;*/goto IL_009e;                              //br				IL_0016
	IL_009e:                                                                        //ldloc.1
	IL_009f:            Temp_7=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00a4:                                                                        //ldstr				L"\x481D\x411F\x4E21\x5123\x4325\x7C27\x5329\x5C2B\x4B2D"
	IL_00a9:                                                                        //ldloc				V_3
	IL_00ad:            Temp_8=a(L"\x481D\x411F\x4E21\x5123\x4325\x7C27\x5329\x5C2B\x4B2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b2:            Temp_9=(Temp_7 == Temp_8);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b7:            if(Temp_9)goto IL_00f5;                                     //brtrue.s				IL_00f5
	IL_00b9:                                                                        //ldc.i4				0x8
	IL_00be:            V_2=8;                                                      //stloc				V_2
	IL_00c2:            /*goto IL_0016;*/goto IL_00c7;                              //br				IL_0016
	IL_00c7:            goto IL_005a;                                               //br.s				IL_005a
	IL_00c9:                                                                        //ldc.i4.0
	IL_00ca:            return false;                                               //ret
	IL_00cb:                                                                        //ldc.i4.0
	IL_00cc:            return false;                                               //ret
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00d3:            V_0=Temp_0;                                                 //stloc.0
	IL_00d4:                                                                        //ldc.i4				0x9
	IL_00d9:            V_2=9;                                                      //stloc				V_2
	IL_00dd:            /*goto IL_0016;*/goto IL_00e2;                              //br				IL_0016
	IL_00e2:                                                                        //ldloc.0
	IL_00e3:            if(V_0!=nullptr)goto IL_010f;                               //brtrue.s				IL_010f
	IL_00e5:                                                                        //ldc.i4				0x0
	IL_00ea:            V_2=0;                                                      //stloc				V_2
	IL_00ee:            /*goto IL_0016;*/goto IL_00f3;                              //br				IL_0016
	IL_00f3:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00f5:                                                                        //ldloc.1
	IL_00f6:            Temp_1=V_1->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00fb:                                                                        //ldstr				L"\x4D1D\x591F\x5121\x5023\x4325\x4527"
	IL_0100:                                                                        //ldloc				V_3
	IL_0104:            Temp_2=a(L"\x4D1D\x591F\x5121\x5023\x4325\x4527",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0109:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_010e:            return Temp_3;                                              //ret
	IL_010f:                                                                        //ldloc.0
	IL_0110:            Temp_10=V_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0115:            V_1=Temp_10;                                                //stloc.1
	IL_0116:                                                                        //ldc.i4				0x6
	IL_011b:            V_2=6;                                                      //stloc				V_2
	IL_011f:            /*goto IL_0016;*/goto IL_0124;                              //br				IL_0016
	IL_0124:                                                                        //ldloc.1
	IL_0125:            if(V_1==nullptr)goto IL_00cb;                               //brfalse.s				IL_00cb
	IL_0127:                                                                        //ldc.i4				0x2
	IL_012c:            V_2=2;                                                      //stloc				V_2
	IL_0130:            /*goto IL_0016;*/goto IL_0135;                              //br				IL_0016
	IL_0135:            goto IL_0090;                                               //br				IL_0090
	IL_013a:                                                                        //ldc.i4.0
	IL_013b:            return false;                                               //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventReference::Resolve()
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            Temp_1=V_0->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_000d:            if(Temp_1==nullptr)goto IL_001d;                            //brfalse.s				IL_001d
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldloc.0
	IL_0012:            Temp_2=V_0->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0017:            Temp_3=Temp_2->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_001c:            return Temp_3;                                              //ret
	IL_001d:            goto IL_0020;                                               //br.s				IL_0020
	IL_001f:                                                                        //break
	IL_0020:                                                                        //ldnull
	IL_0021:            return nullptr;                                             //ret

}
inline System::String^ Root::T_x115::M_x13(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	array<System::String^>^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IType^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	Reflector::CodeModel::IType^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IParameterDeclarationCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	array<System::String^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_6=6;                                                      //stloc				V_6
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_0054;case 1:goto IL_01e7;case 2:goto IL_003d;};//switch				(IL_0054,IL_01e7,IL_003d)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_0=A_0->Parameters;                                     //callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IPropertyReference::get_Parameters()
	IL_0026:            V_0=Temp_0;                                                 //stloc.0
	IL_0027:                                                                        //ldc.i4.1
	IL_0028:                                                                        //dup
	IL_0029:                                                                        //dup
	IL_002a:                                                                        //ldc.i4.4
	IL_002b:                                                                        //add
	IL_002c:                                                                        //bgt				IL_0028
	IL_0031:                                                                        //pop
	IL_0032:                                                                        //ldc.i4				0x2
	IL_0037:            V_5=2;                                                      //stloc				V_5
	IL_003b:            /*goto IL_000b;*/goto IL_003d;                              //br.s				IL_000b
	IL_003d:                                                                        //ldloc.0
	IL_003e:            Temp_16=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0043:                                                                        //ldc.i4.0
	IL_0044:            if(Temp_16<=0)goto IL_01ec;                                 //ble				IL_01ec
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_5=0;                                                      //stloc				V_5
	IL_0052:            /*goto IL_000b;*/goto IL_0054;                              //br.s				IL_000b
	IL_0054:            goto IL_01ce;                                               //br				IL_01ce
	IL_005401:          try{
	IL_0059:            goto IL_0084;                                               //br.s				IL_0084
	IL_005b:                                                                        //ldloc				V_5
	IL_005f:            switch(V_5){case 0:goto IL_00cd;case 1:goto IL_011c;case 2:goto IL_00b9;case 3:goto IL_00f8;case 4:goto IL_009e;case 5:goto IL_00ac;case 6:goto IL_0091;case 7:goto IL_0183;};//switch				(IL_00cd,IL_011c,IL_00b9,IL_00f8,IL_009e,IL_00ac,IL_0091,IL_0183)
	IL_0084:                                                                        //ldc.i4.0
	IL_0085:            V_2=0;                                                      //stloc.2
	IL_0086:                                                                        //ldc.i4				0x6
	IL_008b:            V_5=6;                                                      //stloc				V_5
	IL_008f:            /*goto IL_005b;*/goto IL_0091;                              //br.s				IL_005b
	IL_0091:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_0093:                                                                        //ldc.i4				0x4
	IL_0098:            V_5=4;                                                      //stloc				V_5
	IL_009c:            /*goto IL_005b;*/goto IL_009e;                              //br.s				IL_005b
	IL_009e:                                                                        //ldloc.2
	IL_009f:            if(V_2==0)goto IL_00cf;                                     //brfalse.s				IL_00cf
	IL_00a1:                                                                        //ldc.i4				0x5
	IL_00a6:            V_5=5;                                                      //stloc				V_5
	IL_00aa:            /*goto IL_005b;*/goto IL_00ac;                              //br.s				IL_005b
	IL_00ac:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00ae:                                                                        //ldc.i4				0x2
	IL_00b3:            V_5=2;                                                      //stloc				V_5
	IL_00b7:            /*goto IL_005b;*/goto IL_00b9;                              //br.s				IL_005b
	IL_00b9:                                                                        //ldloc.2
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:            Temp_14=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00c0:            if(V_2<Temp_14)goto IL_0093;                                //blt.s				IL_0093
	IL_00c2:                                                                        //ldc.i4				0x0
	IL_00c7:            V_5=0;                                                      //stloc				V_5
	IL_00cb:            /*goto IL_005b;*/goto IL_00cd;                              //br.s				IL_005b
	IL_00cd:            goto IL_011e;                                               //br.s				IL_011e
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:                                                                        //ldloc.2
	IL_00d2:            Temp_11=V_0[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00d7:            Temp_12=Temp_11->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00dc:            Temp_13=Temp_12->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_00e1:            V_1->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e6:                                                                        //ldloc.2
	IL_00e7:                                                                        //ldc.i4.1
	IL_00e8:                                                                        //add
	IL_00e9:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00ea:                                                                        //ldc.i4				0x3
	IL_00ef:            V_5=3;                                                      //stloc				V_5
	IL_00f3:            /*goto IL_005b;*/goto IL_00f8;                              //br				IL_005b
	IL_00f8:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_00fa:                                                                        //ldloc.1
	IL_00fb:                                                                        //ldstr				L"\x0823\x0625"
	IL_0100:                                                                        //ldloc				V_6
	IL_0104:            Temp_15=a(L"\x0823\x0625",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0109:            V_1->Write(Temp_15);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_010e:                                                                        //ldc.i4				0x1
	IL_0113:            V_5=1;                                                      //stloc				V_5
	IL_0117:            /*goto IL_005b;*/goto IL_011c;                              //br				IL_005b
	IL_011c:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_011e:                                                                        //ldc.i4.5
	IL_011f:            Temp_3=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0124:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_0126:                                                                        //ldloc.s				V_4
	IL_0128:                                                                        //ldc.i4.0
	IL_0129:                                                                        //ldarg.0
	IL_012a:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_012f:            V_4[0]=Temp_4;                                              //stelem.ref
	IL_0130:                                                                        //ldloc.s				V_4
	IL_0132:                                                                        //ldc.i4.1
	IL_0133:                                                                        //ldstr				L"\x7F23"
	IL_0138:                                                                        //ldloc				V_6
	IL_013c:            Temp_5=a(L"\x7F23",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0141:            V_4[1]=Temp_5;                                              //stelem.ref
	IL_0142:                                                                        //ldloc.s				V_4
	IL_0144:                                                                        //ldc.i4.2
	IL_0145:                                                                        //ldloc.1
	IL_0146:            Temp_6=V_1->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_014b:            V_4[2]=Temp_6;                                              //stelem.ref
	IL_014c:                                                                        //ldloc.s				V_4
	IL_014e:                                                                        //ldc.i4.3
	IL_014f:                                                                        //ldstr				L"\x7923\x0625\x1227\x0A29"
	IL_0154:                                                                        //ldloc				V_6
	IL_0158:            Temp_7=a(L"\x7923\x0625\x1227\x0A29",V_6);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015d:            V_4[3]=Temp_7;                                              //stelem.ref
	IL_015e:                                                                        //ldloc.s				V_4
	IL_0160:                                                                        //ldc.i4.4
	IL_0161:                                                                        //ldarg.0
	IL_0162:            Temp_8=A_0->PropertyType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0167:            Temp_9=Temp_8->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_016c:            V_4[4]=Temp_9;                                              //stelem.ref
	IL_016d:                                                                        //ldloc.s				V_4
	IL_016f:            Temp_10=System::String::Concat(V_4);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0174:            V_3=Temp_10;                                                //stloc.3
	IL_0175:                                                                        //ldc.i4				0x7
	IL_017a:            V_5=7;                                                      //stloc				V_5
	IL_017e:            /*goto IL_005b;*/goto IL_0183;                              //br				IL_005b
	IL_0183:            goto IL_0211;                                               //leave				IL_0211
	                    ;}
	                    finally{
	IL_0188:                                                                        //ldc.i4				0x0
	IL_018d:            V_5=0;                                                      //stloc				V_5
	IL_0191:            /*goto IL_0195;*/goto IL_0193;                              //br.s				IL_0195
	IL_0193:            goto IL_01aa;                                               //br.s				IL_01aa
	IL_0195:                                                                        //ldloc				V_5
	IL_0199:            switch(V_5){case 0:goto IL_0193;case 1:goto IL_01cb;case 2:goto IL_01b8;};//switch				(IL_0193,IL_01cb,IL_01b8)
	IL_01aa:                                                                        //ldloc.1
	IL_01ab:            if(V_1==nullptr)goto IL_01cd;                               //brfalse.s				IL_01cd
	IL_01ad:                                                                        //ldc.i4				0x2
	IL_01b2:            V_5=2;                                                      //stloc				V_5
	IL_01b6:            /*goto IL_0195;*/goto IL_01b8;                              //br.s				IL_0195
	IL_01b8:            goto IL_01ba;                                               //br.s				IL_01ba
	IL_01ba:                                                                        //ldloc.1
	IL_01bb:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01c0:                                                                        //ldc.i4				0x1
	IL_01c5:            V_5=1;                                                      //stloc				V_5
	IL_01c9:            /*goto IL_0195;*/goto IL_01cb;                              //br.s				IL_0195
	IL_01cb:            goto IL_01cd;                                               //br.s				IL_01cd
	IL_01cd:                                                                        //endfinally
	                    ;}
	IL_01ce:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01d3:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_01d8:            V_1=Temp_2;                                                 //stloc.1
	IL_01d9:                                                                        //ldc.i4				0x1
	IL_01de:            V_5=1;                                                      //stloc				V_5
	IL_01e2:            /*goto IL_000b;*/goto IL_01e7;                              //br				IL_000b
	IL_01e7:            /*goto IL_0059;*/goto IL_005401;                            //br				IL_0059
	IL_01ec:                                                                        //ldarg.0
	IL_01ed:            Temp_17=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_01f2:                                                                        //ldstr				L"\x0423\x1C25\x0827"
	IL_01f7:                                                                        //ldloc				V_6
	IL_01fb:            Temp_18=a(L"\x0423\x1C25\x0827",V_6);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0200:                                                                        //ldarg.0
	IL_0201:            Temp_19=A_0->PropertyType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0206:            Temp_20=Temp_19->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_020b:            Temp_21=System::String::Concat(Temp_17,Temp_18,Temp_20);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0210:            return Temp_21;                                             //ret
	IL_0211:                                                                        //ldloc.3
	IL_0212:            return V_3;                                                 //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_9 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_12 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_13 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_14 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_15 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_16 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_17 = nullptr;
	System::Boolean Temp_18 = false;
	System::Object^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<Reflector::CodeModel::IMethodDeclaration^>^ Temp_21 = nullptr;
	System::Collections::ArrayList^ Temp_22 = nullptr;
	System::Collections::IEnumerator^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	System::Boolean Temp_25 = false;
	System::Boolean Temp_26 = false;
	System::Object^ Temp_27 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_28 = nullptr;
	System::Collections::IEnumerator^ Temp_29 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_30 = nullptr;
	System::Collections::IEnumerator^ Temp_31 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_4 = nullptr;
	System::Collections::IEnumerator^ V_5 = nullptr;
	System::IDisposable^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0383;case 1:goto IL_03ab;case 2:goto IL_0031;case 3:goto IL_0048;case 4:goto IL_0363;};//switch				(IL_0383,IL_03ab,IL_0031,IL_0048,IL_0363)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_0=A_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldc.i4				0x2
	IL_002b:            V_7=2;                                                      //stloc				V_7
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            Temp_20=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0037:                                                                        //ldc.i4.0
	IL_0038:            if(Temp_20<=0)goto IL_050a;                                 //ble				IL_050a
	IL_003d:                                                                        //ldc.i4				0x3
	IL_0042:            V_7=3;                                                      //stloc				V_7
	IL_0046:            /*goto IL_0002;*/goto IL_0048;                              //br.s				IL_0002
	IL_0048:            goto IL_033b;                                               //br				IL_033b
	IL_004801:          try{
	IL_004d:                                                                        //ldc.i4				0x8
	IL_0052:            V_7=8;                                                      //stloc				V_7
	IL_0056:            /*goto IL_005a;*/goto IL_0058;                              //br.s				IL_005a
	IL_0058:            goto IL_0097;                                               //br.s				IL_0097
	IL_005a:                                                                        //ldloc				V_7
	IL_005e:            switch(V_7){case 0:goto IL_00a4;case 1:goto IL_0139;case 2:goto IL_015b;case 3:goto IL_0117;case 4:goto IL_00c8;case 5:goto IL_01ba;case 6:goto IL_0100;case 7:goto IL_01a7;case 8:goto IL_0058;case 9:goto IL_00e2;case 10:goto IL_016b;case 11:goto IL_0185;case 12:goto IL_00b8;};//switch				(IL_00a4,IL_0139,IL_015b,IL_0117,IL_00c8,IL_01ba,IL_0100,IL_01a7,IL_0058,IL_00e2,IL_016b,IL_0185,IL_00b8)
	IL_0097:            goto IL_0099;                                               //br.s				IL_0099
	IL_0099:                                                                        //ldc.i4				0x0
	IL_009e:            V_7=0;                                                      //stloc				V_7
	IL_00a2:            /*goto IL_005a;*/goto IL_00a4;                              //br.s				IL_005a
	IL_00a4:                                                                        //ldloc.s				V_5
	IL_00a6:            Temp_1=V_5->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00ab:            if(Temp_1)goto IL_00e4;                                     //brtrue.s				IL_00e4
	IL_00ad:                                                                        //ldc.i4				0xc
	IL_00b2:            V_7=12;                                                     //stloc				V_7
	IL_00b6:            /*goto IL_005a;*/goto IL_00b8;                              //br.s				IL_005a
	IL_00b8:            goto IL_01ac;                                               //br				IL_01ac
	IL_00bd:                                                                        //ldc.i4				0x4
	IL_00c2:            V_7=4;                                                      //stloc				V_7
	IL_00c6:            /*goto IL_005a;*/goto IL_00c8;                              //br.s				IL_005a
	IL_00c8:                                                                        //ldloc.s				V_4
	IL_00ca:            Temp_5=V_4->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_00cf:            if(Temp_5==nullptr)goto IL_015d;                            //brfalse				IL_015d
	IL_00d4:                                                                        //ldc.i4				0x9
	IL_00d9:            V_7=9;                                                      //stloc				V_7
	IL_00dd:            /*goto IL_005a;*/goto IL_00e2;                              //br				IL_005a
	IL_00e2:            goto IL_013b;                                               //br.s				IL_013b
	IL_00e4:                                                                        //ldloc.s				V_5
	IL_00e6:            Temp_2=V_5->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00eb:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_00f0:            V_4=safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_2);//stloc.s				V_4
	IL_00f2:                                                                        //ldc.i4				0x6
	IL_00f7:            V_7=6;                                                      //stloc				V_7
	IL_00fb:            /*goto IL_005a;*/goto IL_0100;                              //br				IL_005a
	IL_0100:                                                                        //ldloc.s				V_4
	IL_0102:            Temp_6=V_4->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_0107:            if(Temp_6==nullptr)goto IL_00bd;                            //brfalse.s				IL_00bd
	IL_0109:                                                                        //ldc.i4				0x3
	IL_010e:            V_7=3;                                                      //stloc				V_7
	IL_0112:            /*goto IL_005a;*/goto IL_0117;                              //br				IL_005a
	IL_0117:            goto IL_0119;                                               //br.s				IL_0119
	IL_0119:                                                                        //ldloc.1
	IL_011a:                                                                        //ldloc.s				V_4
	IL_011c:            Temp_3=V_4->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_0121:            Temp_4=Temp_3->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0126:            V_1->Remove(safe_cast<System::Object^>(Temp_4));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_012b:                                                                        //ldc.i4				0x1
	IL_0130:            V_7=1;                                                      //stloc				V_7
	IL_0134:            /*goto IL_005a;*/goto IL_0139;                              //br				IL_005a
	IL_0139:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_013b:                                                                        //ldloc.1
	IL_013c:                                                                        //ldloc.s				V_4
	IL_013e:            Temp_7=V_4->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0143:            Temp_8=Temp_7->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0148:            V_1->Remove(safe_cast<System::Object^>(Temp_8));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_014d:                                                                        //ldc.i4				0x2
	IL_0152:            V_7=2;                                                      //stloc				V_7
	IL_0156:            /*goto IL_005a;*/goto IL_015b;                              //br				IL_005a
	IL_015b:            goto IL_015d;                                               //br.s				IL_015d
	IL_015d:                                                                        //ldc.i4				0xa
	IL_0162:            V_7=10;                                                     //stloc				V_7
	IL_0166:            /*goto IL_005a;*/goto IL_016b;                              //br				IL_005a
	IL_016b:                                                                        //ldloc.s				V_4
	IL_016d:            Temp_9=V_4->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_0172:            if(Temp_9==nullptr)goto IL_0099;                            //brfalse				IL_0099
	IL_0177:                                                                        //ldc.i4				0xb
	IL_017c:            V_7=11;                                                     //stloc				V_7
	IL_0180:            /*goto IL_005a;*/goto IL_0185;                              //br				IL_005a
	IL_0185:            goto IL_0187;                                               //br.s				IL_0187
	IL_0187:                                                                        //ldloc.1
	IL_0188:                                                                        //ldloc.s				V_4
	IL_018a:            Temp_10=V_4->InvokeMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_018f:            Temp_11=Temp_10->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0194:            V_1->Remove(safe_cast<System::Object^>(Temp_11));           //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_0199:                                                                        //ldc.i4				0x7
	IL_019e:            V_7=7;                                                      //stloc				V_7
	IL_01a2:            /*goto IL_005a;*/goto IL_01a7;                              //br				IL_005a
	IL_01a7:            goto IL_0099;                                               //br				IL_0099
	IL_01ac:                                                                        //ldc.i4				0x5
	IL_01b1:            V_7=5;                                                      //stloc				V_7
	IL_01b5:            /*goto IL_005a;*/goto IL_01ba;                              //br				IL_005a
	IL_01ba:            goto IL_0388;                                               //leave				IL_0388
	                    ;}
	                    finally{
	IL_01bf:            goto IL_01d6;                                               //br.s				IL_01d6
	IL_01c1:                                                                        //ldloc				V_7
	IL_01c5:            switch(V_7){case 0:goto IL_01ea;case 1:goto IL_020d;case 2:goto IL_01f9;};//switch				(IL_01ea,IL_020d,IL_01f9)
	IL_01d6:                                                                        //ldloc.s				V_5
	IL_01d8:                                                                        //isinst				System::IDisposable
	IL_01dd:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_01df:                                                                        //ldc.i4				0x0
	IL_01e4:            V_7=0;                                                      //stloc				V_7
	IL_01e8:            /*goto IL_01c1;*/goto IL_01ea;                              //br.s				IL_01c1
	IL_01ea:                                                                        //ldloc.s				V_6
	IL_01ec:            if(V_6==nullptr)goto IL_020f;                               //brfalse.s				IL_020f
	IL_01ee:                                                                        //ldc.i4				0x2
	IL_01f3:            V_7=2;                                                      //stloc				V_7
	IL_01f7:            /*goto IL_01c1;*/goto IL_01f9;                              //br.s				IL_01c1
	IL_01f9:            goto IL_01fb;                                               //br.s				IL_01fb
	IL_01fb:                                                                        //ldloc.s				V_6
	IL_01fd:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0202:                                                                        //ldc.i4				0x1
	IL_0207:            V_7=1;                                                      //stloc				V_7
	IL_020b:            /*goto IL_01c1;*/goto IL_020d;                              //br.s				IL_01c1
	IL_020d:            goto IL_020f;                                               //br.s				IL_020f
	IL_020f:                                                                        //endfinally
	                    ;}
	IL_020F02:          try{
	IL_0210:                                                                        //ldc.i4				0x5
	IL_0215:            V_7=5;                                                      //stloc				V_7
	IL_0219:            /*goto IL_021d;*/goto IL_021b;                              //br.s				IL_021d
	IL_021b:            goto IL_024a;                                               //br.s				IL_024a
	IL_021d:                                                                        //ldloc				V_7
	IL_0221:            switch(V_7){case 0:goto IL_026b;case 1:goto IL_02d2;case 2:goto IL_02e5;case 3:goto IL_02a9;case 4:goto IL_0278;case 5:goto IL_021b;case 6:goto IL_0257;case 7:goto IL_028c;case 8:goto IL_02ba;};//switch				(IL_026b,IL_02d2,IL_02e5,IL_02a9,IL_0278,IL_021b,IL_0257,IL_028c,IL_02ba)
	IL_024a:            goto IL_024c;                                               //br.s				IL_024c
	IL_024c:                                                                        //ldc.i4				0x6
	IL_0251:            V_7=6;                                                      //stloc				V_7
	IL_0255:            /*goto IL_021d;*/goto IL_0257;                              //br.s				IL_021d
	IL_0257:                                                                        //ldloc.s				V_5
	IL_0259:            Temp_26=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_025e:            if(Temp_26)goto IL_028e;                                    //brtrue.s				IL_028e
	IL_0260:                                                                        //ldc.i4				0x0
	IL_0265:            V_7=0;                                                      //stloc				V_7
	IL_0269:            /*goto IL_021d;*/goto IL_026b;                              //br.s				IL_021d
	IL_026b:            goto IL_02d7;                                               //br.s				IL_02d7
	IL_026d:                                                                        //ldc.i4				0x4
	IL_0272:            V_7=4;                                                      //stloc				V_7
	IL_0276:            /*goto IL_021d;*/goto IL_0278;                              //br.s				IL_021d
	IL_0278:                                                                        //ldloc.2
	IL_0279:                                                                        //ldarg.1
	IL_027a:            Temp_25=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IMethodReference^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_027f:            if(!Temp_25)goto IL_024c;                                   //brfalse.s				IL_024c
	IL_0281:                                                                        //ldc.i4				0x7
	IL_0286:            V_7=7;                                                      //stloc				V_7
	IL_028a:            /*goto IL_021d;*/goto IL_028c;                              //br.s				IL_021d
	IL_028c:            goto IL_02bc;                                               //br.s				IL_02bc
	IL_028e:                                                                        //ldloc.s				V_5
	IL_0290:            Temp_27=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0295:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_029a:            V_2=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_27);//stloc.2
	IL_029b:                                                                        //ldc.i4				0x3
	IL_02a0:            V_7=3;                                                      //stloc				V_7
	IL_02a4:            /*goto IL_021d;*/goto IL_02a9;                              //br				IL_021d
	IL_02a9:                                                                        //ldarg.1
	IL_02aa:            if(A_1==nullptr)goto IL_02bc;                               //brfalse.s				IL_02bc
	IL_02ac:                                                                        //ldc.i4				0x8
	IL_02b1:            V_7=8;                                                      //stloc				V_7
	IL_02b5:            /*goto IL_021d;*/goto IL_02ba;                              //br				IL_021d
	IL_02ba:            goto IL_026d;                                               //br.s				IL_026d
	IL_02bc:                                                                        //ldloc.1
	IL_02bd:                                                                        //ldloc.2
	IL_02be:            Temp_24=V_1->Add(safe_cast<System::Object^>(V_2));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_02c3:                                                                        //pop
	IL_02c4:                                                                        //ldc.i4				0x1
	IL_02c9:            V_7=1;                                                      //stloc				V_7
	IL_02cd:            /*goto IL_021d;*/goto IL_02d2;                              //br				IL_021d
	IL_02d2:            goto IL_024c;                                               //br				IL_024c
	IL_02d7:                                                                        //ldc.i4				0x2
	IL_02dc:            V_7=2;                                                      //stloc				V_7
	IL_02e0:            /*goto IL_021d;*/goto IL_02e5;                              //br				IL_021d
	IL_02e5:            goto IL_0390;                                               //leave				IL_0390
	                    ;}
	                    finally{
	IL_02ea:            goto IL_0301;                                               //br.s				IL_0301
	IL_02ec:                                                                        //ldloc				V_7
	IL_02f0:            switch(V_7){case 0:goto IL_0338;case 1:goto IL_0324;case 2:goto IL_0315;};//switch				(IL_0338,IL_0324,IL_0315)
	IL_0301:                                                                        //ldloc.s				V_5
	IL_0303:                                                                        //isinst				System::IDisposable
	IL_0308:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_030a:                                                                        //ldc.i4				0x2
	IL_030f:            V_7=2;                                                      //stloc				V_7
	IL_0313:            /*goto IL_02ec;*/goto IL_0315;                              //br.s				IL_02ec
	IL_0315:                                                                        //ldloc.s				V_6
	IL_0317:            if(V_6==nullptr)goto IL_033a;                               //brfalse.s				IL_033a
	IL_0319:                                                                        //ldc.i4				0x1
	IL_031e:            V_7=1;                                                      //stloc				V_7
	IL_0322:            /*goto IL_02ec;*/goto IL_0324;                              //br.s				IL_02ec
	IL_0324:            goto IL_0326;                                               //br.s				IL_0326
	IL_0326:                                                                        //ldloc.s				V_6
	IL_0328:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_032d:                                                                        //ldc.i4				0x0
	IL_0332:            V_7=0;                                                      //stloc				V_7
	IL_0336:            /*goto IL_02ec;*/goto IL_0338;                              //br.s				IL_02ec
	IL_0338:            goto IL_033a;                                               //br.s				IL_033a
	IL_033a:                                                                        //endfinally
	                    ;}
	IL_033b:                                                                        //ldc.i4.0
	IL_033c:            Temp_22=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0341:            V_1=Temp_22;                                                //stloc.1
	IL_0342:                                                                        //ldloc.0
	IL_0343:            Temp_23=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0348:            V_5=Temp_23;                                                //stloc.s				V_5
	IL_034a:                                                                        //ldc.i4.3
	IL_034b:                                                                        //dup
	IL_034c:                                                                        //dup
	IL_034d:                                                                        //ldc.i4.1
	IL_034e:                                                                        //sub
	IL_034f:                                                                        //blt				IL_034b
	IL_0354:                                                                        //pop
	IL_0355:                                                                        //ldc.i4				0x4
	IL_035a:            V_7=4;                                                      //stloc				V_7
	IL_035e:            /*goto IL_0002;*/goto IL_0363;                              //br				IL_0002
	IL_0363:            /*goto IL_0210;*/goto IL_020F02;                            //br				IL_0210
	IL_0368:                                                                        //ldarg.0
	IL_0369:            Temp_28=A_0->Events;                                        //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_036e:            Temp_29=safe_cast<System::Collections::IEnumerable^>(Temp_28)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0373:            V_5=Temp_29;                                                //stloc.s				V_5
	IL_0375:                                                                        //ldc.i4				0x0
	IL_037a:            V_7=0;                                                      //stloc				V_7
	IL_037e:            /*goto IL_0002;*/goto IL_0383;                              //br				IL_0002
	IL_0383:            /*goto IL_004d;*/goto IL_004801;                            //br				IL_004d
	IL_0388:                                                                        //ldloc.1
	IL_0389:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_038e:                                                                        //ldloc.1
	IL_038f:            return safe_cast<System::Collections::ICollection^>(V_1);   //ret
	IL_0390:                                                                        //ldarg.0
	IL_0391:            Temp_30=A_0->Properties;                                    //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_0396:            Temp_31=safe_cast<System::Collections::IEnumerable^>(Temp_30)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_039b:            V_5=Temp_31;                                                //stloc.s				V_5
	IL_039d:                                                                        //ldc.i4				0x1
	IL_03a2:            V_7=1;                                                      //stloc				V_7
	IL_03a6:            /*goto IL_0002;*/goto IL_03ab;                              //br				IL_0002
	IL_03ab:            /*goto IL_03ad;*/goto IL_03AB01;                            //br.s				IL_03ad
	IL_03AB01:          try{
	IL_03ad:                                                                        //ldc.i4				0x3
	IL_03b2:            V_7=3;                                                      //stloc				V_7
	IL_03b6:            /*goto IL_03ba;*/goto IL_03b8;                              //br.s				IL_03ba
	IL_03b8:            goto IL_03eb;                                               //br.s				IL_03eb
	IL_03ba:                                                                        //ldloc				V_7
	IL_03be:            switch(V_7){case 0:goto IL_0436;case 1:goto IL_045d;case 2:goto IL_0483;case 3:goto IL_03b8;case 4:goto IL_04b4;case 5:goto IL_04a4;case 6:goto IL_046d;case 7:goto IL_0409;case 8:goto IL_0423;case 9:goto IL_0446;};//switch				(IL_0436,IL_045d,IL_0483,IL_03b8,IL_04b4,IL_04a4,IL_046d,IL_0409,IL_0423,IL_0446)
	IL_03eb:            goto IL_0438;                                               //br.s				IL_0438
	IL_03ed:                                                                        //ldloc.1
	IL_03ee:                                                                        //ldloc.3
	IL_03ef:            Temp_12=V_3->SetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_03f4:            Temp_13=Temp_12->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_03f9:            V_1->Remove(safe_cast<System::Object^>(Temp_13));           //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_03fe:                                                                        //ldc.i4				0x7
	IL_0403:            V_7=7;                                                      //stloc				V_7
	IL_0407:            /*goto IL_03ba;*/goto IL_0409;                              //br.s				IL_03ba
	IL_0409:            goto IL_045f;                                               //br.s				IL_045f
	IL_040b:                                                                        //ldloc.s				V_5
	IL_040d:            Temp_19=V_5->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0412:                                                                        //castclass				Reflector::CodeModel::IPropertyDeclaration
	IL_0417:            V_3=safe_cast<Reflector::CodeModel::IPropertyDeclaration^>(Temp_19);//stloc.3
	IL_0418:                                                                        //ldc.i4				0x8
	IL_041d:            V_7=8;                                                      //stloc				V_7
	IL_0421:            /*goto IL_03ba;*/goto IL_0423;                              //br.s				IL_03ba
	IL_0423:                                                                        //ldloc.3
	IL_0424:            Temp_17=V_3->SetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_0429:            if(Temp_17==nullptr)goto IL_045f;                           //brfalse.s				IL_045f
	IL_042b:                                                                        //ldc.i4				0x0
	IL_0430:            V_7=0;                                                      //stloc				V_7
	IL_0434:            /*goto IL_03ba;*/goto IL_0436;                              //br.s				IL_03ba
	IL_0436:            goto IL_03ed;                                               //br.s				IL_03ed
	IL_0438:                                                                        //ldc.i4				0x9
	IL_043d:            V_7=9;                                                      //stloc				V_7
	IL_0441:            /*goto IL_03ba;*/goto IL_0446;                              //br				IL_03ba
	IL_0446:                                                                        //ldloc.s				V_5
	IL_0448:            Temp_18=V_5->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_044d:            if(Temp_18)goto IL_040b;                                    //brtrue.s				IL_040b
	IL_044f:                                                                        //ldc.i4				0x1
	IL_0454:            V_7=1;                                                      //stloc				V_7
	IL_0458:            /*goto IL_03ba;*/goto IL_045d;                              //br				IL_03ba
	IL_045d:            goto IL_04a6;                                               //br.s				IL_04a6
	IL_045f:                                                                        //ldc.i4				0x6
	IL_0464:            V_7=6;                                                      //stloc				V_7
	IL_0468:            /*goto IL_03ba;*/goto IL_046d;                              //br				IL_03ba
	IL_046d:                                                                        //ldloc.3
	IL_046e:            Temp_16=V_3->GetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0473:            if(Temp_16==nullptr)goto IL_0438;                           //brfalse.s				IL_0438
	IL_0475:                                                                        //ldc.i4				0x2
	IL_047a:            V_7=2;                                                      //stloc				V_7
	IL_047e:            /*goto IL_03ba;*/goto IL_0483;                              //br				IL_03ba
	IL_0483:            goto IL_0485;                                               //br.s				IL_0485
	IL_0485:                                                                        //ldloc.1
	IL_0486:                                                                        //ldloc.3
	IL_0487:            Temp_14=V_3->GetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_048c:            Temp_15=Temp_14->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0491:            V_1->Remove(safe_cast<System::Object^>(Temp_15));           //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_0496:                                                                        //ldc.i4				0x5
	IL_049b:            V_7=5;                                                      //stloc				V_7
	IL_049f:            /*goto IL_03ba;*/goto IL_04a4;                              //br				IL_03ba
	IL_04a4:            goto IL_0438;                                               //br.s				IL_0438
	IL_04a6:                                                                        //ldc.i4				0x4
	IL_04ab:            V_7=4;                                                      //stloc				V_7
	IL_04af:            /*goto IL_03ba;*/goto IL_04b4;                              //br				IL_03ba
	IL_04b4:            goto IL_0368;                                               //leave				IL_0368
	                    ;}
	                    finally{
	IL_04b9:            goto IL_04d0;                                               //br.s				IL_04d0
	IL_04bb:                                                                        //ldloc				V_7
	IL_04bf:            switch(V_7){case 0:goto IL_04f3;case 1:goto IL_04e4;case 2:goto IL_0507;};//switch				(IL_04f3,IL_04e4,IL_0507)
	IL_04d0:                                                                        //ldloc.s				V_5
	IL_04d2:                                                                        //isinst				System::IDisposable
	IL_04d7:            V_6=dynamic_cast<System::IDisposable^>(V_5);                //stloc.s				V_6
	IL_04d9:                                                                        //ldc.i4				0x1
	IL_04de:            V_7=1;                                                      //stloc				V_7
	IL_04e2:            /*goto IL_04bb;*/goto IL_04e4;                              //br.s				IL_04bb
	IL_04e4:                                                                        //ldloc.s				V_6
	IL_04e6:            if(V_6==nullptr)goto IL_0509;                               //brfalse.s				IL_0509
	IL_04e8:                                                                        //ldc.i4				0x0
	IL_04ed:            V_7=0;                                                      //stloc				V_7
	IL_04f1:            /*goto IL_04bb;*/goto IL_04f3;                              //br.s				IL_04bb
	IL_04f3:            goto IL_04f5;                                               //br.s				IL_04f5
	IL_04f5:                                                                        //ldloc.s				V_6
	IL_04f7:            /*V_6->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_04fc:                                                                        //ldc.i4				0x2
	IL_0501:            V_7=2;                                                      //stloc				V_7
	IL_0505:            /*goto IL_04bb;*/goto IL_0507;                              //br.s				IL_04bb
	IL_0507:            goto IL_0509;                                               //br.s				IL_0509
	IL_0509:                                                                        //endfinally
	                    ;}
	IL_050a:                                                                        //ldc.i4.0
	IL_050b:            Temp_21=gcnew array<Reflector::CodeModel::IMethodDeclaration^>(0);//newarr				Reflector::CodeModel::IMethodDeclaration
	IL_0510:            return safe_cast<System::Collections::ICollection^>(Temp_21);//ret

}
inline System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::NotSupportedException^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_3=5;                                                      //stloc				V_3
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_003b;case 1:goto IL_0049;case 2:goto IL_0096;case 3:goto IL_0082;};//switch				(IL_003b,IL_0049,IL_0096,IL_0082)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_002a:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_002f:            V_0=dynamic_cast<Reflector::CodeModel::IModule^>(Temp_0);   //stloc.0
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_2=0;                                                      //stloc				V_2
	IL_0039:            /*goto IL_000b;*/goto IL_003b;                              //br.s				IL_000b
	IL_003b:                                                                        //ldloc.0
	IL_003c:            if(V_0==nullptr)goto IL_006b;                               //brfalse.s				IL_006b
	IL_003e:                                                                        //ldc.i4				0x1
	IL_0043:            V_2=1;                                                      //stloc				V_2
	IL_0047:            /*goto IL_000b;*/goto IL_0049;                              //br.s				IL_000b
	IL_0049:            goto IL_0098;                                               //br.s				IL_0098
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_3=Root::T_x115::M_x13(safe_cast<Reflector::CodeModel::ITypeReference^>(V_1));//call				System::String^ Root::T_x115::M_x13(Reflector::CodeModel::ITypeReference^)
	IL_0051:                                                                        //ldstr				L"\x0822"
	IL_0056:                                                                        //ldloc				V_3
	IL_005a:            Temp_4=a(L"\x0822",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:                                                                        //ldloc.1
	IL_0060:            Temp_5=Root::T_x115::M_x5(safe_cast<Reflector::CodeModel::ITypeReference^>(V_1));//call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_0065:            Temp_6=System::String::Concat(Temp_3,Temp_4,Temp_5);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_006a:            return Temp_6;                                              //ret
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_1=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0071:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0076:            V_1=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_1);//stloc.1
	IL_0077:                                                                        //ldc.i4				0x3
	IL_007c:            V_2=3;                                                      //stloc				V_2
	IL_0080:            /*goto IL_000b;*/goto IL_0082;                              //br.s				IL_000b
	IL_0082:                                                                        //ldloc.1
	IL_0083:            if(V_1==nullptr)goto IL_009f;                               //brfalse.s				IL_009f
	IL_0085:            goto IL_0088;                                               //br.s				IL_0088
	IL_0087:                                                                        //break
	IL_0088:                                                                        //ldc.i4				0x2
	IL_008d:            V_2=2;                                                      //stloc				V_2
	IL_0091:            /*goto IL_000b;*/goto IL_0096;                              //br				IL_000b
	IL_0096:            goto IL_004b;                                               //br.s				IL_004b
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_2=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_009e:            return Temp_2;                                              //ret
	IL_009f:            Temp_7=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_00a4:            throw Temp_7;                                               //throw

}
inline Reflector::CodeModel::MethodVisibility Root::T_x115::M_x2(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IMethodDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::MethodVisibility Temp_3 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_4 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_5 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_6 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_7 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_8 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_9 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_10 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_11 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_12 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_13 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_14 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_15 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_16 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_17 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_18 = (Reflector::CodeModel::MethodVisibility)0;
	Reflector::CodeModel::MethodVisibility Temp_19 = (Reflector::CodeModel::MethodVisibility)0;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0096;                                               //br				IL_0096
	IL_0005:                                                                        //ldloc				V_3
	IL_0009:            switch(V_3){case 0:goto IL_0106;case 1:goto IL_00cd;case 2:goto IL_0119;case 3:goto IL_0392;case 4:goto IL_0357;case 5:goto IL_030f;case 6:goto IL_00f5;case 7:goto IL_01d3;case 8:goto IL_0320;case 9:goto IL_02a2;case 10:goto IL_01e7;case 11:goto IL_036b;case 12:goto IL_0333;case 13:goto IL_02bc;case 14:goto IL_0344;case 15:goto IL_01a1;case 16:goto IL_0283;case 17:goto IL_0230;case 18:goto IL_016a;case 19:goto IL_0191;case 20:goto IL_0273;case 21:goto IL_017d;case 22:goto IL_0262;case 23:goto IL_024f;case 24:goto IL_02ff;case 25:goto IL_02d0;case 26:goto IL_01c0;case 27:goto IL_037e;case 28:goto IL_02e3;case 29:goto IL_0138;case 30:goto IL_014b;case 31:goto IL_020c;case 32:goto IL_021d;case 33:goto IL_00b9;};//switch				(IL_0106,IL_00cd,IL_0119,IL_0392,IL_0357,IL_030f,IL_00f5,IL_01d3,IL_0320,IL_02a2,IL_01e7,IL_036b,IL_0333,IL_02bc,IL_0344,IL_01a1,IL_0283,IL_0230,IL_016a,IL_0191,IL_0273,IL_017d,IL_0262,IL_024f,IL_02ff,IL_02d0,IL_01c0,IL_037e,IL_02e3,IL_0138,IL_014b,IL_020c,IL_021d,IL_00b9)
	IL_0096:                                                                        //ldarg.0
	IL_0097:            Temp_0=Root::T_x115::M_x8(A_0);                             //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^)
	IL_009c:            V_0=Temp_0;                                                 //stloc.0
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_1=Root::T_x115::M_x13(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x13(Reflector::CodeModel::IEventReference^)
	IL_00a3:            V_1=Temp_1;                                                 //stloc.1
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_2=Root::T_x115::M_x12(A_0);                            //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x12(Reflector::CodeModel::IEventReference^)
	IL_00aa:            V_2=Temp_2;                                                 //stloc.2
	IL_00ab:                                                                        //ldc.i4				0x21
	IL_00b0:            V_3=33;                                                     //stloc				V_3
	IL_00b4:            /*goto IL_0005;*/goto IL_00b9;                              //br				IL_0005
	IL_00b9:                                                                        //ldloc.0
	IL_00ba:            if(V_0==nullptr)goto IL_01c5;                               //brfalse				IL_01c5
	IL_00bf:                                                                        //ldc.i4				0x1
	IL_00c4:            V_3=1;                                                      //stloc				V_3
	IL_00c8:            /*goto IL_0005;*/goto IL_00cd;                              //br				IL_0005
	IL_00cd:            goto IL_01fe;                                               //br				IL_01fe
	IL_00d2:                                                                        //ldloc.1
	IL_00d3:            Temp_14=V_1->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_00d8:            return Temp_14;                                             //ret
	IL_00d9:                                                                        //ldloc.0
	IL_00da:            Temp_17=V_0->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_00df:            return Temp_17;                                             //ret
	IL_00e0:                                                                        //ldloc.0
	IL_00e1:            Temp_16=V_0->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_00e6:            return Temp_16;                                             //ret
	IL_00e7:                                                                        //ldc.i4				0x6
	IL_00ec:            V_3=6;                                                      //stloc				V_3
	IL_00f0:            /*goto IL_0005;*/goto IL_00f5;                              //br				IL_0005
	IL_00f5:                                                                        //ldloc.1
	IL_00f6:            if(V_1==nullptr)goto IL_016f;                               //brfalse.s				IL_016f
	IL_00f8:                                                                        //ldc.i4				0x0
	IL_00fd:            V_3=0;                                                      //stloc				V_3
	IL_0101:            /*goto IL_0005;*/goto IL_0106;                              //br				IL_0005
	IL_0106:            goto IL_01e9;                                               //br				IL_01e9
	IL_010b:                                                                        //ldc.i4				0x2
	IL_0110:            V_3=2;                                                      //stloc				V_3
	IL_0114:            /*goto IL_0005;*/goto IL_0119;                              //br				IL_0005
	IL_0119:                                                                        //ldloc.0
	IL_011a:            Temp_4=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_011f:                                                                        //ldloc.1
	IL_0120:            Temp_5=V_1->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0125:            if(Temp_4!=Temp_5)goto IL_0397;                             //bne.un				IL_0397
	IL_012a:                                                                        //ldc.i4				0x1d
	IL_012f:            V_3=29;                                                     //stloc				V_3
	IL_0133:            /*goto IL_0005;*/goto IL_0138;                              //br				IL_0005
	IL_0138:            goto IL_0222;                                               //br				IL_0222
	IL_013d:                                                                        //ldc.i4				0x1e
	IL_0142:            V_3=30;                                                     //stloc				V_3
	IL_0146:            /*goto IL_0005;*/goto IL_014b;                              //br				IL_0005
	IL_014b:                                                                        //ldloc.1
	IL_014c:            Temp_18=V_1->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0151:                                                                        //ldloc.2
	IL_0152:            Temp_19=V_2->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0157:            if(Temp_18!=Temp_19)goto IL_0397;                           //bne.un				IL_0397
	IL_015c:                                                                        //ldc.i4				0x12
	IL_0161:            V_3=18;                                                     //stloc				V_3
	IL_0165:            /*goto IL_0005;*/goto IL_016a;                              //br				IL_0005
	IL_016a:            goto IL_00d2;                                               //br				IL_00d2
	IL_016f:                                                                        //ldc.i4				0x15
	IL_0174:            V_3=21;                                                     //stloc				V_3
	IL_0178:            /*goto IL_0005;*/goto IL_017d;                              //br				IL_0005
	IL_017d:                                                                        //ldloc.2
	IL_017e:            if(V_2==nullptr)goto IL_0397;                               //brfalse				IL_0397
	IL_0183:                                                                        //ldc.i4				0x13
	IL_0188:            V_3=19;                                                     //stloc				V_3
	IL_018c:            /*goto IL_0005;*/goto IL_0191;                              //br				IL_0005
	IL_0191:            goto IL_01f0;                                               //br.s				IL_01f0
	IL_0193:                                                                        //ldc.i4				0xf
	IL_0198:            V_3=15;                                                     //stloc				V_3
	IL_019c:            /*goto IL_0005;*/goto IL_01a1;                              //br				IL_0005
	IL_01a1:                                                                        //ldloc.0
	IL_01a2:            Temp_8=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01a7:                                                                        //ldloc.2
	IL_01a8:            Temp_9=V_2->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01ad:            if(Temp_8!=Temp_9)goto IL_0397;                             //bne.un				IL_0397
	IL_01b2:                                                                        //ldc.i4				0x1a
	IL_01b7:            V_3=26;                                                     //stloc				V_3
	IL_01bb:            /*goto IL_0005;*/goto IL_01c0;                              //br				IL_0005
	IL_01c0:            goto IL_00d9;                                               //br				IL_00d9
	IL_01c5:                                                                        //ldc.i4				0x7
	IL_01ca:            V_3=7;                                                      //stloc				V_3
	IL_01ce:            /*goto IL_0005;*/goto IL_01d3;                              //br				IL_0005
	IL_01d3:                                                                        //ldloc.0
	IL_01d4:            if(V_0==nullptr)goto IL_02d5;                               //brfalse				IL_02d5
	IL_01d9:                                                                        //ldc.i4				0xa
	IL_01de:            V_3=10;                                                     //stloc				V_3
	IL_01e2:            /*goto IL_0005;*/goto IL_01e7;                              //br				IL_0005
	IL_01e7:            goto IL_0254;                                               //br.s				IL_0254
	IL_01e9:                                                                        //ldloc.1
	IL_01ea:            Temp_3=V_1->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01ef:            return Temp_3;                                              //ret
	IL_01f0:                                                                        //ldloc.2
	IL_01f1:            Temp_15=V_2->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01f6:            return Temp_15;                                             //ret
	IL_01f7:                                                                        //ldloc.0
	IL_01f8:            Temp_7=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_01fd:            return Temp_7;                                              //ret
	IL_01fe:                                                                        //ldc.i4				0x1f
	IL_0203:            V_3=31;                                                     //stloc				V_3
	IL_0207:            /*goto IL_0005;*/goto IL_020c;                              //br				IL_0005
	IL_020c:                                                                        //ldloc.1
	IL_020d:            if(V_1==nullptr)goto IL_01c5;                               //brfalse.s				IL_01c5
	IL_020f:                                                                        //ldc.i4				0x20
	IL_0214:            V_3=32;                                                     //stloc				V_3
	IL_0218:            /*goto IL_0005;*/goto IL_021d;                              //br				IL_0005
	IL_021d:            goto IL_0349;                                               //br				IL_0349
	IL_0222:                                                                        //ldc.i4				0x11
	IL_0227:            V_3=17;                                                     //stloc				V_3
	IL_022b:            /*goto IL_0005;*/goto IL_0230;                              //br				IL_0005
	IL_0230:                                                                        //ldloc.0
	IL_0231:            Temp_12=V_0->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0236:                                                                        //ldloc.2
	IL_0237:            Temp_13=V_2->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_023c:            if(Temp_12!=Temp_13)goto IL_0397;                           //bne.un				IL_0397
	IL_0241:                                                                        //ldc.i4				0x17
	IL_0246:            V_3=23;                                                     //stloc				V_3
	IL_024a:            /*goto IL_0005;*/goto IL_024f;                              //br				IL_0005
	IL_024f:            goto IL_00e0;                                               //br				IL_00e0
	IL_0254:                                                                        //ldc.i4				0x16
	IL_0259:            V_3=22;                                                     //stloc				V_3
	IL_025d:            /*goto IL_0005;*/goto IL_0262;                              //br				IL_0005
	IL_0262:                                                                        //ldloc.1
	IL_0263:            if(V_1==nullptr)goto IL_02d5;                               //brfalse.s				IL_02d5
	IL_0265:                                                                        //ldc.i4				0x14
	IL_026a:            V_3=20;                                                     //stloc				V_3
	IL_026e:            /*goto IL_0005;*/goto IL_0273;                              //br				IL_0005
	IL_0273:            goto IL_0275;                                               //br.s				IL_0275
	IL_0275:                                                                        //ldc.i4				0x10
	IL_027a:            V_3=16;                                                     //stloc				V_3
	IL_027e:            /*goto IL_0005;*/goto IL_0283;                              //br				IL_0005
	IL_0283:                                                                        //ldloc.0
	IL_0284:            Temp_10=V_0->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_0289:                                                                        //ldloc.1
	IL_028a:            Temp_11=V_1->Visibility;                                    //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_028f:            if(Temp_10!=Temp_11)goto IL_0397;                           //bne.un				IL_0397
	IL_0294:                                                                        //ldc.i4				0x9
	IL_0299:            V_3=9;                                                      //stloc				V_3
	IL_029d:            /*goto IL_0005;*/goto IL_02a2;                              //br				IL_0005
	IL_02a2:            goto IL_01f7;                                               //br				IL_01f7
	IL_02a7:                                                                        //ldloc.0
	IL_02a8:            Temp_6=V_0->Visibility;                                     //callvirt				Reflector::CodeModel::MethodVisibility Reflector::CodeModel::IMethodDeclaration::get_Visibility()
	IL_02ad:            return Temp_6;                                              //ret
	IL_02ae:                                                                        //ldc.i4				0xd
	IL_02b3:            V_3=13;                                                     //stloc				V_3
	IL_02b7:            /*goto IL_0005;*/goto IL_02bc;                              //br				IL_0005
	IL_02bc:                                                                        //ldloc.2
	IL_02bd:            if(V_2==nullptr)goto IL_0370;                               //brfalse				IL_0370
	IL_02c2:                                                                        //ldc.i4				0x19
	IL_02c7:            V_3=25;                                                     //stloc				V_3
	IL_02cb:            /*goto IL_0005;*/goto IL_02d0;                              //br				IL_0005
	IL_02d0:            goto IL_013d;                                               //br				IL_013d
	IL_02d5:                                                                        //ldc.i4				0x1c
	IL_02da:            V_3=28;                                                     //stloc				V_3
	IL_02de:            /*goto IL_0005;*/goto IL_02e3;                              //br				IL_0005
	IL_02e3:                                                                        //ldloc.0
	IL_02e4:            if(V_0==nullptr)goto IL_0325;                               //brfalse.s				IL_0325
	IL_02e6:                                                                        //ldc.i4.5
	IL_02e7:                                                                        //dup
	IL_02e8:                                                                        //dup
	IL_02e9:                                                                        //ldc.i4.3
	IL_02ea:                                                                        //sub
	IL_02eb:                                                                        //blt				IL_02e7
	IL_02f0:                                                                        //pop
	IL_02f1:                                                                        //ldc.i4				0x18
	IL_02f6:            V_3=24;                                                     //stloc				V_3
	IL_02fa:            /*goto IL_0005;*/goto IL_02ff;                              //br				IL_0005
	IL_02ff:            goto IL_0301;                                               //br.s				IL_0301
	IL_0301:                                                                        //ldc.i4				0x5
	IL_0306:            V_3=5;                                                      //stloc				V_3
	IL_030a:            /*goto IL_0005;*/goto IL_030f;                              //br				IL_0005
	IL_030f:                                                                        //ldloc.2
	IL_0310:            if(V_2==nullptr)goto IL_0325;                               //brfalse.s				IL_0325
	IL_0312:                                                                        //ldc.i4				0x8
	IL_0317:            V_3=8;                                                      //stloc				V_3
	IL_031b:            /*goto IL_0005;*/goto IL_0320;                              //br				IL_0005
	IL_0320:            goto IL_0193;                                               //br				IL_0193
	IL_0325:                                                                        //ldc.i4				0xc
	IL_032a:            V_3=12;                                                     //stloc				V_3
	IL_032e:            /*goto IL_0005;*/goto IL_0333;                              //br				IL_0005
	IL_0333:                                                                        //ldloc.1
	IL_0334:            if(V_1==nullptr)goto IL_0370;                               //brfalse.s				IL_0370
	IL_0336:                                                                        //ldc.i4				0xe
	IL_033b:            V_3=14;                                                     //stloc				V_3
	IL_033f:            /*goto IL_0005;*/goto IL_0344;                              //br				IL_0005
	IL_0344:            goto IL_02ae;                                               //br				IL_02ae
	IL_0349:                                                                        //ldc.i4				0x4
	IL_034e:            V_3=4;                                                      //stloc				V_3
	IL_0352:            /*goto IL_0005;*/goto IL_0357;                              //br				IL_0005
	IL_0357:                                                                        //ldloc.2
	IL_0358:            if(V_2==nullptr)goto IL_01c5;                               //brfalse				IL_01c5
	IL_035d:                                                                        //ldc.i4				0xb
	IL_0362:            V_3=11;                                                     //stloc				V_3
	IL_0366:            /*goto IL_0005;*/goto IL_036b;                              //br				IL_0005
	IL_036b:            goto IL_010b;                                               //br				IL_010b
	IL_0370:                                                                        //ldc.i4				0x1b
	IL_0375:            V_3=27;                                                     //stloc				V_3
	IL_0379:            /*goto IL_0005;*/goto IL_037e;                              //br				IL_0005
	IL_037e:                                                                        //ldloc.0
	IL_037f:            if(V_0==nullptr)goto IL_00e7;                               //brfalse				IL_00e7
	IL_0384:                                                                        //ldc.i4				0x3
	IL_0389:            V_3=3;                                                      //stloc				V_3
	IL_038d:            /*goto IL_0005;*/goto IL_0392;                              //br				IL_0005
	IL_0392:            goto IL_02a7;                                               //br				IL_02a7
	IL_0397:                                                                        //ldc.i4.6
	IL_0398:            return safe_cast<Reflector::CodeModel::MethodVisibility>(6);//ret

}
inline System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	Reflector::CodeModel::IType^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_009a;case 1:goto IL_006d;case 2:goto IL_0080;case 3:goto IL_0059;case 4:goto IL_00ab;case 5:goto IL_0045;};//switch				(IL_009a,IL_006d,IL_0080,IL_0059,IL_00ab,IL_0045)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_0=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0032:            V_0=Temp_0;                                                 //stloc.0
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_1=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0039:            V_1=Temp_1;                                                 //stloc.1
	IL_003a:                                                                        //ldc.i4				0x5
	IL_003f:            V_3=5;                                                      //stloc				V_3
	IL_0043:            /*goto IL_000b;*/goto IL_0045;                              //br.s				IL_000b
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldloc.1
	IL_0047:            Temp_9=V_0->Equals(safe_cast<System::Object^>(V_1));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_004c:            if(!Temp_9)goto IL_00ad;                                    //brfalse.s				IL_00ad
	IL_004e:                                                                        //ldc.i4				0x3
	IL_0053:            V_3=3;                                                      //stloc				V_3
	IL_0057:            /*goto IL_000b;*/goto IL_0059;                              //br.s				IL_000b
	IL_0059:            goto IL_0082;                                               //br.s				IL_0082
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_8=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0061:            return Temp_8;                                              //ret
	IL_0062:                                                                        //ldc.i4				0x1
	IL_0067:            V_3=1;                                                      //stloc				V_3
	IL_006b:            /*goto IL_000b;*/goto IL_006d;                              //br.s				IL_000b
	IL_006d:                                                                        //ldloc.2
	IL_006e:            Temp_7=Root::T_x115::M_x1(V_2);                             //call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0073:            if(!Temp_7)goto IL_00ad;                                    //brfalse.s				IL_00ad
	IL_0075:                                                                        //ldc.i4				0x2
	IL_007a:            V_3=2;                                                      //stloc				V_3
	IL_007e:            /*goto IL_000b;*/goto IL_0080;                              //br.s				IL_000b
	IL_0080:            goto IL_005b;                                               //br.s				IL_005b
	IL_0082:                                                                        //ldloc.0
	IL_0083:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0088:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(V_0);//stloc.2
	IL_0089:            goto IL_008c;                                               //br.s				IL_008c
	IL_008b:                                                                        //break
	IL_008c:                                                                        //ldc.i4				0x0
	IL_0091:            V_3=0;                                                      //stloc				V_3
	IL_0095:            /*goto IL_000b;*/goto IL_009a;                              //br				IL_000b
	IL_009a:                                                                        //ldloc.2
	IL_009b:            if(V_2==nullptr)goto IL_00ad;                               //brfalse.s				IL_00ad
	IL_009d:                                                                        //ldc.i4				0x4
	IL_00a2:            V_3=4;                                                      //stloc				V_3
	IL_00a6:            /*goto IL_000b;*/goto IL_00ab;                              //br				IL_000b
	IL_00ab:            goto IL_0062;                                               //br.s				IL_0062
	IL_00ad:                                                                        //ldarg.0
	IL_00ae:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_00b3:                                                                        //ldstr				L"\x0F2E\x0B30\x1332"
	IL_00b8:                                                                        //ldloc				V_4
	IL_00bc:            Temp_3=a(L"\x0F2E\x0B30\x1332",V_4);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:            Temp_4=A_0->FieldType;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_00c7:            Temp_5=Temp_4->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_00cc:            Temp_6=System::String::Concat(Temp_2,Temp_3,Temp_5);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00d1:            return Temp_6;                                              //ret

}
inline System::String^ Root::T_x115::M_x2(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IType^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Reflector::CodeModel::IParameterDeclarationCollection^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	Reflector::CodeModel::MethodCallingConvention Temp_21 = (Reflector::CodeModel::MethodCallingConvention)0;
	System::String^ Temp_22 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclarationCollection^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_6=5;                                                      //stloc				V_6
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:            goto IL_006d;                                               //br.s				IL_006d
	IL_0018:                                                                        //ldloc				V_4
	IL_001c:            switch(V_4){case 0:goto IL_00e8;case 1:goto IL_02c6;case 2:goto IL_015f;case 3:goto IL_0285;case 4:goto IL_01cb;case 5:goto IL_01de;case 6:goto IL_02e0;case 7:goto IL_024b;case 8:goto IL_01af;case 9:goto IL_0272;case 10:goto IL_00d5;case 11:goto IL_021f;case 12:goto IL_02ac;case 13:goto IL_0138;case 14:goto IL_019c;case 15:goto IL_00a7;case 16:goto IL_0114;case 17:goto IL_0299;case 18:goto IL_01f8;};//switch				(IL_00e8,IL_02c6,IL_015f,IL_0285,IL_01cb,IL_01de,IL_02e0,IL_024b,IL_01af,IL_0272,IL_00d5,IL_021f,IL_02ac,IL_0138,IL_019c,IL_00a7,IL_0114,IL_0299,IL_01f8)
	IL_006d:                                                                        //ldloc.0
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_2=Root::T_x115::M_x12(A_0);                            //call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IMethodReference^)
	IL_0074:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0079:                                                                        //ldloc.0
	IL_007a:                                                                        //ldstr				L"\x0B22"
	IL_007f:                                                                        //ldloc				V_6
	IL_0083:            Temp_3=a(L"\x0B22",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_4=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_0093:            V_1=Temp_4;                                                 //stloc.1
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            V_2=0;                                                      //stloc.2
	IL_0096:            goto IL_0099;                                               //br.s				IL_0099
	IL_0098:                                                                        //break
	IL_0099:                                                                        //ldc.i4				0xf
	IL_009e:            V_4=15;                                                     //stloc				V_4
	IL_00a2:            /*goto IL_0018;*/goto IL_00a7;                              //br				IL_0018
	IL_00a7:            goto IL_01d0;                                               //br				IL_01d0
	IL_00ac:                                                                        //ldloc.0
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:                                                                        //ldloc.2
	IL_00af:            Temp_10=V_1[V_2];                                           //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterDeclarationCollection::get_Item(System::Int32)
	IL_00b4:            Temp_11=Temp_10->ParameterType;                             //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_00b9:            Temp_12=Temp_11->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_00be:            V_0->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00c3:                                                                        //ldloc.2
	IL_00c4:                                                                        //ldc.i4.1
	IL_00c5:                                                                        //add
	IL_00c6:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00c7:                                                                        //ldc.i4				0xa
	IL_00cc:            V_4=10;                                                     //stloc				V_4
	IL_00d0:            /*goto IL_0018;*/goto IL_00d5;                              //br				IL_0018
	IL_00d5:            goto IL_01d0;                                               //br				IL_01d0
	IL_00da:                                                                        //ldc.i4				0x0
	IL_00df:            V_4=0;                                                      //stloc				V_4
	IL_00e3:            /*goto IL_0018;*/goto IL_00e8;                              //br				IL_0018
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_5=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_00ee:                                                                        //ldstr				L"\x0D22\x4624\x4426\x5D28\x442A\x5F2C"
	IL_00f3:                                                                        //ldloc				V_6
	IL_00f7:            Temp_6=a(L"\x0D22\x4624\x4426\x5D28\x442A\x5F2C",V_6);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fc:            Temp_7=(Temp_5 != Temp_6);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0101:            if(!Temp_7)goto IL_02cb;                                    //brfalse				IL_02cb
	IL_0106:                                                                        //ldc.i4				0x10
	IL_010b:            V_4=16;                                                     //stloc				V_4
	IL_010f:            /*goto IL_0018;*/goto IL_0114;                              //br				IL_0018
	IL_0114:            goto IL_0164;                                               //br.s				IL_0164
	IL_0116:                                                                        //ldloc.0
	IL_0117:                                                                        //ldstr				L"\x0F22\x0524"
	IL_011c:                                                                        //ldloc				V_6
	IL_0120:            Temp_26=a(L"\x0F22\x0524",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0125:            V_0->Write(Temp_26);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_012a:                                                                        //ldc.i4				0xd
	IL_012f:            V_4=13;                                                     //stloc				V_4
	IL_0133:            /*goto IL_0018;*/goto IL_0138;                              //br				IL_0018
	IL_0138:            goto IL_00ac;                                               //br				IL_00ac
	IL_013d:                                                                        //ldloc.0
	IL_013e:                                                                        //ldstr				L"\x0D22\x0B24\x0926"
	IL_0143:                                                                        //ldloc				V_6
	IL_0147:            Temp_17=a(L"\x0D22\x0B24\x0926",V_6);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014c:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0151:                                                                        //ldc.i4				0x2
	IL_0156:            V_4=2;                                                      //stloc				V_4
	IL_015a:            /*goto IL_0018;*/goto IL_015f;                              //br				IL_0018
	IL_015f:            goto IL_01fd;                                               //br				IL_01fd
	IL_0164:                                                                        //ldloc.0
	IL_0165:                                                                        //ldstr				L"\x0322\x1F24\x0726"
	IL_016a:                                                                        //ldloc				V_6
	IL_016e:            Temp_22=a(L"\x0322\x1F24\x0726",V_6);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0173:            V_0->Write(Temp_22);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0178:                                                                        //ldloc.0
	IL_0179:                                                                        //ldarg.0
	IL_017a:            Temp_23=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_017f:            Temp_24=Temp_23->Type;                                      //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_0184:            Temp_25=Temp_24->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_0189:            V_0->Write(Temp_25);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_018e:                                                                        //ldc.i4				0xe
	IL_0193:            V_4=14;                                                     //stloc				V_4
	IL_0197:            /*goto IL_0018;*/goto IL_019c;                              //br				IL_0018
	IL_019c:            goto IL_02cb;                                               //br				IL_02cb
	IL_01a1:                                                                        //ldc.i4				0x8
	IL_01a6:            V_4=8;                                                      //stloc				V_4
	IL_01aa:            /*goto IL_0018;*/goto IL_01af;                              //br				IL_0018
	IL_01af:                                                                        //ldarg.0
	IL_01b0:            Temp_15=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->Parameters;//callvirt				Reflector::CodeModel::IParameterDeclarationCollection^ Reflector::CodeModel::IMethodSignature::get_Parameters()
	IL_01b5:            Temp_16=safe_cast<System::Collections::ICollection^>(Temp_15)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01ba:                                                                        //ldc.i4.0
	IL_01bb:            if(Temp_16<=0)goto IL_013d;                                 //ble.s				IL_013d
	IL_01bd:                                                                        //ldc.i4				0x4
	IL_01c2:            V_4=4;                                                      //stloc				V_4
	IL_01c6:            /*goto IL_0018;*/goto IL_01cb;                              //br				IL_0018
	IL_01cb:            goto IL_0250;                                               //br				IL_0250
	IL_01d0:                                                                        //ldc.i4				0x5
	IL_01d5:            V_4=5;                                                      //stloc				V_4
	IL_01d9:            /*goto IL_0018;*/goto IL_01de;                              //br				IL_0018
	IL_01de:                                                                        //ldloc.2
	IL_01df:                                                                        //ldloc.1
	IL_01e0:            Temp_14=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01e5:            if(V_2<Temp_14)goto IL_0277;                                //blt				IL_0277
	IL_01ea:                                                                        //ldc.i4				0x12
	IL_01ef:            V_4=18;                                                     //stloc				V_4
	IL_01f3:            /*goto IL_0018;*/goto IL_01f8;                              //br				IL_0018
	IL_01f8:            goto IL_029e;                                               //br				IL_029e
	IL_01fd:                                                                        //ldloc.0
	IL_01fe:                                                                        //ldstr				L"\x0A22"
	IL_0203:                                                                        //ldloc				V_6
	IL_0207:            Temp_9=a(L"\x0A22",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020c:            V_0->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0211:                                                                        //ldc.i4				0xb
	IL_0216:            V_4=11;                                                     //stloc				V_4
	IL_021a:            /*goto IL_0018;*/goto IL_021f;                              //br				IL_0018
	IL_021f:                                                                        //ldarg.0
	IL_0220:            Temp_18=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0225:                                                                        //ldstr				L"\x0D22\x4624\x5326\x4628\x592A"
	IL_022a:                                                                        //ldloc				V_6
	IL_022e:            Temp_19=a(L"\x0D22\x4624\x5326\x4628\x592A",V_6);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0233:            Temp_20=(Temp_18 != Temp_19);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0238:            if(!Temp_20)goto IL_02cb;                                   //brfalse				IL_02cb
	IL_023d:                                                                        //ldc.i4				0x7
	IL_0242:            V_4=7;                                                      //stloc				V_4
	IL_0246:            /*goto IL_0018;*/goto IL_024b;                              //br				IL_0018
	IL_024b:            goto IL_00da;                                               //br				IL_00da
	IL_0250:                                                                        //ldloc.0
	IL_0251:                                                                        //ldstr				L"\x0F22\x0524"
	IL_0256:                                                                        //ldloc				V_6
	IL_025a:            Temp_13=a(L"\x0F22\x0524",V_6);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025f:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0264:                                                                        //ldc.i4				0x9
	IL_0269:            V_4=9;                                                      //stloc				V_4
	IL_026d:            /*goto IL_0018;*/goto IL_0272;                              //br				IL_0018
	IL_0272:            goto IL_013d;                                               //br				IL_013d
	IL_0277:                                                                        //ldc.i4				0x3
	IL_027c:            V_4=3;                                                      //stloc				V_4
	IL_0280:            /*goto IL_0018;*/goto IL_0285;                              //br				IL_0018
	IL_0285:                                                                        //ldloc.2
	IL_0286:            if(V_2==0)goto IL_00ac;                                     //brfalse				IL_00ac
	IL_028b:                                                                        //ldc.i4				0x11
	IL_0290:            V_4=17;                                                     //stloc				V_4
	IL_0294:            /*goto IL_0018;*/goto IL_0299;                              //br				IL_0018
	IL_0299:            goto IL_0116;                                               //br				IL_0116
	IL_029e:                                                                        //ldc.i4				0xc
	IL_02a3:            V_4=12;                                                     //stloc				V_4
	IL_02a7:            /*goto IL_0018;*/goto IL_02ac;                              //br				IL_0018
	IL_02ac:                                                                        //ldarg.0
	IL_02ad:            Temp_21=safe_cast<Reflector::CodeModel::IMethodSignature^>(A_0)->CallingConvention;//callvirt				Reflector::CodeModel::MethodCallingConvention Reflector::CodeModel::IMethodSignature::get_CallingConvention()
	IL_02b2:                                                                        //ldc.i4.5
	IL_02b3:            if(safe_cast<System::Int32>(Temp_21)!=5)goto IL_01fd;       //bne.un				IL_01fd
	IL_02b8:                                                                        //ldc.i4				0x1
	IL_02bd:            V_4=1;                                                      //stloc				V_4
	IL_02c1:            /*goto IL_0018;*/goto IL_02c6;                              //br				IL_0018
	IL_02c6:            goto IL_01a1;                                               //br				IL_01a1
	IL_02cb:                                                                        //ldloc.0
	IL_02cc:            Temp_8=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_02d1:            V_3=Temp_8;                                                 //stloc.3
	IL_02d2:                                                                        //ldc.i4				0x6
	IL_02d7:            V_4=6;                                                      //stloc				V_4
	IL_02db:            /*goto IL_0018;*/goto IL_02e0;                              //br				IL_0018
	IL_02e0:            goto IL_0328;                                               //leave.s				IL_0328
	                    ;}
	                    finally{
	IL_02e2:                                                                        //ldc.i4				0x1
	IL_02e7:            V_5=1;                                                      //stloc				V_5
	IL_02eb:            /*goto IL_02ef;*/goto IL_02ed;                              //br.s				IL_02ef
	IL_02ed:            goto IL_0304;                                               //br.s				IL_0304
	IL_02ef:                                                                        //ldloc				V_5
	IL_02f3:            switch(V_5){case 0:goto IL_0325;case 1:goto IL_02ed;case 2:goto IL_0312;};//switch				(IL_0325,IL_02ed,IL_0312)
	IL_0304:                                                                        //ldloc.0
	IL_0305:            if(V_0==nullptr)goto IL_0327;                               //brfalse.s				IL_0327
	IL_0307:                                                                        //ldc.i4				0x2
	IL_030c:            V_5=2;                                                      //stloc				V_5
	IL_0310:            /*goto IL_02ef;*/goto IL_0312;                              //br.s				IL_02ef
	IL_0312:            goto IL_0314;                                               //br.s				IL_0314
	IL_0314:                                                                        //ldloc.0
	IL_0315:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_031a:                                                                        //ldc.i4				0x0
	IL_031f:            V_5=0;                                                      //stloc				V_5
	IL_0323:            /*goto IL_02ef;*/goto IL_0325;                              //br.s				IL_02ef
	IL_0325:            goto IL_0327;                                               //br.s				IL_0327
	IL_0327:                                                                        //endfinally
	                    ;}
	IL_0328:                                                                        //ldloc.3
	IL_0329:            return V_3;                                                 //ret

}
inline System::Boolean Root::T_x115::M_x2(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IPropertyDeclaration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Boolean Temp_10 = false;
	System::Boolean Temp_11 = false;
	System::Boolean Temp_12 = false;
	System::Boolean Temp_13 = false;
	System::Boolean Temp_14 = false;
	System::Boolean Temp_15 = false;
	System::Boolean Temp_16 = false;
	//local variables.
	System::Boolean V_0 = false;
	Reflector::CodeModel::IPropertyDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_003f;                                               //br.s				IL_003f
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_0136;case 1:goto IL_00db;case 2:goto IL_00af;case 3:goto IL_0053;case 4:goto IL_0099;case 5:goto IL_0078;case 6:goto IL_0164;case 7:goto IL_0102;case 8:goto IL_0089;case 9:goto IL_00eb;case 10:goto IL_0115;case 11:goto IL_00c9;case 12:goto IL_0064;};//switch				(IL_0136,IL_00db,IL_00af,IL_0053,IL_0099,IL_0078,IL_0164,IL_0102,IL_0089,IL_00eb,IL_0115,IL_00c9,IL_0064)
	IL_003f:                                                                        //ldc.i4.0
	IL_0040:            V_0=false;                                                  //stloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyReference::Resolve()
	IL_0047:            V_1=Temp_0;                                                 //stloc.1
	IL_0048:                                                                        //ldc.i4				0x3
	IL_004d:            V_6=3;                                                      //stloc				V_6
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:                                                                        //ldloc.1
	IL_0054:            if(V_1==nullptr)goto IL_0166;                               //brfalse				IL_0166
	IL_0059:                                                                        //ldc.i4				0xc
	IL_005e:            V_6=12;                                                     //stloc				V_6
	IL_0062:            /*goto IL_0002;*/goto IL_0064;                              //br.s				IL_0002
	IL_0064:            goto IL_0066;                                               //br.s				IL_0066
	IL_0066:                                                                        //ldloc.1
	IL_0067:            Temp_6=V_1->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_006c:            V_2=Temp_6;                                                 //stloc.2
	IL_006d:                                                                        //ldc.i4				0x5
	IL_0072:            V_6=5;                                                      //stloc				V_6
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:                                                                        //ldloc.2
	IL_0079:            if(V_2==nullptr)goto IL_00a1;                               //brfalse.s				IL_00a1
	IL_007b:                                                                        //ldc.i4				0x8
	IL_0080:            V_6=8;                                                      //stloc				V_6
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:            goto IL_008b;                                               //br.s				IL_008b
	IL_008b:                                                                        //ldc.i4				0x4
	IL_0090:            V_6=4;                                                      //stloc				V_6
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:                                                                        //ldloc.2
	IL_009a:            Temp_3=V_2->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_009f:            Temp_7=Temp_3;goto IL_00b2;                                 //br.s				IL_00b2
	IL_00a1:                                                                        //ldc.i4				0x2
	IL_00a6:            V_6=2;                                                      //stloc				V_6
	IL_00aa:            /*goto IL_0002;*/goto IL_00af;                              //br				IL_0002
	IL_00af:                                                                        //ldnull
	IL_00b0:            Temp_7=nullptr;goto IL_00b2;                                //br.s				IL_00b2
	IL_00b2:            V_3=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_7);/*warning ! semantic stack doesn't empty at joint !;*///stloc.3
	IL_00b3:                                                                        //ldloc.1
	IL_00b4:            Temp_2=V_1->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_00b9:            V_4=Temp_2;                                                 //stloc.s				V_4
	IL_00bb:                                                                        //ldc.i4				0xb
	IL_00c0:            V_6=11;                                                     //stloc				V_6
	IL_00c4:            /*goto IL_0002;*/goto IL_00c9;                              //br				IL_0002
	IL_00c9:                                                                        //ldloc.s				V_4
	IL_00cb:            if(V_4==nullptr)goto IL_00f4;                               //brfalse.s				IL_00f4
	IL_00cd:                                                                        //ldc.i4				0x1
	IL_00d2:            V_6=1;                                                      //stloc				V_6
	IL_00d6:            /*goto IL_0002;*/goto IL_00db;                              //br				IL_0002
	IL_00db:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_00dd:                                                                        //ldc.i4				0x9
	IL_00e2:            V_6=9;                                                      //stloc				V_6
	IL_00e6:            /*goto IL_0002;*/goto IL_00eb;                              //br				IL_0002
	IL_00eb:                                                                        //ldloc.s				V_4
	IL_00ed:            Temp_4=V_4->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_00f2:            Temp_8=Temp_4;goto IL_0105;                                 //br.s				IL_0105
	IL_00f4:                                                                        //ldc.i4				0x7
	IL_00f9:            V_6=7;                                                      //stloc				V_6
	IL_00fd:            /*goto IL_0002;*/goto IL_0102;                              //br				IL_0002
	IL_0102:                                                                        //ldnull
	IL_0103:            Temp_8=nullptr;goto IL_0105;                                //br.s				IL_0105
	IL_0105:            V_5=safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_8);/*warning ! semantic stack doesn't empty at joint !;*///stloc.s				V_5
	IL_0107:                                                                        //ldc.i4				0xa
	IL_010c:            V_6=10;                                                     //stloc				V_6
	IL_0110:            /*goto IL_0002;*/goto IL_0115;                              //br				IL_0002
	IL_0115:                                                                        //ldloc.0
	IL_0116:                                                                        //ldloc.3
	IL_0117:            Temp_10=V_0;if(V_3==nullptr)goto IL_0123;                   //brfalse.s				IL_0123
	IL_0119:            goto IL_011b;                                               //br.s				IL_011b
	IL_011b:                                                                        //ldloc.3
	IL_011c:            Temp_5=V_3->Static;                                         //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_0121:            Temp_12=Temp_10;Temp_11=Temp_5;goto IL_0126;                //br.s				IL_0126
	IL_0123:                                                                        //ldc.i4.0
	IL_0124:            Temp_12=Temp_10;Temp_11=false;goto IL_0126;                 //br.s				IL_0126
	IL_0126:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_0127:            V_0=safe_cast<System::Boolean>((Temp_12 | safe_cast<System::Boolean>(Temp_11)));//stloc.0
	IL_0128:                                                                        //ldc.i4				0x0
	IL_012d:            V_6=0;                                                      //stloc				V_6
	IL_0131:            /*goto IL_0002;*/goto IL_0136;                              //br				IL_0002
	IL_0136:                                                                        //ldloc.0
	IL_0137:                                                                        //ldloc.s				V_5
	IL_0139:            Temp_14=V_0;if(V_5==nullptr)goto IL_0146;                   //brfalse.s				IL_0146
	IL_013b:            goto IL_013d;                                               //br.s				IL_013d
	IL_013d:                                                                        //ldloc.s				V_5
	IL_013f:            Temp_1=V_5->Static;                                         //callvirt				System::Boolean Reflector::CodeModel::IMethodDeclaration::get_Static()
	IL_0144:            Temp_16=Temp_14;Temp_15=Temp_1;goto IL_0149;                //br.s				IL_0149
	IL_0146:                                                                        //ldc.i4.0
	IL_0147:            Temp_16=Temp_14;Temp_15=false;goto IL_0149;                 //br.s				IL_0149
	IL_0149:            /*warning ! semantic stack doesn't empty at joint !;*/      //or
	IL_014a:            V_0=safe_cast<System::Boolean>((Temp_16 | safe_cast<System::Boolean>(Temp_15)));//stloc.0
	IL_014b:                                                                        //ldc.i4.0
	IL_014c:                                                                        //dup
	IL_014d:                                                                        //dup
	IL_014e:                                                                        //ldc.i4.2
	IL_014f:                                                                        //sub
	IL_0150:                                                                        //blt				IL_014c
	IL_0155:                                                                        //pop
	IL_0156:                                                                        //ldc.i4				0x6
	IL_015b:            V_6=6;                                                      //stloc				V_6
	IL_015f:            /*goto IL_0002;*/goto IL_0164;                              //br				IL_0002
	IL_0164:            goto IL_0166;                                               //br.s				IL_0166
	IL_0166:                                                                        //ldloc.0
	IL_0167:            return V_0;                                                 //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::IEventDeclaration^>^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0029;case 1:goto IL_0043;case 2:goto IL_0186;};//switch				(IL_0029,IL_0043,IL_0186)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=A_0->Events;                                         //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_001d:            V_0=Temp_0;                                                 //stloc.0
	IL_001e:                                                                        //ldc.i4				0x0
	IL_0023:            V_5=0;                                                      //stloc				V_5
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:                                                                        //ldloc.0
	IL_002a:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_002f:                                                                        //ldc.i4.0
	IL_0030:            if(Temp_1<=0)goto IL_0193;                                  //ble				IL_0193
	IL_0035:            goto IL_0038;                                               //br.s				IL_0038
	IL_0037:                                                                        //break
	IL_0038:                                                                        //ldc.i4				0x1
	IL_003d:            V_5=1;                                                      //stloc				V_5
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_016a;                                               //br				IL_016a
	IL_004301:          try{
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_5=1;                                                      //stloc				V_5
	IL_0051:            /*goto IL_0055;*/goto IL_0053;                              //br.s				IL_0055
	IL_0053:            goto IL_0082;                                               //br.s				IL_0082
	IL_0055:                                                                        //ldloc				V_5
	IL_0059:            switch(V_5){case 0:goto IL_00f1;case 1:goto IL_0053;case 2:goto IL_0108;case 3:goto IL_00c9;case 4:goto IL_00e1;case 5:goto IL_0118;case 6:goto IL_009b;case 7:goto IL_00a9;case 8:goto IL_00b6;};//switch				(IL_00f1,IL_0053,IL_0108,IL_00c9,IL_00e1,IL_0118,IL_009b,IL_00a9,IL_00b6)
	IL_0082:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_0084:                                                                        //ldloc.3
	IL_0085:            Temp_8=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008a:                                                                        //castclass				Reflector::CodeModel::IEventDeclaration
	IL_008f:            V_2=safe_cast<Reflector::CodeModel::IEventDeclaration^>(Temp_8);//stloc.2
	IL_0090:                                                                        //ldc.i4				0x6
	IL_0095:            V_5=6;                                                      //stloc				V_5
	IL_0099:            /*goto IL_0055;*/goto IL_009b;                              //br.s				IL_0055
	IL_009b:                                                                        //ldarg.1
	IL_009c:            if(A_1==nullptr)goto IL_00cb;                               //brfalse.s				IL_00cb
	IL_009e:                                                                        //ldc.i4				0x7
	IL_00a3:            V_5=7;                                                      //stloc				V_5
	IL_00a7:            /*goto IL_0055;*/goto IL_00a9;                              //br.s				IL_0055
	IL_00a9:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00ab:                                                                        //ldc.i4				0x8
	IL_00b0:            V_5=8;                                                      //stloc				V_5
	IL_00b4:            /*goto IL_0055;*/goto IL_00b6;                              //br.s				IL_0055
	IL_00b6:                                                                        //ldloc.3
	IL_00b7:            Temp_7=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00bc:            if(Temp_7)goto IL_0084;                                     //brtrue.s				IL_0084
	IL_00be:                                                                        //ldc.i4				0x3
	IL_00c3:            V_5=3;                                                      //stloc				V_5
	IL_00c7:            /*goto IL_0055;*/goto IL_00c9;                              //br.s				IL_0055
	IL_00c9:            goto IL_010a;                                               //br.s				IL_010a
	IL_00cb:                                                                        //ldloc.1
	IL_00cc:                                                                        //ldloc.2
	IL_00cd:            Temp_6=V_1->Add(safe_cast<System::Object^>(V_2));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00d2:                                                                        //pop
	IL_00d3:                                                                        //ldc.i4				0x4
	IL_00d8:            V_5=4;                                                      //stloc				V_5
	IL_00dc:            /*goto IL_0055;*/goto IL_00e1;                              //br				IL_0055
	IL_00e1:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_5=0;                                                      //stloc				V_5
	IL_00ec:            /*goto IL_0055;*/goto IL_00f1;                              //br				IL_0055
	IL_00f1:                                                                        //ldloc.2
	IL_00f2:                                                                        //ldarg.1
	IL_00f3:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IEventReference^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IEventReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00f8:            if(!Temp_5)goto IL_00ab;                                    //brfalse.s				IL_00ab
	IL_00fa:                                                                        //ldc.i4				0x2
	IL_00ff:            V_5=2;                                                      //stloc				V_5
	IL_0103:            /*goto IL_0055;*/goto IL_0108;                              //br				IL_0055
	IL_0108:            goto IL_00cb;                                               //br.s				IL_00cb
	IL_010a:                                                                        //ldc.i4				0x5
	IL_010f:            V_5=5;                                                      //stloc				V_5
	IL_0113:            /*goto IL_0055;*/goto IL_0118;                              //br				IL_0055
	IL_0118:            goto IL_018b;                                               //leave.s				IL_018b
	                    ;}
	                    finally{
	IL_011a:            goto IL_0131;                                               //br.s				IL_0131
	IL_011c:                                                                        //ldloc				V_5
	IL_0120:            switch(V_5){case 0:goto IL_0167;case 1:goto IL_0153;case 2:goto IL_0144;};//switch				(IL_0167,IL_0153,IL_0144)
	IL_0131:                                                                        //ldloc.3
	IL_0132:                                                                        //isinst				System::IDisposable
	IL_0137:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0139:                                                                        //ldc.i4				0x2
	IL_013e:            V_5=2;                                                      //stloc				V_5
	IL_0142:            /*goto IL_011c;*/goto IL_0144;                              //br.s				IL_011c
	IL_0144:                                                                        //ldloc.s				V_4
	IL_0146:            if(V_4==nullptr)goto IL_0169;                               //brfalse.s				IL_0169
	IL_0148:                                                                        //ldc.i4				0x1
	IL_014d:            V_5=1;                                                      //stloc				V_5
	IL_0151:            /*goto IL_011c;*/goto IL_0153;                              //br.s				IL_011c
	IL_0153:            goto IL_0155;                                               //br.s				IL_0155
	IL_0155:                                                                        //ldloc.s				V_4
	IL_0157:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_015c:                                                                        //ldc.i4				0x0
	IL_0161:            V_5=0;                                                      //stloc				V_5
	IL_0165:            /*goto IL_011c;*/goto IL_0167;                              //br.s				IL_011c
	IL_0167:            goto IL_0169;                                               //br.s				IL_0169
	IL_0169:                                                                        //endfinally
	                    ;}
	IL_016a:                                                                        //ldc.i4.0
	IL_016b:            Temp_3=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0170:            V_1=Temp_3;                                                 //stloc.1
	IL_0171:                                                                        //ldloc.0
	IL_0172:            Temp_4=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0177:            V_3=Temp_4;                                                 //stloc.3
	IL_0178:                                                                        //ldc.i4				0x2
	IL_017d:            V_5=2;                                                      //stloc				V_5
	IL_0181:            /*goto IL_0002;*/goto IL_0186;                              //br				IL_0002
	IL_0186:            /*goto IL_0048;*/goto IL_004301;                            //br				IL_0048
	IL_018b:                                                                        //ldloc.1
	IL_018c:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0191:                                                                        //ldloc.1
	IL_0192:            return safe_cast<System::Collections::ICollection^>(V_1);   //ret
	IL_0193:                                                                        //ldc.i4.0
	IL_0194:            Temp_2=gcnew array<Reflector::CodeModel::IEventDeclaration^>(0);//newarr				Reflector::CodeModel::IEventDeclaration
	IL_0199:            return safe_cast<System::Collections::ICollection^>(Temp_2);//ret

}
inline System::Boolean Root::T_x115::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_3=17;                                                     //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_2=0;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005f;                                               //br.s				IL_005f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0014;case 1:goto IL_0188;case 2:goto IL_00ac;case 3:goto IL_020d;case 4:goto IL_00dd;case 5:goto IL_0175;case 6:goto IL_0221;case 7:goto IL_00f0;case 8:goto IL_01b1;case 9:goto IL_011c;case 10:goto IL_0149;case 11:goto IL_0070;case 12:goto IL_0080;case 13:goto IL_01f3;case 14:goto IL_01ca;case 15:goto IL_00c6;};//switch				(IL_0014,IL_0188,IL_00ac,IL_020d,IL_00dd,IL_0175,IL_0221,IL_00f0,IL_01b1,IL_011c,IL_0149,IL_0070,IL_0080,IL_01f3,IL_01ca,IL_00c6)
	IL_005f:                                                                        //ldarg.0
	IL_0060:            if(A_0==nullptr)goto IL_0223;                               //brfalse				IL_0223
	IL_0065:                                                                        //ldc.i4				0xb
	IL_006a:            V_2=11;                                                     //stloc				V_2
	IL_006e:            /*goto IL_0016;*/goto IL_0070;                              //br.s				IL_0016
	IL_0070:            goto IL_013b;                                               //br				IL_013b
	IL_0075:                                                                        //ldc.i4				0xc
	IL_007a:            V_2=12;                                                     //stloc				V_2
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:                                                                        //ldloc.1
	IL_0081:            Temp_14=V_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0086:                                                                        //ldstr				L"\x622E\x4430\x5F32\x4134\x5E36\x5A38\x5A3A\x4E3C\x4B3E\x0540\x2642\x2944\x2246\x2E48\x2A4A\x394C\x2A4E"
	IL_008b:                                                                        //ldloc				V_3
	IL_008f:            Temp_15=a(L"\x622E\x4430\x5F32\x4134\x5E36\x5A38\x5A3A\x4E3C\x4B3E\x0540\x2642\x2944\x2246\x2E48\x2A4A\x394C\x2A4E",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            Temp_16=(Temp_14 == Temp_15);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0099:            if(Temp_16)goto IL_0121;                                    //brtrue				IL_0121
	IL_009e:                                                                        //ldc.i4				0x2
	IL_00a3:            V_2=2;                                                      //stloc				V_2
	IL_00a7:            /*goto IL_0016;*/goto IL_00ac;                              //br				IL_0016
	IL_00ac:            goto IL_017a;                                               //br				IL_017a
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:            Temp_3=V_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00b7:            V_1=Temp_3;                                                 //stloc.1
	IL_00b8:                                                                        //ldc.i4				0xf
	IL_00bd:            V_2=15;                                                     //stloc				V_2
	IL_00c1:            /*goto IL_0016;*/goto IL_00c6;                              //br				IL_0016
	IL_00c6:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_00c8:                                                                        //break
	IL_00c9:                                                                        //ldloc.1
	IL_00ca:            if(V_1==nullptr)goto IL_01b6;                               //brfalse				IL_01b6
	IL_00cf:                                                                        //ldc.i4				0x4
	IL_00d4:            V_2=4;                                                      //stloc				V_2
	IL_00d8:            /*goto IL_0016;*/goto IL_00dd;                              //br				IL_0016
	IL_00dd:            goto IL_01bc;                                               //br				IL_01bc
	IL_00e2:                                                                        //ldc.i4				0x7
	IL_00e7:            V_2=7;                                                      //stloc				V_2
	IL_00eb:            /*goto IL_0016;*/goto IL_00f0;                              //br				IL_0016
	IL_00f0:                                                                        //ldarg.0
	IL_00f1:            Temp_4=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00f6:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438"
	IL_00fb:                                                                        //ldloc				V_3
	IL_00ff:            Temp_5=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0104:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0109:            if(!Temp_6)goto IL_01f8;                                    //brfalse				IL_01f8
	IL_010e:                                                                        //ldc.i4				0x9
	IL_0113:            V_2=9;                                                      //stloc				V_2
	IL_0117:            /*goto IL_0016;*/goto IL_011c;                              //br				IL_0016
	IL_011c:            goto IL_01ba;                                               //br				IL_01ba
	IL_0121:                                                                        //ldloc.1
	IL_0122:            Temp_8=V_1->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0127:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438"
	IL_012c:                                                                        //ldloc				V_3
	IL_0130:            Temp_9=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0135:            Temp_10=(Temp_8 == Temp_9);                                 //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_013a:            return Temp_10;                                             //ret
	IL_013b:                                                                        //ldc.i4				0xa
	IL_0140:            V_2=10;                                                     //stloc				V_2
	IL_0144:            /*goto IL_0016;*/goto IL_0149;                              //br				IL_0016
	IL_0149:                                                                        //ldarg.0
	IL_014a:            Temp_11=A_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_014f:                                                                        //ldstr				L"\x622E\x4430\x5F32\x4134\x5E36\x5A38\x5A3A\x4E3C\x4B3E\x0540\x2642\x2944\x2246\x2E48\x2A4A\x394C\x2A4E"
	IL_0154:                                                                        //ldloc				V_3
	IL_0158:            Temp_12=a(L"\x622E\x4430\x5F32\x4134\x5E36\x5A38\x5A3A\x4E3C\x4B3E\x0540\x2642\x2944\x2246\x2E48\x2A4A\x394C\x2A4E",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015d:            Temp_13=(Temp_11 == Temp_12);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0162:            if(!Temp_13)goto IL_01f8;                                   //brfalse				IL_01f8
	IL_0167:                                                                        //ldc.i4				0x5
	IL_016c:            V_2=5;                                                      //stloc				V_2
	IL_0170:            /*goto IL_0016;*/goto IL_0175;                              //br				IL_0016
	IL_0175:            goto IL_00e2;                                               //br				IL_00e2
	IL_017a:                                                                        //ldc.i4				0x1
	IL_017f:            V_2=1;                                                      //stloc				V_2
	IL_0183:            /*goto IL_0016;*/goto IL_0188;                              //br				IL_0016
	IL_0188:                                                                        //ldloc.1
	IL_0189:            Temp_0=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_018e:                                                                        //ldstr				L"\x6B2E\x5430\x5F32\x5034\x5036\x5838\x4F3A\x583C"
	IL_0193:                                                                        //ldloc				V_3
	IL_0197:            Temp_1=a(L"\x6B2E\x5430\x5F32\x5034\x5036\x5838\x4F3A\x583C",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019c:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01a1:            if(!Temp_2)goto IL_01b6;                                    //brfalse.s				IL_01b6
	IL_01a3:                                                                        //ldc.i4				0x8
	IL_01a8:            V_2=8;                                                      //stloc				V_2
	IL_01ac:            /*goto IL_0016;*/goto IL_01b1;                              //br				IL_0016
	IL_01b1:            goto IL_0121;                                               //br				IL_0121
	IL_01b6:                                                                        //ldc.i4.0
	IL_01b7:            return false;                                               //ret
	IL_01b8:                                                                        //ldc.i4.0
	IL_01b9:            return false;                                               //ret
	IL_01ba:                                                                        //ldc.i4.0
	IL_01bb:            return false;                                               //ret
	IL_01bc:                                                                        //ldc.i4				0xe
	IL_01c1:            V_2=14;                                                     //stloc				V_2
	IL_01c5:            /*goto IL_0016;*/goto IL_01ca;                              //br				IL_0016
	IL_01ca:                                                                        //ldloc.1
	IL_01cb:            Temp_17=V_1->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_01d0:                                                                        //ldstr				L"\x7C2E\x4830\x4032\x4134\x5236\x5438"
	IL_01d5:                                                                        //ldloc				V_3
	IL_01d9:            Temp_18=a(L"\x7C2E\x4830\x4032\x4134\x5236\x5438",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01de:            Temp_19=(Temp_17 == Temp_18);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01e3:            if(!Temp_19)goto IL_01b6;                                   //brfalse.s				IL_01b6
	IL_01e5:                                                                        //ldc.i4				0xd
	IL_01ea:            V_2=13;                                                     //stloc				V_2
	IL_01ee:            /*goto IL_0016;*/goto IL_01f3;                              //br				IL_0016
	IL_01f3:            goto IL_0075;                                               //br				IL_0075
	IL_01f8:                                                                        //ldarg.0
	IL_01f9:            Temp_7=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_01fe:            V_0=Temp_7;                                                 //stloc.0
	IL_01ff:                                                                        //ldc.i4				0x3
	IL_0204:            V_2=3;                                                      //stloc				V_2
	IL_0208:            /*goto IL_0016;*/goto IL_020d;                              //br				IL_0016
	IL_020d:                                                                        //ldloc.0
	IL_020e:            if(V_0!=nullptr)goto IL_00b1;                               //brtrue				IL_00b1
	IL_0213:                                                                        //ldc.i4				0x6
	IL_0218:            V_2=6;                                                      //stloc				V_2
	IL_021c:            /*goto IL_0016;*/goto IL_0221;                              //br				IL_0016
	IL_0221:            goto IL_01b8;                                               //br.s				IL_01b8
	IL_0223:                                                                        //ldc.i4.0
	IL_0224:            return false;                                               //ret

}
inline System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_000f:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0014:            Temp_1=Root::T_x115::M_x8(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0));//call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0019:                                                                        //ldstr				L"\x0F20"
	IL_001e:                                                                        //ldloc				V_0
	IL_0022:            Temp_2=a(L"\x0F20",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_3=Root::T_x115::M_x9(A_0);                             //call				System::String^ Root::T_x115::M_x9(Reflector::CodeModel::IEventReference^)
	IL_002d:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0032:            return Temp_4;                                              //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ICollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_1=Root::T_x115::M_x1(A_0);                             //call				System::Collections::ICollection^ Root::T_x115::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_000d:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0012:            V_2=Temp_2;                                                 //stloc.2
	IL_0013:            /*goto IL_0015;*/goto IL_001301;                            //br.s				IL_0015
	IL_001301:          try{
	IL_0015:            goto IL_0018;                                               //br.s				IL_0018
	IL_0017:                                                                        //break
	IL_0018:                                                                        //ldc.i4				0x2
	IL_001d:            V_4=2;                                                      //stloc				V_4
	IL_0021:            /*goto IL_0025;*/goto IL_0023;                              //br.s				IL_0025
	IL_0023:            goto IL_004a;                                               //br.s				IL_004a
	IL_0025:                                                                        //ldloc				V_4
	IL_0029:            switch(V_4){case 0:goto IL_0097;case 1:goto IL_0084;case 2:goto IL_0023;case 3:goto IL_00af;case 4:goto IL_00bf;case 5:goto IL_0063;case 6:goto IL_0077;};//switch				(IL_0097,IL_0084,IL_0023,IL_00af,IL_00bf,IL_0063,IL_0077)
	IL_004a:            goto IL_0079;                                               //br.s				IL_0079
	IL_004c:                                                                        //ldloc.2
	IL_004d:            Temp_4=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0052:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_0057:            V_1=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_4);//stloc.1
	IL_0058:                                                                        //ldc.i4				0x5
	IL_005d:            V_4=5;                                                      //stloc				V_4
	IL_0061:            /*goto IL_0025;*/goto IL_0063;                              //br.s				IL_0025
	IL_0063:                                                                        //ldloc.1
	IL_0064:                                                                        //ldarg.1
	IL_0065:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_1),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_006a:            if(!Temp_5)goto IL_0079;                                    //brfalse.s				IL_0079
	IL_006c:                                                                        //ldc.i4				0x6
	IL_0071:            V_4=6;                                                      //stloc				V_4
	IL_0075:            /*goto IL_0025;*/goto IL_0077;                              //br.s				IL_0025
	IL_0077:            goto IL_0099;                                               //br.s				IL_0099
	IL_0079:                                                                        //ldc.i4				0x1
	IL_007e:            V_4=1;                                                      //stloc				V_4
	IL_0082:            /*goto IL_0025;*/goto IL_0084;                              //br.s				IL_0025
	IL_0084:                                                                        //ldloc.2
	IL_0085:            Temp_3=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_008a:            if(Temp_3)goto IL_004c;                                     //brtrue.s				IL_004c
	IL_008c:                                                                        //ldc.i4				0x0
	IL_0091:            V_4=0;                                                      //stloc				V_4
	IL_0095:            /*goto IL_0025;*/goto IL_0097;                              //br.s				IL_0025
	IL_0097:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldloc.1
	IL_009b:            Temp_6=V_0->Add(safe_cast<System::Object^>(V_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00a0:                                                                        //pop
	IL_00a1:                                                                        //ldc.i4				0x3
	IL_00a6:            V_4=3;                                                      //stloc				V_4
	IL_00aa:            /*goto IL_0025;*/goto IL_00af;                              //br				IL_0025
	IL_00af:            goto IL_0079;                                               //br.s				IL_0079
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_4=4;                                                      //stloc				V_4
	IL_00ba:            /*goto IL_0025;*/goto IL_00bf;                              //br				IL_0025
	IL_00bf:            goto IL_010e;                                               //leave.s				IL_010e
	                    ;}
	                    finally{
	IL_00c1:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00c3:                                                                        //ldloc				V_5
	IL_00c7:            switch(V_5){case 0:goto IL_00f8;case 1:goto IL_010b;case 2:goto IL_00ea;};//switch				(IL_00f8,IL_010b,IL_00ea)
	IL_00d8:                                                                        //ldloc.2
	IL_00d9:                                                                        //isinst				System::IDisposable
	IL_00de:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00df:                                                                        //ldc.i4				0x2
	IL_00e4:            V_5=2;                                                      //stloc				V_5
	IL_00e8:            /*goto IL_00c3;*/goto IL_00ea;                              //br.s				IL_00c3
	IL_00ea:                                                                        //ldloc.3
	IL_00eb:            if(V_3==nullptr)goto IL_010d;                               //brfalse.s				IL_010d
	IL_00ed:                                                                        //ldc.i4				0x0
	IL_00f2:            V_5=0;                                                      //stloc				V_5
	IL_00f6:            /*goto IL_00c3;*/goto IL_00f8;                              //br.s				IL_00c3
	IL_00f8:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00fa:                                                                        //ldloc.3
	IL_00fb:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0100:                                                                        //ldc.i4				0x1
	IL_0105:            V_5=1;                                                      //stloc				V_5
	IL_0109:            /*goto IL_00c3;*/goto IL_010b;                              //br.s				IL_00c3
	IL_010b:            goto IL_010d;                                               //br.s				IL_010d
	IL_010d:                                                                        //endfinally
	                    ;}
	IL_010e:                                                                        //ldloc.0
	IL_010f:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0114:                                                                        //ldloc.0
	IL_0115:            return safe_cast<System::Collections::ICollection^>(V_0);   //ret

}
inline System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::IO::StringWriter^ Temp_13 = nullptr;
	System::NotSupportedException^ Temp_14 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IType^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_6=12;                                                     //stloc				V_6
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_5=3;                                                      //stloc				V_5
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_0047;case 1:goto IL_01f8;case 2:goto IL_0233;case 3:goto IL_0014;case 4:goto IL_0212;};//switch				(IL_0047,IL_01f8,IL_0233,IL_0014,IL_0212)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            if(A_0==nullptr)goto IL_0214;                               //brfalse				IL_0214
	IL_0039:            goto IL_003c;                                               //br.s				IL_003c
	IL_003b:                                                                        //break
	IL_003c:                                                                        //ldc.i4				0x0
	IL_0041:            V_5=0;                                                      //stloc				V_5
	IL_0045:            /*goto IL_0016;*/goto IL_0047;                              //br.s				IL_0016
	IL_0047:            goto IL_01e3;                                               //br				IL_01e3
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_2=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0052:            return Temp_2;                                              //ret
	IL_005201:          try{
	IL_0053:            goto IL_008a;                                               //br.s				IL_008a
	IL_0055:                                                                        //ldloc				V_5
	IL_0059:            switch(V_5){case 0:goto IL_00b8;case 1:goto IL_00f1;case 2:goto IL_00d0;case 3:goto IL_0116;case 4:goto IL_0102;case 5:goto IL_00e1;case 6:goto IL_0198;case 7:goto IL_0132;case 8:goto IL_0156;case 9:goto IL_00a4;case 10:goto IL_0097;};//switch				(IL_00b8,IL_00f1,IL_00d0,IL_0116,IL_0102,IL_00e1,IL_0198,IL_0132,IL_0156,IL_00a4,IL_0097)
	IL_008a:                                                                        //ldc.i4.0
	IL_008b:            V_2=0;                                                      //stloc.2
	IL_008c:                                                                        //ldc.i4				0xa
	IL_0091:            V_5=10;                                                     //stloc				V_5
	IL_0095:            /*goto IL_0055;*/goto IL_0097;                              //br.s				IL_0055
	IL_0097:            goto IL_0099;                                               //br.s				IL_0099
	IL_0099:                                                                        //ldc.i4				0x9
	IL_009e:            V_5=9;                                                      //stloc				V_5
	IL_00a2:            /*goto IL_0055;*/goto IL_00a4;                              //br.s				IL_0055
	IL_00a4:                                                                        //ldloc.2
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:            Temp_11=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00ab:            if(V_2<Temp_11)goto IL_00e3;                                //blt.s				IL_00e3
	IL_00ad:                                                                        //ldc.i4				0x0
	IL_00b2:            V_5=0;                                                      //stloc				V_5
	IL_00b6:            /*goto IL_0055;*/goto IL_00b8;                              //br.s				IL_0055
	IL_00b8:            goto IL_015b;                                               //br				IL_015b
	IL_00bd:                                                                        //ldloc.0
	IL_00be:                                                                        //ldloc.2
	IL_00bf:            Temp_8=V_0[V_2];                                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_00c4:            V_3=Temp_8;                                                 //stloc.3
	IL_00c5:                                                                        //ldc.i4				0x2
	IL_00ca:            V_5=2;                                                      //stloc				V_5
	IL_00ce:            /*goto IL_0055;*/goto IL_00d0;                              //br.s				IL_0055
	IL_00d0:                                                                        //ldloc.3
	IL_00d1:            if(V_3==nullptr)goto IL_0104;                               //brfalse.s				IL_0104
	IL_00d3:                                                                        //ldc.i4				0x5
	IL_00d8:            V_5=5;                                                      //stloc				V_5
	IL_00dc:            /*goto IL_0055;*/goto IL_00e1;                              //br				IL_0055
	IL_00e1:            goto IL_0118;                                               //br.s				IL_0118
	IL_00e3:                                                                        //ldc.i4				0x1
	IL_00e8:            V_5=1;                                                      //stloc				V_5
	IL_00ec:            /*goto IL_0055;*/goto IL_00f1;                              //br				IL_0055
	IL_00f1:                                                                        //ldloc.2
	IL_00f2:            if(V_2==0)goto IL_00bd;                                     //brfalse.s				IL_00bd
	IL_00f4:                                                                        //ldc.i4				0x4
	IL_00f9:            V_5=4;                                                      //stloc				V_5
	IL_00fd:            /*goto IL_0055;*/goto IL_0102;                              //br				IL_0055
	IL_0102:            goto IL_0134;                                               //br.s				IL_0134
	IL_0104:                                                                        //ldloc.2
	IL_0105:                                                                        //ldc.i4.1
	IL_0106:                                                                        //add
	IL_0107:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0108:                                                                        //ldc.i4				0x3
	IL_010d:            V_5=3;                                                      //stloc				V_5
	IL_0111:            /*goto IL_0055;*/goto IL_0116;                              //br				IL_0055
	IL_0116:            goto IL_0099;                                               //br.s				IL_0099
	IL_0118:                                                                        //ldloc.1
	IL_0119:                                                                        //ldloc.3
	IL_011a:            Temp_10=V_3->ToString();                                    //callvirt				System::String^ System::Object::ToString()
	IL_011f:            V_1->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0124:                                                                        //ldc.i4				0x7
	IL_0129:            V_5=7;                                                      //stloc				V_5
	IL_012d:            /*goto IL_0055;*/goto IL_0132;                              //br				IL_0055
	IL_0132:            goto IL_0104;                                               //br.s				IL_0104
	IL_0134:                                                                        //ldloc.1
	IL_0135:                                                                        //ldstr				L"\x0629"
	IL_013a:                                                                        //ldloc				V_6
	IL_013e:            Temp_9=a(L"\x0629",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0143:            V_1->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0148:                                                                        //ldc.i4				0x8
	IL_014d:            V_5=8;                                                      //stloc				V_5
	IL_0151:            /*goto IL_0055;*/goto IL_0156;                              //br				IL_0055
	IL_0156:            goto IL_00bd;                                               //br				IL_00bd
	IL_015b:                                                                        //ldarg.0
	IL_015c:            Temp_3=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0161:                                                                        //ldstr				L"\x1629"
	IL_0166:                                                                        //ldloc				V_6
	IL_016a:            Temp_4=a(L"\x1629",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016f:                                                                        //ldloc.1
	IL_0170:            Temp_5=V_1->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0175:                                                                        //ldstr				L"\x1429"
	IL_017a:                                                                        //ldloc				V_6
	IL_017e:            Temp_6=a(L"\x1429",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0183:            Temp_7=System::String::Concat(Temp_3,Temp_4,Temp_5,Temp_6); //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_0188:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_018a:                                                                        //ldc.i4				0x6
	IL_018f:            V_5=6;                                                      //stloc				V_5
	IL_0193:            /*goto IL_0055;*/goto IL_0198;                              //br				IL_0055
	IL_0198:            goto IL_0238;                                               //leave				IL_0238
	                    ;}
	                    finally{
	IL_019d:                                                                        //ldc.i4				0x0
	IL_01a2:            V_5=0;                                                      //stloc				V_5
	IL_01a6:            /*goto IL_01aa;*/goto IL_01a8;                              //br.s				IL_01aa
	IL_01a8:            goto IL_01bf;                                               //br.s				IL_01bf
	IL_01aa:                                                                        //ldloc				V_5
	IL_01ae:            switch(V_5){case 0:goto IL_01a8;case 1:goto IL_01e0;case 2:goto IL_01cd;};//switch				(IL_01a8,IL_01e0,IL_01cd)
	IL_01bf:                                                                        //ldloc.1
	IL_01c0:            if(V_1==nullptr)goto IL_01e2;                               //brfalse.s				IL_01e2
	IL_01c2:                                                                        //ldc.i4				0x2
	IL_01c7:            V_5=2;                                                      //stloc				V_5
	IL_01cb:            /*goto IL_01aa;*/goto IL_01cd;                              //br.s				IL_01aa
	IL_01cd:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01cf:                                                                        //ldloc.1
	IL_01d0:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01d5:                                                                        //ldc.i4				0x1
	IL_01da:            V_5=1;                                                      //stloc				V_5
	IL_01de:            /*goto IL_01aa;*/goto IL_01e0;                              //br.s				IL_01aa
	IL_01e0:            goto IL_01e2;                                               //br.s				IL_01e2
	IL_01e2:                                                                        //endfinally
	                    ;}
	IL_01e3:                                                                        //ldarg.0
	IL_01e4:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_01e9:            V_0=Temp_0;                                                 //stloc.0
	IL_01ea:                                                                        //ldc.i4				0x1
	IL_01ef:            V_5=1;                                                      //stloc				V_5
	IL_01f3:            /*goto IL_0016;*/goto IL_01f8;                              //br				IL_0016
	IL_01f8:                                                                        //ldloc.0
	IL_01f9:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_01fe:                                                                        //ldc.i4.0
	IL_01ff:            if(Temp_1<=0)goto IL_004c;                                  //ble				IL_004c
	IL_0204:                                                                        //ldc.i4				0x4
	IL_0209:            V_5=4;                                                      //stloc				V_5
	IL_020d:            /*goto IL_0016;*/goto IL_0212;                              //br				IL_0016
	IL_0212:            goto IL_021a;                                               //br.s				IL_021a
	IL_0214:            Temp_14=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_0219:            throw Temp_14;                                              //throw
	IL_021a:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_021f:            Temp_13=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_12));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0224:            V_1=Temp_13;                                                //stloc.1
	IL_0225:                                                                        //ldc.i4				0x2
	IL_022a:            V_5=2;                                                      //stloc				V_5
	IL_022e:            /*goto IL_0016;*/goto IL_0233;                              //br				IL_0016
	IL_0233:            /*goto IL_0053;*/goto IL_005201;                            //br				IL_0053
	IL_0238:                                                                        //ldloc.s				V_4
	IL_023a:            return V_4;                                                 //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x115::M_x8(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IEventDeclaration^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventReference::Resolve()
	IL_0011:            V_0=Temp_0;                                                 //stloc.0
	IL_0012:                                                                        //ldloc.0
	IL_0013:            Temp_1=V_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_0018:            if(Temp_1==nullptr)goto IL_0028;                            //brfalse.s				IL_0028
	IL_001a:            goto IL_001c;                                               //br.s				IL_001c
	IL_001c:                                                                        //ldloc.0
	IL_001d:            Temp_2=V_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_0022:            Temp_3=Temp_2->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0027:            return Temp_3;                                              //ret
	IL_0028:                                                                        //ldnull
	IL_0029:            return nullptr;                                             //ret

}
inline System::Collections::ICollection^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	array<Reflector::CodeModel::IFieldDeclaration^>^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldDeclarationCollection^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0040;case 1:goto IL_0029;case 2:goto IL_0183;};//switch				(IL_0040,IL_0029,IL_0183)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=A_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_001d:            V_0=Temp_0;                                                 //stloc.0
	IL_001e:                                                                        //ldc.i4				0x1
	IL_0023:            V_5=1;                                                      //stloc				V_5
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:                                                                        //ldloc.0
	IL_002a:            Temp_3=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_002f:                                                                        //ldc.i4.0
	IL_0030:            if(Temp_3<=0)goto IL_0193;                                  //ble				IL_0193
	IL_0035:                                                                        //ldc.i4				0x0
	IL_003a:            V_5=0;                                                      //stloc				V_5
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0167;                                               //br				IL_0167
	IL_004001:          try{
	IL_0045:                                                                        //ldc.i4				0x0
	IL_004a:            V_5=0;                                                      //stloc				V_5
	IL_004e:            /*goto IL_0052;*/goto IL_0050;                              //br.s				IL_0052
	IL_0050:            goto IL_007f;                                               //br.s				IL_007f
	IL_0052:                                                                        //ldloc				V_5
	IL_0056:            switch(V_5){case 0:goto IL_0050;case 1:goto IL_00ee;case 2:goto IL_00de;case 3:goto IL_0115;case 4:goto IL_00c6;case 5:goto IL_0105;case 6:goto IL_00b3;case 7:goto IL_0098;case 8:goto IL_00a6;};//switch				(IL_0050,IL_00ee,IL_00de,IL_0115,IL_00c6,IL_0105,IL_00b3,IL_0098,IL_00a6)
	IL_007f:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_0081:                                                                        //ldloc.3
	IL_0082:            Temp_8=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0087:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_008c:            V_2=safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_8);//stloc.2
	IL_008d:                                                                        //ldc.i4				0x7
	IL_0092:            V_5=7;                                                      //stloc				V_5
	IL_0096:            /*goto IL_0052;*/goto IL_0098;                              //br.s				IL_0052
	IL_0098:                                                                        //ldarg.1
	IL_0099:            if(A_1==nullptr)goto IL_00c8;                               //brfalse.s				IL_00c8
	IL_009b:                                                                        //ldc.i4				0x8
	IL_00a0:            V_5=8;                                                      //stloc				V_5
	IL_00a4:            /*goto IL_0052;*/goto IL_00a6;                              //br.s				IL_0052
	IL_00a6:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_00a8:                                                                        //ldc.i4				0x6
	IL_00ad:            V_5=6;                                                      //stloc				V_5
	IL_00b1:            /*goto IL_0052;*/goto IL_00b3;                              //br.s				IL_0052
	IL_00b3:                                                                        //ldloc.3
	IL_00b4:            Temp_7=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00b9:            if(Temp_7)goto IL_0081;                                     //brtrue.s				IL_0081
	IL_00bb:                                                                        //ldc.i4				0x4
	IL_00c0:            V_5=4;                                                      //stloc				V_5
	IL_00c4:            /*goto IL_0052;*/goto IL_00c6;                              //br.s				IL_0052
	IL_00c6:            goto IL_0107;                                               //br.s				IL_0107
	IL_00c8:                                                                        //ldloc.1
	IL_00c9:                                                                        //ldloc.2
	IL_00ca:            Temp_6=V_1->Add(safe_cast<System::Object^>(V_2));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00cf:                                                                        //pop
	IL_00d0:                                                                        //ldc.i4				0x2
	IL_00d5:            V_5=2;                                                      //stloc				V_5
	IL_00d9:            /*goto IL_0052;*/goto IL_00de;                              //br				IL_0052
	IL_00de:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_00e0:                                                                        //ldc.i4				0x1
	IL_00e5:            V_5=1;                                                      //stloc				V_5
	IL_00e9:            /*goto IL_0052;*/goto IL_00ee;                              //br				IL_0052
	IL_00ee:                                                                        //ldloc.2
	IL_00ef:                                                                        //ldarg.1
	IL_00f0:            Temp_5=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(V_2),A_1);//call				System::Boolean Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_00f5:            if(!Temp_5)goto IL_00a8;                                    //brfalse.s				IL_00a8
	IL_00f7:                                                                        //ldc.i4				0x5
	IL_00fc:            V_5=5;                                                      //stloc				V_5
	IL_0100:            /*goto IL_0052;*/goto IL_0105;                              //br				IL_0052
	IL_0105:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_0107:                                                                        //ldc.i4				0x3
	IL_010c:            V_5=3;                                                      //stloc				V_5
	IL_0110:            /*goto IL_0052;*/goto IL_0115;                              //br				IL_0052
	IL_0115:            goto IL_0188;                                               //leave.s				IL_0188
	                    ;}
	                    finally{
	IL_0117:            goto IL_012e;                                               //br.s				IL_012e
	IL_0119:                                                                        //ldloc				V_5
	IL_011d:            switch(V_5){case 0:goto IL_0150;case 1:goto IL_0141;case 2:goto IL_0164;};//switch				(IL_0150,IL_0141,IL_0164)
	IL_012e:                                                                        //ldloc.3
	IL_012f:                                                                        //isinst				System::IDisposable
	IL_0134:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0136:                                                                        //ldc.i4				0x1
	IL_013b:            V_5=1;                                                      //stloc				V_5
	IL_013f:            /*goto IL_0119;*/goto IL_0141;                              //br.s				IL_0119
	IL_0141:                                                                        //ldloc.s				V_4
	IL_0143:            if(V_4==nullptr)goto IL_0166;                               //brfalse.s				IL_0166
	IL_0145:                                                                        //ldc.i4				0x0
	IL_014a:            V_5=0;                                                      //stloc				V_5
	IL_014e:            /*goto IL_0119;*/goto IL_0150;                              //br.s				IL_0119
	IL_0150:            goto IL_0152;                                               //br.s				IL_0152
	IL_0152:                                                                        //ldloc.s				V_4
	IL_0154:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0159:                                                                        //ldc.i4				0x2
	IL_015e:            V_5=2;                                                      //stloc				V_5
	IL_0162:            /*goto IL_0119;*/goto IL_0164;                              //br.s				IL_0119
	IL_0164:            goto IL_0166;                                               //br.s				IL_0166
	IL_0166:                                                                        //endfinally
	                    ;}
	IL_0167:                                                                        //ldc.i4.0
	IL_0168:            Temp_1=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_016d:            V_1=Temp_1;                                                 //stloc.1
	IL_016e:                                                                        //ldloc.0
	IL_016f:            Temp_2=safe_cast<System::Collections::IEnumerable^>(V_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0174:            V_3=Temp_2;                                                 //stloc.3
	IL_0175:                                                                        //ldc.i4				0x2
	IL_017a:            V_5=2;                                                      //stloc				V_5
	IL_017e:            /*goto IL_0002;*/goto IL_0183;                              //br				IL_0002
	IL_0183:            /*goto IL_0045;*/goto IL_004001;                            //br				IL_0045
	IL_0188:            goto IL_018b;                                               //br.s				IL_018b
	IL_018a:                                                                        //break
	IL_018b:                                                                        //ldloc.1
	IL_018c:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0191:                                                                        //ldloc.1
	IL_0192:            return safe_cast<System::Collections::ICollection^>(V_1);   //ret
	IL_0193:                                                                        //ldc.i4.0
	IL_0194:            Temp_4=gcnew array<Reflector::CodeModel::IFieldDeclaration^>(0);//newarr				Reflector::CodeModel::IFieldDeclaration
	IL_0199:            return safe_cast<System::Collections::ICollection^>(Temp_4);//ret

}
inline System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::NotSupportedException^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_3=19;                                                     //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_2=0;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0037;                                               //br.s				IL_0037
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0014;case 1:goto IL_008f;case 2:goto IL_0063;case 3:goto IL_0048;case 4:goto IL_0076;case 5:goto IL_00a0;};//switch				(IL_0014,IL_008f,IL_0063,IL_0048,IL_0076,IL_00a0)
	IL_0037:                                                                        //ldarg.0
	IL_0038:            if(A_0==nullptr)goto IL_00e8;                               //brfalse				IL_00e8
	IL_003d:                                                                        //ldc.i4				0x3
	IL_0042:            V_2=3;                                                      //stloc				V_2
	IL_0046:            /*goto IL_0016;*/goto IL_0048;                              //br.s				IL_0016
	IL_0048:            goto IL_0078;                                               //br.s				IL_0078
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_6=Root::T_x115::M_x5(A_0);                             //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_0050:            return Temp_6;                                              //ret
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_0=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0057:            V_1=Temp_0;                                                 //stloc.1
	IL_0058:                                                                        //ldc.i4				0x2
	IL_005d:            V_2=2;                                                      //stloc				V_2
	IL_0061:            /*goto IL_0016;*/goto IL_0063;                              //br.s				IL_0016
	IL_0063:                                                                        //ldloc.1
	IL_0064:            Temp_1=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0069:            if(Temp_1!=0)goto IL_00ad;                                  //brtrue.s				IL_00ad
	IL_006b:                                                                        //ldc.i4				0x4
	IL_0070:            V_2=4;                                                      //stloc				V_2
	IL_0074:            /*goto IL_0016;*/goto IL_0076;                              //br.s				IL_0016
	IL_0076:            goto IL_004a;                                               //br.s				IL_004a
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_5=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_007e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0083:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_5);//stloc.0
	IL_0084:                                                                        //ldc.i4				0x1
	IL_0089:            V_2=1;                                                      //stloc				V_2
	IL_008d:            /*goto IL_0016;*/goto IL_008f;                              //br.s				IL_0016
	IL_008f:                                                                        //ldloc.0
	IL_0090:            if(V_0==nullptr)goto IL_0051;                               //brfalse.s				IL_0051
	IL_0092:                                                                        //ldc.i4				0x5
	IL_0097:            V_2=5;                                                      //stloc				V_2
	IL_009b:            /*goto IL_0016;*/goto IL_00a0;                              //br				IL_0016
	IL_00a0:                                                                        //ldc.i4.4
	IL_00a1:                                                                        //dup
	IL_00a2:                                                                        //dup
	IL_00a3:                                                                        //ldc.i4.2
	IL_00a4:                                                                        //sub
	IL_00a5:                                                                        //blt				IL_00a1
	IL_00aa:                                                                        //pop
	IL_00ab:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:                                                                        //ldstr				L"\x1F30"
	IL_00b3:                                                                        //ldloc				V_3
	IL_00b7:            Temp_2=a(L"\x1F30",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_3=Root::T_x115::M_x5(A_0);                             //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_00c2:            Temp_4=System::String::Concat(V_1,Temp_2,Temp_3);           //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00c7:            return Temp_4;                                              //ret
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:            Temp_7=Root::T_x115::M_x8(V_0);                             //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_00ce:                                                                        //ldstr				L"\x1A30"
	IL_00d3:                                                                        //ldloc				V_3
	IL_00d7:            Temp_8=a(L"\x1A30",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_9=Root::T_x115::M_x5(A_0);                             //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::ITypeReference^)
	IL_00e2:            Temp_10=System::String::Concat(Temp_7,Temp_8,Temp_9);       //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00e7:            return Temp_10;                                             //ret
	IL_00e8:            Temp_11=gcnew System::NotSupportedException();              //newobj				void System::NotSupportedException::.ctor()
	IL_00ed:            throw Temp_11;                                              //throw

}
inline System::String^ Root::T_x115::M_x9(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_0006:            return Temp_0;                                              //ret

}
