#include "global_xref.h"

inline Root::T_x118::T_x118()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldnull
	IL_0002:            this->F_x13=safe_cast<Reflector::CodeModel::ILanguage^>(nullptr);//stfld				Reflector::CodeModel::ILanguage^ Root::T_x118 F_x13
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=gcnew Root::T_x118::T_x1();                          //newobj				void Root::T_x118::T_x1::.ctor()
	IL_000d:            this->F_x8=Temp_0;                                          //stfld				Root::T_x118::T_x1^ Root::T_x118 F_x8
	IL_0012:                                                                        //ldarg.0
	IL_0013:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0018:            return;                                                     //ret

}
inline Reflector::CodeModel::ILanguage^ Root::T_x118::M_x1()
//Reflector::ILanguageManager^::get_ActiveLanguage by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ILanguage^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::CodeModel::ILanguage^ Root::T_x118 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x118::M_x1(Reflector::CodeModel::ILanguage^ A_0)
//Reflector::ILanguageManager^::UnregisterLanguage by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118::T_x1^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	Reflector::ILanguageCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_3 = nullptr;
	Reflector::ILanguageCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Reflector::CodeModel::ILanguage^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_001f;                                               //br.s				IL_001f
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_00a2;case 1:goto IL_0087;case 2:goto IL_0044;case 3:goto IL_0058;case 4:goto IL_0077;};//switch				(IL_00a2,IL_0087,IL_0044,IL_0058,IL_0077)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x118::T_x1^ Root::T_x118 F_x8
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_0->M_x2(A_0);                                          //callvirt				void Root::T_x118::T_x1::M_x2(Reflector::CodeModel::ILanguage^)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0031:            this->M_x1(Temp_1);                                         //callvirt				void Root::T_x118::M_x1(System::EventArgs^)
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x2
	IL_003e:            V_0=2;                                                      //stloc				V_0
	IL_0042:            /*goto IL_0002;*/goto IL_0044;                              //br.s				IL_0002
	IL_0044:                                                                        //ldarg.1
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_6=this->M_x1();                                        //call				Reflector::CodeModel::ILanguage^ Root::T_x118::M_x1()
	IL_004b:            if(A_0!=Temp_6)goto IL_00a4;                                //bne.un.s				IL_00a4
	IL_004d:                                                                        //ldc.i4				0x3
	IL_0052:            V_0=3;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_0079;                                               //br.s				IL_0079
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_2=this->M_x2();                                        //call				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_0061:                                                                        //ldc.i4.0
	IL_0062:            Temp_3=Temp_2[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_0067:            this->M_x2(Temp_3);                                         //call				void Root::T_x118::M_x2(Reflector::CodeModel::ILanguage^)
	IL_006c:                                                                        //ldc.i4				0x4
	IL_0071:            V_0=4;                                                      //stloc				V_0
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_0079:                                                                        //ldc.i4				0x1
	IL_007e:            V_0=1;                                                      //stloc				V_0
	IL_0082:            /*goto IL_0002;*/goto IL_0087;                              //br				IL_0002
	IL_0087:                                                                        //ldarg.0
	IL_0088:            Temp_4=this->M_x2();                                        //call				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_008d:            Temp_5=safe_cast<System::Collections::ICollection^>(Temp_4)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0092:            if(Temp_5==0)goto IL_00a4;                                  //brfalse.s				IL_00a4
	IL_0094:                                                                        //ldc.i4				0x0
	IL_0099:            V_0=0;                                                      //stloc				V_0
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:            goto IL_005a;                                               //br.s				IL_005a
	IL_00a4:            return;                                                     //ret

}
inline void Root::T_x118::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0006:            if(Temp_0==nullptr)goto IL_001d;                            //brfalse.s				IL_001d
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x12;                                         //ldfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0016:            Temp_1(safe_cast<System::Object^>(this),Temp_2);            //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x118::M_x1(System::EventHandler^ A_0)
//Reflector::ILanguageManager^::remove_ActiveLanguageChanged by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^ A_0)
//Reflector::ILanguageManager^::RegisterLanguage by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118::T_x1^ Temp_0 = nullptr;
	System::EventArgs^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x118::T_x1^ Root::T_x118 F_x8
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->M_x1(A_0);                                          //callvirt				void Root::T_x118::T_x1::M_x1(Reflector::CodeModel::ILanguage^)
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_1=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0012:            this->M_x2(Temp_1);                                         //callvirt				void Root::T_x118::M_x2(System::EventArgs^)
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x118::M_x12(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_001d;                            //brfalse.s				IL_001d
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0016:            Temp_1(safe_cast<System::Object^>(this),Temp_2);            //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x118::M_x12(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x118::M_x13(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x2=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0017:            return;                                                     //ret

}
inline Reflector::ILanguageCollection^ Root::T_x118::M_x2()
//Reflector::ILanguageManager^::get_Languages by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x118::T_x1^ Root::T_x118 F_x8
	IL_0006:            return safe_cast<Reflector::ILanguageCollection^>(Temp_0);  //ret

}
inline void Root::T_x118::M_x2(Reflector::CodeModel::ILanguage^ A_0)
//Reflector::ILanguageManager^::set_ActiveLanguage by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventArgs^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x13=A_0;                                            //stfld				Reflector::CodeModel::ILanguage^ Root::T_x118 F_x13
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_000d:            this->M_x12(Temp_0);                                        //callvirt				void Root::T_x118::M_x12(System::EventArgs^)
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x118::M_x2(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	System::EventArgs^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0006:            if(Temp_0==nullptr)goto IL_001d;                            //brfalse.s				IL_001d
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x2;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:            Temp_2=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_0016:            Temp_1(safe_cast<System::Object^>(this),Temp_2);            //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_001b:            goto IL_001d;                                               //br.s				IL_001d
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x118::M_x2(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x12;                                         //ldfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x12=safe_cast<System::EventHandler^>(Temp_1);       //stfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x118::M_x5(System::EventHandler^ A_0)
//Reflector::ILanguageManager^::add_ActiveLanguageChanged by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x118 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x118::M_x8(System::EventHandler^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x12;                                         //ldfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x12=safe_cast<System::EventHandler^>(Temp_1);       //stfld				System::EventHandler^ Root::T_x118 F_x12
	IL_0017:            return;                                                     //ret

}
inline Root::T_x118::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Collections::CollectionBase();*/                  //call				void System::Collections::CollectionBase::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x118::T_x1::M_x1(Reflector::CodeModel::ILanguage^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->List;                                          //call				System::Collections::IList^ System::Collections::CollectionBase::get_List()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0->Add(safe_cast<System::Object^>(A_0));        //callvirt				System::Int32 System::Collections::IList::Add(System::Object^)
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline Reflector::CodeModel::ILanguage^ Root::T_x118::T_x1::M_x1(System::Int32 A_0)
//Reflector::ILanguageCollection^::get_Item by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IList^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->List;                                          //call				System::Collections::IList^ System::Collections::CollectionBase::get_List()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[A_0];                                         //callvirt				System::Object^ System::Collections::IList::get_Item(System::Int32)
	IL_000c:                                                                        //castclass				Reflector::CodeModel::ILanguage
	IL_0011:            return safe_cast<Reflector::CodeModel::ILanguage^>(Temp_1); //ret

}
inline void Root::T_x118::T_x1::M_x2(Reflector::CodeModel::ILanguage^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->List;                                          //call				System::Collections::IList^ System::Collections::CollectionBase::get_List()
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->Remove(safe_cast<System::Object^>(A_0));            //callvirt				void System::Collections::IList::Remove(System::Object^)
	IL_000c:            return;                                                     //ret

}
