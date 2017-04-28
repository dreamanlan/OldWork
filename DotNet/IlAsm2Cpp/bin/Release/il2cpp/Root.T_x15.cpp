#include "global_xref.h"

inline Root::T_x15::T_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::ListViewItem();*/                 //call				void System::Windows::Forms::ListViewItem::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x15::M_x1()
//System::Windows::Forms::ListViewItem^::ToString by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Text;                                          //call				System::String^ System::Windows::Forms::ListViewItem::get_Text()
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x15::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x111^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Int32 Temp_5 = 0;
	System::Drawing::Color Temp_6;
	System::String^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	System::Drawing::Color Temp_10;
	System::String^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	System::Drawing::Color Temp_14;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::Drawing::Color Temp_18;
	System::String^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Int32 Temp_21 = 0;
	System::Drawing::Color Temp_22;
	//local variables.
	Root::T_x111^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_3 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_4 = nullptr;
	Reflector::CodeModel::IEventReference^ V_5 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0047;                                               //br.s				IL_0047
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0148;case 1:goto IL_0220;case 2:goto IL_0238;case 3:goto IL_01b1;case 4:goto IL_0134;case 5:goto IL_011a;case 6:goto IL_0163;case 7:goto IL_024d;case 8:goto IL_01e1;case 9:goto IL_009c;case 10:goto IL_00db;case 11:goto IL_0289;case 12:goto IL_0178;case 13:goto IL_01cc;case 14:goto IL_0088;};//switch				(IL_0148,IL_0220,IL_0238,IL_01b1,IL_0134,IL_011a,IL_0163,IL_024d,IL_01e1,IL_009c,IL_00db,IL_0289,IL_0178,IL_01cc,IL_0088)
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldarg.1
	IL_0049:            this->Tag=safe_cast<System::Object^>(A_0);                  //call				void System::Windows::Forms::ListViewItem::set_Tag(System::Object^)
	IL_004e:                                                                        //ldarg.1
	IL_004f:            Temp_0=gcnew Root::T_x111(A_0);                             //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0054:            V_0=Temp_0;                                                 //stloc.0
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_1=V_0->M_x12();                                        //callvirt				System::String^ Root::T_x111::M_x12()
	IL_005c:            this->Text=Temp_1;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0061:                                                                        //ldarg.0
	IL_0062:                                                                        //ldc.i4				0xa6
	IL_0067:            this->ImageIndex=166;                                       //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_2=this->M_x12();                                       //call				System::Object^ Root::T_x15::M_x12()
	IL_0072:            V_1=Temp_2;                                                 //stloc.1
	IL_0073:                                                                        //ldloc.1
	IL_0074:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0079:            V_2=dynamic_cast<Reflector::CodeModel::ITypeReference^>(V_1);//stloc.2
	IL_007a:                                                                        //ldc.i4				0xe
	IL_007f:            V_7=14;                                                     //stloc				V_7
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldloc.2
	IL_0089:            if(V_2==nullptr)goto IL_011f;                               //brfalse				IL_011f
	IL_008e:                                                                        //ldc.i4				0x9
	IL_0093:            V_7=9;                                                      //stloc				V_7
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:            goto IL_017a;                                               //br				IL_017a
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:                                                                        //ldloc.s				V_5
	IL_00a4:            Temp_11=Root::T_x115::M_x5(V_5);                            //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^)
	IL_00a9:            this->Text=Temp_11;                                         //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_00ae:                                                                        //ldarg.0
	IL_00af:                                                                        //ldloc.s				V_5
	IL_00b1:            Temp_12=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(V_5));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_00b6:            this->ImageIndex=Temp_12;                                   //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_00bb:                                                                        //ldarg.0
	IL_00bc:                                                                        //ldloc.s				V_5
	IL_00be:            Temp_13=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(V_5));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_00c3:            Temp_14=System::Drawing::Color::FromArgb(Temp_13);          //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_00c8:            this->ForeColor=Temp_14;                                    //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_00cd:                                                                        //ldc.i4				0xa
	IL_00d2:            V_7=10;                                                     //stloc				V_7
	IL_00d6:            /*goto IL_0002;*/goto IL_00db;                              //br				IL_0002
	IL_00db:            goto IL_014d;                                               //br.s				IL_014d
	IL_00dd:                                                                        //ldarg.0
	IL_00de:                                                                        //ldloc.s				V_4
	IL_00e0:            Temp_7=Root::T_x115::M_x1(V_4);                             //call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_00e5:            this->Text=Temp_7;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_00ea:                                                                        //ldarg.0
	IL_00eb:                                                                        //ldloc.s				V_4
	IL_00ed:            Temp_8=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(V_4));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_00f2:            this->ImageIndex=Temp_8;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_00f7:                                                                        //ldarg.0
	IL_00f8:                                                                        //ldloc.s				V_4
	IL_00fa:            Temp_9=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(V_4));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_00ff:            Temp_10=System::Drawing::Color::FromArgb(Temp_9);           //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0104:            this->ForeColor=Temp_10;                                    //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0109:            goto IL_010c;                                               //br.s				IL_010c
	IL_010b:                                                                        //break
	IL_010c:                                                                        //ldc.i4				0x5
	IL_0111:            V_7=5;                                                      //stloc				V_7
	IL_0115:            /*goto IL_0002;*/goto IL_011a;                              //br				IL_0002
	IL_011a:            goto IL_01b6;                                               //br				IL_01b6
	IL_011f:                                                                        //ldloc.1
	IL_0120:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0125:            V_3=dynamic_cast<Reflector::CodeModel::IMethodReference^>(V_1);//stloc.3
	IL_0126:                                                                        //ldc.i4				0x4
	IL_012b:            V_7=4;                                                      //stloc				V_7
	IL_012f:            /*goto IL_0002;*/goto IL_0134;                              //br				IL_0002
	IL_0134:                                                                        //ldloc.3
	IL_0135:            if(V_3==nullptr)goto IL_0222;                               //brfalse				IL_0222
	IL_013a:                                                                        //ldc.i4				0x0
	IL_013f:            V_7=0;                                                      //stloc				V_7
	IL_0143:            /*goto IL_0002;*/goto IL_0148;                              //br				IL_0002
	IL_0148:            goto IL_0252;                                               //br				IL_0252
	IL_014d:                                                                        //ldloc.1
	IL_014e:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0153:            V_6=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(V_1);//stloc.s				V_6
	IL_0155:                                                                        //ldc.i4				0x6
	IL_015a:            V_7=6;                                                      //stloc				V_7
	IL_015e:            /*goto IL_0002;*/goto IL_0163;                              //br				IL_0002
	IL_0163:                                                                        //ldloc.s				V_6
	IL_0165:            if(V_6==nullptr)goto IL_028b;                               //brfalse				IL_028b
	IL_016a:                                                                        //ldc.i4				0xc
	IL_016f:            V_7=12;                                                     //stloc				V_7
	IL_0173:            /*goto IL_0002;*/goto IL_0178;                              //br				IL_0002
	IL_0178:            goto IL_01e6;                                               //br.s				IL_01e6
	IL_017a:                                                                        //ldarg.0
	IL_017b:                                                                        //ldloc.2
	IL_017c:            Temp_15=Root::T_x115::M_x8(V_2);                            //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0181:            this->Text=Temp_15;                                         //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_0186:                                                                        //ldarg.0
	IL_0187:                                                                        //ldloc.2
	IL_0188:            Temp_16=Root::T_x116::M_x12(V_2);                           //call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_018d:            this->ImageIndex=Temp_16;                                   //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0192:                                                                        //ldarg.0
	IL_0193:                                                                        //ldloc.2
	IL_0194:            Temp_17=Root::T_x116::M_x1(V_2);                            //call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_0199:            Temp_18=System::Drawing::Color::FromArgb(Temp_17);          //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_019e:            this->ForeColor=Temp_18;                                    //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_01a3:                                                                        //ldc.i4				0x3
	IL_01a8:            V_7=3;                                                      //stloc				V_7
	IL_01ac:            /*goto IL_0002;*/goto IL_01b1;                              //br				IL_0002
	IL_01b1:            goto IL_011f;                                               //br				IL_011f
	IL_01b6:                                                                        //ldloc.1
	IL_01b7:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_01bc:            V_5=dynamic_cast<Reflector::CodeModel::IEventReference^>(V_1);//stloc.s				V_5
	IL_01be:                                                                        //ldc.i4				0xd
	IL_01c3:            V_7=13;                                                     //stloc				V_7
	IL_01c7:            /*goto IL_0002;*/goto IL_01cc;                              //br				IL_0002
	IL_01cc:                                                                        //ldloc.s				V_5
	IL_01ce:            if(V_5==nullptr)goto IL_014d;                               //brfalse				IL_014d
	IL_01d3:                                                                        //ldc.i4				0x8
	IL_01d8:            V_7=8;                                                      //stloc				V_7
	IL_01dc:            /*goto IL_0002;*/goto IL_01e1;                              //br				IL_0002
	IL_01e1:            goto IL_00a1;                                               //br				IL_00a1
	IL_01e6:                                                                        //ldarg.0
	IL_01e7:                                                                        //ldloc.s				V_6
	IL_01e9:            Temp_19=Root::T_x115::M_x12(V_6);                           //call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IPropertyReference^)
	IL_01ee:            this->Text=Temp_19;                                         //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_01f3:                                                                        //ldarg.0
	IL_01f4:                                                                        //ldloc.s				V_6
	IL_01f6:            Temp_20=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(V_6));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_01fb:            this->ImageIndex=Temp_20;                                   //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_0200:                                                                        //ldarg.0
	IL_0201:                                                                        //ldloc.s				V_6
	IL_0203:            Temp_21=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(V_6));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0208:            Temp_22=System::Drawing::Color::FromArgb(Temp_21);          //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_020d:            this->ForeColor=Temp_22;                                    //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_0212:                                                                        //ldc.i4				0x1
	IL_0217:            V_7=1;                                                      //stloc				V_7
	IL_021b:            /*goto IL_0002;*/goto IL_0220;                              //br				IL_0002
	IL_0220:            goto IL_028b;                                               //br.s				IL_028b
	IL_0222:                                                                        //ldloc.1
	IL_0223:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0228:            V_4=dynamic_cast<Reflector::CodeModel::IFieldReference^>(V_1);//stloc.s				V_4
	IL_022a:                                                                        //ldc.i4				0x2
	IL_022f:            V_7=2;                                                      //stloc				V_7
	IL_0233:            /*goto IL_0002;*/goto IL_0238;                              //br				IL_0002
	IL_0238:                                                                        //ldloc.s				V_4
	IL_023a:            if(V_4==nullptr)goto IL_01b6;                               //brfalse				IL_01b6
	IL_023f:                                                                        //ldc.i4				0x7
	IL_0244:            V_7=7;                                                      //stloc				V_7
	IL_0248:            /*goto IL_0002;*/goto IL_024d;                              //br				IL_0002
	IL_024d:            goto IL_00dd;                                               //br				IL_00dd
	IL_0252:                                                                        //ldarg.0
	IL_0253:                                                                        //ldloc.3
	IL_0254:            Temp_3=Root::T_x115::M_x1(V_3);                             //call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_0259:            this->Text=Temp_3;                                          //call				void System::Windows::Forms::ListViewItem::set_Text(System::String^)
	IL_025e:                                                                        //ldarg.0
	IL_025f:                                                                        //ldloc.3
	IL_0260:            Temp_4=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(V_3));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0265:            this->ImageIndex=Temp_4;                                    //call				void System::Windows::Forms::ListViewItem::set_ImageIndex(System::Int32)
	IL_026a:                                                                        //ldarg.0
	IL_026b:                                                                        //ldloc.3
	IL_026c:            Temp_5=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(V_3));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0271:            Temp_6=System::Drawing::Color::FromArgb(Temp_5);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0276:            this->ForeColor=Temp_6;                                     //call				void System::Windows::Forms::ListViewItem::set_ForeColor(System::Drawing::Color)
	IL_027b:                                                                        //ldc.i4				0xb
	IL_0280:            V_7=11;                                                     //stloc				V_7
	IL_0284:            /*goto IL_0002;*/goto IL_0289;                              //br				IL_0002
	IL_0289:            goto IL_0222;                                               //br.s				IL_0222
	IL_028b:            return;                                                     //ret

}
inline System::Object^ Root::T_x15::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Root::T_x111^ Temp_1 = nullptr;
	System::Windows::Forms::ListView^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x111^ V_0 = nullptr;
	Root::T_x103^ V_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ V_2 = nullptr;
	System::Object^ V_3 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.4
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.2
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0011:                                                                        //castclass				System::String
	IL_0016:            Temp_1=gcnew Root::T_x111(safe_cast<System::String^>(Temp_0));//newobj				void Root::T_x111::.ctor(System::String^)
	IL_001b:            V_0=Temp_1;                                                 //stloc.0
	IL_001c:                                                                        //ldarg.0
	IL_001d:            Temp_2=this->ListView;                                      //call				System::Windows::Forms::ListView^ System::Windows::Forms::ListViewItem::get_ListView()
	IL_0022:                                                                        //castclass				Root::T_x103
	IL_0027:            V_1=safe_cast<Root::T_x103^>(Temp_2);                       //stloc.1
	IL_0028:                                                                        //ldloc.1
	IL_0029:            Temp_3=V_1->M_x12();                                        //callvirt				Reflector::CodeModel::IAssemblyManager^ Root::T_x103::M_x12()
	IL_002e:            V_2=Temp_3;                                                 //stloc.2
	IL_002f:                                                                        //ldloc.0
	IL_0030:                                                                        //ldloc.2
	IL_0031:            Temp_4=V_0->M_x1(V_2);                                      //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_0036:            V_3=Temp_4;                                                 //stloc.3
	IL_0037:                                                                        //ldloc.3
	IL_0038:            return V_3;                                                 //ret

}
inline System::String^ Root::T_x15::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Tag;                                           //call				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0006:                                                                        //castclass				System::String
	IL_000b:            return safe_cast<System::String^>(Temp_0);                  //ret

}
