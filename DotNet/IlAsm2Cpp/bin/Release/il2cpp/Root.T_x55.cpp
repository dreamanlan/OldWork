#include "global_xref.h"

inline Root::T_x55::T_x55()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x55::T_x1^ Temp_0 = nullptr;
	Root::T_x55::T_x12^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x55::T_x1(this);                       //newobj				void Root::T_x55::T_x1::.ctor(Root::T_x55^)
	IL_000d:            this->F_x2=Temp_0;                                          //stfld				Root::T_x55::T_x1^ Root::T_x55 F_x2
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_1=gcnew Root::T_x55::T_x12();                          //newobj				void Root::T_x55::T_x12::.ctor()
	IL_0018:            this->F_x1=Temp_1;                                          //stfld				Root::T_x55::T_x12^ Root::T_x55 F_x1
	IL_001d:            return;                                                     //ret

}
inline Reflector::CodeModel::IStringCollection^ Root::T_x55::M_x1()
//Reflector::CodeModel::IAssemblyCache^::get_Directories by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x55::T_x12^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x55::T_x12^ Root::T_x55 F_x1
	IL_0006:            return safe_cast<Reflector::CodeModel::IStringCollection^>(Temp_0);//ret

}
inline System::String^ Root::T_x55::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::Collections::IEnumerable^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Boolean Temp_3 = false;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_003f;case 1:goto IL_0088;case 2:goto IL_0078;case 3:goto IL_0050;case 4:goto IL_0061;case 5:goto IL_00a7;};//switch				(IL_003f,IL_0088,IL_0078,IL_0050,IL_0061,IL_00a7)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.1
	IL_0025:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_002a:                                                                        //ldarg.2
	IL_002b:                                                                        //ldarg.3
	IL_002c:            Temp_1=this->M_x1(Temp_0,A_1,A_2);                          //call				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::Collections::IEnumerable^,System::Int32)
	IL_0031:            V_0=Temp_1;                                                 //stloc.0
	IL_0032:                                                                        //ldc.i4.0
	IL_0033:            V_1=0;                                                      //stloc.1
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_2=0;                                                      //stloc				V_2
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_007a;                                               //br.s				IL_007a
	IL_0041:                                                                        //ldloc.1
	IL_0042:                                                                        //ldc.i4.1
	IL_0043:                                                                        //add
	IL_0044:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0045:                                                                        //ldc.i4				0x3
	IL_004a:            V_2=3;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:            goto IL_007a;                                               //br.s				IL_007a
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldloc.1
	IL_0054:                                                                        //ldelem.ref
	IL_0055:            return V_0[V_1];                                            //ret
	IL_0056:                                                                        //ldc.i4				0x4
	IL_005b:            V_2=4;                                                      //stloc				V_2
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:                                                                        //ldarg.0
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldloc.1
	IL_0064:                                                                        //ldelem.ref
	IL_0065:                                                                        //ldarg.1
	IL_0066:            Temp_3=this->M_x1(V_0[V_1],A_0);                            //call				System::Boolean Root::T_x55::M_x1(System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_006b:            if(!Temp_3)goto IL_0041;                                    //brfalse.s				IL_0041
	IL_006d:                                                                        //ldc.i4				0x2
	IL_0072:            V_2=2;                                                      //stloc				V_2
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:            goto IL_0052;                                               //br.s				IL_0052
	IL_007a:                                                                        //ldc.i4				0x1
	IL_007f:            V_2=1;                                                      //stloc				V_2
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldc.i4.4
	IL_0089:                                                                        //dup
	IL_008a:                                                                        //dup
	IL_008b:                                                                        //ldc.i4.2
	IL_008c:                                                                        //sub
	IL_008d:                                                                        //blt				IL_0089
	IL_0092:                                                                        //pop
	IL_0093:                                                                        //ldloc.1
	IL_0094:                                                                        //ldloc.0
	IL_0095:            Temp_2=V_0->Length;                                         //ldlen
	IL_0096:                                                                        //conv.i4
	IL_0097:            if(V_1<Temp_2)goto IL_0056;                                 //blt.s				IL_0056
	IL_0099:                                                                        //ldc.i4				0x5
	IL_009e:            V_2=5;                                                      //stloc				V_2
	IL_00a2:            /*goto IL_0002;*/goto IL_00a7;                              //br				IL_0002
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:                                                                        //ldnull
	IL_00aa:            return nullptr;                                             //ret

}
inline System::String^ Root::T_x55::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyCache^::QueryLocation by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	array<System::String^>^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Root::T_x55::T_x12^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	array<System::String^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            goto IL_0034;                                               //br.s				IL_0034
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_00ae;case 1:goto IL_00e4;case 2:goto IL_00f4;case 3:goto IL_009d;case 4:goto IL_010c;case 5:goto IL_005f;case 6:goto IL_00d3;case 7:goto IL_0077;};//switch				(IL_00ae,IL_00e4,IL_00f4,IL_009d,IL_010c,IL_005f,IL_00d3,IL_0077)
	IL_0034:                                                                        //ldarg.2
	IL_0035:                                                                        //ldarg.1
	IL_0036:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_003b:                                                                        //ldstr				L"\x0B24\x4326\x4528\x472A"
	IL_0040:                                                                        //ldloc				V_3
	IL_0044:            Temp_1=a(L"\x0B24\x4326\x4528\x472A",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0049:            Temp_2=System::String::Concat(Temp_0,Temp_1);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_004e:            Temp_3=System::IO::Path::Combine(A_1,Temp_2);               //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_0053:            V_0=Temp_3;                                                 //stloc.0
	IL_0054:                                                                        //ldc.i4				0x5
	IL_0059:            V_2=5;                                                      //stloc				V_2
	IL_005d:            /*goto IL_000b;*/goto IL_005f;                              //br.s				IL_000b
	IL_005f:                                                                        //ldloc.0
	IL_0060:            Temp_7=Root::T_x148::M_x1(V_0);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_0065:            Temp_8=System::IO::File::Exists(Temp_7);                    //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_006a:            if(!Temp_8)goto IL_00b0;                                    //brfalse.s				IL_00b0
	IL_006c:                                                                        //ldc.i4				0x7
	IL_0071:            V_2=7;                                                      //stloc				V_2
	IL_0075:            /*goto IL_000b;*/goto IL_0077;                              //br.s				IL_000b
	IL_0077:            goto IL_007a;                                               //br.s				IL_007a
	IL_0079:                                                                        //break
	IL_007a:            goto IL_00e6;                                               //br.s				IL_00e6
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //ldarg.1
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x55::T_x12^ Root::T_x55 F_x1
	IL_0084:                                                                        //ldc.i4				0x7fffffff
	IL_0089:            Temp_10=this->M_x1(A_0,safe_cast<System::Collections::IEnumerable^>(Temp_9),safe_cast<System::Int32>(2147483647));//call				System::String^ Root::T_x55::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Collections::IEnumerable^,System::Int32)
	IL_008e:            V_0=Temp_10;                                                //stloc.0
	IL_008f:                                                                        //ldc.i4				0x3
	IL_0094:            V_2=3;                                                      //stloc				V_2
	IL_0098:            /*goto IL_000b;*/goto IL_009d;                              //br				IL_000b
	IL_009d:                                                                        //ldloc.0
	IL_009e:            if(V_0==nullptr)goto IL_0114;                               //brfalse.s				IL_0114
	IL_00a0:                                                                        //ldc.i4				0x0
	IL_00a5:            V_2=0;                                                      //stloc				V_2
	IL_00a9:            /*goto IL_000b;*/goto IL_00ae;                              //br				IL_000b
	IL_00ae:            goto IL_010e;                                               //br.s				IL_010e
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:                                                                        //ldarg.1
	IL_00b2:                                                                        //ldc.i4.1
	IL_00b3:            Temp_5=gcnew array<System::String^>(1);                     //newarr				System::String
	IL_00b8:            V_1=Temp_5;                                                 //stloc.1
	IL_00b9:                                                                        //ldloc.1
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:                                                                        //ldarg.2
	IL_00bc:            V_1[0]=A_1;                                                 //stelem.ref
	IL_00bd:                                                                        //ldloc.1
	IL_00be:                                                                        //ldc.i4.1
	IL_00bf:            Temp_6=this->M_x1(A_0,safe_cast<System::Collections::IEnumerable^>(V_1),safe_cast<System::Int32>(1));//call				System::String^ Root::T_x55::M_x1(Reflector::CodeModel::IAssemblyReference^,System::Collections::IEnumerable^,System::Int32)
	IL_00c4:            V_0=Temp_6;                                                 //stloc.0
	IL_00c5:                                                                        //ldc.i4				0x6
	IL_00ca:            V_2=6;                                                      //stloc				V_2
	IL_00ce:            /*goto IL_000b;*/goto IL_00d3;                              //br				IL_000b
	IL_00d3:                                                                        //ldloc.0
	IL_00d4:            if(V_0==nullptr)goto IL_007c;                               //brfalse.s				IL_007c
	IL_00d6:                                                                        //ldc.i4				0x1
	IL_00db:            V_2=1;                                                      //stloc				V_2
	IL_00df:            /*goto IL_000b;*/goto IL_00e4;                              //br				IL_000b
	IL_00e4:            goto IL_0112;                                               //br.s				IL_0112
	IL_00e6:                                                                        //ldc.i4				0x2
	IL_00eb:            V_2=2;                                                      //stloc				V_2
	IL_00ef:            /*goto IL_000b;*/goto IL_00f4;                              //br				IL_000b
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:                                                                        //ldloc.0
	IL_00f6:                                                                        //ldarg.1
	IL_00f7:            Temp_4=this->M_x1(V_0,A_0);                                 //call				System::Boolean Root::T_x55::M_x1(System::String^,Reflector::CodeModel::IAssemblyReference^)
	IL_00fc:            if(!Temp_4)goto IL_00b0;                                    //brfalse.s				IL_00b0
	IL_00fe:                                                                        //ldc.i4				0x4
	IL_0103:            V_2=4;                                                      //stloc				V_2
	IL_0107:            /*goto IL_000b;*/goto IL_010c;                              //br				IL_000b
	IL_010c:            goto IL_0110;                                               //br.s				IL_0110
	IL_010e:                                                                        //ldloc.0
	IL_010f:            return V_0;                                                 //ret
	IL_0110:                                                                        //ldloc.0
	IL_0111:            return V_0;                                                 //ret
	IL_0112:                                                                        //ldloc.0
	IL_0113:            return V_0;                                                 //ret
	IL_0114:                                                                        //ldnull
	IL_0115:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x55::M_x1(System::String^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModule^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IAssemblyReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	System::Boolean V_1 = false;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            /*goto IL_002b;*/goto IL_000001;                            //br.s				IL_002b
	IL_000001:          try{
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_004e;case 1:goto IL_006e;case 2:goto IL_0093;case 3:goto IL_0081;case 4:goto IL_00bf;case 5:goto IL_0061;case 6:goto IL_00cf;case 7:goto IL_00a3;};//switch				(IL_004e,IL_006e,IL_0093,IL_0081,IL_00bf,IL_0061,IL_00cf,IL_00a3)
	IL_002b:                                                                        //ldarg.2
	IL_002c:            Temp_0=A_1->Context;                                        //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IAssemblyReference::get_Context()
	IL_0031:            Temp_1=Temp_0->Assembly;                                    //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0036:            Temp_2=Temp_1->AssemblyManager;                             //callvirt				Reflector::CodeModel::IAssemblyManager^ Reflector::CodeModel::IAssembly::get_AssemblyManager()
	IL_003b:                                                                        //ldnull
	IL_003c:                                                                        //ldarg.1
	IL_003d:            Temp_3=gcnew Root::T_x2(Temp_2,safe_cast<Root::T_x136^>(nullptr),A_0);//newobj				void Root::T_x2::.ctor(Reflector::CodeModel::IAssemblyManager^,Root::T_x136^,System::String^)
	IL_0042:            V_0=Temp_3;                                                 //stloc.0
	IL_0043:                                                                        //ldc.i4				0x0
	IL_0048:            V_2=0;                                                      //stloc				V_2
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_4=V_0->M_x57();                                        //callvirt				System::Boolean Root::T_x2::M_x57()
	IL_0054:            if(!Temp_4)goto IL_00c1;                                    //brfalse.s				IL_00c1
	IL_0056:                                                                        //ldc.i4				0x5
	IL_005b:            V_2=5;                                                      //stloc				V_2
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_0063;                                               //br.s				IL_0063
	IL_0063:                                                                        //ldc.i4				0x1
	IL_0068:            V_2=1;                                                      //stloc				V_2
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:                                                                        //ldloc.0
	IL_006f:            Temp_5=V_0->M_x13();                                        //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_0074:            if(Temp_5==nullptr)goto IL_00c1;                            //brfalse.s				IL_00c1
	IL_0076:                                                                        //ldc.i4				0x3
	IL_007b:            V_2=3;                                                      //stloc				V_2
	IL_007f:            /*goto IL_0002;*/goto IL_0081;                              //br.s				IL_0002
	IL_0081:            goto IL_0095;                                               //br.s				IL_0095
	IL_0083:                                                                        //ldc.i4.1
	IL_0084:            V_1=true;                                                   //stloc.1
	IL_0085:                                                                        //ldc.i4				0x2
	IL_008a:            V_2=2;                                                      //stloc				V_2
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_00d6;                                               //leave.s				IL_00d6
	IL_0095:                                                                        //ldc.i4				0x7
	IL_009a:            V_2=7;                                                      //stloc				V_2
	IL_009e:            /*goto IL_0002;*/goto IL_00a3;                              //br				IL_0002
	IL_00a3:                                                                        //ldloc.0
	IL_00a4:            Temp_6=V_0->M_x13();                                        //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_00a9:                                                                        //ldarg.2
	IL_00aa:            Temp_7=safe_cast<System::IComparable^>(Temp_6)->CompareTo(safe_cast<System::Object^>(A_1));//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_00af:            if(Temp_7!=0)goto IL_00c1;                                  //brtrue.s				IL_00c1
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_2=4;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_0002;*/goto IL_00bf;                              //br				IL_0002
	IL_00bf:            goto IL_0083;                                               //br.s				IL_0083
	IL_00c1:                                                                        //ldc.i4				0x6
	IL_00c6:            V_2=6;                                                      //stloc				V_2
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:            goto IL_00d4;                                               //leave.s				IL_00d4
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_00CF02){
	IL_00d1:                                                                        //pop
	IL_00d2:            goto IL_00d4;                                               //leave.s				IL_00d4
	                    ;}
	IL_00d4:                                                                        //ldc.i4.0
	IL_00d5:            return false;                                               //ret
	IL_00d6:            goto IL_00d9;                                               //br.s				IL_00d9
	IL_00d8:                                                                        //break
	IL_00d9:                                                                        //ldloc.1
	IL_00da:            return V_1;                                                 //ret

}
inline array<System::String^>^ Root::T_x55::M_x1(System::String^ A_0,System::Collections::IEnumerable^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::String^>^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	array<System::String^>^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	array<System::String^>^ Temp_11 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	array<System::String^>^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_7=17;                                                     //stloc				V_7
	IL_0009:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_000e:            V_0=Temp_0;                                                 //stloc.0
	IL_000f:                                                                        //ldarg.2
	IL_0010:            Temp_1=A_1->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0015:            V_3=Temp_1;                                                 //stloc.3
	IL_0016:            /*goto IL_0018;*/goto IL_001601;                            //br.s				IL_0018
	IL_001601:          try{
	IL_0018:                                                                        //ldc.i4				0x3
	IL_001d:            V_5=3;                                                      //stloc				V_5
	IL_0021:            /*goto IL_0025;*/goto IL_0023;                              //br.s				IL_0025
	IL_0023:            goto IL_0042;                                               //br.s				IL_0042
	IL_0025:                                                                        //ldloc				V_5
	IL_0029:            switch(V_5){case 0:goto IL_00a2;case 1:goto IL_00d8;case 2:goto IL_00c8;case 3:goto IL_0023;case 4:goto IL_00b2;};//switch				(IL_00a2,IL_00d8,IL_00c8,IL_0023,IL_00b2)
	IL_0042:            goto IL_0045;                                               //br.s				IL_0045
	IL_0044:                                                                        //break
	IL_0045:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_0047:                                                                        //ldloc.3
	IL_0048:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004d:                                                                        //castclass				System::String
	IL_0052:            V_1=safe_cast<System::String^>(Temp_3);                     //stloc.1
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldarg.1
	IL_0056:                                                                        //ldstr				L"\x012E\x5530\x5F32\x5934"
	IL_005b:                                                                        //ldloc				V_7
	IL_005f:            Temp_4=a(L"\x012E\x5530\x5F32\x5934",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0064:            Temp_5=System::String::Concat(A_0,Temp_4);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0069:                                                                        //ldloc.1
	IL_006a:                                                                        //ldarg.3
	IL_006b:            Temp_6=this->M_x1(Temp_5,V_1,A_2);                          //call				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::String^,System::Int32)
	IL_0070:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_6));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0075:                                                                        //ldloc.0
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldarg.1
	IL_0078:                                                                        //ldstr				L"\x012E\x5430\x4B32\x5034"
	IL_007d:                                                                        //ldloc				V_7
	IL_0081:            Temp_7=a(L"\x012E\x5430\x4B32\x5034",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:            Temp_8=System::String::Concat(A_0,Temp_7);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_008b:                                                                        //ldloc.1
	IL_008c:                                                                        //ldarg.3
	IL_008d:            Temp_9=this->M_x1(Temp_8,V_1,A_2);                          //call				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::String^,System::Int32)
	IL_0092:            V_0->AddRange(safe_cast<System::Collections::ICollection^>(Temp_9));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_0097:                                                                        //ldc.i4				0x0
	IL_009c:            V_5=0;                                                      //stloc				V_5
	IL_00a0:            /*goto IL_0025;*/goto IL_00a2;                              //br.s				IL_0025
	IL_00a2:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_00a4:                                                                        //ldc.i4				0x4
	IL_00a9:            V_5=4;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_0025;*/goto IL_00b2;                              //br				IL_0025
	IL_00b2:                                                                        //ldloc.3
	IL_00b3:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00b8:            if(Temp_2)goto IL_0047;                                     //brtrue.s				IL_0047
	IL_00ba:                                                                        //ldc.i4				0x2
	IL_00bf:            V_5=2;                                                      //stloc				V_5
	IL_00c3:            /*goto IL_0025;*/goto IL_00c8;                              //br				IL_0025
	IL_00c8:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_00ca:                                                                        //ldc.i4				0x1
	IL_00cf:            V_5=1;                                                      //stloc				V_5
	IL_00d3:            /*goto IL_0025;*/goto IL_00d8;                              //br				IL_0025
	IL_00d8:            goto IL_012a;                                               //leave.s				IL_012a
	                    ;}
	                    finally{
	IL_00da:            goto IL_00f1;                                               //br.s				IL_00f1
	IL_00dc:                                                                        //ldloc				V_6
	IL_00e0:            switch(V_6){case 0:goto IL_0113;case 1:goto IL_0127;case 2:goto IL_0104;};//switch				(IL_0113,IL_0127,IL_0104)
	IL_00f1:                                                                        //ldloc.3
	IL_00f2:                                                                        //isinst				System::IDisposable
	IL_00f7:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00f9:                                                                        //ldc.i4				0x2
	IL_00fe:            V_6=2;                                                      //stloc				V_6
	IL_0102:            /*goto IL_00dc;*/goto IL_0104;                              //br.s				IL_00dc
	IL_0104:                                                                        //ldloc.s				V_4
	IL_0106:            if(V_4==nullptr)goto IL_0129;                               //brfalse.s				IL_0129
	IL_0108:                                                                        //ldc.i4				0x0
	IL_010d:            V_6=0;                                                      //stloc				V_6
	IL_0111:            /*goto IL_00dc;*/goto IL_0113;                              //br.s				IL_00dc
	IL_0113:            goto IL_0115;                                               //br.s				IL_0115
	IL_0115:                                                                        //ldloc.s				V_4
	IL_0117:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_011c:                                                                        //ldc.i4				0x1
	IL_0121:            V_6=1;                                                      //stloc				V_6
	IL_0125:            /*goto IL_00dc;*/goto IL_0127;                              //br.s				IL_00dc
	IL_0127:            goto IL_0129;                                               //br.s				IL_0129
	IL_0129:                                                                        //endfinally
	                    ;}
	IL_012a:                                                                        //ldloc.0
	IL_012b:            Temp_10=V_0->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0130:                                                                        //conv.ovf.u4
	IL_0131:            Temp_11=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_10));//newarr				System::String
	IL_0136:            V_2=Temp_11;                                                //stloc.2
	IL_0137:                                                                        //ldloc.0
	IL_0138:                                                                        //ldloc.2
	IL_0139:                                                                        //ldc.i4.0
	IL_013a:            V_0->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_013f:                                                                        //ldloc.2
	IL_0140:            return V_2;                                                 //ret

}
inline array<System::String^>^ Root::T_x55::M_x1(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x55::T_x12^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.0
	IL_0003:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x55::T_x12^ Root::T_x55 F_x1
	IL_0008:                                                                        //ldarg.2
	IL_0009:            Temp_1=this->M_x1(A_0,safe_cast<System::Collections::IEnumerable^>(Temp_0),A_1);//call				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::Collections::IEnumerable^,System::Int32)
	IL_000e:            return Temp_1;                                              //ret

}
inline array<System::String^>^ Root::T_x55::M_x1(System::String^ A_0,System::String^ A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Globalization::CultureInfo^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Collections::ArrayList^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	array<System::String^>^ Temp_14 = nullptr;
	array<System::String^>^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::Int32 Temp_18 = 0;
	System::String^ Temp_19 = nullptr;
	array<System::String^>^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	array<System::String^>^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	array<System::String^>^ Temp_25 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Collections::ArrayList^ V_3 = nullptr;
	array<System::String^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::String^ V_6 = nullptr;
	array<System::String^>^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::String^ V_9 = nullptr;
	array<System::String^>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_12=1;                                                     //stloc				V_12
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_11
	IL_000f:            switch(V_11){case 0:goto IL_009f;case 1:goto IL_004e;case 2:goto IL_00d0;case 3:goto IL_025e;case 4:goto IL_0079;};//switch				(IL_009f,IL_004e,IL_00d0,IL_025e,IL_0079)
	IL_0028:                                                                        //ldarg.2
	IL_0029:            Temp_0=Root::T_x148::M_x1(A_1);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_002e:            V_0=Temp_0;                                                 //stloc.0
	IL_002f:                                                                        //ldstr				L"\x3A1E\x7220\x5A22\x5624\x5326\x4C28\x462A\x7F2C\x402E\x5E30\x4732\x1034\x6B36\x7438\x523A\x5E3C\x4D3E\x2E40\x3042\x2A44\x2146\x3D48\x654A\x234C\x2A4E\x2550\x0F52\x1354\x2556\x3858\x365A\x385C\x285E\x0E60\x1162\x0E64"
	IL_0034:                                                                        //ldloc				V_12
	IL_0038:            Temp_1=a(L"\x3A1E\x7220\x5A22\x5624\x5326\x4C28\x462A\x7F2C\x402E\x5E30\x4732\x1034\x6B36\x7438\x523A\x5E3C\x4D3E\x2E40\x3042\x2A44\x2146\x3D48\x654A\x234C\x2A4E\x2550\x0F52\x1354\x2556\x3858\x365A\x385C\x285E\x0E60\x1162\x0E64",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003d:            Temp_2=Root::T_x148::M_x1(Temp_1);                          //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_0042:            V_1=Temp_2;                                                 //stloc.1
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_11=1;                                                     //stloc				V_11
	IL_004c:            /*goto IL_000b;*/goto IL_004e;                              //br.s				IL_000b
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0054:            Temp_10=V_0->ToLower(Temp_9);                               //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0059:                                                                        //ldloc.1
	IL_005a:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_005f:            Temp_12=V_1->ToLower(Temp_11);                              //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0064:            Temp_13=Temp_10->StartsWith(Temp_12);                       //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0069:            if(!Temp_13)goto IL_0249;                                   //brfalse				IL_0249
	IL_006e:                                                                        //ldc.i4				0x4
	IL_0073:            V_11=4;                                                     //stloc				V_11
	IL_0077:            /*goto IL_000b;*/goto IL_0079;                              //br.s				IL_000b
	IL_0079:            goto IL_0082;                                               //br.s				IL_0082
	IL_007b:                                                                        //ldc.i4.0
	IL_007c:            Temp_14=gcnew array<System::String^>(0);                    //newarr				System::String
	IL_0081:            return Temp_14;                                             //ret
	IL_0082:                                                                        //ldstr				L"\x4B1E\x4420\x4E22\x5524\x4826\x5B28\x4A2A\x5F2C\x562E\x1130\x7232\x6634\x6736\x1738\x753A\x783C\x6B3E\x6140\x0542\x2C44\x2B46\x2C48\x384A"
	IL_0087:                                                                        //ldloc				V_12
	IL_008b:            Temp_19=a(L"\x4B1E\x4420\x4E22\x5524\x4826\x5B28\x4A2A\x5F2C\x562E\x1130\x7232\x6634\x6736\x1738\x753A\x783C\x6B3E\x6140\x0542\x2C44\x2B46\x2C48\x384A",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:            V_2=Temp_19;                                                //stloc.2
	IL_0091:                                                                        //ldc.i4				0x0
	IL_0096:            V_11=0;                                                     //stloc				V_11
	IL_009a:            /*goto IL_000b;*/goto IL_009f;                              //br				IL_000b
	IL_009f:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a1:                                                                        //break
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:            Temp_3=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a8:            Temp_4=V_0->ToLower(Temp_3);                                //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_00ad:                                                                        //ldloc.2
	IL_00ae:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00b3:            Temp_6=V_2->ToLower(Temp_5);                                //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_00b8:            Temp_7=Temp_4->EndsWith(Temp_6);                            //callvirt				System::Boolean System::String::EndsWith(System::String^)
	IL_00bd:            if(!Temp_7)goto IL_0249;                                    //brfalse				IL_0249
	IL_00c2:                                                                        //ldc.i4				0x2
	IL_00c7:            V_11=2;                                                     //stloc				V_11
	IL_00cb:            /*goto IL_000b;*/goto IL_00d0;                              //br				IL_000b
	IL_00d0:            goto IL_007b;                                               //br.s				IL_007b
	IL_00D001:          try{
	IL_00d2:                                                                        //ldc.i4				0x5
	IL_00d7:            V_11=5;                                                     //stloc				V_11
	IL_00db:            /*goto IL_00df;*/goto IL_00dd;                              //br.s				IL_00df
	IL_00dd:            goto IL_0104;                                               //br.s				IL_0104
	IL_00df:                                                                        //ldloc				V_11
	IL_00e3:            switch(V_11){case 0:goto IL_014b;case 1:goto IL_0113;case 2:goto IL_0191;case 3:goto IL_0120;case 4:goto IL_0133;case 5:goto IL_00dd;case 6:goto IL_0181;};//switch				(IL_014b,IL_0113,IL_0191,IL_0120,IL_0133,IL_00dd,IL_0181)
	IL_0104:                                                                        //ldarg.3
	IL_0105:                                                                        //ldc.i4.0
	IL_0106:            if(A_2<=0)goto IL_0183;                                     //ble.s				IL_0183
	IL_0108:                                                                        //ldc.i4				0x1
	IL_010d:            V_11=1;                                                     //stloc				V_11
	IL_0111:            /*goto IL_00df;*/goto IL_0113;                              //br.s				IL_00df
	IL_0113:            goto IL_0135;                                               //br.s				IL_0135
	IL_0115:                                                                        //ldc.i4				0x3
	IL_011a:            V_11=3;                                                     //stloc				V_11
	IL_011e:            /*goto IL_00df;*/goto IL_0120;                              //br.s				IL_00df
	IL_0120:                                                                        //ldloc.s				V_8
	IL_0122:                                                                        //ldloc.s				V_7
	IL_0124:            Temp_21=V_7->Length;                                        //ldlen
	IL_0125:                                                                        //conv.i4
	IL_0126:            if(V_8<Temp_21)goto IL_014d;                                //blt.s				IL_014d
	IL_0128:                                                                        //ldc.i4				0x4
	IL_012d:            V_11=4;                                                     //stloc				V_11
	IL_0131:            /*goto IL_00df;*/goto IL_0133;                              //br.s				IL_00df
	IL_0133:            goto IL_0183;                                               //br.s				IL_0183
	IL_0135:                                                                        //ldloc.0
	IL_0136:            Temp_20=System::IO::Directory::GetDirectories(V_0);         //call				array<System::String^>^ System::IO::Directory::GetDirectories(System::String^)
	IL_013b:            V_7=Temp_20;                                                //stloc.s				V_7
	IL_013d:                                                                        //ldc.i4.0
	IL_013e:            V_8=0;                                                      //stloc.s				V_8
	IL_0140:                                                                        //ldc.i4				0x0
	IL_0145:            V_11=0;                                                     //stloc				V_11
	IL_0149:            /*goto IL_00df;*/goto IL_014b;                              //br.s				IL_00df
	IL_014b:            goto IL_0115;                                               //br.s				IL_0115
	IL_014d:                                                                        //ldloc.s				V_7
	IL_014f:                                                                        //ldloc.s				V_8
	IL_0151:                                                                        //ldelem.ref
	IL_0152:                                                                        //ldloc.0
	IL_0153:                                                                        //ldarg.2
	IL_0154:            Temp_22=V_7[V_8]->Replace(V_0,A_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0159:            V_9=Temp_22;                                                //stloc.s				V_9
	IL_015b:                                                                        //ldloc.3
	IL_015c:                                                                        //ldarg.0
	IL_015d:                                                                        //ldarg.1
	IL_015e:                                                                        //ldloc.s				V_9
	IL_0160:                                                                        //ldarg.3
	IL_0161:                                                                        //ldc.i4.1
	IL_0162:                                                                        //sub
	IL_0163:            Temp_23=this->M_x1(A_0,V_9,(A_2 - 1));                      //call				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::String^,System::Int32)
	IL_0168:            V_3->AddRange(safe_cast<System::Collections::ICollection^>(Temp_23));//callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_016d:                                                                        //ldloc.s				V_8
	IL_016f:                                                                        //ldc.i4.1
	IL_0170:                                                                        //add
	IL_0171:            V_8=(V_8 + 1);                                              //stloc.s				V_8
	IL_0173:                                                                        //ldc.i4				0x6
	IL_0178:            V_11=6;                                                     //stloc				V_11
	IL_017c:            /*goto IL_00df;*/goto IL_0181;                              //br				IL_00df
	IL_0181:            goto IL_0115;                                               //br.s				IL_0115
	IL_0183:                                                                        //ldc.i4				0x2
	IL_0188:            V_11=2;                                                     //stloc				V_11
	IL_018c:            /*goto IL_00df;*/goto IL_0191;                              //br				IL_00df
	IL_0191:            goto IL_0263;                                               //leave				IL_0263
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_019102){
	IL_0196:                                                                        //pop
	IL_0197:            goto IL_0263;                                               //leave				IL_0263
	                    ;}
	                    catch(System::IO::DirectoryNotFoundException^ Ex_019702){
	IL_019c:                                                                        //pop
	IL_019d:            goto IL_0263;                                               //leave				IL_0263
	                    ;}
	                    catch(System::IO::IOException^ Ex_019D02){
	IL_01a2:                                                                        //pop
	IL_01a3:            goto IL_0263;                                               //leave				IL_0263
	                    ;}
	IL_01A302:          try{
	IL_01a8:            goto IL_01c7;                                               //br.s				IL_01c7
	IL_01aa:                                                                        //ldloc				V_11
	IL_01ae:            switch(V_11){case 0:goto IL_01de;case 1:goto IL_0228;case 2:goto IL_0208;case 3:goto IL_0215;case 4:goto IL_0238;};//switch				(IL_01de,IL_0228,IL_0208,IL_0215,IL_0238)
	IL_01c7:                                                                        //ldloc.0
	IL_01c8:                                                                        //ldarg.1
	IL_01c9:            Temp_15=System::IO::Directory::GetFiles(V_0,A_0);           //call				array<System::String^>^ System::IO::Directory::GetFiles(System::String^,System::String^)
	IL_01ce:            V_4=Temp_15;                                                //stloc.s				V_4
	IL_01d0:                                                                        //ldc.i4.0
	IL_01d1:            V_5=0;                                                      //stloc.s				V_5
	IL_01d3:                                                                        //ldc.i4				0x0
	IL_01d8:            V_11=0;                                                     //stloc				V_11
	IL_01dc:            /*goto IL_01aa;*/goto IL_01de;                              //br.s				IL_01aa
	IL_01de:            goto IL_020a;                                               //br.s				IL_020a
	IL_01e0:                                                                        //ldloc.s				V_4
	IL_01e2:                                                                        //ldloc.s				V_5
	IL_01e4:                                                                        //ldelem.ref
	IL_01e5:                                                                        //ldloc.0
	IL_01e6:                                                                        //ldarg.2
	IL_01e7:            Temp_17=V_4[V_5]->Replace(V_0,A_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_01ec:            V_6=Temp_17;                                                //stloc.s				V_6
	IL_01ee:                                                                        //ldloc.3
	IL_01ef:                                                                        //ldloc.s				V_6
	IL_01f1:            Temp_18=V_3->Add(safe_cast<System::Object^>(V_6));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01f6:                                                                        //pop
	IL_01f7:                                                                        //ldloc.s				V_5
	IL_01f9:                                                                        //ldc.i4.1
	IL_01fa:                                                                        //add
	IL_01fb:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_01fd:                                                                        //ldc.i4				0x2
	IL_0202:            V_11=2;                                                     //stloc				V_11
	IL_0206:            /*goto IL_01aa;*/goto IL_0208;                              //br.s				IL_01aa
	IL_0208:            goto IL_020a;                                               //br.s				IL_020a
	IL_020a:                                                                        //ldc.i4				0x3
	IL_020f:            V_11=3;                                                     //stloc				V_11
	IL_0213:            /*goto IL_01aa;*/goto IL_0215;                              //br.s				IL_01aa
	IL_0215:                                                                        //ldloc.s				V_5
	IL_0217:                                                                        //ldloc.s				V_4
	IL_0219:            Temp_16=V_4->Length;                                        //ldlen
	IL_021a:                                                                        //conv.i4
	IL_021b:            if(V_5<Temp_16)goto IL_01e0;                                //blt.s				IL_01e0
	IL_021d:                                                                        //ldc.i4				0x1
	IL_0222:            V_11=1;                                                     //stloc				V_11
	IL_0226:            /*goto IL_01aa;*/goto IL_0228;                              //br.s				IL_01aa
	IL_0228:            goto IL_022a;                                               //br.s				IL_022a
	IL_022a:                                                                        //ldc.i4				0x4
	IL_022f:            V_11=4;                                                     //stloc				V_11
	IL_0233:            /*goto IL_01aa;*/goto IL_0238;                              //br				IL_01aa
	IL_0238:            goto IL_00d2;                                               //leave				IL_00d2
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_023802){
	IL_023d:                                                                        //pop
	IL_023e:            goto IL_00d2;                                               //leave				IL_00d2
	                    ;}
	                    catch(System::IO::DirectoryNotFoundException^ Ex_023E02){
	IL_0243:                                                                        //pop
	IL_0244:            goto IL_00d2;                                               //leave				IL_00d2
	                    ;}
	IL_0249:                                                                        //ldc.i4.0
	IL_024a:            Temp_8=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_024f:            V_3=Temp_8;                                                 //stloc.3
	IL_0250:                                                                        //ldc.i4				0x3
	IL_0255:            V_11=3;                                                     //stloc				V_11
	IL_0259:            /*goto IL_000b;*/goto IL_025e;                              //br				IL_000b
	IL_025e:            /*goto IL_01a8;*/goto IL_01A302;                            //br				IL_01a8
	IL_0263:                                                                        //ldloc.3
	IL_0264:            Temp_24=V_3->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0269:                                                                        //conv.ovf.u4
	IL_026a:            Temp_25=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_24));//newarr				System::String
	IL_026f:            V_10=Temp_25;                                               //stloc.s				V_10
	IL_0271:                                                                        //ldloc.3
	IL_0272:                                                                        //ldloc.s				V_10
	IL_0274:                                                                        //ldc.i4.0
	IL_0275:            V_3->CopyTo(safe_cast<System::Array^>(V_10),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_027a:                                                                        //ldloc.s				V_10
	IL_027c:            return V_10;                                                //ret

}
inline Reflector::CodeModel::IAssemblyLocationCollection^ Root::T_x55::M_x2()
//Reflector::CodeModel::IAssemblyCache^::get_Assemblies by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x55::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x55::T_x1^ Root::T_x55 F_x2
	IL_0006:            return safe_cast<Reflector::CodeModel::IAssemblyLocationCollection^>(Temp_0);//ret

}
inline Root::T_x55::T_x2::T_x2(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.2
	IL_000f:            this->F_x2=A_1;                                             //stfld				System::String^ Root::T_x55::T_x2 F_x2
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x55::T_x2::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=safe_cast<System::IComparable^>(Temp_0)->CompareTo(obj);//callvirt				System::Int32 System::IComparable::CompareTo(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline System::String^ Root::T_x55::T_x2::M_x1()
//System::Object^::ToString by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::M_x1(System::String^ A_0)
//Reflector::CodeModel::IAssemblyLocation^::set_Location by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x55::T_x2::M_x2()
//Reflector::CodeModel::IAssemblyLocation^::get_Location by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::String^ Root::T_x55::T_x2 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x55::T_x2::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Resolve();                                   //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IModule^ Root::T_x55::T_x2::Context::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Context;                                     //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IAssemblyReference::get_Context()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::Context::set(Reflector::CodeModel::IModule^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x55::T_x2::Culture::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Culture;                                     //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::Culture::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x55::T_x2::HashValue::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->HashValue;                                   //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_HashValue()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::HashValue::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x55::T_x2::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Name;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x55::T_x2::PublicKey::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->PublicKey;                                   //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::PublicKey::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x55::T_x2::PublicKeyToken::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	array<System::Byte>^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->PublicKeyToken;                              //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::PublicKeyToken::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x55::T_x2::Retargetable::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Retargetable;                                //callvirt				System::Boolean Reflector::CodeModel::IAssemblyReference::get_Retargetable()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::Retargetable::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Version^ Root::T_x55::T_x2::Version::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::Version^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x55::T_x2 F_x1
	IL_0006:            Temp_1=Temp_0->Version;                                     //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x2::Version::set(System::Version^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x55::T_x1::T_x1(Root::T_x55^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x55^ Root::T_x55::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x55::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IAssemblyLocation^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				array<Reflector::CodeModel::IAssemblyLocation^>^ Root::T_x55::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldc.i4.0
	IL_0008:            Temp_0->CopyTo(array_1,safe_cast<System::Int32>(0));        //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x55::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x55^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::String^>^ Temp_2 = nullptr;
	Root::T_x55::T_x1::T_x1_12^ Temp_3 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_1=18;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x55^ Root::T_x55::T_x1 F_x1
	IL_000f:                                                                        //ldstr				L"\x1A2F"
	IL_0014:                                                                        //ldloc				V_1
	IL_0018:            Temp_1=a(L"\x1A2F",V_1);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001d:                                                                        //ldc.i4				0x7fffffff
	IL_0022:            Temp_2=Temp_0->M_x1(Temp_1,safe_cast<System::Int32>(2147483647));//callvirt				array<System::String^>^ Root::T_x55::M_x1(System::String^,System::Int32)
	IL_0027:            V_0=Temp_2;                                                 //stloc.0
	IL_0028:                                                                        //ldloc.0
	IL_0029:            Temp_3=gcnew Root::T_x55::T_x1::T_x1_12(V_0);               //newobj				void Root::T_x55::T_x1::T_x1_12::.ctor(array<System::String^>^)
	IL_002e:            return safe_cast<System::Collections::IEnumerator^>(Temp_3);//ret

}
inline array<Reflector::CodeModel::IAssemblyLocation^>^ Root::T_x55::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	array<Reflector::CodeModel::IAssemblyLocation^>^ Temp_6 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyLocation^ V_1 = nullptr;
	array<Reflector::CodeModel::IAssemblyLocation^>^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_1=this->GetEnumerator();                               //call				System::Collections::IEnumerator^ Root::T_x55::T_x1::GetEnumerator()
	IL_000d:            V_3=Temp_1;                                                 //stloc.3
	IL_000e:            /*goto IL_0010;*/goto IL_000E01;                            //br.s				IL_0010
	IL_000E01:          try{
	IL_0010:                                                                        //ldc.i4				0x3
	IL_0015:            V_5=3;                                                      //stloc				V_5
	IL_0019:            /*goto IL_001d;*/goto IL_001b;                              //br.s				IL_001d
	IL_001b:            goto IL_003a;                                               //br.s				IL_003a
	IL_001d:                                                                        //ldloc				V_5
	IL_0021:            switch(V_5){case 0:goto IL_0093;case 1:goto IL_0066;case 2:goto IL_0086;case 3:goto IL_001b;case 4:goto IL_0073;};//switch				(IL_0093,IL_0066,IL_0086,IL_001b,IL_0073)
	IL_003a:                                                                        //ldc.i4.2
	IL_003b:                                                                        //dup
	IL_003c:                                                                        //dup
	IL_003d:                                                                        //ldc.i4.4
	IL_003e:                                                                        //sub
	IL_003f:                                                                        //blt				IL_003b
	IL_0044:                                                                        //pop
	IL_0045:            goto IL_0068;                                               //br.s				IL_0068
	IL_0047:                                                                        //ldloc.3
	IL_0048:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004d:                                                                        //castclass				Reflector::CodeModel::IAssemblyLocation
	IL_0052:            V_1=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(Temp_3);//stloc.1
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldloc.1
	IL_0055:            Temp_4=V_0->Add(safe_cast<System::Object^>(V_1));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_005a:                                                                        //pop
	IL_005b:                                                                        //ldc.i4				0x1
	IL_0060:            V_5=1;                                                      //stloc				V_5
	IL_0064:            /*goto IL_001d;*/goto IL_0066;                              //br.s				IL_001d
	IL_0066:            goto IL_0068;                                               //br.s				IL_0068
	IL_0068:                                                                        //ldc.i4				0x4
	IL_006d:            V_5=4;                                                      //stloc				V_5
	IL_0071:            /*goto IL_001d;*/goto IL_0073;                              //br.s				IL_001d
	IL_0073:                                                                        //ldloc.3
	IL_0074:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0079:            if(Temp_2)goto IL_0047;                                     //brtrue.s				IL_0047
	IL_007b:                                                                        //ldc.i4				0x2
	IL_0080:            V_5=2;                                                      //stloc				V_5
	IL_0084:            /*goto IL_001d;*/goto IL_0086;                              //br.s				IL_001d
	IL_0086:            goto IL_0088;                                               //br.s				IL_0088
	IL_0088:                                                                        //ldc.i4				0x0
	IL_008d:            V_5=0;                                                      //stloc				V_5
	IL_0091:            /*goto IL_001d;*/goto IL_0093;                              //br.s				IL_001d
	IL_0093:            goto IL_00e5;                                               //leave.s				IL_00e5
	                    ;}
	                    finally{
	IL_0095:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_0097:                                                                        //ldloc				V_6
	IL_009b:            switch(V_6){case 0:goto IL_00bf;case 1:goto IL_00ce;case 2:goto IL_00e2;};//switch				(IL_00bf,IL_00ce,IL_00e2)
	IL_00ac:                                                                        //ldloc.3
	IL_00ad:                                                                        //isinst				System::IDisposable
	IL_00b2:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00b4:                                                                        //ldc.i4				0x0
	IL_00b9:            V_6=0;                                                      //stloc				V_6
	IL_00bd:            /*goto IL_0097;*/goto IL_00bf;                              //br.s				IL_0097
	IL_00bf:                                                                        //ldloc.s				V_4
	IL_00c1:            if(V_4==nullptr)goto IL_00e4;                               //brfalse.s				IL_00e4
	IL_00c3:                                                                        //ldc.i4				0x1
	IL_00c8:            V_6=1;                                                      //stloc				V_6
	IL_00cc:            /*goto IL_0097;*/goto IL_00ce;                              //br.s				IL_0097
	IL_00ce:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_00d0:                                                                        //ldloc.s				V_4
	IL_00d2:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00d7:                                                                        //ldc.i4				0x2
	IL_00dc:            V_6=2;                                                      //stloc				V_6
	IL_00e0:            /*goto IL_0097;*/goto IL_00e2;                              //br.s				IL_0097
	IL_00e2:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00e4:                                                                        //endfinally
	                    ;}
	IL_00e5:                                                                        //ldloc.0
	IL_00e6:            Temp_5=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00eb:                                                                        //conv.ovf.u4
	IL_00ec:            Temp_6=gcnew array<Reflector::CodeModel::IAssemblyLocation^>(safe_cast<System::UInt32>(Temp_5));//newarr				Reflector::CodeModel::IAssemblyLocation
	IL_00f1:            V_2=Temp_6;                                                 //stloc.2
	IL_00f2:                                                                        //ldloc.0
	IL_00f3:                                                                        //ldloc.2
	IL_00f4:                                                                        //ldc.i4.0
	IL_00f5:            V_0->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_00fa:                                                                        //ldloc.2
	IL_00fb:            return V_2;                                                 //ret

}
inline Reflector::CodeModel::IAssemblyLocation^ Root::T_x55::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IAssemblyLocationCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IAssemblyLocation^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				array<Reflector::CodeModel::IAssemblyLocation^>^ Root::T_x55::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline System::Int32 Root::T_x55::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IAssemblyLocation^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x1();                                        //call				array<Reflector::CodeModel::IAssemblyLocation^>^ Root::T_x55::T_x1::M_x1()
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x55::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return false;                                               //ret

}
inline System::Object^ Root::T_x55::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline Root::T_x55::T_x1::T_x1_12::T_x1_12(array<System::String^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<System::String^>^ Root::T_x55::T_x1::T_x1_12 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:            this->M_x2();                                               //call				void Root::T_x55::T_x1::T_x1_12::M_x2()
	IL_0013:            return;                                                     //ret

}
inline System::Object^ Root::T_x55::T_x1::T_x1_12::M_x1()
//System::Collections::IEnumerator^::get_Current by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Object^ Root::T_x55::T_x1::T_x1_12 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x55::T_x1::T_x1_12::M_x12()
//System::Collections::IEnumerator^::MoveNext by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	array<System::String^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	array<System::String^>^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x2^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Root::T_x55::T_x2^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	System::String^ V_0 = nullptr;
	Root::T_x2^ V_1 = nullptr;
	System::Boolean V_2 = false;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_3=3;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_0036;case 1:goto IL_0053;case 2:goto IL_0075;case 3:goto IL_000b;};//switch				(IL_0036,IL_0053,IL_0075,IL_000b)
	IL_0026:            goto IL_0029;                                               //br.s				IL_0029
	IL_0028:                                                                        //break
	IL_0029:            goto IL_002b;                                               //br.s				IL_002b
	IL_002b:                                                                        //ldc.i4				0x0
	IL_0030:            V_3=0;                                                      //stloc				V_3
	IL_0034:            /*goto IL_000d;*/goto IL_0036;                              //br.s				IL_000d
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_0=this->F_x2;                                          //ldfld				System::Int32 Root::T_x55::T_x1::T_x1_12 F_x2
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_1=this->F_x1;                                          //ldfld				array<System::String^>^ Root::T_x55::T_x1::T_x1_12 F_x1
	IL_0042:            Temp_2=Temp_1->Length;                                      //ldlen
	IL_0043:                                                                        //conv.i4
	IL_0044:                                                                        //ldc.i4.1
	IL_0045:                                                                        //sub
	IL_0046:            if(Temp_0<(Temp_2 - 1))goto IL_0055;                        //blt.s				IL_0055
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_3=1;                                                      //stloc				V_3
	IL_0051:            /*goto IL_000d;*/goto IL_0053;                              //br.s				IL_000d
	IL_0053:            goto IL_0077;                                               //br.s				IL_0077
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldnull
	IL_0057:            this->F_x12=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x55::T_x1::T_x1_12 F_x12
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //dup
	IL_005e:            Temp_3=this->F_x2;                                          //ldfld				System::Int32 Root::T_x55::T_x1::T_x1_12 F_x2
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:                                                                        //add
	IL_0065:            this->F_x2=(Temp_3 + 1);                                    //stfld				System::Int32 Root::T_x55::T_x1::T_x1_12 F_x2
	IL_006a:                                                                        //ldc.i4				0x2
	IL_006f:            V_3=2;                                                      //stloc				V_3
	IL_0073:            /*goto IL_000d;*/goto IL_0075;                              //br.s				IL_000d
	IL_0075:            /*goto IL_0079;*/goto IL_007801;                            //br.s				IL_0079
	IL_0077:                                                                        //ldc.i4.0
	IL_0078:            return false;                                               //ret
	IL_007801:          try{
	IL_0079:            goto IL_009c;                                               //br.s				IL_009c
	IL_007b:                                                                        //ldloc				V_3
	IL_007f:            switch(V_3){case 0:goto IL_00f7;case 1:goto IL_012d;case 2:goto IL_011d;case 3:goto IL_0107;case 4:goto IL_00be;case 5:goto IL_00d1;};//switch				(IL_00f7,IL_012d,IL_011d,IL_0107,IL_00be,IL_00d1)
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_4=this->F_x1;                                          //ldfld				array<System::String^>^ Root::T_x55::T_x1::T_x1_12 F_x1
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_5=this->F_x2;                                          //ldfld				System::Int32 Root::T_x55::T_x1::T_x1_12 F_x2
	IL_00a8:                                                                        //ldelem.ref
	IL_00a9:            V_0=Temp_4[Temp_5];                                         //stloc.0
	IL_00aa:                                                                        //ldnull
	IL_00ab:                                                                        //ldnull
	IL_00ac:                                                                        //ldloc.0
	IL_00ad:            Temp_6=gcnew Root::T_x2(safe_cast<Reflector::CodeModel::IAssemblyManager^>(nullptr),safe_cast<Root::T_x136^>(nullptr),V_0);//newobj				void Root::T_x2::.ctor(Reflector::CodeModel::IAssemblyManager^,Root::T_x136^,System::String^)
	IL_00b2:            V_1=Temp_6;                                                 //stloc.1
	IL_00b3:                                                                        //ldc.i4				0x4
	IL_00b8:            V_3=4;                                                      //stloc				V_3
	IL_00bc:            /*goto IL_007b;*/goto IL_00be;                              //br.s				IL_007b
	IL_00be:                                                                        //ldloc.1
	IL_00bf:            Temp_11=V_1->M_x57();                                       //callvirt				System::Boolean Root::T_x2::M_x57()
	IL_00c4:            if(!Temp_11)goto IL_011f;                                   //brfalse.s				IL_011f
	IL_00c6:                                                                        //ldc.i4				0x5
	IL_00cb:            V_3=5;                                                      //stloc				V_3
	IL_00cf:            /*goto IL_007b;*/goto IL_00d1;                              //br.s				IL_007b
	IL_00d1:            goto IL_00f9;                                               //br.s				IL_00f9
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:                                                                        //ldloc.1
	IL_00d5:            Temp_7=V_1->M_x13();                                        //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_00da:                                                                        //ldloc.1
	IL_00db:            Temp_8=V_1->M_x55();                                        //callvirt				System::String^ Root::T_x2::M_x55()
	IL_00e0:            Temp_9=gcnew Root::T_x55::T_x2(Temp_7,Temp_8);              //newobj				void Root::T_x55::T_x2::.ctor(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_00e5:            this->F_x12=safe_cast<System::Object^>(Temp_9);             //stfld				System::Object^ Root::T_x55::T_x1::T_x1_12 F_x12
	IL_00ea:                                                                        //ldc.i4.1
	IL_00eb:            V_2=true;                                                   //stloc.2
	IL_00ec:                                                                        //ldc.i4				0x0
	IL_00f1:            V_3=0;                                                      //stloc				V_3
	IL_00f5:            /*goto IL_007b;*/goto IL_00f7;                              //br.s				IL_007b
	IL_00f7:            goto IL_0138;                                               //leave.s				IL_0138
	IL_00f9:                                                                        //ldc.i4				0x3
	IL_00fe:            V_3=3;                                                      //stloc				V_3
	IL_0102:            /*goto IL_007b;*/goto IL_0107;                              //br				IL_007b
	IL_0107:                                                                        //ldloc.1
	IL_0108:            Temp_10=V_1->M_x13();                                       //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_010d:            if(Temp_10==nullptr)goto IL_011f;                           //brfalse.s				IL_011f
	IL_010f:                                                                        //ldc.i4				0x2
	IL_0114:            V_3=2;                                                      //stloc				V_3
	IL_0118:            /*goto IL_007b;*/goto IL_011d;                              //br				IL_007b
	IL_011d:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_011f:                                                                        //ldc.i4				0x1
	IL_0124:            V_3=1;                                                      //stloc				V_3
	IL_0128:            /*goto IL_007b;*/goto IL_012d;                              //br				IL_007b
	IL_012d:            goto IL_002b;                                               //leave				IL_002b
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_012D02){
	IL_0132:                                                                        //pop
	IL_0133:            goto IL_002b;                                               //leave				IL_002b
	                    ;}
	IL_0138:                                                                        //ldloc.2
	IL_0139:            return V_2;                                                 //ret

}
inline void Root::T_x55::T_x1::T_x1_12::M_x2()
//System::Collections::IEnumerator^::Reset by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.m1
	IL_0002:            this->F_x2=-1;                                              //stfld				System::Int32 Root::T_x55::T_x1::T_x1_12 F_x2
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldnull
	IL_0009:            this->F_x12=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x55::T_x1::T_x1_12 F_x12
	IL_000e:            return;                                                     //ret

}
inline Root::T_x55::T_x12::T_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0007:            this->F_x1=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x55::T_x12::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x55::T_x12::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x12::M_x1()
//Reflector::CodeModel::IStringCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Collections::ArrayList::Clear()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x55::T_x12::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IStringCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->AddRange(A_0);                                      //callvirt				void System::Collections::ArrayList::AddRange(System::Collections::ICollection^)
	IL_000c:            return;                                                     //ret

}
inline System::String^ Root::T_x55::T_x12::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IStringCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				System::String
	IL_0011:            return safe_cast<System::String^>(Temp_1);                  //ret

}
inline void Root::T_x55::T_x12::M_x1(System::Int32 A_0,System::String^ A_1)
//Reflector::CodeModel::IStringCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->Insert(A_0,safe_cast<System::Object^>(A_1));        //callvirt				void System::Collections::ArrayList::Insert(System::Int32,System::Object^)
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x55::T_x12::M_x1(System::String^ A_0)
//Reflector::CodeModel::IStringCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->IndexOf(safe_cast<System::Object^>(A_0));    //callvirt				System::Int32 System::Collections::ArrayList::IndexOf(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Root::T_x55::T_x12::M_x12(System::String^ A_0)
//Reflector::CodeModel::IStringCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x55::T_x12::M_x13(System::String^ A_0)
//Reflector::CodeModel::IStringCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::ArrayList::Remove(System::Object^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x55::T_x12::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IStringCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->RemoveAt(A_0);                                      //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x55::T_x12::M_x2(System::Int32 A_0,System::String^ A_1)
//Reflector::CodeModel::IStringCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0[A_0]=safe_cast<System::Object^>(A_1);                //callvirt				void System::Collections::ArrayList::set_Item(System::Int32,System::Object^)
	IL_000d:            return;                                                     //ret

}
inline System::Boolean Root::T_x55::T_x12::M_x2(System::String^ A_0)
//Reflector::CodeModel::IStringCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Contains(safe_cast<System::Object^>(A_0));   //callvirt				System::Boolean System::Collections::ArrayList::Contains(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline System::Int32 Root::T_x55::T_x12::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x55::T_x12::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Collections::ArrayList::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x55::T_x12::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Collections::ArrayList^ Root::T_x55::T_x12 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Collections::ArrayList::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
