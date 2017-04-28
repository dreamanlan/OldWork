#include "global_xref.h"

inline Root::T_x119::T_x119()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0006:            this->F_x12=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Root::T_x119 F_x12
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:            return;                                                     //ret

}
inline Reflector::IConfiguration^ Root::T_x119::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x119 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x119::M_x1(Reflector::CodeModel::IVisibilityConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x119 F_x1
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x119::M_x1(Reflector::IConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Reflector::IConfiguration^ Root::T_x119 F_x2
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x119::M_x1(System::String^ A_0)
//Reflector::CodeModel::ILanguageWriterConfiguration^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	Reflector::IConfiguration^ Temp_5 = nullptr;
	System::Collections::IDictionary^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Collections::IDictionary^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0057;case 2:goto IL_0070;case 3:goto IL_0093;case 4:goto IL_007d;case 5:goto IL_004a;};//switch				(IL_000b,IL_0057,IL_0070,IL_0093,IL_007d,IL_004a)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_8=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x119 F_x12
	IL_0034:                                                                        //ldarg.1
	IL_0035:            Temp_9=Temp_8->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_003a:            if(!Temp_9)goto IL_0072;                                    //brfalse.s				IL_0072
	IL_003c:            goto IL_003f;                                               //br.s				IL_003f
	IL_003e:                                                                        //break
	IL_003f:                                                                        //ldc.i4				0x5
	IL_0044:            V_0=5;                                                      //stloc				V_0
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_0095;                                               //br.s				IL_0095
	IL_004c:                                                                        //ldc.i4				0x1
	IL_0051:            V_0=1;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x119 F_x2
	IL_005d:                                                                        //ldarg.1
	IL_005e:            Temp_1=Temp_0->HasProperty(A_0);                            //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_0063:            if(!Temp_1)goto IL_00b4;                                    //brfalse.s				IL_00b4
	IL_0065:                                                                        //ldc.i4				0x2
	IL_006a:            V_0=2;                                                      //stloc				V_0
	IL_006e:            /*goto IL_000d;*/goto IL_0070;                              //br.s				IL_000d
	IL_0070:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_0072:                                                                        //ldc.i4				0x4
	IL_0077:            V_0=4;                                                      //stloc				V_0
	IL_007b:            /*goto IL_000d;*/goto IL_007d;                              //br.s				IL_000d
	IL_007d:                                                                        //ldarg.0
	IL_007e:            Temp_5=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x119 F_x2
	IL_0083:            if(Temp_5==nullptr)goto IL_00b4;                            //brfalse.s				IL_00b4
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_0=3;                                                      //stloc				V_0
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:            goto IL_004c;                                               //br.s				IL_004c
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_6=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x119 F_x12
	IL_009b:                                                                        //ldarg.1
	IL_009c:            Temp_7=Temp_6[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_00a1:                                                                        //castclass				System::String
	IL_00a6:            return safe_cast<System::String^>(Temp_7);                  //ret
	IL_00a7:                                                                        //ldarg.0
	IL_00a8:            Temp_3=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x119 F_x2
	IL_00ad:                                                                        //ldarg.1
	IL_00ae:            Temp_4=Temp_3->GetProperty(A_0);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_00b3:            return Temp_4;                                              //ret
	IL_00b4:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00b9:            return Temp_2;                                              //ret

}
inline void Root::T_x119::M_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x119 F_x12
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0[safe_cast<System::Object^>(A_0)]=safe_cast<System::Object^>(A_1);//callvirt				void System::Collections::IDictionary::set_Item(System::Object^,System::Object^)
	IL_000d:            return;                                                     //ret

}
inline Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x119::M_x2()
//Reflector::CodeModel::ILanguageWriterConfiguration^::get_Visibility by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVisibilityConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IVisibilityConfiguration^ Root::T_x119 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
