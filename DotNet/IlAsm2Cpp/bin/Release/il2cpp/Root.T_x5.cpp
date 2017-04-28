#include "global_xref.h"

inline Root::T_x5::T_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.1
	IL_0002:            this->F_x2=true;                                            //stfld				System::Boolean Root::T_x5 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.1
	IL_0009:            this->F_x12=true;                                           //stfld				System::Boolean Root::T_x5 F_x12
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldc.i4.1
	IL_0010:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x5 F_x13
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4.1
	IL_0017:            this->F_x8=true;                                            //stfld				System::Boolean Root::T_x5 F_x8
	IL_001c:                                                                        //ldarg.0
	IL_001d:                                                                        //ldc.i4.1
	IL_001e:            this->F_x5=true;                                            //stfld				System::Boolean Root::T_x5 F_x5
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4.1
	IL_0025:            this->F_x9=true;                                            //stfld				System::Boolean Root::T_x5 F_x9
	IL_002a:                                                                        //ldarg.0
	IL_002b:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0030:            return;                                                     //ret

}
inline void Root::T_x5::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::IConfiguration^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	Reflector::IConfiguration^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Reflector::IConfiguration^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	Reflector::IConfiguration^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	Reflector::IConfiguration^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:                                                                        //ldc.i4.4
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.2
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_001b:                                                                        //ldstr				L"\x7322\x5024\x4526\x4528\x422A\x4E2C"
	IL_0020:                                                                        //ldloc				V_0
	IL_0024:            Temp_1=a(L"\x7322\x5024\x4526\x4528\x422A\x4E2C",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0029:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_002e:                                                                        //ldloc				V_0
	IL_0032:            Temp_2=a(L"\x5722\x5724\x5226\x4C28",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0037:            Temp_3=Temp_0->GetProperty(Temp_1,Temp_2);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_003c:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0041:                                                                        //ldloc				V_0
	IL_0045:            Temp_4=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004a:            Temp_5=(Temp_3 != Temp_4);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_004f:            this->F_x2=Temp_5;                                          //stfld				System::Boolean Root::T_x5 F_x2
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_6=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_005b:                                                                        //ldstr				L"\x7322\x5724\x4E26\x5F28\x4A2A\x592C\x4A2E"
	IL_0060:                                                                        //ldloc				V_0
	IL_0064:            Temp_7=a(L"\x7322\x5724\x4E26\x5F28\x4A2A\x592C\x4A2E",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0069:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_006e:                                                                        //ldloc				V_0
	IL_0072:            Temp_8=a(L"\x5722\x5724\x5226\x4C28",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0077:            Temp_9=Temp_6->GetProperty(Temp_7,Temp_8);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_007c:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0081:                                                                        //ldloc				V_0
	IL_0085:            Temp_10=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008a:            Temp_11=(Temp_9 != Temp_10);                                //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_008f:            this->F_x12=Temp_11;                                        //stfld				System::Boolean Root::T_x5 F_x12
	IL_0094:                                                                        //ldarg.0
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_12=this->F_x1;                                         //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_009b:                                                                        //ldstr				L"\x6522\x4424\x4A26\x4028\x472A\x542C"
	IL_00a0:                                                                        //ldloc				V_0
	IL_00a4:            Temp_13=a(L"\x6522\x4424\x4A26\x4028\x472A\x542C",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a9:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_00ae:                                                                        //ldloc				V_0
	IL_00b2:            Temp_14=a(L"\x5722\x5724\x5226\x4C28",V_0);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b7:            Temp_15=Temp_12->GetProperty(Temp_13,Temp_14);              //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_00bc:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_00c1:                                                                        //ldloc				V_0
	IL_00c5:            Temp_16=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ca:            Temp_17=(Temp_15 != Temp_16);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_00cf:            this->F_x13=Temp_17;                                        //stfld				System::Boolean Root::T_x5 F_x13
	IL_00d4:                                                                        //ldarg.0
	IL_00d5:                                                                        //ldarg.0
	IL_00d6:            Temp_18=this->F_x1;                                         //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_00db:                                                                        //ldstr				L"\x6222\x5624\x5426\x4C28\x462A\x4F2C\x432E\x4830"
	IL_00e0:                                                                        //ldloc				V_0
	IL_00e4:            Temp_19=a(L"\x6222\x5624\x5426\x4C28\x462A\x4F2C\x432E\x4830",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e9:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_00ee:                                                                        //ldloc				V_0
	IL_00f2:            Temp_20=a(L"\x5722\x5724\x5226\x4C28",V_0);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f7:            Temp_21=Temp_18->GetProperty(Temp_19,Temp_20);              //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_00fc:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0101:                                                                        //ldloc				V_0
	IL_0105:            Temp_22=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010a:            Temp_23=(Temp_21 != Temp_22);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_010f:            this->F_x8=Temp_23;                                         //stfld				System::Boolean Root::T_x5 F_x8
	IL_0114:                                                                        //ldarg.0
	IL_0115:                                                                        //ldarg.0
	IL_0116:            Temp_24=this->F_x1;                                         //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_011b:                                                                        //ldstr				L"\x6522\x4424\x4A26\x4028\x472A\x542C\x6E2E\x5F30\x5732\x7434\x4436\x4A38\x5E3A\x503C\x5D3E\x2D40\x3A42"
	IL_0120:                                                                        //ldloc				V_0
	IL_0124:            Temp_25=a(L"\x6522\x4424\x4A26\x4028\x472A\x542C\x6E2E\x5F30\x5732\x7434\x4436\x4A38\x5E3A\x503C\x5D3E\x2D40\x3A42",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0129:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_012e:                                                                        //ldloc				V_0
	IL_0132:            Temp_26=a(L"\x5722\x5724\x5226\x4C28",V_0);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0137:            Temp_27=Temp_24->GetProperty(Temp_25,Temp_26);              //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_013c:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0141:                                                                        //ldloc				V_0
	IL_0145:            Temp_28=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014a:            Temp_29=(Temp_27 != Temp_28);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_014f:            this->F_x5=Temp_29;                                         //stfld				System::Boolean Root::T_x5 F_x5
	IL_0154:                                                                        //ldarg.0
	IL_0155:                                                                        //ldarg.0
	IL_0156:            Temp_30=this->F_x1;                                         //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_015b:                                                                        //ldstr				L"\x6522\x4424\x4A26\x4028\x472A\x542C\x602E\x4330\x7232\x4634\x4436\x5C38\x563A\x5F3C\x533E\x3840"
	IL_0160:                                                                        //ldloc				V_0
	IL_0164:            Temp_31=a(L"\x6522\x4424\x4A26\x4028\x472A\x542C\x602E\x4330\x7232\x4634\x4436\x5C38\x563A\x5F3C\x533E\x3840",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0169:                                                                        //ldstr				L"\x5722\x5724\x5226\x4C28"
	IL_016e:                                                                        //ldloc				V_0
	IL_0172:            Temp_32=a(L"\x5722\x5724\x5226\x4C28",V_0);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0177:            Temp_33=Temp_30->GetProperty(Temp_31,Temp_32);              //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_017c:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0181:                                                                        //ldloc				V_0
	IL_0185:            Temp_34=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_0);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018a:            Temp_35=(Temp_33 != Temp_34);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_018f:            this->F_x9=Temp_35;                                         //stfld				System::Boolean Root::T_x5 F_x9
	IL_0194:            return;                                                     //ret

}
inline void Root::T_x5::M_x1(Reflector::IConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	Reflector::IConfiguration^ Temp_1 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_2 = nullptr;
	Reflector::IConfiguration^ Temp_3 = nullptr;
	System::ComponentModel::PropertyChangedEventHandler^ Temp_4 = nullptr;
	Reflector::IConfiguration^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_0=1;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0082;case 1:goto IL_000b;case 2:goto IL_0098;case 3:goto IL_006e;case 4:goto IL_0044;case 5:goto IL_00bf;};//switch				(IL_0082,IL_000b,IL_0098,IL_006e,IL_0044,IL_00bf)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_5=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_0034:            if(Temp_5==nullptr)goto IL_0070;                            //brfalse.s				IL_0070
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x4
	IL_003e:            V_0=4;                                                      //stloc				V_0
	IL_0042:            /*goto IL_000d;*/goto IL_0044;                              //br.s				IL_000d
	IL_0044:            goto IL_009a;                                               //br.s				IL_009a
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_1=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldftn				void Root::T_x5::M_x1(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_0053:            Temp_2=gcnew System::ComponentModel::PropertyChangedEventHandler(this,&Root::T_x5::M_x1);//newobj				void System::ComponentModel::PropertyChangedEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0058:            safe_cast<Reflector::INotifyPropertyChanged^>(Temp_1)->PropertyChanged += Temp_2;//callvirt				void Reflector::INotifyPropertyChanged::add_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler^)
	IL_005d:                                                                        //ldarg.0
	IL_005e:            this->M_x1();                                               //call				void Root::T_x5::M_x1()
	IL_0063:                                                                        //ldc.i4				0x3
	IL_0068:            V_0=3;                                                      //stloc				V_0
	IL_006c:            /*goto IL_000d;*/goto IL_006e;                              //br.s				IL_000d
	IL_006e:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldarg.1
	IL_0072:            this->F_x1=A_0;                                             //stfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_0=0;                                                      //stloc				V_0
	IL_0080:            /*goto IL_000d;*/goto IL_0082;                              //br.s				IL_000d
	IL_0082:                                                                        //ldarg.0
	IL_0083:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_0088:            if(Temp_0==nullptr)goto IL_00c1;                            //brfalse.s				IL_00c1
	IL_008a:                                                                        //ldc.i4				0x2
	IL_008f:            V_0=2;                                                      //stloc				V_0
	IL_0093:            /*goto IL_000d;*/goto IL_0098;                              //br				IL_000d
	IL_0098:            goto IL_0046;                                               //br.s				IL_0046
	IL_009a:                                                                        //ldarg.0
	IL_009b:            Temp_3=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldftn				void Root::T_x5::M_x1(System::Object^,System::ComponentModel::PropertyChangedEventArgs^)
	IL_00a7:            Temp_4=gcnew System::ComponentModel::PropertyChangedEventHandler(this,&Root::T_x5::M_x1);//newobj				void System::ComponentModel::PropertyChangedEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00ac:            safe_cast<Reflector::INotifyPropertyChanged^>(Temp_3)->PropertyChanged -= Temp_4;//callvirt				void Reflector::INotifyPropertyChanged::remove_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler^)
	IL_00b1:                                                                        //ldc.i4				0x5
	IL_00b6:            V_0=5;                                                      //stloc				V_0
	IL_00ba:            /*goto IL_000d;*/goto IL_00bf;                              //br				IL_000d
	IL_00bf:            goto IL_0070;                                               //br.s				IL_0070
	IL_00c1:            return;                                                     //ret

}
inline void Root::T_x5::M_x1(System::Object^ A_0,System::ComponentModel::PropertyChangedEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x5::M_x1()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Root::T_x5::M_x12()
//Reflector::CodeModel::IVisibilityConfiguration^::get_Public by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Boolean Root::T_x5 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x5::M_x13()
//Reflector::CodeModel::IVisibilityConfiguration^::get_FamilyAndAssembly by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::Boolean Root::T_x5 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::IConfiguration^ Root::T_x5::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IConfiguration^ Root::T_x5 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x5::M_x4()
//Reflector::CodeModel::IVisibilityConfiguration^::get_Family by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Boolean Root::T_x5 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x5::M_x5()
//Reflector::CodeModel::IVisibilityConfiguration^::get_Private by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Boolean Root::T_x5 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x5::M_x8()
//Reflector::CodeModel::IVisibilityConfiguration^::get_Assembly by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				System::Boolean Root::T_x5 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x5::M_x9()
//Reflector::CodeModel::IVisibilityConfiguration^::get_FamilyOrAssembly by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Boolean Root::T_x5 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
