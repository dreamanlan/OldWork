#include "global_xref.h"

inline Root::T_x121::T_x121(array<Reflector::CodeModel::IAssembly^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=gcnew Root::T_x133(A_0);                             //newobj				void Root::T_x133::.ctor(array<Reflector::CodeModel::IAssembly^>^)
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldc.i4.1
	IL_0014:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x121 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x121 F_x13
	IL_0020:                                                                        //ldarg.0
	IL_0021:            this->M_x12();                                              //call				void Root::T_x121::M_x12()
	IL_0026:            return;                                                     //ret

}
inline Root::T_x121::T_x121(array<Reflector::CodeModel::IAssembly^>^ A_0,System::Boolean A_1,System::Boolean A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=gcnew Root::T_x133(A_0);                             //newobj				void Root::T_x133::.ctor(array<Reflector::CodeModel::IAssembly^>^)
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.2
	IL_0014:            this->F_x12=A_1;                                            //stfld				System::Boolean Root::T_x121 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.3
	IL_001b:            this->F_x13=A_2;                                            //stfld				System::Boolean Root::T_x121 F_x13
	IL_0020:                                                                        //ldarg.0
	IL_0021:            this->M_x12();                                              //call				void Root::T_x121::M_x12()
	IL_0026:            return;                                                     //ret

}
inline Root::T_x121::T_x121(array<Reflector::CodeModel::IModule^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=gcnew Root::T_x133(A_0);                             //newobj				void Root::T_x133::.ctor(array<Reflector::CodeModel::IModule^>^)
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldc.i4.1
	IL_0014:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x121 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x121 F_x13
	IL_0020:                                                                        //ldarg.0
	IL_0021:            this->M_x12();                                              //call				void Root::T_x121::M_x12()
	IL_0026:            return;                                                     //ret

}
inline Root::T_x121::T_x121(array<Reflector::CodeModel::ITypeDeclaration^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_0=gcnew Root::T_x133(A_0);                             //newobj				void Root::T_x133::.ctor(array<Reflector::CodeModel::ITypeDeclaration^>^)
	IL_000d:            this->F_x1=Temp_0;                                          //stfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldc.i4.1
	IL_0014:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x121 F_x12
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldc.i4.1
	IL_001b:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x121 F_x13
	IL_0020:                                                                        //ldarg.0
	IL_0021:            this->M_x12();                                              //call				void Root::T_x121::M_x12()
	IL_0026:            return;                                                     //ret

}
inline System::Int32 Root::T_x121::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0006:            Temp_1=Temp_0->M_x1();                                      //callvirt				System::Int32 Root::T_x133::M_x1()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x121::M_x12()
//System::Collections::IEnumerator^::Reset by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x133^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x133^ Root::T_x121 F_x1
	IL_0006:            Temp_0->M_x12();                                            //callvirt				void Root::T_x133::M_x12()
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldnull
	IL_000d:            this->F_x2=safe_cast<System::Collections::IEnumerator^>(nullptr);//stfld				System::Collections::IEnumerator^ Root::T_x121 F_x2
	IL_0012:            return;                                                     //ret

}
inline System::Boolean Root::T_x121::M_x13()
//System::Collections::IEnumerator^::MoveNext by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFieldDeclarationCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_1 = nullptr;
	Reflector::CodeModel::IPropertyDeclarationCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IEventDeclarationCollection^ Temp_3 = nullptr;
	Root::T_x133^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Int32 Temp_6 = 0;
	System::Boolean Temp_7 = false;
	System::Collections::IEnumerator^ Temp_8 = nullptr;
	Root::T_x133^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Collections::ArrayList^ Temp_11 = nullptr;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Collections::IEnumerator^ Temp_14 = nullptr;
	System::Boolean Temp_15 = false;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_2=9;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_004e;                                               //br.s				IL_004e
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0181;case 1:goto IL_01c2;case 2:goto IL_01a7;case 3:goto IL_0116;case 4:goto IL_00da;case 5:goto IL_0106;case 6:goto IL_0153;case 7:goto IL_0191;case 8:goto IL_0134;case 9:goto IL_000b;case 10:goto IL_00ed;case 11:goto IL_00c1;case 12:goto IL_0163;case 13:goto IL_0093;};//switch				(IL_0181,IL_01c2,IL_01a7,IL_0116,IL_00da,IL_0106,IL_0153,IL_0191,IL_0134,IL_000b,IL_00ed,IL_00c1,IL_0163,IL_0093)
	IL_004e:            goto IL_00df;                                               //br				IL_00df
	IL_0053:                                                                        //ldc.i4.0
	IL_0054:            return false;                                               //ret
	IL_0055:                                                                        //ldloc.1
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_0=V_0->Fields;                                         //callvirt				Reflector::CodeModel::IFieldDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Fields()
	IL_005c:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_0));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0061:                                                                        //ldloc.1
	IL_0062:                                                                        //ldloc.0
	IL_0063:            Temp_1=V_0->Methods;                                        //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_0068:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_1));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_006d:                                                                        //ldloc.1
	IL_006e:                                                                        //ldloc.0
	IL_006f:            Temp_2=V_0->Properties;                                     //callvirt				Reflector::CodeModel::IPropertyDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Properties()
	IL_0074:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_2));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0079:                                                                        //ldloc.1
	IL_007a:                                                                        //ldloc.0
	IL_007b:            Temp_3=V_0->Events;                                         //callvirt				Reflector::CodeModel::IEventDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Events()
	IL_0080:            V_1->AddRange(safe_cast<System::Collections::ICollection^>(Temp_3));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0085:                                                                        //ldc.i4				0xd
	IL_008a:            V_2=13;                                                     //stloc				V_2
	IL_008e:            /*goto IL_000d;*/goto IL_0093;                              //br				IL_000d
	IL_0093:            goto IL_0139;                                               //br				IL_0139
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x133^ Root::T_x121 F_x1
	IL_009e:            Temp_10=Temp_9->M_x2();                                     //callvirt				System::Object^ Root::T_x133::M_x2()
	IL_00a3:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_00a8:            V_0=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_10);//stloc.0
	IL_00a9:                                                                        //ldc.i4.0
	IL_00aa:            Temp_11=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_00af:            V_1=Temp_11;                                                //stloc.1
	IL_00b0:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_00b2:                                                                        //break
	IL_00b3:                                                                        //ldc.i4				0xb
	IL_00b8:            V_2=11;                                                     //stloc				V_2
	IL_00bc:            /*goto IL_000d;*/goto IL_00c1;                              //br				IL_000d
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:            Temp_13=this->F_x12;                                        //ldfld				System::Boolean Root::T_x121 F_x12
	IL_00c7:            if(!Temp_13)goto IL_0183;                                   //brfalse				IL_0183
	IL_00cc:                                                                        //ldc.i4				0x4
	IL_00d1:            V_2=4;                                                      //stloc				V_2
	IL_00d5:            /*goto IL_000d;*/goto IL_00da;                              //br				IL_000d
	IL_00da:            goto IL_01ac;                                               //br				IL_01ac
	IL_00df:                                                                        //ldc.i4				0xa
	IL_00e4:            V_2=10;                                                     //stloc				V_2
	IL_00e8:            /*goto IL_000d;*/goto IL_00ed;                              //br				IL_000d
	IL_00ed:                                                                        //ldarg.0
	IL_00ee:            Temp_12=this->F_x2;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x121 F_x2
	IL_00f3:            if(Temp_12==nullptr)goto IL_0108;                           //brfalse				IL_0108
	IL_00f8:                                                                        //ldc.i4				0x5
	IL_00fd:            V_2=5;                                                      //stloc				V_2
	IL_0101:            /*goto IL_000d;*/goto IL_0106;                              //br				IL_000d
	IL_0106:            goto IL_0155;                                               //br.s				IL_0155
	IL_0108:                                                                        //ldc.i4				0x3
	IL_010d:            V_2=3;                                                      //stloc				V_2
	IL_0111:            /*goto IL_000d;*/goto IL_0116;                              //br				IL_000d
	IL_0116:                                                                        //ldarg.0
	IL_0117:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x133^ Root::T_x121 F_x1
	IL_011c:            Temp_5=Temp_4->M_x13();                                     //callvirt				System::Boolean Root::T_x133::M_x13()
	IL_0121:            if(!Temp_5)goto IL_0053;                                    //brfalse				IL_0053
	IL_0126:                                                                        //ldc.i4				0x8
	IL_012b:            V_2=8;                                                      //stloc				V_2
	IL_012f:            /*goto IL_000d;*/goto IL_0134;                              //br				IL_000d
	IL_0134:            goto IL_0098;                                               //br				IL_0098
	IL_0139:                                                                        //ldarg.0
	IL_013a:                                                                        //ldloc.1
	IL_013b:            Temp_8=V_1->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_0140:            this->F_x2=Temp_8;                                          //stfld				System::Collections::IEnumerator^ Root::T_x121 F_x2
	IL_0145:                                                                        //ldc.i4				0x6
	IL_014a:            V_2=6;                                                      //stloc				V_2
	IL_014e:            /*goto IL_000d;*/goto IL_0153;                              //br				IL_000d
	IL_0153:            goto IL_00df;                                               //br.s				IL_00df
	IL_0155:                                                                        //ldc.i4				0xc
	IL_015a:            V_2=12;                                                     //stloc				V_2
	IL_015e:            /*goto IL_000d;*/goto IL_0163;                              //br				IL_000d
	IL_0163:                                                                        //ldarg.0
	IL_0164:            Temp_14=this->F_x2;                                         //ldfld				System::Collections::IEnumerator^ Root::T_x121 F_x2
	IL_0169:            Temp_15=Temp_14->MoveNext();                                //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_016e:            if(!Temp_15)goto IL_0108;                                   //brfalse				IL_0108
	IL_0173:                                                                        //ldc.i4				0x0
	IL_0178:            V_2=0;                                                      //stloc				V_2
	IL_017c:            /*goto IL_000d;*/goto IL_0181;                              //br				IL_000d
	IL_0181:            goto IL_01c4;                                               //br.s				IL_01c4
	IL_0183:                                                                        //ldc.i4				0x7
	IL_0188:            V_2=7;                                                      //stloc				V_2
	IL_018c:            /*goto IL_000d;*/goto IL_0191;                              //br				IL_000d
	IL_0191:                                                                        //ldarg.0
	IL_0192:            Temp_7=this->F_x13;                                         //ldfld				System::Boolean Root::T_x121 F_x13
	IL_0197:            if(!Temp_7)goto IL_0139;                                    //brfalse.s				IL_0139
	IL_0199:                                                                        //ldc.i4				0x2
	IL_019e:            V_2=2;                                                      //stloc				V_2
	IL_01a2:            /*goto IL_000d;*/goto IL_01a7;                              //br				IL_000d
	IL_01a7:            goto IL_0055;                                               //br				IL_0055
	IL_01ac:                                                                        //ldloc.1
	IL_01ad:                                                                        //ldloc.0
	IL_01ae:            Temp_6=V_1->Add(safe_cast<System::Object^>(V_0));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01b3:                                                                        //pop
	IL_01b4:                                                                        //ldc.i4				0x1
	IL_01b9:            V_2=1;                                                      //stloc				V_2
	IL_01bd:            /*goto IL_000d;*/goto IL_01c2;                              //br				IL_000d
	IL_01c2:            goto IL_0183;                                               //br.s				IL_0183
	IL_01c4:                                                                        //ldc.i4.1
	IL_01c5:            return true;                                                //ret

}
inline System::Object^ Root::T_x121::M_x2()
//System::Collections::IEnumerator^::get_Current by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IEnumerator^ Root::T_x121 F_x2
	IL_0006:            Temp_1=Temp_0->Current;                                     //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_000b:            return Temp_1;                                              //ret

}
