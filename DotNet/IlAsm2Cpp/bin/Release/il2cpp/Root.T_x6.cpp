#include "global_xref.h"

inline Root::T_x6::T_x6(Root::T_x118^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	Root::T_x118^ Temp_2 = nullptr;
	System::EventHandler^ Temp_3 = nullptr;
	Root::T_x118^ Temp_4 = nullptr;
	System::EventHandler^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ComboBox();*/                     //call				void System::Windows::Forms::ComboBox::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.2
	IL_0008:            this->DropDownStyle=safe_cast<System::Windows::Forms::ComboBoxStyle>(2);//call				void System::Windows::Forms::ComboBox::set_DropDownStyle(System::Windows::Forms::ComboBoxStyle)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.s				90
	IL_0010:            this->Width=90;                                             //call				void System::Windows::Forms::Control::set_Width(System::Int32)
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            this->F_x1=A_0;                                             //stfld				Root::T_x118^ Root::T_x6 F_x1
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldftn				void Root::T_x6::M_x1(System::Object^,System::EventArgs^)
	IL_0029:            Temp_1=gcnew System::EventHandler(this,&Root::T_x6::M_x1);  //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_002e:            Temp_0->M_x5(Temp_1);                                       //callvirt				void Root::T_x118::M_x5(System::EventHandler^)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldftn				void Root::T_x6::M_x12(System::Object^,System::EventArgs^)
	IL_0040:            Temp_3=gcnew System::EventHandler(this,&Root::T_x6::M_x12); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0045:            Temp_2->M_x13(Temp_3);                                      //callvirt				void Root::T_x118::M_x13(System::EventHandler^)
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldftn				void Root::T_x6::M_x2(System::Object^,System::EventArgs^)
	IL_0057:            Temp_5=gcnew System::EventHandler(this,&Root::T_x6::M_x2);  //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_005c:            Temp_4->M_x2(Temp_5);                                       //callvirt				void Root::T_x118::M_x2(System::EventHandler^)
	IL_0061:                                                                        //ldarg.0
	IL_0062:            this->M_x2();                                               //call				void Root::T_x6::M_x2()
	IL_0067:            return;                                                     //ret

}
inline void Root::T_x6::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118^ Temp_0 = nullptr;
	Reflector::ILanguageCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Root::T_x118^ Temp_3 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_4 = nullptr;
	Root::T_x118^ Temp_5 = nullptr;
	Reflector::ILanguageCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0045;case 1:goto IL_00a2;case 2:goto IL_0092;case 3:goto IL_0059;case 4:goto IL_0066;case 5:goto IL_0034;case 6:goto IL_00c6;};//switch				(IL_0045,IL_00a2,IL_0092,IL_0059,IL_0066,IL_0034,IL_00c6)
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            V_0=0;                                                      //stloc.0
	IL_0029:                                                                        //ldc.i4				0x5
	IL_002e:            V_1=5;                                                      //stloc				V_1
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:            goto IL_0094;                                               //br.s				IL_0094
	IL_0036:                                                                        //ldloc.0
	IL_0037:                                                                        //ldc.i4.1
	IL_0038:                                                                        //add
	IL_0039:            V_0=(V_0 + 1);                                              //stloc.0
	IL_003a:                                                                        //ldc.i4				0x0
	IL_003f:            V_1=0;                                                      //stloc				V_1
	IL_0043:            /*goto IL_0002;*/goto IL_0045;                              //br.s				IL_0002
	IL_0045:            goto IL_0094;                                               //br.s				IL_0094
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldloc.0
	IL_0049:            this->SelectedIndex=V_0;                                    //callvirt				void System::Windows::Forms::ListControl::set_SelectedIndex(System::Int32)
	IL_004e:                                                                        //ldc.i4				0x3
	IL_0053:            V_1=3;                                                      //stloc				V_1
	IL_0057:            /*goto IL_0002;*/goto IL_0059;                              //br.s				IL_0002
	IL_0059:            goto IL_0036;                                               //br.s				IL_0036
	IL_005b:                                                                        //ldc.i4				0x4
	IL_0060:            V_1=4;                                                      //stloc				V_1
	IL_0064:            /*goto IL_0002;*/goto IL_0066;                              //br.s				IL_0002
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_006c:            Temp_4=Temp_3->M_x1();                                      //callvirt				Reflector::CodeModel::ILanguage^ Root::T_x118::M_x1()
	IL_0071:                                                                        //ldarg.0
	IL_0072:            Temp_5=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0077:            Temp_6=Temp_5->M_x2();                                      //callvirt				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_007c:                                                                        //ldloc.0
	IL_007d:            Temp_7=Temp_6[V_0];                                         //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_0082:            if(Temp_4!=Temp_7)goto IL_0036;                             //bne.un.s				IL_0036
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_1=2;                                                      //stloc				V_1
	IL_008d:            /*goto IL_0002;*/goto IL_0092;                              //br				IL_0002
	IL_0092:            goto IL_0047;                                               //br.s				IL_0047
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_1=1;                                                      //stloc				V_1
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_00a4:                                                                        //break
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_00ac:            Temp_1=Temp_0->M_x2();                                      //callvirt				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_00b1:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b6:            if(V_0<Temp_2)goto IL_005b;                                 //blt.s				IL_005b
	IL_00b8:                                                                        //ldc.i4				0x6
	IL_00bd:            V_1=6;                                                      //stloc				V_1
	IL_00c1:            /*goto IL_0002;*/goto IL_00c6;                              //br				IL_0002
	IL_00c6:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00c8:            return;                                                     //ret

}
inline void Root::T_x6::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::ComboBox^::OnSelectedIndexChanged by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x118^ Temp_0 = nullptr;
	Reflector::ILanguageCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::ILanguage^ Temp_3 = nullptr;
	Root::T_x118^ Temp_4 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_5 = nullptr;
	Root::T_x118^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ILanguage^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003c;case 1:goto IL_0055;case 2:goto IL_006e;};//switch				(IL_003c,IL_0055,IL_006e)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0020:            Temp_1=Temp_0->M_x2();                                      //callvirt				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_2=this->SelectedIndex;                                 //callvirt				System::Int32 System::Windows::Forms::ListControl::get_SelectedIndex()
	IL_002b:            Temp_3=Temp_1[Temp_2];                                      //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_0030:            V_0=Temp_3;                                                 //stloc.0
	IL_0031:                                                                        //ldc.i4				0x0
	IL_0036:            V_1=0;                                                      //stloc				V_1
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:                                                                        //ldloc.0
	IL_003d:                                                                        //ldarg.0
	IL_003e:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0043:            Temp_5=Temp_4->M_x1();                                      //callvirt				Reflector::CodeModel::ILanguage^ Root::T_x118::M_x1()
	IL_0048:            if(V_0==Temp_5)goto IL_0070;                                //beq.s				IL_0070
	IL_004a:                                                                        //ldc.i4				0x1
	IL_004f:            V_1=1;                                                      //stloc				V_1
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:            goto IL_0057;                                               //br.s				IL_0057
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_6=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_005d:                                                                        //ldloc.0
	IL_005e:            Temp_6->M_x2(V_0);                                          //callvirt				void Root::T_x118::M_x2(Reflector::CodeModel::ILanguage^)
	IL_0063:                                                                        //ldc.i4				0x2
	IL_0068:            V_1=2;                                                      //stloc				V_1
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:            goto IL_0070;                                               //br.s				IL_0070
	IL_0070:                                                                        //ldarg.0
	IL_0071:                                                                        //ldarg.1
	IL_0072:            System::Windows::Forms::ComboBox::OnSelectedIndexChanged(A_0);//call				void System::Windows::Forms::ComboBox::OnSelectedIndexChanged(System::EventArgs^)
	IL_0077:            return;                                                     //ret

}
inline void Root::T_x6::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x6::M_x1()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x6::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x2();                                               //call				void Root::T_x6::M_x2()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x6::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ComboBox::ObjectCollection^ Temp_0 = nullptr;
	Root::T_x118^ Temp_1 = nullptr;
	Reflector::ILanguageCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::ComboBox::ObjectCollection^ Temp_4 = nullptr;
	Root::T_x118^ Temp_5 = nullptr;
	Reflector::ILanguageCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_005e;case 1:goto IL_0033;case 2:goto IL_009f;case 3:goto IL_0040;};//switch				(IL_005e,IL_0033,IL_009f,IL_0040)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->Items;                                         //call				System::Windows::Forms::ComboBox::ObjectCollection^ System::Windows::Forms::ComboBox::get_Items()
	IL_0021:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::ComboBox::ObjectCollection::Clear()
	IL_0026:                                                                        //ldc.i4.0
	IL_0027:            V_0=0;                                                      //stloc.0
	IL_0028:                                                                        //ldc.i4				0x1
	IL_002d:            V_1=1;                                                      //stloc				V_1
	IL_0031:            /*goto IL_0002;*/goto IL_0033;                              //br.s				IL_0002
	IL_0033:            goto IL_0035;                                               //br.s				IL_0035
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_1=3;                                                      //stloc				V_1
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_0047:            Temp_2=Temp_1->M_x2();                                      //callvirt				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_004c:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0051:            if(V_0<Temp_3)goto IL_0060;                                 //blt.s				IL_0060
	IL_0053:                                                                        //ldc.i4				0x0
	IL_0058:            V_1=0;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_0060:                                                                        //ldarg.0
	IL_0061:            Temp_4=this->Items;                                         //call				System::Windows::Forms::ComboBox::ObjectCollection^ System::Windows::Forms::ComboBox::get_Items()
	IL_0066:                                                                        //ldarg.0
	IL_0067:            Temp_5=this->F_x1;                                          //ldfld				Root::T_x118^ Root::T_x6 F_x1
	IL_006c:            Temp_6=Temp_5->M_x2();                                      //callvirt				Reflector::ILanguageCollection^ Root::T_x118::M_x2()
	IL_0071:                                                                        //ldloc.0
	IL_0072:            Temp_7=Temp_6[V_0];                                         //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_0077:            Temp_8=Temp_7->Name;                                        //callvirt				System::String^ Reflector::CodeModel::ILanguage::get_Name()
	IL_007c:            Temp_9=Temp_4->Add(safe_cast<System::Object^>(Temp_8));     //callvirt				System::Int32 System::Windows::Forms::ComboBox::ObjectCollection::Add(System::Object^)
	IL_0081:                                                                        //pop
	IL_0082:                                                                        //ldloc.0
	IL_0083:                                                                        //ldc.i4.1
	IL_0084:                                                                        //add
	IL_0085:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0086:                                                                        //ldc.i4.4
	IL_0087:                                                                        //dup
	IL_0088:                                                                        //dup
	IL_0089:                                                                        //ldc.i4.2
	IL_008a:                                                                        //sub
	IL_008b:                                                                        //blt				IL_0087
	IL_0090:                                                                        //pop
	IL_0091:                                                                        //ldc.i4				0x2
	IL_0096:            V_1=2;                                                      //stloc				V_1
	IL_009a:            /*goto IL_0002;*/goto IL_009f;                              //br				IL_0002
	IL_009f:            goto IL_0035;                                               //br.s				IL_0035
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            this->M_x1();                                               //call				void Root::T_x6::M_x1()
	IL_00a7:            return;                                                     //ret

}
inline void Root::T_x6::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x2();                                               //call				void Root::T_x6::M_x2()
	IL_0006:            return;                                                     //ret

}
