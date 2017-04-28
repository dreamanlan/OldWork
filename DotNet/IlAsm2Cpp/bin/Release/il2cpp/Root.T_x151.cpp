#include "global_xref.h"

inline Root::T_x151::T_x151(Root::T_x2^ A_0,System::Int32 A_1,System::String^ A_2,System::Int32 A_3,Reflector::CodeModel::IGenericArgumentProvider^ A_4,Reflector::CodeModel::IGenericArgumentProvider^ A_5)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldnull
	IL_0008:            this->F_x1=safe_cast<System::WeakReference^>(nullptr);      //stfld				System::WeakReference^ Root::T_x151 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=A_0;                                             //stfld				Root::T_x2^ Root::T_x151 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.2
	IL_0016:            this->F_x8=A_1;                                             //stfld				System::Int32 Root::T_x151 F_x8
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.3
	IL_001d:            this->F_x5=A_2;                                             //stfld				System::String^ Root::T_x151 F_x5
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.s				A_3
	IL_0025:            this->F_x9=A_3;                                             //stfld				System::Int32 Root::T_x151 F_x9
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.s				A_4
	IL_002d:            this->F_x12=A_4;                                            //stfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x151 F_x12
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldarg.s				A_5
	IL_0035:            this->F_x13=A_5;                                            //stfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x151 F_x13
	IL_003a:            return;                                                     //ret

}
inline System::Int32 Root::T_x151::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_0038;case 2:goto IL_0054;case 3:goto IL_0062;};//switch				(IL_000b,IL_0038,IL_0054,IL_0062)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:                                                                        //ldarg.0
	IL_002a:                                                                        //ldarg.1
	IL_002b:            if(this!=safe_cast<Root::T_x151^>(obj))goto IL_0042;        //bne.un.s				IL_0042
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_1=1;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_1=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IFieldReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IFieldReference^)
	IL_0041:            return Temp_1;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(obj);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_1=2;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x3
	IL_005c:            V_1=3;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:            return 0;                                                   //ret
	IL_0066:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_006b:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x151::M_x1()
//Reflector::CodeModel::IFieldReference^::Resolve by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_10 = nullptr;
	System::WeakReference^ Temp_11 = nullptr;
	System::WeakReference^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	System::WeakReference^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	Reflector::CodeModel::IType^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_17 = nullptr;
	System::WeakReference^ Temp_18 = nullptr;
	System::Object^ Temp_19 = nullptr;
	System::WeakReference^ Temp_20 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::IFieldDeclarationCollection^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_4=10;                                                     //stloc				V_4
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_004e;                                               //br.s				IL_004e
	IL_000d:                                                                        //ldloc				V_4
	IL_0011:            switch(V_4){case 0:goto IL_01bc;case 1:goto IL_011c;case 2:goto IL_0156;case 3:goto IL_0170;case 4:goto IL_00b9;case 5:goto IL_0097;case 6:goto IL_01cd;case 7:goto IL_0143;case 8:goto IL_00ee;case 9:goto IL_0190;case 10:goto IL_000b;case 11:goto IL_010c;case 12:goto IL_00de;case 13:goto IL_0064;};//switch				(IL_01bc,IL_011c,IL_0156,IL_0170,IL_00b9,IL_0097,IL_01cd,IL_0143,IL_00ee,IL_0190,IL_000b,IL_010c,IL_00de,IL_0064)
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_20=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x151 F_x1
	IL_0054:            if(Temp_20==nullptr)goto IL_019d;                           //brfalse				IL_019d
	IL_0059:                                                                        //ldc.i4				0xd
	IL_005e:            V_4=13;                                                     //stloc				V_4
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_0066:                                                                        //ldarg.0
	IL_0067:                                                                        //ldloc.1
	IL_0068:                                                                        //ldloc.3
	IL_0069:            Temp_10=V_1[V_3];                                           //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_006e:            Temp_11=gcnew System::WeakReference(safe_cast<System::Object^>(Temp_10));//newobj				void System::WeakReference::.ctor(System::Object^)
	IL_0073:            this->F_x1=Temp_11;                                         //stfld				System::WeakReference^ Root::T_x151 F_x1
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_12=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x151 F_x1
	IL_007e:            Temp_13=Temp_12->Target;                                    //callvirt				System::Object^ System::WeakReference::get_Target()
	IL_0083:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_0088:            return safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_13);//ret
	IL_0089:                                                                        //ldc.i4				0x5
	IL_008e:            V_4=5;                                                      //stloc				V_4
	IL_0092:            /*goto IL_000d;*/goto IL_0097;                              //br				IL_000d
	IL_0097:                                                                        //ldloc.2
	IL_0098:                                                                        //ldloc.1
	IL_0099:                                                                        //ldloc.3
	IL_009a:            Temp_5=V_1[V_3];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_009f:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_5)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_00a4:            Temp_7=(V_2 == Temp_6);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00a9:            if(!Temp_7)goto IL_00cc;                                    //brfalse.s				IL_00cc
	IL_00ab:                                                                        //ldc.i4				0x4
	IL_00b0:            V_4=4;                                                      //stloc				V_4
	IL_00b4:            /*goto IL_000d;*/goto IL_00b9;                              //br				IL_000d
	IL_00b9:            goto IL_010e;                                               //br.s				IL_010e
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:            Temp_18=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x151 F_x1
	IL_00c1:            Temp_19=Temp_18->Target;                                    //callvirt				System::Object^ System::WeakReference::get_Target()
	IL_00c6:                                                                        //castclass				Reflector::CodeModel::IFieldDeclaration
	IL_00cb:            return safe_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_19);//ret
	IL_00cc:                                                                        //ldloc.3
	IL_00cd:                                                                        //ldc.i4.1
	IL_00ce:                                                                        //add
	IL_00cf:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00d0:                                                                        //ldc.i4				0xc
	IL_00d5:            V_4=12;                                                     //stloc				V_4
	IL_00d9:            /*goto IL_000d;*/goto IL_00de;                              //br				IL_000d
	IL_00de:            goto IL_0148;                                               //br.s				IL_0148
	IL_00e0:                                                                        //ldc.i4				0x8
	IL_00e5:            V_4=8;                                                      //stloc				V_4
	IL_00e9:            /*goto IL_000d;*/goto IL_00ee;                              //br				IL_000d
	IL_00ee:                                                                        //ldarg.0
	IL_00ef:            Temp_14=this->F_x1;                                         //ldfld				System::WeakReference^ Root::T_x151 F_x1
	IL_00f4:            Temp_15=Temp_14->IsAlive;                                   //callvirt				System::Boolean System::WeakReference::get_IsAlive()
	IL_00f9:            if(!Temp_15)goto IL_019d;                                   //brfalse				IL_019d
	IL_00fe:                                                                        //ldc.i4				0xb
	IL_0103:            V_4=11;                                                     //stloc				V_4
	IL_0107:            /*goto IL_000d;*/goto IL_010c;                              //br				IL_000d
	IL_010c:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_010e:                                                                        //ldc.i4				0x1
	IL_0113:            V_4=1;                                                      //stloc				V_4
	IL_0117:            /*goto IL_000d;*/goto IL_011c;                              //br				IL_000d
	IL_011c:                                                                        //ldarg.0
	IL_011d:            Temp_0=this->M_x12();                                       //call				Reflector::CodeModel::IType^ Root::T_x151::M_x12()
	IL_0122:                                                                        //ldloc.1
	IL_0123:                                                                        //ldloc.3
	IL_0124:            Temp_1=V_1[V_3];                                            //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldDeclarationCollection::get_Item(System::Int32)
	IL_0129:            Temp_2=safe_cast<Reflector::CodeModel::IFieldReference^>(Temp_1)->FieldType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_012e:            Temp_3=Temp_0->Equals(safe_cast<System::Object^>(Temp_2));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0133:            if(!Temp_3)goto IL_00cc;                                    //brfalse.s				IL_00cc
	IL_0135:                                                                        //ldc.i4				0x7
	IL_013a:            V_4=7;                                                      //stloc				V_4
	IL_013e:            /*goto IL_000d;*/goto IL_0143;                              //br				IL_000d
	IL_0143:            goto IL_0066;                                               //br				IL_0066
	IL_0148:                                                                        //ldc.i4				0x2
	IL_014d:            V_4=2;                                                      //stloc				V_4
	IL_0151:            /*goto IL_000d;*/goto IL_0156;                              //br				IL_000d
	IL_0156:                                                                        //ldloc.3
	IL_0157:                                                                        //ldloc.1
	IL_0158:            Temp_4=safe_cast<System::Collections::ICollection^>(V_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_015d:            if(V_3<Temp_4)goto IL_0089;                                 //blt				IL_0089
	IL_0162:                                                                        //ldc.i4				0x3
	IL_0167:            V_4=3;                                                      //stloc				V_4
	IL_016b:            /*goto IL_000d;*/goto IL_0170;                              //br				IL_000d
	IL_0170:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_0172:                                                                        //ldloc.0
	IL_0173:            Temp_8=V_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_0178:            V_1=Temp_8;                                                 //stloc.1
	IL_0179:                                                                        //ldarg.0
	IL_017a:            Temp_9=this->Name;                                          //call				System::String^ Root::T_x151::get_Name()
	IL_017f:            V_2=Temp_9;                                                 //stloc.2
	IL_0180:                                                                        //ldc.i4.0
	IL_0181:            V_3=0;                                                      //stloc.3
	IL_0182:                                                                        //ldc.i4				0x9
	IL_0187:            V_4=9;                                                      //stloc				V_4
	IL_018b:            /*goto IL_000d;*/goto IL_0190;                              //br				IL_000d
	IL_0190:                                                                        //ldc.i4.4
	IL_0191:                                                                        //dup
	IL_0192:                                                                        //dup
	IL_0193:                                                                        //ldc.i4.2
	IL_0194:                                                                        //sub
	IL_0195:                                                                        //blt				IL_0191
	IL_019a:                                                                        //pop
	IL_019b:            goto IL_0148;                                               //br.s				IL_0148
	IL_019d:                                                                        //ldarg.0
	IL_019e:            Temp_16=this->DeclaringType;                                //call				Reflector::CodeModel::IType^ Root::T_x151::get_DeclaringType()
	IL_01a3:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_01a8:            Temp_17=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_16)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_01ad:            V_0=Temp_17;                                                //stloc.0
	IL_01ae:                                                                        //ldc.i4				0x0
	IL_01b3:            V_4=0;                                                      //stloc				V_4
	IL_01b7:            /*goto IL_000d;*/goto IL_01bc;                              //br				IL_000d
	IL_01bc:                                                                        //ldloc.0
	IL_01bd:            if(V_0==nullptr)goto IL_01cf;                               //brfalse.s				IL_01cf
	IL_01bf:                                                                        //ldc.i4				0x6
	IL_01c4:            V_4=6;                                                      //stloc				V_4
	IL_01c8:            /*goto IL_000d;*/goto IL_01cd;                              //br				IL_000d
	IL_01cd:            goto IL_0172;                                               //br.s				IL_0172
	IL_01cf:                                                                        //ldnull
	IL_01d0:            return nullptr;                                             //ret

}
inline void Root::T_x151::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::IFieldReference^::set_FieldType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x151::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_005f;case 1:goto IL_000b;case 2:goto IL_0051;case 3:goto IL_0035;};//switch				(IL_005f,IL_000b,IL_0051,IL_0035)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x151^>(A_0))goto IL_003f;        //bne.un.s				IL_003f
	IL_002a:                                                                        //ldc.i4				0x3
	IL_002f:            V_1=3;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0064;                                               //br.s				IL_0064
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldloc.0
	IL_0039:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IFieldReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IFieldReference^,Reflector::CodeModel::IFieldReference^)
	IL_003e:            return Temp_0;                                              //ret
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0045:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.0
	IL_0046:                                                                        //ldc.i4				0x2
	IL_004b:            V_1=2;                                                      //stloc				V_1
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:                                                                        //ldloc.0
	IL_0052:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0054:                                                                        //ldc.i4				0x0
	IL_0059:            V_1=0;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:            goto IL_0062;                                               //br.s				IL_0062
	IL_0061:                                                                        //break
	IL_0062:            goto IL_0037;                                               //br.s				IL_0037
	IL_0064:                                                                        //ldc.i4.1
	IL_0065:            return true;                                                //ret
	IL_0066:                                                                        //ldc.i4.0
	IL_0067:            return false;                                               //ret

}
inline Reflector::CodeModel::IType^ Root::T_x151::M_x12()
//Reflector::CodeModel::IFieldReference^::get_FieldType by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	Root::T_x2^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x139^ Temp_3 = nullptr;
	System::Byte Temp_4 = 0;
	Root::T_x2^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Root::T_x2^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Root::T_x139^ V_1 = nullptr;
	Reflector::CodeModel::IType^ V_2 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x151::get_DeclaringType()
	IL_0009:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_000e:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x151 F_x2
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_2=this->F_x9;                                          //ldfld				System::Int32 Root::T_x151 F_x9
	IL_001b:            Temp_3=Temp_1->M_x14(Temp_2);                               //callvirt				Root::T_x139^ Root::T_x2::M_x14(System::Int32)
	IL_0020:            V_1=Temp_3;                                                 //stloc.1
	IL_0021:                                                                        //ldloc.1
	IL_0022:            Temp_4=V_1->M_x15();                                        //callvirt				System::Byte Root::T_x139::M_x15()
	IL_0027:                                                                        //pop
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_5=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x151 F_x2
	IL_002e:                                                                        //ldloc.1
	IL_002f:                                                                        //ldloc.0
	IL_0030:                                                                        //ldnull
	IL_0031:            Temp_6=Temp_5->M_x5(V_1,safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0),safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(nullptr));//callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(Root::T_x139^,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_0036:            V_2=Temp_6;                                                 //stloc.2
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_7=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x151 F_x2
	IL_003d:                                                                        //ldloc.1
	IL_003e:            Temp_7->M_x12(V_1);                                         //callvirt				void Root::T_x2::M_x12(Root::T_x139^)
	IL_0043:                                                                        //ldloc.2
	IL_0044:            return V_2;                                                 //ret

}
inline System::String^ Root::T_x151::M_x13()
//System::Object^::ToString by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	Reflector::CodeModel::IType^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_1=12;                                                     //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldc.i4.5
	IL_000d:            Temp_0=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldloc.0
	IL_0014:                                                                        //ldc.i4.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->DeclaringType;                                 //call				Reflector::CodeModel::IType^ Root::T_x151::get_DeclaringType()
	IL_001b:            Temp_2=Temp_1->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0020:            V_0[0]=Temp_2;                                              //stelem.ref
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldc.i4.1
	IL_0023:                                                                        //ldstr				L"\x0429"
	IL_0028:                                                                        //ldloc				V_1
	IL_002c:            Temp_3=a(L"\x0429",V_1);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0031:            V_0[1]=Temp_3;                                              //stelem.ref
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldc.i4.2
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_4=this->Name;                                          //call				System::String^ Root::T_x151::get_Name()
	IL_003a:            V_0[2]=Temp_4;                                              //stelem.ref
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldc.i4.3
	IL_003d:                                                                        //ldstr				L"\x0A29\x162B\x0E2D"
	IL_0042:                                                                        //ldloc				V_1
	IL_0046:            Temp_5=a(L"\x0A29\x162B\x0E2D",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004b:            V_0[3]=Temp_5;                                              //stelem.ref
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldc.i4.4
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_6=this->M_x12();                                       //call				Reflector::CodeModel::IType^ Root::T_x151::M_x12()
	IL_0054:            Temp_7=Temp_6->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0059:            V_0[4]=Temp_7;                                              //stelem.ref
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_8=System::String::Concat(V_0);                         //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0060:            return Temp_8;                                              //ret

}
inline System::Int32 Root::T_x151::M_x2()
//System::Object^::GetHashCode by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x151::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IType^ Root::T_x151::DeclaringType::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x2^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_2 = nullptr;
	Reflector::CodeModel::IGenericArgumentProvider^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x2^ Root::T_x151 F_x2
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=this->F_x8;                                          //ldfld				System::Int32 Root::T_x151 F_x8
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_2=this->F_x12;                                         //ldfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x151 F_x12
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_3=this->F_x13;                                         //ldfld				Reflector::CodeModel::IGenericArgumentProvider^ Root::T_x151 F_x13
	IL_0018:            Temp_4=Temp_0->M_x5(Temp_1,Temp_2,Temp_3);                  //callvirt				Reflector::CodeModel::IType^ Root::T_x2::M_x5(System::Int32,Reflector::CodeModel::IGenericArgumentProvider^,Reflector::CodeModel::IGenericArgumentProvider^)
	IL_001d:            return Temp_4;                                              //ret

}
inline void Root::T_x151::DeclaringType::set(Reflector::CodeModel::IType^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x151::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::String^ Root::T_x151 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x151::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
