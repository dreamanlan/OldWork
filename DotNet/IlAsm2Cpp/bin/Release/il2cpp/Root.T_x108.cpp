#include "global_xref.h"

inline Root::T_x108::T_x108()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0006:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x108 F_x1
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:            return;                                                     //ret

}
inline void Root::T_x108::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x24^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x108 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            V_1=Temp_1;                                                 //stloc.1
	IL_000c:            /*goto IL_000e;*/goto IL_000C01;                            //br.s				IL_000e
	IL_000C01:          try{
	IL_000e:                                                                        //ldc.i4				0x6
	IL_0013:            V_3=6;                                                      //stloc				V_3
	IL_0017:            /*goto IL_001b;*/goto IL_0019;                              //br.s				IL_001b
	IL_0019:            goto IL_0040;                                               //br.s				IL_0040
	IL_001b:                                                                        //ldloc				V_3
	IL_001f:            switch(V_3){case 0:goto IL_0064;case 1:goto IL_00bf;case 2:goto IL_0098;case 3:goto IL_0078;case 4:goto IL_0085;case 5:goto IL_00af;case 6:goto IL_0019;};//switch				(IL_0064,IL_00bf,IL_0098,IL_0078,IL_0085,IL_00af,IL_0019)
	IL_0040:            goto IL_007a;                                               //br.s				IL_007a
	IL_0042:                                                                        //ldloc.1
	IL_0043:            Temp_4=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0048:                                                                        //castclass				Root::T_x24
	IL_004d:            V_0=safe_cast<Root::T_x24^>(Temp_4);                        //stloc.0
	IL_004e:                                                                        //ldc.i4.2
	IL_004f:                                                                        //dup
	IL_0050:                                                                        //dup
	IL_0051:                                                                        //ldc.i4.4
	IL_0052:                                                                        //sub
	IL_0053:                                                                        //blt				IL_004f
	IL_0058:                                                                        //pop
	IL_0059:                                                                        //ldc.i4				0x0
	IL_005e:            V_3=0;                                                      //stloc				V_3
	IL_0062:            /*goto IL_001b;*/goto IL_0064;                              //br.s				IL_001b
	IL_0064:                                                                        //ldloc.0
	IL_0065:                                                                        //ldarg.1
	IL_0066:            Temp_2=V_0->M_x2(A_0);                                      //callvirt				System::Boolean Root::T_x24::M_x2(System::String^)
	IL_006b:            if(!Temp_2)goto IL_007a;                                    //brfalse.s				IL_007a
	IL_006d:                                                                        //ldc.i4				0x3
	IL_0072:            V_3=3;                                                      //stloc				V_3
	IL_0076:            /*goto IL_001b;*/goto IL_0078;                              //br.s				IL_001b
	IL_0078:            goto IL_009a;                                               //br.s				IL_009a
	IL_007a:                                                                        //ldc.i4				0x4
	IL_007f:            V_3=4;                                                      //stloc				V_3
	IL_0083:            /*goto IL_001b;*/goto IL_0085;                              //br.s				IL_001b
	IL_0085:                                                                        //ldloc.1
	IL_0086:            Temp_3=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_008b:            if(Temp_3)goto IL_0042;                                     //brtrue.s				IL_0042
	IL_008d:                                                                        //ldc.i4				0x2
	IL_0092:            V_3=2;                                                      //stloc				V_3
	IL_0096:            /*goto IL_001b;*/goto IL_0098;                              //br.s				IL_001b
	IL_0098:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_009a:                                                                        //ldloc.0
	IL_009b:                                                                        //ldarg.1
	IL_009c:            V_0->M_x1(A_0);                                             //callvirt				void Root::T_x24::M_x1(System::String^)
	IL_00a1:                                                                        //ldc.i4				0x5
	IL_00a6:            V_3=5;                                                      //stloc				V_3
	IL_00aa:            /*goto IL_001b;*/goto IL_00af;                              //br				IL_001b
	IL_00af:            goto IL_010e;                                               //leave.s				IL_010e
	IL_00b1:                                                                        //ldc.i4				0x1
	IL_00b6:            V_3=1;                                                      //stloc				V_3
	IL_00ba:            /*goto IL_001b;*/goto IL_00bf;                              //br				IL_001b
	IL_00bf:            goto IL_010e;                                               //leave.s				IL_010e
	                    ;}
	                    finally{
	IL_00c1:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00c3:                                                                        //ldloc				V_4
	IL_00c7:            switch(V_4){case 0:goto IL_00ea;case 1:goto IL_010b;case 2:goto IL_00f8;};//switch				(IL_00ea,IL_010b,IL_00f8)
	IL_00d8:                                                                        //ldloc.1
	IL_00d9:                                                                        //isinst				System::IDisposable
	IL_00de:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00df:                                                                        //ldc.i4				0x0
	IL_00e4:            V_4=0;                                                      //stloc				V_4
	IL_00e8:            /*goto IL_00c3;*/goto IL_00ea;                              //br.s				IL_00c3
	IL_00ea:                                                                        //ldloc.2
	IL_00eb:            if(V_2==nullptr)goto IL_010d;                               //brfalse.s				IL_010d
	IL_00ed:                                                                        //ldc.i4				0x2
	IL_00f2:            V_4=2;                                                      //stloc				V_4
	IL_00f6:            /*goto IL_00c3;*/goto IL_00f8;                              //br.s				IL_00c3
	IL_00f8:            goto IL_00fa;                                               //br.s				IL_00fa
	IL_00fa:                                                                        //ldloc.2
	IL_00fb:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0100:                                                                        //ldc.i4				0x1
	IL_0105:            V_4=1;                                                      //stloc				V_4
	IL_0109:            /*goto IL_00c3;*/goto IL_010b;                              //br.s				IL_00c3
	IL_010b:            goto IL_010d;                                               //br.s				IL_010d
	IL_010d:                                                                        //endfinally
	                    ;}
	IL_010e:            return;                                                     //ret

}
inline void Root::T_x108::M_x1(Root::T_x24^ A_0)
//Root::T_x107^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x108 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x108::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	//local variables.
	Root::T_x24^ V_0 = nullptr;
	System::Boolean V_1 = false;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x108 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            V_2=Temp_1;                                                 //stloc.2
	IL_000c:            /*goto IL_001b;*/goto IL_001A01;                            //br.s				IL_001b
	IL_000e:                                                                        //ldc.i4.2
	IL_000f:                                                                        //dup
	IL_0010:                                                                        //dup
	IL_0011:                                                                        //ldc.i4.3
	IL_0012:                                                                        //add
	IL_0013:                                                                        //bgt				IL_000f
	IL_0018:                                                                        //pop
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:            return false;                                               //ret
	IL_001A01:          try{
	IL_001b:                                                                        //ldc.i4				0x4
	IL_0020:            V_4=4;                                                      //stloc				V_4
	IL_0024:            /*goto IL_0028;*/goto IL_0026;                              //br.s				IL_0028
	IL_0026:            goto IL_004d;                                               //br.s				IL_004d
	IL_0028:                                                                        //ldloc				V_4
	IL_002c:            switch(V_4){case 0:goto IL_005a;case 1:goto IL_00ac;case 2:goto IL_009a;case 3:goto IL_00bc;case 4:goto IL_0026;case 5:goto IL_006d;case 6:goto IL_0086;};//switch				(IL_005a,IL_00ac,IL_009a,IL_00bc,IL_0026,IL_006d,IL_0086)
	IL_004d:            goto IL_004f;                                               //br.s				IL_004f
	IL_004f:                                                                        //ldc.i4				0x0
	IL_0054:            V_4=0;                                                      //stloc				V_4
	IL_0058:            /*goto IL_0028;*/goto IL_005a;                              //br.s				IL_0028
	IL_005a:                                                                        //ldloc.2
	IL_005b:            Temp_2=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0060:            if(Temp_2)goto IL_006f;                                     //brtrue.s				IL_006f
	IL_0062:                                                                        //ldc.i4				0x5
	IL_0067:            V_4=5;                                                      //stloc				V_4
	IL_006b:            /*goto IL_0028;*/goto IL_006d;                              //br.s				IL_0028
	IL_006d:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_006f:                                                                        //ldloc.2
	IL_0070:            Temp_3=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0075:                                                                        //castclass				Root::T_x24
	IL_007a:            V_0=safe_cast<Root::T_x24^>(Temp_3);                        //stloc.0
	IL_007b:                                                                        //ldc.i4				0x6
	IL_0080:            V_4=6;                                                      //stloc				V_4
	IL_0084:            /*goto IL_0028;*/goto IL_0086;                              //br.s				IL_0028
	IL_0086:                                                                        //ldloc.0
	IL_0087:                                                                        //ldarg.1
	IL_0088:            Temp_4=V_0->M_x2(A_0);                                      //callvirt				System::Boolean Root::T_x24::M_x2(System::String^)
	IL_008d:            if(!Temp_4)goto IL_004f;                                    //brfalse.s				IL_004f
	IL_008f:                                                                        //ldc.i4				0x2
	IL_0094:            V_4=2;                                                      //stloc				V_4
	IL_0098:            /*goto IL_0028;*/goto IL_009a;                              //br.s				IL_0028
	IL_009a:            goto IL_009c;                                               //br.s				IL_009c
	IL_009c:                                                                        //ldc.i4.1
	IL_009d:            V_1=true;                                                   //stloc.1
	IL_009e:                                                                        //ldc.i4				0x1
	IL_00a3:            V_4=1;                                                      //stloc				V_4
	IL_00a7:            /*goto IL_0028;*/goto IL_00ac;                              //br				IL_0028
	IL_00ac:            goto IL_010e;                                               //leave.s				IL_010e
	IL_00ae:                                                                        //ldc.i4				0x3
	IL_00b3:            V_4=3;                                                      //stloc				V_4
	IL_00b7:            /*goto IL_0028;*/goto IL_00bc;                              //br				IL_0028
	IL_00bc:            goto IL_000e;                                               //leave				IL_000e
	                    ;}
	                    finally{
	IL_00c1:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00c3:                                                                        //ldloc				V_5
	IL_00c7:            switch(V_5){case 0:goto IL_00ea;case 1:goto IL_010b;case 2:goto IL_00f8;};//switch				(IL_00ea,IL_010b,IL_00f8)
	IL_00d8:                                                                        //ldloc.2
	IL_00d9:                                                                        //isinst				System::IDisposable
	IL_00de:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00df:                                                                        //ldc.i4				0x0
	IL_00e4:            V_5=0;                                                      //stloc				V_5
	IL_00e8:            /*goto IL_00c3;*/goto IL_00ea;                              //br.s				IL_00c3
	IL_00ea:                                                                        //ldloc.3
	IL_00eb:            if(V_3==nullptr)goto IL_010d;                               //brfalse.s				IL_010d
	IL_00ed:                                                                        //ldc.i4				0x2
	IL_00f2:            V_5=2;                                                      //stloc				V_5
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
	IL_010e:                                                                        //ldloc.1
	IL_010f:            return V_1;                                                 //ret

}
inline void Root::T_x108::M_x2(Root::T_x24^ A_0)
//Root::T_x107^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x108 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
