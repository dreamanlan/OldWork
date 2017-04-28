#include "global_xref.h"

inline Root::T_x175::T_x175()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x175::T_x175(System::Object^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:                                                                        //ldarg.2
	IL_0009:                                                                        //ldarg.3
	IL_000a:            this->M_x1(A_0,A_1,A_2);                                    //call				void Root::T_x175::M_x1(System::Object^,System::String^,System::String^)
	IL_000f:            return;                                                     //ret

}
inline System::Int32 Root::T_x175::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_0054;case 2:goto IL_0038;case 3:goto IL_0062;};//switch				(IL_000b,IL_0054,IL_0038,IL_0062)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x175^>(obj))goto IL_0042;        //bne.un.s				IL_0042
	IL_002a:            goto IL_002d;                                               //br.s				IL_002d
	IL_002c:                                                                        //break
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_1=2;                                                      //stloc				V_1
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_0064;                                               //br.s				IL_0064
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(this),V_0);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::ITypeReference^,Reflector::CodeModel::ITypeReference^)
	IL_0041:            return Temp_0;                                              //ret
	IL_0042:                                                                        //ldarg.1
	IL_0043:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0048:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(obj);//stloc.0
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_1=1;                                                      //stloc				V_1
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldloc.0
	IL_0055:            if(V_0==nullptr)goto IL_0066;                               //brfalse.s				IL_0066
	IL_0057:                                                                        //ldc.i4				0x3
	IL_005c:            V_1=3;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000d;*/goto IL_0062;                              //br.s				IL_000d
	IL_0062:            goto IL_003a;                                               //br.s				IL_003a
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:            return 0;                                                   //ret
	IL_0066:                                                                        //ldc.i4.m1
	IL_0067:            return -1;                                                  //ret

}
inline System::String^ Root::T_x175::M_x1()
//Reflector::CodeModel::ITypeReference^::get_Namespace by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::String^ Root::T_x175 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x175::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x175::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
//Reflector::CodeModel::ITypeReference^::set_GenericType by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x175::M_x1(System::Object^ A_0)
//Reflector::CodeModel::ITypeReference^::set_Owner by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x175::M_x1(System::Object^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0054;case 1:goto IL_0066;case 2:goto IL_00a2;case 3:goto IL_00b4;case 4:goto IL_00d2;};//switch				(IL_0054,IL_0066,IL_00a2,IL_00b4,IL_00d2)
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            this->F_x2=A_0;                                             //stfld				System::Object^ Root::T_x175 F_x2
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            this->F_x8=0;                                               //stfld				System::Int32 Root::T_x175 F_x8
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldarg.3
	IL_002f:            this->F_x12=A_2;                                            //stfld				System::String^ Root::T_x175 F_x12
	IL_0034:                                                                        //ldarg.0
	IL_0035:                                                                        //ldarg.2
	IL_0036:            this->F_x13=A_1;                                            //stfld				System::String^ Root::T_x175 F_x13
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x175 F_x12
	IL_0041:                                                                        //ldc.i4.s				96
	IL_0043:            Temp_1=Temp_0->LastIndexOf(safe_cast<System::Char>((System::Char)96));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_0048:            V_0=Temp_1;                                                 //stloc.0
	IL_0049:                                                                        //ldc.i4				0x0
	IL_004e:            V_1=0;                                                      //stloc				V_1
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0057;                                               //br.s				IL_0057
	IL_0056:                                                                        //break
	IL_0057:                                                                        //ldloc.0
	IL_0058:                                                                        //ldc.i4.m1
	IL_0059:            if(V_0!=-1)goto IL_0094;                                    //bne.un.s				IL_0094
	IL_005b:                                                                        //ldc.i4				0x1
	IL_0060:            V_1=1;                                                      //stloc				V_1
	IL_0064:            /*goto IL_0002;*/goto IL_0066;                              //br.s				IL_0002
	IL_0066:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_006601:          try{
	IL_0068:                                                                        //ldarg.0
	IL_0069:                                                                        //ldarg.3
	IL_006a:                                                                        //ldloc.0
	IL_006b:                                                                        //ldc.i4.1
	IL_006c:                                                                        //add
	IL_006d:            Temp_4=A_2->Substring((V_0 + 1));                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0072:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0077:            Temp_6=System::Int32::Parse(Temp_4,safe_cast<System::IFormatProvider^>(Temp_5));//call				System::Int32 System::Int32::Parse(System::String^,System::IFormatProvider^)
	IL_007c:            this->F_x8=Temp_6;                                          //stfld				System::Int32 Root::T_x175 F_x8
	IL_0081:                                                                        //ldarg.0
	IL_0082:                                                                        //ldarg.3
	IL_0083:                                                                        //ldc.i4.0
	IL_0084:                                                                        //ldloc.0
	IL_0085:            Temp_7=A_2->Substring(safe_cast<System::Int32>(0),V_0);     //callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_008a:            this->F_x12=Temp_7;                                         //stfld				System::String^ Root::T_x175 F_x12
	IL_008f:            goto IL_00d4;                                               //leave.s				IL_00d4
	                    ;}
	                    catch(System::FormatException^ Ex_008F02){
	IL_0091:                                                                        //pop
	IL_0092:            goto IL_00d4;                                               //leave.s				IL_00d4
	                    ;}
	IL_0094:                                                                        //ldc.i4				0x2
	IL_0099:            V_1=2;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:                                                                        //ldc.i4.m1
	IL_00a4:            if(V_0==-1)goto IL_00d4;                                    //beq.s				IL_00d4
	IL_00a6:                                                                        //ldc.i4				0x3
	IL_00ab:            V_1=3;                                                      //stloc				V_1
	IL_00af:            /*goto IL_0002;*/goto IL_00b4;                              //br				IL_0002
	IL_00b4:            /*goto IL_0068;*/goto IL_006601;                            //br.s				IL_0068
	IL_00b6:                                                                        //ldarg.0
	IL_00b7:            Temp_2=this->F_x12;                                         //ldfld				System::String^ Root::T_x175 F_x12
	IL_00bc:                                                                        //ldc.i4.s				33
	IL_00be:            Temp_3=Temp_2->LastIndexOf(safe_cast<System::Char>((System::Char)33));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_00c3:            V_0=Temp_3;                                                 //stloc.0
	IL_00c4:                                                                        //ldc.i4				0x4
	IL_00c9:            V_1=4;                                                      //stloc				V_1
	IL_00cd:            /*goto IL_0002;*/goto IL_00d2;                              //br				IL_0002
	IL_00d2:            goto IL_0094;                                               //br.s				IL_0094
	IL_00d4:            return;                                                     //ret

}
inline void Root::T_x175::M_x1(System::String^ A_0)
//Reflector::CodeModel::ITypeReference^::set_Namespace by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x175::M_x12()
//System::Object^::GetHashCode by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x13();                                       //call				System::String^ Root::T_x175::M_x13()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::String^ Root::T_x175::M_x13()
//Reflector::CodeModel::ITypeReference^::get_Name by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x175 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Object^ Root::T_x175::M_x2()
//Reflector::CodeModel::ITypeReference^::get_Owner by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x175 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x175::M_x2(System::Object^ A_0)
//System::Object^::Equals by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	Reflector::CodeModel::IType^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_1=1;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_005f;case 1:goto IL_000b;case 2:goto IL_0035;case 3:goto IL_0051;};//switch				(IL_005f,IL_000b,IL_0035,IL_0051)
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            if(this!=safe_cast<Root::T_x175^>(A_0))goto IL_003f;        //bne.un.s				IL_003f
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_1=2;                                                      //stloc				V_1
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_006c;                                               //br.s				IL_006c
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldloc.0
	IL_0039:            Temp_0=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IType^>(this),V_0);//call				System::Boolean Root::T_x149::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_003e:            return Temp_0;                                              //ret
	IL_003f:                                                                        //ldarg.1
	IL_0040:                                                                        //isinst				Reflector::CodeModel::IType
	IL_0045:            V_0=dynamic_cast<Reflector::CodeModel::IType^>(A_0);        //stloc.0
	IL_0046:                                                                        //ldc.i4				0x3
	IL_004b:            V_1=3;                                                      //stloc				V_1
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:                                                                        //ldloc.0
	IL_0052:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0054:                                                                        //ldc.i4				0x0
	IL_0059:            V_1=0;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldc.i4.4
	IL_0060:                                                                        //dup
	IL_0061:                                                                        //dup
	IL_0062:                                                                        //ldc.i4.2
	IL_0063:                                                                        //sub
	IL_0064:                                                                        //blt				IL_0060
	IL_0069:                                                                        //pop
	IL_006a:            goto IL_0037;                                               //br.s				IL_0037
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:            return true;                                                //ret
	IL_006e:                                                                        //ldc.i4.0
	IL_006f:            return false;                                               //ret

}
inline void Root::T_x175::M_x2(System::String^ A_0)
//Reflector::CodeModel::ITypeReference^::set_Name by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x175::M_x5()
//Reflector::CodeModel::ITypeReference^::Resolve by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::WeakReference^ Temp_1 = nullptr;
	System::WeakReference^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::WeakReference^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::WeakReference^ Temp_6 = nullptr;
	//local variables.
	System::Object^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_1=5;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0094;case 1:goto IL_005e;case 2:goto IL_0045;case 3:goto IL_0079;case 4:goto IL_00b0;case 5:goto IL_000b;case 6:goto IL_006c;};//switch				(IL_0094,IL_005e,IL_0045,IL_0079,IL_00b0,IL_000b,IL_006c)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_6=this->F_x1;                                          //ldfld				System::WeakReference^ Root::T_x175 F_x1
	IL_0038:            if(Temp_6==nullptr)goto IL_004c;                            //brfalse.s				IL_004c
	IL_003a:                                                                        //ldc.i4				0x2
	IL_003f:            V_1=2;                                                      //stloc				V_1
	IL_0043:            /*goto IL_000d;*/goto IL_0045;                              //br.s				IL_000d
	IL_0045:            goto IL_0048;                                               //br.s				IL_0048
	IL_0047:                                                                        //break
	IL_0048:            goto IL_006e;                                               //br.s				IL_006e
	IL_004a:                                                                        //ldnull
	IL_004b:            return nullptr;                                             //ret
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_0=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::ITypeReference^>(this));//call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x149::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_0052:            V_0=safe_cast<System::Object^>(Temp_0);                     //stloc.0
	IL_0053:                                                                        //ldc.i4				0x1
	IL_0058:            V_1=1;                                                      //stloc				V_1
	IL_005c:            /*goto IL_000d;*/goto IL_005e;                              //br.s				IL_000d
	IL_005e:                                                                        //ldloc.0
	IL_005f:            if(V_0!=nullptr)goto IL_0096;                               //brtrue.s				IL_0096
	IL_0061:                                                                        //ldc.i4				0x6
	IL_0066:            V_1=6;                                                      //stloc				V_1
	IL_006a:            /*goto IL_000d;*/goto IL_006c;                              //br.s				IL_000d
	IL_006c:            goto IL_004a;                                               //br.s				IL_004a
	IL_006e:                                                                        //ldc.i4				0x3
	IL_0073:            V_1=3;                                                      //stloc				V_1
	IL_0077:            /*goto IL_000d;*/goto IL_0079;                              //br.s				IL_000d
	IL_0079:                                                                        //ldarg.0
	IL_007a:            Temp_2=this->F_x1;                                          //ldfld				System::WeakReference^ Root::T_x175 F_x1
	IL_007f:            Temp_3=Temp_2->IsAlive;                                     //callvirt				System::Boolean System::WeakReference::get_IsAlive()
	IL_0084:            if(Temp_3)goto IL_00b2;                                     //brtrue.s				IL_00b2
	IL_0086:                                                                        //ldc.i4				0x0
	IL_008b:            V_1=0;                                                      //stloc				V_1
	IL_008f:            /*goto IL_000d;*/goto IL_0094;                              //br				IL_000d
	IL_0094:            goto IL_004c;                                               //br.s				IL_004c
	IL_0096:                                                                        //ldarg.0
	IL_0097:                                                                        //ldloc.0
	IL_0098:            Temp_1=gcnew System::WeakReference(V_0);                    //newobj				void System::WeakReference::.ctor(System::Object^)
	IL_009d:            this->F_x1=Temp_1;                                          //stfld				System::WeakReference^ Root::T_x175 F_x1
	IL_00a2:                                                                        //ldc.i4				0x4
	IL_00a7:            V_1=4;                                                      //stloc				V_1
	IL_00ab:            /*goto IL_000d;*/goto IL_00b0;                              //br				IL_000d
	IL_00b0:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:            Temp_4=this->F_x1;                                          //ldfld				System::WeakReference^ Root::T_x175 F_x1
	IL_00b8:            Temp_5=Temp_4->Target;                                      //callvirt				System::Object^ System::WeakReference::get_Target()
	IL_00bd:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_00c2:            return safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_5);//ret

}
inline System::String^ Root::T_x175::M_x8()
//System::Object^::ToString by M_x8
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
	System::String^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	Reflector::CodeModel::IType^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::IO::StringWriter^ Temp_13 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_5=4;                                                      //stloc				V_5
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_0032;case 1:goto IL_01ab;case 2:goto IL_0049;};//switch				(IL_0032,IL_01ab,IL_0049)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_0=this->GenericArguments;                              //call				Reflector::CodeModel::ITypeCollection^ Root::T_x175::get_GenericArguments()
	IL_0026:            V_0=Temp_0;                                                 //stloc.0
	IL_0027:                                                                        //ldc.i4				0x0
	IL_002c:            V_4=0;                                                      //stloc				V_4
	IL_0030:            /*goto IL_000b;*/goto IL_0032;                              //br.s				IL_000b
	IL_0032:                                                                        //ldloc.0
	IL_0033:            Temp_1=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            if(Temp_1<=0)goto IL_01b3;                                  //ble				IL_01b3
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_4=2;                                                      //stloc				V_4
	IL_0047:            /*goto IL_000b;*/goto IL_0049;                              //br.s				IL_000b
	IL_0049:            goto IL_0192;                                               //br				IL_0192
	IL_004901:          try{
	IL_004e:            goto IL_0079;                                               //br.s				IL_0079
	IL_0050:                                                                        //ldloc				V_4
	IL_0054:            switch(V_4){case 0:goto IL_00c2;case 1:goto IL_0086;case 2:goto IL_014a;case 3:goto IL_00e8;case 4:goto IL_00a1;case 5:goto IL_00ae;case 6:goto IL_0093;case 7:goto IL_010c;};//switch				(IL_00c2,IL_0086,IL_014a,IL_00e8,IL_00a1,IL_00ae,IL_0093,IL_010c)
	IL_0079:                                                                        //ldc.i4.0
	IL_007a:            V_2=0;                                                      //stloc.2
	IL_007b:                                                                        //ldc.i4				0x1
	IL_0080:            V_4=1;                                                      //stloc				V_4
	IL_0084:            /*goto IL_0050;*/goto IL_0086;                              //br.s				IL_0050
	IL_0086:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_0088:                                                                        //ldc.i4				0x6
	IL_008d:            V_4=6;                                                      //stloc				V_4
	IL_0091:            /*goto IL_0050;*/goto IL_0093;                              //br.s				IL_0050
	IL_0093:                                                                        //ldloc.2
	IL_0094:            if(V_2==0)goto IL_00c4;                                     //brfalse.s				IL_00c4
	IL_0096:                                                                        //ldc.i4				0x4
	IL_009b:            V_4=4;                                                      //stloc				V_4
	IL_009f:            /*goto IL_0050;*/goto IL_00a1;                              //br.s				IL_0050
	IL_00a1:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00a3:                                                                        //ldc.i4				0x5
	IL_00a8:            V_4=5;                                                      //stloc				V_4
	IL_00ac:            /*goto IL_0050;*/goto IL_00ae;                              //br.s				IL_0050
	IL_00ae:                                                                        //ldloc.2
	IL_00af:                                                                        //ldloc.0
	IL_00b0:            Temp_9=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b5:            if(V_2<Temp_9)goto IL_0088;                                 //blt.s				IL_0088
	IL_00b7:                                                                        //ldc.i4				0x0
	IL_00bc:            V_4=0;                                                      //stloc				V_4
	IL_00c0:            /*goto IL_0050;*/goto IL_00c2;                              //br.s				IL_0050
	IL_00c2:            goto IL_010e;                                               //br.s				IL_010e
	IL_00c4:                                                                        //ldloc.1
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldloc.2
	IL_00c7:            Temp_10=V_0[V_2];                                           //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_00cc:            Temp_11=Temp_10->ToString();                                //callvirt				System::String^ System::Object::ToString()
	IL_00d1:            V_1->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d6:                                                                        //ldloc.2
	IL_00d7:                                                                        //ldc.i4.1
	IL_00d8:                                                                        //add
	IL_00d9:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00da:                                                                        //ldc.i4				0x3
	IL_00df:            V_4=3;                                                      //stloc				V_4
	IL_00e3:            /*goto IL_0050;*/goto IL_00e8;                              //br				IL_0050
	IL_00e8:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:                                                                        //ldstr				L"\x0E21"
	IL_00f0:                                                                        //ldloc				V_5
	IL_00f4:            Temp_8=a(L"\x0E21",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f9:            V_1->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fe:                                                                        //ldc.i4				0x7
	IL_0103:            V_4=7;                                                      //stloc				V_4
	IL_0107:            /*goto IL_0050;*/goto IL_010c;                              //br				IL_0050
	IL_010c:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_010e:                                                                        //ldarg.0
	IL_010f:            Temp_3=this->M_x13();                                       //call				System::String^ Root::T_x175::M_x13()
	IL_0114:                                                                        //ldstr				L"\x1E21"
	IL_0119:                                                                        //ldloc				V_5
	IL_011d:            Temp_4=a(L"\x1E21",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0122:                                                                        //ldloc.1
	IL_0123:            Temp_5=V_1->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0128:                                                                        //ldstr				L"\x1C21"
	IL_012d:                                                                        //ldloc				V_5
	IL_0131:            Temp_6=a(L"\x1C21",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0136:            Temp_7=System::String::Concat(Temp_3,Temp_4,Temp_5,Temp_6); //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_013b:            V_3=Temp_7;                                                 //stloc.3
	IL_013c:                                                                        //ldc.i4				0x2
	IL_0141:            V_4=2;                                                      //stloc				V_4
	IL_0145:            /*goto IL_0050;*/goto IL_014a;                              //br				IL_0050
	IL_014a:            goto IL_01ba;                                               //leave.s				IL_01ba
	                    ;}
	                    finally{
	IL_014c:                                                                        //ldc.i4				0x0
	IL_0151:            V_4=0;                                                      //stloc				V_4
	IL_0155:            /*goto IL_0159;*/goto IL_0157;                              //br.s				IL_0159
	IL_0157:            goto IL_016e;                                               //br.s				IL_016e
	IL_0159:                                                                        //ldloc				V_4
	IL_015d:            switch(V_4){case 0:goto IL_0157;case 1:goto IL_017c;case 2:goto IL_018f;};//switch				(IL_0157,IL_017c,IL_018f)
	IL_016e:                                                                        //ldloc.1
	IL_016f:            if(V_1==nullptr)goto IL_0191;                               //brfalse.s				IL_0191
	IL_0171:                                                                        //ldc.i4				0x1
	IL_0176:            V_4=1;                                                      //stloc				V_4
	IL_017a:            /*goto IL_0159;*/goto IL_017c;                              //br.s				IL_0159
	IL_017c:            goto IL_017e;                                               //br.s				IL_017e
	IL_017e:                                                                        //ldloc.1
	IL_017f:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0184:                                                                        //ldc.i4				0x2
	IL_0189:            V_4=2;                                                      //stloc				V_4
	IL_018d:            /*goto IL_0159;*/goto IL_018f;                              //br.s				IL_0159
	IL_018f:            goto IL_0191;                                               //br.s				IL_0191
	IL_0191:                                                                        //endfinally
	                    ;}
	IL_0192:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0197:            Temp_13=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_12));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_019c:            V_1=Temp_13;                                                //stloc.1
	IL_019d:                                                                        //ldc.i4				0x1
	IL_01a2:            V_4=1;                                                      //stloc				V_4
	IL_01a6:            /*goto IL_000b;*/goto IL_01ab;                              //br				IL_000b
	IL_01ab:            goto IL_01ae;                                               //br.s				IL_01ae
	IL_01ad:                                                                        //break
	IL_01ae:            /*goto IL_004e;*/goto IL_004901;                            //br				IL_004e
	IL_01b3:                                                                        //ldarg.0
	IL_01b4:            Temp_2=this->M_x13();                                       //call				System::String^ Root::T_x175::M_x13()
	IL_01b9:            return Temp_2;                                              //ret
	IL_01ba:                                                                        //ldloc.3
	IL_01bb:            return V_3;                                                 //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x175::M_x9()
//Reflector::CodeModel::ITypeReference^::get_GenericType by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::ITypeCollection^ Root::T_x175::GenericArguments::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x175::T_x1^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x8;                                          //ldfld				System::Int32 Root::T_x175 F_x8
	IL_0007:            Temp_1=gcnew Root::T_x175::T_x1(safe_cast<Reflector::CodeModel::ITypeReference^>(this),Temp_0);//newobj				void Root::T_x175::T_x1::.ctor(Reflector::CodeModel::ITypeReference^,System::Int32)
	IL_000c:            return safe_cast<Reflector::CodeModel::ITypeCollection^>(Temp_1);//ret

}
inline Root::T_x175::T_x1::T_x1(Reflector::CodeModel::ITypeReference^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.2
	IL_0008:            this->F_x1=A_1;                                             //stfld				System::Int32 Root::T_x175::T_x1 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_0014:            return;                                                     //ret

}
inline void Root::T_x175::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0035;case 1:goto IL_0059;case 2:goto IL_000b;};//switch				(IL_0035,IL_0059,IL_000b)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_3=this->Count;                                         //call				System::Int32 Root::T_x175::T_x1::get_Count()
	IL_0028:            if(Temp_3==0)goto IL_0066;                                  //brfalse.s				IL_0066
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_0=0;                                                      //stloc				V_0
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_003d:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0042:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0047:                                                                        //ldarg.1
	IL_0048:                                                                        //ldarg.2
	IL_0049:            safe_cast<System::Collections::ICollection^>(Temp_2)->CopyTo(array_1,index);//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_0=1;                                                      //stloc				V_0
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:                                                                        //ldc.i4.4
	IL_005a:                                                                        //dup
	IL_005b:                                                                        //dup
	IL_005c:                                                                        //ldc.i4.2
	IL_005d:                                                                        //sub
	IL_005e:                                                                        //blt				IL_005a
	IL_0063:                                                                        //pop
	IL_0064:            goto IL_0066;                                               //br.s				IL_0066
	IL_0066:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x175::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_000b:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0010:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0015:            return Temp_3;                                              //ret

}
inline void Root::T_x175::T_x1::M_x1()
//Reflector::CodeModel::ITypeCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x175::T_x1::M_x1(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_000b:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_3=Temp_2->IndexOf(A_0);                                //callvirt				System::Int32 Reflector::CodeModel::ITypeCollection::IndexOf(Reflector::CodeModel::IType^)
	IL_0016:            return Temp_3;                                              //ret

}
inline void Root::T_x175::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::ITypeCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IType^ Root::T_x175::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::ITypeCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_000b:            V_0=Temp_1;                                                 //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0==nullptr)goto IL_0021;                               //brfalse.s				IL_0021
	IL_000f:            goto IL_0012;                                               //br.s				IL_0012
	IL_0011:                                                                        //break
	IL_0012:            goto IL_0014;                                               //br.s				IL_0014
	IL_0014:                                                                        //ldloc.0
	IL_0015:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(V_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_001a:                                                                        //ldarg.1
	IL_001b:            Temp_3=Temp_2[A_0];                                         //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_0020:            return Temp_3;                                              //ret
	IL_0021:                                                                        //ldnull
	IL_0022:            return nullptr;                                             //ret

}
inline void Root::T_x175::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IType^ A_1)
//Reflector::CodeModel::ITypeCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x175::T_x1::M_x12(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x175::T_x1::M_x13(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x175::T_x1::M_x2(Reflector::CodeModel::IType^ A_0)
//Reflector::CodeModel::ITypeCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	Reflector::CodeModel::ITypeCollection^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::ITypeReference^ Root::T_x175::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_000b:            Temp_2=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(Temp_1)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_3=Temp_2->Contains(A_0);                               //callvirt				System::Boolean Reflector::CodeModel::ITypeCollection::Contains(Reflector::CodeModel::IType^)
	IL_0016:            return Temp_3;                                              //ret

}
inline void Root::T_x175::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::ITypeCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x175::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IType^ A_1)
//Reflector::CodeModel::ITypeCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x175::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Int32 Root::T_x175::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x175::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x175::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<System::Object^>(this);                    //ret

}
