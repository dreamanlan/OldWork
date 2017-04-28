#include "global_xref.h"

inline Root::T_x16::T_x16(Reflector::ICommandBarManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarCollection^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::ICommandBar^ Temp_2 = nullptr;
	Reflector::ICommandBar^ Temp_3 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Drawing::Image^ Temp_6 = nullptr;
	System::EventHandler^ Temp_7 = nullptr;
	Reflector::ICommandBarButton^ Temp_8 = nullptr;
	Reflector::ICommandBar^ Temp_9 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_10 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_11 = nullptr;
	Reflector::ICommandBar^ Temp_12 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Drawing::Image^ Temp_15 = nullptr;
	System::EventHandler^ Temp_16 = nullptr;
	Reflector::ICommandBarButton^ Temp_17 = nullptr;
	Reflector::ICommandBar^ Temp_18 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::Drawing::Image^ Temp_21 = nullptr;
	System::EventHandler^ Temp_22 = nullptr;
	Reflector::ICommandBarButton^ Temp_23 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_0=18;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x2=safe_cast<Reflector::CodeModel::IFormatter^>(nullptr);//stfld				Reflector::CodeModel::IFormatter^ Root::T_x16 F_x2
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldnull
	IL_0012:            this->F_x12=safe_cast<Root::T_x47^>(nullptr);               //stfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldc.i4.0
	IL_0019:            this->F_x13=false;                                          //stfld				System::Boolean Root::T_x16 F_x13
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldnull
	IL_0020:            this->F_x8=safe_cast<Reflector::ICommandBar^>(nullptr);     //stfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_0025:                                                                        //ldarg.0
	IL_0026:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldc.i4.5
	IL_002d:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldc.i4.0
	IL_0034:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldarg.1
	IL_003b:            Temp_0=A_0->CommandBars;                                    //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0040:                                                                        //ldstr				L"\x762F\x5D31\x4633\x5B35\x5937\x4E39\x483B\x5B3D\x323F"
	IL_0045:                                                                        //ldloc				V_0
	IL_0049:            Temp_1=a(L"\x762F\x5D31\x4633\x5B35\x5937\x4E39\x483B\x5B3D\x323F",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004e:            Temp_2=Temp_0->AddContextMenu(Temp_1);                      //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0053:            this->F_x8=Temp_2;                                          //stfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_3=this->F_x8;                                          //ldfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_005e:            Temp_4=Temp_3->Items;                                       //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0063:                                                                        //ldstr				L"\x162F\x7131\x5B33\x4635\x4137"
	IL_0068:                                                                        //ldloc				V_0
	IL_006c:            Temp_5=a(L"\x162F\x7131\x5B33\x4635\x4137",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            Temp_6=Root::T_x106::M_x19();                               //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0076:                                                                        //ldarg.0
	IL_0077:                                                                        //ldftn				void Root::T_x16::M_x12(System::Object^,System::EventArgs^)
	IL_007d:            Temp_7=gcnew System::EventHandler(this,&Root::T_x16::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0082:                                                                        //ldc.i4				0x20043
	IL_0087:            Temp_8=Temp_4->AddButton(Temp_5,Temp_6,Temp_7,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_008c:                                                                        //pop
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_9=this->F_x8;                                          //ldfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_0093:            Temp_10=Temp_9->Items;                                      //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0098:            Temp_11=Temp_10->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_009d:                                                                        //pop
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_12=this->F_x8;                                         //ldfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_00a4:            Temp_13=Temp_12->Items;                                     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00a9:                                                                        //ldstr				L"\x602F\x4031\x5D33\x5835\x4C37\x1A39\x6C3B\x4C3D\x253F\x6441\x3243\x2F45\x2D47\x3D49\x624B\x604D\x7E4F"
	IL_00ae:                                                                        //ldloc				V_0
	IL_00b2:            Temp_14=a(L"\x602F\x4031\x5D33\x5835\x4C37\x1A39\x6C3B\x4C3D\x253F\x6441\x3243\x2F45\x2D47\x3D49\x624B\x604D\x7E4F",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b7:            Temp_15=Root::T_x106::M_x6();                               //call				System::Drawing::Image^ Root::T_x106::M_x6()
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:                                                                        //ldftn				void Root::T_x16::M_x1(System::Object^,System::EventArgs^)
	IL_00c3:            Temp_16=gcnew System::EventHandler(this,&Root::T_x16::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00c8:            Temp_17=Temp_13->AddButton(Temp_14,Temp_15,Temp_16);        //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^)
	IL_00cd:                                                                        //pop
	IL_00ce:                                                                        //ldarg.0
	IL_00cf:            Temp_18=this->F_x8;                                         //ldfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_00d4:            Temp_19=Temp_18->Items;                                     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00d9:                                                                        //ldstr				L"\x162F\x6231\x4633\x5F35\x5637\x4E39\x123B\x103D\x6E3F"
	IL_00de:                                                                        //ldloc				V_0
	IL_00e2:            Temp_20=a(L"\x162F\x6231\x4633\x5F35\x5637\x4E39\x123B\x103D\x6E3F",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e7:            Temp_21=Root::T_x106::M_x16();                              //call				System::Drawing::Image^ Root::T_x106::M_x16()
	IL_00ec:                                                                        //ldarg.0
	IL_00ed:                                                                        //ldftn				void Root::T_x16::M_x2(System::Object^,System::EventArgs^)
	IL_00f3:            Temp_22=gcnew System::EventHandler(this,&Root::T_x16::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00f8:                                                                        //ldc.i4				0x20050
	IL_00fd:            Temp_23=Temp_19->AddButton(Temp_20,Temp_21,Temp_22,safe_cast<System::Windows::Forms::Keys>(131152));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0102:                                                                        //pop
	IL_0103:            return;                                                     //ret

}
inline System::Drawing::Font^ Root::T_x16::M_x1()
//System::Windows::Forms::Control^::get_Font by M_x1
//Root::T_x75^::get_Font by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Font^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Font;               //call				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x16::M_x1(Reflector::CodeModel::IFormatter^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	Root::T_x53^ Temp_2 = nullptr;
	Root::T_x47^ Temp_3 = nullptr;
	Root::T_x53^ Temp_4 = nullptr;
	Root::T_x54^ Temp_5 = nullptr;
	Root::T_x47^ Temp_6 = nullptr;
	Root::T_x53^ Temp_7 = nullptr;
	Root::T_x54^ Temp_8 = nullptr;
	Root::T_x47^ Temp_9 = nullptr;
	Root::T_x53^ Temp_10 = nullptr;
	Root::T_x54^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	Root::T_x47^ Temp_13 = nullptr;
	Root::T_x47^ Temp_14 = nullptr;
	Root::T_x53^ Temp_15 = nullptr;
	Root::T_x47^ Temp_16 = nullptr;
	Root::T_x53^ Temp_17 = nullptr;
	Root::T_x54^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	//local variables.
	Root::T_x16::T_x1^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_1=15;                                                     //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0056;                                               //br.s				IL_0056
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_012c;case 1:goto IL_0074;case 2:goto IL_0092;case 3:goto IL_01c0;case 4:goto IL_0145;case 5:goto IL_01b0;case 6:goto IL_0064;case 7:goto IL_0158;case 8:goto IL_0119;case 9:goto IL_01e0;case 10:goto IL_00a5;case 11:goto IL_00ec;case 12:goto IL_00be;case 13:goto IL_00ce;case 14:goto IL_0178;case 15:goto IL_000b;};//switch				(IL_012c,IL_0074,IL_0092,IL_01c0,IL_0145,IL_01b0,IL_0064,IL_0158,IL_0119,IL_01e0,IL_00a5,IL_00ec,IL_00be,IL_00ce,IL_0178,IL_000b)
	IL_0056:                                                                        //ldarg.1
	IL_0057:            if(A_0==nullptr)goto IL_0097;                               //brfalse.s				IL_0097
	IL_0059:                                                                        //ldc.i4				0x6
	IL_005e:            V_1=6;                                                      //stloc				V_1
	IL_0062:            /*goto IL_000d;*/goto IL_0064;                              //br.s				IL_000d
	IL_0064:            goto IL_011e;                                               //br				IL_011e
	IL_0069:                                                                        //ldc.i4				0x1
	IL_006e:            V_1=1;                                                      //stloc				V_1
	IL_0072:            /*goto IL_000d;*/goto IL_0074;                              //br.s				IL_000d
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_007a:            Temp_2=Temp_1->M_x4();                                      //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_007f:            if(Temp_2==nullptr)goto IL_01e2;                            //brfalse				IL_01e2
	IL_0084:                                                                        //ldc.i4				0x2
	IL_0089:            V_1=2;                                                      //stloc				V_1
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:            goto IL_014a;                                               //br				IL_014a
	IL_0097:                                                                        //ldc.i4				0xa
	IL_009c:            V_1=10;                                                     //stloc				V_1
	IL_00a0:            /*goto IL_000d;*/goto IL_00a5;                              //br				IL_000d
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:            Temp_13=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_00ab:            if(Temp_13==nullptr)goto IL_01e2;                           //brfalse				IL_01e2
	IL_00b0:                                                                        //ldc.i4				0xc
	IL_00b5:            V_1=12;                                                     //stloc				V_1
	IL_00b9:            /*goto IL_000d;*/goto IL_00be;                              //br				IL_000d
	IL_00be:            goto IL_0069;                                               //br.s				IL_0069
	IL_00c0:                                                                        //ldc.i4				0xd
	IL_00c5:            V_1=13;                                                     //stloc				V_1
	IL_00c9:            /*goto IL_000d;*/goto IL_00ce;                              //br				IL_000d
	IL_00ce:                                                                        //ldarg.0
	IL_00cf:            Temp_14=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_00d4:            Temp_15=Temp_14->M_x4();                                    //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_00d9:            if(Temp_15==nullptr)goto IL_01e2;                           //brfalse				IL_01e2
	IL_00de:                                                                        //ldc.i4				0xb
	IL_00e3:            V_1=11;                                                     //stloc				V_1
	IL_00e7:            /*goto IL_000d;*/goto IL_00ec;                              //br				IL_000d
	IL_00ec:            goto IL_01b2;                                               //br				IL_01b2
	IL_00f1:                                                                        //ldarg.0
	IL_00f2:            Temp_16=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_00f7:            Temp_17=Temp_16->M_x4();                                    //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_00fc:            Temp_18=Temp_17->M_x1();                                    //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_0101:            Temp_19=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0106:            Temp_18->M_x1(Temp_19);                                     //callvirt				void Root::T_x54::M_x1(System::String^)
	IL_010b:                                                                        //ldc.i4				0x8
	IL_0110:            V_1=8;                                                      //stloc				V_1
	IL_0114:            /*goto IL_000d;*/goto IL_0119;                              //br				IL_000d
	IL_0119:            goto IL_01e2;                                               //br				IL_01e2
	IL_011e:                                                                        //ldc.i4				0x0
	IL_0123:            V_1=0;                                                      //stloc				V_1
	IL_0127:            /*goto IL_000d;*/goto IL_012c;                              //br				IL_000d
	IL_012c:                                                                        //ldarg.0
	IL_012d:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0132:            if(Temp_0==nullptr)goto IL_01e2;                            //brfalse				IL_01e2
	IL_0137:                                                                        //ldc.i4				0x4
	IL_013c:            V_1=4;                                                      //stloc				V_1
	IL_0140:            /*goto IL_000d;*/goto IL_0145;                              //br				IL_000d
	IL_0145:            goto IL_00c0;                                               //br				IL_00c0
	IL_014a:                                                                        //ldc.i4				0x7
	IL_014f:            V_1=7;                                                      //stloc				V_1
	IL_0153:            /*goto IL_000d;*/goto IL_0158;                              //br				IL_000d
	IL_0158:                                                                        //ldarg.0
	IL_0159:            Temp_6=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_015e:            Temp_7=Temp_6->M_x4();                                      //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_0163:            Temp_8=Temp_7->M_x1();                                      //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_0168:            if(Temp_8==nullptr)goto IL_01e2;                            //brfalse.s				IL_01e2
	IL_016a:                                                                        //ldc.i4				0xe
	IL_016f:            V_1=14;                                                     //stloc				V_1
	IL_0173:            /*goto IL_000d;*/goto IL_0178;                              //br				IL_000d
	IL_0178:            goto IL_00f1;                                               //br				IL_00f1
	IL_017d:            goto IL_0180;                                               //br.s				IL_0180
	IL_017f:                                                                        //break
	IL_0180:                                                                        //ldarg.1
	IL_0181:                                                                        //castclass				Root::T_x16::T_x1
	IL_0186:            V_0=safe_cast<Root::T_x16::T_x1^>(A_0);                     //stloc.0
	IL_0187:                                                                        //ldarg.0
	IL_0188:            Temp_9=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_018d:            Temp_10=Temp_9->M_x4();                                     //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_0192:            Temp_11=Temp_10->M_x1();                                    //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_0197:                                                                        //ldloc.0
	IL_0198:            Temp_12=V_0->M_x12();                                       //callvirt				System::String^ Root::T_x16::T_x1::M_x12()
	IL_019d:            Temp_11->M_x1(Temp_12);                                     //callvirt				void Root::T_x54::M_x1(System::String^)
	IL_01a2:                                                                        //ldc.i4				0x5
	IL_01a7:            V_1=5;                                                      //stloc				V_1
	IL_01ab:            /*goto IL_000d;*/goto IL_01b0;                              //br				IL_000d
	IL_01b0:            goto IL_01e2;                                               //br.s				IL_01e2
	IL_01b2:                                                                        //ldc.i4				0x3
	IL_01b7:            V_1=3;                                                      //stloc				V_1
	IL_01bb:            /*goto IL_000d;*/goto IL_01c0;                              //br				IL_000d
	IL_01c0:                                                                        //ldarg.0
	IL_01c1:            Temp_3=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_01c6:            Temp_4=Temp_3->M_x4();                                      //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_01cb:            Temp_5=Temp_4->M_x1();                                      //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_01d0:            if(Temp_5==nullptr)goto IL_01e2;                            //brfalse.s				IL_01e2
	IL_01d2:                                                                        //ldc.i4				0x9
	IL_01d7:            V_1=9;                                                      //stloc				V_1
	IL_01db:            /*goto IL_000d;*/goto IL_01e0;                              //br				IL_000d
	IL_01e0:            goto IL_017d;                                               //br.s				IL_017d
	IL_01e2:                                                                        //ldarg.0
	IL_01e3:                                                                        //ldarg.1
	IL_01e4:            this->F_x2=A_0;                                             //stfld				Reflector::CodeModel::IFormatter^ Root::T_x16 F_x2
	IL_01e9:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x16::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Font^ Temp_0 = nullptr;
	System::Single Temp_1 = 0;
	Root::T_x16::T_x1^ Temp_2 = nullptr;
	//local variables.
	System::Single V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Font;                                          //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0006:            Temp_1=Temp_0->SizeInPoints;                                //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_000b:                                                                        //ldc.r4				1.2121212
	IL_0010:                                                                        //div
	IL_0011:            V_0=(Temp_1 / 1.212121);                                    //stloc.0
	IL_0012:                                                                        //ldloc.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_2=gcnew Root::T_x16::T_x1(V_0,A_0);                    //newobj				void Root::T_x16::T_x1::.ctor(System::Single,System::Boolean)
	IL_0019:            return safe_cast<Reflector::CodeModel::IFormatter^>(Temp_2);//ret

}
inline void Root::T_x16::M_x1(System::Drawing::Font^ A_0)
//System::Windows::Forms::Control^::set_Font by M_x1
//Root::T_x75^::set_Font by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::Font=A_0;                  //call				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->RecreateHandle();                                     //call				void System::Windows::Forms::Control::RecreateHandle()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnHandleDestroyed by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control::ControlCollection^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	Root::T_x47^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0040;case 1:goto IL_002d;case 2:goto IL_006a;};//switch				(IL_0040,IL_002d,IL_006a)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_001d:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::Control::ControlCollection::Clear()
	IL_0022:                                                                        //ldc.i4				0x1
	IL_0027:            V_0=1;                                                      //stloc				V_0
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_2=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0033:            if(Temp_2==nullptr)goto IL_006c;                            //brfalse.s				IL_006c
	IL_0035:                                                                        //ldc.i4				0x0
	IL_003a:            V_0=0;                                                      //stloc				V_0
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0042;                                               //br.s				IL_0042
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0048:            /*Temp_1->Dispose();*/                                      //callvirt				void System::ComponentModel::Component::Dispose()
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldnull
	IL_004f:            this->F_x12=safe_cast<Root::T_x47^>(nullptr);               //stfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0054:                                                                        //ldc.i4.4
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //ldc.i4.2
	IL_0058:                                                                        //sub
	IL_0059:                                                                        //blt				IL_0055
	IL_005e:                                                                        //pop
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_0=2;                                                      //stloc				V_0
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:            goto IL_006c;                                               //br.s				IL_006c
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldarg.1
	IL_006e:            System::Windows::Forms::Control::OnHandleDestroyed(A_0);    //call				void System::Windows::Forms::Control::OnHandleDestroyed(System::EventArgs^)
	IL_0073:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0006:            Temp_0->M_x5();                                             //callvirt				void Root::T_x47::M_x5()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(System::Object^ A_0,Root::T_x49^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFormatter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->M_x13();                                       //call				Reflector::CodeModel::IFormatter^ Root::T_x16::M_x13()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x16::M_x1(Reflector::CodeModel::IFormatter^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(System::Object^ A_0,Root::T_x51^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x124^ Temp_0 = nullptr;
	Reflector::CodeModel::IFormatter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	Reflector::CodeModel::IFormatter^ Temp_4 = nullptr;
	//local variables.
	Root::T_x16::T_x1^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	Root::T_x124^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_000b;case 1:goto IL_005f;case 2:goto IL_0085;case 3:goto IL_0099;case 4:goto IL_003d;};//switch				(IL_000b,IL_005f,IL_0085,IL_0099,IL_003d)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_4=this->F_x2;                                          //ldfld				Reflector::CodeModel::IFormatter^ Root::T_x16 F_x2
	IL_0030:            if(Temp_4==nullptr)goto IL_009b;                            //brfalse.s				IL_009b
	IL_0032:                                                                        //ldc.i4				0x4
	IL_0037:            V_3=4;                                                      //stloc				V_3
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_0061;                                               //br.s				IL_0061
	IL_003f:                                                                        //ldloc.1
	IL_0040:            Temp_0=gcnew Root::T_x124(V_1);                             //newobj				void Root::T_x124::.ctor(System::Object^)
	IL_0045:            V_2=Temp_0;                                                 //stloc.2
	IL_0046:                                                                        //ldarg.0
	IL_0047:                                                                        //ldloc.2
	IL_0048:            this->M_x1(V_2);                                            //callvirt				void Root::T_x16::M_x1(Root::T_x124^)
	IL_004d:                                                                        //ldarg.2
	IL_004e:                                                                        //ldc.i4.1
	IL_004f:            A_1->Cancel=true;                                           //callvirt				void System::ComponentModel::CancelEventArgs::set_Cancel(System::Boolean)
	IL_0054:                                                                        //ldc.i4				0x1
	IL_0059:            V_3=1;                                                      //stloc				V_3
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:            goto IL_009b;                                               //br.s				IL_009b
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_1=this->F_x2;                                          //ldfld				Reflector::CodeModel::IFormatter^ Root::T_x16 F_x2
	IL_0067:                                                                        //castclass				Root::T_x16::T_x1
	IL_006c:            V_0=safe_cast<Root::T_x16::T_x1^>(Temp_1);                  //stloc.0
	IL_006d:                                                                        //ldloc.0
	IL_006e:                                                                        //ldarg.2
	IL_006f:            Temp_2=A_1->M_x1();                                         //callvirt				System::String^ Root::T_x51::M_x1()
	IL_0074:            Temp_3=V_0->M_x9(Temp_2);                                   //callvirt				System::Object^ Root::T_x16::T_x1::M_x9(System::String^)
	IL_0079:            V_1=Temp_3;                                                 //stloc.1
	IL_007a:                                                                        //ldc.i4				0x2
	IL_007f:            V_3=2;                                                      //stloc				V_3
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldloc.1
	IL_0086:            if(V_1==nullptr)goto IL_009b;                               //brfalse.s				IL_009b
	IL_0088:            goto IL_008b;                                               //br.s				IL_008b
	IL_008a:                                                                        //break
	IL_008b:                                                                        //ldc.i4				0x3
	IL_0090:            V_3=3;                                                      //stloc				V_3
	IL_0094:            /*goto IL_000d;*/goto IL_0099;                              //br				IL_000d
	IL_0099:            goto IL_003f;                                               //br.s				IL_003f
	IL_009b:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(Root::T_x124^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	Root::T_x125^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x125::Invoke(System::Object^,Root::T_x124^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x16::M_x1(Root::T_x125^ A_0)
//Root::T_x75^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0017:            return;                                                     //ret

}
inline System::Boolean Root::T_x16::M_x12()
//Root::T_x75^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				System::Boolean Root::T_x16 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x16::M_x12(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnGotFocus by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::Control::OnGotFocus(A_0);           //call				void System::Windows::Forms::Control::OnGotFocus(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_000d:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0012:                                                                        //pop
	IL_0013:            return;                                                     //ret

}
inline void Root::T_x16::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0006:            Temp_0->M_x9();                                             //callvirt				void Root::T_x47::M_x9()
	IL_000b:            return;                                                     //ret

}
inline Reflector::CodeModel::IFormatter^ Root::T_x16::M_x13()
//Root::T_x75^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IFormatter^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IFormatter^ Root::T_x16 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x16::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	array<System::String^>^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Drawing::Font^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Drawing::Font^ Temp_12 = nullptr;
	System::Single Temp_13 = 0;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	array<System::String^>^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Drawing::Font^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Drawing::Font^ Temp_23 = nullptr;
	System::Single Temp_24 = 0;
	System::Globalization::CultureInfo^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	Root::T_x47^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_34 = nullptr;
	Root::T_x47^ Temp_35 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	array<System::String^>^ V_1 = nullptr;
	System::Single V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldftn				void Root::T_x16::M_x13(System::Object^,System::EventArgs^)
	IL_0010:            Temp_0=gcnew System::EventHandler(this,&Root::T_x16::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0015:            System::Windows::Forms::Application::Idle -= Temp_0;        //call				void System::Windows::Forms::Application::remove_Idle(System::EventHandler^)
	IL_001a:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_001f:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0024:            V_0=Temp_2;                                                 //stloc.0
	IL_0025:            /*goto IL_0027;*/goto IL_002501;                            //br.s				IL_0027
	IL_002501:          try{
	IL_0027:            goto IL_002a;                                               //br.s				IL_002a
	IL_0029:                                                                        //break
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //ldstr				L"\x132E\x5930\x4732\x5834\x5B36\x0738\x073A\x4E3C\x4B3E\x3840\x2F42\x2044\x7946"
	IL_0030:                                                                        //ldloc				V_4
	IL_0034:            Temp_3=a(L"\x132E\x5930\x4732\x5834\x5B36\x0738\x073A\x4E3C\x4B3E\x3840\x2F42\x2044\x7946",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_003e:                                                                        //ldloc.0
	IL_003f:                                                                        //ldstr				L"\x4D2E\x5E30\x5732\x4C34\x1736\x4238\x1B3A\x5F3C\x5E3E\x2240\x2842\x2244\x3546\x2648\x3E4A\x234C\x2B4E\x7C50\x3052\x3A54\x3B56\x3658\x295A\x675C\x7F5E\x4260\x2562\x2364\x2166\x2F68\x2E6A\x5C6C\x546E\x5170\x0E72"
	IL_0044:                                                                        //ldloc				V_4
	IL_0048:            Temp_4=a(L"\x4D2E\x5E30\x5732\x4C34\x1736\x4238\x1B3A\x5F3C\x5E3E\x2240\x2842\x2244\x3546\x2648\x3E4A\x234C\x2B4E\x7C50\x3052\x3A54\x3B56\x3658\x295A\x675C\x7F5E\x4260\x2562\x2364\x2166\x2F68\x2E6A\x5C6C\x546E\x5170\x0E72",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:            V_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldstr				L"\x4E2E\x1130\x4832\x1534\x5436\x5638\x573A\x523C\x4D3E\x7B40\x6342\x6644\x7746\x7948\x7D4A\x7D4C\x7E4E\x6950\x6852\x7554\x2356\x3C58\x235A\x295C\x725E\x0560\x0662\x0664\x0866\x1B68\x0A6A\x196C\x066E\x1E70\x1D72\x4F74\x5776\x1778\x147A\x137C\x1A7E\xBA80\xA382\xF884"
	IL_0058:                                                                        //ldloc				V_4
	IL_005c:            Temp_5=a(L"\x4E2E\x1130\x4832\x1534\x5436\x5638\x573A\x523C\x4D3E\x7B40\x6342\x6644\x7746\x7948\x7D4A\x7D4C\x7E4E\x6950\x6852\x7554\x2356\x3C58\x235A\x295C\x725E\x0560\x0662\x0664\x0866\x1B68\x0A6A\x196C\x066E\x1E70\x1D72\x4F74\x5776\x1778\x147A\x137C\x1A7E\xBA80\xA382\xF884",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0061:            V_0->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0066:                                                                        //ldloc.0
	IL_0067:                                                                        //ldstr				L"\x4E2E\x0B30\x5B32\x5A34\x4136\x5C38\x493A\x1D3C\x443E\x6140\x2042\x2A44\x2B46\x2648\x394A\x774C\x6F4E\x7250\x6352\x6554\x6F56\x6958\x695A\x6D5C\x645E\x4160\x1762\x0064\x1F66\x1D68\x466A\x096C\x0A6E\x1270\x1C72\x0774\x1676\x0D78\x127A\x127C\x117E\xBB80\xA382\xF084\xE986\xED88\xEE8A\xFF8C\xE38E\xF890\xFD92\xF094\xAC96\xB998\xE69A"
	IL_006c:                                                                        //ldloc				V_4
	IL_0070:            Temp_6=a(L"\x4E2E\x0B30\x5B32\x5A34\x4136\x5C38\x493A\x1D3C\x443E\x6140\x2042\x2A44\x2B46\x2648\x394A\x774C\x6F4E\x7250\x6352\x6554\x6F56\x6958\x695A\x6D5C\x645E\x4160\x1762\x0064\x1F66\x1D68\x466A\x096C\x0A6E\x1270\x1C72\x0774\x1676\x0D78\x127A\x127C\x117E\xBB80\xA382\xF084\xE986\xED88\xEE8A\xFF8C\xE38E\xF890\xFD92\xF094\xAC96\xB998\xE69A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0075:            V_0->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_007a:                                                                        //ldloc.0
	IL_007b:                                                                        //ldc.i4.5
	IL_007c:            Temp_7=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_0081:            V_1=Temp_7;                                                 //stloc.1
	IL_0082:                                                                        //ldloc.1
	IL_0083:                                                                        //ldc.i4.0
	IL_0084:                                                                        //ldstr				L"\x5F2E\x4330\x5632\x1534\x4C36\x1938\x5D3A\x523C\x513E\x3540\x6E42\x2344\x2646\x2448\x224A\x214C\x364E\x6B50\x7352"
	IL_0089:                                                                        //ldloc				V_4
	IL_008d:            Temp_8=a(L"\x5F2E\x4330\x5632\x1534\x4C36\x1938\x5D3A\x523C\x513E\x3540\x6E42\x2344\x2646\x2448\x224A\x214C\x364E\x6B50\x7352",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0092:            V_1[0]=Temp_8;                                              //stelem.ref
	IL_0093:                                                                        //ldloc.1
	IL_0094:                                                                        //ldc.i4.1
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_9=this->Font;                                          //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_009b:            Temp_10=Temp_9->Name;                                       //callvirt				System::String^ System::Drawing::Font::get_Name()
	IL_00a0:            V_1[1]=Temp_10;                                             //stelem.ref
	IL_00a1:                                                                        //ldloc.1
	IL_00a2:                                                                        //ldc.i4.2
	IL_00a3:                                                                        //ldstr				L"\x142E\x1130\x5532\x5A34\x5936\x4D38\x163A\x4E3C\x563E\x3B40\x2642\x7F44\x6746"
	IL_00a8:                                                                        //ldloc				V_4
	IL_00ac:            Temp_11=a(L"\x142E\x1130\x5532\x5A34\x5936\x4D38\x163A\x4E3C\x563E\x3B40\x2642\x7F44\x6746",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b1:            V_1[2]=Temp_11;                                             //stelem.ref
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:                                                                        //ldc.i4.3
	IL_00b4:                                                                        //ldarg.0
	IL_00b5:            Temp_12=this->Font;                                         //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_00ba:            Temp_13=Temp_12->SizeInPoints;                              //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_00bf:            V_2=Temp_13;                                                //stloc.2
	IL_00c0:                                                                        //ldloca.s				V_2
	IL_00c2:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00c7:            Temp_15=V_2.ToString(safe_cast<System::IFormatProvider^>(Temp_14));//call				System::String^ System::Single::ToString(System::IFormatProvider^)
	IL_00cc:            V_1[3]=Temp_15;                                             //stelem.ref
	IL_00cd:                                                                        //ldloc.1
	IL_00ce:                                                                        //ldc.i4.4
	IL_00cf:                                                                        //ldstr				L"\x5F2E\x4530\x0832\x1534\x5A36\x5838\x493A\x5A3C\x563E\x2F40\x6E42\x3144\x2846\x3948\x714A\x6D4C\x7F4E\x6A50\x7352\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4372\x4E74\x5776\x0478"
	IL_00d4:                                                                        //ldloc				V_4
	IL_00d8:            Temp_16=a(L"\x5F2E\x4530\x0832\x1534\x5A36\x5838\x493A\x5A3C\x563E\x2F40\x6E42\x3144\x2846\x3948\x714A\x6D4C\x7F4E\x6A50\x7352\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4372\x4E74\x5776\x0478",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dd:            V_1[4]=Temp_16;                                             //stelem.ref
	IL_00de:                                                                        //ldloc.1
	IL_00df:            Temp_17=System::String::Concat(V_1);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00e4:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e9:                                                                        //ldloc.0
	IL_00ea:                                                                        //ldc.i4.5
	IL_00eb:            Temp_18=gcnew array<System::String^>(5);                    //newarr				System::String
	IL_00f0:            V_1=Temp_18;                                                //stloc.1
	IL_00f1:                                                                        //ldloc.1
	IL_00f2:                                                                        //ldc.i4.0
	IL_00f3:                                                                        //ldstr				L"\x5B2E\x5530\x1332\x4E34\x1736\x5F38\x543A\x533C\x4B3E\x6C40\x2542\x2444\x2A46\x2048\x274A\x344C\x754E\x7150"
	IL_00f8:                                                                        //ldloc				V_4
	IL_00fc:            Temp_19=a(L"\x5B2E\x5530\x1332\x4E34\x1736\x5F38\x543A\x533C\x4B3E\x6C40\x2542\x2444\x2A46\x2048\x274A\x344C\x754E\x7150",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0101:            V_1[0]=Temp_19;                                             //stelem.ref
	IL_0102:                                                                        //ldloc.1
	IL_0103:                                                                        //ldc.i4.1
	IL_0104:                                                                        //ldarg.0
	IL_0105:            Temp_20=this->Font;                                         //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_010a:            Temp_21=Temp_20->Name;                                      //callvirt				System::String^ System::Drawing::Font::get_Name()
	IL_010f:            V_1[1]=Temp_21;                                             //stelem.ref
	IL_0110:                                                                        //ldloc.1
	IL_0111:                                                                        //ldc.i4.2
	IL_0112:                                                                        //ldstr				L"\x142E\x1130\x5532\x5A34\x5936\x4D38\x163A\x4E3C\x563E\x3B40\x2642\x7F44\x6746"
	IL_0117:                                                                        //ldloc				V_4
	IL_011b:            Temp_22=a(L"\x142E\x1130\x5532\x5A34\x5936\x4D38\x163A\x4E3C\x563E\x3B40\x2642\x7F44\x6746",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0120:            V_1[2]=Temp_22;                                             //stelem.ref
	IL_0121:                                                                        //ldloc.1
	IL_0122:                                                                        //ldc.i4.3
	IL_0123:                                                                        //ldarg.0
	IL_0124:            Temp_23=this->Font;                                         //callvirt				System::Drawing::Font^ System::Windows::Forms::Control::get_Font()
	IL_0129:            Temp_24=Temp_23->SizeInPoints;                              //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_012e:            V_2=Temp_24;                                                //stloc.2
	IL_012f:                                                                        //ldloca.s				V_2
	IL_0131:            Temp_25=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0136:            Temp_26=V_2.ToString(safe_cast<System::IFormatProvider^>(Temp_25));//call				System::String^ System::Single::ToString(System::IFormatProvider^)
	IL_013b:            V_1[3]=Temp_26;                                             //stelem.ref
	IL_013c:                                                                        //ldloc.1
	IL_013d:                                                                        //ldc.i4.4
	IL_013e:                                                                        //ldstr				L"\x5F2E\x4530\x0832\x1534\x4A36"
	IL_0143:                                                                        //ldloc				V_4
	IL_0147:            Temp_27=a(L"\x5F2E\x4530\x0832\x1534\x4A36",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014c:            V_1[4]=Temp_27;                                             //stelem.ref
	IL_014d:                                                                        //ldloc.1
	IL_014e:            Temp_28=System::String::Concat(V_1);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_0153:            V_0->Write(Temp_28);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0158:                                                                        //ldloc.0
	IL_0159:                                                                        //ldstr				L"\x132E\x1E30\x4032\x4134\x4E36\x5538\x5E3A\x033C"
	IL_015e:                                                                        //ldloc				V_4
	IL_0162:            Temp_29=a(L"\x132E\x1E30\x4032\x4134\x4E36\x5538\x5E3A\x033C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0167:            V_0->Write(Temp_29);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_016c:                                                                        //ldloc.0
	IL_016d:                                                                        //ldstr				L"\x132E\x5330\x5C32\x5134\x4E36\x1938\x483A\x493C\x463E\x2D40\x2642\x7844\x6046\x2448\x2A4A\x3F4C\x284E\x3850\x3D52\x7854\x3B56\x3C58\x3D5A\x295C\x655E\x4160\x5662\x5E64\x4766\x0468\x0A6A\x1F6C\x086E\x1870\x1D72\x5874\x0576\x1078\x1C7A\x157C\x0B7E\xBB80\xA382\xB084\xBC86\xA988\xE68A\xEC8C\xFD8E\xF690\xFA92\xFB94\xBA96\xED98\xF49A\xED9C\xA59E\x81A0\x96A2\x9EA4\x87A6\xC4A8\xCAAA\xDFAC\xC8AE\xD8B0\xDDB2\x98B4\xD5B6\xD6B8\xCFBA\xC9BC\xD0BE\xACC0\xF9C2\xE5C4\xF2C6\xF2C8\xECCA\xF3CC\xF3CE\xFED0\xB1D2\xBAD4\xB3D6\xA0D8\xE5DA"
	IL_0172:                                                                        //ldloc				V_4
	IL_0176:            Temp_30=a(L"\x132E\x5330\x5C32\x5134\x4E36\x1938\x483A\x493C\x463E\x2D40\x2642\x7844\x6046\x2448\x2A4A\x3F4C\x284E\x3850\x3D52\x7854\x3B56\x3C58\x3D5A\x295C\x655E\x4160\x5662\x5E64\x4766\x0468\x0A6A\x1F6C\x086E\x1870\x1D72\x5874\x0576\x1078\x1C7A\x157C\x0B7E\xBB80\xA382\xB084\xBC86\xA988\xE68A\xEC8C\xFD8E\xF690\xFA92\xFB94\xBA96\xED98\xF49A\xED9C\xA59E\x81A0\x96A2\x9EA4\x87A6\xC4A8\xCAAA\xDFAC\xC8AE\xD8B0\xDDB2\x98B4\xD5B6\xD6B8\xCFBA\xC9BC\xD0BE\xACC0\xF9C2\xE5C4\xF2C6\xF2C8\xECCA\xF3CC\xF3CE\xFED0\xB1D2\xBAD4\xB3D6\xA0D8\xE5DA",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017b:            V_0->Write(Temp_30);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0180:                                                                        //ldloc.0
	IL_0181:                                                                        //ldstr				L"\x132E\x1E30\x5B32\x4134\x5A36\x5538\x053A"
	IL_0186:                                                                        //ldloc				V_4
	IL_018a:            Temp_31=a(L"\x132E\x1E30\x5B32\x4134\x5A36\x5538\x053A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018f:            V_0->Write(Temp_31);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0194:                                                                        //ldloc.0
	IL_0195:            V_0->Close();                                               //callvirt				void System::IO::TextWriter::Close()
	IL_019a:                                                                        //ldarg.0
	IL_019b:            Temp_32=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_01a0:                                                                        //ldloc.0
	IL_01a1:            Temp_33=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01a6:            Temp_32->M_x2(Temp_33);                                     //callvirt				void Root::T_x47::M_x2(System::String^)
	IL_01ab:            goto IL_01f3;                                               //leave.s				IL_01f3
	                    ;}
	                    finally{
	IL_01ad:                                                                        //ldc.i4				0x1
	IL_01b2:            V_3=1;                                                      //stloc				V_3
	IL_01b6:            /*goto IL_01ba;*/goto IL_01b8;                              //br.s				IL_01ba
	IL_01b8:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01ba:                                                                        //ldloc				V_3
	IL_01be:            switch(V_3){case 0:goto IL_01dd;case 1:goto IL_01b8;case 2:goto IL_01f0;};//switch				(IL_01dd,IL_01b8,IL_01f0)
	IL_01cf:                                                                        //ldloc.0
	IL_01d0:            if(V_0==nullptr)goto IL_01f2;                               //brfalse.s				IL_01f2
	IL_01d2:                                                                        //ldc.i4				0x0
	IL_01d7:            V_3=0;                                                      //stloc				V_3
	IL_01db:            /*goto IL_01ba;*/goto IL_01dd;                              //br.s				IL_01ba
	IL_01dd:            goto IL_01df;                                               //br.s				IL_01df
	IL_01df:                                                                        //ldloc.0
	IL_01e0:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01e5:                                                                        //ldc.i4				0x2
	IL_01ea:            V_3=2;                                                      //stloc				V_3
	IL_01ee:            /*goto IL_01ba;*/goto IL_01f0;                              //br.s				IL_01ba
	IL_01f0:            goto IL_01f2;                                               //br.s				IL_01f2
	IL_01f2:                                                                        //endfinally
	                    ;}
	IL_01f3:                                                                        //ldarg.0
	IL_01f4:            Temp_34=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_01f9:                                                                        //ldarg.0
	IL_01fa:            Temp_35=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_01ff:            Temp_34->Add(safe_cast<System::Windows::Forms::Control^>(Temp_35));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0204:            return;                                                     //ret

}
inline System::Boolean Root::T_x16::M_x2()
//Root::T_x75^::Focus by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Windows::Forms::Control::Focus();            //call				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x16::M_x2(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0058;case 1:goto IL_002c;case 2:goto IL_003f;};//switch				(IL_0058,IL_002c,IL_003f)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            this->F_x13=A_0;                                            //stfld				System::Boolean Root::T_x16 F_x13
	IL_001e:            goto IL_0021;                                               //br.s				IL_0021
	IL_0020:                                                                        //break
	IL_0021:                                                                        //ldc.i4				0x1
	IL_0026:            V_0=1;                                                      //stloc				V_0
	IL_002a:            /*goto IL_0002;*/goto IL_002c;                              //br.s				IL_0002
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0032:            if(Temp_0==nullptr)goto IL_005a;                            //brfalse.s				IL_005a
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_0=2;                                                      //stloc				V_0
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0047:                                                                        //ldarg.1
	IL_0048:            Temp_1->TabStop=A_0;                                        //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_004d:                                                                        //ldc.i4				0x0
	IL_0052:            V_0=0;                                                      //stloc				V_0
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:            return;                                                     //ret

}
inline void Root::T_x16::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::Control^::OnHandleCreated by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	Root::T_x47^ Temp_2 = nullptr;
	Root::T_x47^ Temp_3 = nullptr;
	Root::T_x52^ Temp_4 = nullptr;
	Root::T_x47^ Temp_5 = nullptr;
	Root::T_x50^ Temp_6 = nullptr;
	Root::T_x47^ Temp_7 = nullptr;
	Root::T_x47^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Root::T_x47^ Temp_10 = nullptr;
	Reflector::ICommandBar^ Temp_11 = nullptr;
	System::EventHandler^ Temp_12 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::Control::OnHandleCreated(A_0);      //call				void System::Windows::Forms::Control::OnHandleCreated(System::EventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_0=gcnew Root::T_x47();                                 //newobj				void Root::T_x47::.ctor()
	IL_0010:            this->F_x12=Temp_0;                                         //stfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_001b:                                                                        //ldc.i4.5
	IL_001c:            Temp_1->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_2=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            Temp_2->TabStop=false;                                      //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_3=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldftn				void Root::T_x16::M_x1(System::Object^,Root::T_x51^)
	IL_003a:            Temp_4=gcnew Root::T_x52(this,&Root::T_x16::M_x1);          //newobj				void Root::T_x52::.ctor(System::Object^,System::IntPtr)
	IL_003f:            Temp_3->M_x2(Temp_4);                                       //callvirt				void Root::T_x47::M_x2(Root::T_x52^)
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_5=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldftn				void Root::T_x16::M_x1(System::Object^,Root::T_x49^)
	IL_0051:            Temp_6=gcnew Root::T_x50(this,&Root::T_x16::M_x1);          //newobj				void Root::T_x50::.ctor(System::Object^,System::IntPtr)
	IL_0056:            Temp_5->M_x2(Temp_6);                                       //callvirt				void Root::T_x47::M_x2(Root::T_x50^)
	IL_005b:                                                                        //ldarg.0
	IL_005c:            Temp_7=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0061:                                                                        //ldc.i4.1
	IL_0062:            Temp_7->M_x2(true);                                         //callvirt				void Root::T_x47::M_x2(System::Boolean)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_8=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_9=this->F_x13;                                         //ldfld				System::Boolean Root::T_x16 F_x13
	IL_0073:            Temp_8->TabStop=Temp_9;                                     //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0078:                                                                        //ldarg.0
	IL_0079:            Temp_10=this->F_x12;                                        //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_007e:                                                                        //ldarg.0
	IL_007f:            Temp_11=this->F_x8;                                         //ldfld				Reflector::ICommandBar^ Root::T_x16 F_x8
	IL_0084:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0089:            Temp_10->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(Temp_11);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_008e:                                                                        //ldarg.0
	IL_008f:                                                                        //ldftn				void Root::T_x16::M_x13(System::Object^,System::EventArgs^)
	IL_0095:            Temp_12=gcnew System::EventHandler(this,&Root::T_x16::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_009a:            System::Windows::Forms::Application::Idle += Temp_12;       //call				void System::Windows::Forms::Application::add_Idle(System::EventHandler^)
	IL_009f:            return;                                                     //ret

}
inline void Root::T_x16::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x47^ Root::T_x16 F_x12
	IL_0006:            Temp_0->M_x12();                                            //callvirt				void Root::T_x47::M_x12()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x16::M_x2(Root::T_x125^ A_0)
//Root::T_x75^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x125^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x125
	IL_0012:            this->F_x1=safe_cast<Root::T_x125^>(Temp_1);                //stfld				Root::T_x125^ Root::T_x16 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x16::T_x1::T_x1(System::Single A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::Text::StringBuilder^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Collections::Hashtable^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=gcnew System::Text::StringBuilder();                 //newobj				void System::Text::StringBuilder::.ctor()
	IL_000f:            this->F_x1=Temp_0;                                          //stfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_1=gcnew System::Text::StringBuilder();                 //newobj				void System::Text::StringBuilder::.ctor()
	IL_001a:            this->F_x2=Temp_1;                                          //stfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_001f:                                                                        //ldarg.0
	IL_0020:                                                                        //ldc.i4.0
	IL_0021:            this->F_x8=0;                                               //stfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldstr				L"\x1521\x1423\x0325"
	IL_002c:                                                                        //ldloc				V_0
	IL_0030:            Temp_2=a(L"\x1521\x1423\x0325",V_0);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0035:            this->F_x5=Temp_2;                                          //stfld				System::String^ Root::T_x16::T_x1 F_x5
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_3=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_0040:            this->F_x9=Temp_3;                                          //stfld				System::Collections::Hashtable^ Root::T_x16::T_x1 F_x9
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldc.i4.0
	IL_0047:            this->F_x4=0;                                               //stfld				System::Int32 Root::T_x16::T_x1 F_x4
	IL_004c:                                                                        //ldarg.0
	IL_004d:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0052:                                                                        //ldarg.0
	IL_0053:                                                                        //ldarga.s				A_0
	IL_0055:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_005a:            Temp_5=A_0.ToString(safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::Single::ToString(System::IFormatProvider^)
	IL_005f:                                                                        //ldstr				L"\x5221\x5023"
	IL_0064:                                                                        //ldloc				V_0
	IL_0068:            Temp_6=a(L"\x5221\x5023",V_0);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:            Temp_7=System::String::Concat(Temp_5,Temp_6);               //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0072:            this->F_x5=Temp_7;                                          //stfld				System::String^ Root::T_x16::T_x1 F_x5
	IL_0077:                                                                        //ldarg.0
	IL_0078:                                                                        //ldarg.2
	IL_0079:            this->F_x12=A_1;                                            //stfld				System::Boolean Root::T_x16::T_x1 F_x12
	IL_007e:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Text::StringBuilder^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Text::StringBuilder^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_2=19;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003b;                                               //br.s				IL_003b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_0072;case 2:goto IL_00a0;case 3:goto IL_00cc;case 4:goto IL_00b5;case 5:goto IL_0051;case 6:goto IL_005e;};//switch				(IL_0014,IL_0072,IL_00a0,IL_00cc,IL_00b5,IL_0051,IL_005e)
	IL_003b:                                                                        //ldarg.0
	IL_003c:            Temp_4=this->F_x13;                                         //ldfld				System::Boolean Root::T_x16::T_x1 F_x13
	IL_0041:            if(!Temp_4)goto IL_00ce;                                    //brfalse				IL_00ce
	IL_0046:                                                                        //ldc.i4				0x5
	IL_004b:            V_1=5;                                                      //stloc				V_1
	IL_004f:            /*goto IL_0016;*/goto IL_0051;                              //br.s				IL_0016
	IL_0051:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_0053:                                                                        //ldc.i4				0x6
	IL_0058:            V_1=6;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0016;*/goto IL_005e;                              //br.s				IL_0016
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_0=this->F_x8;                                          //ldfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_0065:            if(V_0<Temp_0)goto IL_0074;                                 //blt.s				IL_0074
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_1=1;                                                      //stloc				V_1
	IL_0070:            /*goto IL_0016;*/goto IL_0072;                              //br.s				IL_0016
	IL_0072:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_1=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_007a:                                                                        //ldstr				L"\x1130\x1332\x1534\x1736\x1938\x1B3A"
	IL_007f:                                                                        //ldloc				V_2
	IL_0083:            Temp_2=a(L"\x1130\x1332\x1534\x1736\x1938\x1B3A",V_2);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0088:            Temp_3=Temp_1->Append(Temp_2);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_008d:                                                                        //pop
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldc.i4.1
	IL_0090:                                                                        //add
	IL_0091:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0092:                                                                        //ldc.i4				0x2
	IL_0097:            V_1=2;                                                      //stloc				V_1
	IL_009b:            /*goto IL_0016;*/goto IL_00a0;                              //br				IL_0016
	IL_00a0:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_00a2:                                                                        //break
	IL_00a3:            goto IL_0053;                                               //br.s				IL_0053
	IL_00a5:                                                                        //ldc.i4.0
	IL_00a6:            V_0=0;                                                      //stloc.0
	IL_00a7:                                                                        //ldc.i4				0x4
	IL_00ac:            V_1=4;                                                      //stloc				V_1
	IL_00b0:            /*goto IL_0016;*/goto IL_00b5;                              //br				IL_0016
	IL_00b5:            goto IL_0053;                                               //br.s				IL_0053
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:                                                                        //ldc.i4.0
	IL_00b9:            this->F_x13=false;                                          //stfld				System::Boolean Root::T_x16::T_x1 F_x13
	IL_00be:                                                                        //ldc.i4				0x3
	IL_00c3:            V_1=3;                                                      //stloc				V_1
	IL_00c7:            /*goto IL_0016;*/goto IL_00cc;                              //br				IL_0016
	IL_00cc:            goto IL_00ce;                                               //br.s				IL_00ce
	IL_00ce:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x1(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x12=A_0;                                            //stfld				System::Boolean Root::T_x16::T_x1 F_x12
	IL_0007:            return;                                                     //ret

}
inline System::String^ Root::T_x16::T_x1::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	System::Collections::Hashtable^ Temp_4 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_1=14;                                                     //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //dup
	IL_000e:            Temp_0=this->F_x4;                                          //ldfld				System::Int32 Root::T_x16::T_x1 F_x4
	IL_0013:                                                                        //ldc.i4.1
	IL_0014:                                                                        //add
	IL_0015:            this->F_x4=(Temp_0 + 1);                                    //stfld				System::Int32 Root::T_x16::T_x1 F_x4
	IL_001a:                                                                        //ldstr				L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737\x4D39\x4B3B\x493D\x6E3F\x2341\x2D43\x3545\x3C47\x2549\x624B\x2D4D\x3F4F\x3F51\x7B53\x2455\x3757\x3F59\x385B\x3B5D\x125F\x4D61\x0063\x0965\x1C67\x0469\x096B\x1A6D\x5F6F\x3671\x1173\x1075\x1977\x0F79\x107B\x0A7D\xAE7F\xE381\xF783\xF685\xF087\xB589\xC38B\xEC8D\xFA8F\xF791\xF793\xE295\xA597"
	IL_001f:                                                                        //ldloc				V_1
	IL_0023:            Temp_1=a(L"\x442B\x5A2D\x442F\x4231\x0E33\x1935\x1737\x4D39\x4B3B\x493D\x6E3F\x2341\x2D43\x3545\x3C47\x2549\x624B\x2D4D\x3F4F\x3F51\x7B53\x2455\x3757\x3F59\x385B\x3B5D\x125F\x4D61\x0063\x0965\x1C67\x0469\x096B\x1A6D\x5F6F\x3671\x1173\x1075\x1977\x0F79\x107B\x0A7D\xAE7F\xE381\xF783\xF685\xF087\xB589\xC38B\xEC8D\xFA8F\xF791\xF793\xE295\xA597",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_2=this->F_x4;                                          //ldfld				System::Int32 Root::T_x16::T_x1 F_x4
	IL_002e:                                                                        //box				System::Int32
	IL_0033:            Temp_3=System::String::Concat(safe_cast<System::Object^>(Temp_1),safe_cast<System::Object^>(Temp_2));//call				System::String^ System::String::Concat(System::Object^,System::Object^)
	IL_0038:            V_0=Temp_3;                                                 //stloc.0
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_4=this->F_x9;                                          //ldfld				System::Collections::Hashtable^ Root::T_x16::T_x1 F_x9
	IL_003f:                                                                        //ldloc.0
	IL_0040:                                                                        //ldarg.1
	IL_0041:            Temp_4[safe_cast<System::Object^>(V_0)]=A_0;                //callvirt				void System::Collections::Hashtable::set_Item(System::Object^,System::Object^)
	IL_0046:                                                                        //ldloc.0
	IL_0047:            return V_0;                                                 //ret

}
inline void Root::T_x16::T_x1::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Text::StringBuilder^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:            this->M_x1();                                               //call				void Root::T_x16::T_x1::M_x1()
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_0020:                                                                        //ldstr				L"\x1D20\x4122\x1B24"
	IL_0025:                                                                        //ldloc				V_0
	IL_0029:            Temp_1=a(L"\x1D20\x4122\x1B24",V_0);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_2=this->M_x2(A_0);                                     //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_0035:                                                                        //ldstr				L"\x1D20\x0C22\x4724\x1926"
	IL_003a:                                                                        //ldloc				V_0
	IL_003e:            Temp_3=a(L"\x1D20\x0C22\x4724\x1926",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0043:            Temp_4=System::String::Concat(Temp_1,Temp_2,Temp_3);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0048:            Temp_5=Temp_0->Append(Temp_4);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_004d:                                                                        //pop
	IL_004e:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x1(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Text::StringBuilder^ Temp_10 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_1=15;                                                     //stloc				V_1
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:            this->M_x1();                                               //call				void Root::T_x16::T_x1::M_x1()
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_0=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_0018:                                                                        //ldc.i4.5
	IL_0019:            Temp_1=gcnew array<System::String^>(5);                     //newarr				System::String
	IL_001e:            V_0=Temp_1;                                                 //stloc.0
	IL_001f:                                                                        //ldloc.0
	IL_0020:                                                                        //ldc.i4.0
	IL_0021:                                                                        //ldstr				L"\x112C\x492E\x5E30\x5D32\x4134\x1736\x5A38\x543A\x513C\x503E\x3340\x7E42\x6244\x6446"
	IL_0026:                                                                        //ldloc				V_1
	IL_002a:            Temp_2=a(L"\x112C\x492E\x5E30\x5D32\x4134\x1736\x5A38\x543A\x513C\x503E\x3340\x7E42\x6244\x6446",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002f:            V_0[0]=Temp_2;                                              //stelem.ref
	IL_0030:                                                                        //ldloc.0
	IL_0031:                                                                        //ldc.i4.1
	IL_0032:                                                                        //ldarga.s				A_1
	IL_0034:                                                                        //ldstr				L"\x552C\x192E"
	IL_0039:                                                                        //ldloc				V_1
	IL_003d:            Temp_3=a(L"\x552C\x192E",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0042:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0047:            Temp_5=A_1.ToString(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_004c:            V_0[1]=Temp_5;                                              //stelem.ref
	IL_004d:                                                                        //ldloc.0
	IL_004e:                                                                        //ldc.i4.2
	IL_004f:                                                                        //ldstr				L"\x0A2C\x112E"
	IL_0054:                                                                        //ldloc				V_1
	IL_0058:            Temp_6=a(L"\x0A2C\x112E",V_1);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005d:            V_0[2]=Temp_6;                                              //stelem.ref
	IL_005e:                                                                        //ldloc.0
	IL_005f:                                                                        //ldc.i4.3
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldarg.1
	IL_0062:            Temp_7=this->M_x2(A_0);                                     //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_0067:            V_0[3]=Temp_7;                                              //stelem.ref
	IL_0068:                                                                        //ldloc.0
	IL_0069:                                                                        //ldc.i4.4
	IL_006a:                                                                        //ldstr				L"\x112C\x002E\x5730\x5C32\x5B34\x4336\x0738"
	IL_006f:                                                                        //ldloc				V_1
	IL_0073:            Temp_8=a(L"\x112C\x002E\x5730\x5C32\x5B34\x4336\x0738",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0078:            V_0[4]=Temp_8;                                              //stelem.ref
	IL_0079:                                                                        //ldloc.0
	IL_007a:            Temp_9=System::String::Concat(V_0);                         //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_007f:            Temp_10=Temp_0->Append(Temp_9);                             //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0084:                                                                        //pop
	IL_0085:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x1(System::String^ A_0,System::String^ A_1)
//Reflector::CodeModel::IFormatter^::WriteProperty by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::Text::StringBuilder^ Temp_3 = nullptr;
	System::Text::StringBuilder^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Text::StringBuilder^ Temp_6 = nullptr;
	System::Text::StringBuilder^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Text::StringBuilder^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Text::StringBuilder^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Text::StringBuilder^ Temp_17 = nullptr;
	System::Text::StringBuilder^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Text::StringBuilder^ Temp_22 = nullptr;
	System::Text::StringBuilder^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Text::StringBuilder^ Temp_27 = nullptr;
	System::Text::StringBuilder^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::Text::StringBuilder^ Temp_30 = nullptr;
	System::Text::StringBuilder^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Text::StringBuilder^ Temp_35 = nullptr;
	System::Boolean Temp_36 = false;
	System::Text::StringBuilder^ Temp_37 = nullptr;
	System::Text::StringBuilder^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::Text::StringBuilder^ Temp_40 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_1=2;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_01af;case 1:goto IL_013e;case 2:goto IL_0014;case 3:goto IL_0048;};//switch				(IL_01af,IL_013e,IL_0014,IL_0048)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_36=this->F_x12;                                        //ldfld				System::Boolean Root::T_x16::T_x1 F_x12
	IL_0035:            if(!Temp_36)goto IL_01b1;                                   //brfalse				IL_01b1
	IL_003a:            goto IL_003d;                                               //br.s				IL_003d
	IL_003c:                                                                        //break
	IL_003d:                                                                        //ldc.i4				0x3
	IL_0042:            V_1=3;                                                      //stloc				V_1
	IL_0046:            /*goto IL_0016;*/goto IL_0048;                              //br.s				IL_0016
	IL_0048:            goto IL_004a;                                               //br.s				IL_004a
	IL_004a:                                                                        //ldstr				L"\x791E\x4E20\x4D22\x5124\x0A26\x5A28\x422A\x572C\x4A2E\x0B30\x1332"
	IL_004f:                                                                        //ldloc				V_2
	IL_0053:            Temp_11=a(L"\x791E\x4E20\x4D22\x5124\x0A26\x5A28\x422A\x572C\x4A2E\x0B30\x1332",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_12=this->F_x5;                                         //ldfld				System::String^ Root::T_x16::T_x1 F_x5
	IL_005e:                                                                        //ldstr				L"\x241E\x0120\x5322\x4424\x4326\x4D28\x422A\x432C\x482E\x1C30\x5F32\x5034\x5136\x4D38\x013A\x1D3C\x0A3E\x7A40\x6342\x3544\x2646\x2D48\x2F4A\x244C\x214E\x3650\x7E52\x2154\x3856\x2958\x615A\x7D5C\x6D5E\x5A60\x4362\x1564\x0666\x0D68\x0F6A\x046C\x016E\x1670\x5E72\x0774\x1E76\x1E78\x137A\x097C\x457E\xA180\xB682\xBE84\xA786\xF988\xEA8A\xE98C\xEB8E\xF890\xFD92\xF294\xBA96\xFB98\xF49A\xE99C\xEB9E\xCEA0\xCEA2\x9FA4\x87A6\x9BA8\x90AA"
	IL_0063:                                                                        //ldloc				V_2
	IL_0067:            Temp_13=a(L"\x241E\x0120\x5322\x4424\x4326\x4D28\x422A\x432C\x482E\x1C30\x5F32\x5034\x5136\x4D38\x013A\x1D3C\x0A3E\x7A40\x6342\x3544\x2646\x2D48\x2F4A\x244C\x214E\x3650\x7E52\x2154\x3856\x2958\x615A\x7D5C\x6D5E\x5A60\x4362\x1564\x0666\x0D68\x0F6A\x046C\x016E\x1670\x5E72\x0774\x1E76\x1E78\x137A\x097C\x457E\xA180\xB682\xBE84\xA786\xF988\xEA8A\xE98C\xEB8E\xF890\xFD92\xF294\xBA96\xFB98\xF49A\xE99C\xEB9E\xCEA0\xCEA2\x9FA4\x87A6\x9BA8\x90AA",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006c:            Temp_14=System::String::Concat(Temp_11,Temp_12,Temp_13);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0071:            V_0=Temp_14;                                                //stloc.0
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_15=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0078:                                                                        //ldstr				L"\x231E\x5520\x5122\x1B24"
	IL_007d:                                                                        //ldloc				V_2
	IL_0081:            Temp_16=a(L"\x231E\x5520\x5122\x1B24",V_2);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:            Temp_17=Temp_15->Append(Temp_16);                           //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_008b:                                                                        //pop
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_18=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0092:                                                                        //ldstr				L"\x231E\x5520\x4722\x0524\x4926\x4628\x5C2A\x5F2C\x4E2E\x4130\x0E32\x1234\x4336\x4B38\x4E3A\x583C\x183E\x6140\x3442\x2C44\x2346\x3D48\x234A\x704C\x684E\x6050\x7652\x7254\x7756\x2F58\x3A5A\x315C\x365E\x0660\x0D62\x5864\x4066\x1D68\x046A\x1D6C\x486E\x5170\x0072\x0174\x0E76\x1578\x1E7A\x407C\x587E"
	IL_0097:                                                                        //ldloc				V_2
	IL_009b:            Temp_19=a(L"\x231E\x5520\x4722\x0524\x4926\x4628\x5C2A\x5F2C\x4E2E\x4130\x0E32\x1234\x4336\x4B38\x4E3A\x583C\x183E\x6140\x3442\x2C44\x2346\x3D48\x234A\x704C\x684E\x6050\x7652\x7254\x7756\x2F58\x3A5A\x315C\x365E\x0660\x0D62\x5864\x4066\x1D68\x046A\x1D6C\x486E\x5170\x0072\x0174\x0E76\x1578\x1E7A\x407C\x587E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a0:                                                                        //ldloc.0
	IL_00a1:                                                                        //ldstr				L"\x381E\x1F20"
	IL_00a6:                                                                        //ldloc				V_2
	IL_00aa:            Temp_20=a(L"\x381E\x1F20",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:            Temp_21=System::String::Concat(Temp_19,V_0,Temp_20);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00b4:            Temp_22=Temp_18->Append(Temp_21);                           //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_00b9:                                                                        //pop
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_23=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_00c0:                                                                        //ldstr				L"\x231E\x4320\x1D22"
	IL_00c5:                                                                        //ldloc				V_2
	IL_00c9:            Temp_24=a(L"\x231E\x4320\x1D22",V_2);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ce:                                                                        //ldarg.1
	IL_00cf:                                                                        //ldstr				L"\x251E\x1D20\x0C22\x4724\x1926"
	IL_00d4:                                                                        //ldloc				V_2
	IL_00d8:            Temp_25=a(L"\x251E\x1D20\x0C22\x4724\x1926",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dd:            Temp_26=System::String::Concat(Temp_24,A_0,Temp_25);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00e2:            Temp_27=Temp_23->Append(Temp_26);                           //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_00e7:                                                                        //pop
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            Temp_28=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_00ee:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4124\x1926"
	IL_00f3:                                                                        //ldloc				V_2
	IL_00f7:            Temp_29=a(L"\x231E\x0E20\x5722\x4124\x1926",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fc:            Temp_30=Temp_28->Append(Temp_29);                           //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0101:                                                                        //pop
	IL_0102:                                                                        //ldarg.0
	IL_0103:            Temp_31=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0108:                                                                        //ldstr				L"\x231E\x5520\x4722\x0524\x5126\x4828\x472A\x442C\x482E\x5F30\x0E32\x1234\x4336\x5638\x4B3A\x1A3C\x1F3E\x3240\x3742\x3C44\x2B46\x2C48\x764A\x6A4C"
	IL_010d:                                                                        //ldloc				V_2
	IL_0111:            Temp_32=a(L"\x231E\x5520\x4722\x0524\x5126\x4828\x472A\x442C\x482E\x5F30\x0E32\x1234\x4336\x5638\x4B3A\x1A3C\x1F3E\x3240\x3742\x3C44\x2B46\x2C48\x764A\x6A4C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0116:                                                                        //ldloc.0
	IL_0117:                                                                        //ldstr				L"\x381E\x1F20"
	IL_011c:                                                                        //ldloc				V_2
	IL_0120:            Temp_33=a(L"\x381E\x1F20",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0125:            Temp_34=System::String::Concat(Temp_32,V_0,Temp_33);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_012a:            Temp_35=Temp_31->Append(Temp_34);                           //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_012f:                                                                        //pop
	IL_0130:                                                                        //ldc.i4				0x1
	IL_0135:            V_1=1;                                                      //stloc				V_1
	IL_0139:            /*goto IL_0016;*/goto IL_013e;                              //br				IL_0016
	IL_013e:                                                                        //ldarg.0
	IL_013f:            Temp_0=this->F_x2;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0144:                                                                        //ldarg.2
	IL_0145:            Temp_1=A_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_014a:            Temp_38=Temp_0;if(Temp_1==0)goto IL_0157;                   //brfalse.s				IL_0157
	IL_014c:            goto IL_014e;                                               //br.s				IL_014e
	IL_014e:                                                                        //ldarg.0
	IL_014f:                                                                        //ldarg.2
	IL_0150:            Temp_10=this->M_x2(A_1);                                    //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_0155:            Temp_40=Temp_38;Temp_39=Temp_10;goto IL_0167;               //br.s				IL_0167
	IL_0157:                                                                        //ldstr				L"\x391E\x4F20\x4122\x5624\x5726\x1228"
	IL_015c:                                                                        //ldloc				V_2
	IL_0160:            Temp_2=a(L"\x391E\x4F20\x4122\x5624\x5726\x1228",V_2);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0165:            Temp_40=Temp_38;Temp_39=Temp_2;goto IL_0167;                //br.s				IL_0167
	IL_0167:            Temp_3=Temp_40->Append(Temp_39);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_016c:                                                                        //pop
	IL_016d:                                                                        //ldarg.0
	IL_016e:            Temp_4=this->F_x2;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0173:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4124\x1926"
	IL_0178:                                                                        //ldloc				V_2
	IL_017c:            Temp_5=a(L"\x231E\x0E20\x5722\x4124\x1926",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0181:            Temp_6=Temp_4->Append(Temp_5);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0186:                                                                        //pop
	IL_0187:                                                                        //ldarg.0
	IL_0188:            Temp_7=this->F_x2;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_018d:                                                                        //ldstr				L"\x231E\x0E20\x5722\x5724\x1926"
	IL_0192:                                                                        //ldloc				V_2
	IL_0196:            Temp_8=a(L"\x231E\x0E20\x5722\x5724\x1926",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019b:            Temp_9=Temp_7->Append(Temp_8);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_01a0:                                                                        //pop
	IL_01a1:                                                                        //ldc.i4				0x0
	IL_01a6:            V_1=0;                                                      //stloc				V_1
	IL_01aa:            /*goto IL_0016;*/goto IL_01af;                              //br				IL_0016
	IL_01af:            goto IL_01b1;                                               //br.s				IL_01b1
	IL_01b1:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2)
//Reflector::CodeModel::IFormatter^::WriteReference by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Text::StringBuilder^ Temp_2 = nullptr;
	System::Text::StringBuilder^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Text::StringBuilder^ Temp_8 = nullptr;
	System::Text::StringBuilder^ Temp_9 = nullptr;
	array<System::String^>^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Text::StringBuilder^ Temp_17 = nullptr;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_1
	IL_000f:            switch(V_1){case 0:goto IL_005c;case 1:goto IL_00a0;case 2:goto IL_004e;};//switch				(IL_005c,IL_00a0,IL_004e)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            this->M_x1();                                               //call				void Root::T_x16::T_x1::M_x1()
	IL_0026:                                                                        //ldarg.0
	IL_0027:            Temp_0=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_002c:                                                                        //ldstr				L"\x1D20\x4222\x0524"
	IL_0031:                                                                        //ldloc				V_2
	IL_0035:            Temp_1=a(L"\x1D20\x4222\x0524",V_2);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003a:            Temp_2=Temp_0->Append(Temp_1);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_003f:                                                                        //pop
	IL_0040:            goto IL_0043;                                               //br.s				IL_0043
	IL_0042:                                                                        //break
	IL_0043:                                                                        //ldc.i4				0x2
	IL_0048:            V_1=2;                                                      //stloc				V_1
	IL_004c:            /*goto IL_000b;*/goto IL_004e;                              //br.s				IL_000b
	IL_004e:                                                                        //ldarg.3
	IL_004f:            if(A_2==nullptr)goto IL_00a2;                               //brfalse.s				IL_00a2
	IL_0051:                                                                        //ldc.i4				0x0
	IL_0056:            V_1=0;                                                      //stloc				V_1
	IL_005a:            /*goto IL_000b;*/goto IL_005c;                              //br.s				IL_000b
	IL_005c:            goto IL_005e;                                               //br.s				IL_005e
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_3=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_0064:                                                                        //ldstr				L"\x4920\x5122\x4024\x4126\x1428\x092A"
	IL_0069:                                                                        //ldloc				V_2
	IL_006d:            Temp_4=a(L"\x4920\x5122\x4024\x4126\x1428\x092A",V_2);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:                                                                        //ldarg.0
	IL_0073:                                                                        //ldarg.3
	IL_0074:            Temp_5=this->M_x1(A_2);                                     //call				System::String^ Root::T_x16::T_x1::M_x1(System::Object^)
	IL_0079:                                                                        //ldstr				L"\x0320\x0322"
	IL_007e:                                                                        //ldloc				V_2
	IL_0082:            Temp_6=a(L"\x0320\x0322",V_2);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0087:            Temp_7=System::String::Concat(Temp_4,Temp_5,Temp_6);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_008c:            Temp_8=Temp_3->Append(Temp_7);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0091:                                                                        //pop
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_1=1;                                                      //stloc				V_1
	IL_009b:            /*goto IL_000b;*/goto IL_00a0;                              //br				IL_000b
	IL_00a0:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_9=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_00a8:                                                                        //ldc.i4.5
	IL_00a9:            Temp_10=gcnew array<System::String^>(5);                    //newarr				System::String
	IL_00ae:            V_0=Temp_10;                                                //stloc.0
	IL_00af:                                                                        //ldloc.0
	IL_00b0:                                                                        //ldc.i4.0
	IL_00b1:                                                                        //ldstr				L"\x5520\x4A22\x5124\x4B26\x4C28\x162A\x0F2C"
	IL_00b6:                                                                        //ldloc				V_2
	IL_00ba:            Temp_11=a(L"\x5520\x4A22\x5124\x4B26\x4C28\x162A\x0F2C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bf:            V_0[0]=Temp_11;                                             //stelem.ref
	IL_00c0:                                                                        //ldloc.0
	IL_00c1:                                                                        //ldc.i4.1
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:                                                                        //ldarg.2
	IL_00c4:            Temp_12=this->M_x2(A_1);                                    //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_00c9:            V_0[1]=Temp_12;                                             //stelem.ref
	IL_00ca:                                                                        //ldloc.0
	IL_00cb:                                                                        //ldc.i4.2
	IL_00cc:                                                                        //ldstr				L"\x0320\x1D22"
	IL_00d1:                                                                        //ldloc				V_2
	IL_00d5:            Temp_13=a(L"\x0320\x1D22",V_2);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00da:            V_0[2]=Temp_13;                                             //stelem.ref
	IL_00db:                                                                        //ldloc.0
	IL_00dc:                                                                        //ldc.i4.3
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //ldarg.1
	IL_00df:            Temp_14=this->M_x2(A_0);                                    //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_00e4:            V_0[3]=Temp_14;                                             //stelem.ref
	IL_00e5:                                                                        //ldloc.0
	IL_00e6:                                                                        //ldc.i4.4
	IL_00e7:                                                                        //ldstr				L"\x1D20\x0C22\x4424\x1926"
	IL_00ec:                                                                        //ldloc				V_2
	IL_00f0:            Temp_15=a(L"\x1D20\x0C22\x4424\x1926",V_2);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f5:            V_0[4]=Temp_15;                                             //stelem.ref
	IL_00f6:                                                                        //ldloc.0
	IL_00f7:            Temp_16=System::String::Concat(V_0);                        //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_00fc:            Temp_17=Temp_9->Append(Temp_16);                            //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0101:                                                                        //pop
	IL_0102:            return;                                                     //ret

}
inline System::String^ Root::T_x16::T_x1::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::Drawing::Color Temp_1;
	System::String^ Temp_2 = nullptr;
	System::Byte Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Byte Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::Globalization::CultureInfo^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Byte Temp_11 = 0;
	System::String^ Temp_12 = nullptr;
	System::Globalization::CultureInfo^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Text::StringBuilder^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Text::StringBuilder^ Temp_19 = nullptr;
	System::Text::StringBuilder^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Text::StringBuilder^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Text::StringBuilder^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Text::StringBuilder^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Text::StringBuilder^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Text::StringBuilder^ Temp_32 = nullptr;
	System::Text::StringBuilder^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Text::StringBuilder^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Text::StringBuilder^ Temp_37 = nullptr;
	//local variables.
	System::Text::StringBuilder^ V_0 = nullptr;
	System::Drawing::Color V_1;
	System::Byte V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_4=1;                                                      //stloc				V_4
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_013e;case 1:goto IL_0154;case 2:goto IL_01ab;};//switch				(IL_013e,IL_0154,IL_01ab)
	IL_0020:            Temp_0=gcnew System::Text::StringBuilder();                 //newobj				void System::Text::StringBuilder::.ctor()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldc.i4				0xd2
	IL_002b:                                                                        //ldc.i4				0xb4
	IL_0030:                                                                        //ldc.i4				0x8c
	IL_0035:            Temp_1=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(210),safe_cast<System::Int32>(180),safe_cast<System::Int32>(140));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32)
	IL_003a:            V_1=Temp_1;                                                 //stloc.1
	IL_003b:                                                                        //ldstr				L"\x3C1E"
	IL_0040:                                                                        //ldloc				V_4
	IL_0044:            Temp_2=a(L"\x3C1E",V_4);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0049:                                                                        //ldloca.s				V_1
	IL_004b:            Temp_3=V_1.R;                                               //call				System::Byte System::Drawing::Color::get_R()
	IL_0050:            V_2=Temp_3;                                                 //stloc.2
	IL_0051:                                                                        //ldloca.s				V_2
	IL_0053:                                                                        //ldstr				L"\x471E\x1320"
	IL_0058:                                                                        //ldloc				V_4
	IL_005c:            Temp_4=a(L"\x471E\x1320",V_4);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0061:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0066:            Temp_6=V_2.ToString(Temp_4,safe_cast<System::IFormatProvider^>(Temp_5));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_006b:                                                                        //ldloca.s				V_1
	IL_006d:            Temp_7=V_1.G;                                               //call				System::Byte System::Drawing::Color::get_G()
	IL_0072:            V_2=Temp_7;                                                 //stloc.2
	IL_0073:                                                                        //ldloca.s				V_2
	IL_0075:                                                                        //ldstr				L"\x471E\x1320"
	IL_007a:                                                                        //ldloc				V_4
	IL_007e:            Temp_8=a(L"\x471E\x1320",V_4);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            Temp_9=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0088:            Temp_10=V_2.ToString(Temp_8,safe_cast<System::IFormatProvider^>(Temp_9));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_008d:                                                                        //ldloca.s				V_1
	IL_008f:            Temp_11=V_1.B;                                              //call				System::Byte System::Drawing::Color::get_B()
	IL_0094:            V_2=Temp_11;                                                //stloc.2
	IL_0095:                                                                        //ldloca.s				V_2
	IL_0097:                                                                        //ldstr				L"\x471E\x1320"
	IL_009c:                                                                        //ldloc				V_4
	IL_00a0:            Temp_12=a(L"\x471E\x1320",V_4);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a5:            Temp_13=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00aa:            Temp_14=V_2.ToString(Temp_12,safe_cast<System::IFormatProvider^>(Temp_13));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_00af:            Temp_15=System::String::Concat(Temp_2,Temp_6,Temp_10,Temp_14);//call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_00b4:                                                                        //pop
	IL_00b5:                                                                        //ldloc.0
	IL_00b6:                                                                        //ldstr				L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x5A2C\x462E\x5530\x4732\x5D34\x0A36\x1E38\x0A3A\x0D3C\x0F3E\x6440\x6442\x6544\x3446\x3D48\x324A\x214C\x2A4E\x6C50\x7452\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4372\x4E74\x5076\x5978\x187A\x187C\x137E\xED80\xF082\xF584\xE686\xEA88\xE28A\xE38C\xE88E\xAC90\xB492\xA594\xB096\xB998\xF89A\xF89C\xF39E\xCDA0\xD3A2\xC4A4\xC3A6\xCDA8\xC2AA\xC3AC\xC8AE\x8CB0\x94B2\x85B4\x90B6\x87B8\x87BA\xC9BC\xCDBE\xFFC0\xFFC2\xB1C4\xA3C6\xE9C8\xA8CA\xA2CC\xA3CE\xA2D0\xA3D2\xB4D4\xB9D6\xE4D8\xFCDA\xEFDC\xF8DE\xC1E0\x95E2\x84E4\x8BE6\x80E8\x8CEA\x83EC\xD2EE\xD6F0\x87F2\x9AF4\x87F6\xDEF8\xDBFA\x8EFC\x8BFE\x7800\x6F02\x6004\x3A06\x2E08\x7B0A\x6C0C\x6B0E\x7510\x7A12\x7B14\x7016\x3418\x771A\x781C\x791E\x5520\x1922\x0524\x1226\x1228\x0B2A\x5D2C\x4E2E\x5530\x5732\x5C34\x5936\x5E38\x163A\x493C\x503E\x3140\x7942\x6544\x7346\x7248\x6B4A\x3D4C\x2E4E\x3550\x3752\x3C54\x3956\x3E58\x765A\x2F5C\x365E\x0660\x0B62\x1164\x5D66\x4968\x5E6A\x566C\x4F6E\x0170\x1272\x1174\x1376\x1078\x157A\x1A7C\x527E\xE380\xEC82\xF184\xF386\xE688\xE68A\xB78C\xAF8E\xA590\xA892\xB594\xB096\xA798"
	IL_00bb:                                                                        //ldloc				V_4
	IL_00bf:            Temp_16=a(L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x5A2C\x462E\x5530\x4732\x5D34\x0A36\x1E38\x0A3A\x0D3C\x0F3E\x6440\x6442\x6544\x3446\x3D48\x324A\x214C\x2A4E\x6C50\x7452\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4372\x4E74\x5076\x5978\x187A\x187C\x137E\xED80\xF082\xF584\xE686\xEA88\xE28A\xE38C\xE88E\xAC90\xB492\xA594\xB096\xB998\xF89A\xF89C\xF39E\xCDA0\xD3A2\xC4A4\xC3A6\xCDA8\xC2AA\xC3AC\xC8AE\x8CB0\x94B2\x85B4\x90B6\x87B8\x87BA\xC9BC\xCDBE\xFFC0\xFFC2\xB1C4\xA3C6\xE9C8\xA8CA\xA2CC\xA3CE\xA2D0\xA3D2\xB4D4\xB9D6\xE4D8\xFCDA\xEFDC\xF8DE\xC1E0\x95E2\x84E4\x8BE6\x80E8\x8CEA\x83EC\xD2EE\xD6F0\x87F2\x9AF4\x87F6\xDEF8\xDBFA\x8EFC\x8BFE\x7800\x6F02\x6004\x3A06\x2E08\x7B0A\x6C0C\x6B0E\x7510\x7A12\x7B14\x7016\x3418\x771A\x781C\x791E\x5520\x1922\x0524\x1226\x1228\x0B2A\x5D2C\x4E2E\x5530\x5732\x5C34\x5936\x5E38\x163A\x493C\x503E\x3140\x7942\x6544\x7346\x7248\x6B4A\x3D4C\x2E4E\x3550\x3752\x3C54\x3956\x3E58\x765A\x2F5C\x365E\x0660\x0B62\x1164\x5D66\x4968\x5E6A\x566C\x4F6E\x0170\x1272\x1174\x1376\x1078\x157A\x1A7C\x527E\xE380\xEC82\xF184\xF386\xE688\xE68A\xB78C\xAF8E\xA590\xA892\xB594\xB096\xA798",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c4:            Temp_17=V_0->Append(Temp_16);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_00c9:                                                                        //pop
	IL_00ca:                                                                        //ldloc.0
	IL_00cb:                                                                        //ldstr				L"\x231E\x5120\x5122\x4024\x1926"
	IL_00d0:                                                                        //ldloc				V_4
	IL_00d4:            Temp_18=a(L"\x231E\x5120\x5122\x4024\x1926",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d9:            Temp_19=V_0->Append(Temp_18);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_00de:                                                                        //pop
	IL_00df:                                                                        //ldloc.0
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:            Temp_20=this->F_x1;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_00e6:            Temp_21=Temp_20->ToString();                                //callvirt				System::String^ System::Text::StringBuilder::ToString()
	IL_00eb:            Temp_22=V_0->Append(Temp_21);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_00f0:                                                                        //pop
	IL_00f1:                                                                        //ldloc.0
	IL_00f2:                                                                        //ldstr				L"\x231E\x0E20\x5322\x5724\x4226\x1728"
	IL_00f7:                                                                        //ldloc				V_4
	IL_00fb:            Temp_23=a(L"\x231E\x0E20\x5322\x5724\x4226\x1728",V_4);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0100:            Temp_24=V_0->Append(Temp_23);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0105:                                                                        //pop
	IL_0106:                                                                        //ldloc.0
	IL_0107:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4124\x1926\x1528\x042A\x592C\x5D2E\x0F30"
	IL_010c:                                                                        //ldloc				V_4
	IL_0110:            Temp_25=a(L"\x231E\x0E20\x5722\x4124\x1926\x1528\x042A\x592C\x5D2E\x0F30",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0115:            Temp_26=V_0->Append(Temp_25);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_011a:                                                                        //pop
	IL_011b:                                                                        //ldloc.0
	IL_011c:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C"
	IL_0121:                                                                        //ldloc				V_4
	IL_0125:            Temp_27=a(L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012a:            Temp_28=V_0->Append(Temp_27);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_012f:                                                                        //pop
	IL_0130:                                                                        //ldc.i4				0x0
	IL_0135:            V_3=0;                                                      //stloc				V_3
	IL_0139:            /*goto IL_000b;*/goto IL_013e;                              //br				IL_000b
	IL_013e:                                                                        //ldarg.0
	IL_013f:            Temp_29=this->M_x5();                                       //call				System::Boolean Root::T_x16::T_x1::M_x5()
	IL_0144:            if(!Temp_29)goto IL_01ad;                                   //brfalse.s				IL_01ad
	IL_0146:                                                                        //ldc.i4				0x1
	IL_014b:            V_3=1;                                                      //stloc				V_3
	IL_014f:            /*goto IL_000b;*/goto IL_0154;                              //br				IL_000b
	IL_0154:            goto IL_0156;                                               //br.s				IL_0156
	IL_0156:                                                                        //ldloc.0
	IL_0157:                                                                        //ldstr				L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x5A2C\x462E\x5530\x4732\x5D34\x0A36\x1E38\x0A3A\x0D3C\x0F3E\x6440\x6442\x6544\x3446\x3D48\x324A\x214C\x2A4E\x6C50\x7452\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4272\x4574\x4C76\x5E78\x5B7A\x1E7C\x1A7E\xED80\xEF82\xF684\xF786\xE888\xE88A\xE48C\xE18E\xF690\xAE92\xB294\xA796\xBE98\xBB9A\xFE9C\xFA9E\xCDA0\xCFA2\xD5A4\xC6A6\xCDA8\xCFAA\xC4AC\xC1AE\xD6B0\x8EB2\x92B4\x87B6\x9EB8\x85BA"
	IL_015c:                                                                        //ldloc				V_4
	IL_0160:            Temp_31=a(L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x5A2C\x462E\x5530\x4732\x5D34\x0A36\x1E38\x0A3A\x0D3C\x0F3E\x6440\x6442\x6544\x3446\x3D48\x324A\x214C\x2A4E\x6C50\x7452\x3854\x3656\x2B58\x3C5A\x345C\x315E\x4C60\x0162\x0A64\x1366\x1D68\x046A\x006C\x556E\x5170\x4272\x4574\x4C76\x5E78\x5B7A\x1E7C\x1A7E\xED80\xEF82\xF684\xF786\xE888\xE88A\xE48C\xE18E\xF690\xAE92\xB294\xA796\xBE98\xBB9A\xFE9C\xFA9E\xCDA0\xCFA2\xD5A4\xC6A6\xCDA8\xCFAA\xC4AC\xC1AE\xD6B0\x8EB2\x92B4\x87B6\x9EB8\x85BA",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0165:            Temp_32=V_0->Append(Temp_31);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_016a:                                                                        //pop
	IL_016b:                                                                        //ldloc.0
	IL_016c:                                                                        //ldarg.0
	IL_016d:            Temp_33=this->F_x2;                                         //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x2
	IL_0172:            Temp_34=Temp_33->ToString();                                //callvirt				System::String^ System::Text::StringBuilder::ToString()
	IL_0177:            Temp_35=V_0->Append(Temp_34);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_017c:                                                                        //pop
	IL_017d:                                                                        //ldloc.0
	IL_017e:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C"
	IL_0183:                                                                        //ldloc				V_4
	IL_0187:            Temp_36=a(L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018c:            Temp_37=V_0->Append(Temp_36);                               //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0191:                                                                        //pop
	IL_0192:                                                                        //ldc.i4.4
	IL_0193:                                                                        //dup
	IL_0194:                                                                        //dup
	IL_0195:                                                                        //ldc.i4.2
	IL_0196:                                                                        //sub
	IL_0197:                                                                        //blt				IL_0193
	IL_019c:                                                                        //pop
	IL_019d:                                                                        //ldc.i4				0x2
	IL_01a2:            V_3=2;                                                      //stloc				V_3
	IL_01a6:            /*goto IL_000b;*/goto IL_01ab;                              //br				IL_000b
	IL_01ab:            goto IL_01ad;                                               //br.s				IL_01ad
	IL_01ad:                                                                        //ldloc.0
	IL_01ae:            Temp_30=V_0->ToString();                                    //callvirt				System::String^ System::Text::StringBuilder::ToString()
	IL_01b3:            return Temp_30;                                             //ret

}
inline void Root::T_x16::T_x1::M_x12(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteLiteral by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x800000
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8388608));          //call				void Root::T_x16::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x13()
//Reflector::CodeModel::IFormatter^::WriteIndent by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x8;                                          //ldfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //add
	IL_0009:            this->F_x8=(Temp_0 + 1);                                    //stfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x13(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::Write by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Text::StringBuilder^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::ArgumentNullException^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_0=19;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.1
	IL_000a:            if(A_0!=nullptr)goto IL_0022;                               //brtrue.s				IL_0022
	IL_000c:            goto IL_000e;                                               //br.s				IL_000e
	IL_000e:                                                                        //ldstr				L"\x4530\x5632\x4D34\x4336"
	IL_0013:                                                                        //ldloc				V_0
	IL_0017:            Temp_3=a(L"\x4530\x5632\x4D34\x4336",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001c:            Temp_4=gcnew System::ArgumentNullException(Temp_3);         //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_0021:            throw Temp_4;                                               //throw
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            this->M_x1();                                               //call				void Root::T_x16::T_x1::M_x1()
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldarg.1
	IL_0033:            Temp_1=this->M_x2(A_0);                                     //call				System::String^ Root::T_x16::T_x1::M_x2(System::String^)
	IL_0038:            Temp_2=Temp_0->Append(Temp_1);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_003d:                                                                        //pop
	IL_003e:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x2()
//Reflector::CodeModel::IFormatter^::WriteLine by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Text::StringBuilder^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Text::StringBuilder^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_0=6;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x1;                                          //ldfld				System::Text::StringBuilder^ Root::T_x16::T_x1 F_x1
	IL_000f:                                                                        //ldstr				L"\x2E23"
	IL_0014:                                                                        //ldloc				V_0
	IL_0018:            Temp_1=a(L"\x2E23",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001d:            Temp_2=Temp_0->Append(Temp_1);                              //callvirt				System::Text::StringBuilder^ System::Text::StringBuilder::Append(System::String^)
	IL_0022:                                                                        //pop
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4.1
	IL_0025:            this->F_x13=true;                                           //stfld				System::Boolean Root::T_x16::T_x1 F_x13
	IL_002a:            return;                                                     //ret

}
inline System::String^ Root::T_x16::T_x1::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_0=8;                                                      //stloc				V_0
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.1
	IL_0015:                                                                        //ldstr				"%"
	IL_001a:                                                                        //ldloc				V_0
	IL_001e:            Temp_0=a("%",V_0);                                          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0023:                                                                        //ldstr				L"\x0025\x4927\x4729\x5C2B\x152D"
	IL_0028:                                                                        //ldloc				V_0
	IL_002c:            Temp_1=a(L"\x0025\x4927\x4729\x5C2B\x152D",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0031:            Temp_2=A_0->Replace(Temp_0,Temp_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0036:                                                                        //ldstr				L"\x1A25"
	IL_003b:                                                                        //ldloc				V_0
	IL_003f:            Temp_3=a(L"\x1A25",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0044:                                                                        //ldstr				L"\x0025\x4427\x5E29\x172B"
	IL_0049:                                                                        //ldloc				V_0
	IL_004d:            Temp_4=a(L"\x0025\x4427\x5E29\x172B",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0052:            Temp_5=Temp_2->Replace(Temp_3,Temp_4);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0057:                                                                        //ldstr				L"\x1825"
	IL_005c:                                                                        //ldloc				V_0
	IL_0060:            Temp_6=a(L"\x1825",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0065:                                                                        //ldstr				L"\x0025\x4F27\x5E29\x172B"
	IL_006a:                                                                        //ldloc				V_0
	IL_006e:            Temp_7=a(L"\x0025\x4F27\x5E29\x172B",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0073:            Temp_8=Temp_5->Replace(Temp_6,Temp_7);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0078:                                                                        //ldstr				L"\x0425"
	IL_007d:                                                                        //ldloc				V_0
	IL_0081:            Temp_9=a(L"\x0425",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:                                                                        //ldstr				L"\x0025\x5927\x5F29\x432B\x5A2D\x0B2F"
	IL_008b:                                                                        //ldloc				V_0
	IL_008f:            Temp_10=a(L"\x0025\x5927\x5F29\x432B\x5A2D\x0B2F",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            Temp_11=Temp_8->Replace(Temp_9,Temp_10);                    //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0099:            return Temp_11;                                             //ret

}
inline void Root::T_x16::T_x1::M_x4(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteComment by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x808080
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(8421504));          //call				void Root::T_x16::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x16::T_x1::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::Boolean Root::T_x16::T_x1 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x16::T_x1::M_x5(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteKeyword by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldc.i4				0x1000a0
	IL_0007:            this->M_x1(A_0,safe_cast<System::Int32>(1048736));          //call				void Root::T_x16::T_x1::M_x1(System::String^,System::Int32)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x8()
//Reflector::CodeModel::IFormatter^::WriteOutdent by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //dup
	IL_0002:            Temp_0=this->F_x8;                                          //ldfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_0007:                                                                        //ldc.i4.1
	IL_0008:                                                                        //sub
	IL_0009:            this->F_x8=(Temp_0 - 1);                                    //stfld				System::Int32 Root::T_x16::T_x1 F_x8
	IL_000e:            return;                                                     //ret

}
inline void Root::T_x16::T_x1::M_x8(System::String^ A_0)
//Reflector::CodeModel::IFormatter^::WriteDeclaration by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(A_0);                                            //call				void Root::T_x16::T_x1::M_x1(System::String^)
	IL_0007:            return;                                                     //ret

}
inline System::Object^ Root::T_x16::T_x1::M_x9(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				System::Collections::Hashtable^ Root::T_x16::T_x1 F_x9
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
