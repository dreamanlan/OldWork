#include "global_xref.h"

inline static Root::T_x136::T_x136()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x145^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x145();                                //newobj				void Root::T_x145::.ctor()
	IL_0005:            Root::T_x136::F_x4=Temp_0;                                  //stsfld				Root::T_x145^ Root::T_x136 F_x4
	IL_000a:            return;                                                     //ret

}
inline Root::T_x136::T_x136(Reflector::CodeModel::IAssemblyManager^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::ModuleCollection^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	Reflector::CodeModel::IModuleCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IModule^ Temp_6 = nullptr;
	array<System::String^>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	array<System::Object^>^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::NotSupportedException^ Temp_15 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x2^ V_1 = nullptr;
	array<System::String^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Exception^ V_4 = nullptr;
	array<System::Object^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_6=3;                                                      //stloc				V_6
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldnull
	IL_0011:            this->F_x2=safe_cast<System::Exception^>(nullptr);          //stfld				System::Exception^ Root::T_x136 F_x2
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.2
	IL_0018:            this->F_x1=A_1;                                             //stfld				System::String^ Root::T_x136 F_x1
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldarg.1
	IL_001f:            this->F_x8=A_0;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x136 F_x8
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldnull
	IL_0026:            this->F_x5=safe_cast<array<Reflector::CodeModel::ICustomAttribute^>^>(nullptr);//stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=gcnew Reflector::CodeModel::Memory::ModuleCollection();//newobj				void Reflector::CodeModel::Memory::ModuleCollection::.ctor()
	IL_0031:            this->F_x9=safe_cast<Reflector::CodeModel::IModuleCollection^>(Temp_0);//stfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldnull
	IL_0038:            this->F_x13=safe_cast<Reflector::CodeModel::IAssemblyReference^>(nullptr);//stfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldc.i4.0
	IL_003f:            this->F_x12=safe_cast<Reflector::CodeModel::HashAlgorithm>(0);//stfld				Reflector::CodeModel::HashAlgorithm Root::T_x136 F_x12
	IL_0044:            /*goto IL_0046;*/goto IL_004401;                            //br.s				IL_0046
	IL_004401:          try{
	IL_0046:                                                                        //ldarg.0
	IL_0047:                                                                        //ldarg.2
	IL_0048:            Temp_1=System::IO::Path::GetFileName(A_1);                  //call				System::String^ System::IO::Path::GetFileName(System::String^)
	IL_004d:                                                                        //ldarg.2
	IL_004e:            Temp_2=System::IO::Path::GetDirectoryName(A_1);             //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_0053:            this->M_x1(Temp_1,Temp_2);                                  //call				void Root::T_x136::M_x1(System::String^,System::String^)
	IL_0058:                                                                        //ldc.i4.0
	IL_0059:            V_0=0;                                                      //stloc.0
	IL_005a:            goto IL_0098;                                               //br.s				IL_0098
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //ldloc.2
	IL_005e:                                                                        //ldloc.3
	IL_005f:                                                                        //ldelem.ref
	IL_0060:                                                                        //ldarg.2
	IL_0061:            Temp_9=System::IO::Path::GetDirectoryName(A_1);             //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_0066:            this->M_x1(V_2[V_3],Temp_9);                                //call				void Root::T_x136::M_x1(System::String^,System::String^)
	IL_006b:                                                                        //ldloc.3
	IL_006c:                                                                        //ldc.i4.1
	IL_006d:                                                                        //add
	IL_006e:            V_3=(V_3 + 1);                                              //stloc.3
	IL_006f:            goto IL_00db;                                               //br.s				IL_00db
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_10=this->F_x13;                                        //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0077:            if(Temp_10!=nullptr)goto IL_00e6;                           //brtrue.s				IL_00e6
	IL_0079:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_5=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0081:                                                                        //ldloc.0
	IL_0082:            Temp_6=Temp_5[V_0];                                         //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0087:                                                                        //castclass				Root::T_x2
	IL_008c:            V_1=safe_cast<Root::T_x2^>(Temp_6);                         //stloc.1
	IL_008d:                                                                        //ldloc.1
	IL_008e:            Temp_7=V_1->M_x2();                                         //callvirt				array<System::String^>^ Root::T_x2::M_x2()
	IL_0093:            V_2=Temp_7;                                                 //stloc.2
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            V_3=0;                                                      //stloc.3
	IL_0096:            goto IL_00db;                                               //br.s				IL_00db
	IL_0098:                                                                        //ldloc.0
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_3=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_009f:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a4:            if(V_0<Temp_4)goto IL_007b;                                 //blt.s				IL_007b
	IL_00a6:            goto IL_0071;                                               //br.s				IL_0071
	IL_00a8:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00ad:                                                                        //ldstr				L"\x6C20\x4C22\x4124\x5226\x4528\x4E2A\x0D2C\x082E\x4A30\x0332\x4834\x1036\x1938\x5F3A\x523C\x5A3E\x3240\x6342\x2B44\x2846\x3D48\x6B4A\x2E4C\x204E\x3F50\x2752\x3454\x3E56\x3758\x7B5A\x3C5C\x315E\x4160\x0262\x1664\x1466\x0C68\x066A\x0F6C\x036E\x0870\x5372\x1874\x1676\x1778\x127A\x1B7C\x1A7E\xF280\xF782\xAB84"
	IL_00b2:                                                                        //ldloc				V_6
	IL_00b6:            Temp_12=a(L"\x6C20\x4C22\x4124\x5226\x4528\x4E2A\x0D2C\x082E\x4A30\x0332\x4834\x1036\x1938\x5F3A\x523C\x5A3E\x3240\x6342\x2B44\x2846\x3D48\x6B4A\x2E4C\x204E\x3F50\x2752\x3454\x3E56\x3758\x7B5A\x3C5C\x315E\x4160\x0262\x1664\x1466\x0C68\x066A\x0F6C\x036E\x0870\x5372\x1874\x1676\x1778\x127A\x1B7C\x1A7E\xF280\xF782\xAB84",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bb:                                                                        //ldc.i4.1
	IL_00bc:            Temp_13=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00c1:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_00c3:                                                                        //ldloc.s				V_5
	IL_00c5:                                                                        //ldc.i4.0
	IL_00c6:                                                                        //ldarg.2
	IL_00c7:            V_5[0]=safe_cast<System::Object^>(A_1);                     //stelem.ref
	IL_00c8:                                                                        //ldloc.s				V_5
	IL_00ca:            Temp_14=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_11),Temp_12,V_5);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00cf:            Temp_15=gcnew System::NotSupportedException(Temp_14);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_00d4:            throw Temp_15;                                              //throw
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:                                                                        //ldc.i4.1
	IL_00d7:                                                                        //add
	IL_00d8:            V_0=(V_0 + 1);                                              //stloc.0
	IL_00d9:            goto IL_0098;                                               //br.s				IL_0098
	IL_00db:                                                                        //ldloc.3
	IL_00dc:                                                                        //ldloc.2
	IL_00dd:            Temp_8=V_2->Length;                                         //ldlen
	IL_00de:                                                                        //conv.i4
	IL_00df:            if(V_3<Temp_8)goto IL_005c;                                 //blt				IL_005c
	IL_00e4:            goto IL_00d5;                                               //br.s				IL_00d5
	IL_00e6:            goto IL_00f4;                                               //leave.s				IL_00f4
	                    ;}
	                    catch(System::Exception^ Ex_00E602){
	IL_00e8:            V_4=Ex_00E602;                                              //stloc.s				V_4
	IL_00ea:                                                                        //ldarg.0
	IL_00eb:                                                                        //ldloc.s				V_4
	IL_00ed:            this->F_x2=V_4;                                             //stfld				System::Exception^ Root::T_x136 F_x2
	IL_00f2:            goto IL_00f4;                                               //leave.s				IL_00f4
	                    ;}
	IL_00f4:            return;                                                     //ret

}
inline System::Int32 Root::T_x136::CompareTo(System::Object^ obj)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::ArgumentException^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_3=5;                                                      //stloc				V_3
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_004e;case 1:goto IL_0061;case 2:goto IL_010c;case 3:goto IL_00db;case 4:goto IL_0099;case 5:goto IL_0089;case 6:goto IL_00ca;case 7:goto IL_00f3;case 8:goto IL_00ba;case 9:goto IL_0078;};//switch				(IL_004e,IL_0061,IL_010c,IL_00db,IL_0099,IL_0089,IL_00ca,IL_00f3,IL_00ba,IL_0078)
	IL_003c:                                                                        //ldarg.1
	IL_003d:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_0042:            V_0=dynamic_cast<Reflector::CodeModel::IAssembly^>(obj);    //stloc.0
	IL_0043:                                                                        //ldc.i4				0x0
	IL_0048:            V_2=0;                                                      //stloc				V_2
	IL_004c:            /*goto IL_000b;*/goto IL_004e;                              //br.s				IL_000b
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_0=this->M_x5();                                        //call				System::String^ Root::T_x136::M_x5()
	IL_0054:            if(Temp_0==nullptr)goto IL_0063;                            //brfalse.s				IL_0063
	IL_0056:                                                                        //ldc.i4				0x1
	IL_005b:            V_2=1;                                                      //stloc				V_2
	IL_005f:            /*goto IL_000b;*/goto IL_0061;                              //br.s				IL_000b
	IL_0061:            goto IL_00bc;                                               //br.s				IL_00bc
	IL_0063:            goto IL_0066;                                               //br.s				IL_0066
	IL_0065:                                                                        //break
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_006c:            V_1=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(obj);//stloc.1
	IL_006d:                                                                        //ldc.i4				0x9
	IL_0072:            V_2=9;                                                      //stloc				V_2
	IL_0076:            /*goto IL_000b;*/goto IL_0078;                              //br.s				IL_000b
	IL_0078:                                                                        //ldloc.1
	IL_0079:            if(V_1==nullptr)goto IL_0113;                               //brfalse				IL_0113
	IL_007e:                                                                        //ldc.i4				0x5
	IL_0083:            V_2=5;                                                      //stloc				V_2
	IL_0087:            /*goto IL_000b;*/goto IL_0089;                              //br.s				IL_000b
	IL_0089:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_008b:                                                                        //ldc.i4				0x4
	IL_0090:            V_2=4;                                                      //stloc				V_2
	IL_0094:            /*goto IL_000b;*/goto IL_0099;                              //br				IL_000b
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_1=this->Location;                                      //call				System::String^ Root::T_x136::get_Location()
	IL_009f:                                                                        //ldloc.0
	IL_00a0:            Temp_2=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(V_0)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_00a5:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00aa:            if(!Temp_3)goto IL_0063;                                    //brfalse.s				IL_0063
	IL_00ac:                                                                        //ldc.i4				0x8
	IL_00b1:            V_2=8;                                                      //stloc				V_2
	IL_00b5:            /*goto IL_000b;*/goto IL_00ba;                              //br				IL_000b
	IL_00ba:            goto IL_0111;                                               //br.s				IL_0111
	IL_00bc:                                                                        //ldc.i4				0x6
	IL_00c1:            V_2=6;                                                      //stloc				V_2
	IL_00c5:            /*goto IL_000b;*/goto IL_00ca;                              //br				IL_000b
	IL_00ca:                                                                        //ldloc.0
	IL_00cb:            if(V_0==nullptr)goto IL_0063;                               //brfalse.s				IL_0063
	IL_00cd:                                                                        //ldc.i4				0x3
	IL_00d2:            V_2=3;                                                      //stloc				V_2
	IL_00d6:            /*goto IL_000b;*/goto IL_00db;                              //br				IL_000b
	IL_00db:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //ldloc.1
	IL_00df:            Temp_4=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IAssemblyReference^>(this),V_1);//call				System::Int32 Root::T_x149::M_x1(Reflector::CodeModel::IAssemblyReference^,Reflector::CodeModel::IAssemblyReference^)
	IL_00e4:            return Temp_4;                                              //ret
	IL_00e5:                                                                        //ldc.i4				0x7
	IL_00ea:            V_2=7;                                                      //stloc				V_2
	IL_00ee:            /*goto IL_000b;*/goto IL_00f3;                              //br				IL_000b
	IL_00f3:                                                                        //ldloc.0
	IL_00f4:            Temp_5=V_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_00f9:            if(Temp_5==nullptr)goto IL_0063;                            //brfalse				IL_0063
	IL_00fe:                                                                        //ldc.i4				0x2
	IL_0103:            V_2=2;                                                      //stloc				V_2
	IL_0107:            /*goto IL_000b;*/goto IL_010c;                              //br				IL_000b
	IL_010c:            goto IL_008b;                                               //br				IL_008b
	IL_0111:                                                                        //ldc.i4.0
	IL_0112:            return 0;                                                   //ret
	IL_0113:                                                                        //ldstr				L"\x6222\x5724\x4026\x5C28\x462A\x482C\x412E\x4530\x1332\x5834\x4236\x4A38\x4F3A\x1D3C\x5D3E\x2440\x6342\x2444\x2946\x6948\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x2058\x7B5A\x335C\x3E5E\x0C60\x0662\x4B64"
	IL_0118:                                                                        //ldloc				V_3
	IL_011c:            Temp_6=a(L"\x6222\x5724\x4026\x5C28\x462A\x482C\x412E\x4530\x1332\x5834\x4236\x4A38\x4F3A\x1D3C\x5D3E\x2440\x6342\x2444\x2946\x6948\x2A4A\x3E4C\x3C4E\x3450\x3E52\x3754\x3B56\x2058\x7B5A\x335C\x3E5E\x0C60\x0662\x4B64",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0121:                                                                        //ldstr				L"\x4C22\x4724\x4D26"
	IL_0126:                                                                        //ldloc				V_3
	IL_012a:            Temp_7=a(L"\x4C22\x4724\x4D26",V_3);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            Temp_8=gcnew System::ArgumentException(Temp_6,Temp_7);      //newobj				void System::ArgumentException::.ctor(System::String^,System::String^)
	IL_0134:            throw Temp_8;                                               //throw

}
inline Root::T_x136::~T_x136()
//System::IDisposable^::Dispose by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x145^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x136::F_x4;                                  //ldsfld				Root::T_x145^ Root::T_x136 F_x4
	IL_0005:                                                                        //ldarg.0
	IL_0006:            Temp_0->M_x1(safe_cast<Reflector::CodeModel::IAssembly^>(this));//callvirt				void Root::T_x145::M_x1(Reflector::CodeModel::IAssembly^)
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x136::M_x1(Reflector::CodeModel::AssemblyType A_0)
//Reflector::CodeModel::IAssembly^::set_Type by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::M_x1(Reflector::CodeModel::HashAlgorithm A_0)
//Reflector::CodeModel::IAssembly^::set_HashAlgorithm by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::M_x1(Reflector::CodeModel::IAssemblyManager^ A_0)
//Reflector::CodeModel::IAssembly^::set_AssemblyManager by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::M_x1(Reflector::CodeModel::ICustomAttribute^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_0 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_4 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_7 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_8 = nullptr;
	//local variables.
	array<Reflector::CodeModel::ICustomAttribute^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_0006:            if(Temp_0!=nullptr)goto IL_0023;                            //brtrue.s				IL_0023
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            Temp_7=gcnew array<Reflector::CodeModel::ICustomAttribute^>(1);//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0014:            this->F_x5=Temp_7;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_0019:                                                                        //ldarg.0
	IL_001a:            Temp_8=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldarg.1
	IL_0021:            Temp_8[0]=A_0;                                              //stelem.ref
	IL_0022:            return;                                                     //ret
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_1=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_0029:            V_0=Temp_1;                                                 //stloc.0
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldloc.0
	IL_002c:            Temp_2=V_0->Length;                                         //ldlen
	IL_002d:                                                                        //conv.i4
	IL_002e:                                                                        //ldc.i4.1
	IL_002f:                                                                        //add
	IL_0030:                                                                        //conv.ovf.u4
	IL_0031:            Temp_3=gcnew array<Reflector::CodeModel::ICustomAttribute^>(safe_cast<System::UInt32>((Temp_2 + 1)));//newarr				Reflector::CodeModel::ICustomAttribute
	IL_0036:            this->F_x5=Temp_3;                                          //stfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_4=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:            V_0->CopyTo(safe_cast<System::Array^>(Temp_4),safe_cast<System::Int32>(0));//callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_5=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_6=V_0->Length;                                         //ldlen
	IL_0050:                                                                        //conv.i4
	IL_0051:                                                                        //ldarg.1
	IL_0052:            Temp_5[Temp_6]=A_0;                                         //stelem.ref
	IL_0053:            return;                                                     //ret

}
inline void Root::T_x136::M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0)
//Reflector::CodeModel::IAssembly^::set_EntryPoint by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x136::M_x1(System::Object^ A_0)
//System::Object^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyComparer^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	Reflector::CodeModel::IAssemblyManager^ Temp_3 = nullptr;
	Reflector::CodeModel::IAssemblyComparer^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	//local variables.
	Reflector::CodeModel::IAssemblyReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_005d;case 1:goto IL_0075;case 2:goto IL_000b;case 3:goto IL_003d;case 4:goto IL_00b2;case 5:goto IL_0096;};//switch				(IL_005d,IL_0075,IL_000b,IL_003d,IL_00b2,IL_0096)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            if(this!=safe_cast<Root::T_x136^>(A_0))goto IL_0081;        //bne.un.s				IL_0081
	IL_0032:                                                                        //ldc.i4				0x3
	IL_0037:            V_1=3;                                                      //stloc				V_1
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_0077;                                               //br.s				IL_0077
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_3=this->F_x8;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x136 F_x8
	IL_0045:            Temp_4=Temp_3->Comparer;                                    //callvirt				Reflector::CodeModel::IAssemblyComparer^ Reflector::CodeModel::IAssemblyManager::get_Comparer()
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldloc.0
	IL_004c:            Temp_5=Temp_4->Equals(safe_cast<Reflector::CodeModel::IAssemblyReference^>(this),V_0);//callvirt				System::Boolean Reflector::CodeModel::IAssemblyComparer::Equals(Reflector::CodeModel::IAssemblyReference^,Reflector::CodeModel::IAssemblyReference^)
	IL_0051:            return Temp_5;                                              //ret
	IL_0052:                                                                        //ldc.i4				0x0
	IL_0057:            V_1=0;                                                      //stloc				V_1
	IL_005b:            /*goto IL_000d;*/goto IL_005d;                              //br.s				IL_000d
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_0=this->F_x8;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x136 F_x8
	IL_0063:            Temp_1=Temp_0->Comparer;                                    //callvirt				Reflector::CodeModel::IAssemblyComparer^ Reflector::CodeModel::IAssemblyManager::get_Comparer()
	IL_0068:            if(Temp_1==nullptr)goto IL_0079;                            //brfalse.s				IL_0079
	IL_006a:                                                                        //ldc.i4				0x1
	IL_006f:            V_1=1;                                                      //stloc				V_1
	IL_0073:            /*goto IL_000d;*/goto IL_0075;                              //br.s				IL_000d
	IL_0075:            goto IL_003f;                                               //br.s				IL_003f
	IL_0077:                                                                        //ldc.i4.1
	IL_0078:            return true;                                                //ret
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //ldloc.0
	IL_007b:            Temp_2=Root::T_x149::M_x2(safe_cast<Reflector::CodeModel::IAssemblyReference^>(this),V_0);//call				System::Boolean Root::T_x149::M_x2(Reflector::CodeModel::IAssemblyReference^,Reflector::CodeModel::IAssemblyReference^)
	IL_0080:            return Temp_2;                                              //ret
	IL_0081:                                                                        //ldarg.1
	IL_0082:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_0087:            V_0=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(A_0);//stloc.0
	IL_0088:                                                                        //ldc.i4				0x5
	IL_008d:            V_1=5;                                                      //stloc				V_1
	IL_0091:            /*goto IL_000d;*/goto IL_0096;                              //br				IL_000d
	IL_0096:                                                                        //ldc.i4.4
	IL_0097:                                                                        //dup
	IL_0098:                                                                        //dup
	IL_0099:                                                                        //ldc.i4.2
	IL_009a:                                                                        //sub
	IL_009b:                                                                        //blt				IL_0097
	IL_00a0:                                                                        //pop
	IL_00a1:                                                                        //ldloc.0
	IL_00a2:            if(V_0==nullptr)goto IL_00b4;                               //brfalse.s				IL_00b4
	IL_00a4:                                                                        //ldc.i4				0x4
	IL_00a9:            V_1=4;                                                      //stloc				V_1
	IL_00ad:            /*goto IL_000d;*/goto IL_00b2;                              //br				IL_000d
	IL_00b2:            goto IL_0052;                                               //br.s				IL_0052
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:            return false;                                               //ret

}
inline void Root::T_x136::M_x1(System::String^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IAssemblyManager^ Temp_2 = nullptr;
	Root::T_x2^ Temp_3 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::HashAlgorithm Temp_7 = (Reflector::CodeModel::HashAlgorithm)0;
	System::Globalization::CultureInfo^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	array<System::Object^>^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::IOException^ Temp_12 = nullptr;
	System::Globalization::CultureInfo^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_15 = nullptr;
	Reflector::CodeModel::IModule^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::Globalization::CultureInfo^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	Reflector::CodeModel::IAssemblyReference^ Temp_21 = nullptr;
	System::Globalization::CultureInfo^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	array<System::Object^>^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::InvalidOperationException^ Temp_26 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_27 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	System::String^ Temp_30 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::String^ V_1 = nullptr;
	Root::T_x2^ V_2 = nullptr;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_5=15;                                                     //stloc				V_5
	IL_0009:            goto IL_0050;                                               //br.s				IL_0050
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_019e;case 1:goto IL_00de;case 2:goto IL_0164;case 3:goto IL_0205;case 4:goto IL_01b9;case 5:goto IL_00f1;case 6:goto IL_00c5;case 7:goto IL_005d;case 8:goto IL_021e;case 9:goto IL_014b;case 10:goto IL_012f;case 11:goto IL_01db;case 12:goto IL_0231;case 13:goto IL_0250;case 14:goto IL_0183;};//switch				(IL_019e,IL_00de,IL_0164,IL_0205,IL_01b9,IL_00f1,IL_00c5,IL_005d,IL_021e,IL_014b,IL_012f,IL_01db,IL_0231,IL_0250,IL_0183)
	IL_0050:                                                                        //ldc.i4.0
	IL_0051:            V_0=0;                                                      //stloc.0
	IL_0052:                                                                        //ldc.i4				0x7
	IL_0057:            V_4=7;                                                      //stloc				V_4
	IL_005b:            /*goto IL_000b;*/goto IL_005d;                              //br.s				IL_000b
	IL_005d:            goto IL_0223;                                               //br				IL_0223
	IL_0062:            Temp_22=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0067:                                                                        //ldstr				L"\x602C\x402E\x5530\x4632\x5934\x5236\x1938\x1C3A\x463C\x0F3E\x3C40\x6442\x6544\x2346\x2648\x2E4A\x3E4C\x6F4E\x3F50\x3C52\x2154\x7756\x3A58\x345A\x335C\x2B5E\x0060\x0A62\x0B64\x4766\x0868\x4B6A\x2E6C\x236E\x3870\x5372\x1D74\x1276\x1878\x1F7A\x187C\x0D7E\xAF80"
	IL_006c:                                                                        //ldloc				V_5
	IL_0070:            Temp_23=a(L"\x602C\x402E\x5530\x4632\x5934\x5236\x1938\x1C3A\x463C\x0F3E\x3C40\x6442\x6544\x2346\x2648\x2E4A\x3E4C\x6F4E\x3F50\x3C52\x2154\x7756\x3A58\x345A\x335C\x2B5E\x0060\x0A62\x0B64\x4766\x0868\x4B6A\x2E6C\x236E\x3870\x5372\x1D74\x1276\x1878\x1F7A\x187C\x0D7E\xAF80",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:            Temp_24=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_007b:            V_3=Temp_24;                                                //stloc.3
	IL_007c:                                                                        //ldloc.3
	IL_007d:                                                                        //ldc.i4.0
	IL_007e:                                                                        //ldloc.1
	IL_007f:            V_3[0]=safe_cast<System::Object^>(V_1);                     //stelem.ref
	IL_0080:                                                                        //ldloc.3
	IL_0081:            Temp_25=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_22),Temp_23,V_3);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0086:            Temp_26=gcnew System::InvalidOperationException(Temp_25);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_008b:            throw Temp_26;                                              //throw
	IL_008c:            Temp_8=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0091:                                                                        //ldstr				L"\x6B2C\x462E\x5D30\x5632\x1534\x1036\x4238\x0B3A\x403C\x183E\x6140\x2D42\x2A44\x3346\x6948\x2D4A\x224C\x3A4E\x3F50\x3752\x7B54"
	IL_0096:                                                                        //ldloc				V_5
	IL_009a:            Temp_9=a(L"\x6B2C\x462E\x5D30\x5632\x1534\x1036\x4238\x0B3A\x403C\x183E\x6140\x2D42\x2A44\x3346\x6948\x2D4A\x224C\x3A4E\x3F50\x3752\x7B54",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009f:                                                                        //ldc.i4.1
	IL_00a0:            Temp_10=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00a5:            V_3=Temp_10;                                                //stloc.3
	IL_00a6:                                                                        //ldloc.3
	IL_00a7:                                                                        //ldc.i4.0
	IL_00a8:                                                                        //ldloc.1
	IL_00a9:            V_3[0]=safe_cast<System::Object^>(V_1);                     //stelem.ref
	IL_00aa:                                                                        //ldloc.3
	IL_00ab:            Temp_11=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_8),Temp_9,V_3);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00b0:            Temp_12=gcnew System::IO::IOException(Temp_11);             //newobj				void System::IO::IOException::.ctor(System::String^)
	IL_00b5:            throw Temp_12;                                              //throw
	IL_00b6:            return;                                                     //ret
	IL_00b7:                                                                        //ldc.i4				0x6
	IL_00bc:            V_4=6;                                                      //stloc				V_4
	IL_00c0:            /*goto IL_000b;*/goto IL_00c5;                              //br				IL_000b
	IL_00c5:                                                                        //ldloc.2
	IL_00c6:            Temp_21=V_2->M_x13();                                       //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_00cb:            if(Temp_21==nullptr)goto IL_0255;                           //brfalse				IL_0255
	IL_00d0:                                                                        //ldc.i4				0x1
	IL_00d5:            V_4=1;                                                      //stloc				V_4
	IL_00d9:            /*goto IL_000b;*/goto IL_00de;                              //br				IL_000b
	IL_00de:            goto IL_0169;                                               //br				IL_0169
	IL_00e3:                                                                        //ldc.i4				0x5
	IL_00e8:            V_4=5;                                                      //stloc				V_4
	IL_00ec:            /*goto IL_000b;*/goto IL_00f1;                              //br				IL_000b
	IL_00f1:                                                                        //ldarg.1
	IL_00f2:            Temp_13=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00f7:            Temp_14=A_0->ToLower(Temp_13);                              //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_00fc:                                                                        //ldarg.0
	IL_00fd:            Temp_15=this->F_x9;                                         //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0102:                                                                        //ldloc.0
	IL_0103:            Temp_16=Temp_15[V_0];                                       //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0108:            Temp_17=safe_cast<Reflector::CodeModel::IModuleReference^>(Temp_16)->Name;//callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_010d:            Temp_18=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0112:            Temp_19=Temp_17->ToLower(Temp_18);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_0117:            Temp_20=(Temp_14 == Temp_19);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_011c:            if(!Temp_20)goto IL_01be;                                   //brfalse				IL_01be
	IL_0121:                                                                        //ldc.i4				0xa
	IL_0126:            V_4=10;                                                     //stloc				V_4
	IL_012a:            /*goto IL_000b;*/goto IL_012f;                              //br				IL_000b
	IL_012f:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0131:                                                                        //ldarg.0
	IL_0132:                                                                        //ldloc.2
	IL_0133:            Temp_7=V_2->M_x11();                                        //callvirt				Reflector::CodeModel::HashAlgorithm Root::T_x2::M_x11()
	IL_0138:            this->F_x12=Temp_7;                                         //stfld				Reflector::CodeModel::HashAlgorithm Root::T_x136 F_x12
	IL_013d:                                                                        //ldc.i4				0x9
	IL_0142:            V_4=9;                                                      //stloc				V_4
	IL_0146:            /*goto IL_000b;*/goto IL_014b;                              //br				IL_000b
	IL_014b:                                                                        //ldarg.0
	IL_014c:            Temp_27=this->F_x13;                                        //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0151:            if(Temp_27!=nullptr)goto IL_0255;                           //brtrue				IL_0255
	IL_0156:                                                                        //ldc.i4				0x2
	IL_015b:            V_4=2;                                                      //stloc				V_4
	IL_015f:            /*goto IL_000b;*/goto IL_0164;                              //br				IL_000b
	IL_0164:            goto IL_00b7;                                               //br				IL_00b7
	IL_0169:                                                                        //ldarg.0
	IL_016a:                                                                        //ldloc.2
	IL_016b:            Temp_5=V_2->M_x13();                                        //callvirt				Reflector::CodeModel::IAssemblyReference^ Root::T_x2::M_x13()
	IL_0170:            this->F_x13=Temp_5;                                         //stfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0175:                                                                        //ldc.i4				0xe
	IL_017a:            V_4=14;                                                     //stloc				V_4
	IL_017e:            /*goto IL_000b;*/goto IL_0183;                              //br				IL_000b
	IL_0183:            goto IL_0255;                                               //br				IL_0255
	IL_0188:                                                                        //ldarg.2
	IL_0189:                                                                        //ldarg.1
	IL_018a:            Temp_30=System::IO::Path::Combine(A_1,A_0);                 //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_018f:            V_1=Temp_30;                                                //stloc.1
	IL_0190:                                                                        //ldc.i4				0x0
	IL_0195:            V_4=0;                                                      //stloc				V_4
	IL_0199:            /*goto IL_000b;*/goto IL_019e;                              //br				IL_000b
	IL_019e:                                                                        //ldloc.1
	IL_019f:            Temp_0=Root::T_x148::M_x1(V_1);                             //call				System::String^ Root::T_x148::M_x1(System::String^)
	IL_01a4:            Temp_1=System::IO::File::Exists(Temp_0);                    //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_01a9:            if(Temp_1)goto IL_01dd;                                     //brtrue.s				IL_01dd
	IL_01ab:                                                                        //ldc.i4				0x4
	IL_01b0:            V_4=4;                                                      //stloc				V_4
	IL_01b4:            /*goto IL_000b;*/goto IL_01b9;                              //br				IL_000b
	IL_01b9:            goto IL_008c;                                               //br				IL_008c
	IL_01be:                                                                        //ldloc.0
	IL_01bf:                                                                        //ldc.i4.1
	IL_01c0:                                                                        //add
	IL_01c1:            V_0=(V_0 + 1);                                              //stloc.0
	IL_01c2:                                                                        //ldc.i4.2
	IL_01c3:                                                                        //dup
	IL_01c4:                                                                        //dup
	IL_01c5:                                                                        //ldc.i4.4
	IL_01c6:                                                                        //add
	IL_01c7:                                                                        //bgt				IL_01c3
	IL_01cc:                                                                        //pop
	IL_01cd:                                                                        //ldc.i4				0xb
	IL_01d2:            V_4=11;                                                     //stloc				V_4
	IL_01d6:            /*goto IL_000b;*/goto IL_01db;                              //br				IL_000b
	IL_01db:            goto IL_0223;                                               //br.s				IL_0223
	IL_01dd:                                                                        //ldarg.0
	IL_01de:            Temp_2=this->F_x8;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x136 F_x8
	IL_01e3:                                                                        //ldarg.0
	IL_01e4:                                                                        //ldloc.1
	IL_01e5:            Temp_3=gcnew Root::T_x2(Temp_2,this,V_1);                   //newobj				void Root::T_x2::.ctor(Reflector::CodeModel::IAssemblyManager^,Root::T_x136^,System::String^)
	IL_01ea:            V_2=Temp_3;                                                 //stloc.2
	IL_01eb:                                                                        //ldarg.0
	IL_01ec:            Temp_4=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_01f1:                                                                        //ldloc.2
	IL_01f2:            Temp_4->Add(safe_cast<Reflector::CodeModel::IModule^>(V_2));//callvirt				void Reflector::CodeModel::IModuleCollection::Add(Reflector::CodeModel::IModule^)
	IL_01f7:                                                                        //ldc.i4				0x3
	IL_01fc:            V_4=3;                                                      //stloc				V_4
	IL_0200:            /*goto IL_000b;*/goto IL_0205;                              //br				IL_000b
	IL_0205:                                                                        //ldloc.2
	IL_0206:            Temp_6=V_2->M_x57();                                        //callvirt				System::Boolean Root::T_x2::M_x57()
	IL_020b:            if(Temp_6)goto IL_0131;                                     //brtrue				IL_0131
	IL_0210:                                                                        //ldc.i4				0x8
	IL_0215:            V_4=8;                                                      //stloc				V_4
	IL_0219:            /*goto IL_000b;*/goto IL_021e;                              //br				IL_000b
	IL_021e:            goto IL_0062;                                               //br				IL_0062
	IL_0223:                                                                        //ldc.i4				0xc
	IL_0228:            V_4=12;                                                     //stloc				V_4
	IL_022c:            /*goto IL_000b;*/goto IL_0231;                              //br				IL_000b
	IL_0231:                                                                        //ldloc.0
	IL_0232:                                                                        //ldarg.0
	IL_0233:            Temp_28=this->F_x9;                                         //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0238:            Temp_29=safe_cast<System::Collections::ICollection^>(Temp_28)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_023d:            if(V_0<Temp_29)goto IL_00e3;                                //blt				IL_00e3
	IL_0242:                                                                        //ldc.i4				0xd
	IL_0247:            V_4=13;                                                     //stloc				V_4
	IL_024b:            /*goto IL_000b;*/goto IL_0250;                              //br				IL_000b
	IL_0250:            goto IL_0188;                                               //br				IL_0188
	IL_0255:            return;                                                     //ret

}
inline Reflector::CodeModel::AssemblyType Root::T_x136::M_x11()
//Reflector::CodeModel::IAssembly^::get_Type by M_x11
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	Reflector::CodeModel::AssemblyType Temp_2 = (Reflector::CodeModel::AssemblyType)0;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Exception^ Temp_5 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0039;case 1:goto IL_007a;case 2:goto IL_000b;case 3:goto IL_005f;};//switch				(IL_0039,IL_007a,IL_000b,IL_005f)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_5=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_002c:            if(Temp_5!=nullptr)goto IL_007c;                            //brtrue.s				IL_007c
	IL_002e:                                                                        //ldc.i4				0x0
	IL_0033:            V_1=0;                                                      //stloc				V_1
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_0054;                                               //br.s				IL_0054
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:            Temp_1=Temp_0[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0047:                                                                        //castclass				Root::T_x2
	IL_004c:            V_0=safe_cast<Root::T_x2^>(Temp_1);                         //stloc.0
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_2=V_0->M_x18();                                        //callvirt				Reflector::CodeModel::AssemblyType Root::T_x2::M_x18()
	IL_0053:            return Temp_2;                                              //ret
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_1=3;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_3=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0065:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006a:            if(Temp_4==0)goto IL_007c;                                  //brfalse.s				IL_007c
	IL_006c:            goto IL_006f;                                               //br.s				IL_006f
	IL_006e:                                                                        //break
	IL_006f:                                                                        //ldc.i4				0x1
	IL_0074:            V_1=1;                                                      //stloc				V_1
	IL_0078:            /*goto IL_000d;*/goto IL_007a;                              //br.s				IL_000d
	IL_007a:            goto IL_003b;                                               //br.s				IL_003b
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            return safe_cast<Reflector::CodeModel::AssemblyType>(0);    //ret

}
inline Reflector::CodeModel::IAssemblyManager^ Root::T_x136::M_x12()
//Reflector::CodeModel::IAssembly^::get_AssemblyManager by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x136 F_x8
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IMethodDeclaration^ Root::T_x136::M_x13()
//Reflector::CodeModel::IAssembly^::get_EntryPoint by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IModule^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Exception^ Temp_5 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_000b;case 1:goto IL_0077;case 2:goto IL_0039;case 3:goto IL_005f;};//switch				(IL_000b,IL_0077,IL_0039,IL_005f)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_5=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_002c:            if(Temp_5!=nullptr)goto IL_0079;                            //brtrue.s				IL_0079
	IL_002e:                                                                        //ldc.i4				0x2
	IL_0033:            V_1=2;                                                      //stloc				V_1
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_0054;                                               //br.s				IL_0054
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:            Temp_1=Temp_0[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0047:                                                                        //castclass				Root::T_x2
	IL_004c:            V_0=safe_cast<Root::T_x2^>(Temp_1);                         //stloc.0
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_2=V_0->M_x48();                                        //callvirt				Reflector::CodeModel::IMethodDeclaration^ Root::T_x2::M_x48()
	IL_0053:            return Temp_2;                                              //ret
	IL_0054:                                                                        //ldc.i4				0x3
	IL_0059:            V_1=3;                                                      //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_3=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0065:            Temp_4=safe_cast<System::Collections::ICollection^>(Temp_3)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006a:            if(Temp_4==0)goto IL_0079;                                  //brfalse.s				IL_0079
	IL_006c:                                                                        //ldc.i4				0x1
	IL_0071:            V_1=1;                                                      //stloc				V_1
	IL_0075:            /*goto IL_000d;*/goto IL_0077;                              //br.s				IL_000d
	IL_0077:            goto IL_003b;                                               //br.s				IL_003b
	IL_0079:            goto IL_007c;                                               //br.s				IL_007c
	IL_007b:                                                                        //break
	IL_007c:                                                                        //ldnull
	IL_007d:            return nullptr;                                             //ret

}
inline System::Int32 Root::T_x136::M_x15()
//System::Object^::GetHashCode by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Name;                                          //call				System::String^ Root::T_x136::get_Name()
	IL_0006:            Temp_1=Temp_0->GetHashCode();                               //callvirt				System::Int32 System::String::GetHashCode()
	IL_000b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::HashAlgorithm Root::T_x136::M_x2()
//Reflector::CodeModel::IAssembly^::get_HashAlgorithm by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::HashAlgorithm Temp_0 = (Reflector::CodeModel::HashAlgorithm)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Reflector::CodeModel::HashAlgorithm Root::T_x136 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x136::M_x2(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x145^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x136::F_x4;                                  //ldsfld				Root::T_x145^ Root::T_x136 F_x4
	IL_0005:                                                                        //ldarg.1
	IL_0006:            Temp_1=Temp_0->M_x1(A_0);                                   //callvirt				System::String^ Root::T_x145::M_x1(System::Object^)
	IL_000b:            return Temp_1;                                              //ret

}
inline System::String^ Root::T_x136::M_x4()
//System::Object^::ToString by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Exception^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Exception^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_0=6;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_000f:            if(Temp_0!=nullptr)goto IL_0025;                            //brtrue.s				IL_0025
	IL_0011:            goto IL_0013;                                               //br.s				IL_0013
	IL_0013:                                                                        //ldc.i4.6
	IL_0014:                                                                        //dup
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //ldc.i4.2
	IL_0017:                                                                        //add
	IL_0018:                                                                        //bgt				IL_0014
	IL_001d:                                                                        //pop
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_6=Root::T_x149::M_x1(safe_cast<Reflector::CodeModel::IAssemblyReference^>(this));//call				System::String^ Root::T_x149::M_x1(Reflector::CodeModel::IAssemblyReference^)
	IL_0024:            return Temp_6;                                              //ret
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_1=this->Name;                                          //call				System::String^ Root::T_x136::get_Name()
	IL_002b:                                                                        //ldstr				L"\x0823\x0625"
	IL_0030:                                                                        //ldloc				V_0
	IL_0034:            Temp_2=a(L"\x0823\x0625",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_3=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_003f:            Temp_4=Temp_3->Message;                                     //callvirt				System::String^ System::Exception::get_Message()
	IL_0044:            Temp_5=System::String::Concat(Temp_1,Temp_2,Temp_4);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0049:            return Temp_5;                                              //ret

}
inline System::String^ Root::T_x136::M_x5()
//Reflector::CodeModel::IAssembly^::get_Status by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Exception^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Exception^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_2=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_0010:            Temp_3=Temp_2->Message;                                     //callvirt				System::String^ System::Exception::get_Message()
	IL_0015:            return Temp_3;                                              //ret
	IL_0016:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_001b:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IModuleCollection^ Root::T_x136::M_x8()
//Reflector::CodeModel::IAssembly^::get_Modules by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::CodeModel::IResourceCollection^ Root::T_x136::M_x9()
//Reflector::CodeModel::IAssembly^::get_Resources by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::IResource^>^ Temp_2 = nullptr;
	Root::T_x136::T_x1^ Temp_3 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IModule^ Temp_5 = nullptr;
	array<Reflector::CodeModel::IResource^>^ Temp_6 = nullptr;
	Root::T_x136::T_x1^ Temp_7 = nullptr;
	System::Exception^ Temp_8 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_1=2;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0026;                                               //br.s				IL_0026
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0064;case 1:goto IL_0039;case 2:goto IL_000b;case 3:goto IL_007f;};//switch				(IL_0064,IL_0039,IL_000b,IL_007f)
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_8=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_002c:            if(Temp_8!=nullptr)goto IL_0081;                            //brtrue.s				IL_0081
	IL_002e:                                                                        //ldc.i4				0x1
	IL_0033:            V_1=1;                                                      //stloc				V_1
	IL_0037:            /*goto IL_000d;*/goto IL_0039;                              //br.s				IL_000d
	IL_0039:            goto IL_0059;                                               //br.s				IL_0059
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_4=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:            Temp_5=Temp_4[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0047:                                                                        //castclass				Root::T_x2
	IL_004c:            V_0=safe_cast<Root::T_x2^>(Temp_5);                         //stloc.0
	IL_004d:                                                                        //ldloc.0
	IL_004e:            Temp_6=V_0->M_x5();                                         //callvirt				array<Reflector::CodeModel::IResource^>^ Root::T_x2::M_x5()
	IL_0053:            Temp_7=gcnew Root::T_x136::T_x1(Temp_6);                    //newobj				void Root::T_x136::T_x1::.ctor(array<Reflector::CodeModel::IResource^>^)
	IL_0058:            return safe_cast<Reflector::CodeModel::IResourceCollection^>(Temp_7);//ret
	IL_0059:                                                                        //ldc.i4				0x0
	IL_005e:            V_1=0;                                                      //stloc				V_1
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:                                                                        //ldarg.0
	IL_0065:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IModuleCollection^ Root::T_x136::M_x8()
	IL_006a:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_006f:            if(Temp_1==0)goto IL_0081;                                  //brfalse.s				IL_0081
	IL_0071:            goto IL_0074;                                               //br.s				IL_0074
	IL_0073:                                                                        //break
	IL_0074:                                                                        //ldc.i4				0x3
	IL_0079:            V_1=3;                                                      //stloc				V_1
	IL_007d:            /*goto IL_000d;*/goto IL_007f;                              //br.s				IL_000d
	IL_007f:            goto IL_003b;                                               //br.s				IL_003b
	IL_0081:                                                                        //ldc.i4.0
	IL_0082:            Temp_2=gcnew array<Reflector::CodeModel::IResource^>(0);    //newarr				Reflector::CodeModel::IResource
	IL_0087:            Temp_3=gcnew Root::T_x136::T_x1(Temp_2);                    //newobj				void Root::T_x136::T_x1::.ctor(array<Reflector::CodeModel::IResource^>^)
	IL_008c:            return safe_cast<Reflector::CodeModel::IResourceCollection^>(Temp_3);//ret

}
inline Reflector::CodeModel::IAssembly^ Root::T_x136::Resolve()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            return safe_cast<Reflector::CodeModel::IAssembly^>(this);   //ret

}
inline Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x136::Attributes::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IModuleCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_2 = nullptr;
	array<Reflector::CodeModel::ICustomAttribute^>^ Temp_3 = nullptr;
	Root::T_x11^ Temp_4 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IModule^ Temp_6 = nullptr;
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_7 = nullptr;
	System::Exception^ Temp_8 = nullptr;
	//local variables.
	Root::T_x2^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_1=4;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0045;case 1:goto IL_008d;case 2:goto IL_009d;case 3:goto IL_0052;case 4:goto IL_000b;case 5:goto IL_00b8;case 6:goto IL_0068;};//switch				(IL_0045,IL_008d,IL_009d,IL_0052,IL_000b,IL_00b8,IL_0068)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_8=this->F_x2;                                          //ldfld				System::Exception^ Root::T_x136 F_x2
	IL_0038:            if(Temp_8!=nullptr)goto IL_0047;                            //brtrue.s				IL_0047
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_1=0;                                                      //stloc				V_1
	IL_0043:            /*goto IL_000d;*/goto IL_0045;                              //br.s				IL_000d
	IL_0045:            goto IL_008f;                                               //br.s				IL_008f
	IL_0047:                                                                        //ldc.i4				0x3
	IL_004c:            V_1=3;                                                      //stloc				V_1
	IL_0050:            /*goto IL_000d;*/goto IL_0052;                              //br.s				IL_000d
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_2=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_0058:            if(Temp_2!=nullptr)goto IL_00c0;                            //brtrue.s				IL_00c0
	IL_005a:            goto IL_005d;                                               //br.s				IL_005d
	IL_005c:                                                                        //break
	IL_005d:                                                                        //ldc.i4				0x6
	IL_0062:            V_1=6;                                                      //stloc				V_1
	IL_0066:            /*goto IL_000d;*/goto IL_0068;                              //br.s				IL_000d
	IL_0068:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_006a:                                                                        //ldarg.0
	IL_006b:            Temp_5=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_0070:                                                                        //ldc.i4.0
	IL_0071:            Temp_6=Temp_5[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0076:                                                                        //castclass				Root::T_x2
	IL_007b:            V_0=safe_cast<Root::T_x2^>(Temp_6);                         //stloc.0
	IL_007c:                                                                        //ldloc.0
	IL_007d:            V_0->M_x8();                                                //callvirt				void Root::T_x2::M_x8()
	IL_0082:                                                                        //ldc.i4				0x1
	IL_0087:            V_1=1;                                                      //stloc				V_1
	IL_008b:            /*goto IL_000d;*/goto IL_008d;                              //br.s				IL_000d
	IL_008d:            goto IL_0047;                                               //br.s				IL_0047
	IL_008f:                                                                        //ldc.i4				0x2
	IL_0094:            V_1=2;                                                      //stloc				V_1
	IL_0098:            /*goto IL_000d;*/goto IL_009d;                              //br				IL_000d
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_0=this->F_x9;                                          //ldfld				Reflector::CodeModel::IModuleCollection^ Root::T_x136 F_x9
	IL_00a3:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a8:            if(Temp_1==0)goto IL_0047;                                  //brfalse.s				IL_0047
	IL_00aa:                                                                        //ldc.i4				0x5
	IL_00af:            V_1=5;                                                      //stloc				V_1
	IL_00b3:            /*goto IL_000d;*/goto IL_00b8;                              //br				IL_000d
	IL_00b8:            goto IL_006a;                                               //br.s				IL_006a
	IL_00ba:            Temp_7=Root::T_x11::M_x1();                                 //call				Reflector::CodeModel::ICustomAttributeCollection^ Root::T_x11::M_x1()
	IL_00bf:            return Temp_7;                                              //ret
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            Temp_3=this->F_x5;                                          //ldfld				array<Reflector::CodeModel::ICustomAttribute^>^ Root::T_x136 F_x5
	IL_00c6:            Temp_4=gcnew Root::T_x11(Temp_3);                           //newobj				void Root::T_x11::.ctor(array<Reflector::CodeModel::ICustomAttribute^>^)
	IL_00cb:            return safe_cast<Reflector::CodeModel::ICustomAttributeCollection^>(Temp_4);//ret

}
inline Reflector::CodeModel::IModule^ Root::T_x136::Context::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldnull
	IL_0001:            return nullptr;                                             //ret

}
inline void Root::T_x136::Context::set(Reflector::CodeModel::IModule^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x136::Culture::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->Culture;                                     //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x136::Culture::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x136::HashValue::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	array<System::Byte>^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->HashValue;                                   //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_HashValue()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x136::HashValue::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x136::Location::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x136 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x136::Location::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::String^ Root::T_x136::Name::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            /*if(Temp_0==nullptr)goto IL_000a;*/if(Temp_0==nullptr)goto IL_000801;//brfalse.s				IL_000a
	IL_0008:            goto IL_0025;                                               //br.s				IL_0025
	IL_000801:          try{
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_1=this->F_x1;                                          //ldfld				System::String^ Root::T_x136 F_x1
	IL_0013:            Temp_2=System::IO::Path::GetFileNameWithoutExtension(Temp_1);//call				System::String^ System::IO::Path::GetFileNameWithoutExtension(System::String^)
	IL_0018:            V_0=Temp_2;                                                 //stloc.0
	IL_0019:            goto IL_0031;                                               //leave.s				IL_0031
	                    ;}
	                    catch(System::ArgumentException^ Ex_001902){
	IL_001b:                                                                        //pop
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_5=this->F_x1;                                          //ldfld				System::String^ Root::T_x136 F_x1
	IL_0022:            V_0=Temp_5;                                                 //stloc.0
	IL_0023:            goto IL_0031;                                               //leave.s				IL_0031
	                    ;}
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_3=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_002b:            Temp_4=Temp_3->Name;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0030:            return Temp_4;                                              //ret
	IL_0031:                                                                        //ldloc.0
	IL_0032:            return V_0;                                                 //ret

}
inline void Root::T_x136::Name::set(System::String^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x136::PublicKey::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	array<System::Byte>^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->PublicKey;                                   //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKey()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x136::PublicKey::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline array<System::Byte>^ Root::T_x136::PublicKeyToken::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	array<System::Byte>^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->PublicKeyToken;                              //callvirt				array<System::Byte>^ Reflector::CodeModel::IAssemblyReference::get_PublicKeyToken()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x136::PublicKeyToken::set(array<System::Byte>^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x136::Retargetable::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->Retargetable;                                //callvirt				System::Boolean Reflector::CodeModel::IAssemblyReference::get_Retargetable()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldc.i4.0
	IL_0017:            return false;                                               //ret

}
inline void Root::T_x136::Retargetable::set(System::Boolean value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Version^ Root::T_x136::Version::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyReference^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_1 = nullptr;
	System::Version^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyReference^ Root::T_x136 F_x13
	IL_0010:            Temp_2=Temp_1->Version;                                     //callvirt				System::Version^ Reflector::CodeModel::IAssemblyReference::get_Version()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x136::Version::set(System::Version^ value)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Root::T_x136::T_x1::T_x1(array<Reflector::CodeModel::IResource^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x136::T_x1::CopyTo(System::Array^ array_1,System::Int32 index)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldarg.2
	IL_0008:            Temp_0->CopyTo(array_1,index);                              //callvirt				void System::Array::CopyTo(System::Array^,System::Int32)
	IL_000d:            return;                                                     //ret

}
inline System::Collections::IEnumerator^ Root::T_x136::T_x1::GetEnumerator()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Array::GetEnumerator()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x136::T_x1::M_x1()
//Reflector::CodeModel::IResourceCollection^::Clear by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x136::T_x1::M_x1(Reflector::CodeModel::IResource^ A_0)
//Reflector::CodeModel::IResourceCollection^::IndexOf by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::T_x1::M_x1(System::Collections::ICollection^ A_0)
//Reflector::CodeModel::IResourceCollection^::AddRange by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline Reflector::CodeModel::IResource^ Root::T_x136::T_x1::M_x1(System::Int32 A_0)
//Reflector::CodeModel::IResourceCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:                                                                        //ldarg.1
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[A_0];                                         //ret

}
inline void Root::T_x136::T_x1::M_x1(System::Int32 A_0,Reflector::CodeModel::IResource^ A_1)
//Reflector::CodeModel::IResourceCollection^::Insert by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::T_x1::M_x12(Reflector::CodeModel::IResource^ A_0)
//Reflector::CodeModel::IResourceCollection^::Add by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::T_x1::M_x13(Reflector::CodeModel::IResource^ A_0)
//Reflector::CodeModel::IResourceCollection^::Remove by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Boolean Root::T_x136::T_x1::M_x2(Reflector::CodeModel::IResource^ A_0)
//Reflector::CodeModel::IResourceCollection^::Contains by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::T_x1::M_x2(System::Int32 A_0)
//Reflector::CodeModel::IResourceCollection^::RemoveAt by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x136::T_x1::M_x2(System::Int32 A_0,Reflector::CodeModel::IResource^ A_1)
//Reflector::CodeModel::IResourceCollection^::set_Item by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x136::T_x1::Count::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->Length;                                      //ldlen
	IL_0007:                                                                        //conv.i4
	IL_0008:            return Temp_1;                                              //ret

}
inline System::Boolean Root::T_x136::T_x1::IsSynchronized::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->IsSynchronized;                              //callvirt				System::Boolean System::Array::get_IsSynchronized()
	IL_000b:            return Temp_1;                                              //ret

}
inline System::Object^ Root::T_x136::T_x1::SyncRoot::get()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<Reflector::CodeModel::IResource^>^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<Reflector::CodeModel::IResource^>^ Root::T_x136::T_x1 F_x1
	IL_0006:            Temp_1=Temp_0->SyncRoot;                                    //callvirt				System::Object^ System::Array::get_SyncRoot()
	IL_000b:            return Temp_1;                                              //ret

}
