#include "global_xref.h"

inline Root::T_x103::T_x103(Root::T_x7^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::IAssemblyBrowser^ A_2,Reflector::ICommandBarManager^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Windows::Forms::ColumnHeader^>^ Temp_0 = nullptr;
	System::Windows::Forms::ColumnHeader^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::ListView::ColumnHeaderCollection^ Temp_3 = nullptr;
	System::Windows::Forms::ImageList^ Temp_4 = nullptr;
	System::Windows::Forms::ImageList^ Temp_5 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_6 = nullptr;
	System::Drawing::Image^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Windows::Forms::ImageList^ Temp_9 = nullptr;
	System::Windows::Forms::ImageList^ Temp_10 = nullptr;
	System::Drawing::Color Temp_11;
	Reflector::ICommandBarCollection^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	Reflector::ICommandBar^ Temp_14 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Drawing::Image^ Temp_17 = nullptr;
	System::EventHandler^ Temp_18 = nullptr;
	Reflector::ICommandBarButton^ Temp_19 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_20 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_21 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::EventHandler^ Temp_24 = nullptr;
	Reflector::ICommandBarButton^ Temp_25 = nullptr;
	Root::T_x7^ Temp_26 = nullptr;
	System::EventHandler^ Temp_27 = nullptr;
	Root::T_x7^ Temp_28 = nullptr;
	System::EventHandler^ Temp_29 = nullptr;
	//local variables.
	array<System::Windows::Forms::ColumnHeader^>^ V_0 = nullptr;
	Reflector::ICommandBar^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::ListView();*/                     //call				void System::Windows::Forms::ListView::.ctor()
	IL_000f:                                                                        //ldc.i4.1
	IL_0010:            Temp_0=gcnew array<System::Windows::Forms::ColumnHeader^>(1);//newarr				System::Windows::Forms::ColumnHeader
	IL_0015:            V_0=Temp_0;                                                 //stloc.0
	IL_0016:                                                                        //ldloc.0
	IL_0017:                                                                        //ldc.i4.0
	IL_0018:            Temp_1=gcnew System::Windows::Forms::ColumnHeader();        //newobj				void System::Windows::Forms::ColumnHeader::.ctor()
	IL_001d:            V_0[0]=Temp_1;                                              //stelem.ref
	IL_001e:                                                                        //ldloc.0
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:                                                                        //ldelem.ref
	IL_0021:                                                                        //ldstr				L"\x6F20\x4222\x4824\x4226"
	IL_0026:                                                                        //ldloc				V_2
	IL_002a:            Temp_2=a(L"\x6F20\x4222\x4824\x4226",V_2);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002f:            V_0[0]->Text=Temp_2;                                        //callvirt				void System::Windows::Forms::ColumnHeader::set_Text(System::String^)
	IL_0034:                                                                        //ldloc.0
	IL_0035:                                                                        //ldc.i4.0
	IL_0036:                                                                        //ldelem.ref
	IL_0037:                                                                        //ldc.i4				0x320
	IL_003c:            V_0[0]->Width=800;                                          //callvirt				void System::Windows::Forms::ColumnHeader::set_Width(System::Int32)
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_3=this->Columns;                                       //call				System::Windows::Forms::ListView::ColumnHeaderCollection^ System::Windows::Forms::ListView::get_Columns()
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_3->AddRange(V_0);                                      //callvirt				void System::Windows::Forms::ListView::ColumnHeaderCollection::AddRange(array<System::Windows::Forms::ColumnHeader^>^)
	IL_004d:                                                                        //ldarg.0
	IL_004e:                                                                        //ldc.i4.5
	IL_004f:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldc.i4.1
	IL_0056:            this->View=safe_cast<System::Windows::Forms::View>(1);      //call				void System::Windows::Forms::ListView::set_View(System::Windows::Forms::View)
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //ldc.i4.1
	IL_005d:            this->MultiSelect=true;                                     //call				void System::Windows::Forms::ListView::set_MultiSelect(System::Boolean)
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldc.i4.1
	IL_0064:            this->FullRowSelect=true;                                   //call				void System::Windows::Forms::ListView::set_FullRowSelect(System::Boolean)
	IL_0069:                                                                        //ldarg.0
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:            this->HideSelection=false;                                  //call				void System::Windows::Forms::ListView::set_HideSelection(System::Boolean)
	IL_0070:                                                                        //ldarg.0
	IL_0071:            Temp_4=gcnew System::Windows::Forms::ImageList();           //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0076:            this->SmallImageList=Temp_4;                                //call				void System::Windows::Forms::ListView::set_SmallImageList(System::Windows::Forms::ImageList^)
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_5=this->SmallImageList;                                //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0081:            Temp_6=Temp_5->Images;                                      //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0086:            Temp_7=Root::T_x117::M_x1();                                //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_008b:            Temp_8=Temp_6->AddStrip(Temp_7);                            //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_0090:                                                                        //pop
	IL_0091:                                                                        //ldarg.0
	IL_0092:            Temp_9=this->SmallImageList;                                //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_0097:                                                                        //ldc.i4.s				32
	IL_0099:            Temp_9->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_10=this->SmallImageList;                               //call				System::Windows::Forms::ImageList^ System::Windows::Forms::ListView::get_SmallImageList()
	IL_00a4:                                                                        //ldc.i4				0xff
	IL_00a9:                                                                        //ldc.i4.0
	IL_00aa:                                                                        //ldc.i4				0x80
	IL_00af:                                                                        //ldc.i4.0
	IL_00b0:            Temp_11=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00b5:            Temp_10->TransparentColor=Temp_11;                          //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //ldarg.3
	IL_00bc:            this->F_x1=A_2;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x103 F_x1
	IL_00c1:                                                                        //ldarg.0
	IL_00c2:                                                                        //ldarg.1
	IL_00c3:            this->F_x12=A_0;                                            //stfld				Root::T_x7^ Root::T_x103 F_x12
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:                                                                        //ldarg.2
	IL_00ca:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x103 F_x2
	IL_00cf:                                                                        //ldarg.s				A_3
	IL_00d1:            Temp_12=A_3->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_00d6:                                                                        //ldstr				L"\x6320\x4C22\x4A24\x4C26\x4428\x4A2A\x5F2C\x442E\x1F30\x7732\x5034\x5136\x5838\x4E3A\x513C\x4B3E"
	IL_00db:                                                                        //ldloc				V_2
	IL_00df:            Temp_13=a(L"\x6320\x4C22\x4A24\x4C26\x4428\x4A2A\x5F2C\x442E\x1F30\x7732\x5034\x5136\x5838\x4E3A\x513C\x4B3E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e4:            Temp_14=Temp_12->AddContextMenu(Temp_13);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_00e9:            V_1=Temp_14;                                                //stloc.1
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:            Temp_15=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00f0:                                                                        //ldstr				L"\x0720\x6022\x4A24\x5726\x5028"
	IL_00f5:                                                                        //ldloc				V_2
	IL_00f9:            Temp_16=a(L"\x0720\x6022\x4A24\x5726\x5028",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fe:            Temp_17=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0103:                                                                        //ldarg.0
	IL_0104:                                                                        //ldftn				void Root::T_x103::M_x13(System::Object^,System::EventArgs^)
	IL_010a:            Temp_18=gcnew System::EventHandler(this,&Root::T_x103::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_010f:                                                                        //ldc.i4				0x20043
	IL_0114:            Temp_19=Temp_15->AddButton(Temp_16,Temp_17,Temp_18,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0119:                                                                        //pop
	IL_011a:                                                                        //ldloc.1
	IL_011b:            Temp_20=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0120:            Temp_21=Temp_20->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0125:                                                                        //pop
	IL_0126:                                                                        //ldloc.1
	IL_0127:            Temp_22=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_012c:                                                                        //ldstr				L"\x0720\x7122\x4024\x4A26\x4628\x5D2A\x482C\x0F2E\x7330\x5C32\x5A34\x5C36\x5438\x5A3A\x4F3C\x543E"
	IL_0131:                                                                        //ldloc				V_2
	IL_0135:            Temp_23=a(L"\x0720\x7122\x4024\x4A26\x4628\x5D2A\x482C\x0F2E\x7330\x5C32\x5A34\x5C36\x5438\x5A3A\x4F3C\x543E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013a:                                                                        //ldarg.0
	IL_013b:                                                                        //ldftn				void Root::T_x103::M_x12(System::Object^,System::EventArgs^)
	IL_0141:            Temp_24=gcnew System::EventHandler(this,&Root::T_x103::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0146:            Temp_25=Temp_22->AddButton(Temp_23,Temp_24);                //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::EventHandler^)
	IL_014b:                                                                        //pop
	IL_014c:                                                                        //ldarg.0
	IL_014d:                                                                        //ldloc.1
	IL_014e:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0153:            this->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_1);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_0158:                                                                        //ldarg.0
	IL_0159:            Temp_26=this->F_x12;                                        //ldfld				Root::T_x7^ Root::T_x103 F_x12
	IL_015e:                                                                        //ldarg.0
	IL_015f:                                                                        //ldftn				void Root::T_x103::M_x2(System::Object^,System::EventArgs^)
	IL_0165:            Temp_27=gcnew System::EventHandler(this,&Root::T_x103::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_016a:            Temp_26->M_x1(Temp_27);                                     //callvirt				void Root::T_x7::M_x1(System::EventHandler^)
	IL_016f:                                                                        //ldarg.0
	IL_0170:            Temp_28=this->F_x12;                                        //ldfld				Root::T_x7^ Root::T_x103 F_x12
	IL_0175:                                                                        //ldarg.0
	IL_0176:                                                                        //ldftn				void Root::T_x103::M_x1(System::Object^,System::EventArgs^)
	IL_017c:            Temp_29=gcnew System::EventHandler(this,&Root::T_x103::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0181:            Temp_28->M_x12(Temp_29);                                    //callvirt				void Root::T_x7::M_x12(System::EventHandler^)
	IL_0186:            return;                                                     //ret

}
inline void Root::T_x103::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_0 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_3 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	//local variables.
	Root::T_x15^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_2=0;                                                      //stloc				V_2
	IL_0009:            /*goto IL_0018;*/goto IL_000b;                              //br.s				IL_0018
	IL_000b:                                                                        //ldc.i4.5
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //sub
	IL_0010:                                                                        //blt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:            goto IL_0035;                                               //br.s				IL_0035
	IL_0018:                                                                        //ldloc				V_2
	IL_001c:            switch(V_2){case 0:goto IL_000b;case 1:goto IL_004e;case 2:goto IL_0067;case 3:goto IL_008d;case 4:goto IL_009e;};//switch				(IL_000b,IL_004e,IL_0067,IL_008d,IL_009e)
	IL_0035:                                                                        //ldarg.0
	IL_0036:            Temp_4=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_003b:            Temp_5=Temp_4->Count;                                       //callvirt				System::Int32 System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Count()
	IL_0040:                                                                        //ldc.i4.1
	IL_0041:            if(Temp_5!=1)goto IL_00a0;                                  //bne.un.s				IL_00a0
	IL_0043:                                                                        //ldc.i4				0x1
	IL_0048:            V_2=1;                                                      //stloc				V_2
	IL_004c:            /*goto IL_0018;*/goto IL_004e;                              //br.s				IL_0018
	IL_004e:            goto IL_0069;                                               //br.s				IL_0069
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_3=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x103 F_x1
	IL_0056:                                                                        //ldloc.1
	IL_0057:            Temp_3->ActiveItem=V_1;                                     //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_005c:                                                                        //ldc.i4				0x2
	IL_0061:            V_2=2;                                                      //stloc				V_2
	IL_0065:            /*goto IL_0018;*/goto IL_0067;                              //br.s				IL_0018
	IL_0067:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_0069:                                                                        //ldarg.0
	IL_006a:            Temp_0=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_006f:                                                                        //ldc.i4.0
	IL_0070:            Temp_1=Temp_0[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::SelectedListViewItemCollection::get_Item(System::Int32)
	IL_0075:                                                                        //castclass				Root::T_x15
	IL_007a:            V_0=safe_cast<Root::T_x15^>(Temp_1);                        //stloc.0
	IL_007b:                                                                        //ldloc.0
	IL_007c:            Temp_2=V_0->M_x12();                                        //callvirt				System::Object^ Root::T_x15::M_x12()
	IL_0081:            V_1=Temp_2;                                                 //stloc.1
	IL_0082:                                                                        //ldc.i4				0x3
	IL_0087:            V_2=3;                                                      //stloc				V_2
	IL_008b:            /*goto IL_0018;*/goto IL_008d;                              //br.s				IL_0018
	IL_008d:                                                                        //ldloc.1
	IL_008e:            if(V_1==nullptr)goto IL_00a0;                               //brfalse.s				IL_00a0
	IL_0090:                                                                        //ldc.i4				0x4
	IL_0095:            V_2=4;                                                      //stloc				V_2
	IL_0099:            /*goto IL_0018;*/goto IL_009e;                              //br				IL_0018
	IL_009e:            goto IL_0050;                                               //br.s				IL_0050
	IL_00a0:            return;                                                     //ret

}
inline void Root::T_x103::M_x1(System::EventArgs^ A_0)
//System::Windows::Forms::ListView^::OnItemActivate by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::ListView::OnItemActivate(A_0);      //call				void System::Windows::Forms::ListView::OnItemActivate(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            this->M_x1();                                               //call				void Root::T_x103::M_x1()
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x103::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x2();                                               //call				void Root::T_x103::M_x2()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyManager^ Root::T_x103::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x103 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x103::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	Root::T_x7^ Temp_4 = nullptr;
	Root::T_x102^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	//local variables.
	Root::T_x15^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0006:            Temp_1=Temp_0->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_000b:            V_1=Temp_1;                                                 //stloc.1
	IL_000c:            /*goto IL_000e;*/goto IL_000C01;                            //br.s				IL_000e
	IL_000C01:          try{
	IL_000e:                                                                        //ldc.i4				0x2
	IL_0013:            V_3=2;                                                      //stloc				V_3
	IL_0017:            /*goto IL_001b;*/goto IL_0019;                              //br.s				IL_001b
	IL_0019:            goto IL_0038;                                               //br.s				IL_0038
	IL_001b:                                                                        //ldloc				V_3
	IL_001f:            switch(V_3){case 0:goto IL_008c;case 1:goto IL_0079;case 2:goto IL_0019;case 3:goto IL_0099;case 4:goto IL_006c;};//switch				(IL_008c,IL_0079,IL_0019,IL_0099,IL_006c)
	IL_0038:            goto IL_006e;                                               //br.s				IL_006e
	IL_003a:                                                                        //ldloc.1
	IL_003b:            Temp_3=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0040:                                                                        //castclass				Root::T_x15
	IL_0045:            V_0=safe_cast<Root::T_x15^>(Temp_3);                        //stloc.0
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_4=this->F_x12;                                         //ldfld				Root::T_x7^ Root::T_x103 F_x12
	IL_004c:            Temp_5=Temp_4->M_x1();                                      //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0051:                                                                        //ldloc.0
	IL_0052:            Temp_6=V_0->Tag;                                            //callvirt				System::Object^ System::Windows::Forms::ListViewItem::get_Tag()
	IL_0057:                                                                        //castclass				System::String
	IL_005c:            Temp_5->M_x2(safe_cast<System::String^>(Temp_6));           //callvirt				void Root::T_x102::M_x2(System::String^)
	IL_0061:                                                                        //ldc.i4				0x4
	IL_0066:            V_3=4;                                                      //stloc				V_3
	IL_006a:            /*goto IL_001b;*/goto IL_006c;                              //br.s				IL_001b
	IL_006c:            goto IL_006e;                                               //br.s				IL_006e
	IL_006e:                                                                        //ldc.i4				0x1
	IL_0073:            V_3=1;                                                      //stloc				V_3
	IL_0077:            /*goto IL_001b;*/goto IL_0079;                              //br.s				IL_001b
	IL_0079:                                                                        //ldloc.1
	IL_007a:            Temp_2=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007f:            if(Temp_2)goto IL_003a;                                     //brtrue.s				IL_003a
	IL_0081:                                                                        //ldc.i4				0x0
	IL_0086:            V_3=0;                                                      //stloc				V_3
	IL_008a:            /*goto IL_001b;*/goto IL_008c;                              //br.s				IL_001b
	IL_008c:            goto IL_008e;                                               //br.s				IL_008e
	IL_008e:                                                                        //ldc.i4				0x3
	IL_0093:            V_3=3;                                                      //stloc				V_3
	IL_0097:            /*goto IL_001b;*/goto IL_0099;                              //br.s				IL_001b
	IL_0099:            goto IL_00e8;                                               //leave.s				IL_00e8
	                    ;}
	                    finally{
	IL_009b:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_009d:                                                                        //ldloc				V_4
	IL_00a1:            switch(V_4){case 0:goto IL_00c4;case 1:goto IL_00e5;case 2:goto IL_00d2;};//switch				(IL_00c4,IL_00e5,IL_00d2)
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:                                                                        //isinst				System::IDisposable
	IL_00b8:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00b9:                                                                        //ldc.i4				0x0
	IL_00be:            V_4=0;                                                      //stloc				V_4
	IL_00c2:            /*goto IL_009d;*/goto IL_00c4;                              //br.s				IL_009d
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:            if(V_2==nullptr)goto IL_00e7;                               //brfalse.s				IL_00e7
	IL_00c7:                                                                        //ldc.i4				0x2
	IL_00cc:            V_4=2;                                                      //stloc				V_4
	IL_00d0:            /*goto IL_009d;*/goto IL_00d2;                              //br.s				IL_009d
	IL_00d2:            goto IL_00d4;                                               //br.s				IL_00d4
	IL_00d4:                                                                        //ldloc.2
	IL_00d5:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00da:                                                                        //ldc.i4				0x1
	IL_00df:            V_4=1;                                                      //stloc				V_4
	IL_00e3:            /*goto IL_009d;*/goto IL_00e5;                              //br.s				IL_009d
	IL_00e5:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00e7:                                                                        //endfinally
	                    ;}
	IL_00e8:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00ea:                                                                        //break
	IL_00eb:            return;                                                     //ret

}
inline void Root::T_x103::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Windows::Forms::ListViewItem^ V_1 = nullptr;
	System::Collections::IEnumerator^ V_2 = nullptr;
	System::IDisposable^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0005:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000a:            V_0=Temp_1;                                                 //stloc.0
	IL_000b:            /*goto IL_000d;*/goto IL_000B01;                            //br.s				IL_000d
	IL_000B01:          try{
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_2=this->SelectedItems;                                 //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_0013:            Temp_3=Temp_2->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::ListView::SelectedListViewItemCollection::GetEnumerator()
	IL_0018:            V_2=Temp_3;                                                 //stloc.2
	IL_0019:            /*goto IL_001b;*/goto IL_001901;                            //br.s				IL_001b
	IL_001901:          try{
	IL_001b:                                                                        //ldc.i4				0x4
	IL_0020:            V_4=4;                                                      //stloc				V_4
	IL_0024:            /*goto IL_0028;*/goto IL_0026;                              //br.s				IL_0028
	IL_0026:            goto IL_0045;                                               //br.s				IL_0045
	IL_0028:                                                                        //ldloc				V_4
	IL_002c:            switch(V_4){case 0:goto IL_006a;case 1:goto IL_0077;case 2:goto IL_008a;case 3:goto IL_0097;case 4:goto IL_0026;};//switch				(IL_006a,IL_0077,IL_008a,IL_0097,IL_0026)
	IL_0045:            goto IL_006c;                                               //br.s				IL_006c
	IL_0047:                                                                        //ldloc.2
	IL_0048:            Temp_5=V_2->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_004d:                                                                        //castclass				System::Windows::Forms::ListViewItem
	IL_0052:            V_1=safe_cast<System::Windows::Forms::ListViewItem^>(Temp_5);//stloc.1
	IL_0053:                                                                        //ldloc.0
	IL_0054:                                                                        //ldloc.1
	IL_0055:            Temp_6=V_1->ToString();                                     //callvirt				System::String^ System::Windows::Forms::ListViewItem::ToString()
	IL_005a:            V_0->WriteLine(Temp_6);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_4=0;                                                      //stloc				V_4
	IL_0068:            /*goto IL_0028;*/goto IL_006a;                              //br.s				IL_0028
	IL_006a:            goto IL_006c;                                               //br.s				IL_006c
	IL_006c:                                                                        //ldc.i4				0x1
	IL_0071:            V_4=1;                                                      //stloc				V_4
	IL_0075:            /*goto IL_0028;*/goto IL_0077;                              //br.s				IL_0028
	IL_0077:                                                                        //ldloc.2
	IL_0078:            Temp_4=V_2->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_007d:            if(Temp_4)goto IL_0047;                                     //brtrue.s				IL_0047
	IL_007f:                                                                        //ldc.i4				0x2
	IL_0084:            V_4=2;                                                      //stloc				V_4
	IL_0088:            /*goto IL_0028;*/goto IL_008a;                              //br.s				IL_0028
	IL_008a:            goto IL_008c;                                               //br.s				IL_008c
	IL_008c:                                                                        //ldc.i4				0x3
	IL_0091:            V_4=3;                                                      //stloc				V_4
	IL_0095:            /*goto IL_0028;*/goto IL_0097;                              //br.s				IL_0028
	IL_0097:            goto IL_00e6;                                               //leave.s				IL_00e6
	                    ;}
	                    finally{
	IL_0099:            goto IL_00b0;                                               //br.s				IL_00b0
	IL_009b:                                                                        //ldloc				V_5
	IL_009f:            switch(V_5){case 0:goto IL_00e3;case 1:goto IL_00c2;case 2:goto IL_00d0;};//switch				(IL_00e3,IL_00c2,IL_00d0)
	IL_00b0:                                                                        //ldloc.2
	IL_00b1:                                                                        //isinst				System::IDisposable
	IL_00b6:            V_3=dynamic_cast<System::IDisposable^>(V_2);                //stloc.3
	IL_00b7:                                                                        //ldc.i4				0x1
	IL_00bc:            V_5=1;                                                      //stloc				V_5
	IL_00c0:            /*goto IL_009b;*/goto IL_00c2;                              //br.s				IL_009b
	IL_00c2:                                                                        //ldloc.3
	IL_00c3:            if(V_3==nullptr)goto IL_00e5;                               //brfalse.s				IL_00e5
	IL_00c5:                                                                        //ldc.i4				0x2
	IL_00ca:            V_5=2;                                                      //stloc				V_5
	IL_00ce:            /*goto IL_009b;*/goto IL_00d0;                              //br.s				IL_009b
	IL_00d0:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00d2:                                                                        //ldloc.3
	IL_00d3:            /*V_3->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00d8:                                                                        //ldc.i4				0x0
	IL_00dd:            V_5=0;                                                      //stloc				V_5
	IL_00e1:            /*goto IL_009b;*/goto IL_00e3;                              //br.s				IL_009b
	IL_00e3:            goto IL_00e5;                                               //br.s				IL_00e5
	IL_00e5:                                                                        //endfinally
	                    ;}
	IL_00e6:                                                                        //ldloc.0
	IL_00e7:            Temp_7=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_00ec:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_7));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_00f1:            goto IL_0139;                                               //leave.s				IL_0139
	                    ;}
	                    finally{
	IL_00f3:                                                                        //ldc.i4				0x0
	IL_00f8:            V_6=0;                                                      //stloc				V_6
	IL_00fc:            /*goto IL_0100;*/goto IL_00fe;                              //br.s				IL_0100
	IL_00fe:            goto IL_0115;                                               //br.s				IL_0115
	IL_0100:                                                                        //ldloc				V_6
	IL_0104:            switch(V_6){case 0:goto IL_00fe;case 1:goto IL_0123;case 2:goto IL_0136;};//switch				(IL_00fe,IL_0123,IL_0136)
	IL_0115:                                                                        //ldloc.0
	IL_0116:            if(V_0==nullptr)goto IL_0138;                               //brfalse.s				IL_0138
	IL_0118:                                                                        //ldc.i4				0x1
	IL_011d:            V_6=1;                                                      //stloc				V_6
	IL_0121:            /*goto IL_0100;*/goto IL_0123;                              //br.s				IL_0100
	IL_0123:            goto IL_0125;                                               //br.s				IL_0125
	IL_0125:                                                                        //ldloc.0
	IL_0126:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_012b:                                                                        //ldc.i4				0x2
	IL_0130:            V_6=2;                                                      //stloc				V_6
	IL_0134:            /*goto IL_0100;*/goto IL_0136;                              //br.s				IL_0100
	IL_0136:            goto IL_0138;                                               //br.s				IL_0138
	IL_0138:                                                                        //endfinally
	                    ;}
	IL_0139:                                                                        //ldc.i4.4
	IL_013a:                                                                        //dup
	IL_013b:                                                                        //dup
	IL_013c:                                                                        //ldc.i4.2
	IL_013d:                                                                        //sub
	IL_013e:                                                                        //blt				IL_013a
	IL_0143:                                                                        //pop
	IL_0144:            return;                                                     //ret

}
inline void Root::T_x103::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_0 = nullptr;
	Root::T_x7^ Temp_1 = nullptr;
	Root::T_x102^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x15^ Temp_4 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_5 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_6 = nullptr;
	Root::T_x7^ Temp_7 = nullptr;
	Root::T_x102^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::ListView::SelectedListViewItemCollection^ Temp_10 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_11 = nullptr;
	System::Windows::Forms::ListViewItem^ Temp_12 = nullptr;
	System::Windows::Forms::ListView::ListViewItemCollection^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x15^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0104;case 1:goto IL_0099;case 2:goto IL_003f;case 3:goto IL_0078;case 4:goto IL_006b;case 5:goto IL_00d7;case 6:goto IL_004c;};//switch				(IL_0104,IL_0099,IL_003f,IL_0078,IL_006b,IL_00d7,IL_004c)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            Temp_0=this->Items;                                         //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_002d:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::ListView::ListViewItemCollection::Clear()
	IL_0032:                                                                        //ldc.i4.0
	IL_0033:            V_0=0;                                                      //stloc.0
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_2=2;                                                      //stloc				V_2
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_006d;                                               //br.s				IL_006d
	IL_0041:                                                                        //ldc.i4				0x6
	IL_0046:            V_2=6;                                                      //stloc				V_2
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:            goto IL_004f;                                               //br.s				IL_004f
	IL_004e:                                                                        //break
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_13=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_0055:            Temp_14=Temp_13->Count;                                     //callvirt				System::Int32 System::Windows::Forms::ListView::ListViewItemCollection::get_Count()
	IL_005a:                                                                        //ldc.i4.0
	IL_005b:            if(Temp_14<=0)goto IL_0106;                                 //ble				IL_0106
	IL_0060:                                                                        //ldc.i4				0x4
	IL_0065:            V_2=4;                                                      //stloc				V_2
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_00d9;                                               //br.s				IL_00d9
	IL_006d:                                                                        //ldc.i4				0x3
	IL_0072:            V_2=3;                                                      //stloc				V_2
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //ldarg.0
	IL_007a:            Temp_1=this->F_x12;                                         //ldfld				Root::T_x7^ Root::T_x103 F_x12
	IL_007f:            Temp_2=Temp_1->M_x1();                                      //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_0084:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0089:            if(V_0<Temp_3)goto IL_009b;                                 //blt.s				IL_009b
	IL_008b:                                                                        //ldc.i4				0x1
	IL_0090:            V_2=1;                                                      //stloc				V_2
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:            goto IL_0041;                                               //br.s				IL_0041
	IL_009b:            Temp_4=gcnew Root::T_x15();                                 //newobj				void Root::T_x15::.ctor()
	IL_00a0:            V_1=Temp_4;                                                 //stloc.1
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_5=this->Items;                                         //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00a7:                                                                        //ldloc.1
	IL_00a8:            Temp_6=Temp_5->Add(safe_cast<System::Windows::Forms::ListViewItem^>(V_1));//callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::Add(System::Windows::Forms::ListViewItem^)
	IL_00ad:                                                                        //pop
	IL_00ae:                                                                        //ldloc.1
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_7=this->F_x12;                                         //ldfld				Root::T_x7^ Root::T_x103 F_x12
	IL_00b5:            Temp_8=Temp_7->M_x1();                                      //callvirt				Root::T_x102^ Root::T_x7::M_x1()
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:            Temp_9=Temp_8->M_x2(V_0);                                   //callvirt				System::String^ Root::T_x102::M_x2(System::Int32)
	IL_00c0:            V_1->M_x1(Temp_9);                                          //callvirt				void Root::T_x15::M_x1(System::String^)
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldc.i4.1
	IL_00c7:                                                                        //add
	IL_00c8:            V_0=(V_0 + 1);                                              //stloc.0
	IL_00c9:                                                                        //ldc.i4				0x5
	IL_00ce:            V_2=5;                                                      //stloc				V_2
	IL_00d2:            /*goto IL_0002;*/goto IL_00d7;                              //br				IL_0002
	IL_00d7:            goto IL_006d;                                               //br.s				IL_006d
	IL_00d9:                                                                        //ldarg.0
	IL_00da:            Temp_10=this->SelectedItems;                                //call				System::Windows::Forms::ListView::SelectedListViewItemCollection^ System::Windows::Forms::ListView::get_SelectedItems()
	IL_00df:            Temp_10->Clear();                                           //callvirt				void System::Windows::Forms::ListView::SelectedListViewItemCollection::Clear()
	IL_00e4:                                                                        //ldarg.0
	IL_00e5:            Temp_11=this->Items;                                        //call				System::Windows::Forms::ListView::ListViewItemCollection^ System::Windows::Forms::ListView::get_Items()
	IL_00ea:                                                                        //ldc.i4.0
	IL_00eb:            Temp_12=Temp_11[safe_cast<System::Int32>(0)];               //callvirt				System::Windows::Forms::ListViewItem^ System::Windows::Forms::ListView::ListViewItemCollection::get_Item(System::Int32)
	IL_00f0:                                                                        //ldc.i4.1
	IL_00f1:            Temp_12->Selected=true;                                     //callvirt				void System::Windows::Forms::ListViewItem::set_Selected(System::Boolean)
	IL_00f6:                                                                        //ldc.i4				0x0
	IL_00fb:            V_2=0;                                                      //stloc				V_2
	IL_00ff:            /*goto IL_0002;*/goto IL_0104;                              //br				IL_0002
	IL_0104:            goto IL_0106;                                               //br.s				IL_0106
	IL_0106:            return;                                                     //ret

}
inline void Root::T_x103::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x2();                                               //call				void Root::T_x103::M_x2()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x103::OnKeyDown(System::Windows::Forms::KeyEventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventArgs^ Temp_0 = nullptr;
	System::Windows::Forms::Keys Temp_1 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4				0x0
	IL_0010:            V_0=0;                                                      //stloc				V_0
	IL_0014:            /*goto IL_0018;*/goto IL_0016;                              //br.s				IL_0018
	IL_0016:            goto IL_002d;                                               //br.s				IL_002d
	IL_0018:                                                                        //ldloc				V_0
	IL_001c:            switch(V_0){case 0:goto IL_0016;case 1:goto IL_0062;case 2:goto IL_0042;};//switch				(IL_0016,IL_0062,IL_0042)
	IL_002d:                                                                        //ldarg.1
	IL_002e:            Temp_1=e->KeyCode;                                          //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyCode()
	IL_0033:                                                                        //ldc.i4.s				46
	IL_0035:            if(safe_cast<System::Int32>(Temp_1)!=46)goto IL_0064;       //bne.un.s				IL_0064
	IL_0037:                                                                        //ldc.i4				0x2
	IL_003c:            V_0=2;                                                      //stloc				V_0
	IL_0040:            /*goto IL_0018;*/goto IL_0042;                              //br.s				IL_0018
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_0=System::EventArgs::Empty;                            //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_004b:            this->M_x12(safe_cast<System::Object^>(this),Temp_0);       //call				void Root::T_x103::M_x12(System::Object^,System::EventArgs^)
	IL_0050:                                                                        //ldarg.1
	IL_0051:                                                                        //ldc.i4.1
	IL_0052:            e->Handled=true;                                            //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_0057:                                                                        //ldc.i4				0x1
	IL_005c:            V_0=1;                                                      //stloc				V_0
	IL_0060:            /*goto IL_0018;*/goto IL_0062;                              //br.s				IL_0018
	IL_0062:            goto IL_0064;                                               //br.s				IL_0064
	IL_0064:            return;                                                     //ret

}
inline void Root::T_x103::OnParentChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::Control^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::ListView::OnParentChanged(e);       //call				void System::Windows::Forms::ListView::OnParentChanged(System::EventArgs^)
	IL_0007:                                                                        //ldarg.0
	IL_0008:            Temp_0=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_000d:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldarg.0
	IL_0012:            this->M_x2();                                               //call				void Root::T_x103::M_x2()
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline System::Boolean Root::T_x103::ProcessDialogKey(System::Windows::Forms::Keys key)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //ldc.i4.s				32
	IL_0003:            if(safe_cast<System::Int32>(key)!=32)goto IL_0012;          //bne.un.s				IL_0012
	IL_0005:            goto IL_0008;                                               //br.s				IL_0008
	IL_0007:                                                                        //break
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            this->M_x1();                                               //call				void Root::T_x103::M_x1()
	IL_0010:                                                                        //ldc.i4.1
	IL_0011:            return true;                                                //ret
	IL_0012:                                                                        //ldarg.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_0=System::Windows::Forms::ListView::ProcessDialogKey(key);//call				System::Boolean System::Windows::Forms::ListView::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_0019:            return Temp_0;                                              //ret

}
