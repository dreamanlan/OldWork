#include "global_xref.h"

inline Root::T_x13::T_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x13::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x13::T_x1(this);                       //newobj				void Root::T_x13::T_x1::.ctor(Root::T_x13^)
	IL_000d:            this->F_x12=safe_cast<Reflector::CodeModel::IAssemblyCollection^>(Temp_0);//stfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldnull
	IL_0014:            this->F_x13=safe_cast<Reflector::CodeModel::IAssemblyResolver^>(nullptr);//stfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x13 F_x13
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldc.i4.0
	IL_001b:            this->F_x5=false;                                           //stfld				System::Boolean Root::T_x13 F_x5
	IL_0020:            return;                                                     //ret

}
inline System::Boolean Root::T_x13::M_x1()
//Reflector::CodeModel::IAssemblyManager^::get_Symbols by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				System::Boolean Root::T_x13 F_x5
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x13::M_x1(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::CodeModel::IAssemblyManager^::Unload by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyCollection^ Temp_0 = nullptr;
	//local variables.
	System::IDisposable^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0043;case 1:goto IL_0059;case 2:goto IL_0035;};//switch				(IL_0043,IL_0059,IL_0035)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_001d:                                                                        //ldarg.1
	IL_001e:            Temp_0->Remove(A_0);                                        //callvirt				void Reflector::CodeModel::IAssemblyCollection::Remove(Reflector::CodeModel::IAssembly^)
	IL_0023:                                                                        //ldarg.1
	IL_0024:                                                                        //isinst				System::IDisposable
	IL_0029:            V_0=dynamic_cast<System::IDisposable^>(A_0);                //stloc.0
	IL_002a:                                                                        //ldc.i4				0x2
	IL_002f:            V_1=2;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldloc.0
	IL_0036:            if(V_0==nullptr)goto IL_005b;                               //brfalse.s				IL_005b
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_1=0;                                                      //stloc				V_1
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_0045;                                               //br.s				IL_0045
	IL_0045:                                                                        //ldloc.0
	IL_0046:            /*V_0->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_004b:            goto IL_004e;                                               //br.s				IL_004e
	IL_004d:                                                                        //break
	IL_004e:                                                                        //ldc.i4				0x1
	IL_0053:            V_1=1;                                                      //stloc				V_1
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_005b;                                               //br.s				IL_005b
	IL_005b:            return;                                                     //ret

}
inline void Root::T_x13::M_x1(Reflector::CodeModel::IAssembly^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyManager^::SaveFile by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.2
	IL_0002:            Root::T_x138::M_x1(A_0,A_1);                                //call				void Root::T_x138::M_x1(Reflector::CodeModel::IAssembly^,System::String^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x13::M_x1(Reflector::CodeModel::IAssemblyComparer^ A_0)
//Reflector::CodeModel::IAssemblyManager^::set_Comparer by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x8=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyComparer^ Root::T_x13 F_x8
	IL_0007:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x13::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyManager^::Load by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IAssemblyCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IAssemblyResolver^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_10 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_12 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0088;case 1:goto IL_0140;case 2:goto IL_006e;case 3:goto IL_0055;case 4:goto IL_010d;case 5:goto IL_00fd;case 6:goto IL_00dc;case 7:goto IL_0123;case 8:goto IL_0048;case 9:goto IL_0165;case 10:goto IL_0098;case 11:goto IL_00be;};//switch				(IL_0088,IL_0140,IL_006e,IL_0055,IL_010d,IL_00fd,IL_00dc,IL_0123,IL_0048,IL_0165,IL_0098,IL_00be)
	IL_003b:                                                                        //ldc.i4.0
	IL_003c:            V_0=0;                                                      //stloc.0
	IL_003d:                                                                        //ldc.i4				0x8
	IL_0042:            V_1=8;                                                      //stloc				V_1
	IL_0046:            /*goto IL_0002;*/goto IL_0048;                              //br.s				IL_0002
	IL_0048:            goto IL_004a;                                               //br.s				IL_004a
	IL_004a:                                                                        //ldc.i4				0x3
	IL_004f:            V_1=3;                                                      //stloc				V_1
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:                                                                        //ldloc.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_3=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_005c:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0061:            if(V_0<Temp_4)goto IL_00ce;                                 //blt.s				IL_00ce
	IL_0063:                                                                        //ldc.i4				0x2
	IL_0068:            V_1=2;                                                      //stloc				V_1
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:            goto IL_0071;                                               //br.s				IL_0071
	IL_0070:                                                                        //break
	IL_0071:            goto IL_00ff;                                               //br				IL_00ff
	IL_0076:                                                                        //ldloc.0
	IL_0077:                                                                        //ldc.i4.1
	IL_0078:                                                                        //add
	IL_0079:            V_0=(V_0 + 1);                                              //stloc.0
	IL_007a:                                                                        //ldc.i4				0x0
	IL_007f:            V_1=0;                                                      //stloc				V_1
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:            goto IL_004a;                                               //br.s				IL_004a
	IL_008a:                                                                        //ldc.i4				0xa
	IL_008f:            V_1=10;                                                     //stloc				V_1
	IL_0093:            /*goto IL_0002;*/goto IL_0098;                              //br				IL_0002
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_13=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_009e:                                                                        //ldloc.0
	IL_009f:            Temp_14=Temp_13[V_0];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_00a4:            Temp_15=Temp_14->Status;                                    //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_00a9:            Temp_16=Temp_15->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_00ae:            if(Temp_16!=0)goto IL_0076;                                 //brtrue.s				IL_0076
	IL_00b0:                                                                        //ldc.i4				0xb
	IL_00b5:            V_1=11;                                                     //stloc				V_1
	IL_00b9:            /*goto IL_0002;*/goto IL_00be;                              //br				IL_0002
	IL_00be:            goto IL_0132;                                               //br.s				IL_0132
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            Temp_9=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x13 F_x13
	IL_00c6:                                                                        //ldarg.1
	IL_00c7:                                                                        //ldarg.2
	IL_00c8:            Temp_10=Temp_9->Resolve(A_0,A_1);                           //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyResolver::Resolve(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_00cd:            return Temp_10;                                             //ret
	IL_00ce:                                                                        //ldc.i4				0x6
	IL_00d3:            V_1=6;                                                      //stloc				V_1
	IL_00d7:            /*goto IL_0002;*/goto IL_00dc;                              //br				IL_0002
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_6=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_00e2:                                                                        //ldloc.0
	IL_00e3:            Temp_7=Temp_6[V_0];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_00e8:            Temp_8=Temp_7->Status;                                      //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_00ed:            if(Temp_8==nullptr)goto IL_0132;                            //brfalse.s				IL_0132
	IL_00ef:                                                                        //ldc.i4				0x5
	IL_00f4:            V_1=5;                                                      //stloc				V_1
	IL_00f8:            /*goto IL_0002;*/goto IL_00fd;                              //br				IL_0002
	IL_00fd:            goto IL_008a;                                               //br.s				IL_008a
	IL_00ff:                                                                        //ldc.i4				0x4
	IL_0104:            V_1=4;                                                      //stloc				V_1
	IL_0108:            /*goto IL_0002;*/goto IL_010d;                              //br				IL_0002
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_5=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x13 F_x13
	IL_0113:            if(Temp_5==nullptr)goto IL_0167;                            //brfalse.s				IL_0167
	IL_0115:                                                                        //ldc.i4				0x7
	IL_011a:            V_1=7;                                                      //stloc				V_1
	IL_011e:            /*goto IL_0002;*/goto IL_0123;                              //br				IL_0002
	IL_0123:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_0125:                                                                        //ldarg.0
	IL_0126:            Temp_11=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_012b:                                                                        //ldloc.0
	IL_012c:            Temp_12=Temp_11[V_0];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0131:            return Temp_12;                                             //ret
	IL_0132:                                                                        //ldc.i4				0x1
	IL_0137:            V_1=1;                                                      //stloc				V_1
	IL_013b:            /*goto IL_0002;*/goto IL_0140;                              //br				IL_0002
	IL_0140:                                                                        //ldarg.1
	IL_0141:                                                                        //ldarg.0
	IL_0142:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_0147:                                                                        //ldloc.0
	IL_0148:            Temp_1=Temp_0[V_0];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_014d:            Temp_2=A_0->Equals(safe_cast<System::Object^>(Temp_1));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0152:            if(!Temp_2)goto IL_0076;                                    //brfalse				IL_0076
	IL_0157:                                                                        //ldc.i4				0x9
	IL_015c:            V_1=9;                                                      //stloc				V_1
	IL_0160:            /*goto IL_0002;*/goto IL_0165;                              //br				IL_0002
	IL_0165:            goto IL_0125;                                               //br.s				IL_0125
	IL_0167:                                                                        //ldnull
	IL_0168:            return nullptr;                                             //ret

}
inline void Root::T_x13::M_x1(Reflector::CodeModel::IAssemblyResolver^ A_0)
//Reflector::CodeModel::IAssemblyManager^::set_Resolver by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x13 F_x13
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x13::M_x1(System::Boolean A_0)
//Reflector::CodeModel::IAssemblyManager^::set_Symbols by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x5=A_0;                                             //stfld				System::Boolean Root::T_x13 F_x5
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x13::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x13::M_x1(System::EventHandler^ A_0)
//Reflector::CodeModel::IAssemblyManager^::add_AssemblyUnloaded by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0017:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x13::M_x1(System::String^ A_0)
//Reflector::CodeModel::IAssemblyManager^::LoadFile by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Globalization::CultureInfo^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	Reflector::CodeModel::IAssemblyCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	Root::T_x136^ Temp_17 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Reflector::CodeModel::IAssemblyCollection^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_22 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Reflector::CodeModel::IAssemblyCollection^ Temp_25 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_26 = nullptr;
	System::Boolean Temp_27 = false;
	Reflector::CodeModel::IAssemblyCollection^ Temp_28 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	//local variables.
	Root::T_x136^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_2=8;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0066;                                               //br.s				IL_0066
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0185;case 1:goto IL_0250;case 2:goto IL_0134;case 3:goto IL_01b9;case 4:goto IL_0281;case 5:goto IL_0087;case 6:goto IL_01a6;case 7:goto IL_0214;case 8:goto IL_000b;case 9:goto IL_0232;case 10:goto IL_011d;case 11:goto IL_01cf;case 12:goto IL_0172;case 13:goto IL_0263;case 14:goto IL_00c7;case 15:goto IL_0077;case 16:goto IL_0153;case 17:goto IL_0100;case 18:goto IL_01ef;case 19:goto IL_00da;};//switch				(IL_0185,IL_0250,IL_0134,IL_01b9,IL_0281,IL_0087,IL_01a6,IL_0214,IL_000b,IL_0232,IL_011d,IL_01cf,IL_0172,IL_0263,IL_00c7,IL_0077,IL_0153,IL_0100,IL_01ef,IL_00da)
	IL_0066:                                                                        //ldarg.1
	IL_0067:            if(A_0==nullptr)goto IL_0136;                               //brfalse				IL_0136
	IL_006c:                                                                        //ldc.i4				0xf
	IL_0071:            V_2=15;                                                     //stloc				V_2
	IL_0075:            /*goto IL_000d;*/goto IL_0077;                              //br.s				IL_000d
	IL_0077:            goto IL_0219;                                               //br				IL_0219
	IL_007c:                                                                        //ldc.i4				0x5
	IL_0081:            V_2=5;                                                      //stloc				V_2
	IL_0085:            /*goto IL_000d;*/goto IL_0087;                              //br.s				IL_000d
	IL_0087:                                                                        //ldloc.0
	IL_0088:            Temp_4=V_0->Location;                                       //callvirt				System::String^ Root::T_x136::get_Location()
	IL_008d:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0092:            Temp_6=Temp_4->ToLower(Temp_5);                             //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_7=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_009d:                                                                        //ldloc.1
	IL_009e:            Temp_8=Temp_7[V_1];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_00a3:            Temp_9=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(Temp_8)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_00a8:            Temp_10=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00ad:            Temp_11=Temp_9->ToLower(Temp_10);                           //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_00b2:            Temp_12=(Temp_6 == Temp_11);                                //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b7:            if(!Temp_12)goto IL_0122;                                   //brfalse.s				IL_0122
	IL_00b9:                                                                        //ldc.i4				0xe
	IL_00be:            V_2=14;                                                     //stloc				V_2
	IL_00c2:            /*goto IL_000d;*/goto IL_00c7;                              //br				IL_000d
	IL_00c7:            goto IL_01d4;                                               //br				IL_01d4
	IL_00cc:                                                                        //ldc.i4				0x13
	IL_00d1:            V_2=19;                                                     //stloc				V_2
	IL_00d5:            /*goto IL_000d;*/goto IL_00da;                              //br				IL_000d
	IL_00da:                                                                        //ldarg.0
	IL_00db:            Temp_28=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_00e0:                                                                        //ldloc.1
	IL_00e1:            Temp_29=Temp_28[V_1];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_00e6:            Temp_30=Temp_29->Status;                                    //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_00eb:            Temp_31=Temp_30->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_00f0:            if(Temp_31!=0)goto IL_007c;                                 //brtrue.s				IL_007c
	IL_00f2:                                                                        //ldc.i4				0x11
	IL_00f7:            V_2=17;                                                     //stloc				V_2
	IL_00fb:            /*goto IL_000d;*/goto IL_0100;                              //br				IL_000d
	IL_0100:            goto IL_01e1;                                               //br				IL_01e1
	IL_0105:                                                                        //ldarg.0
	IL_0106:                                                                        //ldarg.1
	IL_0107:            Temp_17=gcnew Root::T_x136(safe_cast<Reflector::CodeModel::IAssemblyManager^>(this),A_0);//newobj				void Root::T_x136::.ctor(Reflector::CodeModel::IAssemblyManager^,System::String^)
	IL_010c:            V_0=Temp_17;                                                //stloc.0
	IL_010d:                                                                        //ldc.i4.0
	IL_010e:            V_1=0;                                                      //stloc.1
	IL_010f:                                                                        //ldc.i4				0xa
	IL_0114:            V_2=10;                                                     //stloc				V_2
	IL_0118:            /*goto IL_000d;*/goto IL_011d;                              //br				IL_000d
	IL_011d:            goto IL_0145;                                               //br				IL_0145
	IL_0122:                                                                        //ldloc.1
	IL_0123:                                                                        //ldc.i4.1
	IL_0124:                                                                        //add
	IL_0125:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0126:                                                                        //ldc.i4				0x2
	IL_012b:            V_2=2;                                                      //stloc				V_2
	IL_012f:            /*goto IL_000d;*/goto IL_0134;                              //br				IL_000d
	IL_0134:            goto IL_0145;                                               //br.s				IL_0145
	IL_0136:                                                                        //ldnull
	IL_0137:            return nullptr;                                             //ret
	IL_0138:                                                                        //ldarg.0
	IL_0139:            Temp_13=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_013e:                                                                        //ldloc.1
	IL_013f:            Temp_14=Temp_13[V_1];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0144:            return Temp_14;                                             //ret
	IL_0145:                                                                        //ldc.i4				0x10
	IL_014a:            V_2=16;                                                     //stloc				V_2
	IL_014e:            /*goto IL_000d;*/goto IL_0153;                              //br				IL_000d
	IL_0153:                                                                        //ldloc.1
	IL_0154:                                                                        //ldarg.0
	IL_0155:            Temp_23=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_015a:            Temp_24=safe_cast<System::Collections::ICollection^>(Temp_23)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_015f:            if(V_1<Temp_24)goto IL_01ab;                                //blt				IL_01ab
	IL_0164:                                                                        //ldc.i4				0xc
	IL_0169:            V_2=12;                                                     //stloc				V_2
	IL_016d:            /*goto IL_000d;*/goto IL_0172;                              //br				IL_000d
	IL_0172:            goto IL_0286;                                               //br				IL_0286
	IL_0177:                                                                        //ldc.i4				0x0
	IL_017c:            V_2=0;                                                      //stloc				V_2
	IL_0180:            /*goto IL_000d;*/goto IL_0185;                              //br				IL_000d
	IL_0185:                                                                        //ldarg.0
	IL_0186:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_018b:                                                                        //ldloc.1
	IL_018c:            Temp_1=Temp_0[V_1];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0191:            Temp_2=Temp_1->Status;                                      //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0196:            if(Temp_2==nullptr)goto IL_01e1;                            //brfalse.s				IL_01e1
	IL_0198:                                                                        //ldc.i4				0x6
	IL_019d:            V_2=6;                                                      //stloc				V_2
	IL_01a1:            /*goto IL_000d;*/goto IL_01a6;                              //br				IL_000d
	IL_01a6:            goto IL_00cc;                                               //br				IL_00cc
	IL_01ab:                                                                        //ldc.i4				0x3
	IL_01b0:            V_2=3;                                                      //stloc				V_2
	IL_01b4:            /*goto IL_000d;*/goto IL_01b9;                              //br				IL_000d
	IL_01b9:                                                                        //ldloc.0
	IL_01ba:            Temp_3=V_0->M_x5();                                         //callvirt				System::String^ Root::T_x136::M_x5()
	IL_01bf:            if(Temp_3==nullptr)goto IL_0177;                            //brfalse.s				IL_0177
	IL_01c1:                                                                        //ldc.i4				0xb
	IL_01c6:            V_2=11;                                                     //stloc				V_2
	IL_01ca:            /*goto IL_000d;*/goto IL_01cf;                              //br				IL_000d
	IL_01cf:            goto IL_0255;                                               //br				IL_0255
	IL_01d4:                                                                        //ldarg.0
	IL_01d5:            Temp_21=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_01da:                                                                        //ldloc.1
	IL_01db:            Temp_22=Temp_21[V_1];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_01e0:            return Temp_22;                                             //ret
	IL_01e1:                                                                        //ldc.i4				0x12
	IL_01e6:            V_2=18;                                                     //stloc				V_2
	IL_01ea:            /*goto IL_000d;*/goto IL_01ef;                              //br				IL_000d
	IL_01ef:                                                                        //ldloc.0
	IL_01f0:                                                                        //ldarg.0
	IL_01f1:            Temp_25=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_01f6:                                                                        //ldloc.1
	IL_01f7:            Temp_26=Temp_25[V_1];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_01fc:            Temp_27=V_0->M_x1(safe_cast<System::Object^>(Temp_26));     //callvirt				System::Boolean Root::T_x136::M_x1(System::Object^)
	IL_0201:            if(!Temp_27)goto IL_007c;                                   //brfalse				IL_007c
	IL_0206:                                                                        //ldc.i4				0x7
	IL_020b:            V_2=7;                                                      //stloc				V_2
	IL_020f:            /*goto IL_000d;*/goto IL_0214;                              //br				IL_000d
	IL_0214:            goto IL_0138;                                               //br				IL_0138
	IL_0219:                                                                        //ldc.i4.4
	IL_021a:                                                                        //dup
	IL_021b:                                                                        //dup
	IL_021c:                                                                        //ldc.i4.2
	IL_021d:                                                                        //sub
	IL_021e:                                                                        //blt				IL_021a
	IL_0223:                                                                        //pop
	IL_0224:                                                                        //ldc.i4				0x9
	IL_0229:            V_2=9;                                                      //stloc				V_2
	IL_022d:            /*goto IL_000d;*/goto IL_0232;                              //br				IL_000d
	IL_0232:                                                                        //ldarg.1
	IL_0233:            Temp_15=A_0->Trim();                                        //callvirt				System::String^ System::String::Trim()
	IL_0238:            Temp_16=Temp_15->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_023d:            if(Temp_16!=0)goto IL_0105;                                 //brtrue				IL_0105
	IL_0242:                                                                        //ldc.i4				0x1
	IL_0247:            V_2=1;                                                      //stloc				V_2
	IL_024b:            /*goto IL_000d;*/goto IL_0250;                              //br				IL_000d
	IL_0250:            goto IL_0136;                                               //br				IL_0136
	IL_0255:                                                                        //ldc.i4				0xd
	IL_025a:            V_2=13;                                                     //stloc				V_2
	IL_025e:            /*goto IL_000d;*/goto IL_0263;                              //br				IL_000d
	IL_0263:                                                                        //ldloc.0
	IL_0264:            Temp_19=V_0->M_x5();                                        //callvirt				System::String^ Root::T_x136::M_x5()
	IL_0269:            Temp_20=Temp_19->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_026e:            if(Temp_20!=0)goto IL_007c;                                 //brtrue				IL_007c
	IL_0273:                                                                        //ldc.i4				0x4
	IL_0278:            V_2=4;                                                      //stloc				V_2
	IL_027c:            /*goto IL_000d;*/goto IL_0281;                              //br				IL_000d
	IL_0281:            goto IL_0177;                                               //br				IL_0177
	IL_0286:                                                                        //ldarg.0
	IL_0287:            Temp_18=this->F_x12;                                        //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_028c:                                                                        //ldloc.0
	IL_028d:            Temp_18->Add(safe_cast<Reflector::CodeModel::IAssembly^>(V_0));//callvirt				void Reflector::CodeModel::IAssemblyCollection::Add(Reflector::CodeModel::IAssembly^)
	IL_0292:                                                                        //ldloc.0
	IL_0293:            return safe_cast<Reflector::CodeModel::IAssembly^>(V_0);    //ret

}
inline Reflector::CodeModel::IAssemblyCollection^ Root::T_x13::M_x12()
//Reflector::CodeModel::IAssemblyManager^::get_Assemblies by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyCollection^ Root::T_x13 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x13::M_x12(System::EventHandler^ A_0)
//Reflector::CodeModel::IAssemblyManager^::add_AssemblyLoaded by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0017:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyResolver^ Root::T_x13::M_x13()
//Reflector::CodeModel::IAssemblyManager^::get_Resolver by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyResolver^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyResolver^ Root::T_x13 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x13::M_x13(System::EventHandler^ A_0)
//Reflector::CodeModel::IAssemblyManager^::remove_AssemblyUnloaded by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0017:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyComparer^ Root::T_x13::M_x2()
//Reflector::CodeModel::IAssemblyManager^::get_Comparer by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyComparer^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Reflector::CodeModel::IAssemblyComparer^ Root::T_x13 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x13::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x13::M_x2(System::EventHandler^ A_0)
//Reflector::CodeModel::IAssemblyManager^::remove_AssemblyLoaded by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x13 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x13::T_x1::T_x1(Root::T_x13^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x1=safe_cast<Root::T_x13^>(nullptr);                //stfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldc.i4.0
	IL_0009:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_000e:            this->F_x2=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0013:                                                                        //ldarg.0
	IL_0014:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.1
	IL_001b:            this->F_x1=A_0;                                             //stfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_0020:            return;                                                     //ret

}
inline void Root::T_x13::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x13::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x13::T_x1::M_x1()
//Reflector::CodeModel::IAssemblyCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0044;case 1:goto IL_0037;case 2:goto IL_006b;case 3:goto IL_0053;};//switch				(IL_0044,IL_0037,IL_006b,IL_0053)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0021:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0026:                                                                        //ldc.i4.1
	IL_0027:                                                                        //sub
	IL_0028:            V_0=(Temp_1 - 1);                                           //stloc.0
	IL_0029:            goto IL_002c;                                               //br.s				IL_002c
	IL_002b:                                                                        //break
	IL_002c:                                                                        //ldc.i4				0x1
	IL_0031:            V_1=1;                                                      //stloc				V_1
	IL_0035:            /*goto IL_0002;*/goto IL_0037;                              //br.s				IL_0002
	IL_0037:            goto IL_0039;                                               //br.s				IL_0039
	IL_0039:                                                                        //ldc.i4				0x0
	IL_003e:            V_1=0;                                                      //stloc				V_1
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldloc.0
	IL_0045:                                                                        //ldc.i4.0
	IL_0046:            if(V_0>=0)goto IL_0055;                                     //bge.s				IL_0055
	IL_0048:                                                                        //ldc.i4				0x3
	IL_004d:            V_1=3;                                                      //stloc				V_1
	IL_0051:            /*goto IL_0002;*/goto IL_0053;                              //br.s				IL_0002
	IL_0053:            goto IL_006d;                                               //br.s				IL_006d
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldloc.0
	IL_0057:            this->M_x2(V_0);                                            //call				void Root::T_x13::T_x1::M_x2(System::Int32)
	IL_005c:                                                                        //ldloc.0
	IL_005d:                                                                        //ldc.i4.1
	IL_005e:                                                                        //add
	IL_005f:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0060:                                                                        //ldc.i4				0x2
	IL_0065:            V_1=2;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_0039;                                               //br.s				IL_0039
	IL_006d:            return;                                                     //ret

}
inline void Root::T_x13::T_x1::M_x1(array<Reflector::CodeModel::IAssembly^>^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(safe_cast<System::Array^>(A_0),A_1);         //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x13::T_x1::M_x1(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::CodeModel::IAssemblyCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->IndexOf(safe_cast<System::Object^>(A_0));    //callvirt				System::Int32 System::Collections::ArrayList::IndexOf(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x13::T_x1::M_x1(System::Collections::ICollection^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
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
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_3=3;                                                      //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_0053;case 1:goto IL_0060;case 2:goto IL_0080;case 3:goto IL_0014;case 4:goto IL_0073;};//switch				(IL_0053,IL_0060,IL_0080,IL_0014,IL_0073)
	IL_0033:            goto IL_0055;                                               //br.s				IL_0055
	IL_0035:                                                                        //ldloc.1
	IL_0036:            Temp_2=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_003b:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0040:            V_0=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_2);    //stloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldloc.0
	IL_0043:            this->M_x12(V_0);                                           //call				void Root::T_x13::T_x1::M_x12(Reflector::CodeModel::IAssembly^)
	IL_0048:                                                                        //ldc.i4				0x0
	IL_004d:            V_3=0;                                                      //stloc				V_3
	IL_0051:            /*goto IL_0016;*/goto IL_0053;                              //br.s				IL_0016
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldc.i4				0x1
	IL_005a:            V_3=1;                                                      //stloc				V_3
	IL_005e:            /*goto IL_0016;*/goto IL_0060;                              //br.s				IL_0016
	IL_0060:                                                                        //ldloc.1
	IL_0061:            Temp_1=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0066:            if(Temp_1)goto IL_0035;                                     //brtrue.s				IL_0035
	IL_0068:                                                                        //ldc.i4				0x4
	IL_006d:            V_3=4;                                                      //stloc				V_3
	IL_0071:            /*goto IL_0016;*/goto IL_0073;                              //br.s				IL_0016
	IL_0073:            goto IL_0075;                                               //br.s				IL_0075
	IL_0075:                                                                        //ldc.i4				0x2
	IL_007a:            V_3=2;                                                      //stloc				V_3
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:            goto IL_00cf;                                               //leave.s				IL_00cf
	                    ;}
	                    finally{
	IL_0082:            goto IL_0099;                                               //br.s				IL_0099
	IL_0084:                                                                        //ldloc				V_4
	IL_0088:            switch(V_4){case 0:goto IL_00cc;case 1:goto IL_00ab;case 2:goto IL_00b9;};//switch				(IL_00cc,IL_00ab,IL_00b9)
	IL_0099:                                                                        //ldloc.1
	IL_009a:                                                                        //isinst				System::IDisposable
	IL_009f:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00a0:                                                                        //ldc.i4				0x1
	IL_00a5:            V_4=1;                                                      //stloc				V_4
	IL_00a9:            /*goto IL_0084;*/goto IL_00ab;                              //br.s				IL_0084
	IL_00ab:                                                                        //ldloc.2
	IL_00ac:            if(V_2==nullptr)goto IL_00ce;                               //brfalse.s				IL_00ce
	IL_00ae:                                                                        //ldc.i4				0x2
	IL_00b3:            V_4=2;                                                      //stloc				V_4
	IL_00b7:            /*goto IL_0084;*/goto IL_00b9;                              //br.s				IL_0084
	IL_00b9:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_00bb:                                                                        //ldloc.2
	IL_00bc:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00c1:                                                                        //ldc.i4				0x0
	IL_00c6:            V_4=0;                                                      //stloc				V_4
	IL_00ca:            /*goto IL_0084;*/goto IL_00cc;                              //br.s				IL_0084
	IL_00cc:            goto IL_00ce;                                               //br.s				IL_00ce
	IL_00ce:                                                                        //endfinally
	                    ;}
	IL_00cf:                                                                        //ldc.i4.4
	IL_00d0:                                                                        //dup
	IL_00d1:                                                                        //dup
	IL_00d2:                                                                        //ldc.i4.2
	IL_00d3:                                                                        //sub
	IL_00d4:                                                                        //blt				IL_00d0
	IL_00d9:                                                                        //pop
	IL_00da:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x13::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IAssemblyCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0011:            return safe_cast<Reflector::CodeModel::IAssembly^>(Temp_1); //ret

}
inline void Root::T_x13::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IAssembly^ A_1)
//Reflector::CodeModel::IAssemblyCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x13^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:            this->M_x1(A_0,A_1);                                        //call				void Root::T_x13::T_x1::M_x1(System::Int32,Reflector::CodeModel::IAssembly^)
	IL_0008:                                                                        //ldarg.0
	IL_0009:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_000e:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0013:            Temp_0->M_x1(Temp_1);                                       //callvirt				void Root::T_x13::M_x1(System::EventArgs^)
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x13::T_x1::M_x12(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::CodeModel::IAssemblyCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x13^ Temp_2 = nullptr;
	System::EventArgs^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_0013:            Temp_3=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0018:            Temp_2->M_x1(Temp_3);                                       //callvirt				void Root::T_x13::M_x1(System::EventArgs^)
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x13::T_x1::M_x13(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::CodeModel::IAssemblyCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	Root::T_x13^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_0012:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0017:            Temp_1->M_x2(Temp_2);                                       //callvirt				void Root::T_x13::M_x2(System::EventArgs^)
	IL_001c:            return;                                                     //ret

}
inline System::Boolean Root::T_x13::T_x1::M_x2(Reflector::CodeModel::IAssembly^ A_0)
//Reflector::CodeModel::IAssemblyCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x13::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IAssemblyCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::Collections::ArrayList^ Temp_1 = nullptr;
	Root::T_x13^ Temp_2 = nullptr;
	System::EventArgs^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=this->M_x1(A_0);                                     //call				Reflector::CodeModel::IAssembly^ Root::T_x13::T_x1::M_x1(System::Int32)
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_1=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1->RemoveAt(A_0);                                      //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x13^ Root::T_x13::T_x1 F_x1
	IL_001d:            Temp_3=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0022:            Temp_2->M_x1(Temp_3);                                       //callvirt				void Root::T_x13::M_x1(System::EventArgs^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x13::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IAssembly^ A_1)
//Reflector::CodeModel::IAssemblyCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0[A_0]=safe_cast<System::Object^>(A_1);                //callvirt				void System::Collections::ArrayList::set_Item(System::Int32,System::Object^)
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x13::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x13::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::ArrayList::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x13::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::ArrayList^ Root::T_x13::T_x1 F_x2
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::ArrayList::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
