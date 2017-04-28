#include "global_xref.h"

inline Root::T_x58::T_x58(Root::T_x47^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				Root::T_x47^ Root::T_x58 F_x1
	IL_000d:            return;                                                     //ret

}
inline System::Int32 Root::T_x58::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(array<System::String^>^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldc.i4.0
	IL_0002:                                                                        //ldnull
	IL_0003:            A_0[0]=safe_cast<System::String^>(nullptr);                 //stelem.ref
	IL_0004:                                                                        //ldc.i4.0
	IL_0005:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Boolean A_0)
//Root::T_x18::T_x1^::M_x12 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline void Root::T_x58::M_x1(System::Int32 A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x6^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Root::T_x18::T_x14^ Temp_2 = nullptr;
	Root::T_x18::T_x14^ Temp_3 = nullptr;
	Root::T_x18::T_x6^ Temp_4 = nullptr;
	Root::T_x18::T_x6^ Temp_5 = nullptr;
	//local variables.
	Root::T_x18::T_x14^ V_0 = nullptr;
	Root::T_x18::T_x14^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_000b;case 1:goto IL_0038;case 2:goto IL_00aa;};//switch				(IL_000b,IL_0038,IL_00aa)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_5=this->F_x13;                                         //ldfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0028:            if(Temp_5==nullptr)goto IL_00ac;                            //brfalse				IL_00ac
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_2=1;                                                      //stloc				V_2
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0040:            Temp_1=Temp_0->M_x2();                                      //callvirt				System::Int32 Root::T_x18::T_x6::M_x2()
	IL_0045:                                                                        //pop
	IL_0046:            Temp_2=gcnew Root::T_x18::T_x14();                          //newobj				void Root::T_x18::T_x14::.ctor()
	IL_004b:            V_0=Temp_2;                                                 //stloc.0
	IL_004c:                                                                        //ldloc.0
	IL_004d:                                                                        //ldarg.1
	IL_004e:            V_0->F_x1=A_0;                                              //stfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldarg.2
	IL_0055:            V_0->F_x2=A_1;                                              //stfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_005a:                                                                        //ldloc.0
	IL_005b:                                                                        //ldarg.s				A_3
	IL_005d:            V_0->F_x13=A_3;                                             //stfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_0062:                                                                        //ldloc.0
	IL_0063:                                                                        //ldarg.3
	IL_0064:            V_0->F_x12=A_2;                                             //stfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_0069:            Temp_3=gcnew Root::T_x18::T_x14();                          //newobj				void Root::T_x18::T_x14::.ctor()
	IL_006e:            V_1=Temp_3;                                                 //stloc.1
	IL_006f:                                                                        //ldloc.1
	IL_0070:                                                                        //ldarg.1
	IL_0071:            V_1->F_x1=A_0;                                              //stfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_0076:                                                                        //ldloc.1
	IL_0077:                                                                        //ldarg.2
	IL_0078:            V_1->F_x2=A_1;                                              //stfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_007d:                                                                        //ldloc.1
	IL_007e:                                                                        //ldarg.s				A_3
	IL_0080:            V_1->F_x13=A_3;                                             //stfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_0085:                                                                        //ldloc.1
	IL_0086:                                                                        //ldarg.3
	IL_0087:            V_1->F_x12=A_2;                                             //stfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_4=this->F_x13;                                         //ldfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0092:                                                                        //ldloc.0
	IL_0093:                                                                        //ldloc.1
	IL_0094:            Temp_4->M_x1(V_0,V_1);                                      //callvirt				void Root::T_x18::T_x6::M_x1(Root::T_x18::T_x14^,Root::T_x18::T_x14^)
	IL_0099:            goto IL_009c;                                               //br.s				IL_009c
	IL_009b:                                                                        //break
	IL_009c:                                                                        //ldc.i4				0x2
	IL_00a1:            V_2=2;                                                      //stloc				V_2
	IL_00a5:            /*goto IL_000d;*/goto IL_00aa;                              //br				IL_000d
	IL_00aa:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00ac:            return;                                                     //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Int32 A_0,System::Int32 A_1,[Out]System::Object^% A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.3
	IL_0001:                                                                        //ldnull
	IL_0002:            A_2=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004001
	IL_0008:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Int32 A_0,System::String^ A_1,[Out]System::String^% A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.3
	IL_0001:                                                                        //ldnull
	IL_0002:            A_2=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004001
	IL_0008:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Int32 A_0,Root::T_x18::T_x48^ A_1,System::Object^ A_2,Root::T_x18::T_x11^ A_3,System::Object^ A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Int32 A_0,Root::T_x18::T_x57^ A_1,System::Object^ A_2,System::Object^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	System::Windows::Forms::ContextMenu^ Temp_1 = nullptr;
	Root::T_x47^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Drawing::Point Temp_5;
	System::Drawing::Point Temp_6;
	Root::T_x47^ Temp_7 = nullptr;
	System::Windows::Forms::ContextMenu^ Temp_8 = nullptr;
	Root::T_x47^ Temp_9 = nullptr;
	Root::T_x47^ Temp_10 = nullptr;
	//local variables.
	System::Drawing::Point V_0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_1=4;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002a;                                               //br.s				IL_002a
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_0091;case 1:goto IL_003d;case 2:goto IL_007e;case 3:goto IL_00ac;case 4:goto IL_000b;};//switch				(IL_0091,IL_003d,IL_007e,IL_00ac,IL_000b)
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_10=this->F_x1;                                         //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0030:            if(Temp_10==nullptr)goto IL_00ae;                           //brfalse.s				IL_00ae
	IL_0032:                                                                        //ldc.i4				0x1
	IL_0037:            V_1=1;                                                      //stloc				V_1
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_0083;                                               //br.s				IL_0083
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0045:                                                                        //ldarg.2
	IL_0046:            Temp_3=A_1->F_x1;                                           //ldfld				System::Int32 Root::T_x18::T_x57 F_x1
	IL_004b:                                                                        //ldarg.2
	IL_004c:            Temp_4=A_1->F_x2;                                           //ldfld				System::Int32 Root::T_x18::T_x57 F_x2
	IL_0051:            Temp_5=System::Drawing::Point(Temp_3,Temp_4);               //newobj				void System::Drawing::Point::.ctor(System::Int32,System::Int32)
	IL_0056:            Temp_6=Temp_2->PointToClient(Temp_5);                       //callvirt				System::Drawing::Point System::Windows::Forms::Control::PointToClient(System::Drawing::Point)
	IL_005b:            V_0=Temp_6;                                                 //stloc.0
	IL_005c:                                                                        //ldarg.0
	IL_005d:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0062:            Temp_8=Temp_7->ContextMenu;                                 //callvirt				System::Windows::Forms::ContextMenu^ System::Windows::Forms::Control::get_ContextMenu()
	IL_0067:                                                                        //ldarg.0
	IL_0068:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_006d:                                                                        //ldloc.0
	IL_006e:            Temp_8->Show(safe_cast<System::Windows::Forms::Control^>(Temp_9),V_0);//callvirt				void System::Windows::Forms::ContextMenu::Show(System::Windows::Forms::Control^,System::Drawing::Point)
	IL_0073:                                                                        //ldc.i4				0x2
	IL_0078:            V_1=2;                                                      //stloc				V_1
	IL_007c:            /*goto IL_000d;*/goto IL_007e;                              //br.s				IL_000d
	IL_007e:            goto IL_0081;                                               //br.s				IL_0081
	IL_0080:                                                                        //break
	IL_0081:            goto IL_00ae;                                               //br.s				IL_00ae
	IL_0083:                                                                        //ldc.i4				0x0
	IL_0088:            V_1=0;                                                      //stloc				V_1
	IL_008c:            /*goto IL_000d;*/goto IL_0091;                              //br				IL_000d
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0097:            Temp_1=Temp_0->ContextMenu;                                 //callvirt				System::Windows::Forms::ContextMenu^ System::Windows::Forms::Control::get_ContextMenu()
	IL_009c:            if(Temp_1==nullptr)goto IL_00ae;                            //brfalse.s				IL_00ae
	IL_009e:                                                                        //ldc.i4				0x3
	IL_00a3:            V_1=3;                                                      //stloc				V_1
	IL_00a7:            /*goto IL_000d;*/goto IL_00ac;                              //br				IL_000d
	IL_00ac:            goto IL_003f;                                               //br.s				IL_003f
	IL_00ae:                                                                        //ldc.i4.0
	IL_00af:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(System::IntPtr A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1([Out]System::IntPtr% A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	System::IntPtr Temp_1 = (System::IntPtr)0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0007:            Temp_1=Temp_0->Handle;                                      //callvirt				System::IntPtr System::Windows::Forms::Control::get_Handle()
	IL_000c:            A_0=Temp_1;                                                 //stobj				System::IntPtr
	IL_0011:                                                                        //ldc.i4.0
	IL_0012:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(System::IntPtr A_0,System::IntPtr A_1,System::IntPtr A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::IntPtr A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::Object^ A_0,[Out]System::Object^% A_1)
//Root::T_x18::T_x1^::M_x2 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.2
	IL_0001:                                                                        //ldnull
	IL_0002:            A_1=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004001
	IL_0008:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1([Out]System::Object^% A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldnull
	IL_0002:            A_0=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004002
	IL_0008:            return -2147467262;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1([Out,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x11^% A_0,[Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_1,[Out]Root::T_x18::T_x14^ A_2,[Out]Root::T_x18::T_x14^ A_3,[In,Out]Root::T_x18::T_x7^ A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	System::Drawing::Rectangle Temp_1;
	System::Int32 Temp_2 = 0;
	Root::T_x47^ Temp_3 = nullptr;
	System::Drawing::Rectangle Temp_4;
	System::Int32 Temp_5 = 0;
	Root::T_x47^ Temp_6 = nullptr;
	System::Drawing::Rectangle Temp_7;
	System::Int32 Temp_8 = 0;
	Root::T_x47^ Temp_9 = nullptr;
	System::Drawing::Rectangle Temp_10;
	System::Int32 Temp_11 = 0;
	System::Type^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Root::T_x47^ Temp_14 = nullptr;
	System::IntPtr Temp_15 = (System::IntPtr)0;
	System::IntPtr Temp_16 = (System::IntPtr)0;
	//local variables.
	System::Drawing::Rectangle V_0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldarg.0
	IL_000d:            A_0=this;                                                   //stind.ref
	IL_000e:                                                                        //ldarg.2
	IL_000f:                                                                        //ldnull
	IL_0010:            A_1=nullptr;                                                //stind.ref
	IL_0011:                                                                        //ldarg.3
	IL_0012:                                                                        //ldarg.0
	IL_0013:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0018:            Temp_1=Temp_0->ClientRectangle;                             //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_001d:            V_0=Temp_1;                                                 //stloc.0
	IL_001e:                                                                        //ldloca.s				V_0
	IL_0020:            Temp_2=V_0.Left;                                            //call				System::Int32 System::Drawing::Rectangle::get_Left()
	IL_0025:            A_2->F_x1=Temp_2;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_002a:                                                                        //ldarg.3
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0031:            Temp_4=Temp_3->ClientRectangle;                             //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0036:            V_0=Temp_4;                                                 //stloc.0
	IL_0037:                                                                        //ldloca.s				V_0
	IL_0039:            Temp_5=V_0.Right;                                           //call				System::Int32 System::Drawing::Rectangle::get_Right()
	IL_003e:            A_2->F_x12=Temp_5;                                          //stfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_0043:                                                                        //ldarg.3
	IL_0044:                                                                        //ldarg.0
	IL_0045:            Temp_6=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_004a:            Temp_7=Temp_6->ClientRectangle;                             //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_004f:            V_0=Temp_7;                                                 //stloc.0
	IL_0050:                                                                        //ldloca.s				V_0
	IL_0052:            Temp_8=V_0.Top;                                             //call				System::Int32 System::Drawing::Rectangle::get_Top()
	IL_0057:            A_2->F_x2=Temp_8;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_005c:                                                                        //ldarg.3
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_9=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0063:            Temp_10=Temp_9->ClientRectangle;                            //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0068:            V_0=Temp_10;                                                //stloc.0
	IL_0069:                                                                        //ldloca.s				V_0
	IL_006b:            Temp_11=V_0.Bottom;                                         //call				System::Int32 System::Drawing::Rectangle::get_Bottom()
	IL_0070:            A_2->F_x13=Temp_11;                                         //stfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_0075:                                                                        //ldarg.s				A_3
	IL_0077:                                                                        //ldc.i4.0
	IL_0078:            A_3->F_x1=0;                                                //stfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_007d:                                                                        //ldarg.s				A_3
	IL_007f:                                                                        //ldc.i4.0
	IL_0080:            A_3->F_x2=0;                                                //stfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_0085:                                                                        //ldarg.s				A_3
	IL_0087:                                                                        //ldc.i4				0x7d00
	IL_008c:            A_3->F_x12=32000;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_0091:                                                                        //ldarg.s				A_3
	IL_0093:                                                                        //ldc.i4				0x7d00
	IL_0098:            A_3->F_x13=32000;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_009d:                                                                        //ldarg.s				A_4
	IL_009f:                                                                        //ldtoken				Root::T_x18::T_x7
	IL_00a4:            Temp_12=Root::T_x18::T_x7::typeid;                          //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a9:            Temp_13=System::Runtime::InteropServices::Marshal::SizeOf(Temp_12);//call				System::Int32 System::Runtime::InteropServices::Marshal::SizeOf(System::Type^)
	IL_00ae:            A_4->F_x1=Temp_13;                                          //stfld				System::Int32 Root::T_x18::T_x7 F_x1
	IL_00b3:                                                                        //ldarg.s				A_4
	IL_00b5:                                                                        //ldc.i4.0
	IL_00b6:            A_4->F_x2=0;                                                //stfld				System::Int32 Root::T_x18::T_x7 F_x2
	IL_00bb:                                                                        //ldarg.s				A_4
	IL_00bd:                                                                        //ldarg.0
	IL_00be:            Temp_14=this->F_x1;                                         //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_00c3:            Temp_15=Temp_14->Handle;                                    //callvirt				System::IntPtr System::Windows::Forms::Control::get_Handle()
	IL_00c8:            A_4->F_x12=Temp_15;                                         //stfld				System::IntPtr Root::T_x18::T_x7 F_x12
	IL_00cd:                                                                        //ldarg.s				A_4
	IL_00cf:            Temp_16=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_00d4:            A_4->F_x13=Temp_16;                                         //stfld				System::IntPtr Root::T_x18::T_x7 F_x13
	IL_00d9:                                                                        //ldarg.s				A_4
	IL_00db:                                                                        //ldc.i4.0
	IL_00dc:            A_4->F_x8=0;                                                //stfld				System::Int32 Root::T_x18::T_x7 F_x8
	IL_00e1:                                                                        //ldc.i4.0
	IL_00e2:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x14^ A_0)
//Root::T_x18::T_x11^::M_x12 by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x14^ A_0,System::Object^ A_1,System::Boolean A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x16^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.2
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.7
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:                                                                        //ldtoken				Root::T_x18::T_x16
	IL_0011:            Temp_0=Root::T_x18::T_x16::typeid;                          //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=System::Runtime::InteropServices::Marshal::SizeOf(Temp_0);//call				System::Int32 System::Runtime::InteropServices::Marshal::SizeOf(System::Type^)
	IL_001b:            A_0->F_x1=Temp_1;                                           //stfld				System::Int32 Root::T_x18::T_x16 F_x1
	IL_0020:                                                                        //ldarg.1
	IL_0021:                                                                        //ldc.i4.0
	IL_0022:            A_0->F_x12=0;                                               //stfld				System::Int32 Root::T_x18::T_x16 F_x12
	IL_0027:                                                                        //ldarg.1
	IL_0028:                                                                        //ldc.i4.4
	IL_0029:            A_0->F_x2=4;                                                //stfld				System::Int32 Root::T_x18::T_x16 F_x2
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //ldc.i4.0
	IL_0030:            A_0->F_x13=0;                                               //stfld				System::Int32 Root::T_x18::T_x16 F_x13
	IL_0035:                                                                        //ldarg.1
	IL_0036:                                                                        //ldc.i4.0
	IL_0037:            A_0->F_x8=0;                                                //stfld				System::Int32 Root::T_x18::T_x16 F_x8
	IL_003c:                                                                        //ldc.i4.0
	IL_003d:            return 0;                                                   //ret

}
inline System::Boolean Root::T_x58::M_x1(Root::T_x18::T_x17^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x48^ Temp_0 = nullptr;
	Root::T_x18::T_x48^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::IntPtr Temp_3 = (System::IntPtr)0;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::Keys Temp_5 = (System::Windows::Forms::Keys)0;
	System::Int32 Temp_6 = 0;
	//local variables.
	System::Windows::Forms::Keys V_0 = (System::Windows::Forms::Keys)0;
	System::Windows::Forms::Keys V_1 = (System::Windows::Forms::Keys)0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_003e;                                               //br.s				IL_003e
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_000b;case 1:goto IL_00ac;case 2:goto IL_00f7;case 3:goto IL_0086;case 4:goto IL_00d1;case 5:goto IL_0066;case 6:goto IL_0059;case 7:goto IL_00e7;case 8:goto IL_010d;case 9:goto IL_00bf;};//switch				(IL_000b,IL_00ac,IL_00f7,IL_0086,IL_00d1,IL_0066,IL_0059,IL_00e7,IL_010d,IL_00bf)
	IL_003e:                                                                        //ldarg.1
	IL_003f:            Temp_6=A_0->F_x2;                                           //ldfld				System::Int32 Root::T_x18::T_x17 F_x2
	IL_0044:                                                                        //ldc.i4				0x100
	IL_0049:            if(Temp_6!=256)goto IL_00e9;                                //bne.un				IL_00e9
	IL_004e:                                                                        //ldc.i4				0x6
	IL_0053:            V_2=6;                                                      //stloc				V_2
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:            goto IL_008a;                                               //br.s				IL_008a
	IL_005b:                                                                        //ldc.i4				0x5
	IL_0060:            V_2=5;                                                      //stloc				V_2
	IL_0064:            /*goto IL_000d;*/goto IL_0066;                              //br.s				IL_000d
	IL_0066:            goto IL_0069;                                               //br.s				IL_0069
	IL_0068:                                                                        //break
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_006f:                                                                        //ldarg.1
	IL_0070:            Temp_2=Temp_1->M_x1(A_0);                                   //callvirt				System::Int32 Root::T_x18::T_x48::M_x1(Root::T_x18::T_x17^)
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:            if(Temp_2==1)goto IL_0112;                                  //beq				IL_0112
	IL_007b:                                                                        //ldc.i4				0x3
	IL_0080:            V_2=3;                                                      //stloc				V_2
	IL_0084:            /*goto IL_000d;*/goto IL_0086;                              //br.s				IL_000d
	IL_0086:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0088:                                                                        //ldc.i4.1
	IL_0089:            return true;                                                //ret
	IL_008a:                                                                        //ldarg.1
	IL_008b:            Temp_3=A_0->F_x12;                                          //ldfld				System::IntPtr Root::T_x18::T_x17 F_x12
	IL_0090:            Temp_4=safe_cast<System::Int32>(Temp_3);                    //call				System::Int32 System::IntPtr::op_Explicit(System::IntPtr)
	IL_0095:            Temp_5=System::Windows::Forms::Control::ModifierKeys;       //call				System::Windows::Forms::Keys System::Windows::Forms::Control::get_ModifierKeys()
	IL_009a:                                                                        //or
	IL_009b:            V_0=safe_cast<System::Windows::Forms::Keys>((Temp_4 | safe_cast<System::Int32>(Temp_5)));//stloc.0
	IL_009c:                                                                        //ldloc.0
	IL_009d:            V_1=V_0;                                                    //stloc.1
	IL_009e:                                                                        //ldc.i4				0x1
	IL_00a3:            V_2=1;                                                      //stloc				V_2
	IL_00a7:            /*goto IL_000d;*/goto IL_00ac;                              //br				IL_000d
	IL_00ac:                                                                        //ldloc.1
	IL_00ad:                                                                        //ldc.i4.s				116
	IL_00af:            if(safe_cast<System::Int32>(V_1)==116)goto IL_0088;         //beq.s				IL_0088
	IL_00b1:                                                                        //ldc.i4				0x9
	IL_00b6:            V_2=9;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_000d;*/goto IL_00bf;                              //br				IL_000d
	IL_00bf:            goto IL_00c3;                                               //br.s				IL_00c3
	IL_00c1:                                                                        //ldc.i4.1
	IL_00c2:            return true;                                                //ret
	IL_00c3:                                                                        //ldc.i4				0x4
	IL_00c8:            V_2=4;                                                      //stloc				V_2
	IL_00cc:            /*goto IL_000d;*/goto IL_00d1;                              //br				IL_000d
	IL_00d1:                                                                        //ldloc.1
	IL_00d2:                                                                        //ldc.i4				0x2004e
	IL_00d7:            if(safe_cast<System::Int32>(V_1)!=131150)goto IL_00e9;      //bne.un.s				IL_00e9
	IL_00d9:                                                                        //ldc.i4				0x7
	IL_00de:            V_2=7;                                                      //stloc				V_2
	IL_00e2:            /*goto IL_000d;*/goto IL_00e7;                              //br				IL_000d
	IL_00e7:            goto IL_0088;                                               //br.s				IL_0088
	IL_00e9:                                                                        //ldc.i4				0x2
	IL_00ee:            V_2=2;                                                      //stloc				V_2
	IL_00f2:            /*goto IL_000d;*/goto IL_00f7;                              //br				IL_000d
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_00fd:            if(Temp_0==nullptr)goto IL_0112;                            //brfalse.s				IL_0112
	IL_00ff:                                                                        //ldc.i4				0x8
	IL_0104:            V_2=8;                                                      //stloc				V_2
	IL_0108:            /*goto IL_000d;*/goto IL_010d;                              //br				IL_000d
	IL_010d:            goto IL_005b;                                               //br				IL_005b
	IL_0112:                                                                        //ldc.i4.0
	IL_0113:            return false;                                               //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x17^ A_0,System::Guid% A_1,System::Int32 A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.1
	IL_0001:            return 1;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x17^% A_0,System::Int16 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x1(Root::T_x18::T_x48^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline Root::T_x18::T_x19^ Root::T_x58::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x19^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Int32 Root::T_x58::M_x11()
//Root::T_x18::T_x1^::M_x2 by M_x11
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x12()
//Root::T_x18::T_x8^::M_x5 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x12(System::Boolean A_0)
//Root::T_x18::T_x1^::M_x1 by M_x12
//Root::T_x18::T_x11^::M_x1 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x12(System::Int32 A_0)
//Root::T_x18::T_x8^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x12(Root::T_x18::T_x14^ A_0)
//Root::T_x18::T_x8^::M_x1 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            Temp_0=A_0->F_x1;                                           //ldfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_000a:                                                                        //ldarg.1
	IL_000b:            Temp_1=A_0->F_x2;                                           //ldfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_0010:                                                                        //ldarg.1
	IL_0011:            Temp_2=A_0->F_x12;                                          //ldfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_0016:                                                                        //ldarg.1
	IL_0017:            Temp_3=A_0->F_x13;                                          //ldfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_001c:            this->M_x1(Temp_0,Temp_1,Temp_2,Temp_3);                    //call				void Root::T_x58::M_x1(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0021:                                                                        //ldc.i4.0
	IL_0022:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x13()
//Root::T_x18::T_x8^::M_x2 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	System::Drawing::Rectangle Temp_1;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	//local variables.
	System::Drawing::Rectangle V_0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0011:            Temp_1=Temp_0->ClientRectangle;                             //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_ClientRectangle()
	IL_0016:            V_0=Temp_1;                                                 //stloc.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldloca.s				V_0
	IL_001a:            Temp_2=V_0.Left;                                            //call				System::Int32 System::Drawing::Rectangle::get_Left()
	IL_001f:                                                                        //ldloca.s				V_0
	IL_0021:            Temp_3=V_0.Top;                                             //call				System::Int32 System::Drawing::Rectangle::get_Top()
	IL_0026:                                                                        //ldloca.s				V_0
	IL_0028:            Temp_4=V_0.Right;                                           //call				System::Int32 System::Drawing::Rectangle::get_Right()
	IL_002d:                                                                        //ldloca.s				V_0
	IL_002f:            Temp_5=V_0.Bottom;                                          //call				System::Int32 System::Drawing::Rectangle::get_Bottom()
	IL_0034:            this->M_x1(Temp_2,Temp_3,Temp_4,Temp_5);                    //call				void Root::T_x58::M_x1(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0039:                                                                        //ldc.i4.0
	IL_003a:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x13(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x13(Root::T_x18::T_x14^ A_0)
//Root::T_x18::T_x11^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x15()
//Root::T_x18::T_x1^::M_x1 by M_x15
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline void Root::T_x58::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x15^ Temp_0 = nullptr;
	Root::T_x18::T_x19^ Temp_1 = nullptr;
	Root::T_x18::T_x18_1^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x18::T_x18_1^ Temp_4 = nullptr;
	Root::T_x18::T_x18_1^ Temp_5 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=gcnew Root::T_x18::T_x15();                          //newobj				void Root::T_x18::T_x15::.ctor()
	IL_0009:                                                                        //castclass				Root::T_x18::T_x19
	IL_000e:            this->F_x2=safe_cast<Root::T_x18::T_x19^>(Temp_0);          //stfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_001a:                                                                        //castclass				Root::T_x18::T_x18_1
	IL_001f:            this->F_x12=safe_cast<Root::T_x18::T_x18_1^>(Temp_1);       //stfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_2=this->F_x12;                                         //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_002a:                                                                        //ldarg.0
	IL_002b:            Temp_3=Temp_2->M_x1(safe_cast<Root::T_x18::T_x12^>(this));  //callvirt				System::Int32 Root::T_x18::T_x18_1::M_x1(Root::T_x18::T_x12^)
	IL_0030:                                                                        //pop
	IL_0031:                                                                        //ldarg.0
	IL_0032:                                                                        //ldc.i4.s				-5
	IL_0034:            this->M_x8(safe_cast<System::Int32>(-5));                   //call				void Root::T_x58::M_x8(System::Int32)
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldc.i4.m1
	IL_003b:            this->M_x8(safe_cast<System::Int32>(-1));                   //call				void Root::T_x58::M_x8(System::Int32)
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_4=this->F_x12;                                         //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0047:                                                                        //castclass				Root::T_x18::T_x6
	IL_004c:            this->F_x13=safe_cast<Root::T_x18::T_x6^>(Temp_4);          //stfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_5=this->F_x12;                                         //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0058:                                                                        //castclass				Root::T_x18::T_x48
	IL_005d:            this->F_x8=safe_cast<Root::T_x18::T_x48^>(Temp_5);          //stfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_0062:            return;                                                     //ret

}
inline System::Int32 Root::T_x58::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x2(System::Boolean A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x2(System::Int32 A_0)
//Root::T_x18::T_x11^::M_x1 by M_x2
//Root::T_x18::T_x2^::M_x1 by M_x2
//Root::T_x18::T_x8^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x2(System::Object^ A_0,[Out]System::Object^% A_1)
//Root::T_x18::T_x1^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.2
	IL_0001:                                                                        //ldnull
	IL_0002:            A_1=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004001
	IL_0008:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x2([Out]System::Object^% A_0)
//Root::T_x18::T_x1^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldnull
	IL_0002:            A_0=nullptr;                                                //stind.ref
	IL_0003:                                                                        //ldc.i4				0x80004001
	IL_0008:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x2(Root::T_x18::T_x14^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x4()
//Root::T_x18::T_x8^::M_x8 by M_x4
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x5()
//Root::T_x18::T_x8^::M_x13 by M_x5
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
inline System::Int32 Root::T_x58::M_x6()
//Root::T_x18::T_x8^::M_x12 by M_x6
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline System::Int32 Root::T_x58::M_x7()
//Root::T_x18::T_x8^::M_x1 by M_x7
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:            return 0;                                                   //ret

}
inline void Root::T_x58::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x19^ Temp_0 = nullptr;
	Root::T_x18::T_x48^ Temp_1 = nullptr;
	Root::T_x18::T_x48^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x18::T_x19^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x18::T_x6^ Temp_6 = nullptr;
	Root::T_x18::T_x18_1^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Root::T_x18::T_x18_1^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Root::T_x18::T_x18_1^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	Root::T_x18::T_x6^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	Root::T_x18::T_x18_1^ Temp_15 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0046;                                               //br.s				IL_0046
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_018b;case 2:goto IL_0144;case 3:goto IL_0131;case 4:goto IL_00b5;case 5:goto IL_00cb;case 6:goto IL_0165;case 7:goto IL_008c;case 8:goto IL_0059;case 9:goto IL_007c;case 10:goto IL_00f1;case 11:goto IL_00a5;};//switch				(IL_000b,IL_018b,IL_0144,IL_0131,IL_00b5,IL_00cb,IL_0165,IL_008c,IL_0059,IL_007c,IL_00f1,IL_00a5)
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_15=this->F_x12;                                        //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_004c:            if(Temp_15==nullptr)goto IL_00a7;                           //brfalse.s				IL_00a7
	IL_004e:                                                                        //ldc.i4				0x8
	IL_0053:            V_0=8;                                                      //stloc				V_0
	IL_0057:            /*goto IL_000d;*/goto IL_0059;                              //br.s				IL_000d
	IL_0059:            goto IL_00f6;                                               //br				IL_00f6
	IL_005e:                                                                        //ldarg.0
	IL_005f:            Temp_13=this->F_x13;                                        //ldfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0064:            Temp_14=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_13));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0069:                                                                        //pop
	IL_006a:                                                                        //ldarg.0
	IL_006b:                                                                        //ldnull
	IL_006c:            this->F_x13=safe_cast<Root::T_x18::T_x6^>(nullptr);         //stfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0071:                                                                        //ldc.i4				0x9
	IL_0076:            V_0=9;                                                      //stloc				V_0
	IL_007a:            /*goto IL_000d;*/goto IL_007c;                              //br.s				IL_000d
	IL_007c:            goto IL_0136;                                               //br				IL_0136
	IL_0081:                                                                        //ldc.i4				0x7
	IL_0086:            V_0=7;                                                      //stloc				V_0
	IL_008a:            /*goto IL_000d;*/goto IL_008c;                              //br.s				IL_000d
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_6=this->F_x13;                                         //ldfld				Root::T_x18::T_x6^ Root::T_x58 F_x13
	IL_0092:            if(Temp_6==nullptr)goto IL_0136;                            //brfalse				IL_0136
	IL_0097:                                                                        //ldc.i4				0xb
	IL_009c:            V_0=11;                                                     //stloc				V_0
	IL_00a0:            /*goto IL_000d;*/goto IL_00a5;                              //br				IL_000d
	IL_00a5:            goto IL_005e;                                               //br.s				IL_005e
	IL_00a7:                                                                        //ldc.i4				0x4
	IL_00ac:            V_0=4;                                                      //stloc				V_0
	IL_00b0:            /*goto IL_000d;*/goto IL_00b5;                              //br				IL_000d
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_00bb:            if(Temp_1==nullptr)goto IL_0081;                            //brfalse.s				IL_0081
	IL_00bd:                                                                        //ldc.i4				0x5
	IL_00c2:            V_0=5;                                                      //stloc				V_0
	IL_00c6:            /*goto IL_000d;*/goto IL_00cb;                              //br				IL_000d
	IL_00cb:            goto IL_016a;                                               //br				IL_016a
	IL_00d0:                                                                        //ldarg.0
	IL_00d1:            Temp_4=this->F_x2;                                          //ldfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_00d6:            Temp_5=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_4));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_00db:                                                                        //pop
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:                                                                        //ldnull
	IL_00de:            this->F_x2=safe_cast<Root::T_x18::T_x19^>(nullptr);         //stfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_00e3:                                                                        //ldc.i4				0xa
	IL_00e8:            V_0=10;                                                     //stloc				V_0
	IL_00ec:            /*goto IL_000d;*/goto IL_00f1;                              //br				IL_000d
	IL_00f1:            goto IL_0190;                                               //br				IL_0190
	IL_00f6:                                                                        //ldarg.0
	IL_00f7:            Temp_7=this->F_x12;                                         //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_00fc:                                                                        //ldc.i4.1
	IL_00fd:            Temp_8=Temp_7->M_x1(safe_cast<System::Int32>(1));           //callvirt				System::Int32 Root::T_x18::T_x18_1::M_x1(System::Int32)
	IL_0102:                                                                        //pop
	IL_0103:                                                                        //ldarg.0
	IL_0104:            Temp_9=this->F_x12;                                         //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0109:                                                                        //ldnull
	IL_010a:            Temp_10=Temp_9->M_x1(safe_cast<Root::T_x18::T_x12^>(nullptr));//callvirt				System::Int32 Root::T_x18::T_x18_1::M_x1(Root::T_x18::T_x12^)
	IL_010f:                                                                        //pop
	IL_0110:                                                                        //ldarg.0
	IL_0111:            Temp_11=this->F_x12;                                        //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0116:            Temp_12=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_11));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_011b:                                                                        //pop
	IL_011c:                                                                        //ldarg.0
	IL_011d:                                                                        //ldnull
	IL_011e:            this->F_x12=safe_cast<Root::T_x18::T_x18_1^>(nullptr);      //stfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0123:                                                                        //ldc.i4				0x3
	IL_0128:            V_0=3;                                                      //stloc				V_0
	IL_012c:            /*goto IL_000d;*/goto IL_0131;                              //br				IL_000d
	IL_0131:            goto IL_00a7;                                               //br				IL_00a7
	IL_0136:                                                                        //ldc.i4				0x2
	IL_013b:            V_0=2;                                                      //stloc				V_0
	IL_013f:            /*goto IL_000d;*/goto IL_0144;                              //br				IL_000d
	IL_0144:                                                                        //ldarg.0
	IL_0145:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x18::T_x19^ Root::T_x58 F_x2
	IL_014a:            if(Temp_0==nullptr)goto IL_0190;                            //brfalse.s				IL_0190
	IL_014c:                                                                        //ldc.i4.4
	IL_014d:                                                                        //dup
	IL_014e:                                                                        //dup
	IL_014f:                                                                        //ldc.i4.2
	IL_0150:                                                                        //sub
	IL_0151:                                                                        //blt				IL_014d
	IL_0156:                                                                        //pop
	IL_0157:                                                                        //ldc.i4				0x6
	IL_015c:            V_0=6;                                                      //stloc				V_0
	IL_0160:            /*goto IL_000d;*/goto IL_0165;                              //br				IL_000d
	IL_0165:            goto IL_00d0;                                               //br				IL_00d0
	IL_016a:                                                                        //ldarg.0
	IL_016b:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_0170:            Temp_3=System::Runtime::InteropServices::Marshal::ReleaseComObject(safe_cast<System::Object^>(Temp_2));//call				System::Int32 System::Runtime::InteropServices::Marshal::ReleaseComObject(System::Object^)
	IL_0175:                                                                        //pop
	IL_0176:                                                                        //ldarg.0
	IL_0177:                                                                        //ldnull
	IL_0178:            this->F_x8=safe_cast<Root::T_x18::T_x48^>(nullptr);         //stfld				Root::T_x18::T_x48^ Root::T_x58 F_x8
	IL_017d:                                                                        //ldc.i4				0x1
	IL_0182:            V_0=1;                                                      //stloc				V_0
	IL_0186:            /*goto IL_000d;*/goto IL_018b;                              //br				IL_000d
	IL_018b:            goto IL_0081;                                               //br				IL_0081
	IL_0190:            return;                                                     //ret

}
inline void Root::T_x58::M_x8(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x18::T_x14^ Temp_0 = nullptr;
	Root::T_x47^ Temp_1 = nullptr;
	System::Drawing::Rectangle Temp_2;
	System::Int32 Temp_3 = 0;
	Root::T_x47^ Temp_4 = nullptr;
	System::Drawing::Rectangle Temp_5;
	System::Int32 Temp_6 = 0;
	Root::T_x47^ Temp_7 = nullptr;
	System::Drawing::Rectangle Temp_8;
	System::Int32 Temp_9 = 0;
	Root::T_x47^ Temp_10 = nullptr;
	System::Drawing::Rectangle Temp_11;
	System::Int32 Temp_12 = 0;
	Root::T_x18::T_x18_1^ Temp_13 = nullptr;
	System::IntPtr Temp_14 = (System::IntPtr)0;
	Root::T_x47^ Temp_15 = nullptr;
	System::IntPtr Temp_16 = (System::IntPtr)0;
	System::Int32 Temp_17 = 0;
	//local variables.
	Root::T_x18::T_x14^ V_0 = nullptr;
	System::Drawing::Rectangle V_1;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x18::T_x14();                          //newobj				void Root::T_x18::T_x14::.ctor()
	IL_0008:            V_0=Temp_0;                                                 //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0010:            Temp_2=Temp_1->Bounds;                                      //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_Bounds()
	IL_0015:            V_1=Temp_2;                                                 //stloc.1
	IL_0016:                                                                        //ldloca.s				V_1
	IL_0018:            Temp_3=V_1.Left;                                            //call				System::Int32 System::Drawing::Rectangle::get_Left()
	IL_001d:            V_0->F_x1=Temp_3;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x1
	IL_0022:                                                                        //ldloc.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0029:            Temp_5=Temp_4->Bounds;                                      //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_Bounds()
	IL_002e:            V_1=Temp_5;                                                 //stloc.1
	IL_002f:                                                                        //ldloca.s				V_1
	IL_0031:            Temp_6=V_1.Top;                                             //call				System::Int32 System::Drawing::Rectangle::get_Top()
	IL_0036:            V_0->F_x2=Temp_6;                                           //stfld				System::Int32 Root::T_x18::T_x14 F_x2
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0042:            Temp_8=Temp_7->Bounds;                                      //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_Bounds()
	IL_0047:            V_1=Temp_8;                                                 //stloc.1
	IL_0048:                                                                        //ldloca.s				V_1
	IL_004a:            Temp_9=V_1.Bottom;                                          //call				System::Int32 System::Drawing::Rectangle::get_Bottom()
	IL_004f:            V_0->F_x13=Temp_9;                                          //stfld				System::Int32 Root::T_x18::T_x14 F_x13
	IL_0054:                                                                        //ldloc.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:            Temp_10=this->F_x1;                                         //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_005b:            Temp_11=Temp_10->Bounds;                                    //callvirt				System::Drawing::Rectangle System::Windows::Forms::Control::get_Bounds()
	IL_0060:            V_1=Temp_11;                                                //stloc.1
	IL_0061:                                                                        //ldloca.s				V_1
	IL_0063:            Temp_12=V_1.Right;                                          //call				System::Int32 System::Drawing::Rectangle::get_Right()
	IL_0068:            V_0->F_x12=Temp_12;                                         //stfld				System::Int32 Root::T_x18::T_x14 F_x12
	IL_006d:                                                                        //ldarg.0
	IL_006e:            Temp_13=this->F_x12;                                        //ldfld				Root::T_x18::T_x18_1^ Root::T_x58 F_x12
	IL_0073:                                                                        //ldarg.1
	IL_0074:            Temp_14=System::IntPtr::Zero;                               //ldsfld				System::IntPtr System::IntPtr Zero
	IL_0079:                                                                        //ldarg.0
	IL_007a:                                                                        //ldc.i4.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_15=this->F_x1;                                         //ldfld				Root::T_x47^ Root::T_x58 F_x1
	IL_0081:            Temp_16=Temp_15->Handle;                                    //callvirt				System::IntPtr System::Windows::Forms::Control::get_Handle()
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_17=Temp_13->M_x1(A_0,Temp_14,safe_cast<Root::T_x18::T_x12^>(this),safe_cast<System::Int32>(0),Temp_16,V_0);//callvirt				System::Int32 Root::T_x18::T_x18_1::M_x1(System::Int32,System::IntPtr,Root::T_x18::T_x12^,System::Int32,System::IntPtr,Root::T_x18::T_x14^)
	IL_008c:                                                                        //pop
	IL_008d:            return;                                                     //ret

}
inline System::Int32 Root::T_x58::M_x9()
//Root::T_x18::T_x12^::M_x12 by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x80004001
	IL_0005:            return -2147467263;                                         //ret

}
