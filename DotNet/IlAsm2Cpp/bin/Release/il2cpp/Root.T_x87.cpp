#include "global_xref.h"

inline Root::T_x87::T_x87(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	Root::T_x86^ Temp_2 = nullptr;
	Root::T_x86^ Temp_3 = nullptr;
	Root::T_x85^ Temp_4 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_5 = nullptr;
	Root::T_x86^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::UserControl();*/                  //call				void System::Windows::Forms::UserControl::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.5
	IL_0008:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x87 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x87 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldftn				void Root::T_x87::M_x1(System::Object^,System::EventArgs^)
	IL_0021:            Temp_1=gcnew System::EventHandler(this,&Root::T_x87::M_x1); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0026:            Temp_0->ActiveItemChanged += Temp_1;                        //callvirt				void Reflector::IAssemblyBrowser::add_ActiveItemChanged(System::EventHandler^)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.2
	IL_002d:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x87 F_x2
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldarg.3
	IL_0034:            Temp_2=gcnew Root::T_x86(A_2);                              //newobj				void Root::T_x86::.ctor(Reflector::ICommandBarManager^)
	IL_0039:            this->F_x12=Temp_2;                                         //stfld				Root::T_x86^ Root::T_x87 F_x12
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_3=this->F_x12;                                         //ldfld				Root::T_x86^ Root::T_x87 F_x12
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldftn				void Root::T_x87::M_x1(System::Object^,Root::T_x84^)
	IL_004b:            Temp_4=gcnew Root::T_x85(this,&Root::T_x87::M_x1);          //newobj				void Root::T_x85::.ctor(System::Object^,System::IntPtr)
	IL_0050:            Temp_3->M_x2(Temp_4);                                       //callvirt				void Root::T_x86::M_x2(Root::T_x85^)
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_5=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_6=this->F_x12;                                         //ldfld				Root::T_x86^ Root::T_x87 F_x12
	IL_0061:            Temp_5->Add(safe_cast<System::Windows::Forms::Control^>(Temp_6));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0066:            return;                                                     //ret

}
inline void Root::T_x87::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Cursor^ Temp_0 = nullptr;
	System::Windows::Forms::Cursor^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Root::T_x86^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::Windows::Forms::Cursor^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Object^ V_2 = nullptr;
	Reflector::CodeModel::IDocumentationProvider^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_5=15;                                                     //stloc				V_5
	IL_0009:            goto IL_0028;                                               //br.s				IL_0028
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_005c;case 1:goto IL_00a0;case 2:goto IL_0089;case 3:goto IL_006d;case 4:goto IL_00b1;};//switch				(IL_005c,IL_00a0,IL_0089,IL_006d,IL_00b1)
	IL_0028:            Temp_0=System::Windows::Forms::Cursor::Current;             //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursor::get_Current()
	IL_002d:            V_0=Temp_0;                                                 //stloc.0
	IL_002e:            Temp_1=System::Windows::Forms::Cursors::WaitCursor;         //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursors::get_WaitCursor()
	IL_0033:            System::Windows::Forms::Cursor::Current=Temp_1;             //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_0038:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_003d:            V_1=Temp_2;                                                 //stloc.1
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_3=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x87 F_x1
	IL_0044:            Temp_4=Temp_3->ActiveItem;                                  //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_0049:            V_2=Temp_4;                                                 //stloc.2
	IL_004a:                                                                        //ldloc.2
	IL_004b:                                                                        //isinst				Reflector::CodeModel::IDocumentationProvider
	IL_0050:            V_3=dynamic_cast<Reflector::CodeModel::IDocumentationProvider^>(V_2);//stloc.3
	IL_0051:                                                                        //ldc.i4				0x0
	IL_0056:            V_4=0;                                                      //stloc				V_4
	IL_005a:            /*goto IL_000b;*/goto IL_005c;                              //br.s				IL_000b
	IL_005c:            goto IL_005f;                                               //br.s				IL_005f
	IL_005e:                                                                        //break
	IL_005f:                                                                        //ldloc.3
	IL_0060:            if(V_3==nullptr)goto IL_00b3;                               //brfalse.s				IL_00b3
	IL_0062:                                                                        //ldc.i4				0x3
	IL_0067:            V_4=3;                                                      //stloc				V_4
	IL_006b:            /*goto IL_000b;*/goto IL_006d;                              //br.s				IL_000b
	IL_006d:            goto IL_008b;                                               //br.s				IL_008b
	IL_006f:                                                                        //ldstr				L"\x112C\x5C2E\x4430\x5E32\x5834\x5636\x4B38\x423A\x033C\x713E\x2E40\x6342\x2144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C\x7F5E\x0060\x1562\x0464\x0E66\x0568\x0A6A\x0F6C\x036E\x1470\x5372\x1374\x1876\x0B78\x5B7A\x097C\x177E\xE880\xF082\xA584\xEE86\xFD88\xEE8A\xE08C\xA18E\xAD90\xBC92\xE694\xE296\xF498\xF69A\xFC9C\xED9E\xD8A0\x9DA2"
	IL_0074:                                                                        //ldloc				V_5
	IL_0078:            Temp_7=a(L"\x112C\x5C2E\x4430\x5E32\x5834\x5636\x4B38\x423A\x033C\x713E\x2E40\x6342\x2144\x2846\x2A48\x3E4A\x204C\x2A4E\x3F50\x2752\x3454\x2356\x3058\x345A\x335C\x7F5E\x0060\x1562\x0464\x0E66\x0568\x0A6A\x0F6C\x036E\x1470\x5372\x1374\x1876\x0B78\x5B7A\x097C\x177E\xE880\xF082\xA584\xEE86\xFD88\xEE8A\xE08C\xA18E\xAD90\xBC92\xE694\xE296\xF498\xF69A\xFC9C\xED9E\xD8A0\x9DA2",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007d:            V_1=Temp_7;                                                 //stloc.1
	IL_007e:                                                                        //ldc.i4				0x2
	IL_0083:            V_4=2;                                                      //stloc				V_4
	IL_0087:            /*goto IL_000b;*/goto IL_0089;                              //br.s				IL_000b
	IL_0089:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_008b:                                                                        //ldloc.3
	IL_008c:            Temp_6=V_3->Documentation;                                  //callvirt				System::String^ Reflector::CodeModel::IDocumentationProvider::get_Documentation()
	IL_0091:            V_1=Temp_6;                                                 //stloc.1
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_4=1;                                                      //stloc				V_4
	IL_009b:            /*goto IL_000b;*/goto IL_00a0;                              //br				IL_000b
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            if(V_1!=nullptr)goto IL_00b3;                               //brtrue.s				IL_00b3
	IL_00a3:                                                                        //ldc.i4				0x4
	IL_00a8:            V_4=4;                                                      //stloc				V_4
	IL_00ac:            /*goto IL_000b;*/goto IL_00b1;                              //br				IL_000b
	IL_00b1:            goto IL_006f;                                               //br.s				IL_006f
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_5=this->F_x12;                                         //ldfld				Root::T_x86^ Root::T_x87 F_x12
	IL_00b9:                                                                        //ldloc.1
	IL_00ba:            Temp_5->M_x1(V_1);                                          //callvirt				void Root::T_x86::M_x1(System::String^)
	IL_00bf:                                                                        //ldloc.0
	IL_00c0:            System::Windows::Forms::Cursor::Current=V_0;                //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_00c5:            return;                                                     //ret

}
inline void Root::T_x87::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0006:            if(Temp_0==nullptr)goto IL_0012;                            //brfalse.s				IL_0012
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            this->M_x1();                                               //call				void Root::T_x87::M_x1()
	IL_0010:            goto IL_0012;                                               //br.s				IL_0012
	IL_0012:            return;                                                     //ret

}
inline void Root::T_x87::M_x1(System::Object^ A_0,Root::T_x84^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Root::T_x111^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_4 = nullptr;
	//local variables.
	Root::T_x111^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0049;case 1:goto IL_003b;case 2:goto IL_006d;};//switch				(IL_0049,IL_003b,IL_006d)
	IL_0017:                                                                        //ldarg.2
	IL_0018:            Temp_0=A_1->M_x1();                                         //callvirt				System::String^ Root::T_x84::M_x1()
	IL_001d:            Temp_1=gcnew Root::T_x111(Temp_0);                          //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0022:            V_0=Temp_1;                                                 //stloc.0
	IL_0023:                                                                        //ldloc.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x87 F_x2
	IL_002a:            Temp_3=V_0->M_x1(Temp_2);                                   //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_002f:            V_1=Temp_3;                                                 //stloc.1
	IL_0030:                                                                        //ldc.i4				0x1
	IL_0035:            V_2=1;                                                      //stloc				V_2
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:                                                                        //ldloc.1
	IL_003c:            if(V_1==nullptr)goto IL_006f;                               //brfalse.s				IL_006f
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_2=0;                                                      //stloc				V_2
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_004b;                                               //br.s				IL_004b
	IL_004b:                                                                        //ldarg.0
	IL_004c:            Temp_4=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x87 F_x1
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_4->ActiveItem=V_1;                                     //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_0057:                                                                        //ldc.i4.4
	IL_0058:                                                                        //dup
	IL_0059:                                                                        //dup
	IL_005a:                                                                        //ldc.i4.2
	IL_005b:                                                                        //sub
	IL_005c:                                                                        //blt				IL_0058
	IL_0061:                                                                        //pop
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_2=2;                                                      //stloc				V_2
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:            goto IL_006f;                                               //br.s				IL_006f
	IL_006f:            return;                                                     //ret

}
inline void Root::T_x87::OnParentChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::UserControl::OnParentChanged(e);    //call				void System::Windows::Forms::UserControl::OnParentChanged(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_000d:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldarg.0
	IL_0012:            this->M_x1();                                               //call				void Root::T_x87::M_x1()
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
