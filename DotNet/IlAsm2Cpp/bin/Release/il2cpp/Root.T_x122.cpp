#include "global_xref.h"

inline Root::T_x122::T_x122(System::Windows::Forms::Form^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x12^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=gcnew Root::T_x122::T_x12(A_0);                      //newobj				void Root::T_x122::T_x12::.ctor(System::Windows::Forms::Form^)
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				Root::T_x122::T_x12^ Root::T_x122 F_x1
	IL_0012:            return;                                                     //ret

}
inline Reflector::ICommandBarCollection^ Root::T_x122::M_x1()
//Reflector::ICommandBarManager^::get_CommandBars by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x12^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x122::T_x12^ Root::T_x122 F_x1
	IL_0006:            return safe_cast<Reflector::ICommandBarCollection^>(Temp_0);//ret

}
inline Root::T_x122::T_x12::T_x12(System::Windows::Forms::Form^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x2=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            this->F_x1=A_0;                                             //stfld				System::Windows::Forms::Form^ Root::T_x122::T_x12 F_x1
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x122::T_x12::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x122::T_x12::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x122::T_x12::M_x1()
//Reflector::ICommandBarCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x122::T_x12::M_x1(array<Reflector::ICommandBar^>^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(safe_cast<System::Array^>(A_0),A_1);         //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x122::T_x12::M_x1(Reflector::ICommandBar^ A_0)
//Reflector::ICommandBarCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x1(System::Collections::ICollection^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Collections::IEnumerator^ Temp_5 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_6 = nullptr;
	Reflector::ICommandBar^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	//local variables.
	System::Object^ V_0 = nullptr;
	Reflector::ICommandBar^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	Reflector::ICommandBar^ V_3 = nullptr;
	Reflector::ICommandBar^ V_4 = nullptr;
	Reflector::ICommandBar^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=safe_cast<System::Collections::IEnumerable^>(A_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0006:            V_6=Temp_0;                                                 //stloc.s				V_6
	IL_0008:            /*goto IL_0017;*/goto IL_001201;                            //br.s				IL_0017
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_5=safe_cast<System::Collections::IEnumerable^>(A_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0010:            V_6=Temp_5;                                                 //stloc.s				V_6
	IL_0012:            /*goto IL_0146;*/goto IL_014501;                            //br				IL_0146
	IL_001201:          try{
	IL_0017:                                                                        //ldc.i4				0x2
	IL_001c:            V_8=2;                                                      //stloc				V_8
	IL_0020:            /*goto IL_0024;*/goto IL_0022;                              //br.s				IL_0024
	IL_0022:            goto IL_0051;                                               //br.s				IL_0051
	IL_0024:                                                                        //ldloc				V_8
	IL_0028:            switch(V_8){case 0:goto IL_0098;case 1:goto IL_00c8;case 2:goto IL_0022;case 3:goto IL_005e;case 4:goto IL_00b7;case 5:goto IL_0072;case 6:goto IL_007f;case 7:goto IL_00db;case 8:goto IL_00ee;};//switch				(IL_0098,IL_00c8,IL_0022,IL_005e,IL_00b7,IL_0072,IL_007f,IL_00db,IL_00ee)
	IL_0051:            goto IL_0053;                                               //br.s				IL_0053
	IL_0053:                                                                        //ldc.i4				0x3
	IL_0058:            V_8=3;                                                      //stloc				V_8
	IL_005c:            /*goto IL_0024;*/goto IL_005e;                              //br.s				IL_0024
	IL_005e:                                                                        //ldloc.s				V_6
	IL_0060:            Temp_1=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0065:            if(Temp_1)goto IL_009a;                                     //brtrue.s				IL_009a
	IL_0067:                                                                        //ldc.i4				0x5
	IL_006c:            V_8=5;                                                      //stloc				V_8
	IL_0070:            /*goto IL_0024;*/goto IL_0072;                              //br.s				IL_0024
	IL_0072:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_0074:                                                                        //ldc.i4				0x6
	IL_0079:            V_8=6;                                                      //stloc				V_8
	IL_007d:            /*goto IL_0024;*/goto IL_007f;                              //br.s				IL_0024
	IL_007f:                                                                        //ldloc.1
	IL_0080:            Temp_3=V_1->Identifier;                                     //callvirt				System::String^ Reflector::ICommandBar::get_Identifier()
	IL_0085:                                                                        //ldarg.2
	IL_0086:            Temp_4=(Temp_3 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_008b:            if(!Temp_4)goto IL_0053;                                    //brfalse.s				IL_0053
	IL_008d:                                                                        //ldc.i4				0x0
	IL_0092:            V_8=0;                                                      //stloc				V_8
	IL_0096:            /*goto IL_0024;*/goto IL_0098;                              //br.s				IL_0024
	IL_0098:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_009a:                                                                        //ldloc.s				V_6
	IL_009c:            Temp_2=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00a1:            V_0=Temp_2;                                                 //stloc.0
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:                                                                        //isinst				Reflector::ICommandBar
	IL_00a8:            V_1=dynamic_cast<Reflector::ICommandBar^>(V_0);             //stloc.1
	IL_00a9:                                                                        //ldc.i4				0x4
	IL_00ae:            V_8=4;                                                      //stloc				V_8
	IL_00b2:            /*goto IL_0024;*/goto IL_00b7;                              //br				IL_0024
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:            if(V_1==nullptr)goto IL_0053;                               //brfalse.s				IL_0053
	IL_00ba:                                                                        //ldc.i4				0x1
	IL_00bf:            V_8=1;                                                      //stloc				V_8
	IL_00c3:            /*goto IL_0024;*/goto IL_00c8;                              //br				IL_0024
	IL_00c8:            goto IL_0074;                                               //br.s				IL_0074
	IL_00ca:                                                                        //ldloc.1
	IL_00cb:            V_5=V_1;                                                    //stloc.s				V_5
	IL_00cd:                                                                        //ldc.i4				0x7
	IL_00d2:            V_8=7;                                                      //stloc				V_8
	IL_00d6:            /*goto IL_0024;*/goto IL_00db;                              //br				IL_0024
	IL_00db:            goto IL_0279;                                               //leave				IL_0279
	IL_00e0:                                                                        //ldc.i4				0x8
	IL_00e5:            V_8=8;                                                      //stloc				V_8
	IL_00e9:            /*goto IL_0024;*/goto IL_00ee;                              //br				IL_0024
	IL_00ee:            goto IL_000a;                                               //leave				IL_000a
	                    ;}
	                    finally{
	IL_00f3:            goto IL_010a;                                               //br.s				IL_010a
	IL_00f5:                                                                        //ldloc				V_9
	IL_00f9:            switch(V_9){case 0:goto IL_012d;case 1:goto IL_011e;case 2:goto IL_0141;};//switch				(IL_012d,IL_011e,IL_0141)
	IL_010a:                                                                        //ldloc.s				V_6
	IL_010c:                                                                        //isinst				System::IDisposable
	IL_0111:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0113:                                                                        //ldc.i4				0x1
	IL_0118:            V_9=1;                                                      //stloc				V_9
	IL_011c:            /*goto IL_00f5;*/goto IL_011e;                              //br.s				IL_00f5
	IL_011e:                                                                        //ldloc.s				V_7
	IL_0120:            if(V_7==nullptr)goto IL_0143;                               //brfalse.s				IL_0143
	IL_0122:                                                                        //ldc.i4				0x0
	IL_0127:            V_9=0;                                                      //stloc				V_9
	IL_012b:            /*goto IL_00f5;*/goto IL_012d;                              //br.s				IL_00f5
	IL_012d:            goto IL_012f;                                               //br.s				IL_012f
	IL_012f:                                                                        //ldloc.s				V_7
	IL_0131:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0136:                                                                        //ldc.i4				0x2
	IL_013b:            V_9=2;                                                      //stloc				V_9
	IL_013f:            /*goto IL_00f5;*/goto IL_0141;                              //br.s				IL_00f5
	IL_0141:            goto IL_0143;                                               //br.s				IL_0143
	IL_0143:                                                                        //endfinally
	                    ;}
	IL_0144:                                                                        //ldnull
	IL_0145:            return nullptr;                                             //ret
	IL_014501:          try{
	IL_0146:                                                                        //ldc.i4				0x0
	IL_014b:            V_10=0;                                                     //stloc				V_10
	IL_014f:            /*goto IL_0153;*/goto IL_0151;                              //br.s				IL_0153
	IL_0151:            goto IL_0180;                                               //br.s				IL_0180
	IL_0153:                                                                        //ldloc				V_10
	IL_0157:            switch(V_10){case 0:goto IL_0151;case 1:goto IL_01cc;case 2:goto IL_0210;case 3:goto IL_01a1;case 4:goto IL_01fc;case 5:goto IL_01eb;case 6:goto IL_0220;case 7:goto IL_018d;case 8:goto IL_01bd;};//switch				(IL_0151,IL_01cc,IL_0210,IL_01a1,IL_01fc,IL_01eb,IL_0220,IL_018d,IL_01bd)
	IL_0180:            goto IL_0182;                                               //br.s				IL_0182
	IL_0182:                                                                        //ldc.i4				0x7
	IL_0187:            V_10=7;                                                     //stloc				V_10
	IL_018b:            /*goto IL_0153;*/goto IL_018d;                              //br.s				IL_0153
	IL_018d:                                                                        //ldloc.s				V_6
	IL_018f:            Temp_8=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0194:            if(Temp_8)goto IL_01ce;                                     //brtrue.s				IL_01ce
	IL_0196:                                                                        //ldc.i4				0x3
	IL_019b:            V_10=3;                                                     //stloc				V_10
	IL_019f:            /*goto IL_0153;*/goto IL_01a1;                              //br.s				IL_0153
	IL_01a1:            goto IL_0212;                                               //br.s				IL_0212
	IL_01a3:                                                                        //ldarg.0
	IL_01a4:                                                                        //ldloc.3
	IL_01a5:            Temp_6=V_3->Items;                                          //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_01aa:                                                                        //ldarg.2
	IL_01ab:            Temp_7=this->M_x1(safe_cast<System::Collections::ICollection^>(Temp_6),A_1);//call				Reflector::ICommandBar^ Root::T_x122::T_x12::M_x1(System::Collections::ICollection^,System::String^)
	IL_01b0:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_01b2:                                                                        //ldc.i4				0x8
	IL_01b7:            V_10=8;                                                     //stloc				V_10
	IL_01bb:            /*goto IL_0153;*/goto IL_01bd;                              //br.s				IL_0153
	IL_01bd:                                                                        //ldloc.s				V_4
	IL_01bf:            if(V_4==nullptr)goto IL_0182;                               //brfalse.s				IL_0182
	IL_01c1:                                                                        //ldc.i4				0x1
	IL_01c6:            V_10=1;                                                     //stloc				V_10
	IL_01ca:            /*goto IL_0153;*/goto IL_01cc;                              //br.s				IL_0153
	IL_01cc:            goto IL_01fe;                                               //br.s				IL_01fe
	IL_01ce:                                                                        //ldloc.s				V_6
	IL_01d0:            Temp_9=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01d5:            V_2=Temp_9;                                                 //stloc.2
	IL_01d6:                                                                        //ldloc.2
	IL_01d7:                                                                        //isinst				Reflector::ICommandBar
	IL_01dc:            V_3=dynamic_cast<Reflector::ICommandBar^>(V_2);             //stloc.3
	IL_01dd:                                                                        //ldc.i4				0x5
	IL_01e2:            V_10=5;                                                     //stloc				V_10
	IL_01e6:            /*goto IL_0153;*/goto IL_01eb;                              //br				IL_0153
	IL_01eb:                                                                        //ldloc.3
	IL_01ec:            if(V_3==nullptr)goto IL_0182;                               //brfalse.s				IL_0182
	IL_01ee:                                                                        //ldc.i4				0x4
	IL_01f3:            V_10=4;                                                     //stloc				V_10
	IL_01f7:            /*goto IL_0153;*/goto IL_01fc;                              //br				IL_0153
	IL_01fc:            goto IL_01a3;                                               //br.s				IL_01a3
	IL_01fe:                                                                        //ldloc.s				V_4
	IL_0200:            V_5=V_4;                                                    //stloc.s				V_5
	IL_0202:                                                                        //ldc.i4				0x2
	IL_0207:            V_10=2;                                                     //stloc				V_10
	IL_020b:            /*goto IL_0153;*/goto IL_0210;                              //br				IL_0153
	IL_0210:            goto IL_0279;                                               //leave.s				IL_0279
	IL_0212:                                                                        //ldc.i4				0x6
	IL_0217:            V_10=6;                                                     //stloc				V_10
	IL_021b:            /*goto IL_0153;*/goto IL_0220;                              //br				IL_0153
	IL_0220:            goto IL_0144;                                               //leave				IL_0144
	                    ;}
	                    finally{
	IL_0225:            goto IL_0228;                                               //br.s				IL_0228
	IL_0227:                                                                        //break
	IL_0228:            goto IL_023f;                                               //br.s				IL_023f
	IL_022a:                                                                        //ldloc				V_11
	IL_022e:            switch(V_11){case 0:goto IL_0253;case 1:goto IL_0276;case 2:goto IL_0262;};//switch				(IL_0253,IL_0276,IL_0262)
	IL_023f:                                                                        //ldloc.s				V_6
	IL_0241:                                                                        //isinst				System::IDisposable
	IL_0246:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0248:                                                                        //ldc.i4				0x0
	IL_024d:            V_11=0;                                                     //stloc				V_11
	IL_0251:            /*goto IL_022a;*/goto IL_0253;                              //br.s				IL_022a
	IL_0253:                                                                        //ldloc.s				V_7
	IL_0255:            if(V_7==nullptr)goto IL_0278;                               //brfalse.s				IL_0278
	IL_0257:                                                                        //ldc.i4				0x2
	IL_025c:            V_11=2;                                                     //stloc				V_11
	IL_0260:            /*goto IL_022a;*/goto IL_0262;                              //br.s				IL_022a
	IL_0262:            goto IL_0264;                                               //br.s				IL_0264
	IL_0264:                                                                        //ldloc.s				V_7
	IL_0266:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_026b:                                                                        //ldc.i4				0x1
	IL_0270:            V_11=1;                                                     //stloc				V_11
	IL_0274:            /*goto IL_022a;*/goto IL_0276;                              //br.s				IL_022a
	IL_0276:            goto IL_0278;                                               //br.s				IL_0278
	IL_0278:                                                                        //endfinally
	                    ;}
	IL_0279:                                                                        //ldloc.s				V_5
	IL_027b:            return V_5;                                                 //ret

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x1(System::Int32 A_0)
//Reflector::ICommandBarCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Reflector::ICommandBar
	IL_0011:            return safe_cast<Reflector::ICommandBar^>(Temp_1);          //ret

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x1(System::String^ A_0)
//Reflector::ICommandBarCollection^::AddMenuBar by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Form^ Temp_0 = nullptr;
	System::Windows::Forms::MainMenu^ Temp_1 = nullptr;
	Root::T_x122::T_x8^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::Form^ Temp_5 = nullptr;
	System::InvalidOperationException^ Temp_6 = nullptr;
	//local variables.
	Reflector::ICommandBar^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::Form^ Root::T_x122::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->Menu;                                        //callvirt				System::Windows::Forms::MainMenu^ System::Windows::Forms::Form::get_Menu()
	IL_000b:            if(Temp_1==nullptr)goto IL_0015;                            //brfalse.s				IL_0015
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:            Temp_6=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_0014:            throw Temp_6;                                               //throw
	IL_0015:                                                                        //ldc.i4.4
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //ldc.i4.2
	IL_0019:                                                                        //sub
	IL_001a:                                                                        //blt				IL_0016
	IL_001f:                                                                        //pop
	IL_0020:            Temp_2=gcnew Root::T_x122::T_x8();                          //newobj				void Root::T_x122::T_x8::.ctor()
	IL_0025:            V_0=safe_cast<Reflector::ICommandBar^>(Temp_2);             //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldarg.1
	IL_0028:            V_0->Identifier=A_0;                                        //callvirt				void Reflector::ICommandBar::set_Identifier(System::String^)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_3=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0033:                                                                        //ldloc.0
	IL_0034:            Temp_4=Temp_3->Add(safe_cast<System::Object^>(V_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0039:                                                                        //pop
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_5=this->F_x1;                                          //ldfld				System::Windows::Forms::Form^ Root::T_x122::T_x12 F_x1
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //castclass				System::Windows::Forms::MainMenu
	IL_0046:            Temp_5->Menu=safe_cast<System::Windows::Forms::MainMenu^>(V_0);//callvirt				void System::Windows::Forms::Form::set_Menu(System::Windows::Forms::MainMenu^)
	IL_004b:                                                                        //ldloc.0
	IL_004c:            return V_0;                                                 //ret

}
inline System::Int32 Root::T_x122::T_x12::M_x12(Reflector::ICommandBar^ A_0)
//Reflector::ICommandBarCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x12(System::String^ A_0)
//Reflector::ICommandBarCollection^::AddContextMenu by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x4^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	Reflector::ICommandBar^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x122::T_x4();                          //newobj				void Root::T_x122::T_x4::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::ICommandBar^>(Temp_0);             //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            V_0->Identifier=A_0;                                        //callvirt				void Reflector::ICommandBar::set_Identifier(System::String^)
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_1=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_2=Temp_1->Add(safe_cast<System::Object^>(V_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_001c:                                                                        //pop
	IL_001d:                                                                        //ldloc.0
	IL_001e:            return V_0;                                                 //ret

}
inline void Root::T_x122::T_x12::M_x13(Reflector::ICommandBar^ A_0)
//Reflector::ICommandBarCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x13(System::String^ A_0)
//Reflector::ICommandBarCollection^::AddToolBar by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x122::T_x12::M_x2(Reflector::ICommandBar^ A_0)
//Reflector::ICommandBarCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x122::T_x12::M_x2(System::Int32 A_0)
//Reflector::ICommandBarCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline Reflector::ICommandBar^ Root::T_x122::T_x12::M_x2(System::String^ A_0)
//Reflector::ICommandBarCollection^::get_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBar^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:                                                                        //ldarg.1
	IL_0003:            Temp_0=this->M_x1(safe_cast<System::Collections::ICollection^>(this),A_0);//call				Reflector::ICommandBar^ Root::T_x122::T_x12::M_x1(System::Collections::ICollection^,System::String^)
	IL_0008:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x122::T_x12::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x12 F_x2
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x122::T_x12::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x122::T_x12::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x122::T_x8::T_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::MainMenu();*/                     //call				void System::Windows::Forms::MainMenu::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x122::T_x2(safe_cast<System::Windows::Forms::Menu^>(this));//newobj				void Root::T_x122::T_x2::.ctor(System::Windows::Forms::Menu^)
	IL_000d:            this->F_x2=safe_cast<Reflector::ICommandBarItemCollection^>(Temp_0);//stfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x8 F_x2
	IL_0012:            return;                                                     //ret

}
inline System::String^ Root::T_x122::T_x8::M_x1()
//Reflector::ICommandBar^::get_Identifier by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x122::T_x8 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x122::T_x8::M_x1(System::String^ A_0)
//Reflector::ICommandBar^::set_Identifier by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x122::T_x8 F_x1
	IL_0007:            return;                                                     //ret

}
inline Reflector::ICommandBarItemCollection^ Root::T_x122::T_x8::M_x2()
//Reflector::ICommandBar^::get_Items by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x8 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x122::T_x2::T_x2(System::Windows::Forms::Menu^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0006:            this->F_x2=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_000b:                                                                        //ldarg.0
	IL_000c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            this->F_x1=A_0;                                             //stfld				System::Windows::Forms::Menu^ Root::T_x122::T_x2 F_x1
	IL_0018:                                                                        //ldarg.0
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:            Temp_1=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_001f:            this->F_x2=Temp_1;                                          //stfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0024:            return;                                                     //ret

}
inline void Root::T_x122::T_x2::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x122::T_x2::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x122::T_x2::M_x1()
//Reflector::ICommandBarItemCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0002;                                               //br.s				IL_0002
	IL_0002:                                                                        //ldarg.0
	IL_0003:            Temp_0=this->Count;                                         //call				System::Int32 Root::T_x122::T_x2::get_Count()
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            if(Temp_0>0)goto IL_000d;                                   //bgt.s				IL_000d
	IL_000b:            goto IL_0016;                                               //br.s				IL_0016
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            this->M_x12(safe_cast<System::Int32>(0));                   //call				void Root::T_x122::T_x2::M_x12(System::Int32)
	IL_0014:            goto IL_0002;                                               //br.s				IL_0002
	IL_0016:            return;                                                     //ret

}
inline void Root::T_x122::T_x2::M_x1(array<Reflector::ICommandBarItem^>^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(safe_cast<System::Array^>(A_0),A_1);         //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x122::T_x2::M_x1(Reflector::ICommandBarItem^ A_0)
//Reflector::ICommandBarItemCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->IndexOf(safe_cast<System::Object^>(A_0));    //callvirt				System::Int32 System::Collections::ArrayList::IndexOf(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x122::T_x2::M_x1(System::Collections::ICollection^ A_0)
//Reflector::ICommandBarItemCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	//local variables.
	Root::T_x122::T_x13^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=safe_cast<System::Collections::IEnumerable^>(A_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0006:            V_1=Temp_0;                                                 //stloc.1
	IL_0007:            /*goto IL_0009;*/goto IL_000701;                            //br.s				IL_0009
	IL_000701:          try{
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_3=1;                                                      //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_0089;case 1:goto IL_0014;case 2:goto IL_007c;case 3:goto IL_0069;case 4:goto IL_005c;};//switch				(IL_0089,IL_0014,IL_007c,IL_0069,IL_005c)
	IL_0033:            goto IL_0036;                                               //br.s				IL_0036
	IL_0035:                                                                        //break
	IL_0036:            goto IL_005e;                                               //br.s				IL_005e
	IL_0038:                                                                        //ldloc.1
	IL_0039:            Temp_2=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_003e:                                                                        //castclass				Root::T_x122::T_x13
	IL_0043:            V_0=safe_cast<Root::T_x122::T_x13^>(Temp_2);                //stloc.0
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_3=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_4=Temp_3->Add(safe_cast<System::Object^>(V_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0050:                                                                        //pop
	IL_0051:                                                                        //ldc.i4				0x4
	IL_0056:            V_3=4;                                                      //stloc				V_3
	IL_005a:            /*goto IL_0016;*/goto IL_005c;                              //br.s				IL_0016
	IL_005c:            goto IL_005e;                                               //br.s				IL_005e
	IL_005e:                                                                        //ldc.i4				0x3
	IL_0063:            V_3=3;                                                      //stloc				V_3
	IL_0067:            /*goto IL_0016;*/goto IL_0069;                              //br.s				IL_0016
	IL_0069:                                                                        //ldloc.1
	IL_006a:            Temp_1=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_006f:            if(Temp_1)goto IL_0038;                                     //brtrue.s				IL_0038
	IL_0071:                                                                        //ldc.i4				0x2
	IL_0076:            V_3=2;                                                      //stloc				V_3
	IL_007a:            /*goto IL_0016;*/goto IL_007c;                              //br.s				IL_0016
	IL_007c:            goto IL_007e;                                               //br.s				IL_007e
	IL_007e:                                                                        //ldc.i4				0x0
	IL_0083:            V_3=0;                                                      //stloc				V_3
	IL_0087:            /*goto IL_0016;*/goto IL_0089;                              //br.s				IL_0016
	IL_0089:            goto IL_00d8;                                               //leave.s				IL_00d8
	                    ;}
	                    finally{
	IL_008b:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_008d:                                                                        //ldloc				V_4
	IL_0091:            switch(V_4){case 0:goto IL_00d5;case 1:goto IL_00c2;case 2:goto IL_00b4;};//switch				(IL_00d5,IL_00c2,IL_00b4)
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //isinst				System::IDisposable
	IL_00a8:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00a9:                                                                        //ldc.i4				0x2
	IL_00ae:            V_4=2;                                                      //stloc				V_4
	IL_00b2:            /*goto IL_008d;*/goto IL_00b4;                              //br.s				IL_008d
	IL_00b4:                                                                        //ldloc.2
	IL_00b5:            if(V_2==nullptr)goto IL_00d7;                               //brfalse.s				IL_00d7
	IL_00b7:                                                                        //ldc.i4				0x1
	IL_00bc:            V_4=1;                                                      //stloc				V_4
	IL_00c0:            /*goto IL_008d;*/goto IL_00c2;                              //br.s				IL_008d
	IL_00c2:            goto IL_00c4;                                               //br.s				IL_00c4
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00ca:                                                                        //ldc.i4				0x0
	IL_00cf:            V_4=0;                                                      //stloc				V_4
	IL_00d3:            /*goto IL_008d;*/goto IL_00d5;                              //br.s				IL_008d
	IL_00d5:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00d7:                                                                        //endfinally
	                    ;}
	IL_00d8:            return;                                                     //ret

}
inline Reflector::ICommandBarItem^ Root::T_x122::T_x2::M_x1(System::Int32 A_0)
//Reflector::ICommandBarItemCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Reflector::ICommandBarItem
	IL_0011:            return safe_cast<Reflector::ICommandBarItem^>(Temp_1);      //ret

}
inline void Root::T_x122::T_x2::M_x1(System::Int32 A_0,Reflector::ICommandBarItem^ A_1)
//Reflector::ICommandBarItemCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->Insert(A_0,safe_cast<System::Object^>(A_1));        //callvirt				void System::Collections::ArrayList::Insert(System::Int32,System::Object^)
	IL_000d:            return;                                                     //ret

}
inline Reflector::ICommandBarCheckBox^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1)
//Reflector::ICommandBarItemCollection^::InsertCheckBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1,System::Drawing::Image^ A_2,System::EventHandler^ A_3)
//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:                                                                        //ldarg.2
	IL_0006:                                                                        //ldarg.s				A_3
	IL_0008:            Temp_0=this->M_x1(A_0,A_1,A_3);                             //call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32,System::String^,System::EventHandler^)
	IL_000d:            V_0=Temp_0;                                                 //stloc.0
	IL_000e:                                                                        //ldloc.0
	IL_000f:                                                                        //ldarg.3
	IL_0010:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Image=A_2;     //callvirt				void Reflector::ICommandBarItem::set_Image(System::Drawing::Image^)
	IL_0015:                                                                        //ldloc.0
	IL_0016:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1,System::Drawing::Image^ A_2,System::EventHandler^ A_3,System::Windows::Forms::Keys A_4)
//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldarg.2
	IL_000e:                                                                        //ldarg.s				A_3
	IL_0010:                                                                        //ldarg.s				A_4
	IL_0012:            Temp_0=this->M_x1(A_0,A_1,A_3,A_4);                         //call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32,System::String^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0017:            V_0=Temp_0;                                                 //stloc.0
	IL_0018:                                                                        //ldloc.0
	IL_0019:                                                                        //ldarg.3
	IL_001a:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Image=A_2;     //callvirt				void Reflector::ICommandBarItem::set_Image(System::Drawing::Image^)
	IL_001f:                                                                        //ldloc.0
	IL_0020:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1,System::EventHandler^ A_2)
//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x15^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x122::T_x15();                         //newobj				void Root::T_x122::T_x15::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::ICommandBarButton^>(Temp_0);       //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.2
	IL_000b:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Text=A_1;      //callvirt				void Reflector::ICommandBarItem::set_Text(System::String^)
	IL_0010:                                                                        //ldloc.0
	IL_0011:                                                                        //ldarg.3
	IL_0012:            safe_cast<Reflector::ICommandBarControl^>(V_0)->Click += A_2;//callvirt				void Reflector::ICommandBarControl::add_Click(System::EventHandler^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:                                                                        //ldloc.0
	IL_001a:            this->M_x1(A_0,safe_cast<Reflector::ICommandBarItem^>(V_0));//call				void Root::T_x122::T_x2::M_x1(System::Int32,Reflector::ICommandBarItem^)
	IL_001f:                                                                        //ldloc.0
	IL_0020:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1,System::EventHandler^ A_2,System::Windows::Forms::Keys A_3)
//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:                                                                        //ldarg.2
	IL_0006:                                                                        //ldarg.3
	IL_0007:            Temp_0=this->M_x1(A_0,A_1,A_2);                             //call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::Int32,System::String^,System::EventHandler^)
	IL_000c:            V_0=Temp_0;                                                 //stloc.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:                                                                        //ldarg.s				A_3
	IL_0010:            V_0->KeyBinding=A_3;                                        //callvirt				void Reflector::ICommandBarButton::set_KeyBinding(System::Windows::Forms::Keys)
	IL_0015:                                                                        //ldloc.0
	IL_0016:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarMenu^ Root::T_x122::T_x2::M_x1(System::Int32 A_0,System::String^ A_1,System::String^ A_2)
//Reflector::ICommandBarItemCollection^::InsertMenu by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Reflector::ICommandBarCheckBox^ Root::T_x122::T_x2::M_x1(System::String^ A_0)
//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBarCheckBox^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Drawing::Image^ A_1)
//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::EventHandler^ A_2)
//Reflector::ICommandBarItemCollection^::AddButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:                                                                        //ldarg.3
	IL_0004:                                                                        //ldc.i4.0
	IL_0005:            Temp_0=this->M_x1(A_0,A_1,A_2,safe_cast<System::Windows::Forms::Keys>(0));//call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_000a:            return Temp_0;                                              //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::EventHandler^ A_2,System::Windows::Forms::Keys A_3)
//Reflector::ICommandBarItemCollection^::AddButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x15^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x122::T_x15();                         //newobj				void Root::T_x122::T_x15::.ctor()
	IL_0008:            V_0=safe_cast<Reflector::ICommandBarButton^>(Temp_0);       //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Text=A_0;      //callvirt				void Reflector::ICommandBarItem::set_Text(System::String^)
	IL_0010:                                                                        //ldloc.0
	IL_0011:                                                                        //ldarg.3
	IL_0012:            safe_cast<Reflector::ICommandBarControl^>(V_0)->Click += A_2;//callvirt				void Reflector::ICommandBarControl::add_Click(System::EventHandler^)
	IL_0017:                                                                        //ldloc.0
	IL_0018:                                                                        //ldarg.s				A_3
	IL_001a:            V_0->KeyBinding=A_3;                                        //callvirt				void Reflector::ICommandBarButton::set_KeyBinding(System::Windows::Forms::Keys)
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldloc.0
	IL_0021:            this->M_x12(safe_cast<Reflector::ICommandBarItem^>(V_0));   //call				void Root::T_x122::T_x2::M_x12(Reflector::ICommandBarItem^)
	IL_0026:                                                                        //ldloc.0
	IL_0027:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarCheckBox^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::Windows::Forms::Keys A_2)
//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::EventHandler^ A_1)
//Reflector::ICommandBarItemCollection^::AddButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:            Temp_0=this->M_x1(A_0,A_1,safe_cast<System::Windows::Forms::Keys>(0));//call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0009:            return Temp_0;                                              //ret

}
inline Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::EventHandler^ A_1,System::Windows::Forms::Keys A_2)
//Reflector::ICommandBarItemCollection^::AddButton by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarButton^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldnull
	IL_0003:                                                                        //ldarg.2
	IL_0004:                                                                        //ldarg.3
	IL_0005:            Temp_0=this->M_x1(A_0,safe_cast<System::Drawing::Image^>(nullptr),A_1,A_2);//call				Reflector::ICommandBarButton^ Root::T_x122::T_x2::M_x1(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_000a:            return Temp_0;                                              //ret

}
inline Reflector::ICommandBarMenu^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::String^ A_1)
//Reflector::ICommandBarItemCollection^::AddMenu by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x1^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarMenu^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            Temp_0=gcnew Root::T_x122::T_x1();                          //newobj				void Root::T_x122::T_x1::.ctor()
	IL_0010:            V_0=safe_cast<Reflector::ICommandBarMenu^>(Temp_0);         //stloc.0
	IL_0011:                                                                        //ldloc.0
	IL_0012:                                                                        //ldarg.1
	IL_0013:            safe_cast<Reflector::ICommandBar^>(V_0)->Identifier=A_0;    //callvirt				void Reflector::ICommandBar::set_Identifier(System::String^)
	IL_0018:                                                                        //ldloc.0
	IL_0019:                                                                        //ldarg.2
	IL_001a:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Text=A_1;      //callvirt				void Reflector::ICommandBarItem::set_Text(System::String^)
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldloc.0
	IL_0021:            this->M_x12(safe_cast<Reflector::ICommandBarItem^>(V_0));   //call				void Root::T_x122::T_x2::M_x12(Reflector::ICommandBarItem^)
	IL_0026:                                                                        //ldloc.0
	IL_0027:            return V_0;                                                 //ret

}
inline Reflector::ICommandBarMenu^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::String^ A_1,System::Drawing::Image^ A_2)
//Reflector::ICommandBarItemCollection^::AddMenu by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBarComboBox^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Windows::Forms::ComboBox^ A_1)
//Reflector::ICommandBarItemCollection^::AddComboBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::ICommandBarCheckBox^ Root::T_x122::T_x2::M_x1(System::String^ A_0,System::Windows::Forms::Keys A_1)
//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x122::T_x2::M_x12(Reflector::ICommandBarItem^ A_0)
//Reflector::ICommandBarItemCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::Menu^ Temp_2 = nullptr;
	System::Windows::Forms::Menu::MenuItemCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	//local variables.
	System::Windows::Forms::MenuItem^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0045;case 1:goto IL_006b;case 2:goto IL_0032;};//switch				(IL_0045,IL_006b,IL_0032)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0026:                                                                        //pop
	IL_0027:                                                                        //ldc.i4				0x2
	IL_002c:            V_1=2;                                                      //stloc				V_1
	IL_0030:            /*goto IL_0002;*/goto IL_0032;                              //br.s				IL_0002
	IL_0032:                                                                        //ldarg.1
	IL_0033:                                                                        //isinst				System::Windows::Forms::MenuItem
	IL_0038:            if(dynamic_cast<System::Windows::Forms::MenuItem^>(A_0)==nullptr)goto IL_006d;//brfalse.s				IL_006d
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_1=0;                                                      //stloc				V_1
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:            goto IL_0047;                                               //br.s				IL_0047
	IL_0047:                                                                        //ldarg.1
	IL_0048:                                                                        //castclass				System::Windows::Forms::MenuItem
	IL_004d:            V_0=safe_cast<System::Windows::Forms::MenuItem^>(A_0);      //stloc.0
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_2=this->F_x1;                                          //ldfld				System::Windows::Forms::Menu^ Root::T_x122::T_x2 F_x1
	IL_0054:            Temp_3=Temp_2->MenuItems;                                   //callvirt				System::Windows::Forms::Menu::MenuItemCollection^ System::Windows::Forms::Menu::get_MenuItems()
	IL_0059:                                                                        //ldloc.0
	IL_005a:            Temp_4=Temp_3->Add(V_0);                                    //callvirt				System::Int32 System::Windows::Forms::Menu::MenuItemCollection::Add(System::Windows::Forms::MenuItem^)
	IL_005f:                                                                        //pop
	IL_0060:                                                                        //ldc.i4				0x1
	IL_0065:            V_1=1;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_006d;                                               //br.s				IL_006d
	IL_006d:            return;                                                     //ret

}
inline void Root::T_x122::T_x2::M_x12(System::Int32 A_0)
//Reflector::ICommandBarItemCollection^::RemoveAt by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Windows::Forms::Menu^ Temp_1 = nullptr;
	System::Windows::Forms::Menu::MenuItemCollection^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->RemoveAt(A_0);                                      //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x1;                                          //ldfld				System::Windows::Forms::Menu^ Root::T_x122::T_x2 F_x1
	IL_0012:            Temp_2=Temp_1->MenuItems;                                   //callvirt				System::Windows::Forms::Menu::MenuItemCollection^ System::Windows::Forms::Menu::get_MenuItems()
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_2->RemoveAt(A_0);                                      //callvirt				void System::Windows::Forms::Menu::MenuItemCollection::RemoveAt(System::Int32)
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x122::T_x2::M_x13(Reflector::ICommandBarItem^ A_0)
//Reflector::ICommandBarItemCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Windows::Forms::Menu^ Temp_1 = nullptr;
	System::Windows::Forms::Menu::MenuItemCollection^ Temp_2 = nullptr;
	//local variables.
	System::Windows::Forms::MenuItem^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_002e;case 1:goto IL_0071;case 2:goto IL_0041;};//switch				(IL_002e,IL_0071,IL_0041)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_0023:                                                                        //ldc.i4				0x0
	IL_0028:            V_1=0;                                                      //stloc				V_1
	IL_002c:            /*goto IL_0002;*/goto IL_002e;                              //br.s				IL_0002
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //isinst				System::Windows::Forms::MenuItem
	IL_0034:            if(dynamic_cast<System::Windows::Forms::MenuItem^>(A_0)==nullptr)goto IL_0073;//brfalse.s				IL_0073
	IL_0036:                                                                        //ldc.i4				0x2
	IL_003b:            V_1=2;                                                      //stloc				V_1
	IL_003f:            /*goto IL_0002;*/goto IL_0041;                              //br.s				IL_0002
	IL_0041:            goto IL_0043;                                               //br.s				IL_0043
	IL_0043:                                                                        //ldc.i4.2
	IL_0044:                                                                        //dup
	IL_0045:                                                                        //dup
	IL_0046:                                                                        //ldc.i4.4
	IL_0047:                                                                        //add
	IL_0048:                                                                        //bgt				IL_0044
	IL_004d:                                                                        //pop
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //castclass				System::Windows::Forms::MenuItem
	IL_0054:            V_0=safe_cast<System::Windows::Forms::MenuItem^>(A_0);      //stloc.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_1=this->F_x1;                                          //ldfld				System::Windows::Forms::Menu^ Root::T_x122::T_x2 F_x1
	IL_005b:            Temp_2=Temp_1->MenuItems;                                   //callvirt				System::Windows::Forms::Menu::MenuItemCollection^ System::Windows::Forms::Menu::get_MenuItems()
	IL_0060:                                                                        //ldloc.0
	IL_0061:            Temp_2->Remove(V_0);                                        //callvirt				void System::Windows::Forms::Menu::MenuItemCollection::Remove(System::Windows::Forms::MenuItem^)
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_1=1;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_0073;                                               //br.s				IL_0073
	IL_0073:            return;                                                     //ret

}
inline Reflector::ICommandBarSeparator^ Root::T_x122::T_x2::M_x2()
//Reflector::ICommandBarItemCollection^::AddSeparator by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x5^ Temp_0 = nullptr;
	//local variables.
	Reflector::ICommandBarSeparator^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x122::T_x5();                          //newobj				void Root::T_x122::T_x5::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::ICommandBarSeparator^>(Temp_0);    //stloc.0
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            this->M_x12(safe_cast<Reflector::ICommandBarItem^>(V_0));   //call				void Root::T_x122::T_x2::M_x12(Reflector::ICommandBarItem^)
	IL_000d:                                                                        //ldloc.0
	IL_000e:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x122::T_x2::M_x2(Reflector::ICommandBarItem^ A_0)
//Reflector::ICommandBarItemCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline Reflector::ICommandBarSeparator^ Root::T_x122::T_x2::M_x2(System::Int32 A_0)
//Reflector::ICommandBarItemCollection^::InsertSeparator by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x5^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	//local variables.
	Reflector::ICommandBarSeparator^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x122::T_x5();                          //newobj				void Root::T_x122::T_x5::.ctor()
	IL_0005:            V_0=safe_cast<Reflector::ICommandBarSeparator^>(Temp_0);    //stloc.0
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_1=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //ldloc.0
	IL_000e:            Temp_1->Insert(A_0,safe_cast<System::Object^>(V_0));        //callvirt				void System::Collections::ArrayList::Insert(System::Int32,System::Object^)
	IL_0013:                                                                        //ldloc.0
	IL_0014:            return V_0;                                                 //ret

}
inline System::Int32 Root::T_x122::T_x2::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x122::T_x2 F_x2
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x122::T_x2::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x122::T_x2::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x122::T_x13::T_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::MenuItem();*/                     //call				void System::Windows::Forms::MenuItem::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x122::T_x13::T_x13(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::MenuItem();*/                     //call				void System::Windows::Forms::MenuItem::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->Text=A_0;                                             //call				void System::Windows::Forms::MenuItem::set_Text(System::String^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::M_x1(System::Boolean A_0)
//Reflector::ICommandBarItem^::set_Visible by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_1=10;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0042;case 1:goto IL_0014;case 2:goto IL_006f;};//switch				(IL_0042,IL_0014,IL_006f)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_2=this->Visible;                                       //call				System::Boolean System::Windows::Forms::MenuItem::get_Visible()
	IL_0035:            if(A_0==Temp_2)goto IL_0071;                                //beq.s				IL_0071
	IL_0037:                                                                        //ldc.i4				0x0
	IL_003c:            V_0=0;                                                      //stloc				V_0
	IL_0040:            /*goto IL_0016;*/goto IL_0042;                              //br.s				IL_0016
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldarg.1
	IL_0046:            System::Windows::Forms::MenuItem::Visible=A_0;              //call				void System::Windows::Forms::MenuItem::set_Visible(System::Boolean)
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldstr				L"\x7E27\x4329\x5F2B\x472D\x522F\x5E31\x5133"
	IL_0051:                                                                        //ldloc				V_1
	IL_0055:            Temp_0=a(L"\x7E27\x4329\x5F2B\x472D\x522F\x5E31\x5133",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005a:            Temp_1=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_005f:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x122::T_x13::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_0=2;                                                      //stloc				V_0
	IL_006d:            /*goto IL_0016;*/goto IL_006f;                              //br.s				IL_0016
	IL_006f:            goto IL_0071;                                               //br.s				IL_0071
	IL_0071:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::ComponentModel::PropertyChangedEventHandler::Invoke(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::M_x1(System::Drawing::Image^ A_0)
//Reflector::ICommandBarItem^::set_Image by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_1 = nullptr;
	System::Drawing::Image^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_1=10;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_003f;case 1:goto IL_0014;case 2:goto IL_006f;};//switch				(IL_003f,IL_0014,IL_006f)
	IL_002b:                                                                        //ldarg.1
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_2=this->F_x12;                                         //ldfld				System::Drawing::Image^ Root::T_x122::T_x13 F_x12
	IL_0032:            if(A_0==Temp_2)goto IL_0071;                                //beq.s				IL_0071
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_0=0;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0016;*/goto IL_003f;                              //br.s				IL_0016
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            this->F_x12=A_0;                                            //stfld				System::Drawing::Image^ Root::T_x122::T_x13 F_x12
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //ldstr				L"\x6127\x4729\x4D2B\x492D\x552F"
	IL_004e:                                                                        //ldloc				V_1
	IL_0052:            Temp_0=a(L"\x6127\x4729\x4D2B\x492D\x552F",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:            Temp_1=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_005c:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x122::T_x13::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0061:            goto IL_0064;                                               //br.s				IL_0064
	IL_0063:                                                                        //break
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_0=2;                                                      //stloc				V_0
	IL_006d:            /*goto IL_0016;*/goto IL_006f;                              //br.s				IL_0016
	IL_006f:            goto IL_0071;                                               //br.s				IL_0071
	IL_0071:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::M_x1(System::Object^ A_0)
//Reflector::ICommandBarItem^::set_Value by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				System::Object^ Root::T_x122::T_x13 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::M_x1(System::String^ A_0)
//Reflector::ICommandBarItem^::set_Text by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_1=6;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_0=2;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0047;case 1:goto IL_0074;case 2:goto IL_0014;};//switch				(IL_0047,IL_0074,IL_0014)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_2=this->Text;                                          //call				System::String^ System::Windows::Forms::MenuItem::get_Text()
	IL_0035:            Temp_3=(A_0 != Temp_2);                                     //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_003a:            if(!Temp_3)goto IL_0076;                                    //brfalse.s				IL_0076
	IL_003c:                                                                        //ldc.i4				0x0
	IL_0041:            V_0=0;                                                      //stloc				V_0
	IL_0045:            /*goto IL_0016;*/goto IL_0047;                              //br.s				IL_0016
	IL_0047:            goto IL_0049;                                               //br.s				IL_0049
	IL_0049:                                                                        //ldarg.0
	IL_004a:                                                                        //ldarg.1
	IL_004b:            System::Windows::Forms::MenuItem::Text=A_0;                 //call				void System::Windows::Forms::MenuItem::set_Text(System::String^)
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldstr				L"\x7023\x4325\x5027\x5E29"
	IL_0056:                                                                        //ldloc				V_1
	IL_005a:            Temp_0=a(L"\x7023\x4325\x5027\x5E29",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:            Temp_1=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_0064:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x122::T_x13::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0069:                                                                        //ldc.i4				0x1
	IL_006e:            V_0=1;                                                      //stloc				V_0
	IL_0072:            /*goto IL_0016;*/goto IL_0074;                              //br.s				IL_0016
	IL_0074:            goto IL_0076;                                               //br.s				IL_0076
	IL_0076:            return;                                                     //ret

}
inline System::Boolean Root::T_x122::T_x13::M_x12()
//Reflector::ICommandBarItem^::get_Visible by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::MenuItem::Visible;           //call				System::Boolean System::Windows::Forms::MenuItem::get_Visible()
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Drawing::Image^ Root::T_x122::T_x13::M_x13()
//Reflector::ICommandBarItem^::get_Image by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Image^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Drawing::Image^ Root::T_x122::T_x13 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x122::T_x13::M_x2(System::Boolean A_0)
//Reflector::ICommandBarItem^::set_Enabled by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::ComponentModel::PropertyChangedEventArgs^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_1=16;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_006c;case 1:goto IL_0014;case 2:goto IL_003f;};//switch				(IL_006c,IL_0014,IL_003f)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_2=this->Enabled;                                       //call				System::Boolean System::Windows::Forms::MenuItem::get_Enabled()
	IL_0031:                                                                        //ldarg.1
	IL_0032:            if(Temp_2==A_0)goto IL_0079;                                //beq.s				IL_0079
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_0=2;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0016;*/goto IL_003f;                              //br.s				IL_0016
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            System::Windows::Forms::MenuItem::Enabled=A_0;              //call				void System::Windows::Forms::MenuItem::set_Enabled(System::Boolean)
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //ldstr				L"\x6B2D\x5E2F\x5331\x5633\x5A35\x5D37\x5E39"
	IL_004e:                                                                        //ldloc				V_1
	IL_0052:            Temp_0=a(L"\x6B2D\x5E2F\x5331\x5633\x5A35\x5D37\x5E39",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:            Temp_1=gcnew System::ComponentModel::PropertyChangedEventArgs(Temp_0);//newobj				void System::ComponentModel::PropertyChangedEventArgs::.ctor(System::String^)
	IL_005c:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x122::T_x13::M_x1(System::ComponentModel::PropertyChangedEventArgs^)
	IL_0061:                                                                        //ldc.i4				0x0
	IL_0066:            V_0=0;                                                      //stloc				V_0
	IL_006a:            /*goto IL_0016;*/goto IL_006c;                              //br.s				IL_0016
	IL_006c:                                                                        //ldc.i4.4
	IL_006d:                                                                        //dup
	IL_006e:                                                                        //dup
	IL_006f:                                                                        //ldc.i4.2
	IL_0070:                                                                        //sub
	IL_0071:                                                                        //blt				IL_006d
	IL_0076:                                                                        //pop
	IL_0077:            goto IL_0079;                                               //br.s				IL_0079
	IL_0079:            return;                                                     //ret

}
inline System::String^ Root::T_x122::T_x13::M_x5()
//Reflector::ICommandBarItem^::get_Text by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::MenuItem::Text;              //call				System::String^ System::Windows::Forms::MenuItem::get_Text()
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Object^ Root::T_x122::T_x13::M_x8()
//Reflector::ICommandBarItem^::get_Value by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Object^ Root::T_x122::T_x13 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x122::T_x13::M_x9()
//Reflector::ICommandBarItem^::get_Enabled by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::MenuItem::Enabled;           //call				System::Boolean System::Windows::Forms::MenuItem::get_Enabled()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x122::T_x13::PropertyChanged::add(System::ComponentModel::PropertyChangedEventHandler^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(value));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x122::T_x13::PropertyChanged::remove(System::ComponentModel::PropertyChangedEventHandler^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::PropertyChangedEventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(value));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::ComponentModel::PropertyChangedEventHandler
	IL_0012:            this->F_x1=safe_cast<System::ComponentModel::PropertyChangedEventHandler^>(Temp_1);//stfld				System::ComponentModel::PropertyChangedEventHandler^ Root::T_x122::T_x13 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x122::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x12=safe_cast<System::String^>(nullptr);            //stfld				System::String^ Root::T_x122::T_x1 F_x12
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*Root::T_x122::T_x13();*/                                  //call				void Root::T_x122::T_x13::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_0=gcnew Root::T_x122::T_x2(safe_cast<System::Windows::Forms::Menu^>(this));//newobj				void Root::T_x122::T_x2::.ctor(System::Windows::Forms::Menu^)
	IL_0014:            this->F_x2=safe_cast<Reflector::ICommandBarItemCollection^>(Temp_0);//stfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x1 F_x2
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x122::T_x1::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::MenuItem^::OnPopup by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::MenuItem::OnPopup(A_0);             //call				void System::Windows::Forms::MenuItem::OnPopup(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldarg.1
	IL_0009:            this->M_x2(A_0);                                            //callvirt				void Root::T_x122::T_x1::M_x2(System::EventArgs^)
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x122::T_x1::M_x1(System::EventHandler^ A_0)
//Reflector::ICommandBarMenu^::add_DropDown by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x122::T_x1::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x122::T_x1::M_x2(System::EventHandler^ A_0)
//Reflector::ICommandBarMenu^::remove_DropDown by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x122::T_x1 F_x1
	IL_0017:            return;                                                     //ret

}
inline System::String^ Root::T_x122::T_x1::Identifier::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x122::T_x1 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x122::T_x1::Identifier::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=value;                                          //stfld				System::String^ Root::T_x122::T_x1 F_x12
	IL_0007:            return;                                                     //ret

}
inline Reflector::ICommandBarItemCollection^ Root::T_x122::T_x1::Items::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x1 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Root::T_x122::T_x5::T_x5():Root::T_x122::T_x13(Temp_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldstr				L"\x0F21"
	IL_000f:                                                                        //ldloc				V_0
	IL_0013:            Temp_0=a(L"\x0F21",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0018:                                                                        //call				void Root::T_x122::T_x13::.ctor(System::String^)
	IL_001d:            return;                                                     //ret

}
inline Root::T_x122::T_x9::T_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x122::T_x13();*/                                  //call				void Root::T_x122::T_x13::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x122::T_x9::M_x1(System::EventHandler^ A_0)
//Reflector::ICommandBarControl^::remove_Click by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::MenuItem::Click -= A_0;             //call				void System::Windows::Forms::MenuItem::remove_Click(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x122::T_x9::M_x2()
//Reflector::ICommandBarControl^::PerformClick by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            System::Windows::Forms::MenuItem::PerformClick();           //call				void System::Windows::Forms::MenuItem::PerformClick()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x122::T_x9::M_x2(System::EventHandler^ A_0)
//Reflector::ICommandBarControl^::add_Click by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::MenuItem::Click += A_0;             //call				void System::Windows::Forms::MenuItem::add_Click(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline Root::T_x122::T_x15::T_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x122::T_x9();*/                                   //call				void Root::T_x122::T_x9::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Windows::Forms::Keys Root::T_x122::T_x15::M_x1()
//Reflector::ICommandBarButton^::get_KeyBinding by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Shortcut Temp_0 = (System::Windows::Forms::Shortcut)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Shortcut;                                      //call				System::Windows::Forms::Shortcut System::Windows::Forms::MenuItem::get_Shortcut()
	IL_0006:            return safe_cast<System::Windows::Forms::Keys>(Temp_0);     //ret

}
inline void Root::T_x122::T_x15::M_x1(System::EventHandler^ A_0)
//Reflector::ICommandBarControl^::remove_Click by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::MenuItem::Click -= A_0;             //call				void System::Windows::Forms::MenuItem::remove_Click(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x122::T_x15::M_x1(System::Windows::Forms::Keys A_0)
//Reflector::ICommandBarButton^::set_KeyBinding by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0049;case 1:goto IL_005d;case 2:goto IL_0027;};//switch				(IL_0049,IL_005d,IL_0027)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.1
	IL_001b:            V_0=safe_cast<System::Int32>(A_0);                          //stloc.0
	IL_001c:                                                                        //ldc.i4				0x2
	IL_0021:            V_1=2;                                                      //stloc				V_1
	IL_0025:            /*goto IL_0002;*/goto IL_0027;                              //br.s				IL_0002
	IL_0027:                                                                        //ldtoken				System::Windows::Forms::Shortcut
	IL_002c:            Temp_0=System::Windows::Forms::Shortcut::typeid;            //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0031:                                                                        //ldloc.0
	IL_0032:                                                                        //box				System::Int32
	IL_0037:            Temp_1=System::Enum::IsDefined(Temp_0,safe_cast<System::Object^>(V_0));//call				System::Boolean System::Enum::IsDefined(System::Type^,System::Object^)
	IL_003c:            if(!Temp_1)goto IL_005f;                                    //brfalse.s				IL_005f
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_1=0;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_004b;                                               //br.s				IL_004b
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldloc.0
	IL_004d:            this->Shortcut=safe_cast<System::Windows::Forms::Shortcut>(V_0);//call				void System::Windows::Forms::MenuItem::set_Shortcut(System::Windows::Forms::Shortcut)
	IL_0052:                                                                        //ldc.i4				0x1
	IL_0057:            V_1=1;                                                      //stloc				V_1
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:            goto IL_005f;                                               //br.s				IL_005f
	IL_005f:            return;                                                     //ret

}
inline void Root::T_x122::T_x15::M_x2(System::EventHandler^ A_0)
//Reflector::ICommandBarControl^::add_Click by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::MenuItem::Click += A_0;             //call				void System::Windows::Forms::MenuItem::add_Click(System::EventHandler^)
	IL_0007:            return;                                                     //ret

}
inline Root::T_x122::T_x4::T_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x122::T_x2^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ContextMenu();*/                  //call				void System::Windows::Forms::ContextMenu::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x122::T_x2(safe_cast<System::Windows::Forms::Menu^>(this));//newobj				void Root::T_x122::T_x2::.ctor(System::Windows::Forms::Menu^)
	IL_000d:            this->F_x2=safe_cast<Reflector::ICommandBarItemCollection^>(Temp_0);//stfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x4 F_x2
	IL_0012:            return;                                                     //ret

}
inline System::String^ Root::T_x122::T_x4::M_x1()
//Reflector::ICommandBar^::get_Identifier by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x122::T_x4 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x122::T_x4::M_x1(System::String^ A_0)
//Reflector::ICommandBar^::set_Identifier by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x122::T_x4 F_x1
	IL_0007:            return;                                                     //ret

}
inline Reflector::ICommandBarItemCollection^ Root::T_x122::T_x4::M_x2()
//Reflector::ICommandBar^::get_Items by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::ICommandBarItemCollection^ Root::T_x122::T_x4 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
