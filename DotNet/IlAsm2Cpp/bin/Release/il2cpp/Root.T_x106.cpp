#include "global_xref.h"

inline static Root::T_x106::T_x106()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Reflection::Assembly^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::IO::Stream^ Temp_3 = nullptr;
	System::Drawing::Bitmap^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	array<System::Drawing::Image^>^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Drawing::Image^>^ Temp_10 = nullptr;
	System::Drawing::Imaging::PixelFormat Temp_11 = (System::Drawing::Imaging::PixelFormat)0;
	System::Drawing::Bitmap^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::Int32 Temp_14 = 0;
	//local variables.
	System::IO::Stream^ V_0 = nullptr;
	System::Drawing::Bitmap^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Drawing::Rectangle V_3;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_7=10;                                                     //stloc				V_7
	IL_0009:                                                                        //ldnull
	IL_000a:            Root::T_x106::F_x1=safe_cast<array<System::Drawing::Image^>^>(nullptr);//stsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_000f:                                                                        //ldtoken				Root::T_x106
	IL_0014:            Temp_0=Root::T_x106::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0019:            Temp_1=Temp_0->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_001e:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x2D3F\x2F41\x2543\x2845\x2C47\x0849\x2D4B\x3C4D\x7E4F\x2251\x3A53\x3155"
	IL_0023:                                                                        //ldloc				V_7
	IL_0027:            Temp_2=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x2D3F\x2F41\x2543\x2845\x2C47\x0849\x2D4B\x3C4D\x7E4F\x2251\x3A53\x3155",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002c:            Temp_3=Temp_1->GetManifestResourceStream(Temp_2);           //callvirt				System::IO::Stream^ System::Reflection::Assembly::GetManifestResourceStream(System::String^)
	IL_0031:            V_0=Temp_3;                                                 //stloc.0
	IL_0032:            /*goto IL_0034;*/goto IL_003201;                            //br.s				IL_0034
	IL_003201:          try{
	IL_0034:            goto IL_0053;                                               //br.s				IL_0053
	IL_0036:                                                                        //ldloc				V_5
	IL_003a:            switch(V_5){case 0:goto IL_0114;case 1:goto IL_00e1;case 2:goto IL_00f1;case 3:goto IL_0104;case 4:goto IL_00a2;};//switch				(IL_0114,IL_00e1,IL_00f1,IL_0104,IL_00a2)
	IL_0053:                                                                        //ldloc.0
	IL_0054:            Temp_4=gcnew System::Drawing::Bitmap(V_0);                  //newobj				void System::Drawing::Bitmap::.ctor(System::IO::Stream^)
	IL_0059:            V_1=Temp_4;                                                 //stloc.1
	IL_005a:                                                                        //ldloc.1
	IL_005b:            Temp_5=V_1->Width;                                          //callvirt				System::Int32 System::Drawing::Image::get_Width()
	IL_0060:                                                                        //ldloc.1
	IL_0061:            Temp_6=V_1->Height;                                         //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_0066:                                                                        //div
	IL_0067:            V_2=(Temp_5 / Temp_6);                                      //stloc.2
	IL_0068:                                                                        //ldloc.2
	IL_0069:                                                                        //conv.ovf.u4
	IL_006a:            Temp_7=gcnew array<System::Drawing::Image^>(safe_cast<System::UInt32>(V_2));//newarr				System::Drawing::Image
	IL_006f:            Root::T_x106::F_x1=Temp_7;                                  //stsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0074:                                                                        //ldloca.s				V_3
	IL_0076:                                                                        //ldc.i4.0
	IL_0077:                                                                        //ldc.i4.0
	IL_0078:                                                                        //ldloc.1
	IL_0079:            Temp_8=V_1->Height;                                         //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_007e:                                                                        //ldloc.1
	IL_007f:            Temp_9=V_1->Height;                                         //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_0084:            V_3=System::Drawing::Rectangle(safe_cast<System::Int32>(0),safe_cast<System::Int32>(0),Temp_8,Temp_9);//call				void System::Drawing::Rectangle::.ctor(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0089:                                                                        //ldc.i4.0
	IL_008a:            V_4=0;                                                      //stloc.s				V_4
	IL_008c:                                                                        //ldc.i4.2
	IL_008d:                                                                        //dup
	IL_008e:                                                                        //dup
	IL_008f:                                                                        //ldc.i4.4
	IL_0090:                                                                        //sub
	IL_0091:                                                                        //blt				IL_008d
	IL_0096:                                                                        //pop
	IL_0097:                                                                        //ldc.i4				0x4
	IL_009c:            V_5=4;                                                      //stloc				V_5
	IL_00a0:            /*goto IL_0036;*/goto IL_00a2;                              //br.s				IL_0036
	IL_00a2:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00a4:            Temp_10=Root::T_x106::F_x1;                                 //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_00a9:                                                                        //ldloc.s				V_4
	IL_00ab:                                                                        //ldloc.1
	IL_00ac:                                                                        //ldloc.3
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:            Temp_11=V_1->PixelFormat;                                   //callvirt				System::Drawing::Imaging::PixelFormat System::Drawing::Image::get_PixelFormat()
	IL_00b3:            Temp_12=V_1->Clone(V_3,Temp_11);                            //callvirt				System::Drawing::Bitmap^ System::Drawing::Bitmap::Clone(System::Drawing::Rectangle,System::Drawing::Imaging::PixelFormat)
	IL_00b8:            Temp_10[V_4]=safe_cast<System::Drawing::Image^>(Temp_12);   //stelem.ref
	IL_00b9:                                                                        //ldloca.s				V_3
	IL_00bb:                                                                        //dup
	IL_00bc:            Temp_13=V_3.X;                                              //call				System::Int32 System::Drawing::Rectangle::get_X()
	IL_00c1:                                                                        //ldloc.1
	IL_00c2:            Temp_14=V_1->Height;                                        //callvirt				System::Int32 System::Drawing::Image::get_Height()
	IL_00c7:                                                                        //add
	IL_00c8:            V_3.X=(Temp_13 + Temp_14);                                  //call				void System::Drawing::Rectangle::set_X(System::Int32)
	IL_00cd:                                                                        //ldloc.s				V_4
	IL_00cf:                                                                        //ldc.i4.1
	IL_00d0:                                                                        //add
	IL_00d1:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_00d3:                                                                        //ldc.i4				0x1
	IL_00d8:            V_5=1;                                                      //stloc				V_5
	IL_00dc:            /*goto IL_0036;*/goto IL_00e1;                              //br				IL_0036
	IL_00e1:            goto IL_00e3;                                               //br.s				IL_00e3
	IL_00e3:                                                                        //ldc.i4				0x2
	IL_00e8:            V_5=2;                                                      //stloc				V_5
	IL_00ec:            /*goto IL_0036;*/goto IL_00f1;                              //br				IL_0036
	IL_00f1:                                                                        //ldloc.s				V_4
	IL_00f3:                                                                        //ldloc.2
	IL_00f4:            if(V_4<V_2)goto IL_00a4;                                    //blt.s				IL_00a4
	IL_00f6:                                                                        //ldc.i4				0x3
	IL_00fb:            V_5=3;                                                      //stloc				V_5
	IL_00ff:            /*goto IL_0036;*/goto IL_0104;                              //br				IL_0036
	IL_0104:            goto IL_0106;                                               //br.s				IL_0106
	IL_0106:                                                                        //ldc.i4				0x0
	IL_010b:            V_5=0;                                                      //stloc				V_5
	IL_010f:            /*goto IL_0036;*/goto IL_0114;                              //br				IL_0036
	IL_0114:            goto IL_015c;                                               //leave.s				IL_015c
	                    ;}
	                    finally{
	IL_0116:                                                                        //ldc.i4				0x2
	IL_011b:            V_6=2;                                                      //stloc				V_6
	IL_011f:            /*goto IL_0123;*/goto IL_0121;                              //br.s				IL_0123
	IL_0121:            goto IL_0138;                                               //br.s				IL_0138
	IL_0123:                                                                        //ldloc				V_6
	IL_0127:            switch(V_6){case 0:goto IL_0146;case 1:goto IL_0159;case 2:goto IL_0121;};//switch				(IL_0146,IL_0159,IL_0121)
	IL_0138:                                                                        //ldloc.0
	IL_0139:            if(V_0==nullptr)goto IL_015b;                               //brfalse.s				IL_015b
	IL_013b:                                                                        //ldc.i4				0x0
	IL_0140:            V_6=0;                                                      //stloc				V_6
	IL_0144:            /*goto IL_0123;*/goto IL_0146;                              //br.s				IL_0123
	IL_0146:            goto IL_0148;                                               //br.s				IL_0148
	IL_0148:                                                                        //ldloc.0
	IL_0149:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_014e:                                                                        //ldc.i4				0x1
	IL_0153:            V_6=1;                                                      //stloc				V_6
	IL_0157:            /*goto IL_0123;*/goto IL_0159;                              //br.s				IL_0123
	IL_0159:            goto IL_015b;                                               //br.s				IL_015b
	IL_015b:                                                                        //endfinally
	                    ;}
	IL_015c:            return;                                                     //ret

}
inline Root::T_x106::T_x106()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				35
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[35];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				14
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[14];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				17
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[17];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				29
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[29];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				28
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[28];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x14()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.7
	IL_0006:                                                                        //ldelem.ref
	IL_0007:            return Temp_0[7];                                           //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				18
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[18];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				11
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[11];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x17()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.2
	IL_0006:                                                                        //ldelem.ref
	IL_0007:            return Temp_0[2];                                           //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x18()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //ldelem.ref
	IL_0007:            return Temp_0[6];                                           //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.4
	IL_0006:                                                                        //ldelem.ref
	IL_0007:            return Temp_0[4];                                           //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				34
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[34];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				19
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[19];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				22
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[22];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x56()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.1
	IL_0006:                                                                        //ldelem.ref
	IL_0007:            return Temp_0[1];                                           //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				10
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[10];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				12
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[12];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				24
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[24];                                          //ret

}
inline System::Drawing::Image^ Root::T_x106::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Drawing::Image^>^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=Root::T_x106::F_x1;                                  //ldsfld				array<System::Drawing::Image^>^ Root::T_x106 F_x1
	IL_0005:                                                                        //ldc.i4.s				20
	IL_0007:                                                                        //ldelem.ref
	IL_0008:            return Temp_0[20];                                          //ret

}
