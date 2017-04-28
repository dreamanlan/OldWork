#include "global_xref.h"

inline Root::T_x88::T_x88(Reflector::IAssemblyBrowser^ A_0,Reflector::ICommandBarManager^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ContainerControl();*/             //call				void System::Windows::Forms::ContainerControl::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.5
	IL_0008:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x88 F_x1
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x88 F_x1
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldftn				void Root::T_x88::M_x1(System::Object^,System::EventArgs^)
	IL_0021:            Temp_1=gcnew System::EventHandler(this,&Root::T_x88::M_x1); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0026:            Temp_0->ActiveItemChanged += Temp_1;                        //callvirt				void Reflector::IAssemblyBrowser::add_ActiveItemChanged(System::EventHandler^)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldarg.2
	IL_002d:            this->F_x2=A_1;                                             //stfld				Reflector::ICommandBarManager^ Root::T_x88 F_x2
	IL_0032:            return;                                                     //ret

}
inline System::Windows::Forms::Control^ Root::T_x88::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control::ControlCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::Control::ControlCollection^ Temp_2 = nullptr;
	System::Windows::Forms::Control^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0009:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Windows::Forms::Control::ControlCollection::get_Count()
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            if(Temp_1!=1)goto IL_0020;                                  //bne.un.s				IL_0020
	IL_0011:            goto IL_0013;                                               //br.s				IL_0013
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_2=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0019:                                                                        //ldc.i4.0
	IL_001a:            Temp_3=Temp_2[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::Control^ System::Windows::Forms::Control::ControlCollection::get_Item(System::Int32)
	IL_001f:            return Temp_3;                                              //ret
	IL_0020:                                                                        //ldnull
	IL_0021:            return nullptr;                                             //ret

}
inline void Root::T_x88::M_x1(System::Drawing::Image^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	Root::T_x88::T_x13^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Drawing::Bitmap^ Temp_5 = nullptr;
	//local variables.
	Root::T_x88::T_x13^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_002a;                                               //br.s				IL_002a
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0094;case 1:goto IL_0041;case 2:goto IL_004f;case 3:goto IL_006b;case 4:goto IL_007e;};//switch				(IL_0094,IL_0041,IL_004f,IL_006b,IL_007e)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_0=this->M_x1();                                        //call				System::Windows::Forms::Control^ Root::T_x88::M_x1()
	IL_0030:                                                                        //isinst				Root::T_x88::T_x13
	IL_0035:            V_0=dynamic_cast<Root::T_x88::T_x13^>(Temp_0);              //stloc.0
	IL_0036:                                                                        //ldc.i4				0x1
	IL_003b:            V_1=1;                                                      //stloc				V_1
	IL_003f:            /*goto IL_0002;*/goto IL_0041;                              //br.s				IL_0002
	IL_0041:                                                                        //ldloc.0
	IL_0042:            if(V_0!=nullptr)goto IL_0059;                               //brtrue.s				IL_0059
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_1=2;                                                      //stloc				V_1
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:            goto IL_0080;                                               //br.s				IL_0080
	IL_0051:                                                                        //ldloc.0
	IL_0052:                                                                        //ldarg.1
	IL_0053:            V_0->M_x1(A_0);                                             //callvirt				void Root::T_x88::T_x13::M_x1(System::Drawing::Image^)
	IL_0058:            return;                                                     //ret
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //ldloc.0
	IL_005b:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(V_0));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_0060:                                                                        //ldc.i4				0x3
	IL_0065:            V_1=3;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:                                                                        //ldarg.1
	IL_006c:            Temp_2=System::Drawing::ImageAnimator::CanAnimate(A_0);     //call				System::Boolean System::Drawing::ImageAnimator::CanAnimate(System::Drawing::Image^)
	IL_0071:            if(Temp_2)goto IL_0096;                                     //brtrue.s				IL_0096
	IL_0073:                                                                        //ldc.i4				0x4
	IL_0078:            V_1=4;                                                      //stloc				V_1
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:            goto IL_0051;                                               //br.s				IL_0051
	IL_0080:            Temp_1=gcnew Root::T_x88::T_x13();                          //newobj				void Root::T_x88::T_x13::.ctor()
	IL_0085:            V_0=Temp_1;                                                 //stloc.0
	IL_0086:                                                                        //ldc.i4				0x0
	IL_008b:            V_1=0;                                                      //stloc				V_1
	IL_008f:            /*goto IL_0002;*/goto IL_0094;                              //br				IL_0002
	IL_0094:            goto IL_0059;                                               //br.s				IL_0059
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.1
	IL_0098:            Temp_3=A_0->Width;                                          //callvirt				System::Int32 System::Drawing::Image::get_Width()
	IL_009d:                                                                        //ldarg.1
	IL_009e:            Temp_4=A_0->Height;                                         //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_00a3:            Temp_5=gcnew System::Drawing::Bitmap(Temp_3,Temp_4);        //newobj				void System::Drawing::Bitmap::.ctor(System::Int32,System::Int32)
	IL_00a8:            V_0->M_x1(safe_cast<System::Drawing::Image^>(Temp_5));      //callvirt				void Root::T_x88::T_x13::M_x1(System::Drawing::Image^)
	IL_00ad:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::IO::Stream^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	Root::T_x88::T_x1^ Temp_1 = nullptr;
	System::Int64 Temp_2 = 0;
	array<System::Byte>^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	//local variables.
	Root::T_x88::T_x1^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	array<System::Byte>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_003f;case 1:goto IL_0052;case 2:goto IL_0031;};//switch				(IL_003f,IL_0052,IL_0031)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->M_x1();                                        //call				System::Windows::Forms::Control^ Root::T_x88::M_x1()
	IL_0020:                                                                        //isinst				Root::T_x88::T_x1
	IL_0025:            V_0=dynamic_cast<Root::T_x88::T_x1^>(Temp_0);               //stloc.0
	IL_0026:                                                                        //ldc.i4				0x2
	IL_002b:            V_3=2;                                                      //stloc				V_3
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0!=nullptr)goto IL_0054;                               //brtrue.s				IL_0054
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_3=0;                                                      //stloc				V_3
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:            Temp_1=gcnew Root::T_x88::T_x1();                           //newobj				void Root::T_x88::T_x1::.ctor()
	IL_0046:            V_0=Temp_1;                                                 //stloc.0
	IL_0047:                                                                        //ldc.i4				0x1
	IL_004c:            V_3=1;                                                      //stloc				V_3
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_0054;                                               //br.s				IL_0054
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldloc.0
	IL_0056:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(V_0));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_005b:                                                                        //ldarg.1
	IL_005c:                                                                        //ldc.i4.0
	IL_005d:                                                                        //conv.i8
	IL_005e:            A_0->Position=0;                                            //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_0063:                                                                        //ldarg.1
	IL_0064:            Temp_2=A_0->Length;                                         //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_0069:                                                                        //conv.i4
	IL_006a:            V_1=safe_cast<System::Int32>(Temp_2);                       //stloc.1
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //conv.ovf.u4
	IL_006d:            Temp_3=gcnew array<System::Byte>(safe_cast<System::UInt32>(V_1));//newarr				System::Byte
	IL_0072:            V_2=Temp_3;                                                 //stloc.2
	IL_0073:                                                                        //ldarg.1
	IL_0074:                                                                        //ldloc.2
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:                                                                        //ldloc.1
	IL_0077:            Temp_4=A_0->Read(V_2,safe_cast<System::Int32>(0),V_1);      //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_007c:                                                                        //pop
	IL_007d:                                                                        //ldloc.0
	IL_007e:                                                                        //ldloc.2
	IL_007f:            V_0->M_x1(V_2);                                             //callvirt				void Root::T_x88::T_x1::M_x1(array<System::Byte>^)
	IL_0084:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IAssemblyBrowser^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Windows::Forms::Control^ Temp_2 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_0=4;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0032;                                               //br.s				IL_0032
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_006d;case 1:goto IL_004a;case 2:goto IL_00b8;case 3:goto IL_0081;case 4:goto IL_000b;case 5:goto IL_005a;case 6:goto IL_00a2;};//switch				(IL_006d,IL_004a,IL_00b8,IL_0081,IL_000b,IL_005a,IL_00a2)
	IL_0032:                                                                        //ldarg.0
	IL_0033:            Temp_3=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x88 F_x1
	IL_0038:            Temp_4=Temp_3->ActiveItem;                                  //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_003d:            if(Temp_4==nullptr)goto IL_006f;                            //brfalse.s				IL_006f
	IL_003f:                                                                        //ldc.i4				0x1
	IL_0044:            V_0=1;                                                      //stloc				V_0
	IL_0048:            /*goto IL_000d;*/goto IL_004a;                              //br.s				IL_000d
	IL_004a:            goto IL_004d;                                               //br.s				IL_004d
	IL_004c:                                                                        //break
	IL_004d:            goto IL_0083;                                               //br.s				IL_0083
	IL_004f:                                                                        //ldc.i4				0x5
	IL_0054:            V_0=5;                                                      //stloc				V_0
	IL_0058:            /*goto IL_000d;*/goto IL_005a;                              //br.s				IL_000d
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_2=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_0060:            if(Temp_2==nullptr)goto IL_00ba;                            //brfalse.s				IL_00ba
	IL_0062:                                                                        //ldc.i4				0x0
	IL_0067:            V_0=0;                                                      //stloc				V_0
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_006f:                                                                        //ldarg.0
	IL_0070:                                                                        //ldnull
	IL_0071:            this->F_x12=safe_cast<System::Object^>(nullptr);            //stfld				System::Object^ Root::T_x88 F_x12
	IL_0076:                                                                        //ldc.i4				0x3
	IL_007b:            V_0=3;                                                      //stloc				V_0
	IL_007f:            /*goto IL_000d;*/goto IL_0081;                              //br.s				IL_000d
	IL_0081:            goto IL_004f;                                               //br.s				IL_004f
	IL_0083:                                                                        //ldarg.0
	IL_0084:                                                                        //ldarg.0
	IL_0085:            Temp_0=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x88 F_x1
	IL_008a:            Temp_1=Temp_0->ActiveItem;                                  //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_008f:            this->F_x12=Temp_1;                                         //stfld				System::Object^ Root::T_x88 F_x12
	IL_0094:                                                                        //ldc.i4				0x6
	IL_0099:            V_0=6;                                                      //stloc				V_0
	IL_009d:            /*goto IL_000d;*/goto IL_00a2;                              //br				IL_000d
	IL_00a2:            goto IL_004f;                                               //br.s				IL_004f
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            this->M_x2();                                               //call				void Root::T_x88::M_x2()
	IL_00aa:                                                                        //ldc.i4				0x2
	IL_00af:            V_0=2;                                                      //stloc				V_0
	IL_00b3:            /*goto IL_000d;*/goto IL_00b8;                              //br				IL_000d
	IL_00b8:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_00ba:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	Root::T_x88::T_x12^ Temp_1 = nullptr;
	//local variables.
	Root::T_x88::T_x12^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003f;case 1:goto IL_0031;case 2:goto IL_0052;};//switch				(IL_003f,IL_0031,IL_0052)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=this->M_x1();                                        //call				System::Windows::Forms::Control^ Root::T_x88::M_x1()
	IL_001d:                                                                        //isinst				Root::T_x88::T_x12
	IL_0022:            V_0=dynamic_cast<Root::T_x88::T_x12^>(Temp_0);              //stloc.0
	IL_0023:            goto IL_0026;                                               //br.s				IL_0026
	IL_0025:                                                                        //break
	IL_0026:                                                                        //ldc.i4				0x1
	IL_002b:            V_1=1;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0!=nullptr)goto IL_0054;                               //brtrue.s				IL_0054
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_1=0;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:            Temp_1=gcnew Root::T_x88::T_x12();                          //newobj				void Root::T_x88::T_x12::.ctor()
	IL_0046:            V_0=Temp_1;                                                 //stloc.0
	IL_0047:                                                                        //ldc.i4				0x2
	IL_004c:            V_1=2;                                                      //stloc				V_1
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_0054;                                               //br.s				IL_0054
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldloc.0
	IL_0056:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(V_0));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_005b:                                                                        //ldloc.0
	IL_005c:                                                                        //ldarg.1
	IL_005d:            V_0->M_x1(A_0);                                             //callvirt				void Root::T_x88::T_x12::M_x1(System::String^)
	IL_0062:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::String^ A_0,array<System::Byte>^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::MemoryStream^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Collections::Hashtable^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	Root::T_x127^ Temp_38 = nullptr;
	System::Windows::Forms::Control^ Temp_39 = nullptr;
	Reflector::ICommandBarManager^ Temp_40 = nullptr;
	Root::T_x88::T_x2^ Temp_41 = nullptr;
	System::Drawing::Bitmap^ Temp_42 = nullptr;
	System::Drawing::Icon^ Temp_43 = nullptr;
	System::Drawing::Bitmap^ Temp_44 = nullptr;
	System::Windows::Forms::Cursor^ Temp_45 = nullptr;
	System::IO::StreamReader^ Temp_46 = nullptr;
	System::Collections::Hashtable^ Temp_47 = nullptr;
	System::Object^ Temp_48 = nullptr;
	System::Object^ Temp_49 = nullptr;
	System::Collections::Hashtable^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	//local variables.
	System::IO::MemoryStream^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Root::T_x127^ V_2 = nullptr;
	Root::T_x88::T_x2^ V_3 = nullptr;
	System::InvalidOperationException^ V_4 = nullptr;
	System::NotSupportedException^ V_5 = nullptr;
	System::IO::StreamReader^ V_6 = nullptr;
	System::Object^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_9=8;                                                      //stloc				V_9
	IL_0009:                                                                        //ldc.i4				0xa
	IL_000e:            V_8=10;                                                     //stloc				V_8
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_004f;                                               //br.s				IL_004f
	IL_0016:                                                                        //ldloc				V_8
	IL_001a:            switch(V_8){case 0:goto IL_0669;case 1:goto IL_0656;case 2:goto IL_02a8;case 3:goto IL_060a;case 4:goto IL_00f2;case 5:goto IL_01f6;case 6:goto IL_01ba;case 7:goto IL_0066;case 8:goto IL_01db;case 9:goto IL_0211;case 10:goto IL_0014;case 11:goto IL_0632;};//switch				(IL_0669,IL_0656,IL_02a8,IL_060a,IL_00f2,IL_01f6,IL_01ba,IL_0066,IL_01db,IL_0211,IL_0014,IL_0632)
	IL_004f:                                                                        //volatile.
	IL_0051:            Temp_50=Root::T_x188::F_x5;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x5
	IL_0056:            if(Temp_50!=nullptr)goto IL_00d7;                           //brtrue				IL_00d7
	IL_005b:                                                                        //ldc.i4				0x7
	IL_0060:            V_8=7;                                                      //stloc				V_8
	IL_0064:            /*goto IL_0016;*/goto IL_0066;                              //br.s				IL_0016
	IL_0066:            goto IL_02ad;                                               //br				IL_02ad
	IL_006b:                                                                        //ldarg.0
	IL_006c:                                                                        //ldloc.0
	IL_006d:            Temp_43=gcnew System::Drawing::Icon(safe_cast<System::IO::Stream^>(V_0));//newobj				void System::Drawing::Icon::.ctor(System::IO::Stream^)
	IL_0072:            Temp_44=Temp_43->ToBitmap();                                //call				System::Drawing::Bitmap^ System::Drawing::Icon::ToBitmap()
	IL_0077:            this->M_x1(safe_cast<System::Drawing::Image^>(Temp_44));    //call				void Root::T_x88::M_x1(System::Drawing::Image^)
	IL_007c:            return;                                                     //ret
	IL_007C01:          try{
	IL_007d:                                                                        //ldarg.0
	IL_007e:                                                                        //ldloc.s				V_6
	IL_0080:            Temp_3=V_6->ReadToEnd();                                    //callvirt				System::String^ System::IO::TextReader::ReadToEnd()
	IL_0085:            this->M_x1(Temp_3);                                         //call				void Root::T_x88::M_x1(System::String^)
	IL_008a:            goto IL_067b;                                               //leave				IL_067b
	                    ;}
	                    finally{
	IL_008f:                                                                        //ldc.i4				0x1
	IL_0094:            V_8=1;                                                      //stloc				V_8
	IL_0098:            /*goto IL_009c;*/goto IL_009a;                              //br.s				IL_009c
	IL_009a:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_009c:                                                                        //ldloc				V_8
	IL_00a0:            switch(V_8){case 0:goto IL_00c0;case 1:goto IL_009a;case 2:goto IL_00d4;};//switch				(IL_00c0,IL_009a,IL_00d4)
	IL_00b1:                                                                        //ldloc.s				V_6
	IL_00b3:            if(V_6==nullptr)goto IL_00d6;                               //brfalse.s				IL_00d6
	IL_00b5:                                                                        //ldc.i4				0x0
	IL_00ba:            V_8=0;                                                      //stloc				V_8
	IL_00be:            /*goto IL_009c;*/goto IL_00c0;                              //br.s				IL_009c
	IL_00c0:            goto IL_00c2;                                               //br.s				IL_00c2
	IL_00c2:                                                                        //ldloc.s				V_6
	IL_00c4:            /*safe_cast<System::IDisposable^>(V_6)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_00c9:                                                                        //ldc.i4				0x2
	IL_00ce:            V_8=2;                                                      //stloc				V_8
	IL_00d2:            /*goto IL_009c;*/goto IL_00d4;                              //br.s				IL_009c
	IL_00d4:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_00d6:                                                                        //endfinally
	                    ;}
	IL_00d7:                                                                        //ldarg.2
	IL_00d8:            Temp_0=gcnew System::IO::MemoryStream(A_1);                 //newobj				void System::IO::MemoryStream::.ctor(array<System::Byte>^)
	IL_00dd:            V_0=Temp_0;                                                 //stloc.0
	IL_00de:            Temp_1=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_00e3:            V_1=Temp_1;                                                 //stloc.1
	IL_00e4:                                                                        //ldc.i4				0x4
	IL_00e9:            V_8=4;                                                      //stloc				V_8
	IL_00ed:            /*goto IL_0016;*/goto IL_00f2;                              //br				IL_0016
	IL_00f2:            /*goto IL_060f;*/goto IL_060A01;                            //br				IL_060f
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:                                                                        //ldloc.0
	IL_00f9:            Temp_42=gcnew System::Drawing::Bitmap(safe_cast<System::IO::Stream^>(V_0));//newobj				void System::Drawing::Bitmap::.ctor(System::IO::Stream^)
	IL_00fe:            this->M_x1(safe_cast<System::Drawing::Image^>(Temp_42));    //call				void Root::T_x88::M_x1(System::Drawing::Image^)
	IL_0103:            return;                                                     //ret
	IL_010301:          try{
	IL_0104:            goto IL_011f;                                               //br.s				IL_011f
	IL_0106:                                                                        //ldloc				V_8
	IL_010a:            switch(V_8){case 0:goto IL_014b;case 1:goto IL_0164;case 2:goto IL_017f;case 3:goto IL_013d;};//switch				(IL_014b,IL_0164,IL_017f,IL_013d)
	IL_011f:                                                                        //ldloc.0
	IL_0120:            Temp_38=gcnew Root::T_x127(safe_cast<System::IO::Stream^>(V_0));//newobj				void Root::T_x127::.ctor(System::IO::Stream^)
	IL_0125:            V_2=Temp_38;                                                //stloc.2
	IL_0126:                                                                        //ldarg.0
	IL_0127:            Temp_39=this->M_x1();                                       //call				System::Windows::Forms::Control^ Root::T_x88::M_x1()
	IL_012c:                                                                        //isinst				Root::T_x88::T_x2
	IL_0131:            V_3=dynamic_cast<Root::T_x88::T_x2^>(Temp_39);              //stloc.3
	IL_0132:                                                                        //ldc.i4				0x3
	IL_0137:            V_8=3;                                                      //stloc				V_8
	IL_013b:            /*goto IL_0106;*/goto IL_013d;                              //br.s				IL_0106
	IL_013d:                                                                        //ldloc.3
	IL_013e:            if(V_3!=nullptr)goto IL_0166;                               //brtrue.s				IL_0166
	IL_0140:                                                                        //ldc.i4				0x0
	IL_0145:            V_8=0;                                                      //stloc				V_8
	IL_0149:            /*goto IL_0106;*/goto IL_014b;                              //br.s				IL_0106
	IL_014b:            goto IL_014d;                                               //br.s				IL_014d
	IL_014d:                                                                        //ldarg.0
	IL_014e:            Temp_40=this->F_x2;                                         //ldfld				Reflector::ICommandBarManager^ Root::T_x88 F_x2
	IL_0153:            Temp_41=gcnew Root::T_x88::T_x2(Temp_40);                   //newobj				void Root::T_x88::T_x2::.ctor(Reflector::ICommandBarManager^)
	IL_0158:            V_3=Temp_41;                                                //stloc.3
	IL_0159:                                                                        //ldc.i4				0x1
	IL_015e:            V_8=1;                                                      //stloc				V_8
	IL_0162:            /*goto IL_0106;*/goto IL_0164;                              //br.s				IL_0106
	IL_0164:            goto IL_0166;                                               //br.s				IL_0166
	IL_0166:                                                                        //ldarg.0
	IL_0167:                                                                        //ldloc.3
	IL_0168:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(V_3));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_016d:                                                                        //ldloc.3
	IL_016e:                                                                        //ldloc.2
	IL_016f:            V_3->M_x1(V_2);                                             //callvirt				void Root::T_x88::T_x2::M_x1(Root::T_x127^)
	IL_0174:                                                                        //ldc.i4				0x2
	IL_0179:            V_8=2;                                                      //stloc				V_8
	IL_017d:            /*goto IL_0106;*/goto IL_017f;                              //br.s				IL_0106
	IL_017f:            goto IL_067b;                                               //leave				IL_067b
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_017F02){
	IL_0184:            V_4=Ex_017F02;                                              //stloc.s				V_4
	IL_0186:                                                                        //ldarg.0
	IL_0187:                                                                        //ldloc.s				V_4
	IL_0189:            Temp_51=V_4->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_018e:            this->M_x1(Temp_51);                                        //call				void Root::T_x88::M_x1(System::String^)
	IL_0193:            goto IL_067b;                                               //leave				IL_067b
	                    ;}
	                    catch(System::NotSupportedException^ Ex_019302){
	IL_0198:            V_5=Ex_019302;                                              //stloc.s				V_5
	IL_019a:                                                                        //ldarg.0
	IL_019b:                                                                        //ldloc.s				V_5
	IL_019d:            Temp_52=V_5->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_01a2:            this->M_x1(Temp_52);                                        //call				void Root::T_x88::M_x1(System::String^)
	IL_01a7:            goto IL_067b;                                               //leave				IL_067b
	                    ;}
	IL_01ac:                                                                        //ldc.i4				0x6
	IL_01b1:            V_8=6;                                                      //stloc				V_8
	IL_01b5:            /*goto IL_0016;*/goto IL_01ba;                              //br				IL_0016
	IL_01ba:                                                                        //ldloc.1
	IL_01bb:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01c0:            Temp_5=V_1->ToLower(Temp_4);                                //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_01c5:                                                                        //dup
	IL_01c6:            V_7=safe_cast<System::Object^>(Temp_5);                     //stloc.s				V_7
	IL_01c8:            if(Temp_5==nullptr)goto IL_01fb;                            //brfalse				IL_01fb
	IL_01cd:                                                                        //ldc.i4				0x8
	IL_01d2:            V_8=8;                                                      //stloc				V_8
	IL_01d6:            /*goto IL_0016;*/goto IL_01db;                              //br				IL_0016
	IL_01db:            goto IL_0621;                                               //br				IL_0621
	IL_01e0:                                                                        //ldloc.0
	IL_01e1:            Temp_46=gcnew System::IO::StreamReader(safe_cast<System::IO::Stream^>(V_0));//newobj				void System::IO::StreamReader::.ctor(System::IO::Stream^)
	IL_01e6:            V_6=Temp_46;                                                //stloc.s				V_6
	IL_01e8:                                                                        //ldc.i4				0x5
	IL_01ed:            V_8=5;                                                      //stloc				V_8
	IL_01f1:            /*goto IL_0016;*/goto IL_01f6;                              //br				IL_0016
	IL_01f6:            /*goto IL_007d;*/goto IL_007C01;                            //br				IL_007d
	IL_01fb:                                                                        //ldarg.0
	IL_01fc:                                                                        //ldloc.0
	IL_01fd:            this->M_x1(safe_cast<System::IO::Stream^>(V_0));            //call				void Root::T_x88::M_x1(System::IO::Stream^)
	IL_0202:            return;                                                     //ret
	IL_0203:                                                                        //ldc.i4				0x9
	IL_0208:            V_8=9;                                                      //stloc				V_8
	IL_020c:            /*goto IL_0016;*/goto IL_0211;                              //br				IL_0016
	IL_0211:                                                                        //ldloc.s				V_7
	IL_0213:                                                                        //unbox				System::Int32
	IL_0218:                                                                        //ldind.i4
	IL_0219:            switch(safe_cast<System::Int32>(V_7)){case 0:goto IL_010301;case 1:goto IL_00f7;case 2:goto IL_00f7;case 3:goto IL_00f7;case 4:goto IL_00f7;case 5:goto IL_00f7;case 6:goto IL_00f7;case 7:goto IL_00f7;case 8:goto IL_00f7;case 9:goto IL_00f7;case 10:goto IL_00f7;case 11:goto IL_006b;case 12:goto IL_066e;case 13:goto IL_01e0;case 14:goto IL_01e0;case 15:goto IL_01e0;case 16:goto IL_01e0;case 17:goto IL_01e0;case 18:goto IL_01e0;case 19:goto IL_01e0;case 20:goto IL_01e0;case 21:goto IL_01e0;case 22:goto IL_01e0;case 23:goto IL_01e0;case 24:goto IL_01e0;case 25:goto IL_01e0;case 26:goto IL_01e0;case 27:goto IL_01e0;case 28:goto IL_01e0;case 29:goto IL_01e0;case 30:goto IL_01e0;};//switch				(IL_0104,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_00f7,IL_006b,IL_066e,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0,IL_01e0)
	IL_029a:                                                                        //ldc.i4				0x2
	IL_029f:            V_8=2;                                                      //stloc				V_8
	IL_02a3:            /*goto IL_0016;*/goto IL_02a8;                              //br				IL_0016
	IL_02a8:            goto IL_065b;                                               //br				IL_065b
	IL_02ad:                                                                        //ldc.i4.s				64
	IL_02af:                                                                        //ldc.r4				0.5
	IL_02b4:            Temp_6=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(64),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_02b9:                                                                        //dup
	IL_02ba:                                                                        //ldstr				L"\x0825\x5A27\x4F29\x5F2B\x412D\x452F\x4031\x5733\x5335\x4B37"
	IL_02bf:                                                                        //ldloc				V_9
	IL_02c3:            Temp_7=a(L"\x0825\x5A27\x4F29\x5F2B\x412D\x452F\x4031\x5733\x5335\x4B37",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c8:                                                                        //ldc.i4.0
	IL_02c9:                                                                        //box				System::Int32
	IL_02ce:            Temp_6->Add(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02d3:                                                                        //dup
	IL_02d4:                                                                        //ldstr				L"\x0825\x4A27\x4729\x5C2B"
	IL_02d9:                                                                        //ldloc				V_9
	IL_02dd:            Temp_8=a(L"\x0825\x4A27\x4729\x5C2B",V_9);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e2:                                                                        //ldc.i4.1
	IL_02e3:                                                                        //box				System::Int32
	IL_02e8:            Temp_6->Add(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02ed:                                                                        //dup
	IL_02ee:                                                                        //ldstr				L"\x0825\x4D27\x4729\x4A2B"
	IL_02f3:                                                                        //ldloc				V_9
	IL_02f7:            Temp_9=a(L"\x0825\x4D27\x4729\x4A2B",V_9);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fc:                                                                        //ldc.i4.2
	IL_02fd:                                                                        //box				System::Int32
	IL_0302:            Temp_6->Add(safe_cast<System::Object^>(Temp_9),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0307:                                                                        //dup
	IL_0308:                                                                        //ldstr				L"\x0825\x4D27\x5229\x452B\x482D"
	IL_030d:                                                                        //ldloc				V_9
	IL_0311:            Temp_10=a(L"\x0825\x4D27\x5229\x452B\x482D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0316:                                                                        //ldc.i4.3
	IL_0317:                                                                        //box				System::Int32
	IL_031c:            Temp_6->Add(safe_cast<System::Object^>(Temp_10),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0321:                                                                        //dup
	IL_0322:                                                                        //ldstr				L"\x0825\x4F27\x4329\x4A2B"
	IL_0327:                                                                        //ldloc				V_9
	IL_032b:            Temp_11=a(L"\x0825\x4F27\x4329\x4A2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0330:                                                                        //ldc.i4.4
	IL_0331:                                                                        //box				System::Int32
	IL_0336:            Temp_6->Add(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_033b:                                                                        //dup
	IL_033c:                                                                        //ldstr				L"\x0825\x4227\x5A29\x492B\x492D"
	IL_0341:                                                                        //ldloc				V_9
	IL_0345:            Temp_12=a(L"\x0825\x4227\x5A29\x492B\x492D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_034a:                                                                        //ldc.i4.5
	IL_034b:                                                                        //box				System::Int32
	IL_0350:            Temp_6->Add(safe_cast<System::Object^>(Temp_12),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0355:                                                                        //dup
	IL_0356:                                                                        //ldstr				L"\x0825\x4227\x5A29\x4B2B"
	IL_035b:                                                                        //ldloc				V_9
	IL_035f:            Temp_13=a(L"\x0825\x4227\x5A29\x4B2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0364:                                                                        //ldc.i4.6
	IL_0365:                                                                        //box				System::Int32
	IL_036a:            Temp_6->Add(safe_cast<System::Object^>(Temp_13),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_036f:                                                                        //dup
	IL_0370:                                                                        //ldstr				L"\x0825\x5827\x4429\x4B2B"
	IL_0375:                                                                        //ldloc				V_9
	IL_0379:            Temp_14=a(L"\x0825\x5827\x4429\x4B2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_037e:                                                                        //ldc.i4.7
	IL_037f:                                                                        //box				System::Int32
	IL_0384:            Temp_6->Add(safe_cast<System::Object^>(Temp_14),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0389:                                                                        //dup
	IL_038a:                                                                        //ldstr				L"\x0825\x5C27\x4329\x4A2B"
	IL_038f:                                                                        //ldloc				V_9
	IL_0393:            Temp_15=a(L"\x0825\x5C27\x4329\x4A2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0398:                                                                        //ldc.i4.8
	IL_0399:                                                                        //box				System::Int32
	IL_039e:            Temp_6->Add(safe_cast<System::Object^>(Temp_15),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03a3:                                                                        //dup
	IL_03a4:                                                                        //ldstr				L"\x0825\x5C27\x4329\x4A2B\x482D"
	IL_03a9:                                                                        //ldloc				V_9
	IL_03ad:            Temp_16=a(L"\x0825\x5C27\x4329\x4A2B\x482D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b2:                                                                        //ldc.i4.s				9
	IL_03b4:                                                                        //box				System::Int32
	IL_03b9:            Temp_6->Add(safe_cast<System::Object^>(Temp_16),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03be:                                                                        //dup
	IL_03bf:                                                                        //ldstr				L"\x0825\x5F27\x4729\x4A2B"
	IL_03c4:                                                                        //ldloc				V_9
	IL_03c8:            Temp_17=a(L"\x0825\x5F27\x4729\x4A2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03cd:                                                                        //ldc.i4.s				10
	IL_03cf:                                                                        //box				System::Int32
	IL_03d4:            Temp_6->Add(safe_cast<System::Object^>(Temp_17),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03d9:                                                                        //dup
	IL_03da:                                                                        //ldstr				L"\x0825\x4127\x4929\x432B"
	IL_03df:                                                                        //ldloc				V_9
	IL_03e3:            Temp_18=a(L"\x0825\x4127\x4929\x432B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e8:                                                                        //ldc.i4.s				11
	IL_03ea:                                                                        //box				System::Int32
	IL_03ef:            Temp_6->Add(safe_cast<System::Object^>(Temp_18),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03f4:                                                                        //dup
	IL_03f5:                                                                        //ldstr				L"\x0825\x4B27\x5F29\x5E2B"
	IL_03fa:                                                                        //ldloc				V_9
	IL_03fe:            Temp_19=a(L"\x0825\x4B27\x5F29\x5E2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0403:                                                                        //ldc.i4.s				12
	IL_0405:                                                                        //box				System::Int32
	IL_040a:            Temp_6->Add(safe_cast<System::Object^>(Temp_19),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_040f:                                                                        //dup
	IL_0410:                                                                        //ldstr				L"\x0825\x4227\x5929"
	IL_0415:                                                                        //ldloc				V_9
	IL_0419:            Temp_20=a(L"\x0825\x4227\x5929",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_041e:                                                                        //ldc.i4.s				13
	IL_0420:                                                                        //box				System::Int32
	IL_0425:            Temp_6->Add(safe_cast<System::Object^>(Temp_20),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_042a:                                                                        //dup
	IL_042b:                                                                        //ldstr				L"\x0825\x4B27\x5929"
	IL_0430:                                                                        //ldloc				V_9
	IL_0434:            Temp_21=a(L"\x0825\x4B27\x5929",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0439:                                                                        //ldc.i4.s				14
	IL_043b:                                                                        //box				System::Int32
	IL_0440:            Temp_6->Add(safe_cast<System::Object^>(Temp_21),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0445:                                                                        //dup
	IL_0446:                                                                        //ldstr				L"\x0825\x5E27\x4829"
	IL_044b:                                                                        //ldloc				V_9
	IL_044f:            Temp_22=a(L"\x0825\x5E27\x4829",V_9);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0454:                                                                        //ldc.i4.s				15
	IL_0456:                                                                        //box				System::Int32
	IL_045b:            Temp_6->Add(safe_cast<System::Object^>(Temp_22),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0460:                                                                        //dup
	IL_0461:                                                                        //ldstr				L"\x0825\x5C27\x5229\x582B"
	IL_0466:                                                                        //ldloc				V_9
	IL_046a:            Temp_23=a(L"\x0825\x5C27\x5229\x582B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_046f:                                                                        //ldc.i4.s				16
	IL_0471:                                                                        //box				System::Int32
	IL_0476:            Temp_6->Add(safe_cast<System::Object^>(Temp_23),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_047b:                                                                        //dup
	IL_047c:                                                                        //ldstr				L"\x0825\x5027\x4729\x402B"
	IL_0481:                                                                        //ldloc				V_9
	IL_0485:            Temp_24=a(L"\x0825\x5027\x4729\x402B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_048a:                                                                        //ldc.i4.s				17
	IL_048c:                                                                        //box				System::Int32
	IL_0491:            Temp_6->Add(safe_cast<System::Object^>(Temp_24),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0496:                                                                        //dup
	IL_0497:                                                                        //ldstr				L"\x0825\x5027\x5929\x402B"
	IL_049c:                                                                        //ldloc				V_9
	IL_04a0:            Temp_25=a(L"\x0825\x5027\x5929\x402B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04a5:                                                                        //ldc.i4.s				18
	IL_04a7:                                                                        //box				System::Int32
	IL_04ac:            Temp_6->Add(safe_cast<System::Object^>(Temp_25),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04b1:                                                                        //dup
	IL_04b2:                                                                        //ldstr				L"\x0825\x5027\x5929\x402B\x5A2D"
	IL_04b7:                                                                        //ldloc				V_9
	IL_04bb:            Temp_26=a(L"\x0825\x5027\x5929\x402B\x5A2D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c0:                                                                        //ldc.i4.s				19
	IL_04c2:                                                                        //box				System::Int32
	IL_04c7:            Temp_6->Add(safe_cast<System::Object^>(Temp_26),safe_cast<System::Object^>(19));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04cc:                                                                        //dup
	IL_04cd:                                                                        //ldstr				L"\x0825\x5027\x5929\x482B"
	IL_04d2:                                                                        //ldloc				V_9
	IL_04d6:            Temp_27=a(L"\x0825\x5027\x5929\x482B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04db:                                                                        //ldc.i4.s				20
	IL_04dd:                                                                        //box				System::Int32
	IL_04e2:            Temp_6->Add(safe_cast<System::Object^>(Temp_27),safe_cast<System::Object^>(20));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04e7:                                                                        //dup
	IL_04e8:                                                                        //ldstr				L"\x0825\x4C27\x5E29\x482B"
	IL_04ed:                                                                        //ldloc				V_9
	IL_04f1:            Temp_28=a(L"\x0825\x4C27\x5E29\x482B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04f6:                                                                        //ldc.i4.s				21
	IL_04f8:                                                                        //box				System::Int32
	IL_04fd:            Temp_6->Add(safe_cast<System::Object^>(Temp_28),safe_cast<System::Object^>(21));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0502:                                                                        //dup
	IL_0503:                                                                        //ldstr				L"\x0825\x4B27\x5929\x5F2B"
	IL_0508:                                                                        //ldloc				V_9
	IL_050c:            Temp_29=a(L"\x0825\x4B27\x5929\x5F2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0511:                                                                        //ldc.i4.s				22
	IL_0513:                                                                        //box				System::Int32
	IL_0518:            Temp_6->Add(safe_cast<System::Object^>(Temp_29),safe_cast<System::Object^>(22));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_051d:                                                                        //dup
	IL_051e:                                                                        //ldstr				L"\x0825\x4027\x5E29\x412B"
	IL_0523:                                                                        //ldloc				V_9
	IL_0527:            Temp_30=a(L"\x0825\x4027\x5E29\x412B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_052c:                                                                        //ldc.i4.s				23
	IL_052e:                                                                        //box				System::Int32
	IL_0533:            Temp_6->Add(safe_cast<System::Object^>(Temp_30),safe_cast<System::Object^>(23));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0538:                                                                        //dup
	IL_0539:                                                                        //ldstr				L"\x0825\x4027\x5E29\x412B\x422D"
	IL_053e:                                                                        //ldloc				V_9
	IL_0542:            Temp_31=a(L"\x0825\x4027\x5E29\x412B\x422D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0547:                                                                        //ldc.i4.s				24
	IL_0549:                                                                        //box				System::Int32
	IL_054e:            Temp_6->Add(safe_cast<System::Object^>(Temp_31),safe_cast<System::Object^>(24));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0553:                                                                        //dup
	IL_0554:                                                                        //ldstr				L"\x0825\x4527\x4229\x582B"
	IL_0559:                                                                        //ldloc				V_9
	IL_055d:            Temp_32=a(L"\x0825\x4527\x4229\x582B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0562:                                                                        //ldc.i4.s				25
	IL_0564:                                                                        //box				System::Int32
	IL_0569:            Temp_6->Add(safe_cast<System::Object^>(Temp_32),safe_cast<System::Object^>(25));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_056e:                                                                        //dup
	IL_056f:                                                                        //ldstr				L"\x0825\x4927\x5929\x5C2B"
	IL_0574:                                                                        //ldloc				V_9
	IL_0578:            Temp_33=a(L"\x0825\x4927\x5929\x5C2B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_057d:                                                                        //ldc.i4.s				26
	IL_057f:                                                                        //box				System::Int32
	IL_0584:            Temp_6->Add(safe_cast<System::Object^>(Temp_33),safe_cast<System::Object^>(26));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0589:                                                                        //dup
	IL_058a:                                                                        //ldstr				L"\x0825\x4927\x5929\x5C2B\x562D"
	IL_058f:                                                                        //ldloc				V_9
	IL_0593:            Temp_34=a(L"\x0825\x4927\x5929\x5C2B\x562D",V_9);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0598:                                                                        //ldc.i4.s				27
	IL_059a:                                                                        //box				System::Int32
	IL_059f:            Temp_6->Add(safe_cast<System::Object^>(Temp_34),safe_cast<System::Object^>(27));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_05a4:                                                                        //dup
	IL_05a5:                                                                        //ldstr				L"\x0825\x4127\x4429\x452B"
	IL_05aa:                                                                        //ldloc				V_9
	IL_05ae:            Temp_35=a(L"\x0825\x4127\x4429\x452B",V_9);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b3:                                                                        //ldc.i4.s				28
	IL_05b5:                                                                        //box				System::Int32
	IL_05ba:            Temp_6->Add(safe_cast<System::Object^>(Temp_35),safe_cast<System::Object^>(28));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_05bf:                                                                        //dup
	IL_05c0:                                                                        //ldstr				L"\x0825\x4527\x4B29\x422B\x472D\x562F\x5731\x4733\x4235"
	IL_05c5:                                                                        //ldloc				V_9
	IL_05c9:            Temp_36=a(L"\x0825\x4527\x4B29\x422B\x472D\x562F\x5731\x4733\x4235",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05ce:                                                                        //ldc.i4.s				29
	IL_05d0:                                                                        //box				System::Int32
	IL_05d5:            Temp_6->Add(safe_cast<System::Object^>(Temp_36),safe_cast<System::Object^>(29));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_05da:                                                                        //dup
	IL_05db:                                                                        //ldstr				L"\x0825\x4B27\x4529\x422B\x482D\x592F\x5531"
	IL_05e0:                                                                        //ldloc				V_9
	IL_05e4:            Temp_37=a(L"\x0825\x4B27\x4529\x422B\x482D\x592F\x5531",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05e9:                                                                        //ldc.i4.s				30
	IL_05eb:                                                                        //box				System::Int32
	IL_05f0:            Temp_6->Add(safe_cast<System::Object^>(Temp_37),safe_cast<System::Object^>(30));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_05f5:                                                                        //volatile.
	IL_05f7:            Root::T_x188::F_x5=Temp_6;                                  //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x5
	IL_05fc:                                                                        //ldc.i4				0x3
	IL_0601:            V_8=3;                                                      //stloc				V_8
	IL_0605:            /*goto IL_0016;*/goto IL_060a;                              //br				IL_0016
	IL_060a:            goto IL_00d7;                                               //br				IL_00d7
	IL_060A01:          try{
	IL_060f:                                                                        //ldarg.1
	IL_0610:            Temp_2=System::IO::Path::GetExtension(A_0);                 //call				System::String^ System::IO::Path::GetExtension(System::String^)
	IL_0615:            V_1=Temp_2;                                                 //stloc.1
	IL_0616:            goto IL_01ac;                                               //leave				IL_01ac
	                    ;}
	                    catch(System::ArgumentException^ Ex_061602){
	IL_061b:                                                                        //pop
	IL_061c:            goto IL_01ac;                                               //leave				IL_01ac
	                    ;}
	IL_0621:            goto IL_0624;                                               //br.s				IL_0624
	IL_0623:                                                                        //break
	IL_0624:                                                                        //ldc.i4				0xb
	IL_0629:            V_8=11;                                                     //stloc				V_8
	IL_062d:            /*goto IL_0016;*/goto IL_0632;                              //br				IL_0016
	IL_0632:                                                                        //volatile.
	IL_0634:            Temp_47=Root::T_x188::F_x5;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x5
	IL_0639:            Temp_49=V_7;                                                //ldloc.s				V_7
	IL_063b:            Temp_48=Temp_47[Temp_49];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_0640:                                                                        //dup
	IL_0641:            V_7=Temp_48;                                                //stloc.s				V_7
	IL_0643:            if(V_7==nullptr)goto IL_01fb;                               //brfalse				IL_01fb
	IL_0648:                                                                        //ldc.i4				0x1
	IL_064d:            V_8=1;                                                      //stloc				V_8
	IL_0651:            /*goto IL_0016;*/goto IL_0656;                              //br				IL_0016
	IL_0656:            goto IL_0203;                                               //br				IL_0203
	IL_065b:                                                                        //ldc.i4				0x0
	IL_0660:            V_8=0;                                                      //stloc				V_8
	IL_0664:            /*goto IL_0016;*/goto IL_0669;                              //br				IL_0016
	IL_0669:            goto IL_01fb;                                               //br				IL_01fb
	IL_066e:                                                                        //ldarg.0
	IL_066f:                                                                        //ldloc.0
	IL_0670:            Temp_45=gcnew System::Windows::Forms::Cursor(safe_cast<System::IO::Stream^>(V_0));//newobj				void System::Windows::Forms::Cursor::.ctor(System::IO::Stream^)
	IL_0675:            this->M_x1(Temp_45);                                        //call				void Root::T_x88::M_x1(System::Windows::Forms::Cursor^)
	IL_067a:            return;                                                     //ret
	IL_067b:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::Windows::Forms::Control^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control::ControlCollection^ Temp_0 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_1 = nullptr;
	System::Windows::Forms::Control^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_0=3;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_003e;case 1:goto IL_0072;case 2:goto IL_0080;case 3:goto IL_000b;case 4:goto IL_0057;};//switch				(IL_003e,IL_0072,IL_0080,IL_000b,IL_0057)
	IL_002a:                                                                        //ldarg.1
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_2=this->M_x1();                                        //call				System::Windows::Forms::Control^ Root::T_x88::M_x1()
	IL_0031:            if(A_0==Temp_2)goto IL_0082;                                //beq.s				IL_0082
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_0=0;                                                      //stloc				V_0
	IL_003c:            /*goto IL_000d;*/goto IL_003e;                              //br.s				IL_000d
	IL_003e:            goto IL_0059;                                               //br.s				IL_0059
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_1=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0046:                                                                        //ldarg.1
	IL_0047:            Temp_1->Add(A_0);                                           //callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_004c:                                                                        //ldc.i4				0x4
	IL_0051:            V_0=4;                                                      //stloc				V_0
	IL_0055:            /*goto IL_000d;*/goto IL_0057;                              //br.s				IL_000d
	IL_0057:            goto IL_0082;                                               //br.s				IL_0082
	IL_0059:            goto IL_005c;                                               //br.s				IL_005c
	IL_005b:                                                                        //break
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_0=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0062:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::Control::ControlCollection::Clear()
	IL_0067:                                                                        //ldc.i4				0x1
	IL_006c:            V_0=1;                                                      //stloc				V_0
	IL_0070:            /*goto IL_000d;*/goto IL_0072;                              //br.s				IL_000d
	IL_0072:                                                                        //ldarg.1
	IL_0073:            if(A_0==nullptr)goto IL_0082;                               //brfalse.s				IL_0082
	IL_0075:                                                                        //ldc.i4				0x2
	IL_007a:            V_0=2;                                                      //stloc				V_0
	IL_007e:            /*goto IL_000d;*/goto IL_0080;                              //br.s				IL_000d
	IL_0080:            goto IL_0040;                                               //br.s				IL_0040
	IL_0082:            return;                                                     //ret

}
inline void Root::T_x88::M_x1(System::Windows::Forms::Cursor^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Size Temp_0;
	System::Int32 Temp_1 = 0;
	System::Drawing::Size Temp_2;
	System::Int32 Temp_3 = 0;
	System::Drawing::Bitmap^ Temp_4 = nullptr;
	System::Drawing::Graphics^ Temp_5 = nullptr;
	System::Drawing::Color Temp_6;
	System::Drawing::SolidBrush^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Int32 Temp_10 = 0;
	System::Int32 Temp_11 = 0;
	System::Drawing::Rectangle Temp_12;
	//local variables.
	System::Drawing::Bitmap^ V_0 = nullptr;
	System::Drawing::Graphics^ V_1 = nullptr;
	System::Drawing::Size V_2;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=A_0->Size;                                           //callvirt				System::Drawing::Size System::Windows::Forms::Cursor::get_Size()
	IL_0011:            V_2=Temp_0;                                                 //stloc.2
	IL_0012:                                                                        //ldloca.s				V_2
	IL_0014:            Temp_1=V_2.Width;                                           //call				System::Int32 System::Drawing::Size::get_Width()
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_2=A_0->Size;                                           //callvirt				System::Drawing::Size System::Windows::Forms::Cursor::get_Size()
	IL_001f:            V_2=Temp_2;                                                 //stloc.2
	IL_0020:                                                                        //ldloca.s				V_2
	IL_0022:            Temp_3=V_2.Height;                                          //call				System::Int32 System::Drawing::Size::get_Height()
	IL_0027:            Temp_4=gcnew System::Drawing::Bitmap(Temp_1,Temp_3);        //newobj				void System::Drawing::Bitmap::.ctor(System::Int32,System::Int32)
	IL_002c:            V_0=Temp_4;                                                 //stloc.0
	IL_002d:                                                                        //ldloc.0
	IL_002e:            Temp_5=System::Drawing::Graphics::FromImage(safe_cast<System::Drawing::Image^>(V_0));//call				System::Drawing::Graphics^ System::Drawing::Graphics::FromImage(System::Drawing::Image^)
	IL_0033:            V_1=Temp_5;                                                 //stloc.1
	IL_0034:                                                                        //ldloc.1
	IL_0035:            Temp_6=System::Drawing::Color::DarkCyan;                    //call				System::Drawing::Color System::Drawing::Color::get_DarkCyan()
	IL_003a:            Temp_7=gcnew System::Drawing::SolidBrush(Temp_6);           //newobj				void System::Drawing::SolidBrush::.ctor(System::Drawing::Color)
	IL_003f:                                                                        //ldc.i4.0
	IL_0040:                                                                        //ldc.i4.0
	IL_0041:                                                                        //ldloc.0
	IL_0042:            Temp_8=V_0->Width;                                          //callvirt				System::Int32 System::Drawing::Image::get_Width()
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_9=V_0->Height;                                         //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_004d:            V_1->FillRectangle(safe_cast<System::Drawing::Brush^>(Temp_7),safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),Temp_8,Temp_9);//callvirt				void System::Drawing::Graphics::FillRectangle(System::Drawing::Brush^,System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0052:                                                                        //ldarg.1
	IL_0053:                                                                        //ldloc.1
	IL_0054:                                                                        //ldc.i4.0
	IL_0055:                                                                        //ldc.i4.0
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_10=V_0->Width;                                         //callvirt				System::Int32 System::Drawing::Image::get_Width()
	IL_005c:                                                                        //ldloc.0
	IL_005d:            Temp_11=V_0->Height;                                        //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_0062:            Temp_12=System::Drawing::Rectangle(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),Temp_10,Temp_11);//newobj				void System::Drawing::Rectangle::.ctor(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0067:            A_0->Draw(V_1,Temp_12);                                     //callvirt				void System::Windows::Forms::Cursor::Draw(System::Drawing::Graphics^,System::Drawing::Rectangle)
	IL_006c:                                                                        //ldarg.0
	IL_006d:                                                                        //ldloc.0
	IL_006e:            this->M_x1(safe_cast<System::Drawing::Image^>(V_0));        //call				void Root::T_x88::M_x1(System::Drawing::Image^)
	IL_0073:            return;                                                     //ret

}
inline void Root::T_x88::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x1^ Temp_2 = nullptr;
	array<System::Byte>^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::IResource^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_006f;case 1:goto IL_0032;case 2:goto IL_008b;case 3:goto IL_0040;};//switch				(IL_006f,IL_0032,IL_008b,IL_0040)
	IL_001b:                                                                        //ldarg.0
	IL_001c:            Temp_0=this->F_x12;                                         //ldfld				System::Object^ Root::T_x88 F_x12
	IL_0021:                                                                        //isinst				Reflector::CodeModel::IResource
	IL_0026:            V_0=dynamic_cast<Reflector::CodeModel::IResource^>(Temp_0); //stloc.0
	IL_0027:                                                                        //ldc.i4				0x1
	IL_002c:            V_2=1;                                                      //stloc				V_2
	IL_0030:            /*goto IL_0002;*/goto IL_0032;                              //br.s				IL_0002
	IL_0032:                                                                        //ldloc.0
	IL_0033:            if(V_0==nullptr)goto IL_008d;                               //brfalse.s				IL_008d
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_2=3;                                                      //stloc				V_2
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:            goto IL_0058;                                               //br.s				IL_0058
	IL_0042:                                                                        //ldarg.0
	IL_0043:                                                                        //ldnull
	IL_0044:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(nullptr));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_0049:            return;                                                     //ret
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldloc.0
	IL_004c:            Temp_1=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IResource::get_Name()
	IL_0051:                                                                        //ldloc.1
	IL_0052:            this->M_x1(Temp_1,V_1);                                     //call				void Root::T_x88::M_x1(System::String^,array<System::Byte>^)
	IL_0057:            return;                                                     //ret
	IL_0058:                                                                        //ldloc.0
	IL_0059:            Temp_2=gcnew Root::T_x1(V_0);                               //newobj				void Root::T_x1::.ctor(Reflector::CodeModel::IResource^)
	IL_005e:            Temp_3=Temp_2->M_x1();                                      //call				array<System::Byte>^ Root::T_x1::M_x1()
	IL_0063:            V_1=Temp_3;                                                 //stloc.1
	IL_0064:                                                                        //ldc.i4				0x0
	IL_0069:            V_2=0;                                                      //stloc				V_2
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:                                                                        //ldloc.1
	IL_0070:            if(V_1==nullptr)goto IL_0042;                               //brfalse.s				IL_0042
	IL_0072:                                                                        //ldc.i4.4
	IL_0073:                                                                        //dup
	IL_0074:                                                                        //dup
	IL_0075:                                                                        //ldc.i4.2
	IL_0076:                                                                        //sub
	IL_0077:                                                                        //blt				IL_0073
	IL_007c:                                                                        //pop
	IL_007d:                                                                        //ldc.i4				0x2
	IL_0082:            V_2=2;                                                      //stloc				V_2
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_004a;                                               //br.s				IL_004a
	IL_008d:                                                                        //ldarg.0
	IL_008e:                                                                        //ldnull
	IL_008f:            this->M_x1(safe_cast<System::Windows::Forms::Control^>(nullptr));//call				void Root::T_x88::M_x1(System::Windows::Forms::Control^)
	IL_0094:            return;                                                     //ret

}
inline void Root::T_x88::OnParentChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::ContainerControl::OnParentChanged(e);//call				void System::Windows::Forms::ContainerControl::OnParentChanged(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_000d:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldarg.0
	IL_0012:            this->M_x2();                                               //call				void Root::T_x88::M_x2()
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline Root::T_x88::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Drawing::Font^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_0=9;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::TextBox();*/                      //call				void System::Windows::Forms::TextBox::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldc.i4.5
	IL_0011:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->Multiline=true;                                       //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldc.i4.1
	IL_001f:            this->ReadOnly=true;                                        //call				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            this->WordWrap=false;                                       //call				void System::Windows::Forms::TextBoxBase::set_WordWrap(System::Boolean)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldstr				L"\x6426\x4628\x5E2A\x5F2C\x462E\x5430\x4132\x1534\x7936\x5C38\x4C3A"
	IL_0031:                                                                        //ldloc				V_0
	IL_0035:            Temp_0=a(L"\x6426\x4628\x5E2A\x5F2C\x462E\x5430\x4132\x1534\x7936\x5C38\x4C3A",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003a:                                                                        //ldc.r4				7.5
	IL_003f:            Temp_1=gcnew System::Drawing::Font(Temp_0,safe_cast<System::Single>(7.5));//newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_0044:            this->Font=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0049:                                                                        //ldarg.0
	IL_004a:                                                                        //ldc.i4.3
	IL_004b:            this->ScrollBars=safe_cast<System::Windows::Forms::ScrollBars>(3);//call				void System::Windows::Forms::TextBox::set_ScrollBars(System::Windows::Forms::ScrollBars)
	IL_0050:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x88::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Byte>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				array<System::Byte>^ Root::T_x88::T_x1 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x88::T_x1::M_x1(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Text::Encoding^ Temp_4 = nullptr;
	array<System::Byte>^ Temp_5 = nullptr;
	array<System::Char>^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Int32 Temp_9 = 0;
	System::String^ Temp_10 = nullptr;
	System::Globalization::CultureInfo^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::String^ Temp_16 = nullptr;
	System::Globalization::CultureInfo^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::IO::StringWriter^ Temp_21 = nullptr;
	System::IO::StringWriter^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::IO::StringWriter^ Temp_24 = nullptr;
	System::IO::StringWriter^ Temp_25 = nullptr;
	System::IO::StringWriter^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	System::IO::StringWriter^ Temp_28 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	array<System::Char>^ V_4 = nullptr;
	array<System::Byte>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_8=2;                                                      //stloc				V_8
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.1
	IL_000b:            this->F_x1=A_0;                                             //stfld				array<System::Byte>^ Root::T_x88::T_x1 F_x1
	IL_0010:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0015:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_001a:            V_0=Temp_1;                                                 //stloc.0
	IL_001b:            /*goto IL_001d;*/goto IL_001B01;                            //br.s				IL_001d
	IL_001B01:          try{
	IL_001d:            goto IL_007c;                                               //br.s				IL_007c
	IL_001f:                                                                        //ldloc				V_6
	IL_0023:            switch(V_6){case 0:goto IL_01ca;case 1:goto IL_02ed;case 2:goto IL_0217;case 3:goto IL_00d0;case 4:goto IL_030f;case 5:goto IL_026f;case 6:goto IL_00e6;case 7:goto IL_01f0;case 8:goto IL_010a;case 9:goto IL_0244;case 10:goto IL_01a2;case 11:goto IL_0293;case 12:goto IL_0089;case 13:goto IL_01b2;case 14:goto IL_02ab;case 15:goto IL_011f;case 16:goto IL_0132;case 17:goto IL_02d6;case 18:goto IL_02c6;case 19:goto IL_0283;case 20:goto IL_0203;};//switch				(IL_01ca,IL_02ed,IL_0217,IL_00d0,IL_030f,IL_026f,IL_00e6,IL_01f0,IL_010a,IL_0244,IL_01a2,IL_0293,IL_0089,IL_01b2,IL_02ab,IL_011f,IL_0132,IL_02d6,IL_02c6,IL_0283,IL_0203)
	IL_007c:                                                                        //ldc.i4.0
	IL_007d:            V_1=0;                                                      //stloc.1
	IL_007e:                                                                        //ldc.i4				0xc
	IL_0083:            V_6=12;                                                     //stloc				V_6
	IL_0087:            /*goto IL_001f;*/goto IL_0089;                              //br.s				IL_001f
	IL_0089:            goto IL_02c8;                                               //br				IL_02c8
	IL_008e:                                                                        //ldloc.0
	IL_008f:                                                                        //ldloca.s				V_1
	IL_0091:                                                                        //ldstr				L"\x781F\x1421"
	IL_0096:                                                                        //ldloc				V_8
	IL_009a:            Temp_16=a(L"\x781F\x1421",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009f:            Temp_17=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00a4:            Temp_18=V_1.ToString(Temp_16,safe_cast<System::IFormatProvider^>(Temp_17));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_00a9:            V_0->Write(Temp_18);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ae:                                                                        //ldloc.0
	IL_00af:                                                                        //ldstr				L"\x1A1F\x0221"
	IL_00b4:                                                                        //ldloc				V_8
	IL_00b8:            Temp_19=a(L"\x1A1F\x0221",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bd:            V_0->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00c2:                                                                        //ldc.i4				0x3
	IL_00c7:            V_6=3;                                                      //stloc				V_6
	IL_00cb:            /*goto IL_001f;*/goto IL_00d0;                              //br				IL_001f
	IL_00d0:                                                                        //ldloc.1
	IL_00d1:                                                                        //ldc.i4				0x1000
	IL_00d6:            if(V_1<4096)goto IL_010f;                                   //blt.s				IL_010f
	IL_00d8:                                                                        //ldc.i4				0x6
	IL_00dd:            V_6=6;                                                      //stloc				V_6
	IL_00e1:            /*goto IL_001f;*/goto IL_00e6;                              //br				IL_001f
	IL_00e6:            goto IL_00e8;                                               //br.s				IL_00e8
	IL_00e8:                                                                        //ldloc.0
	IL_00e9:                                                                        //ldstr				L"\x0E1F\x0C21\x0A23"
	IL_00ee:                                                                        //ldloc				V_8
	IL_00f2:            Temp_7=a(L"\x0E1F\x0C21\x0A23",V_8);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f7:            V_0->Write(Temp_7);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fc:                                                                        //ldc.i4				0x8
	IL_0101:            V_6=8;                                                      //stloc				V_6
	IL_0105:            /*goto IL_001f;*/goto IL_010a;                              //br				IL_001f
	IL_010a:            goto IL_02ef;                                               //br				IL_02ef
	IL_010f:                                                                        //ldloc.1
	IL_0110:            V_2=V_1;                                                    //stloc.2
	IL_0111:                                                                        //ldc.i4				0xf
	IL_0116:            V_6=15;                                                     //stloc				V_6
	IL_011a:            /*goto IL_001f;*/goto IL_011f;                              //br				IL_001f
	IL_011f:            goto IL_01a4;                                               //br				IL_01a4
	IL_0124:                                                                        //ldc.i4				0x10
	IL_0129:            V_6=16;                                                     //stloc				V_6
	IL_012d:            /*goto IL_001f;*/goto IL_0132;                              //br				IL_001f
	IL_0132:                                                                        //ldloc.0
	IL_0133:                                                                        //ldloc.2
	IL_0134:                                                                        //ldarg.1
	IL_0135:            Temp_9=A_0->Length;                                         //ldlen
	IL_0136:                                                                        //conv.i4
	IL_0137:            Temp_22=V_0;if(V_2<Temp_9)goto IL_014b;                     //blt.s				IL_014b
	IL_0139:            goto IL_013b;                                               //br.s				IL_013b
	IL_013b:                                                                        //ldstr				L"\x001F\x0221"
	IL_0140:                                                                        //ldloc				V_8
	IL_0144:            Temp_14=a(L"\x001F\x0221",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0149:            Temp_24=Temp_22;Temp_23=Temp_14;goto IL_016c;               //br.s				IL_016c
	IL_014b:                                                                        //ldarg.1
	IL_014c:                                                                        //ldloc.2
	IL_014d:                                                                        //ldelema				System::Byte
	IL_0152:                                                                        //ldstr				L"\x781F\x1021"
	IL_0157:                                                                        //ldloc				V_8
	IL_015b:            Temp_10=a(L"\x781F\x1021",V_8);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0160:            Temp_11=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0165:            Temp_12=A_0[V_2].ToString(Temp_10,safe_cast<System::IFormatProvider^>(Temp_11));//call				System::String^ System::Byte::ToString(System::String^,System::IFormatProvider^)
	IL_016a:            Temp_24=Temp_22;Temp_23=Temp_12;goto IL_016c;               //br.s				IL_016c
	IL_016c:            Temp_24->Write(Temp_23);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0171:                                                                        //ldloc.0
	IL_0172:                                                                        //ldstr				L"\x001F"
	IL_0177:                                                                        //ldloc				V_8
	IL_017b:            Temp_13=a(L"\x001F",V_8);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0180:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0185:                                                                        //ldloc.2
	IL_0186:                                                                        //ldc.i4.1
	IL_0187:                                                                        //add
	IL_0188:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0189:                                                                        //ldc.i4.2
	IL_018a:                                                                        //dup
	IL_018b:                                                                        //dup
	IL_018c:                                                                        //ldc.i4.4
	IL_018d:                                                                        //sub
	IL_018e:                                                                        //blt				IL_018a
	IL_0193:                                                                        //pop
	IL_0194:                                                                        //ldc.i4				0xa
	IL_0199:            V_6=10;                                                     //stloc				V_6
	IL_019d:            /*goto IL_001f;*/goto IL_01a2;                              //br				IL_001f
	IL_01a2:            goto IL_01a4;                                               //br.s				IL_01a4
	IL_01a4:                                                                        //ldc.i4				0xd
	IL_01a9:            V_6=13;                                                     //stloc				V_6
	IL_01ad:            /*goto IL_001f;*/goto IL_01b2;                              //br				IL_001f
	IL_01b2:                                                                        //ldloc.2
	IL_01b3:                                                                        //ldloc.1
	IL_01b4:                                                                        //ldc.i4.s				16
	IL_01b6:                                                                        //add
	IL_01b7:            if(V_2<(V_1 + 16))goto IL_0124;                             //blt				IL_0124
	IL_01bc:                                                                        //ldc.i4				0x0
	IL_01c1:            V_6=0;                                                      //stloc				V_6
	IL_01c5:            /*goto IL_001f;*/goto IL_01ca;                              //br				IL_001f
	IL_01ca:            goto IL_01cc;                                               //br.s				IL_01cc
	IL_01cc:                                                                        //ldloc.0
	IL_01cd:                                                                        //ldstr				L"\x001F"
	IL_01d2:                                                                        //ldloc				V_8
	IL_01d6:            Temp_2=a(L"\x001F",V_8);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01db:            V_0->Write(Temp_2);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01e0:                                                                        //ldloc.1
	IL_01e1:            V_3=V_1;                                                    //stloc.3
	IL_01e2:                                                                        //ldc.i4				0x7
	IL_01e7:            V_6=7;                                                      //stloc				V_6
	IL_01eb:            /*goto IL_001f;*/goto IL_01f0;                              //br				IL_001f
	IL_01f0:            goto IL_0285;                                               //br				IL_0285
	IL_01f5:                                                                        //ldc.i4				0x14
	IL_01fa:            V_6=20;                                                     //stloc				V_6
	IL_01fe:            /*goto IL_001f;*/goto IL_0203;                              //br				IL_001f
	IL_0203:                                                                        //ldloc.3
	IL_0204:                                                                        //ldarg.1
	IL_0205:            Temp_20=A_0->Length;                                        //ldlen
	IL_0206:                                                                        //conv.i4
	IL_0207:            if(V_3>=Temp_20)goto IL_0271;                               //bge.s				IL_0271
	IL_0209:                                                                        //ldc.i4				0x2
	IL_020e:            V_6=2;                                                      //stloc				V_6
	IL_0212:            /*goto IL_001f;*/goto IL_0217;                              //br				IL_001f
	IL_0217:            goto IL_0219;                                               //br.s				IL_0219
	IL_0219:            Temp_4=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_021e:                                                                        //ldc.i4.1
	IL_021f:            Temp_5=gcnew array<System::Byte>(1);                        //newarr				System::Byte
	IL_0224:            V_5=Temp_5;                                                 //stloc.s				V_5
	IL_0226:                                                                        //ldloc.s				V_5
	IL_0228:                                                                        //ldc.i4.0
	IL_0229:                                                                        //ldarg.1
	IL_022a:                                                                        //ldloc.3
	IL_022b:                                                                        //ldelem.u1
	IL_022c:            V_5[0]=A_0[V_3];                                            //stelem.i1
	IL_022d:                                                                        //ldloc.s				V_5
	IL_022f:            Temp_6=Temp_4->GetChars(V_5);                               //callvirt				array<System::Char>^ System::Text::Encoding::GetChars(array<System::Byte>^)
	IL_0234:            V_4=Temp_6;                                                 //stloc.s				V_4
	IL_0236:                                                                        //ldc.i4				0x9
	IL_023b:            V_6=9;                                                      //stloc				V_6
	IL_023f:            /*goto IL_001f;*/goto IL_0244;                              //br				IL_001f
	IL_0244:                                                                        //ldloc.0
	IL_0245:                                                                        //ldloc.s				V_4
	IL_0247:                                                                        //ldc.i4.0
	IL_0248:                                                                        //ldelem.u2
	IL_0249:            Temp_8=System::Char::IsControl(V_4[0]);                     //call				System::Boolean System::Char::IsControl(System::Char)
	IL_024e:            Temp_26=V_0;if(Temp_8)goto IL_0258;                         //brtrue.s				IL_0258
	IL_0250:            goto IL_0252;                                               //br.s				IL_0252
	IL_0252:                                                                        //ldloc.s				V_4
	IL_0254:                                                                        //ldc.i4.0
	IL_0255:                                                                        //ldelem.u2
	IL_0256:            Temp_28=Temp_26;Temp_27=V_4[0];goto IL_025c;                //br.s				IL_025c
	IL_0258:                                                                        //ldc.i4.s				46
	IL_025a:            Temp_28=Temp_26;Temp_27=46;goto IL_025c;                    //br.s				IL_025c
	IL_025c:            Temp_28->Write(safe_cast<System::Char>(Temp_27));/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void System::IO::TextWriter::Write(System::Char)
	IL_0261:                                                                        //ldc.i4				0x5
	IL_0266:            V_6=5;                                                      //stloc				V_6
	IL_026a:            /*goto IL_001f;*/goto IL_026f;                              //br				IL_001f
	IL_026f:            goto IL_0271;                                               //br.s				IL_0271
	IL_0271:                                                                        //ldloc.3
	IL_0272:                                                                        //ldc.i4.1
	IL_0273:                                                                        //add
	IL_0274:            V_3=(V_3 + 1);                                              //stloc.3
	IL_0275:                                                                        //ldc.i4				0x13
	IL_027a:            V_6=19;                                                     //stloc				V_6
	IL_027e:            /*goto IL_001f;*/goto IL_0283;                              //br				IL_001f
	IL_0283:            goto IL_0285;                                               //br.s				IL_0285
	IL_0285:                                                                        //ldc.i4				0xb
	IL_028a:            V_6=11;                                                     //stloc				V_6
	IL_028e:            /*goto IL_001f;*/goto IL_0293;                              //br				IL_001f
	IL_0293:                                                                        //ldloc.3
	IL_0294:                                                                        //ldloc.1
	IL_0295:                                                                        //ldc.i4.s				16
	IL_0297:                                                                        //add
	IL_0298:            if(V_3<(V_1 + 16))goto IL_01f5;                             //blt				IL_01f5
	IL_029d:                                                                        //ldc.i4				0xe
	IL_02a2:            V_6=14;                                                     //stloc				V_6
	IL_02a6:            /*goto IL_001f;*/goto IL_02ab;                              //br				IL_001f
	IL_02ab:            goto IL_02ad;                                               //br.s				IL_02ad
	IL_02ad:                                                                        //ldloc.0
	IL_02ae:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_02b3:                                                                        //ldloc.1
	IL_02b4:                                                                        //ldc.i4.s				16
	IL_02b6:                                                                        //add
	IL_02b7:            V_1=(V_1 + 16);                                             //stloc.1
	IL_02b8:                                                                        //ldc.i4				0x12
	IL_02bd:            V_6=18;                                                     //stloc				V_6
	IL_02c1:            /*goto IL_001f;*/goto IL_02c6;                              //br				IL_001f
	IL_02c6:            goto IL_02c8;                                               //br.s				IL_02c8
	IL_02c8:                                                                        //ldc.i4				0x11
	IL_02cd:            V_6=17;                                                     //stloc				V_6
	IL_02d1:            /*goto IL_001f;*/goto IL_02d6;                              //br				IL_001f
	IL_02d6:                                                                        //ldloc.1
	IL_02d7:                                                                        //ldarg.1
	IL_02d8:            Temp_15=A_0->Length;                                        //ldlen
	IL_02d9:                                                                        //conv.i4
	IL_02da:            if(V_1<Temp_15)goto IL_008e;                                //blt				IL_008e
	IL_02df:                                                                        //ldc.i4				0x1
	IL_02e4:            V_6=1;                                                      //stloc				V_6
	IL_02e8:            /*goto IL_001f;*/goto IL_02ed;                              //br				IL_001f
	IL_02ed:            goto IL_02ef;                                               //br.s				IL_02ef
	IL_02ef:                                                                        //ldloc.0
	IL_02f0:            V_0->Flush();                                               //callvirt				void System::IO::TextWriter::Flush()
	IL_02f5:                                                                        //ldarg.0
	IL_02f6:                                                                        //ldloc.0
	IL_02f7:            Temp_3=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_02fc:            this->Text=Temp_3;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0301:                                                                        //ldc.i4				0x4
	IL_0306:            V_6=4;                                                      //stloc				V_6
	IL_030a:            /*goto IL_001f;*/goto IL_030f;                              //br				IL_001f
	IL_030f:            goto IL_0357;                                               //leave.s				IL_0357
	                    ;}
	                    finally{
	IL_0311:                                                                        //ldc.i4				0x0
	IL_0316:            V_7=0;                                                      //stloc				V_7
	IL_031a:            /*goto IL_031e;*/goto IL_031c;                              //br.s				IL_031e
	IL_031c:            goto IL_0333;                                               //br.s				IL_0333
	IL_031e:                                                                        //ldloc				V_7
	IL_0322:            switch(V_7){case 0:goto IL_031c;case 1:goto IL_0354;case 2:goto IL_0341;};//switch				(IL_031c,IL_0354,IL_0341)
	IL_0333:                                                                        //ldloc.0
	IL_0334:            if(V_0==nullptr)goto IL_0356;                               //brfalse.s				IL_0356
	IL_0336:                                                                        //ldc.i4				0x2
	IL_033b:            V_7=2;                                                      //stloc				V_7
	IL_033f:            /*goto IL_031e;*/goto IL_0341;                              //br.s				IL_031e
	IL_0341:            goto IL_0343;                                               //br.s				IL_0343
	IL_0343:                                                                        //ldloc.0
	IL_0344:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0349:                                                                        //ldc.i4				0x1
	IL_034e:            V_7=1;                                                      //stloc				V_7
	IL_0352:            /*goto IL_031e;*/goto IL_0354;                              //br.s				IL_031e
	IL_0354:            goto IL_0356;                                               //br.s				IL_0356
	IL_0356:                                                                        //endfinally
	                    ;}
	IL_0357:            return;                                                     //ret

}
inline Root::T_x88::T_x12::T_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Drawing::Font^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_0=15;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::TextBox();*/                      //call				void System::Windows::Forms::TextBox::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldc.i4.5
	IL_0011:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->Multiline=true;                                       //callvirt				void System::Windows::Forms::TextBoxBase::set_Multiline(System::Boolean)
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldc.i4.1
	IL_001f:            this->ReadOnly=true;                                        //call				void System::Windows::Forms::TextBoxBase::set_ReadOnly(System::Boolean)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4.3
	IL_0026:            this->ScrollBars=safe_cast<System::Windows::Forms::ScrollBars>(3);//call				void System::Windows::Forms::TextBox::set_ScrollBars(System::Windows::Forms::ScrollBars)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldc.i4.0
	IL_002d:            this->WordWrap=false;                                       //call				void System::Windows::Forms::TextBoxBase::set_WordWrap(System::Boolean)
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldstr				L"\x6E2C\x402E\x4430\x4132\x5C34\x5236\x4B38\x1B3A\x733C\x5A3E\x3640"
	IL_0038:                                                                        //ldloc				V_0
	IL_003c:            Temp_0=a(L"\x6E2C\x402E\x4430\x4132\x5C34\x5236\x4B38\x1B3A\x733C\x5A3E\x3640",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0041:                                                                        //ldc.r4				8.25
	IL_0046:            Temp_1=gcnew System::Drawing::Font(Temp_0,safe_cast<System::Single>(8.25));//newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_004b:            this->Font=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0050:            return;                                                     //ret

}
inline System::String^ Root::T_x88::T_x12::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Text;                                          //callvirt				System::String^ System::Windows::Forms::Control::get_Text()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x88::T_x12::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Visible;                                       //call				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_0006:            if(!Temp_0)goto IL_0015;                                    //brfalse.s				IL_0015
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->Text=A_0;                                             //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0014:            return;                                                     //ret
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldarg.1
	IL_0017:            this->F_x1=A_0;                                             //stfld				System::String^ Root::T_x88::T_x12 F_x1
	IL_001c:            return;                                                     //ret

}
inline void Root::T_x88::T_x12::OnVisibleChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0029;case 1:goto IL_0067;case 2:goto IL_003c;};//switch				(IL_0029,IL_0067,IL_003c)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            System::Windows::Forms::TextBox::OnVisibleChanged(e);       //call				void System::Windows::Forms::TextBox::OnVisibleChanged(System::EventArgs^)
	IL_001e:                                                                        //ldc.i4				0x0
	IL_0023:            V_0=0;                                                      //stloc				V_0
	IL_0027:            /*goto IL_0002;*/goto IL_0029;                              //br.s				IL_0002
	IL_0029:                                                                        //ldarg.0
	IL_002a:            Temp_0=this->F_x1;                                          //ldfld				System::String^ Root::T_x88::T_x12 F_x1
	IL_002f:            if(Temp_0==nullptr)goto IL_0069;                            //brfalse.s				IL_0069
	IL_0031:                                                                        //ldc.i4				0x2
	IL_0036:            V_0=2;                                                      //stloc				V_0
	IL_003a:            /*goto IL_0002;*/goto IL_003c;                              //br.s				IL_0002
	IL_003c:            goto IL_003e;                                               //br.s				IL_003e
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_1=this->F_x1;                                          //ldfld				System::String^ Root::T_x88::T_x12 F_x1
	IL_0045:            this->Text=Temp_1;                                          //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldnull
	IL_004c:            this->F_x1=safe_cast<System::String^>(nullptr);             //stfld				System::String^ Root::T_x88::T_x12 F_x1
	IL_0051:                                                                        //ldc.i4.4
	IL_0052:                                                                        //dup
	IL_0053:                                                                        //dup
	IL_0054:                                                                        //ldc.i4.2
	IL_0055:                                                                        //sub
	IL_0056:                                                                        //blt				IL_0052
	IL_005b:                                                                        //pop
	IL_005c:                                                                        //ldc.i4				0x1
	IL_0061:            V_0=1;                                                      //stloc				V_0
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_0069;                                               //br.s				IL_0069
	IL_0069:            return;                                                     //ret

}
inline Root::T_x88::T_x13::T_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::PictureBox^ Temp_0 = nullptr;
	System::Windows::Forms::PictureBox^ Temp_1 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_2 = nullptr;
	System::Windows::Forms::PictureBox^ Temp_3 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ScrollableControl();*/            //call				void System::Windows::Forms::ScrollableControl::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.5
	IL_0008:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.1
	IL_000f:            this->AutoScroll=true;                                      //callvirt				void System::Windows::Forms::ScrollableControl::set_AutoScroll(System::Boolean)
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=gcnew System::Windows::Forms::PictureBox();          //newobj				void System::Windows::Forms::PictureBox::.ctor()
	IL_001a:            this->F_x1=Temp_0;                                          //stfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_1=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_0025:                                                                        //ldc.i4.2
	IL_0026:            Temp_1->SizeMode=safe_cast<System::Windows::Forms::PictureBoxSizeMode>(2);//callvirt				void System::Windows::Forms::PictureBox::set_SizeMode(System::Windows::Forms::PictureBoxSizeMode)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_2=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_3=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_0037:            Temp_2->Add(safe_cast<System::Windows::Forms::Control^>(Temp_3));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_003c:            return;                                                     //ret

}
inline System::Drawing::Image^ Root::T_x88::T_x13::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::PictureBox^ Temp_0 = nullptr;
	System::Drawing::Image^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_0006:            Temp_1=Temp_0->Image;                                       //callvirt				System::Drawing::Image^ System::Windows::Forms::PictureBox::get_Image()
	IL_000b:            return Temp_1;                                              //ret

}
inline void Root::T_x88::T_x13::M_x1(System::Drawing::Image^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Drawing::Point Temp_0;
	System::Drawing::Size Temp_1;
	System::Windows::Forms::PictureBox^ Temp_2 = nullptr;
	System::Drawing::Point Temp_3;
	System::Windows::Forms::PictureBox^ Temp_4 = nullptr;
	System::Drawing::Size Temp_5;
	System::Windows::Forms::PictureBox^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldc.i4.0
	IL_0005:                                                                        //ldc.i4.0
	IL_0006:            Temp_0=System::Drawing::Point(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_000b:            this->AutoScrollPosition=Temp_0;                            //call				void System::Windows::Forms::ScrollableControl::set_AutoScrollPosition(System::Drawing::Point)
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldc.i4.s				40
	IL_0013:                                                                        //ldc.i4.s				40
	IL_0015:            Temp_1=System::Drawing::Size(safe_cast<System::Int32>(40),safe_cast<System::Int32>(40));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_001a:            this->AutoScrollMargin=Temp_1;                              //call				void System::Windows::Forms::ScrollableControl::set_AutoScrollMargin(System::Drawing::Size)
	IL_001f:                                                                        //ldarg.0
	IL_0020:            Temp_2=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_0025:                                                                        //ldc.i4.s				20
	IL_0027:                                                                        //ldc.i4.s				20
	IL_0029:            Temp_3=System::Drawing::Point(safe_cast<System::Int32>(20),safe_cast<System::Int32>(20));//newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_002e:            Temp_2->Location=Temp_3;                                    //callvirt				void System::Windows::Forms::Control::set_Location(System::Drawing::Point)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_4=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_5=A_0->Size;                                           //callvirt				System::Drawing::Size System::Drawing::Image::get_Size()
	IL_003f:            Temp_4->Size=Temp_5;                                        //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_6=this->F_x1;                                          //ldfld				System::Windows::Forms::PictureBox^ Root::T_x88::T_x13 F_x1
	IL_004a:                                                                        //ldarg.1
	IL_004b:            Temp_6->Image=A_0;                                          //callvirt				void System::Windows::Forms::PictureBox::set_Image(System::Drawing::Image^)
	IL_0050:            return;                                                     //ret

}
inline Root::T_x88::T_x2::T_x2(Reflector::ICommandBarManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ColumnHeader^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::ColumnHeader^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Windows::Forms::ColumnHeader^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Windows::Forms::ImageList^ Temp_12 = nullptr;
	System::Windows::Forms::ImageList^ Temp_13 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_14 = nullptr;
	System::Drawing::Image^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Windows::Forms::ImageList^ Temp_17 = nullptr;
	System::Windows::Forms::ImageList^ Temp_18 = nullptr;
	System::Drawing::Color Temp_19;
	Reflector::ICommandBarCollection^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	Reflector::ICommandBar^ Temp_22 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Drawing::Image^ Temp_25 = nullptr;
	System::EventHandler^ Temp_26 = nullptr;
	Reflector::ICommandBarButton^ Temp_27 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_28 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_29 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Drawing::Image^ Temp_32 = nullptr;
	System::EventHandler^ Temp_33 = nullptr;
	Reflector::ICommandBarButton^ Temp_34 = nullptr;
	//local variables.
	System::Windows::Forms::ColumnHeader^ V_0 = nullptr;
	System::Windows::Forms::ColumnHeader^ V_1 = nullptr;
	System::Windows::Forms::ColumnHeader^ V_2 = nullptr;
	Reflector::ICommandBar^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_4=11;                                                     //stloc				V_4
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::ListView();*/                     //call				void System::Windows::Forms::ListView::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldc.i4.5
	IL_0011:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->View=safe_cast<System::Windows::Forms::View>(1);      //call				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldc.i4.1
	IL_001f:            this->MultiSelect=true;                                     //call				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4.1
	IL_0026:            this->AllowColumnReorder=true;                              //call				void System::Windows::Forms::ListView::set_AllowColumnReorder(System::Boolean)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldc.i4.1
	IL_002d:            this->FullRowSelect=true;                                   //call				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_0032:                                                                        //ldarg.0
	IL_0033:                                                                        //ldc.i4.2
	IL_0034:            this->HeaderStyle=safe_cast<System::Windows::Forms::ColumnHeaderStyle>(2);//call				void System::Windows::Forms::ListView::set_HeaderStyle(System::Windows::Forms::ColumnHeaderStyle)
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldc.i4.0
	IL_003b:            this->HideSelection=false;                                  //call				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_0040:            Temp_0=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0045:            V_0=Temp_0;                                                 //stloc.0
	IL_0046:                                                                        //ldloc.0
	IL_0047:                                                                        //ldstr				L"\x6728\x4A2A\x402C\x4A2E"
	IL_004c:                                                                        //ldloc				V_4
	IL_0050:            Temp_1=a(L"\x6728\x4A2A\x402C\x4A2E",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0055:            V_0->Text=Temp_1;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldc.i4				0xf0
	IL_0060:            V_0->Width=240;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0065:                                                                        //ldarg.0
	IL_0066:            Temp_2=this->Columns;                                       //call				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_006b:                                                                        //ldloc.0
	IL_006c:            Temp_3=Temp_2->Add(V_0);                                    //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_0071:                                                                        //pop
	IL_0072:            Temp_4=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_0077:            V_1=Temp_4;                                                 //stloc.1
	IL_0078:                                                                        //ldloc.1
	IL_0079:                                                                        //ldstr				L"\x7F28\x4A2A\x412C\x5A2E\x5430"
	IL_007e:                                                                        //ldloc				V_4
	IL_0082:            Temp_5=a(L"\x7F28\x4A2A\x412C\x5A2E\x5430",V_4);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0087:            V_1->Text=Temp_5;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_008c:                                                                        //ldloc.1
	IL_008d:                                                                        //ldc.i4				0x12c
	IL_0092:            V_1->Width=300;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_6=this->Columns;                                       //call				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_009d:                                                                        //ldloc.1
	IL_009e:            Temp_7=Temp_6->Add(V_1);                                    //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_00a3:                                                                        //pop
	IL_00a4:            Temp_8=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_00a9:            V_2=Temp_8;                                                 //stloc.2
	IL_00aa:                                                                        //ldloc.2
	IL_00ab:                                                                        //ldstr				L"\x7D28\x522A\x5D2C\x4A2E"
	IL_00b0:                                                                        //ldloc				V_4
	IL_00b4:            Temp_9=a(L"\x7D28\x522A\x5D2C\x4A2E",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b9:            V_2->Text=Temp_9;                                           //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_00be:                                                                        //ldloc.2
	IL_00bf:                                                                        //ldc.i4				0x1f4
	IL_00c4:            V_2->Width=500;                                             //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:            Temp_10=this->Columns;                                      //call				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_00cf:                                                                        //ldloc.2
	IL_00d0:            Temp_11=Temp_10->Add(V_2);                                  //callvirt				System::Int32 System::Windows::Forms::ListView::ColumnHeaderCollection::Add(System::Windows::Forms::ColumnHeader^)
	IL_00d5:                                                                        //pop
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            Temp_12=gcnew System::Windows::Forms::ImageList();          //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_00dc:            this->SmallImageList=Temp_12;                               //call				void System::Windows::Forms::ListView::set_SmallImageList(System::Windows::Forms::ImageList^)
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:            Temp_13=this->SmallImageList;                               //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_00e7:            Temp_14=Temp_13->Images;                                    //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_00ec:            Temp_15=Root::T_x117::M_x1();                               //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_00f1:            Temp_16=Temp_14->AddStrip(Temp_15);                         //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_00f6:                                                                        //pop
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:            Temp_17=this->SmallImageList;                               //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_00fd:                                                                        //ldc.i4.s				32
	IL_00ff:            Temp_17->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_0104:                                                                        //ldarg.0
	IL_0105:            Temp_18=this->SmallImageList;                               //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_010a:                                                                        //ldc.i4				0xff
	IL_010f:                                                                        //ldc.i4.0
	IL_0110:                                                                        //ldc.i4				0x80
	IL_0115:                                                                        //ldc.i4.0
	IL_0116:            Temp_19=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_011b:            Temp_18->TransparentColor=Temp_19;                          //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_0120:                                                                        //ldarg.1
	IL_0121:            Temp_20=A_0->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0126:                                                                        //ldstr				L"\x7B28\x4E2A\x5E2C\x402E\x4430\x4132\x5634\x5236\x6F38\x523A\x583C\x483E\x2440\x3142"
	IL_012b:                                                                        //ldloc				V_4
	IL_012f:            Temp_21=a(L"\x7B28\x4E2A\x5E2C\x402E\x4430\x4132\x5634\x5236\x6F38\x523A\x583C\x483E\x2440\x3142",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0134:            Temp_22=Temp_20->AddContextMenu(Temp_21);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0139:            V_3=Temp_22;                                                //stloc.3
	IL_013a:                                                                        //ldloc.3
	IL_013b:            Temp_23=V_3->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0140:                                                                        //ldstr				L"\x0F28\x682A\x422C\x5F2E\x4830"
	IL_0145:                                                                        //ldloc				V_4
	IL_0149:            Temp_24=a(L"\x0F28\x682A\x422C\x5F2E\x4830",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014e:            Temp_25=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0153:                                                                        //ldarg.0
	IL_0154:                                                                        //ldftn				void Root::T_x88::T_x2::M_x2(System::Object^,System::EventArgs^)
	IL_015a:            Temp_26=gcnew System::EventHandler(this,&Root::T_x88::T_x2::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_015f:                                                                        //ldc.i4				0x20043
	IL_0164:            Temp_27=Temp_23->AddButton(Temp_24,Temp_25,Temp_26,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0169:                                                                        //pop
	IL_016a:                                                                        //ldloc.3
	IL_016b:            Temp_28=V_3->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0170:            Temp_29=Temp_28->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0175:                                                                        //pop
	IL_0176:                                                                        //ldarg.0
	IL_0177:                                                                        //ldloc.3
	IL_0178:            Temp_30=V_3->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_017d:                                                                        //ldstr				L"\x7A28\x4A2A\x5B2C\x4A2E\x1130\x1532\x7434\x4436\x1738\x153A\x133C"
	IL_0182:                                                                        //ldloc				V_4
	IL_0186:            Temp_31=a(L"\x7A28\x4A2A\x5B2C\x4A2E\x1130\x1532\x7434\x4436\x1738\x153A\x133C",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018b:            Temp_32=Root::T_x106::M_x17();                              //call				System::Drawing::Image^ Root::T_x106::M_x17()
	IL_0190:                                                                        //ldarg.0
	IL_0191:                                                                        //ldftn				void Root::T_x88::T_x2::M_x1(System::Object^,System::EventArgs^)
	IL_0197:            Temp_33=gcnew System::EventHandler(this,&Root::T_x88::T_x2::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_019c:            Temp_34=Temp_30->AddButton(Temp_31,Temp_32,Temp_33);        //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^)
	IL_01a1:            this->F_x2=safe_cast<Reflector::ICommandBarItem^>(Temp_34); //stfld				Reflector::ICommandBarItem^ Root::T_x88::T_x2 F_x2
	IL_01a6:                                                                        //ldarg.0
	IL_01a7:                                                                        //ldloc.3
	IL_01a8:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_01ad:            this->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_3);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_01b2:            return;                                                     //ret

}
inline Root::T_x127^ Root::T_x88::T_x2::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x127^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x127^ Root::T_x88::T_x2 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline System::String^ Root::T_x88::T_x2::M_x1(array<System::Byte>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_7=2;                                                      //stloc				V_7
	IL_0009:                                                                        //ldc.i4.3
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.3
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0019:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_001e:            V_0=Temp_1;                                                 //stloc.0
	IL_001f:            /*goto IL_0021;*/goto IL_001F01;                            //br.s				IL_0021
	IL_001F01:          try{
	IL_0021:                                                                        //ldc.i4				0xb
	IL_0026:            V_5=11;                                                     //stloc				V_5
	IL_002a:            /*goto IL_002e;*/goto IL_002c;                              //br.s				IL_002e
	IL_002c:            goto IL_0067;                                               //br.s				IL_0067
	IL_002e:                                                                        //ldloc				V_5
	IL_0032:            switch(V_5){case 0:goto IL_00ba;case 1:goto IL_0096;case 2:goto IL_00d0;case 3:goto IL_0106;case 4:goto IL_0078;case 5:goto IL_01e5;case 6:goto IL_00aa;case 7:goto IL_0164;case 8:goto IL_0085;case 9:goto IL_014e;case 10:goto IL_00e2;case 11:goto IL_002c;};//switch				(IL_00ba,IL_0096,IL_00d0,IL_0106,IL_0078,IL_01e5,IL_00aa,IL_0164,IL_0085,IL_014e,IL_00e2,IL_002c)
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_16=A_0->Length;                                        //ldlen
	IL_0069:                                                                        //conv.i4
	IL_006a:                                                                        //ldc.i4.8
	IL_006b:            if(Temp_16>8)goto IL_007a;                                  //bgt.s				IL_007a
	IL_006d:                                                                        //ldc.i4				0x4
	IL_0072:            V_5=4;                                                      //stloc				V_5
	IL_0076:            /*goto IL_002e;*/goto IL_0078;                              //br.s				IL_002e
	IL_0078:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_007a:                                                                        //ldc.i4				0x8
	IL_007f:            V_5=8;                                                      //stloc				V_5
	IL_0083:            /*goto IL_002e;*/goto IL_0085;                              //br.s				IL_002e
	IL_0085:                                                                        //ldc.i4.8
	IL_0086:            Temp_17=8;goto IL_0153;                                     //br				IL_0153
	IL_008b:                                                                        //ldc.i4				0x1
	IL_0090:            V_5=1;                                                      //stloc				V_5
	IL_0094:            /*goto IL_002e;*/goto IL_0096;                              //br.s				IL_002e
	IL_0096:                                                                        //ldarg.0
	IL_0097:            Temp_3=A_0->Length;                                         //ldlen
	IL_0098:                                                                        //conv.i4
	IL_0099:                                                                        //ldc.i4.8
	IL_009a:            if(Temp_3<=8)goto IL_0169;                                  //ble				IL_0169
	IL_009f:                                                                        //ldc.i4				0x6
	IL_00a4:            V_5=6;                                                      //stloc				V_5
	IL_00a8:            /*goto IL_002e;*/goto IL_00aa;                              //br.s				IL_002e
	IL_00aa:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00ac:                                                                        //ldc.i4				0x0
	IL_00b1:            V_5=0;                                                      //stloc				V_5
	IL_00b5:            /*goto IL_002e;*/goto IL_00ba;                              //br				IL_002e
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_2=A_0->Length;                                         //ldlen
	IL_00bc:                                                                        //conv.i4
	IL_00bd:            Temp_17=Temp_2;goto IL_0153;                                //br				IL_0153
	IL_00c2:                                                                        //ldc.i4				0x2
	IL_00c7:            V_5=2;                                                      //stloc				V_5
	IL_00cb:            /*goto IL_002e;*/goto IL_00d0;                              //br				IL_002e
	IL_00d0:                                                                        //ldloc.2
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:            if(V_2<V_1)goto IL_0108;                                    //blt.s				IL_0108
	IL_00d4:                                                                        //ldc.i4				0xa
	IL_00d9:            V_5=10;                                                     //stloc				V_5
	IL_00dd:            /*goto IL_002e;*/goto IL_00e2;                              //br				IL_002e
	IL_00e2:            goto IL_008b;                                               //br.s				IL_008b
	IL_00e4:                                                                        //ldloc.0
	IL_00e5:                                                                        //ldstr				L"\x0E1F\x0C21\x0A23\x0625"
	IL_00ea:                                                                        //ldloc				V_7
	IL_00ee:            Temp_15=a(L"\x0E1F\x0C21\x0A23\x0625",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f3:            V_0->Write(Temp_15);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00f8:                                                                        //ldc.i4				0x3
	IL_00fd:            V_5=3;                                                      //stloc				V_5
	IL_0101:            /*goto IL_002e;*/goto IL_0106;                              //br				IL_002e
	IL_0106:            goto IL_0169;                                               //br.s				IL_0169
	IL_0108:                                                                        //ldloc.0
	IL_0109:                                                                        //ldarg.0
	IL_010a:                                                                        //ldloc.2
	IL_010b:                                                                        //ldelema				System::Byte
	IL_0110:                                                                        //ldstr				L"\x581F\x1021"
	IL_0115:                                                                        //ldloc				V_7
	IL_0119:            Temp_12=a(L"\x581F\x1021",V_7);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011e:            Temp_13=A_0[V_2].ToString(Temp_12);                         //call				System::String^ System::Byte::ToString(System::String^)
	IL_0123:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0128:                                                                        //ldloc.0
	IL_0129:                                                                        //ldstr				L"\x001F"
	IL_012e:                                                                        //ldloc				V_7
	IL_0132:            Temp_14=a(L"\x001F",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0137:            V_0->Write(Temp_14);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_013c:                                                                        //ldloc.2
	IL_013d:                                                                        //ldc.i4.1
	IL_013e:                                                                        //add
	IL_013f:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0140:                                                                        //ldc.i4				0x9
	IL_0145:            V_5=9;                                                      //stloc				V_5
	IL_0149:            /*goto IL_002e;*/goto IL_014e;                              //br				IL_002e
	IL_014e:            goto IL_00c2;                                               //br				IL_00c2
	IL_0153:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.1
	IL_0154:                                                                        //ldc.i4.0
	IL_0155:            V_2=0;                                                      //stloc.2
	IL_0156:                                                                        //ldc.i4				0x7
	IL_015b:            V_5=7;                                                      //stloc				V_5
	IL_015f:            /*goto IL_002e;*/goto IL_0164;                              //br				IL_002e
	IL_0164:            goto IL_00c2;                                               //br				IL_00c2
	IL_0169:                                                                        //ldloc.0
	IL_016a:                                                                        //ldstr				L"\x081F"
	IL_016f:                                                                        //ldloc				V_7
	IL_0173:            Temp_4=a(L"\x081F",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0178:            V_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_017d:                                                                        //ldloc.0
	IL_017e:                                                                        //ldarg.0
	IL_017f:            Temp_5=A_0->Length;                                         //ldlen
	IL_0180:                                                                        //conv.i4
	IL_0181:            V_4=Temp_5;                                                 //stloc.s				V_4
	IL_0183:                                                                        //ldloca.s				V_4
	IL_0185:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_018a:            Temp_7=V_4.ToString(safe_cast<System::IFormatProvider^>(Temp_6));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_018f:            V_0->Write(Temp_7);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0194:                                                                        //ldloc.0
	IL_0195:                                                                        //ldstr				L"\x001F"
	IL_019a:                                                                        //ldloc				V_7
	IL_019e:            Temp_8=a(L"\x001F",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a3:            V_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01a8:                                                                        //ldloc.0
	IL_01a9:                                                                        //ldstr				L"\x421F\x5B21\x5023\x4325\x5B27"
	IL_01ae:                                                                        //ldloc				V_7
	IL_01b2:            Temp_9=a(L"\x421F\x5B21\x5023\x4325\x5B27",V_7);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b7:            V_0->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01bc:                                                                        //ldloc.0
	IL_01bd:                                                                        //ldstr				L"\x091F"
	IL_01c2:                                                                        //ldloc				V_7
	IL_01c6:            Temp_10=a(L"\x091F",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01cb:            V_0->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01d0:                                                                        //ldloc.0
	IL_01d1:            Temp_11=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01d6:            V_3=Temp_11;                                                //stloc.3
	IL_01d7:                                                                        //ldc.i4				0x5
	IL_01dc:            V_5=5;                                                      //stloc				V_5
	IL_01e0:            /*goto IL_002e;*/goto IL_01e5;                              //br				IL_002e
	IL_01e5:            goto IL_022d;                                               //leave.s				IL_022d
	                    ;}
	                    finally{
	IL_01e7:                                                                        //ldc.i4				0x1
	IL_01ec:            V_6=1;                                                      //stloc				V_6
	IL_01f0:            /*goto IL_01f4;*/goto IL_01f2;                              //br.s				IL_01f4
	IL_01f2:            goto IL_0209;                                               //br.s				IL_0209
	IL_01f4:                                                                        //ldloc				V_6
	IL_01f8:            switch(V_6){case 0:goto IL_022a;case 1:goto IL_01f2;case 2:goto IL_0217;};//switch				(IL_022a,IL_01f2,IL_0217)
	IL_0209:                                                                        //ldloc.0
	IL_020a:            if(V_0==nullptr)goto IL_022c;                               //brfalse.s				IL_022c
	IL_020c:                                                                        //ldc.i4				0x2
	IL_0211:            V_6=2;                                                      //stloc				V_6
	IL_0215:            /*goto IL_01f4;*/goto IL_0217;                              //br.s				IL_01f4
	IL_0217:            goto IL_0219;                                               //br.s				IL_0219
	IL_0219:                                                                        //ldloc.0
	IL_021a:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_021f:                                                                        //ldc.i4				0x0
	IL_0224:            V_6=0;                                                      //stloc				V_6
	IL_0228:            /*goto IL_01f4;*/goto IL_022a;                              //br.s				IL_01f4
	IL_022a:            goto IL_022c;                                               //br.s				IL_022c
	IL_022c:                                                                        //endfinally
	                    ;}
	IL_022d:                                                                        //ldloc.3
	IL_022e:            return V_3;                                                 //ret

}
inline void Root::T_x88::T_x2::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::ListView^::OnItemActivate by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::IO::FileStream^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	array<System::Byte>^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Diagnostics::Process^ Temp_16 = nullptr;
	System::Globalization::CultureInfo^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	array<System::Object^>^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Windows::Forms::DialogResult Temp_23 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Windows::Forms::DialogResult Temp_27 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	Root::T_x126^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::IO::Stream^ V_3 = nullptr;
	array<System::Byte>^ V_4 = nullptr;
	System::Exception^ V_5 = nullptr;
	array<System::Object^>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_8=6;                                                      //stloc				V_8
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_7=1;                                                      //stloc				V_7
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0033;                                               //br.s				IL_0033
	IL_0016:                                                                        //ldloc				V_7
	IL_001a:            switch(V_7){case 0:goto IL_01c6;case 1:goto IL_0014;case 2:goto IL_004f;case 3:goto IL_019d;case 4:goto IL_0171;};//switch				(IL_01c6,IL_0014,IL_004f,IL_019d,IL_0171)
	IL_0033:                                                                        //ldarg.0
	IL_0034:            Temp_14=this->SelectedItems;                                //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0039:            Temp_15=Temp_14->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_003e:                                                                        //ldc.i4.1
	IL_003f:            if(Temp_15!=1)goto IL_01cb;                                 //bne.un				IL_01cb
	IL_0044:                                                                        //ldc.i4				0x2
	IL_0049:            V_7=2;                                                      //stloc				V_7
	IL_004d:            /*goto IL_0016;*/goto IL_004f;                              //br.s				IL_0016
	IL_004f:            goto IL_0176;                                               //br				IL_0176
	IL_004F01:          try{
	IL_0054:                                                                        //ldloc.2
	IL_0055:            Temp_10=System::IO::File::Create(V_2);                      //call				System::IO::FileStream^ System::IO::File::Create(System::String^)
	IL_005a:            V_3=safe_cast<System::IO::Stream^>(Temp_10);                //stloc.3
	IL_005b:            /*goto IL_005d;*/goto IL_005B01;                            //br.s				IL_005d
	IL_005B01:          try{
	IL_005d:                                                                        //ldloc.1
	IL_005e:            Temp_11=V_1->M_x2();                                        //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_0063:            Temp_12=Root::T_x88::T_x2::M_x2(Temp_11);                   //call				array<System::Byte>^ Root::T_x88::T_x2::M_x2(System::Object^)
	IL_0068:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_006a:                                                                        //ldloc.3
	IL_006b:                                                                        //ldloc.s				V_4
	IL_006d:                                                                        //ldc.i4.0
	IL_006e:                                                                        //ldloc.s				V_4
	IL_0070:            Temp_13=V_4->Length;                                        //ldlen
	IL_0071:                                                                        //conv.i4
	IL_0072:            V_3->Write(V_4,safe_cast<System::Int32>(0),Temp_13);        //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_0077:            goto IL_00bf;                                               //leave.s				IL_00bf
	                    ;}
	                    finally{
	IL_0079:                                                                        //ldc.i4				0x1
	IL_007e:            V_7=1;                                                      //stloc				V_7
	IL_0082:            /*goto IL_0086;*/goto IL_0084;                              //br.s				IL_0086
	IL_0084:            goto IL_009b;                                               //br.s				IL_009b
	IL_0086:                                                                        //ldloc				V_7
	IL_008a:            switch(V_7){case 0:goto IL_00a9;case 1:goto IL_0084;case 2:goto IL_00bc;};//switch				(IL_00a9,IL_0084,IL_00bc)
	IL_009b:                                                                        //ldloc.3
	IL_009c:            if(V_3==nullptr)goto IL_00be;                               //brfalse.s				IL_00be
	IL_009e:                                                                        //ldc.i4				0x0
	IL_00a3:            V_7=0;                                                      //stloc				V_7
	IL_00a7:            /*goto IL_0086;*/goto IL_00a9;                              //br.s				IL_0086
	IL_00a9:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_00ab:                                                                        //ldloc.3
	IL_00ac:            /*safe_cast<System::IDisposable^>(V_3)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_00b1:                                                                        //ldc.i4				0x2
	IL_00b6:            V_7=2;                                                      //stloc				V_7
	IL_00ba:            /*goto IL_0086;*/goto IL_00bc;                              //br.s				IL_0086
	IL_00bc:            goto IL_00be;                                               //br.s				IL_00be
	IL_00be:                                                                        //endfinally
	                    ;}
	IL_00BE02:          try{
	IL_00bf:                                                                        //ldloc.2
	IL_00c0:            Temp_16=System::Diagnostics::Process::Start(V_2);           //call				System::Diagnostics::Process^ System::Diagnostics::Process::Start(System::String^)
	IL_00c5:                                                                        //pop
	IL_00c6:            goto IL_010f;                                               //leave.s				IL_010f
	                    ;}
	                    catch(System::ComponentModel::Win32Exception^ Ex_00C602){
	IL_00c8:                                                                        //pop
	IL_00c9:                                                                        //ldnull
	IL_00ca:            Temp_17=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00cf:                                                                        //ldstr				L"\x6223\x4725\x4127\x4629\x492B\x4A2D\x102F\x4631\x5B33\x1635\x5437\x5B39\x493B\x503D\x233F\x2A41\x6443\x6145\x3347\x7A49\x314B\x694D\x7E4F"
	IL_00d4:                                                                        //ldloc				V_8
	IL_00d8:            Temp_18=a(L"\x6223\x4725\x4127\x4629\x492B\x4A2D\x102F\x4631\x5B33\x1635\x5437\x5B39\x493B\x503D\x233F\x2A41\x6443\x6145\x3347\x7A49\x314B\x694D\x7E4F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dd:                                                                        //ldc.i4.1
	IL_00de:            Temp_19=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_00e3:            V_6=Temp_19;                                                //stloc.s				V_6
	IL_00e5:                                                                        //ldloc.s				V_6
	IL_00e7:                                                                        //ldc.i4.0
	IL_00e8:                                                                        //ldloc.2
	IL_00e9:            V_6[0]=safe_cast<System::Object^>(V_2);                     //stelem.ref
	IL_00ea:                                                                        //ldloc.s				V_6
	IL_00ec:            Temp_20=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_17),Temp_18,V_6);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00f1:                                                                        //ldstr				L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F"
	IL_00f6:                                                                        //ldloc				V_8
	IL_00fa:            Temp_21=a(L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ff:            Temp_22=Root::T_x128::M_x1(Temp_21);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0104:                                                                        //ldc.i4.0
	IL_0105:                                                                        //ldc.i4.s				16
	IL_0107:            Temp_23=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_20,Temp_22,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_010c:                                                                        //pop
	IL_010d:            goto IL_010f;                                               //leave.s				IL_010f
	                    ;}
	IL_010f:            goto IL_01cb;                                               //leave				IL_01cb
	                    ;}
	                    catch(System::Exception^ Ex_010F02){
	IL_0114:            V_5=Ex_010F02;                                              //stloc.s				V_5
	IL_0116:                                                                        //ldnull
	IL_0117:                                                                        //ldloc.s				V_5
	IL_0119:            Temp_24=V_5->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_011e:                                                                        //ldstr				L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F"
	IL_0123:                                                                        //ldloc				V_8
	IL_0127:            Temp_25=a(L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012c:            Temp_26=Root::T_x128::M_x1(Temp_25);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0131:                                                                        //ldc.i4.0
	IL_0132:                                                                        //ldc.i4.s				16
	IL_0134:            Temp_27=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_24,Temp_26,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0139:                                                                        //pop
	IL_013a:            goto IL_01cb;                                               //leave				IL_01cb
	                    ;}
	IL_013f:                                                                        //ldstr				L"\x0123\x7225\x6D27\x6729\x7C2B\x0B2D"
	IL_0144:                                                                        //ldloc				V_8
	IL_0148:            Temp_0=a(L"\x0123\x7225\x6D27\x6729\x7C2B\x0B2D",V_8);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014d:                                                                        //ldloc.1
	IL_014e:            Temp_1=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x126::M_x12()
	IL_0153:            Temp_2=Root::T_x88::T_x2::M_x2(Temp_1);                     //call				System::String^ Root::T_x88::T_x2::M_x2(System::String^)
	IL_0158:            Temp_3=System::IO::Path::Combine(Temp_0,Temp_2);            //call				System::String^ System::IO::Path::Combine(System::String^,System::String^)
	IL_015d:            Temp_4=System::Environment::ExpandEnvironmentVariables(Temp_3);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0162:            V_2=Temp_4;                                                 //stloc.2
	IL_0163:                                                                        //ldc.i4				0x4
	IL_0168:            V_7=4;                                                      //stloc				V_7
	IL_016c:            /*goto IL_0016;*/goto IL_0171;                              //br				IL_0016
	IL_0171:            /*goto IL_0054;*/goto IL_004F01;                            //br				IL_0054
	IL_0176:                                                                        //ldarg.0
	IL_0177:            Temp_5=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_017c:                                                                        //ldc.i4.0
	IL_017d:            Temp_6=Temp_5[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0182:            V_0=Temp_6;                                                 //stloc.0
	IL_0183:                                                                        //ldloc.0
	IL_0184:            Temp_7=V_0->Tag;                                            //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0189:                                                                        //castclass				Root::T_x126
	IL_018e:            V_1=safe_cast<Root::T_x126^>(Temp_7);                       //stloc.1
	IL_018f:                                                                        //ldc.i4				0x3
	IL_0194:            V_7=3;                                                      //stloc				V_7
	IL_0198:            /*goto IL_0016;*/goto IL_019d;                              //br				IL_0016
	IL_019d:                                                                        //ldc.i4.4
	IL_019e:                                                                        //dup
	IL_019f:                                                                        //dup
	IL_01a0:                                                                        //ldc.i4.2
	IL_01a1:                                                                        //sub
	IL_01a2:                                                                        //blt				IL_019e
	IL_01a7:                                                                        //pop
	IL_01a8:                                                                        //ldloc.1
	IL_01a9:            Temp_8=V_1->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_01ae:            Temp_9=Root::T_x88::T_x2::M_x1(Temp_8);                     //call				System::Boolean Root::T_x88::T_x2::M_x1(System::Object^)
	IL_01b3:            if(!Temp_9)goto IL_01cb;                                    //brfalse				IL_01cb
	IL_01b8:                                                                        //ldc.i4				0x0
	IL_01bd:            V_7=0;                                                      //stloc				V_7
	IL_01c1:            /*goto IL_0016;*/goto IL_01c6;                              //br				IL_0016
	IL_01c6:            goto IL_013f;                                               //br				IL_013f
	IL_01cb:            return;                                                     //ret

}
inline System::Boolean Root::T_x88::T_x2::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Type^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_1=18;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_0=2;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_005a;case 1:goto IL_00a2;case 2:goto IL_0014;case 3:goto IL_0074;};//switch				(IL_005a,IL_00a2,IL_0014,IL_0074)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_4=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0035:            Temp_5=Temp_4->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_003a:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x773D\x0F3F\x6C41\x0943\x2345\x2547\x2549\x3E4B\x374D\x034F\x2651\x2653\x3355\x3957\x3759"
	IL_003f:                                                                        //ldloc				V_1
	IL_0043:            Temp_6=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x773D\x0F3F\x6C41\x0943\x2345\x2547\x2549\x3E4B\x374D\x034F\x2651\x2653\x3355\x3957\x3759",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0048:            Temp_7=(Temp_5 == Temp_6);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_004d:            if(Temp_7)goto IL_0067;                                     //brtrue.s				IL_0067
	IL_004f:                                                                        //ldc.i4				0x0
	IL_0054:            V_0=0;                                                      //stloc				V_0
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:                                                                        //ldc.i4.2
	IL_005b:                                                                        //dup
	IL_005c:                                                                        //dup
	IL_005d:                                                                        //ldc.i4.7
	IL_005e:                                                                        //add
	IL_005f:                                                                        //bgt				IL_005b
	IL_0064:                                                                        //pop
	IL_0065:            goto IL_0069;                                               //br.s				IL_0069
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:            return true;                                                //ret
	IL_0069:                                                                        //ldc.i4				0x3
	IL_006e:            V_0=3;                                                      //stloc				V_0
	IL_0072:            /*goto IL_0016;*/goto IL_0074;                              //br.s				IL_0016
	IL_0074:                                                                        //ldarg.0
	IL_0075:            Temp_0=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_007a:            Temp_1=Temp_0->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_007f:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x7C3D\x393F\x3641\x2143\x1D45\x1547"
	IL_0084:                                                                        //ldloc				V_1
	IL_0088:            Temp_2=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739\x123B\x7C3D\x393F\x3641\x2143\x1D45\x1547",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008d:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0092:            if(!Temp_3)goto IL_00a4;                                    //brfalse.s				IL_00a4
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_0=1;                                                      //stloc				V_0
	IL_009d:            /*goto IL_0016;*/goto IL_00a2;                              //br				IL_0016
	IL_00a2:            goto IL_0067;                                               //br.s				IL_0067
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:            return false;                                               //ret

}
inline void Root::T_x88::T_x2::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_0 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Windows::Forms::DialogResult Temp_3 = (System::Windows::Forms::DialogResult)0;
	System::IO::Stream^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	array<System::Byte>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Windows::Forms::SaveFileDialog^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	array<System::String^>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Globalization::CultureInfo^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Globalization::CultureInfo^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Object^ Temp_25 = nullptr;
	System::Object^ Temp_26 = nullptr;
	System::Boolean Temp_27 = false;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_28 = nullptr;
	System::Int32 Temp_29 = 0;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::Windows::Forms::DialogResult Temp_33 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::Windows::Forms::DialogResult Temp_37 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::Windows::Forms::DialogResult Temp_41 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	Root::T_x126^ V_1 = nullptr;
	System::Windows::Forms::SaveFileDialog^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Windows::Forms::DialogResult V_4 = (System::Windows::Forms::DialogResult)0;
	System::ArgumentException^ V_5 = nullptr;
	System::InvalidOperationException^ V_6 = nullptr;
	System::IO::Stream^ V_7 = nullptr;
	array<System::Byte>^ V_8 = nullptr;
	System::UnauthorizedAccessException^ V_9 = nullptr;
	array<System::String^>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_12=9;                                                     //stloc				V_12
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_11=2;                                                     //stloc				V_11
	IL_0012:            /*goto IL_0021;*/goto IL_0014;                              //br.s				IL_0021
	IL_0014:                                                                        //ldc.i4.5
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //dup
	IL_0017:                                                                        //ldc.i4.6
	IL_0018:                                                                        //add
	IL_0019:                                                                        //bgt				IL_0015
	IL_001e:                                                                        //pop
	IL_001f:            goto IL_004e;                                               //br.s				IL_004e
	IL_0021:                                                                        //ldloc				V_11
	IL_0025:            switch(V_11){case 0:goto IL_006a;case 1:goto IL_02da;case 2:goto IL_0014;case 3:goto IL_019c;case 4:goto IL_007a;case 5:goto IL_008d;case 6:goto IL_00b8;case 7:goto IL_0183;case 8:goto IL_009a;};//switch				(IL_006a,IL_02da,IL_0014,IL_019c,IL_007a,IL_008d,IL_00b8,IL_0183,IL_009a)
	IL_004e:                                                                        //ldarg.0
	IL_004f:            Temp_28=this->SelectedItems;                                //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0054:            Temp_29=Temp_28->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0059:                                                                        //ldc.i4.1
	IL_005a:            if(Temp_29!=1)goto IL_02df;                                 //bne.un				IL_02df
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_11=0;                                                     //stloc				V_11
	IL_0068:            /*goto IL_0021;*/goto IL_006a;                              //br.s				IL_0021
	IL_006a:            goto IL_015c;                                               //br				IL_015c
	IL_006f:                                                                        //ldc.i4				0x4
	IL_0074:            V_11=4;                                                     //stloc				V_11
	IL_0078:            /*goto IL_0021;*/goto IL_007a;                              //br.s				IL_0021
	IL_007a:                                                                        //ldloc.s				V_4
	IL_007c:                                                                        //ldc.i4.1
	IL_007d:            if(safe_cast<System::Int32>(V_4)!=1)goto IL_02df;           //bne.un				IL_02df
	IL_0082:                                                                        //ldc.i4				0x5
	IL_0087:            V_11=5;                                                     //stloc				V_11
	IL_008b:            /*goto IL_0021;*/goto IL_008d;                              //br.s				IL_0021
	IL_008d:            /*goto IL_00bd;*/goto IL_00B801;                            //br.s				IL_00bd
	IL_008f:                                                                        //ldc.i4				0x8
	IL_0094:            V_11=8;                                                     //stloc				V_11
	IL_0098:            /*goto IL_0021;*/goto IL_009a;                              //br.s				IL_0021
	IL_009a:                                                                        //ldloc.1
	IL_009b:            Temp_26=V_1->M_x2();                                        //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_00a0:            Temp_27=Root::T_x88::T_x2::M_x1(Temp_26);                   //call				System::Boolean Root::T_x88::T_x2::M_x1(System::Object^)
	IL_00a5:            if(!Temp_27)goto IL_02df;                                   //brfalse				IL_02df
	IL_00aa:                                                                        //ldc.i4				0x6
	IL_00af:            V_11=6;                                                     //stloc				V_11
	IL_00b3:            /*goto IL_0021;*/goto IL_00b8;                              //br				IL_0021
	IL_00b8:            goto IL_0204;                                               //br				IL_0204
	IL_00B801:          try{
	IL_00bd:                                                                        //ldloc.2
	IL_00be:            Temp_4=V_2->OpenFile();                                     //callvirt				System::IO::Stream^ System::Windows::Forms::SaveFileDialog::OpenFile()
	IL_00c3:            V_7=Temp_4;                                                 //stloc.s				V_7
	IL_00c5:            /*goto IL_00c7;*/goto IL_00C501;                            //br.s				IL_00c7
	IL_00C501:          try{
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_5=V_1->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_00cd:            Temp_6=Root::T_x88::T_x2::M_x2(Temp_5);                     //call				array<System::Byte>^ Root::T_x88::T_x2::M_x2(System::Object^)
	IL_00d2:            V_8=Temp_6;                                                 //stloc.s				V_8
	IL_00d4:                                                                        //ldloc.s				V_7
	IL_00d6:                                                                        //ldloc.s				V_8
	IL_00d8:                                                                        //ldc.i4.0
	IL_00d9:                                                                        //ldloc.s				V_8
	IL_00db:            Temp_7=V_8->Length;                                         //ldlen
	IL_00dc:                                                                        //conv.i4
	IL_00dd:            V_7->Write(V_8,safe_cast<System::Int32>(0),Temp_7);         //callvirt				void System::IO::Stream::Write(array<System::Byte>^,System::Int32,System::Int32)
	IL_00e2:            goto IL_012c;                                               //leave.s				IL_012c
	                    ;}
	                    finally{
	IL_00e4:                                                                        //ldc.i4				0x0
	IL_00e9:            V_11=0;                                                     //stloc				V_11
	IL_00ed:            /*goto IL_00f1;*/goto IL_00ef;                              //br.s				IL_00f1
	IL_00ef:            goto IL_0106;                                               //br.s				IL_0106
	IL_00f1:                                                                        //ldloc				V_11
	IL_00f5:            switch(V_11){case 0:goto IL_00ef;case 1:goto IL_0115;case 2:goto IL_0129;};//switch				(IL_00ef,IL_0115,IL_0129)
	IL_0106:                                                                        //ldloc.s				V_7
	IL_0108:            if(V_7==nullptr)goto IL_012b;                               //brfalse.s				IL_012b
	IL_010a:                                                                        //ldc.i4				0x1
	IL_010f:            V_11=1;                                                     //stloc				V_11
	IL_0113:            /*goto IL_00f1;*/goto IL_0115;                              //br.s				IL_00f1
	IL_0115:            goto IL_0117;                                               //br.s				IL_0117
	IL_0117:                                                                        //ldloc.s				V_7
	IL_0119:            /*safe_cast<System::IDisposable^>(V_7)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_011e:                                                                        //ldc.i4				0x2
	IL_0123:            V_11=2;                                                     //stloc				V_11
	IL_0127:            /*goto IL_00f1;*/goto IL_0129;                              //br.s				IL_00f1
	IL_0129:            goto IL_012b;                                               //br.s				IL_012b
	IL_012b:                                                                        //endfinally
	                    ;}
	IL_012c:            goto IL_02df;                                               //leave				IL_02df
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_012C02){
	IL_0131:            V_9=Ex_012C02;                                              //stloc.s				V_9
	IL_0133:                                                                        //ldnull
	IL_0134:                                                                        //ldloc.s				V_9
	IL_0136:            Temp_30=V_9->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_013b:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_0140:                                                                        //ldloc				V_12
	IL_0144:            Temp_31=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0149:            Temp_32=Root::T_x128::M_x1(Temp_31);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_014e:                                                                        //ldc.i4.0
	IL_014f:                                                                        //ldc.i4.s				16
	IL_0151:            Temp_33=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_30,Temp_32,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0156:                                                                        //pop
	IL_0157:            goto IL_02df;                                               //leave				IL_02df
	                    ;}
	IL_015c:                                                                        //ldarg.0
	IL_015d:            Temp_0=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0162:                                                                        //ldc.i4.0
	IL_0163:            Temp_1=Temp_0[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0168:            V_0=Temp_1;                                                 //stloc.0
	IL_0169:                                                                        //ldloc.0
	IL_016a:            Temp_2=V_0->Tag;                                            //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_016f:                                                                        //castclass				Root::T_x126
	IL_0174:            V_1=safe_cast<Root::T_x126^>(Temp_2);                       //stloc.1
	IL_0175:                                                                        //ldc.i4				0x7
	IL_017a:            V_11=7;                                                     //stloc				V_11
	IL_017e:            /*goto IL_0021;*/goto IL_0183;                              //br				IL_0021
	IL_0183:                                                                        //ldloc.1
	IL_0184:            Temp_25=V_1->M_x2();                                        //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_0189:            if(Temp_25==nullptr)goto IL_02df;                           //brfalse				IL_02df
	IL_018e:                                                                        //ldc.i4				0x3
	IL_0193:            V_11=3;                                                     //stloc				V_11
	IL_0197:            /*goto IL_0021;*/goto IL_019c;                              //br				IL_0021
	IL_019c:            goto IL_008f;                                               //br				IL_008f
	IL_019C01:          try{
	IL_01a1:                                                                        //ldloc.2
	IL_01a2:            Temp_3=V_2->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::CommonDialog::ShowDialog()
	IL_01a7:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_01a9:            goto IL_006f;                                               //leave				IL_006f
	                    ;}
	                    catch(System::ArgumentException^ Ex_01A902){
	IL_01ae:            V_5=Ex_01A902;                                              //stloc.s				V_5
	IL_01b0:                                                                        //ldnull
	IL_01b1:                                                                        //ldloc.s				V_5
	IL_01b3:            Temp_34=V_5->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_01b8:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_01bd:                                                                        //ldloc				V_12
	IL_01c1:            Temp_35=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c6:            Temp_36=Root::T_x128::M_x1(Temp_35);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01cb:                                                                        //ldc.i4.0
	IL_01cc:                                                                        //ldc.i4.s				16
	IL_01ce:            Temp_37=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_34,Temp_36,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01d3:                                                                        //pop
	IL_01d4:            goto IL_006f;                                               //leave				IL_006f
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_01D402){
	IL_01d9:            V_6=Ex_01D402;                                              //stloc.s				V_6
	IL_01db:                                                                        //ldnull
	IL_01dc:                                                                        //ldloc.s				V_6
	IL_01de:            Temp_38=V_6->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_01e3:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_01e8:                                                                        //ldloc				V_12
	IL_01ec:            Temp_39=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f1:            Temp_40=Root::T_x128::M_x1(Temp_39);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01f6:                                                                        //ldc.i4.0
	IL_01f7:                                                                        //ldc.i4.s				16
	IL_01f9:            Temp_41=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_38,Temp_40,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01fe:                                                                        //pop
	IL_01ff:            goto IL_006f;                                               //leave				IL_006f
	                    ;}
	IL_0204:            Temp_8=gcnew System::Windows::Forms::SaveFileDialog();      //newobj				void System::Windows::Forms::SaveFileDialog::.ctor()
	IL_0209:            V_2=Temp_8;                                                 //stloc.2
	IL_020a:                                                                        //ldloc.2
	IL_020b:                                                                        //ldstr				L"\x7426\x4828\x5D2A\x482C\x0F2E\x7030\x4032"
	IL_0210:                                                                        //ldloc				V_12
	IL_0214:            Temp_9=a(L"\x7426\x4828\x5D2A\x482C\x0F2E\x7030\x4032",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0219:            V_2->Title=Temp_9;                                          //callvirt				void System::Windows::Forms::FileDialog::set_Title(System::String^)
	IL_021e:                                                                        //ldloc.1
	IL_021f:            Temp_10=V_1->M_x12();                                       //callvirt				System::String^ Root::T_x126::M_x12()
	IL_0224:            Temp_11=Root::T_x88::T_x2::M_x1(Temp_10);                   //call				System::String^ Root::T_x88::T_x2::M_x1(System::String^)
	IL_0229:            V_3=Temp_11;                                                //stloc.3
	IL_022a:                                                                        //ldloc.2
	IL_022b:                                                                        //ldc.i4.7
	IL_022c:            Temp_12=gcnew array<System::String^>(7);                    //newarr				System::String
	IL_0231:            V_10=Temp_12;                                               //stloc.s				V_10
	IL_0233:                                                                        //ldloc.s				V_10
	IL_0235:                                                                        //ldc.i4.0
	IL_0236:                                                                        //ldloc.3
	IL_0237:                                                                        //ldc.i4.1
	IL_0238:                                                                        //ldc.i4.1
	IL_0239:            Temp_13=V_3->Substring(safe_cast<System::Int32>(1),safe_cast<System::Int32>(1));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_023e:            Temp_14=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0243:            Temp_15=Temp_13->ToUpper(Temp_14);                          //callvirt				System::String^ System::String::ToUpper(System::Globalization::CultureInfo^)
	IL_0248:            V_10[0]=Temp_15;                                            //stelem.ref
	IL_0249:                                                                        //ldloc.s				V_10
	IL_024b:                                                                        //ldc.i4.1
	IL_024c:                                                                        //ldloc.3
	IL_024d:                                                                        //ldc.i4.2
	IL_024e:            Temp_16=V_3->Substring(safe_cast<System::Int32>(2));        //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0253:            Temp_17=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0258:            Temp_18=Temp_16->ToLower(Temp_17);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_025d:            V_10[1]=Temp_18;                                            //stelem.ref
	IL_025e:                                                                        //ldloc.s				V_10
	IL_0260:                                                                        //ldc.i4.2
	IL_0261:                                                                        //ldstr				L"\x0726\x4F28\x422A\x412C\x4A2E\x4230\x1332\x1D34\x1D36"
	IL_0266:                                                                        //ldloc				V_12
	IL_026a:            Temp_19=a(L"\x0726\x4F28\x422A\x412C\x4A2E\x4230\x1332\x1D34\x1D36",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_026f:            V_10[2]=Temp_19;                                            //stelem.ref
	IL_0270:                                                                        //ldloc.s				V_10
	IL_0272:                                                                        //ldc.i4.3
	IL_0273:                                                                        //ldloc.3
	IL_0274:            V_10[3]=V_3;                                                //stelem.ref
	IL_0275:                                                                        //ldloc.s				V_10
	IL_0277:                                                                        //ldc.i4.4
	IL_0278:                                                                        //ldstr				L"\x0E26\x5528\x012A"
	IL_027d:                                                                        //ldloc				V_12
	IL_0281:            Temp_20=a(L"\x0E26\x5528\x012A",V_12);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0286:            V_10[4]=Temp_20;                                            //stelem.ref
	IL_0287:                                                                        //ldloc.s				V_10
	IL_0289:                                                                        //ldc.i4.5
	IL_028a:                                                                        //ldloc.3
	IL_028b:            V_10[5]=V_3;                                                //stelem.ref
	IL_028c:                                                                        //ldloc.s				V_10
	IL_028e:                                                                        //ldc.i4.6
	IL_028f:                                                                        //ldstr				L"\x5B26\x6828\x472A\x412C\x0F2E\x5730\x5A32\x5934\x5236\x4A38\x1B3A\x153C\x153E\x6F40\x6942\x6C44\x3B46\x6348\x654A\x674C"
	IL_0294:                                                                        //ldloc				V_12
	IL_0298:            Temp_21=a(L"\x5B26\x6828\x472A\x412C\x0F2E\x5730\x5A32\x5934\x5236\x4A38\x1B3A\x153C\x153E\x6F40\x6942\x6C44\x3B46\x6348\x654A\x674C",V_12);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029d:            V_10[6]=Temp_21;                                            //stelem.ref
	IL_029e:                                                                        //ldloc.s				V_10
	IL_02a0:            Temp_22=System::String::Concat(V_10);                       //call				System::String^ System::String::Concat(array<System::String^>^)
	IL_02a5:            V_2->Filter=Temp_22;                                        //callvirt				void System::Windows::Forms::FileDialog::set_Filter(System::String^)
	IL_02aa:                                                                        //ldloc.2
	IL_02ab:                                                                        //ldloc.1
	IL_02ac:            Temp_23=V_1->M_x12();                                       //callvirt				System::String^ Root::T_x126::M_x12()
	IL_02b1:            Temp_24=Root::T_x88::T_x2::M_x2(Temp_23);                   //call				System::String^ Root::T_x88::T_x2::M_x2(System::String^)
	IL_02b6:            V_2->FileName=Temp_24;                                      //callvirt				void System::Windows::Forms::FileDialog::set_FileName(System::String^)
	IL_02bb:                                                                        //ldloc.2
	IL_02bc:                                                                        //ldc.i4.1
	IL_02bd:            V_2->AddExtension=true;                                     //callvirt				void System::Windows::Forms::FileDialog::set_AddExtension(System::Boolean)
	IL_02c2:                                                                        //ldloc.2
	IL_02c3:                                                                        //ldloc.3
	IL_02c4:            V_2->DefaultExt=V_3;                                        //callvirt				void System::Windows::Forms::FileDialog::set_DefaultExt(System::String^)
	IL_02c9:                                                                        //ldc.i4.0
	IL_02ca:            V_4=safe_cast<System::Windows::Forms::DialogResult>(0);     //stloc.s				V_4
	IL_02cc:                                                                        //ldc.i4				0x1
	IL_02d1:            V_11=1;                                                     //stloc				V_11
	IL_02d5:            /*goto IL_0021;*/goto IL_02da;                              //br				IL_0021
	IL_02da:            /*goto IL_01a1;*/goto IL_019C01;                            //br				IL_01a1
	IL_02df:            return;                                                     //ret

}
inline System::String^ Root::T_x88::T_x2::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0043;case 1:goto IL_0058;case 2:goto IL_0034;};//switch				(IL_0043,IL_0058,IL_0034)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_001f:            V_0=Temp_0;                                                 //stloc.0
	IL_0020:                                                                        //ldarg.0
	IL_0021:                                                                        //ldc.i4.s				46
	IL_0023:            Temp_1=A_0->LastIndexOf(safe_cast<System::Char>((System::Char)46));//callvirt				System::Int32 System::String::LastIndexOf(System::Char)
	IL_0028:            V_1=Temp_1;                                                 //stloc.1
	IL_0029:                                                                        //ldc.i4				0x2
	IL_002e:            V_2=2;                                                      //stloc				V_2
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:                                                                        //ldloc.1
	IL_0035:                                                                        //ldc.i4.m1
	IL_0036:            if(V_1==-1)goto IL_005a;                                    //beq.s				IL_005a
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_2=0;                                                      //stloc				V_2
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_0045;                                               //br.s				IL_0045
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldloc.1
	IL_0047:            Temp_2=A_0->Substring(V_1);                                 //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_004c:            V_0=Temp_2;                                                 //stloc.0
	IL_004d:                                                                        //ldc.i4				0x1
	IL_0052:            V_2=1;                                                      //stloc				V_2
	IL_0056:            /*goto IL_0002;*/goto IL_0058;                              //br.s				IL_0002
	IL_0058:            goto IL_005a;                                               //br.s				IL_005a
	IL_005a:                                                                        //ldloc.0
	IL_005b:            return V_0;                                                 //ret

}
inline void Root::T_x88::T_x2::M_x1(System::Windows::Forms::ColumnClickEventArgs^ A_0)
//System::Windows::Forms::ListView^::OnColumnClick by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x88::T_x2::T_x1^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::ListView::OnColumnClick(A_0);       //call				void System::Windows::Forms::ListView::OnColumnClick(System::Windows::Forms::ColumnClickEventArgs^)
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=A_0->Column;                                         //callvirt				System::Int32 System::Windows::Forms::ColumnClickEventArgs::get_Column()
	IL_0011:            Temp_1=gcnew Root::T_x88::T_x2::T_x1(Temp_0);               //newobj				void Root::T_x88::T_x2::T_x1::.ctor(System::Int32)
	IL_0016:            this->ListViewItemSorter=safe_cast<System::Collections::IComparer^>(Temp_1);//call				void System::Windows::Forms::ListView::set_ListViewItemSorter(System::Collections::IComparer^)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldc.i4.1
	IL_001d:            this->Sorting=safe_cast<System::Windows::Forms::SortOrder>(1);//call				void System::Windows::Forms::ListView::set_Sorting(System::Windows::Forms::SortOrder)
	IL_0022:            return;                                                     //ret

}
inline void Root::T_x88::T_x2::M_x1(Root::T_x127^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_10 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_11 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_17 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_20 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_27 = nullptr;
	System::Type^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_31 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_32 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_33 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_34 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_35 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_36 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_37 = nullptr;
	System::Boolean Temp_38 = false;
	System::Object^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::Object^ Temp_41 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_42 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_43 = nullptr;
	System::Exception^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_46 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_47 = nullptr;
	System::Exception^ Temp_48 = nullptr;
	System::Type^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_51 = nullptr;
	System::Exception^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::Int64 Temp_54 = 0;
	array<System::Byte>^ Temp_55 = nullptr;
	System::Int32 Temp_56 = 0;
	System::Int32 Temp_57 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_60 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_63 = nullptr;
	//local variables.
	System::Collections::IEnumerator^ V_0 = nullptr;
	Root::T_x126^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Object^ V_3 = nullptr;
	System::Windows::Forms::ListViewItem^ V_4 = nullptr;
	System::IO::Stream^ V_5 = nullptr;
	array<System::Byte>^ V_6 = nullptr;
	System::String^ V_7 = nullptr;
	System::String^ V_8 = nullptr;
	System::Int32 V_9 = 0;
	System::Int32 V_10 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_10=3;                                                     //stloc				V_10
	IL_0009:            goto IL_0080;                                               //br.s				IL_0080
	IL_000b:                                                                        //ldloc				V_9
	IL_000f:            switch(V_9){case 0:goto IL_04b3;case 1:goto IL_050d;case 2:goto IL_0232;case 3:goto IL_00b4;case 4:goto IL_038e;case 5:goto IL_0300;case 6:goto IL_0415;case 7:goto IL_02ca;case 8:goto IL_0288;case 9:goto IL_03e2;case 10:goto IL_01f0;case 11:goto IL_03f5;case 12:goto IL_017f;case 13:goto IL_0490;case 14:goto IL_036d;case 15:goto IL_020f;case 16:goto IL_021f;case 17:goto IL_026f;case 18:goto IL_0158;case 19:goto IL_00e6;case 20:goto IL_0137;case 21:goto IL_0440;case 22:goto IL_035d;case 23:goto IL_0477;case 24:goto IL_0344;case 25:goto IL_02dd;case 26:goto IL_016b;};//switch				(IL_04b3,IL_050d,IL_0232,IL_00b4,IL_038e,IL_0300,IL_0415,IL_02ca,IL_0288,IL_03e2,IL_01f0,IL_03f5,IL_017f,IL_0490,IL_036d,IL_020f,IL_021f,IL_026f,IL_0158,IL_00e6,IL_0137,IL_0440,IL_035d,IL_0477,IL_0344,IL_02dd,IL_016b)
	IL_0080:                                                                        //ldarg.0
	IL_0081:                                                                        //ldarg.1
	IL_0082:            this->F_x1=A_0;                                             //stfld				Root::T_x127^ Root::T_x88::T_x2 F_x1
	IL_0087:                                                                        //ldarg.0
	IL_0088:            this->BeginUpdate();                                        //call				void System::Windows::Forms::ListView::BeginUpdate()
	IL_008d:                                                                        //ldarg.0
	IL_008e:                                                                        //ldc.i4.0
	IL_008f:            this->Sorting=safe_cast<System::Windows::Forms::SortOrder>(0);//call				void System::Windows::Forms::ListView::set_Sorting(System::Windows::Forms::SortOrder)
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_0=this->Items;                                         //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_009a:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_009f:                                                                        //ldarg.1
	IL_00a0:            Temp_1=A_0->M_x1();                                         //callvirt				System::Collections::IEnumerator^ Root::T_x127::M_x1()
	IL_00a5:            V_0=Temp_1;                                                 //stloc.0
	IL_00a6:                                                                        //ldc.i4				0x3
	IL_00ab:            V_9=3;                                                      //stloc				V_9
	IL_00af:            /*goto IL_000b;*/goto IL_00b4;                              //br				IL_000b
	IL_00b4:            goto IL_0261;                                               //br				IL_0261
	IL_00b9:                                                                        //ldloc.s				V_4
	IL_00bb:                                                                        //ldc.i4				0xa2
	IL_00c0:            V_4->ImageIndex=162;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_00c5:                                                                        //ldloc.s				V_4
	IL_00c7:            Temp_25=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00cc:                                                                        //ldloc.3
	IL_00cd:            Temp_26=V_3->ToString();                                    //callvirt				System::String^ System::Object::ToString()
	IL_00d2:            Temp_27=Temp_25->Add(Temp_26);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_00d7:                                                                        //pop
	IL_00d8:                                                                        //ldc.i4				0x13
	IL_00dd:            V_9=19;                                                     //stloc				V_9
	IL_00e1:            /*goto IL_000b;*/goto IL_00e6;                              //br				IL_000b
	IL_00e6:            goto IL_041a;                                               //br				IL_041a
	IL_00eb:                                                                        //ldloc.s				V_4
	IL_00ed:            Temp_18=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_00f2:                                                                        //ldstr				L"\x0920\x4D22\x5024\x4B26\x4528\x022A"
	IL_00f7:                                                                        //ldloc				V_10
	IL_00fb:            Temp_19=a(L"\x0920\x4D22\x5024\x4B26\x4528\x022A",V_10);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0100:            Temp_20=Temp_18->Add(Temp_19);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0105:                                                                        //pop
	IL_0106:                                                                        //ldloc.s				V_4
	IL_0108:            Temp_21=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_010d:                                                                        //ldstr				L"\x0C20"
	IL_0112:                                                                        //ldloc				V_10
	IL_0116:            Temp_22=a(L"\x0C20",V_10);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:            Temp_23=Temp_21->Add(Temp_22);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0120:                                                                        //pop
	IL_0121:                                                                        //ldloc.s				V_4
	IL_0123:                                                                        //ldc.i4.0
	IL_0124:            V_4->ImageIndex=0;                                          //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0129:                                                                        //ldc.i4				0x14
	IL_012e:            V_9=20;                                                     //stloc				V_9
	IL_0132:            /*goto IL_000b;*/goto IL_0137;                              //br				IL_000b
	IL_0137:            goto IL_013c;                                               //br				IL_013c
	IL_013c:                                                                        //ldarg.0
	IL_013d:            Temp_10=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0142:                                                                        //ldloc.s				V_4
	IL_0144:            Temp_11=Temp_10->Add(V_4);                                  //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_0149:                                                                        //pop
	IL_014a:                                                                        //ldc.i4				0x12
	IL_014f:            V_9=18;                                                     //stloc				V_9
	IL_0153:            /*goto IL_000b;*/goto IL_0158;                              //br				IL_000b
	IL_0158:            goto IL_0261;                                               //br				IL_0261
	IL_015d:                                                                        //ldc.i4				0x1a
	IL_0162:            V_9=26;                                                     //stloc				V_9
	IL_0166:            /*goto IL_000b;*/goto IL_016b;                              //br				IL_000b
	IL_016b:                                                                        //ldloc.3
	IL_016c:            if(V_3!=nullptr)goto IL_0224;                               //brtrue				IL_0224
	IL_0171:                                                                        //ldc.i4				0xc
	IL_0176:            V_9=12;                                                     //stloc				V_9
	IL_017a:            /*goto IL_000b;*/goto IL_017f;                              //br				IL_000b
	IL_017f:            goto IL_00eb;                                               //br				IL_00eb
	IL_017F01:          try{
	IL_0184:                                                                        //ldloc.s				V_4
	IL_0186:                                                                        //ldc.i4				0x9f
	IL_018b:            V_4->ImageIndex=159;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0190:                                                                        //ldloc.3
	IL_0191:            Temp_30=V_3->ToString();                                    //callvirt				System::String^ System::Object::ToString()
	IL_0196:            V_7=Temp_30;                                                //stloc.s				V_7
	IL_0198:                                                                        //ldloc.s				V_4
	IL_019a:            Temp_31=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_019f:                                                                        //ldloc.s				V_7
	IL_01a1:            Temp_32=Temp_31->Add(V_7);                                  //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_01a6:                                                                        //pop
	IL_01a7:            goto IL_041a;                                               //leave				IL_041a
	                    ;}
	                    catch(System::FormatException^ Ex_01A702){
	IL_01ac:                                                                        //pop
	IL_01ad:                                                                        //ldloc.s				V_4
	IL_01af:                                                                        //ldc.i4				0xa6
	IL_01b4:            V_4->ImageIndex=166;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_01b9:                                                                        //ldloc.s				V_4
	IL_01bb:            Temp_61=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_01c0:                                                                        //ldstr				L"\x0C20"
	IL_01c5:                                                                        //ldloc				V_10
	IL_01c9:            Temp_62=a(L"\x0C20",V_10);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ce:            Temp_63=Temp_61->Add(Temp_62);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_01d3:                                                                        //pop
	IL_01d4:            goto IL_041a;                                               //leave				IL_041a
	                    ;}
	IL_01d9:            goto IL_01dc;                                               //br.s				IL_01dc
	IL_01db:                                                                        //break
	IL_01dc:                                                                        //ldarg.0
	IL_01dd:            this->EndUpdate();                                          //call				void System::Windows::Forms::ListView::EndUpdate()
	IL_01e2:                                                                        //ldc.i4				0xa
	IL_01e7:            V_9=10;                                                     //stloc				V_9
	IL_01eb:            /*goto IL_000b;*/goto IL_01f0;                              //br				IL_000b
	IL_01f0:                                                                        //ldarg.0
	IL_01f1:            Temp_12=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_01f6:            Temp_13=Temp_12->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_01fb:                                                                        //ldc.i4.0
	IL_01fc:            if(Temp_13<=0)goto IL_0512;                                 //ble				IL_0512
	IL_0201:                                                                        //ldc.i4				0xf
	IL_0206:            V_9=15;                                                     //stloc				V_9
	IL_020a:            /*goto IL_000b;*/goto IL_020f;                              //br				IL_000b
	IL_020f:            goto IL_028d;                                               //br.s				IL_028d
	IL_0211:                                                                        //ldc.i4				0x10
	IL_0216:            V_9=16;                                                     //stloc				V_9
	IL_021a:            /*goto IL_000b;*/goto IL_021f;                              //br				IL_000b
	IL_021f:            /*goto IL_0184;*/goto IL_017F01;                            //br				IL_0184
	IL_0224:                                                                        //ldc.i4				0x2
	IL_0229:            V_9=2;                                                      //stloc				V_9
	IL_022d:            /*goto IL_000b;*/goto IL_0232;                              //br				IL_000b
	IL_0232:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x4530\x4132\x5C34\x5936\x5E38"
	IL_0237:                                                                        //ldloc				V_10
	IL_023b:            Temp_6=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x4530\x4132\x5C34\x5936\x5E38",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0240:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x662E\x7E30\x1D32\x7834\x5236\x5438\x543A\x4F3C\x463E\x1240\x3742\x3744\x2246\x2848\x264A"
	IL_0245:                                                                        //ldloc				V_10
	IL_0249:            Temp_7=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x662E\x7E30\x1D32\x7834\x5236\x5438\x543A\x4F3C\x463E\x1240\x3742\x3744\x2246\x2848\x264A",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024e:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6D2E\x4830\x4732\x5034\x6C36\x6438"
	IL_0253:                                                                        //ldloc				V_10
	IL_0257:            Temp_8=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6D2E\x4830\x4732\x5034\x6C36\x6438",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025c:            goto IL_035f;                                               //leave				IL_035f
	IL_0261:                                                                        //ldc.i4				0x11
	IL_0266:            V_9=17;                                                     //stloc				V_9
	IL_026a:            /*goto IL_000b;*/goto IL_026f;                              //br				IL_000b
	IL_026f:                                                                        //ldloc.0
	IL_0270:            Temp_38=V_0->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0275:            if(Temp_38)goto IL_0305;                                    //brtrue				IL_0305
	IL_027a:                                                                        //ldc.i4				0x8
	IL_027f:            V_9=8;                                                      //stloc				V_9
	IL_0283:            /*goto IL_000b;*/goto IL_0288;                              //br				IL_000b
	IL_0288:            goto IL_01d9;                                               //br				IL_01d9
	IL_028d:                                                                        //ldarg.0
	IL_028e:            Temp_33=this->SelectedItems;                                //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0293:            Temp_33->Clear();                                           //callvirt				void System::Windows::Forms::ListView::SelectedListViewItemCollection::Clear()
	IL_0298:                                                                        //ldarg.0
	IL_0299:            Temp_34=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_029e:                                                                        //ldc.i4.0
	IL_029f:            Temp_35=Temp_34[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_02a4:                                                                        //ldc.i4.1
	IL_02a5:            Temp_35->Selected=true;                                     //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_02aa:                                                                        //ldarg.0
	IL_02ab:            Temp_36=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_02b0:                                                                        //ldc.i4.0
	IL_02b1:            Temp_37=Temp_36[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_02b6:                                                                        //ldc.i4.1
	IL_02b7:            Temp_37->Focused=true;                                      //callvirt				void System::Windows::Forms::ListViewItem::set_Focused(System::Boolean)
	IL_02bc:                                                                        //ldc.i4				0x7
	IL_02c1:            V_9=7;                                                      //stloc				V_9
	IL_02c5:            /*goto IL_000b;*/goto IL_02ca;                              //br				IL_000b
	IL_02ca:            goto IL_0512;                                               //br				IL_0512
	IL_02cf:                                                                        //ldc.i4				0x19
	IL_02d4:            V_9=25;                                                     //stloc				V_9
	IL_02d8:            /*goto IL_000b;*/goto IL_02dd;                              //br				IL_000b
	IL_02dd:                                                                        //ldloc.s				V_8
	IL_02df:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x662E\x7E30\x1D32\x7834\x5236\x5438\x543A\x4F3C\x463E\x1240\x3742\x3744\x2246\x2848\x264A"
	IL_02e4:                                                                        //ldloc				V_10
	IL_02e8:            Temp_53=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x662E\x7E30\x1D32\x7834\x5236\x5438\x543A\x4F3C\x463E\x1240\x3742\x3744\x2246\x2848\x264A",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ed:            if(V_8==Temp_53)goto IL_04b8;                               //beq				IL_04b8
	IL_02f2:                                                                        //ldc.i4				0x5
	IL_02f7:            V_9=5;                                                      //stloc				V_9
	IL_02fb:            /*goto IL_000b;*/goto IL_0300;                              //br				IL_000b
	IL_0300:            goto IL_03e7;                                               //br				IL_03e7
	IL_0305:                                                                        //ldloc.0
	IL_0306:            Temp_39=V_0->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_030b:                                                                        //castclass				Root::T_x126
	IL_0310:            V_1=safe_cast<Root::T_x126^>(Temp_39);                      //stloc.1
	IL_0311:                                                                        //ldloc.1
	IL_0312:            Temp_40=V_1->M_x12();                                       //callvirt				System::String^ Root::T_x126::M_x12()
	IL_0317:            V_2=Temp_40;                                                //stloc.2
	IL_0318:                                                                        //ldloc.1
	IL_0319:            Temp_41=V_1->M_x2();                                        //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_031e:            V_3=Temp_41;                                                //stloc.3
	IL_031f:            Temp_42=gcnew System::Windows::Forms::ListViewItem();       //newobj				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0324:            V_4=Temp_42;                                                //stloc.s				V_4
	IL_0326:                                                                        //ldloc.s				V_4
	IL_0328:                                                                        //ldloc.1
	IL_0329:            V_4->Tag=safe_cast<System::Object^>(V_1);                   //callvirt				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_032e:                                                                        //ldloc.s				V_4
	IL_0330:                                                                        //ldloc.2
	IL_0331:            V_4->Text=V_2;                                              //callvirt				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0336:                                                                        //ldc.i4				0x18
	IL_033b:            V_9=24;                                                     //stloc				V_9
	IL_033f:            /*goto IL_000b;*/goto IL_0344;                              //br				IL_000b
	IL_0344:                                                                        //ldloc.1
	IL_0345:            Temp_52=V_1->M_x1();                                        //callvirt				System::Exception^ Root::T_x126::M_x1()
	IL_034a:            if(Temp_52==nullptr)goto IL_015d;                           //brfalse				IL_015d
	IL_034f:                                                                        //ldc.i4				0x16
	IL_0354:            V_9=22;                                                     //stloc				V_9
	IL_0358:            /*goto IL_000b;*/goto IL_035d;                              //br				IL_000b
	IL_035d:            goto IL_0393;                                               //br.s				IL_0393
	IL_035f:                                                                        //ldc.i4				0xe
	IL_0364:            V_9=14;                                                     //stloc				V_9
	IL_0368:            /*goto IL_000b;*/goto IL_036d;                              //br				IL_000b
	IL_036d:                                                                        //ldloc.3
	IL_036e:            Temp_28=V_3->GetType();                                     //callvirt				System::Type^ System::Object::GetType()
	IL_0373:            Temp_29=Temp_28->FullName;                                  //callvirt				System::String^ System::Type::get_FullName()
	IL_0378:                                                                        //dup
	IL_0379:            V_8=Temp_29;                                                //stloc.s				V_8
	IL_037b:            /*if(V_8==nullptr)goto IL_0184;*/if(V_8==nullptr)goto IL_017F01;//brfalse				IL_0184
	IL_0380:                                                                        //ldc.i4				0x4
	IL_0385:            V_9=4;                                                      //stloc				V_9
	IL_0389:            /*goto IL_000b;*/goto IL_038e;                              //br				IL_000b
	IL_038e:            goto IL_0479;                                               //br				IL_0479
	IL_0393:                                                                        //ldloc.s				V_4
	IL_0395:            Temp_43=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_039a:                                                                        //ldloc.1
	IL_039b:            Temp_44=V_1->M_x1();                                        //callvirt				System::Exception^ Root::T_x126::M_x1()
	IL_03a0:            Temp_45=Temp_44->Message;                                   //callvirt				System::String^ System::Exception::get_Message()
	IL_03a5:            Temp_46=Temp_43->Add(Temp_45);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_03aa:                                                                        //pop
	IL_03ab:                                                                        //ldloc.s				V_4
	IL_03ad:            Temp_47=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_03b2:                                                                        //ldloc.1
	IL_03b3:            Temp_48=V_1->M_x1();                                        //callvirt				System::Exception^ Root::T_x126::M_x1()
	IL_03b8:            Temp_49=Temp_48->GetType();                                 //callvirt				System::Type^ System::Object::GetType()
	IL_03bd:            Temp_50=Temp_49->AssemblyQualifiedName;                     //callvirt				System::String^ System::Type::get_AssemblyQualifiedName()
	IL_03c2:            Temp_51=Temp_47->Add(Temp_50);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_03c7:                                                                        //pop
	IL_03c8:                                                                        //ldloc.s				V_4
	IL_03ca:                                                                        //ldc.i4				0xa6
	IL_03cf:            V_4->ImageIndex=166;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_03d4:                                                                        //ldc.i4				0x9
	IL_03d9:            V_9=9;                                                      //stloc				V_9
	IL_03dd:            /*goto IL_000b;*/goto IL_03e2;                              //br				IL_000b
	IL_03e2:            goto IL_013c;                                               //br				IL_013c
	IL_03e7:                                                                        //ldc.i4				0xb
	IL_03ec:            V_9=11;                                                     //stloc				V_9
	IL_03f0:            /*goto IL_000b;*/goto IL_03f5;                              //br				IL_000b
	IL_03f5:                                                                        //ldloc.s				V_8
	IL_03f7:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6D2E\x4830\x4732\x5034\x6C36\x6438"
	IL_03fc:                                                                        //ldloc				V_10
	IL_0400:            Temp_14=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x6D2E\x4830\x4732\x5034\x6C36\x6438",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0405:            if(V_8==Temp_14)goto IL_0445;                               //beq.s				IL_0445
	IL_0407:                                                                        //ldc.i4				0x6
	IL_040c:            V_9=6;                                                      //stloc				V_9
	IL_0410:            /*goto IL_000b;*/goto IL_0415;                              //br				IL_000b
	IL_0415:            goto IL_0211;                                               //br				IL_0211
	IL_041a:                                                                        //ldloc.s				V_4
	IL_041c:            Temp_2=V_4->SubItems;                                       //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0421:                                                                        //ldloc.3
	IL_0422:            Temp_3=V_3->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0427:            Temp_4=Temp_3->AssemblyQualifiedName;                       //callvirt				System::String^ System::Type::get_AssemblyQualifiedName()
	IL_042c:            Temp_5=Temp_2->Add(Temp_4);                                 //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0431:                                                                        //pop
	IL_0432:                                                                        //ldc.i4				0x15
	IL_0437:            V_9=21;                                                     //stloc				V_9
	IL_043b:            /*goto IL_000b;*/goto IL_0440;                              //br				IL_000b
	IL_0440:            goto IL_013c;                                               //br				IL_013c
	IL_0445:                                                                        //ldloc.s				V_4
	IL_0447:                                                                        //ldc.i4				0x9e
	IL_044c:            V_4->ImageIndex=158;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0451:                                                                        //ldloc.s				V_4
	IL_0453:            Temp_15=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_0458:                                                                        //ldloc.3
	IL_0459:                                                                        //castclass				array<System::Byte>
	IL_045e:            Temp_16=Root::T_x88::T_x2::M_x1(safe_cast<array<System::Byte>^>(V_3));//call				System::String^ Root::T_x88::T_x2::M_x1(array<System::Byte>^)
	IL_0463:            Temp_17=Temp_15->Add(Temp_16);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_0468:                                                                        //pop
	IL_0469:                                                                        //ldc.i4				0x17
	IL_046e:            V_9=23;                                                     //stloc				V_9
	IL_0472:            /*goto IL_000b;*/goto IL_0477;                              //br				IL_000b
	IL_0477:            goto IL_041a;                                               //br.s				IL_041a
	IL_0479:                                                                        //ldloc.s				V_8
	IL_047b:            Temp_9=System::String::IsInterned(V_8);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_0480:            V_8=Temp_9;                                                 //stloc.s				V_8
	IL_0482:                                                                        //ldc.i4				0xd
	IL_0487:            V_9=13;                                                     //stloc				V_9
	IL_048b:            /*goto IL_000b;*/goto IL_0490;                              //br				IL_000b
	IL_0490:                                                                        //ldloc.s				V_8
	IL_0492:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x4530\x4132\x5C34\x5936\x5E38"
	IL_0497:                                                                        //ldloc				V_10
	IL_049b:            Temp_24=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7C2E\x4530\x4132\x5C34\x5936\x5E38",V_10);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04a0:            if(V_8==Temp_24)goto IL_00b9;                               //beq				IL_00b9
	IL_04a5:                                                                        //ldc.i4				0x0
	IL_04aa:            V_9=0;                                                      //stloc				V_9
	IL_04ae:            /*goto IL_000b;*/goto IL_04b3;                              //br				IL_000b
	IL_04b3:            goto IL_02cf;                                               //br				IL_02cf
	IL_04b8:                                                                        //ldloc.3
	IL_04b9:                                                                        //castclass				System::IO::Stream
	IL_04be:            V_5=safe_cast<System::IO::Stream^>(V_3);                    //stloc.s				V_5
	IL_04c0:                                                                        //ldloc.s				V_5
	IL_04c2:            Temp_54=V_5->Length;                                        //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_04c7:                                                                        //conv.i4
	IL_04c8:                                                                        //conv.ovf.u4
	IL_04c9:            Temp_55=gcnew array<System::Byte>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_54)));//newarr				System::Byte
	IL_04ce:            V_6=Temp_55;                                                //stloc.s				V_6
	IL_04d0:                                                                        //ldloc.s				V_5
	IL_04d2:                                                                        //ldloc.s				V_6
	IL_04d4:                                                                        //ldc.i4.0
	IL_04d5:                                                                        //ldloc.s				V_6
	IL_04d7:            Temp_56=V_6->Length;                                        //ldlen
	IL_04d8:                                                                        //conv.i4
	IL_04d9:            Temp_57=V_5->Read(V_6,safe_cast<System::Int32>(0),Temp_56); //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_04de:                                                                        //pop
	IL_04df:                                                                        //ldloc.s				V_4
	IL_04e1:                                                                        //ldc.i4				0x9e
	IL_04e6:            V_4->ImageIndex=158;                                        //callvirt				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_04eb:                                                                        //ldloc.s				V_4
	IL_04ed:            Temp_58=V_4->SubItems;                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_04f2:                                                                        //ldloc.s				V_6
	IL_04f4:            Temp_59=Root::T_x88::T_x2::M_x1(V_6);                       //call				System::String^ Root::T_x88::T_x2::M_x1(array<System::Byte>^)
	IL_04f9:            Temp_60=Temp_58->Add(Temp_59);                              //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::Add(System::String^)
	IL_04fe:                                                                        //pop
	IL_04ff:                                                                        //ldc.i4				0x1
	IL_0504:            V_9=1;                                                      //stloc				V_9
	IL_0508:            /*goto IL_000b;*/goto IL_050d;                              //br				IL_000b
	IL_050d:            goto IL_041a;                                               //br				IL_041a
	IL_0512:            return;                                                     //ret

}
inline void Root::T_x88::T_x2::M_x2(System::EventArgs^ A_0)
//System::Windows::Forms::ListView^::OnSelectedIndexChanged by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItem^ Temp_0 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_1 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Reflector::ICommandBarItem^ Temp_5 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Object^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	System::Windows::Forms::ListViewItem^ V_0 = nullptr;
	Root::T_x126^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_005a;case 1:goto IL_00c4;case 2:goto IL_009b;case 3:goto IL_00dd;case 4:goto IL_003e;case 5:goto IL_0080;case 6:goto IL_0073;};//switch				(IL_005a,IL_00c4,IL_009b,IL_00dd,IL_003e,IL_0080,IL_0073)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_0=this->F_x2;                                          //ldfld				Reflector::ICommandBarItem^ Root::T_x88::T_x2 F_x2
	IL_002d:                                                                        //ldc.i4.0
	IL_002e:            Temp_0->Enabled=false;                                      //callvirt				void Reflector::ICommandBarItem::set_Enabled(System::Boolean)
	IL_0033:                                                                        //ldc.i4				0x4
	IL_0038:            V_2=4;                                                      //stloc				V_2
	IL_003c:            /*goto IL_0002;*/goto IL_003e;                              //br.s				IL_0002
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_6=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0044:            Temp_7=Temp_6->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0049:                                                                        //ldc.i4.1
	IL_004a:            if(Temp_7!=1)goto IL_00df;                                  //bne.un				IL_00df
	IL_004f:                                                                        //ldc.i4				0x0
	IL_0054:            V_2=0;                                                      //stloc				V_2
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:            goto IL_009d;                                               //br.s				IL_009d
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_5=this->F_x2;                                          //ldfld				Reflector::ICommandBarItem^ Root::T_x88::T_x2 F_x2
	IL_0062:                                                                        //ldc.i4.1
	IL_0063:            Temp_5->Enabled=true;                                       //callvirt				void Reflector::ICommandBarItem::set_Enabled(System::Boolean)
	IL_0068:                                                                        //ldc.i4				0x6
	IL_006d:            V_2=6;                                                      //stloc				V_2
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:            goto IL_00df;                                               //br.s				IL_00df
	IL_0075:                                                                        //ldc.i4				0x5
	IL_007a:            V_2=5;                                                      //stloc				V_2
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:                                                                        //ldloc.1
	IL_0081:            Temp_8=V_1->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_0086:            Temp_9=Root::T_x88::T_x2::M_x1(Temp_8);                     //call				System::Boolean Root::T_x88::T_x2::M_x1(System::Object^)
	IL_008b:            if(!Temp_9)goto IL_00df;                                    //brfalse.s				IL_00df
	IL_008d:                                                                        //ldc.i4				0x2
	IL_0092:            V_2=2;                                                      //stloc				V_2
	IL_0096:            /*goto IL_0002;*/goto IL_009b;                              //br				IL_0002
	IL_009b:            goto IL_005c;                                               //br.s				IL_005c
	IL_009d:                                                                        //ldarg.0
	IL_009e:            Temp_1=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00a3:                                                                        //ldc.i4.0
	IL_00a4:            Temp_2=Temp_1[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_00a9:            V_0=Temp_2;                                                 //stloc.0
	IL_00aa:                                                                        //ldloc.0
	IL_00ab:            Temp_3=V_0->Tag;                                            //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_00b0:                                                                        //castclass				Root::T_x126
	IL_00b5:            V_1=safe_cast<Root::T_x126^>(Temp_3);                       //stloc.1
	IL_00b6:                                                                        //ldc.i4				0x1
	IL_00bb:            V_2=1;                                                      //stloc				V_2
	IL_00bf:            /*goto IL_0002;*/goto IL_00c4;                              //br				IL_0002
	IL_00c4:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_00c6:                                                                        //break
	IL_00c7:                                                                        //ldloc.1
	IL_00c8:            Temp_4=V_1->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_00cd:            if(Temp_4==nullptr)goto IL_00df;                            //brfalse.s				IL_00df
	IL_00cf:                                                                        //ldc.i4				0x3
	IL_00d4:            V_2=3;                                                      //stloc				V_2
	IL_00d8:            /*goto IL_0002;*/goto IL_00dd;                              //br				IL_0002
	IL_00dd:            goto IL_0075;                                               //br.s				IL_0075
	IL_00df:                                                                        //ldarg.0
	IL_00e0:                                                                        //ldarg.1
	IL_00e1:            System::Windows::Forms::ListView::OnSelectedIndexChanged(A_0);//call				void System::Windows::Forms::ListView::OnSelectedIndexChanged(System::EventArgs^)
	IL_00e6:            return;                                                     //ret

}
inline array<System::Byte>^ Root::T_x88::T_x2::M_x2(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Int64 Temp_4 = 0;
	array<System::Byte>^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Type^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	System::IO::MemoryStream^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	array<System::Byte>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_4=1;                                                      //stloc				V_4
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_3=3;                                                      //stloc				V_3
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_3
	IL_001a:            switch(V_3){case 0:goto IL_00a1;case 1:goto IL_0070;case 2:goto IL_005a;case 3:goto IL_0014;};//switch				(IL_00a1,IL_0070,IL_005a,IL_0014)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_8=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0035:            Temp_9=Temp_8->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_003a:                                                                        //ldstr				L"\x4C1E\x5820\x5022\x5124\x4226\x4428\x052A\x642C\x602E\x1F30\x7E32\x5034\x5A36\x5638\x493A\x443C\x6C3E\x3540\x3142\x2044\x2646\x2448"
	IL_003f:                                                                        //ldloc				V_4
	IL_0043:            Temp_10=a(L"\x4C1E\x5820\x5022\x5124\x4226\x4428\x052A\x642C\x602E\x1F30\x7E32\x5034\x5A36\x5638\x493A\x443C\x6C3E\x3540\x3142\x2044\x2646\x2448",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0048:            Temp_11=(Temp_9 == Temp_10);                                //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_004d:            if(!Temp_11)goto IL_0065;                                   //brfalse.s				IL_0065
	IL_004f:                                                                        //ldc.i4				0x2
	IL_0054:            V_3=2;                                                      //stloc				V_3
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_005c:                                                                        //ldarg.0
	IL_005d:                                                                        //castclass				array<System::Byte>
	IL_0062:            V_2=safe_cast<array<System::Byte>^>(A_0);                   //stloc.2
	IL_0063:                                                                        //ldloc.2
	IL_0064:            return V_2;                                                 //ret
	IL_0065:                                                                        //ldc.i4				0x1
	IL_006a:            V_3=1;                                                      //stloc				V_3
	IL_006e:            /*goto IL_0016;*/goto IL_0070;                              //br.s				IL_0016
	IL_0070:            goto IL_0073;                                               //br.s				IL_0073
	IL_0072:                                                                        //break
	IL_0073:                                                                        //ldarg.0
	IL_0074:            Temp_0=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0079:            Temp_1=Temp_0->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_007e:                                                                        //ldstr				L"\x4C1E\x5820\x5022\x5124\x4226\x4428\x052A\x6F2C\x562E\x4530\x5632\x6E34\x6A36"
	IL_0083:                                                                        //ldloc				V_4
	IL_0087:            Temp_2=a(L"\x4C1E\x5820\x5022\x5124\x4226\x4428\x052A\x6F2C\x562E\x4530\x5632\x6E34\x6A36",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008c:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0091:            if(!Temp_3)goto IL_00ce;                                    //brfalse.s				IL_00ce
	IL_0093:                                                                        //ldc.i4				0x0
	IL_0098:            V_3=0;                                                      //stloc				V_3
	IL_009c:            /*goto IL_0016;*/goto IL_00a1;                              //br				IL_0016
	IL_00a1:            goto IL_005c;                                               //br.s				IL_005c
	IL_00a3:                                                                        //ldarg.0
	IL_00a4:                                                                        //castclass				System::IO::MemoryStream
	IL_00a9:            V_0=safe_cast<System::IO::MemoryStream^>(A_0);              //stloc.0
	IL_00aa:                                                                        //ldloc.0
	IL_00ab:                                                                        //ldc.i4.0
	IL_00ac:                                                                        //conv.i8
	IL_00ad:            V_0->Position=0;                                            //callvirt				void System::IO::Stream::set_Position(System::Int64)
	IL_00b2:                                                                        //ldloc.0
	IL_00b3:            Temp_4=V_0->Length;                                         //callvirt				System::Int64 System::IO::Stream::get_Length()
	IL_00b8:                                                                        //conv.i4
	IL_00b9:                                                                        //conv.ovf.u4
	IL_00ba:            Temp_5=gcnew array<System::Byte>(safe_cast<System::UInt32>(safe_cast<System::Int32>(Temp_4)));//newarr				System::Byte
	IL_00bf:            V_1=Temp_5;                                                 //stloc.1
	IL_00c0:                                                                        //ldloc.0
	IL_00c1:                                                                        //ldloc.1
	IL_00c2:                                                                        //ldc.i4.0
	IL_00c3:                                                                        //ldloc.1
	IL_00c4:            Temp_6=V_1->Length;                                         //ldlen
	IL_00c5:                                                                        //conv.i4
	IL_00c6:            Temp_7=V_0->Read(V_1,safe_cast<System::Int32>(0),Temp_6);   //callvirt				System::Int32 System::IO::Stream::Read(array<System::Byte>^,System::Int32,System::Int32)
	IL_00cb:                                                                        //pop
	IL_00cc:                                                                        //ldloc.1
	IL_00cd:            return V_1;                                                 //ret
	IL_00ce:                                                                        //ldnull
	IL_00cf:            return nullptr;                                             //ret

}
inline void Root::T_x88::T_x2::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Windows::Forms::ListViewItem^ V_1 = nullptr;
	Root::T_x126^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_9=5;                                                      //stloc				V_9
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:                                                                        //ldarg.0
	IL_0017:            Temp_2=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_001c:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_0021:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_0023:            /*goto IL_0025;*/goto IL_002301;                            //br.s				IL_0025
	IL_002301:          try{
	IL_0025:                                                                        //ldc.i4				0x4
	IL_002a:            V_6=4;                                                      //stloc				V_6
	IL_002e:            /*goto IL_0032;*/goto IL_0030;                              //br.s				IL_0032
	IL_0030:            goto IL_0063;                                               //br.s				IL_0063
	IL_0032:                                                                        //ldloc				V_6
	IL_0036:            switch(V_6){case 0:goto IL_0153;case 1:goto IL_00c0;case 2:goto IL_0184;case 3:goto IL_0134;case 4:goto IL_0030;case 5:goto IL_00d7;case 6:goto IL_0171;case 7:goto IL_00b0;case 8:goto IL_0089;case 9:goto IL_009a;};//switch				(IL_0153,IL_00c0,IL_0184,IL_0134,IL_0030,IL_00d7,IL_0171,IL_00b0,IL_0089,IL_009a)
	IL_0063:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_0065:                                                                        //ldloc.s				V_4
	IL_0067:            Temp_6=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006c:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_0071:            V_1=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_6);//stloc.1
	IL_0072:                                                                        //ldloc.1
	IL_0073:            Temp_7=V_1->Tag;                                            //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0078:                                                                        //castclass				Root::T_x126
	IL_007d:            V_2=safe_cast<Root::T_x126^>(Temp_7);                       //stloc.2
	IL_007e:                                                                        //ldc.i4				0x8
	IL_0083:            V_6=8;                                                      //stloc				V_6
	IL_0087:            /*goto IL_0032;*/goto IL_0089;                              //br.s				IL_0032
	IL_0089:                                                                        //ldloc.2
	IL_008a:            if(V_2==nullptr)goto IL_00b2;                               //brfalse.s				IL_00b2
	IL_008c:            goto IL_008f;                                               //br.s				IL_008f
	IL_008e:                                                                        //break
	IL_008f:                                                                        //ldc.i4				0x9
	IL_0094:            V_6=9;                                                      //stloc				V_6
	IL_0098:            /*goto IL_0032;*/goto IL_009a;                              //br.s				IL_0032
	IL_009a:            goto IL_0139;                                               //br				IL_0139
	IL_009f:                                                                        //ldloc.0
	IL_00a0:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_00a5:                                                                        //ldc.i4				0x7
	IL_00aa:            V_6=7;                                                      //stloc				V_6
	IL_00ae:            /*goto IL_0032;*/goto IL_00b0;                              //br.s				IL_0032
	IL_00b0:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_00b2:                                                                        //ldc.i4				0x1
	IL_00b7:            V_6=1;                                                      //stloc				V_6
	IL_00bb:            /*goto IL_0032;*/goto IL_00c0;                              //br				IL_0032
	IL_00c0:                                                                        //ldloc.s				V_4
	IL_00c2:            Temp_5=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00c7:            if(Temp_5)goto IL_0065;                                     //brtrue.s				IL_0065
	IL_00c9:                                                                        //ldc.i4				0x5
	IL_00ce:            V_6=5;                                                      //stloc				V_6
	IL_00d2:            /*goto IL_0032;*/goto IL_00d7;                              //br				IL_0032
	IL_00d7:            goto IL_0176;                                               //br				IL_0176
	IL_00dc:                                                                        //ldloc.2
	IL_00dd:            Temp_8=V_2->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_00e2:                                                                        //castclass				System::String
	IL_00e7:            V_3=safe_cast<System::String^>(Temp_8);                     //stloc.3
	IL_00e8:                                                                        //ldloc.3
	IL_00e9:                                                                        //ldstr				L"\x2922"
	IL_00ee:                                                                        //ldloc				V_9
	IL_00f2:            Temp_9=a(L"\x2922",V_9);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f7:                                                                        //ldstr				L"\x7F22\x4B24"
	IL_00fc:                                                                        //ldloc				V_9
	IL_0100:            Temp_10=a(L"\x7F22\x4B24",V_9);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0105:            Temp_11=V_3->Replace(Temp_9,Temp_10);                       //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_010a:            V_3=Temp_11;                                                //stloc.3
	IL_010b:                                                                        //ldloc.0
	IL_010c:                                                                        //ldstr				L"\x1E22"
	IL_0111:                                                                        //ldloc				V_9
	IL_0115:            Temp_12=a(L"\x1E22",V_9);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011a:            V_0->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_011f:                                                                        //ldloc.0
	IL_0120:                                                                        //ldloc.3
	IL_0121:            V_0->Write(V_3);                                            //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0126:                                                                        //ldc.i4				0x3
	IL_012b:            V_6=3;                                                      //stloc				V_6
	IL_012f:            /*goto IL_0032;*/goto IL_0134;                              //br				IL_0032
	IL_0134:            goto IL_009f;                                               //br				IL_009f
	IL_0139:                                                                        //ldloc.0
	IL_013a:                                                                        //ldloc.1
	IL_013b:            Temp_13=V_1->Text;                                          //callvirt				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0140:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0145:                                                                        //ldc.i4				0x0
	IL_014a:            V_6=0;                                                      //stloc				V_6
	IL_014e:            /*goto IL_0032;*/goto IL_0153;                              //br				IL_0032
	IL_0153:                                                                        //ldloc.2
	IL_0154:            Temp_4=V_2->M_x2();                                         //callvirt				System::Object^ Root::T_x126::M_x2()
	IL_0159:                                                                        //isinst				System::String
	IL_015e:            if(dynamic_cast<System::String^>(Temp_4)==nullptr)goto IL_009f;//brfalse				IL_009f
	IL_0163:                                                                        //ldc.i4				0x6
	IL_0168:            V_6=6;                                                      //stloc				V_6
	IL_016c:            /*goto IL_0032;*/goto IL_0171;                              //br				IL_0032
	IL_0171:            goto IL_00dc;                                               //br				IL_00dc
	IL_0176:                                                                        //ldc.i4				0x2
	IL_017b:            V_6=2;                                                      //stloc				V_6
	IL_017f:            /*goto IL_0032;*/goto IL_0184;                              //br				IL_0032
	IL_0184:            goto IL_01d7;                                               //leave.s				IL_01d7
	                    ;}
	                    finally{
	IL_0186:            goto IL_019d;                                               //br.s				IL_019d
	IL_0188:                                                                        //ldloc				V_7
	IL_018c:            switch(V_7){case 0:goto IL_01d4;case 1:goto IL_01b1;case 2:goto IL_01c0;};//switch				(IL_01d4,IL_01b1,IL_01c0)
	IL_019d:                                                                        //ldloc.s				V_4
	IL_019f:                                                                        //isinst				System::IDisposable
	IL_01a4:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_01a6:                                                                        //ldc.i4				0x1
	IL_01ab:            V_7=1;                                                      //stloc				V_7
	IL_01af:            /*goto IL_0188;*/goto IL_01b1;                              //br.s				IL_0188
	IL_01b1:                                                                        //ldloc.s				V_5
	IL_01b3:            if(V_5==nullptr)goto IL_01d6;                               //brfalse.s				IL_01d6
	IL_01b5:                                                                        //ldc.i4				0x2
	IL_01ba:            V_7=2;                                                      //stloc				V_7
	IL_01be:            /*goto IL_0188;*/goto IL_01c0;                              //br.s				IL_0188
	IL_01c0:            goto IL_01c2;                                               //br.s				IL_01c2
	IL_01c2:                                                                        //ldloc.s				V_5
	IL_01c4:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_01c9:                                                                        //ldc.i4				0x0
	IL_01ce:            V_7=0;                                                      //stloc				V_7
	IL_01d2:            /*goto IL_0188;*/goto IL_01d4;                              //br.s				IL_0188
	IL_01d4:            goto IL_01d6;                                               //br.s				IL_01d6
	IL_01d6:                                                                        //endfinally
	                    ;}
	IL_01d7:                                                                        //ldloc.0
	IL_01d8:            Temp_14=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01dd:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_14));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_01e2:            goto IL_022a;                                               //leave.s				IL_022a
	                    ;}
	                    finally{
	IL_01e4:                                                                        //ldc.i4				0x0
	IL_01e9:            V_8=0;                                                      //stloc				V_8
	IL_01ed:            /*goto IL_01f1;*/goto IL_01ef;                              //br.s				IL_01f1
	IL_01ef:            goto IL_0206;                                               //br.s				IL_0206
	IL_01f1:                                                                        //ldloc				V_8
	IL_01f5:            switch(V_8){case 0:goto IL_01ef;case 1:goto IL_0227;case 2:goto IL_0214;};//switch				(IL_01ef,IL_0227,IL_0214)
	IL_0206:                                                                        //ldloc.0
	IL_0207:            if(V_0==nullptr)goto IL_0229;                               //brfalse.s				IL_0229
	IL_0209:                                                                        //ldc.i4				0x2
	IL_020e:            V_8=2;                                                      //stloc				V_8
	IL_0212:            /*goto IL_01f1;*/goto IL_0214;                              //br.s				IL_01f1
	IL_0214:            goto IL_0216;                                               //br.s				IL_0216
	IL_0216:                                                                        //ldloc.0
	IL_0217:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_021c:                                                                        //ldc.i4				0x1
	IL_0221:            V_8=1;                                                      //stloc				V_8
	IL_0225:            /*goto IL_01f1;*/goto IL_0227;                              //br.s				IL_01f1
	IL_0227:            goto IL_0229;                                               //br.s				IL_0229
	IL_0229:                                                                        //endfinally
	                    ;}
	IL_022a:            return;                                                     //ret

}
inline System::String^ Root::T_x88::T_x2::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:            goto IL_0033;                                               //br.s				IL_0033
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //sub
	IL_0010:                                                                        //blt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0062;case 1:goto IL_0088;case 2:goto IL_00ad;case 3:goto IL_0053;case 4:goto IL_0079;};//switch				(IL_0062,IL_0088,IL_00ad,IL_0053,IL_0079)
	IL_0033:                                                                        //ldarg.0
	IL_0034:                                                                        //ldstr				L"\x0727"
	IL_0039:                                                                        //ldloc				V_2
	IL_003d:            Temp_0=a(L"\x0727",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0042:            Temp_1=A_0->LastIndexOf(Temp_0);                            //callvirt				System::Int32 System::String::LastIndexOf(System::String^)
	IL_0047:            V_0=Temp_1;                                                 //stloc.0
	IL_0048:                                                                        //ldc.i4				0x3
	IL_004d:            V_1=3;                                                      //stloc				V_1
	IL_0051:            /*goto IL_000b;*/goto IL_0053;                              //br.s				IL_000b
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldc.i4.m1
	IL_0055:            if(V_0!=-1)goto IL_006e;                                    //bne.un.s				IL_006e
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_1=0;                                                      //stloc				V_1
	IL_0060:            /*goto IL_000b;*/goto IL_0062;                              //br.s				IL_000b
	IL_0062:            goto IL_008a;                                               //br.s				IL_008a
	IL_0064:                                                                        //ldarg.0
	IL_0065:                                                                        //ldloc.0
	IL_0066:                                                                        //ldc.i4.1
	IL_0067:                                                                        //add
	IL_0068:            Temp_4=A_0->Substring((V_0 + 1));                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_006d:            return Temp_4;                                              //ret
	IL_006e:                                                                        //ldc.i4				0x4
	IL_0073:            V_1=4;                                                      //stloc				V_1
	IL_0077:            /*goto IL_000b;*/goto IL_0079;                              //br.s				IL_000b
	IL_0079:                                                                        //ldloc.0
	IL_007a:                                                                        //ldc.i4.m1
	IL_007b:            if(V_0==-1)goto IL_00af;                                    //beq.s				IL_00af
	IL_007d:                                                                        //ldc.i4				0x1
	IL_0082:            V_1=1;                                                      //stloc				V_1
	IL_0086:            /*goto IL_000b;*/goto IL_0088;                              //br.s				IL_000b
	IL_0088:            goto IL_0064;                                               //br.s				IL_0064
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldstr				L"\x7427"
	IL_0090:                                                                        //ldloc				V_2
	IL_0094:            Temp_2=a(L"\x7427",V_2);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0099:            Temp_3=A_0->LastIndexOf(Temp_2);                            //callvirt				System::Int32 System::String::LastIndexOf(System::String^)
	IL_009e:            V_0=Temp_3;                                                 //stloc.0
	IL_009f:                                                                        //ldc.i4				0x2
	IL_00a4:            V_1=2;                                                      //stloc				V_1
	IL_00a8:            /*goto IL_000b;*/goto IL_00ad;                              //br				IL_000b
	IL_00ad:            goto IL_006e;                                               //br.s				IL_006e
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            return A_0;                                                 //ret

}
inline Root::T_x88::T_x2::T_x1::T_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:            this->F_x1=0;                                               //stfld				System::Int32 Root::T_x88::T_x2::T_x1 F_x1
	IL_0007:                                                                        //ldarg.0
	IL_0008:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->F_x1=A_0;                                             //stfld				System::Int32 Root::T_x88::T_x2::T_x1 F_x1
	IL_0014:            return;                                                     //ret

}
inline System::Int32 Root::T_x88::T_x2::T_x1::M_x1(System::Object^ A_0,System::Object^ A_1)
//System::Collections::IComparer^::Compare by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::ListViewItem::ListViewSubItem^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:                                                                        //isinst				System::Windows::Forms::ListViewItem
	IL_0009:            Temp_0=dynamic_cast<System::Windows::Forms::ListViewItem^>(A_0)->SubItems;//callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_000e:                                                                        //ldarg.0
	IL_000f:            Temp_1=this->F_x1;                                          //ldfld				System::Int32 Root::T_x88::T_x2::T_x1 F_x1
	IL_0014:            Temp_2=Temp_0[Temp_1];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0019:            Temp_3=Temp_2->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_001e:            V_0=Temp_3;                                                 //stloc.0
	IL_001f:                                                                        //ldarg.2
	IL_0020:                                                                        //isinst				System::Windows::Forms::ListViewItem
	IL_0025:            Temp_4=dynamic_cast<System::Windows::Forms::ListViewItem^>(A_1)->SubItems;//callvirt				System::Windows::Forms::ListViewItem::ListViewSubItemCollection^ System::Windows::Forms::ListViewItem::get_SubItems()
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_5=this->F_x1;                                          //ldfld				System::Int32 Root::T_x88::T_x2::T_x1 F_x1
	IL_0030:            Temp_6=Temp_4[Temp_5];                                      //callvirt				System::Windows::Forms::ListViewItem::ListViewSubItem^ System::Windows::Forms::ListViewItem::ListViewSubItemCollection::get_Item(System::Int32)
	IL_0035:            Temp_7=Temp_6->Text;                                        //callvirt				System::String^ System::Windows::Forms::ListViewItem::ListViewSubItem::get_Text()
	IL_003a:            V_1=Temp_7;                                                 //stloc.1
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldloc.1
	IL_003d:            Temp_8=V_0->CompareTo(V_1);                                 //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0042:            return Temp_8;                                              //ret

}
