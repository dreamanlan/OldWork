#include "global_xref.h"

inline Root::T_x178::T_x178()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x178::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x178::M_x1()
//System::Collections::ICollection^::get_IsSynchronized by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::ArrayList::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x178::M_x1(System::Array^ A_0,System::Int32 A_1)
//System::Collections::ICollection^::CopyTo by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_0->CopyTo(A_0,safe_cast<System::Int32>(0));            //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline Root::T_x177^ Root::T_x178::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Collections::ArrayList^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x177^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0065;case 1:goto IL_007e;case 2:goto IL_00aa;case 3:goto IL_0030;case 4:goto IL_008e;case 5:goto IL_0044;};//switch				(IL_0065,IL_007e,IL_00aa,IL_0030,IL_008e,IL_0044)
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:            V_0=0;                                                      //stloc.0
	IL_0025:                                                                        //ldc.i4				0x3
	IL_002a:            V_2=3;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_0033;                                               //br.s				IL_0033
	IL_0032:                                                                        //break
	IL_0033:            goto IL_0080;                                               //br.s				IL_0080
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:                                                                        //add
	IL_0038:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0039:                                                                        //ldc.i4				0x5
	IL_003e:            V_2=5;                                                      //stloc				V_2
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:            goto IL_0080;                                               //br.s				IL_0080
	IL_0046:                                                                        //ldloc.1
	IL_0047:            return V_1;                                                 //ret
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_4=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_5=Temp_4[V_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_0054:                                                                        //castclass				Root::T_x177
	IL_0059:            V_1=safe_cast<Root::T_x177^>(Temp_5);                       //stloc.1
	IL_005a:                                                                        //ldc.i4				0x0
	IL_005f:            V_2=0;                                                      //stloc				V_2
	IL_0063:            /*goto IL_0002;*/goto IL_0065;                              //br.s				IL_0002
	IL_0065:                                                                        //ldloc.1
	IL_0066:            Temp_0=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x177::M_x12()
	IL_006b:                                                                        //ldarg.1
	IL_006c:            Temp_1=(Temp_0 == A_0);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0071:            if(!Temp_1)goto IL_0035;                                    //brfalse.s				IL_0035
	IL_0073:                                                                        //ldc.i4				0x1
	IL_0078:            V_2=1;                                                      //stloc				V_2
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0046;                                               //br.s				IL_0046
	IL_0080:                                                                        //ldc.i4				0x4
	IL_0085:            V_2=4;                                                      //stloc				V_2
	IL_0089:            /*goto IL_0002;*/goto IL_008e;                              //br				IL_0002
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldarg.0
	IL_0090:            Temp_2=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0095:            Temp_3=Temp_2->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_009a:            if(V_0<Temp_3)goto IL_0048;                                 //blt.s				IL_0048
	IL_009c:                                                                        //ldc.i4				0x2
	IL_00a1:            V_2=2;                                                      //stloc				V_2
	IL_00a5:            /*goto IL_0002;*/goto IL_00aa;                              //br				IL_0002
	IL_00aa:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00ac:                                                                        //ldnull
	IL_00ad:            return nullptr;                                             //ret

}
inline void Root::T_x178::M_x1(Root::T_x177^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline System::Object^ Root::T_x178::M_x12()
//System::Collections::ICollection^::get_SyncRoot by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::ArrayList::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x178::M_x2()
//System::Collections::ICollection^::get_Count by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x178 F_x1
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
