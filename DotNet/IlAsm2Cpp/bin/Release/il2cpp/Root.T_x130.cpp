#include "global_xref.h"

inline Root::T_x130::T_x130()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x129();*/                                         //call				void Root::T_x129::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:            this->F_x1=true;                                            //stfld				System::Boolean Root::T_x130 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            this->F_x2=false;                                           //stfld				System::Boolean Root::T_x130 F_x2
	IL_0014:            return;                                                     //ret

}
inline Root::T_x130::T_x130(System::Boolean A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x129();*/                                         //call				void Root::T_x129::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::Boolean Root::T_x130 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::Boolean Root::T_x130 F_x2
	IL_0014:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x130::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Root::T_x181^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
	Root::T_x185^ Temp_4 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_000f:            Temp_2=gcnew Root::T_x181(Temp_0,Temp_1);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_0014:                                                                        //ldarg.1
	IL_0015:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^)
	IL_001a:            V_0=Temp_3;                                                 //stloc.0
	IL_001b:            Temp_4=gcnew Root::T_x185();                                //newobj				void Root::T_x185::.ctor()
	IL_0020:                                                                        //ldloc.0
	IL_0021:            Temp_5=Temp_4->M_x1(V_0);                                   //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x129::M_x1(Reflector::CodeModel::IAssembly^)
	IL_0026:            V_0=Temp_5;                                                 //stloc.0
	IL_0027:                                                                        //ldloc.0
	IL_0028:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IEventDeclaration^ Root::T_x130::M_x1(Reflector::CodeModel::IEventDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Root::T_x181^ Temp_2 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_12 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_13 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_14 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Object^ Temp_17 = nullptr;
	Root::T_x185^ Temp_18 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_19 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_22 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_23 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_24 = nullptr;
	Reflector::CodeModel::IType^ Temp_25 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_26 = nullptr;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0033;                                               //br.s				IL_0033
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_00ba;case 1:goto IL_010c;case 2:goto IL_0149;case 3:goto IL_018e;case 4:goto IL_0094;case 5:goto IL_0122;case 6:goto IL_0175;case 7:goto IL_00f1;case 8:goto IL_00a4;case 9:goto IL_0061;};//switch				(IL_00ba,IL_010c,IL_0149,IL_018e,IL_0094,IL_0122,IL_0175,IL_00f1,IL_00a4,IL_0061)
	IL_0033:                                                                        //ldc.i4.5
	IL_0034:                                                                        //dup
	IL_0035:                                                                        //dup
	IL_0036:                                                                        //ldc.i4.6
	IL_0037:                                                                        //sub
	IL_0038:                                                                        //blt				IL_0034
	IL_003d:                                                                        //pop
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_004a:            Temp_2=gcnew Root::T_x181(Temp_0,Temp_1);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_004f:                                                                        //ldarg.1
	IL_0050:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0055:            V_0=Temp_3;                                                 //stloc.0
	IL_0056:                                                                        //ldc.i4				0x9
	IL_005b:            V_1=9;                                                      //stloc				V_1
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:                                                                        //ldloc.0
	IL_0062:                                                                        //ldarg.0
	IL_0063:            Temp_16=this->F_x13;                                        //ldfld				System::Object^ Root::T_x130 F_x13
	IL_0068:            Temp_23=V_0;if(Temp_16!=nullptr)goto IL_00bc;               //brtrue.s				IL_00bc
	IL_006a:            Temp_24=Temp_23;goto IL_00f6;                               //br				IL_00f6
	IL_006f:                                                                        //ldloc.0
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldarg.1
	IL_0072:            Temp_4=A_0->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0077:            Temp_5=Temp_4->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_007c:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0081:            V_0->RemoveMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_6);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_RemoveMethod(Reflector::CodeModel::IMethodReference^)
	IL_0086:                                                                        //ldc.i4				0x4
	IL_008b:            V_1=4;                                                      //stloc				V_1
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:            goto IL_00fe;                                               //br.s				IL_00fe
	IL_0096:                                                                        //ldc.i4				0x8
	IL_009b:            V_1=8;                                                      //stloc				V_1
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:                                                                        //ldarg.1
	IL_00a5:            Temp_15=A_0->RemoveMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_00aa:            if(Temp_15==nullptr)goto IL_00fe;                           //brfalse.s				IL_00fe
	IL_00ac:                                                                        //ldc.i4				0x0
	IL_00b1:            V_1=0;                                                      //stloc				V_1
	IL_00b5:            /*goto IL_0002;*/goto IL_00ba;                              //br				IL_0002
	IL_00ba:            goto IL_006f;                                               //br.s				IL_006f
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_17=this->F_x13;                                        //ldfld				System::Object^ Root::T_x130 F_x13
	IL_00c2:                                                                        //castclass				Reflector::CodeModel::IType
	IL_00c7:            Temp_26=Temp_23;Temp_25=safe_cast<Reflector::CodeModel::IType^>(Temp_17);goto IL_014e;//br				IL_014e
	IL_00cc:                                                                        //ldloc.0
	IL_00cd:                                                                        //ldarg.0
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:            Temp_11=A_0->InvokeMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_00d4:            Temp_12=Temp_11->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_00d9:            Temp_13=Root::T_x129::M_x1(Temp_12);                        //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00de:            V_0->InvokeMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_13);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_InvokeMethod(Reflector::CodeModel::IMethodReference^)
	IL_00e3:                                                                        //ldc.i4				0x7
	IL_00e8:            V_1=7;                                                      //stloc				V_1
	IL_00ec:            /*goto IL_0002;*/goto IL_00f1;                              //br				IL_0002
	IL_00f1:            goto IL_0190;                                               //br				IL_0190
	IL_00f6:                                                                        //ldarg.1
	IL_00f7:            Temp_21=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_00fc:            Temp_26=Temp_24;Temp_25=Temp_21;goto IL_014e;               //br.s				IL_014e
	IL_00fe:                                                                        //ldc.i4				0x1
	IL_0103:            V_1=1;                                                      //stloc				V_1
	IL_0107:            /*goto IL_0002;*/goto IL_010c;                              //br				IL_0002
	IL_010c:                                                                        //ldarg.1
	IL_010d:            Temp_7=A_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_0112:            if(Temp_7==nullptr)goto IL_0190;                            //brfalse.s				IL_0190
	IL_0114:                                                                        //ldc.i4				0x5
	IL_0119:            V_1=5;                                                      //stloc				V_1
	IL_011d:            /*goto IL_0002;*/goto IL_0122;                              //br				IL_0002
	IL_0122:            goto IL_00cc;                                               //br.s				IL_00cc
	IL_0124:                                                                        //ldloc.0
	IL_0125:                                                                        //ldarg.0
	IL_0126:                                                                        //ldarg.1
	IL_0127:            Temp_8=A_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_012c:            Temp_9=Temp_8->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0131:            Temp_10=Root::T_x129::M_x1(Temp_9);                         //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0136:            V_0->AddMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_10);//callvirt				void Reflector::CodeModel::IEventDeclaration::set_AddMethod(Reflector::CodeModel::IMethodReference^)
	IL_013b:                                                                        //ldc.i4				0x2
	IL_0140:            V_1=2;                                                      //stloc				V_1
	IL_0144:            /*goto IL_0002;*/goto IL_0149;                              //br				IL_0002
	IL_0149:            goto IL_0096;                                               //br				IL_0096
	IL_014e:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_26)->DeclaringType=Temp_25;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0153:            Temp_18=gcnew Root::T_x185();                               //newobj				void Root::T_x185::.ctor()
	IL_0158:                                                                        //ldloc.0
	IL_0159:            Temp_19=Temp_18->M_x1(V_0);                                 //callvirt				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_015e:            V_0=Temp_19;                                                //stloc.0
	IL_015f:                                                                        //ldarg.0
	IL_0160:                                                                        //ldloc.0
	IL_0161:            Temp_20=Root::T_x129::M_x1(V_0);                            //call				Reflector::CodeModel::IEventDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IEventDeclaration^)
	IL_0166:            V_0=Temp_20;                                                //stloc.0
	IL_0167:                                                                        //ldc.i4				0x6
	IL_016c:            V_1=6;                                                      //stloc				V_1
	IL_0170:            /*goto IL_0002;*/goto IL_0175;                              //br				IL_0002
	IL_0175:                                                                        //ldarg.1
	IL_0176:            Temp_14=A_0->AddMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_017b:            if(Temp_14==nullptr)goto IL_0096;                           //brfalse				IL_0096
	IL_0180:                                                                        //ldc.i4				0x3
	IL_0185:            V_1=3;                                                      //stloc				V_1
	IL_0189:            /*goto IL_0002;*/goto IL_018e;                              //br				IL_0002
	IL_018e:            goto IL_0124;                                               //br.s				IL_0124
	IL_0190:                                                                        //ldloc.0
	IL_0191:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IFieldDeclaration^ Root::T_x130::M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Root::T_x181^ Temp_2 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Root::T_x185^ Temp_6 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_7 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_8 = nullptr;
	Reflector::CodeModel::IType^ Temp_9 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_11 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_14 = nullptr;
	//local variables.
	Reflector::CodeModel::IFieldDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_000f:            Temp_2=gcnew Root::T_x181(Temp_0,Temp_1);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_0014:                                                                        //ldarg.1
	IL_0015:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_001a:            V_0=Temp_3;                                                 //stloc.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_4=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_0022:            Temp_11=V_0;if(Temp_4!=nullptr)goto IL_0026;                //brtrue.s				IL_0026
	IL_0024:            Temp_12=Temp_11;goto IL_0033;                               //br.s				IL_0033
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_5=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_002c:                                                                        //castclass				Reflector::CodeModel::IType
	IL_0031:            Temp_14=Temp_11;Temp_13=safe_cast<Reflector::CodeModel::IType^>(Temp_5);goto IL_003b;//br.s				IL_003b
	IL_0033:                                                                        //ldarg.1
	IL_0034:            Temp_9=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0039:            Temp_14=Temp_12;Temp_13=Temp_9;goto IL_003b;                //br.s				IL_003b
	IL_003b:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_14)->DeclaringType=Temp_13;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0040:            Temp_6=gcnew Root::T_x185();                                //newobj				void Root::T_x185::.ctor()
	IL_0045:                                                                        //ldloc.0
	IL_0046:            Temp_7=Temp_6->M_x1(V_0);                                   //callvirt				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_004b:            V_0=Temp_7;                                                 //stloc.0
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_8=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::IFieldDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IFieldDeclaration^)
	IL_0053:            V_0=Temp_8;                                                 //stloc.0
	IL_0054:                                                                        //ldloc.0
	IL_0055:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x130::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IType^ Temp_2 = nullptr;
	Root::T_x185^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	System::Collections::IDictionary^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Boolean Temp_8 = false;
	System::Boolean Temp_9 = false;
	Root::T_x181^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	Root::T_x187^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	System::Collections::IDictionary^ Temp_15 = nullptr;
	System::Collections::IDictionary^ Temp_16 = nullptr;
	System::Collections::IDictionary^ Temp_17 = nullptr;
	System::Object^ Temp_18 = nullptr;
	System::Collections::IDictionary^ Temp_19 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_20 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_21 = nullptr;
	Reflector::CodeModel::IType^ Temp_22 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_23 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_24 = nullptr;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0042;                                               //br.s				IL_0042
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_00b2;case 2:goto IL_0072;case 3:goto IL_00e4;case 4:goto IL_0055;case 5:goto IL_00f4;case 6:goto IL_0130;case 7:goto IL_0146;case 8:goto IL_0190;case 9:goto IL_017a;case 10:goto IL_0110;};//switch				(IL_000b,IL_00b2,IL_0072,IL_00e4,IL_0055,IL_00f4,IL_0130,IL_0146,IL_0190,IL_017a,IL_0110)
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_19=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0048:            if(Temp_19==nullptr)goto IL_0089;                           //brfalse.s				IL_0089
	IL_004a:                                                                        //ldc.i4				0x4
	IL_004f:            V_1=4;                                                      //stloc				V_1
	IL_0053:            /*goto IL_000d;*/goto IL_0055;                              //br.s				IL_000d
	IL_0055:            goto IL_00e6;                                               //br				IL_00e6
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_15=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0060:                                                                        //ldarg.1
	IL_0061:                                                                        //ldloc.0
	IL_0062:            Temp_15->Add(safe_cast<System::Object^>(A_0),safe_cast<System::Object^>(V_0));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0067:                                                                        //ldc.i4				0x2
	IL_006c:            V_1=2;                                                      //stloc				V_1
	IL_0070:            /*goto IL_000d;*/goto IL_0072;                              //br.s				IL_000d
	IL_0072:            goto IL_0195;                                               //br				IL_0195
	IL_0077:                                                                        //ldarg.0
	IL_0078:            Temp_17=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_007d:                                                                        //ldarg.1
	IL_007e:            Temp_18=Temp_17[safe_cast<System::Object^>(A_0)];           //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_0083:                                                                        //castclass				Reflector::CodeModel::IMethodDeclaration
	IL_0088:            return safe_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_18);//ret
	IL_0089:            goto IL_008c;                                               //br.s				IL_008c
	IL_008b:                                                                        //break
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_8=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_9=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_0098:            Temp_10=gcnew Root::T_x181(Temp_8,Temp_9);                  //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_009d:                                                                        //ldarg.1
	IL_009e:            Temp_11=Temp_10->M_x1(A_0);                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00a3:            V_0=Temp_11;                                                //stloc.0
	IL_00a4:                                                                        //ldc.i4				0x1
	IL_00a9:            V_1=1;                                                      //stloc				V_1
	IL_00ad:            /*goto IL_000d;*/goto IL_00b2;                              //br				IL_000d
	IL_00b2:                                                                        //ldloc.0
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_0=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_00b9:            Temp_24=V_0;if(Temp_0!=nullptr)goto IL_014b;                //brtrue				IL_014b
	IL_00be:            Temp_21=Temp_24;goto IL_0115;                               //br.s				IL_0115
	IL_00c0:            Temp_13=gcnew Root::T_x187();                               //newobj				void Root::T_x187::.ctor()
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:            Temp_14=A_0->Body;                                          //callvirt				System::Object^ Reflector::CodeModel::IMethodDeclaration::get_Body()
	IL_00cc:                                                                        //isinst				Reflector::CodeModel::IMethodBody
	IL_00d1:            Temp_13->M_x1(V_0,dynamic_cast<Reflector::CodeModel::IMethodBody^>(Temp_14));//call				void Root::T_x187::M_x1(Reflector::CodeModel::IMethodDeclaration^,Reflector::CodeModel::IMethodBody^)
	IL_00d6:                                                                        //ldc.i4				0x3
	IL_00db:            V_1=3;                                                      //stloc				V_1
	IL_00df:            /*goto IL_000d;*/goto IL_00e4;                              //br				IL_000d
	IL_00e4:            goto IL_0158;                                               //br.s				IL_0158
	IL_00e6:                                                                        //ldc.i4				0x5
	IL_00eb:            V_1=5;                                                      //stloc				V_1
	IL_00ef:            /*goto IL_000d;*/goto IL_00f4;                              //br				IL_000d
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_6=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_00fa:                                                                        //ldarg.1
	IL_00fb:            Temp_7=Temp_6->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::IDictionary::Contains(System::Object^)
	IL_0100:            if(!Temp_7)goto IL_0089;                                    //brfalse.s				IL_0089
	IL_0102:                                                                        //ldc.i4				0xa
	IL_0107:            V_1=10;                                                     //stloc				V_1
	IL_010b:            /*goto IL_000d;*/goto IL_0110;                              //br				IL_000d
	IL_0110:            goto IL_0077;                                               //br				IL_0077
	IL_0115:                                                                        //ldarg.1
	IL_0116:            Temp_2=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_011b:            Temp_23=Temp_21;Temp_22=Temp_2;goto IL_011d;                //br.s				IL_011d
	IL_011d:            Temp_23=Temp_24;Temp_22=safe_cast<Reflector::CodeModel::IType^>(Temp_1);safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_23)->DeclaringType=Temp_22;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_0122:                                                                        //ldc.i4				0x6
	IL_0127:            V_1=6;                                                      //stloc				V_1
	IL_012b:            /*goto IL_000d;*/goto IL_0130;                              //br				IL_000d
	IL_0130:                                                                        //ldarg.0
	IL_0131:            Temp_12=this->F_x1;                                         //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0136:            if(!Temp_12)goto IL_0158;                                   //brfalse.s				IL_0158
	IL_0138:                                                                        //ldc.i4				0x7
	IL_013d:            V_1=7;                                                      //stloc				V_1
	IL_0141:            /*goto IL_000d;*/goto IL_0146;                              //br				IL_000d
	IL_0146:            goto IL_00c0;                                               //br				IL_00c0
	IL_014b:                                                                        //ldarg.0
	IL_014c:            Temp_1=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_0151:                                                                        //castclass				Reflector::CodeModel::IType
	IL_0156:            goto IL_011d;                                               //br.s				IL_011d
	IL_0158:            Temp_3=gcnew Root::T_x185();                                //newobj				void Root::T_x185::.ctor()
	IL_015d:                                                                        //ldloc.0
	IL_015e:            Temp_4=Temp_3->M_x1(V_0);                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_0163:            V_0=Temp_4;                                                 //stloc.0
	IL_0164:                                                                        //ldarg.0
	IL_0165:                                                                        //ldloc.0
	IL_0166:            Temp_5=Root::T_x129::M_x1(V_0);                             //call				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_016b:            V_0=Temp_5;                                                 //stloc.0
	IL_016c:                                                                        //ldc.i4				0x9
	IL_0171:            V_1=9;                                                      //stloc				V_1
	IL_0175:            /*goto IL_000d;*/goto IL_017a;                              //br				IL_000d
	IL_017a:                                                                        //ldarg.0
	IL_017b:            Temp_16=this->F_x12;                                        //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0180:            if(Temp_16==nullptr)goto IL_0195;                           //brfalse.s				IL_0195
	IL_0182:                                                                        //ldc.i4				0x8
	IL_0187:            V_1=8;                                                      //stloc				V_1
	IL_018b:            /*goto IL_000d;*/goto IL_0190;                              //br				IL_000d
	IL_0190:            goto IL_005a;                                               //br				IL_005a
	IL_0195:                                                                        //ldloc.0
	IL_0196:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x130::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Root::T_x181^ Temp_2 = nullptr;
	Reflector::CodeModel::IModule^ Temp_3 = nullptr;
	Root::T_x185^ Temp_4 = nullptr;
	Reflector::CodeModel::IModule^ Temp_5 = nullptr;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0011:                                                                        //ldarg.0
	IL_0012:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_0017:            Temp_2=gcnew Root::T_x181(Temp_0,Temp_1);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_0022:            V_0=Temp_3;                                                 //stloc.0
	IL_0023:            Temp_4=gcnew Root::T_x185();                                //newobj				void Root::T_x185::.ctor()
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_5=Temp_4->M_x1(V_0);                                   //callvirt				Reflector::CodeModel::IModule^ Root::T_x129::M_x1(Reflector::CodeModel::IModule^)
	IL_002e:            V_0=Temp_5;                                                 //stloc.0
	IL_002f:                                                                        //ldloc.0
	IL_0030:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IPropertyDeclaration^ Root::T_x130::M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Boolean Temp_1 = false;
	Root::T_x181^ Temp_2 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_3 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_9 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	Root::T_x185^ Temp_14 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_15 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_16 = nullptr;
	Reflector::CodeModel::IType^ Temp_17 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_18 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_19 = nullptr;
	Reflector::CodeModel::IType^ Temp_20 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_21 = nullptr;
	//local variables.
	Reflector::CodeModel::IPropertyDeclaration^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0032;                                               //br.s				IL_0032
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00b2;case 1:goto IL_0110;case 2:goto IL_0100;case 3:goto IL_0126;case 4:goto IL_009c;case 5:goto IL_0055;case 6:goto IL_00d9;};//switch				(IL_00b2,IL_0110,IL_0100,IL_0126,IL_009c,IL_0055,IL_00d9)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_0=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_1=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_003e:            Temp_2=gcnew Root::T_x181(Temp_0,Temp_1);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_0043:                                                                        //ldarg.1
	IL_0044:            Temp_3=Temp_2->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0049:            V_0=Temp_3;                                                 //stloc.0
	IL_004a:                                                                        //ldc.i4				0x5
	IL_004f:            V_1=5;                                                      //stloc				V_1
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:                                                                        //ldloc.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_12=this->F_x13;                                        //ldfld				System::Object^ Root::T_x130 F_x13
	IL_005c:            Temp_19=V_0;if(Temp_12!=nullptr)goto IL_0068;               //brtrue.s				IL_0068
	IL_005e:            goto IL_0060;                                               //br.s				IL_0060
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_17=safe_cast<Reflector::CodeModel::IMemberReference^>(A_0)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0066:            Temp_21=Temp_19;Temp_20=Temp_17;goto IL_0075;               //br.s				IL_0075
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_13=this->F_x13;                                        //ldfld				System::Object^ Root::T_x130 F_x13
	IL_006e:                                                                        //castclass				Reflector::CodeModel::IType
	IL_0073:            Temp_21=Temp_19;Temp_20=safe_cast<Reflector::CodeModel::IType^>(Temp_13);goto IL_0075;//br.s				IL_0075
	IL_0075:            safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_21)->DeclaringType=Temp_20;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IMemberReference::set_DeclaringType(Reflector::CodeModel::IType^)
	IL_007a:            Temp_14=gcnew Root::T_x185();                               //newobj				void Root::T_x185::.ctor()
	IL_007f:                                                                        //ldloc.0
	IL_0080:            Temp_15=Temp_14->M_x1(V_0);                                 //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_0085:            V_0=Temp_15;                                                //stloc.0
	IL_0086:                                                                        //ldarg.0
	IL_0087:                                                                        //ldloc.0
	IL_0088:            Temp_16=Root::T_x129::M_x1(V_0);                            //call				Reflector::CodeModel::IPropertyDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IPropertyDeclaration^)
	IL_008d:            V_0=Temp_16;                                                //stloc.0
	IL_008e:                                                                        //ldc.i4				0x4
	IL_0093:            V_1=4;                                                      //stloc				V_1
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:                                                                        //ldarg.1
	IL_009d:            Temp_11=A_0->SetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_00a2:            if(Temp_11==nullptr)goto IL_0102;                           //brfalse.s				IL_0102
	IL_00a4:                                                                        //ldc.i4				0x0
	IL_00a9:            V_1=0;                                                      //stloc				V_1
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_00b4:                                                                        //ldloc.0
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:                                                                        //ldarg.1
	IL_00b7:            Temp_4=A_0->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_00bc:            Temp_5=Temp_4->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_00c1:            Temp_6=Root::T_x129::M_x1(Temp_5);                          //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00c6:            V_0->SetMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_6);//callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_SetMethod(Reflector::CodeModel::IMethodReference^)
	IL_00cb:                                                                        //ldc.i4				0x6
	IL_00d0:            V_1=6;                                                      //stloc				V_1
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:            goto IL_0102;                                               //br.s				IL_0102
	IL_00db:                                                                        //ldloc.0
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:                                                                        //ldarg.1
	IL_00de:            Temp_8=A_0->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_00e3:            Temp_9=Temp_8->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_00e8:            Temp_10=Root::T_x129::M_x1(Temp_9);                         //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::IMethodDeclaration^)
	IL_00ed:            V_0->GetMethod=safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_10);//callvirt				void Reflector::CodeModel::IPropertyDeclaration::set_GetMethod(Reflector::CodeModel::IMethodReference^)
	IL_00f2:                                                                        //ldc.i4				0x2
	IL_00f7:            V_1=2;                                                      //stloc				V_1
	IL_00fb:            /*goto IL_0002;*/goto IL_0100;                              //br				IL_0002
	IL_0100:            goto IL_0128;                                               //br.s				IL_0128
	IL_0102:                                                                        //ldc.i4				0x1
	IL_0107:            V_1=1;                                                      //stloc				V_1
	IL_010b:            /*goto IL_0002;*/goto IL_0110;                              //br				IL_0002
	IL_0110:                                                                        //ldarg.1
	IL_0111:            Temp_7=A_0->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0116:            if(Temp_7==nullptr)goto IL_0128;                            //brfalse.s				IL_0128
	IL_0118:                                                                        //ldc.i4				0x3
	IL_011d:            V_1=3;                                                      //stloc				V_1
	IL_0121:            /*goto IL_0002;*/goto IL_0126;                              //br				IL_0002
	IL_0126:            goto IL_00db;                                               //br.s				IL_00db
	IL_0128:                                                                        //ldloc.0
	IL_0129:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::ITypeDeclaration^ Root::T_x130::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Boolean Temp_2 = false;
	Root::T_x181^ Temp_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_4 = nullptr;
	System::Collections::Hashtable^ Temp_5 = nullptr;
	System::Collections::IDictionary^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_10 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_12 = nullptr;
	Reflector::CodeModel::IMethodDeclarationCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_15 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_16 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_17 = nullptr;
	Root::T_x185^ Temp_18 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_19 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_20 = nullptr;
	System::Object^ Temp_21 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_22 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_23 = nullptr;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_25 = nullptr;
	//local variables.
	System::Collections::IDictionary^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            goto IL_001e;                                               //br.s				IL_001e
	IL_0005:                                                                        //ldloc				V_3
	IL_0009:            switch(V_3){case 0:goto IL_005b;case 1:goto IL_0043;case 2:goto IL_0030;case 3:goto IL_0080;};//switch				(IL_005b,IL_0043,IL_0030,IL_0080)
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_0=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0024:            V_0=Temp_0;                                                 //stloc.0
	IL_0025:                                                                        //ldc.i4				0x2
	IL_002a:            V_3=2;                                                      //stloc				V_3
	IL_002e:            /*goto IL_0005;*/goto IL_0030;                              //br.s				IL_0005
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_6=this->F_x12;                                         //ldfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0036:            if(Temp_6!=nullptr)goto IL_005d;                            //brtrue.s				IL_005d
	IL_0038:                                                                        //ldc.i4				0x1
	IL_003d:            V_3=1;                                                      //stloc				V_3
	IL_0041:            /*goto IL_0005;*/goto IL_0043;                              //br.s				IL_0005
	IL_0043:            goto IL_0045;                                               //br.s				IL_0045
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_5=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_004b:            this->F_x12=safe_cast<System::Collections::IDictionary^>(Temp_5);//stfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0050:                                                                        //ldc.i4				0x0
	IL_0055:            V_3=0;                                                      //stloc				V_3
	IL_0059:            /*goto IL_0005;*/goto IL_005b;                              //br.s				IL_0005
	IL_005b:            goto IL_005d;                                               //br.s				IL_005d
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_1=this->F_x1;                                          //ldfld				System::Boolean Root::T_x130 F_x1
	IL_0063:                                                                        //ldarg.0
	IL_0064:            Temp_2=this->F_x2;                                          //ldfld				System::Boolean Root::T_x130 F_x2
	IL_0069:            Temp_3=gcnew Root::T_x181(Temp_1,Temp_2);                   //newobj				void Root::T_x181::.ctor(System::Boolean,System::Boolean)
	IL_006e:                                                                        //ldarg.1
	IL_006f:            Temp_4=Temp_3->M_x1(A_0);                                   //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0074:            V_1=Temp_4;                                                 //stloc.1
	IL_0075:                                                                        //ldc.i4				0x3
	IL_007a:            V_3=3;                                                      //stloc				V_3
	IL_007e:            /*goto IL_0005;*/goto IL_0080;                              //br.s				IL_0005
	IL_0080:                                                                        //ldloc.1
	IL_0081:                                                                        //ldarg.0
	IL_0082:            Temp_7=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_0087:            Temp_23=V_1;if(Temp_7!=nullptr)goto IL_0093;                //brtrue.s				IL_0093
	IL_0089:            goto IL_008b;                                               //br.s				IL_008b
	IL_008b:                                                                        //ldarg.1
	IL_008c:            Temp_21=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0091:            Temp_25=Temp_23;Temp_24=Temp_21;goto IL_00a0;               //br.s				IL_00a0
	IL_0093:                                                                        //ldarg.0
	IL_0094:            Temp_8=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_0099:                                                                        //castclass				Reflector::CodeModel::IType
	IL_009e:            Temp_25=Temp_23;Temp_24=safe_cast<Reflector::CodeModel::IType^>(Temp_8);goto IL_00a0;//br.s				IL_00a0
	IL_00a0:            safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_25)->Owner=safe_cast<System::Object^>(Temp_24);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::ITypeReference::set_Owner(System::Object^)
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_9=this->F_x13;                                         //ldfld				System::Object^ Root::T_x130 F_x13
	IL_00ab:            V_2=Temp_9;                                                 //stloc.2
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:            this->F_x13=safe_cast<System::Object^>(V_1);                //stfld				System::Object^ Root::T_x130 F_x13
	IL_00b3:                                                                        //ldloc.1
	IL_00b4:            Temp_10=V_1->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_00b9:            Temp_10->Clear();                                           //callvirt				void Reflector::CodeModel::IMethodDeclarationCollection::Clear()
	IL_00be:                                                                        //ldloc.1
	IL_00bf:            Temp_11=V_1->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:                                                                        //ldarg.1
	IL_00c6:            Temp_12=A_0->Methods;                                       //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_Methods()
	IL_00cb:            Temp_13=this->M_x2(Temp_12);                                //callvirt				Reflector::CodeModel::IMethodDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::IMethodDeclarationCollection^)
	IL_00d0:            Temp_11->AddRange(safe_cast<System::Collections::ICollection^>(Temp_13));//callvirt				void Reflector::CodeModel::IMethodDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_00d5:                                                                        //ldloc.1
	IL_00d6:            Temp_14=V_1->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_00db:            Temp_14->Clear();                                           //callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::Clear()
	IL_00e0:                                                                        //ldloc.1
	IL_00e1:            Temp_15=V_1->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldarg.1
	IL_00e8:            Temp_16=A_0->NestedTypes;                                   //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::ITypeDeclaration::get_NestedTypes()
	IL_00ed:            Temp_17=this->M_x2(Temp_16);                                //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Root::T_x129::M_x2(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_00f2:            Temp_15->AddRange(safe_cast<System::Collections::ICollection^>(Temp_17));//callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::AddRange(System::Collections::ICollection^)
	IL_00f7:            Temp_18=gcnew Root::T_x185();                               //newobj				void Root::T_x185::.ctor()
	IL_00fc:                                                                        //ldloc.1
	IL_00fd:            Temp_19=Temp_18->M_x1(V_1);                                 //callvirt				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0102:            V_1=Temp_19;                                                //stloc.1
	IL_0103:                                                                        //ldarg.0
	IL_0104:                                                                        //ldloc.1
	IL_0105:            Temp_20=Root::T_x129::M_x1(V_1);                            //call				Reflector::CodeModel::ITypeDeclaration^ Root::T_x129::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_010a:            V_1=Temp_20;                                                //stloc.1
	IL_010b:                                                                        //ldarg.0
	IL_010c:                                                                        //ldloc.2
	IL_010d:            this->F_x13=V_2;                                            //stfld				System::Object^ Root::T_x130 F_x13
	IL_0112:                                                                        //ldarg.0
	IL_0113:                                                                        //ldloc.0
	IL_0114:            this->F_x12=V_0;                                            //stfld				System::Collections::IDictionary^ Root::T_x130 F_x12
	IL_0119:                                                                        //ldloc.1
	IL_011a:            return V_1;                                                 //ret

}
