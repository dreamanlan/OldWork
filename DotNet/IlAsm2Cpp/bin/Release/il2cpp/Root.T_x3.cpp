#include "global_xref.h"

inline Root::T_x3::T_x3(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x79^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	Root::T_x3::T_x5^ Temp_2 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_3 = nullptr;
	Root::T_x3::T_x5^ Temp_4 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_5 = nullptr;
	Root::T_x79^ Temp_6 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::UserControl();*/                  //call				void System::Windows::Forms::UserControl::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldc.i4.5
	IL_0008:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldc.i4.0
	IL_000f:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.1
	IL_0016:            this->F_x12=A_0;                                            //stfld				Reflector::IAssemblyBrowser^ Root::T_x3 F_x12
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.2
	IL_001d:            this->F_x13=A_1;                                            //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3 F_x13
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_0=gcnew Root::T_x79();                                 //newobj				void Root::T_x79::.ctor()
	IL_0028:            this->F_x2=Temp_0;                                          //stfld				Root::T_x79^ Root::T_x3 F_x2
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldarg.1
	IL_002f:                                                                        //ldarg.2
	IL_0030:                                                                        //ldarg.3
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_1=this->F_x2;                                          //ldfld				Root::T_x79^ Root::T_x3 F_x2
	IL_0037:            Temp_2=gcnew Root::T_x3::T_x5(A_0,A_1,A_2,Temp_1);          //newobj				void Root::T_x3::T_x5::.ctor(Reflector::IAssemblyBrowser^,Reflector::CodeModel::IAssemblyManager^,Reflector::ICommandBarManager^,Root::T_x79^)
	IL_003c:            this->F_x1=Temp_2;                                          //stfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_3=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0047:                                                                        //ldarg.0
	IL_0048:            Temp_4=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_004d:            Temp_3->Add(safe_cast<System::Windows::Forms::Control^>(Temp_4));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_5=this->Controls;                                      //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_6=this->F_x2;                                          //ldfld				Root::T_x79^ Root::T_x3 F_x2
	IL_005e:            Temp_5->Add(safe_cast<System::Windows::Forms::Control^>(Temp_6));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_0063:            return;                                                     //ret

}
inline System::Collections::IEnumerable^ Root::T_x3::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::NotSupportedException^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:            Temp_0=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_0005:            throw Temp_0;                                               //throw

}
inline void Root::T_x3::M_x1(System::Collections::IEnumerable^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x3::T_x5^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x5^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	Root::T_x3::T_x5^ Temp_6 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	Reflector::CodeModel::IAssemblyManager^ Temp_9 = nullptr;
	Root::T_x100^ Temp_10 = nullptr;
	System::Collections::IEnumerator^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	Root::T_x3::T_x6^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	System::Collections::ArrayList^ Temp_16 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_17 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ Temp_18 = nullptr;
	Root::T_x3::T_x15^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Reflector::CodeModel::IAssemblyManager^ Temp_21 = nullptr;
	Root::T_x3::T_x5^ Temp_22 = nullptr;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	System::Boolean V_1 = false;
	Reflector::CodeModel::IAssemblyResolver^ V_2 = nullptr;
	System::Object^ V_3 = nullptr;
	System::NullReferenceException^ V_4 = nullptr;
	Root::T_x3::T_x6^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_0302;case 1:goto IL_0046;case 2:goto IL_02d6;case 3:goto IL_02f1;case 4:goto IL_02b8;case 5:goto IL_0157;case 6:goto IL_0292;case 7:goto IL_0057;};//switch				(IL_0302,IL_0046,IL_02d6,IL_02f1,IL_02b8,IL_0157,IL_0292,IL_0057)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_0031:            Temp_1=Temp_0->Nodes;                                       //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0036:            Temp_1->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_003b:                                                                        //ldc.i4				0x1
	IL_0040:            V_8=1;                                                      //stloc				V_8
	IL_0044:            /*goto IL_0002;*/goto IL_0046;                              //br.s				IL_0002
	IL_0046:                                                                        //ldarg.1
	IL_0047:            if(A_0==nullptr)goto IL_0307;                               //brfalse				IL_0307
	IL_004c:                                                                        //ldc.i4				0x7
	IL_0051:            V_8=7;                                                      //stloc				V_8
	IL_0055:            /*goto IL_0002;*/goto IL_0057;                              //br.s				IL_0002
	IL_0057:            goto IL_026f;                                               //br				IL_026f
	IL_005701:          try{
	IL_005c:                                                                        //ldc.i4				0x2
	IL_0061:            V_8=2;                                                      //stloc				V_8
	IL_0065:            /*goto IL_0069;*/goto IL_0067;                              //br.s				IL_0069
	IL_0067:            goto IL_0086;                                               //br.s				IL_0086
	IL_0069:                                                                        //ldloc				V_8
	IL_006d:            switch(V_8){case 0:goto IL_00a7;case 1:goto IL_00ed;case 2:goto IL_0067;case 3:goto IL_0093;case 4:goto IL_00dd;};//switch				(IL_00a7,IL_00ed,IL_0067,IL_0093,IL_00dd)
	IL_0086:            goto IL_0088;                                               //br.s				IL_0088
	IL_0088:                                                                        //ldc.i4				0x3
	IL_008d:            V_8=3;                                                      //stloc				V_8
	IL_0091:            /*goto IL_0069;*/goto IL_0093;                              //br.s				IL_0069
	IL_0093:                                                                        //ldloc.s				V_6
	IL_0095:            Temp_4=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_009a:            if(Temp_4)goto IL_00a9;                                     //brtrue.s				IL_00a9
	IL_009c:                                                                        //ldc.i4				0x0
	IL_00a1:            V_8=0;                                                      //stloc				V_8
	IL_00a5:            /*goto IL_0069;*/goto IL_00a7;                              //br.s				IL_0069
	IL_00a7:            goto IL_00df;                                               //br.s				IL_00df
	IL_00a9:                                                                        //ldloc.s				V_6
	IL_00ab:            Temp_5=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00b0:                                                                        //castclass				Root::T_x3::T_x6
	IL_00b5:            V_5=safe_cast<Root::T_x3::T_x6^>(Temp_5);                   //stloc.s				V_5
	IL_00b7:                                                                        //ldloc.s				V_5
	IL_00b9:                                                                        //ldnull
	IL_00ba:            V_5->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_00bf:                                                                        //ldarg.0
	IL_00c0:            Temp_6=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_00c5:            Temp_7=Temp_6->Nodes;                                       //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_00ca:                                                                        //ldloc.s				V_5
	IL_00cc:            Temp_8=Temp_7->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00d1:                                                                        //pop
	IL_00d2:                                                                        //ldc.i4				0x4
	IL_00d7:            V_8=4;                                                      //stloc				V_8
	IL_00db:            /*goto IL_0069;*/goto IL_00dd;                              //br.s				IL_0069
	IL_00dd:            goto IL_0088;                                               //br.s				IL_0088
	IL_00df:                                                                        //ldc.i4				0x1
	IL_00e4:            V_8=1;                                                      //stloc				V_8
	IL_00e8:            /*goto IL_0069;*/goto IL_00ed;                              //br				IL_0069
	IL_00ed:            goto IL_02bd;                                               //leave				IL_02bd
	                    ;}
	                    finally{
	IL_00f2:            goto IL_0109;                                               //br.s				IL_0109
	IL_00f4:                                                                        //ldloc				V_8
	IL_00f8:            switch(V_8){case 0:goto IL_012c;case 1:goto IL_011d;case 2:goto IL_0140;};//switch				(IL_012c,IL_011d,IL_0140)
	IL_0109:                                                                        //ldloc.s				V_6
	IL_010b:                                                                        //isinst				System::IDisposable
	IL_0110:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0112:                                                                        //ldc.i4				0x1
	IL_0117:            V_8=1;                                                      //stloc				V_8
	IL_011b:            /*goto IL_00f4;*/goto IL_011d;                              //br.s				IL_00f4
	IL_011d:                                                                        //ldloc.s				V_7
	IL_011f:            if(V_7==nullptr)goto IL_0142;                               //brfalse.s				IL_0142
	IL_0121:                                                                        //ldc.i4				0x0
	IL_0126:            V_8=0;                                                      //stloc				V_8
	IL_012a:            /*goto IL_00f4;*/goto IL_012c;                              //br.s				IL_00f4
	IL_012c:            goto IL_012e;                                               //br.s				IL_012e
	IL_012e:                                                                        //ldloc.s				V_7
	IL_0130:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0135:                                                                        //ldc.i4				0x2
	IL_013a:            V_8=2;                                                      //stloc				V_8
	IL_013e:            /*goto IL_00f4;*/goto IL_0140;                              //br.s				IL_00f4
	IL_0140:            goto IL_0142;                                               //br.s				IL_0142
	IL_0142:                                                                        //endfinally
	                    ;}
	IL_0143:                                                                        //ldloc.0
	IL_0144:            V_0->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_0149:                                                                        //ldc.i4				0x5
	IL_014e:            V_8=5;                                                      //stloc				V_8
	IL_0152:            /*goto IL_0002;*/goto IL_0157;                              //br				IL_0002
	IL_0157:            goto IL_0297;                                               //br				IL_0297
	IL_015701:          try{
	IL_015c:                                                                        //ldarg.0
	IL_015d:            Temp_9=this->F_x13;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3 F_x13
	IL_0162:                                                                        //ldloc.2
	IL_0163:            Temp_10=gcnew Root::T_x100(V_2);                            //newobj				void Root::T_x100::.ctor(Reflector::CodeModel::IAssemblyResolver^)
	IL_0168:            Temp_9->Resolver=safe_cast<Reflector::CodeModel::IAssemblyResolver^>(Temp_10);//callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_016d:                                                                        //ldarg.1
	IL_016e:            Temp_11=A_0->GetEnumerator();                               //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0173:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_0175:            /*goto IL_0177;*/goto IL_017501;                            //br.s				IL_0177
	IL_017501:          try{
	IL_0177:                                                                        //ldc.i4				0x1
	IL_017c:            V_8=1;                                                      //stloc				V_8
	IL_0180:            /*goto IL_0184;*/goto IL_0182;                              //br.s				IL_0184
	IL_0182:            goto IL_01a1;                                               //br.s				IL_01a1
	IL_0184:                                                                        //ldloc				V_8
	IL_0188:            switch(V_8){case 0:goto IL_020a;case 1:goto IL_0182;case 2:goto IL_01fa;case 3:goto IL_01e6;case 4:goto IL_01b6;};//switch				(IL_020a,IL_0182,IL_01fa,IL_01e6,IL_01b6)
	IL_01a1:            goto IL_01db;                                               //br.s				IL_01db
	IL_01a3:                                                                        //ldloc.s				V_6
	IL_01a5:            Temp_13=V_6->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01aa:            V_3=Temp_13;                                                //stloc.3
	IL_01ab:                                                                        //ldc.i4				0x4
	IL_01b0:            V_8=4;                                                      //stloc				V_8
	IL_01b4:            /*goto IL_0184;*/goto IL_01b6;                              //br.s				IL_0184
	IL_01b6:            /*goto IL_01b8;*/goto IL_01B601;                            //br.s				IL_01b8
	IL_01B601:          try{
	IL_01b8:                                                                        //ldloc.0
	IL_01b9:                                                                        //ldloc.3
	IL_01ba:            Temp_14=Root::T_x3::T_x4::M_x1(V_3);                        //call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_01bf:            Temp_15=V_0->Add(safe_cast<System::Object^>(Temp_14));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01c4:                                                                        //pop
	IL_01c5:            goto IL_01db;                                               //leave.s				IL_01db
	                    ;}
	                    catch(System::NullReferenceException^ Ex_01C502){
	IL_01c7:            V_4=Ex_01C502;                                              //stloc.s				V_4
	IL_01c9:                                                                        //ldc.i4.0
	IL_01ca:            V_1=false;                                                  //stloc.1
	IL_01cb:                                                                        //ldloc.0
	IL_01cc:                                                                        //ldloc.s				V_4
	IL_01ce:            Temp_19=gcnew Root::T_x3::T_x15(safe_cast<System::Exception^>(V_4));//newobj				void Root::T_x3::T_x15::.ctor(System::Exception^)
	IL_01d3:            Temp_20=V_0->Add(safe_cast<System::Object^>(Temp_19));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_01d8:                                                                        //pop
	IL_01d9:            goto IL_01db;                                               //leave.s				IL_01db
	                    ;}
	IL_01db:                                                                        //ldc.i4				0x3
	IL_01e0:            V_8=3;                                                      //stloc				V_8
	IL_01e4:            /*goto IL_0184;*/goto IL_01e6;                              //br.s				IL_0184
	IL_01e6:                                                                        //ldloc.s				V_6
	IL_01e8:            Temp_12=V_6->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01ed:            if(Temp_12)goto IL_01a3;                                    //brtrue.s				IL_01a3
	IL_01ef:                                                                        //ldc.i4				0x2
	IL_01f4:            V_8=2;                                                      //stloc				V_8
	IL_01f8:            /*goto IL_0184;*/goto IL_01fa;                              //br.s				IL_0184
	IL_01fa:            goto IL_01fc;                                               //br.s				IL_01fc
	IL_01fc:                                                                        //ldc.i4				0x0
	IL_0201:            V_8=0;                                                      //stloc				V_8
	IL_0205:            /*goto IL_0184;*/goto IL_020a;                              //br				IL_0184
	IL_020a:            goto IL_025d;                                               //leave.s				IL_025d
	                    ;}
	                    finally{
	IL_020c:            goto IL_0223;                                               //br.s				IL_0223
	IL_020e:                                                                        //ldloc				V_8
	IL_0212:            switch(V_8){case 0:goto IL_0237;case 1:goto IL_025a;case 2:goto IL_0246;};//switch				(IL_0237,IL_025a,IL_0246)
	IL_0223:                                                                        //ldloc.s				V_6
	IL_0225:                                                                        //isinst				System::IDisposable
	IL_022a:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_022c:                                                                        //ldc.i4				0x0
	IL_0231:            V_8=0;                                                      //stloc				V_8
	IL_0235:            /*goto IL_020e;*/goto IL_0237;                              //br.s				IL_020e
	IL_0237:                                                                        //ldloc.s				V_7
	IL_0239:            if(V_7==nullptr)goto IL_025c;                               //brfalse.s				IL_025c
	IL_023b:                                                                        //ldc.i4				0x2
	IL_0240:            V_8=2;                                                      //stloc				V_8
	IL_0244:            /*goto IL_020e;*/goto IL_0246;                              //br.s				IL_020e
	IL_0246:            goto IL_0248;                                               //br.s				IL_0248
	IL_0248:                                                                        //ldloc.s				V_7
	IL_024a:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_024f:                                                                        //ldc.i4				0x1
	IL_0254:            V_8=1;                                                      //stloc				V_8
	IL_0258:            /*goto IL_020e;*/goto IL_025a;                              //br.s				IL_020e
	IL_025a:            goto IL_025c;                                               //br.s				IL_025c
	IL_025c:                                                                        //endfinally
	                    ;}
	IL_025d:            goto IL_02e3;                                               //leave				IL_02e3
	                    ;}
	                    finally{
	IL_0262:                                                                        //ldarg.0
	IL_0263:            Temp_21=this->F_x13;                                        //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3 F_x13
	IL_0268:                                                                        //ldloc.2
	IL_0269:            Temp_21->Resolver=V_2;                                      //callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_026e:                                                                        //endfinally
	                    ;}
	IL_026f:                                                                        //ldc.i4.1
	IL_0270:            Temp_16=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(1));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0275:            V_0=Temp_16;                                                //stloc.0
	IL_0276:                                                                        //ldc.i4.1
	IL_0277:            V_1=true;                                                   //stloc.1
	IL_0278:                                                                        //ldarg.0
	IL_0279:            Temp_17=this->F_x13;                                        //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3 F_x13
	IL_027e:            Temp_18=Temp_17->Resolver;                                  //callvirt				Reflector::CodeModel::IAssemblyResolver^ Reflector::CodeModel::IAssemblyManager::get_Resolver()
	IL_0283:            V_2=Temp_18;                                                //stloc.2
	IL_0284:                                                                        //ldc.i4				0x6
	IL_0289:            V_8=6;                                                      //stloc				V_8
	IL_028d:            /*goto IL_0002;*/goto IL_0292;                              //br				IL_0002
	IL_0292:            /*goto IL_015c;*/goto IL_015701;                            //br				IL_015c
	IL_0297:                                                                        //ldarg.0
	IL_0298:            Temp_2=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_029d:            Temp_2->BeginUpdate();                                      //callvirt				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_02a2:                                                                        //ldloc.0
	IL_02a3:            Temp_3=V_0->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_02a8:            V_6=Temp_3;                                                 //stloc.s				V_6
	IL_02aa:                                                                        //ldc.i4				0x4
	IL_02af:            V_8=4;                                                      //stloc				V_8
	IL_02b3:            /*goto IL_0002;*/goto IL_02b8;                              //br				IL_0002
	IL_02b8:            /*goto IL_005c;*/goto IL_005701;                            //br				IL_005c
	IL_02bd:                                                                        //ldarg.0
	IL_02be:            Temp_22=this->F_x1;                                         //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_02c3:            Temp_22->EndUpdate();                                       //callvirt				void System::Windows::Forms::TreeView::EndUpdate()
	IL_02c8:                                                                        //ldc.i4				0x2
	IL_02cd:            V_8=2;                                                      //stloc				V_8
	IL_02d1:            /*goto IL_0002;*/goto IL_02d6;                              //br				IL_0002
	IL_02d6:                                                                        //ldc.i4.4
	IL_02d7:                                                                        //dup
	IL_02d8:                                                                        //dup
	IL_02d9:                                                                        //ldc.i4.2
	IL_02da:                                                                        //sub
	IL_02db:                                                                        //blt				IL_02d7
	IL_02e0:                                                                        //pop
	IL_02e1:            goto IL_0307;                                               //br.s				IL_0307
	IL_02e3:                                                                        //ldc.i4				0x3
	IL_02e8:            V_8=3;                                                      //stloc				V_8
	IL_02ec:            /*goto IL_0002;*/goto IL_02f1;                              //br				IL_0002
	IL_02f1:                                                                        //ldloc.1
	IL_02f2:            if(!V_1)goto IL_0297;                                       //brfalse.s				IL_0297
	IL_02f4:                                                                        //ldc.i4				0x0
	IL_02f9:            V_8=0;                                                      //stloc				V_8
	IL_02fd:            /*goto IL_0002;*/goto IL_0302;                              //br				IL_0002
	IL_0302:            goto IL_0143;                                               //br				IL_0143
	IL_0307:            return;                                                     //ret

}
inline void Root::T_x3::M_x2(System::Collections::IEnumerable^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->M_x1(A_0);                                            //call				void Root::T_x3::M_x1(System::Collections::IEnumerable^)
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x3::OnParentChanged(System::EventArgs^ e)
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
	IL_000d:            if(Temp_0!=nullptr)goto IL_001a;                            //brtrue.s				IL_001a
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldarg.0
	IL_0012:                                                                        //ldnull
	IL_0013:            this->M_x2(safe_cast<System::Collections::IEnumerable^>(nullptr));//call				void Root::T_x3::M_x2(System::Collections::IEnumerable^)
	IL_0018:            goto IL_001a;                                               //br.s				IL_001a
	IL_001a:            return;                                                     //ret

}
inline void Root::T_x3::OnVisibleChanged(System::EventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x3::T_x5^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Windows::Forms::Control^ Temp_2 = nullptr;
	Root::T_x3::T_x5^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	Root::T_x3::T_x5^ Temp_6 = nullptr;
	Root::T_x3::T_x5^ Temp_7 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_8 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_00de;case 1:goto IL_0039;case 2:goto IL_0097;case 3:goto IL_0052;case 4:goto IL_00b8;case 5:goto IL_007b;case 6:goto IL_00c8;};//switch				(IL_00de,IL_0039,IL_0097,IL_0052,IL_00b8,IL_007b,IL_00c8)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            System::Windows::Forms::UserControl::OnVisibleChanged(e);   //call				void System::Windows::Forms::UserControl::OnVisibleChanged(System::EventArgs^)
	IL_002e:                                                                        //ldc.i4				0x1
	IL_0033:            V_0=1;                                                      //stloc				V_0
	IL_0037:            /*goto IL_0002;*/goto IL_0039;                              //br.s				IL_0002
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_2=this->Parent;                                        //call				System::Windows::Forms::Control^ System::Windows::Forms::Control::get_Parent()
	IL_003f:            if(Temp_2==nullptr)goto IL_00e0;                            //brfalse				IL_00e0
	IL_0044:            goto IL_0047;                                               //br.s				IL_0047
	IL_0046:                                                                        //break
	IL_0047:                                                                        //ldc.i4				0x3
	IL_004c:            V_0=3;                                                      //stloc				V_0
	IL_0050:            /*goto IL_0002;*/goto IL_0052;                              //br.s				IL_0002
	IL_0052:            goto IL_00ba;                                               //br.s				IL_00ba
	IL_0054:                                                                        //ldarg.0
	IL_0055:            Temp_6=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_005a:                                                                        //ldarg.0
	IL_005b:            Temp_7=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_0060:            Temp_8=Temp_7->Nodes;                                       //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0065:                                                                        //ldc.i4.0
	IL_0066:            Temp_9=Temp_8[safe_cast<System::Int32>(0)];                 //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_006b:            Temp_6->SelectedNode=Temp_9;                                //callvirt				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_0070:                                                                        //ldc.i4				0x5
	IL_0075:            V_0=5;                                                      //stloc				V_0
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_007d:                                                                        //ldarg.0
	IL_007e:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_0083:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0088:                                                                        //pop
	IL_0089:                                                                        //ldc.i4				0x2
	IL_008e:            V_0=2;                                                      //stloc				V_0
	IL_0092:            /*goto IL_0002;*/goto IL_0097;                              //br				IL_0002
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_3=this->F_x1;                                          //ldfld				Root::T_x3::T_x5^ Root::T_x3 F_x1
	IL_009d:            Temp_4=Temp_3->Nodes;                                       //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_00a2:            Temp_5=Temp_4->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_00a7:                                                                        //ldc.i4.0
	IL_00a8:            if(Temp_5<=0)goto IL_00e0;                                  //ble.s				IL_00e0
	IL_00aa:                                                                        //ldc.i4				0x4
	IL_00af:            V_0=4;                                                      //stloc				V_0
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_0054;                                               //br.s				IL_0054
	IL_00ba:                                                                        //ldc.i4				0x6
	IL_00bf:            V_0=6;                                                      //stloc				V_0
	IL_00c3:            /*goto IL_0002;*/goto IL_00c8;                              //br				IL_0002
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            Temp_10=this->Visible;                                      //call				System::Boolean System::Windows::Forms::Control::get_Visible()
	IL_00ce:            if(!Temp_10)goto IL_00e0;                                   //brfalse.s				IL_00e0
	IL_00d0:                                                                        //ldc.i4				0x0
	IL_00d5:            V_0=0;                                                      //stloc				V_0
	IL_00d9:            /*goto IL_0002;*/goto IL_00de;                              //br				IL_0002
	IL_00de:            goto IL_007d;                                               //br.s				IL_007d
	IL_00e0:            return;                                                     //ret

}
inline Root::T_x3::T_x4::T_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x3::T_x8^ Temp_0 = nullptr;
	Root::T_x3::T_x9^ Temp_1 = nullptr;
	Root::T_x3::T_x13^ Temp_2 = nullptr;
	Root::T_x3::T_x10^ Temp_3 = nullptr;
	Root::T_x3::T_x12^ Temp_4 = nullptr;
	System::NotSupportedException^ Temp_5 = nullptr;
	Root::T_x3::T_x11^ Temp_6 = nullptr;
	Root::T_x3::T_x7^ Temp_7 = nullptr;
	Root::T_x3::T_x14^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_1 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_3 = nullptr;
	Reflector::CodeModel::IEventReference^ V_4 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_5 = nullptr;
	Reflector::CodeModel::IModuleReference^ V_6 = nullptr;
	Reflector::CodeModel::INamespace^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_004b;                                               //br.s				IL_004b
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_0170;case 1:goto IL_01c4;case 2:goto IL_0146;case 3:goto IL_0108;case 4:goto IL_015e;case 5:goto IL_01a9;case 6:goto IL_0198;case 7:goto IL_00a4;case 8:goto IL_006b;case 9:goto IL_0119;case 10:goto IL_0131;case 11:goto IL_00b8;case 12:goto IL_00e2;case 13:goto IL_00d0;case 14:goto IL_005d;case 15:goto IL_01d9;};//switch				(IL_0170,IL_01c4,IL_0146,IL_0108,IL_015e,IL_01a9,IL_0198,IL_00a4,IL_006b,IL_0119,IL_0131,IL_00b8,IL_00e2,IL_00d0,IL_005d,IL_01d9)
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0051:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0052:                                                                        //ldc.i4				0xe
	IL_0057:            V_8=14;                                                     //stloc				V_8
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:                                                                        //ldloc.0
	IL_005e:            if(V_0==nullptr)goto IL_008f;                               //brfalse.s				IL_008f
	IL_0060:                                                                        //ldc.i4				0x8
	IL_0065:            V_8=8;                                                      //stloc				V_8
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_017c;                                               //br				IL_017c
	IL_0070:                                                                        //ldloc.s				V_5
	IL_0072:            Temp_7=gcnew Root::T_x3::T_x7(V_5);                         //newobj				void Root::T_x3::T_x7::.ctor(Reflector::CodeModel::IAssemblyReference^)
	IL_0077:            return safe_cast<Root::T_x3::T_x6^>(Temp_7);                //ret
	IL_0078:                                                                        //ldloc.s				V_4
	IL_007a:            Temp_8=gcnew Root::T_x3::T_x14(V_4);                        //newobj				void Root::T_x3::T_x14::.ctor(Reflector::CodeModel::IEventReference^)
	IL_007f:            return safe_cast<Root::T_x3::T_x6^>(Temp_8);                //ret
	IL_0080:                                                                        //ldloc.1
	IL_0081:            Temp_6=gcnew Root::T_x3::T_x11(V_1);                        //newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_0086:            return safe_cast<Root::T_x3::T_x6^>(Temp_6);                //ret
	IL_0087:                                                                        //ldloc.s				V_6
	IL_0089:            Temp_0=gcnew Root::T_x3::T_x8(V_6);                         //newobj				void Root::T_x3::T_x8::.ctor(Reflector::CodeModel::IModuleReference^)
	IL_008e:            return safe_cast<Root::T_x3::T_x6^>(Temp_0);                //ret
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0095:            V_1=dynamic_cast<Reflector::CodeModel::IMethodReference^>(A_0);//stloc.1
	IL_0096:                                                                        //ldc.i4				0x7
	IL_009b:            V_8=7;                                                      //stloc				V_8
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:                                                                        //ldloc.1
	IL_00a5:            if(V_1==nullptr)goto IL_00f3;                               //brfalse.s				IL_00f3
	IL_00a7:            goto IL_00aa;                                               //br.s				IL_00aa
	IL_00a9:                                                                        //break
	IL_00aa:                                                                        //ldc.i4				0xb
	IL_00af:            V_8=11;                                                     //stloc				V_8
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:            goto IL_0080;                                               //br.s				IL_0080
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_00c0:            V_5=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(A_0);//stloc.s				V_5
	IL_00c2:                                                                        //ldc.i4				0xd
	IL_00c7:            V_8=13;                                                     //stloc				V_8
	IL_00cb:            /*goto IL_0002;*/goto IL_00d0;                              //br				IL_0002
	IL_00d0:                                                                        //ldloc.s				V_5
	IL_00d2:            if(V_5==nullptr)goto IL_0148;                               //brfalse.s				IL_0148
	IL_00d4:                                                                        //ldc.i4				0xc
	IL_00d9:            V_8=12;                                                     //stloc				V_8
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_0070;                                               //br.s				IL_0070
	IL_00e4:                                                                        //ldloc.s				V_7
	IL_00e6:            Temp_1=gcnew Root::T_x3::T_x9(V_7);                         //newobj				void Root::T_x3::T_x9::.ctor(Reflector::CodeModel::INamespace^)
	IL_00eb:            return safe_cast<Root::T_x3::T_x6^>(Temp_1);                //ret
	IL_00ec:                                                                        //ldloc.3
	IL_00ed:            Temp_2=gcnew Root::T_x3::T_x13(V_3);                        //newobj				void Root::T_x3::T_x13::.ctor(Reflector::CodeModel::IPropertyReference^)
	IL_00f2:            return safe_cast<Root::T_x3::T_x6^>(Temp_2);                //ret
	IL_00f3:                                                                        //ldarg.0
	IL_00f4:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_00f9:            V_2=dynamic_cast<Reflector::CodeModel::IFieldReference^>(A_0);//stloc.2
	IL_00fa:                                                                        //ldc.i4				0x3
	IL_00ff:            V_8=3;                                                      //stloc				V_8
	IL_0103:            /*goto IL_0002;*/goto IL_0108;                              //br				IL_0002
	IL_0108:                                                                        //ldloc.2
	IL_0109:            if(V_2==nullptr)goto IL_0183;                               //brfalse.s				IL_0183
	IL_010b:                                                                        //ldc.i4				0x9
	IL_0110:            V_8=9;                                                      //stloc				V_8
	IL_0114:            /*goto IL_0002;*/goto IL_0119;                              //br				IL_0002
	IL_0119:            goto IL_0175;                                               //br.s				IL_0175
	IL_011b:                                                                        //ldarg.0
	IL_011c:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_0121:            V_7=dynamic_cast<Reflector::CodeModel::INamespace^>(A_0);   //stloc.s				V_7
	IL_0123:                                                                        //ldc.i4				0xa
	IL_0128:            V_8=10;                                                     //stloc				V_8
	IL_012c:            /*goto IL_0002;*/goto IL_0131;                              //br				IL_0002
	IL_0131:                                                                        //ldloc.s				V_7
	IL_0133:            if(V_7==nullptr)goto IL_01de;                               //brfalse				IL_01de
	IL_0138:                                                                        //ldc.i4				0x2
	IL_013d:            V_8=2;                                                      //stloc				V_8
	IL_0141:            /*goto IL_0002;*/goto IL_0146;                              //br				IL_0002
	IL_0146:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_0148:                                                                        //ldarg.0
	IL_0149:                                                                        //isinst				Reflector::CodeModel::IModuleReference
	IL_014e:            V_6=dynamic_cast<Reflector::CodeModel::IModuleReference^>(A_0);//stloc.s				V_6
	IL_0150:                                                                        //ldc.i4				0x4
	IL_0155:            V_8=4;                                                      //stloc				V_8
	IL_0159:            /*goto IL_0002;*/goto IL_015e;                              //br				IL_0002
	IL_015e:                                                                        //ldloc.s				V_6
	IL_0160:            if(V_6==nullptr)goto IL_011b;                               //brfalse.s				IL_011b
	IL_0162:                                                                        //ldc.i4				0x0
	IL_0167:            V_8=0;                                                      //stloc				V_8
	IL_016b:            /*goto IL_0002;*/goto IL_0170;                              //br				IL_0002
	IL_0170:            goto IL_0087;                                               //br				IL_0087
	IL_0175:                                                                        //ldloc.2
	IL_0176:            Temp_4=gcnew Root::T_x3::T_x12(V_2);                        //newobj				void Root::T_x3::T_x12::.ctor(Reflector::CodeModel::IFieldReference^)
	IL_017b:            return safe_cast<Root::T_x3::T_x6^>(Temp_4);                //ret
	IL_017c:                                                                        //ldloc.0
	IL_017d:            Temp_3=gcnew Root::T_x3::T_x10(V_0);                        //newobj				void Root::T_x3::T_x10::.ctor(Reflector::CodeModel::ITypeReference^)
	IL_0182:            return safe_cast<Root::T_x3::T_x6^>(Temp_3);                //ret
	IL_0183:                                                                        //ldarg.0
	IL_0184:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_0189:            V_3=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(A_0);//stloc.3
	IL_018a:                                                                        //ldc.i4				0x6
	IL_018f:            V_8=6;                                                      //stloc				V_8
	IL_0193:            /*goto IL_0002;*/goto IL_0198;                              //br				IL_0002
	IL_0198:                                                                        //ldloc.3
	IL_0199:            if(V_3==nullptr)goto IL_01ae;                               //brfalse.s				IL_01ae
	IL_019b:                                                                        //ldc.i4				0x5
	IL_01a0:            V_8=5;                                                      //stloc				V_8
	IL_01a4:            /*goto IL_0002;*/goto IL_01a9;                              //br				IL_0002
	IL_01a9:            goto IL_00ec;                                               //br				IL_00ec
	IL_01ae:                                                                        //ldarg.0
	IL_01af:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_01b4:            V_4=dynamic_cast<Reflector::CodeModel::IEventReference^>(A_0);//stloc.s				V_4
	IL_01b6:                                                                        //ldc.i4				0x1
	IL_01bb:            V_8=1;                                                      //stloc				V_8
	IL_01bf:            /*goto IL_0002;*/goto IL_01c4;                              //br				IL_0002
	IL_01c4:                                                                        //ldloc.s				V_4
	IL_01c6:            if(V_4==nullptr)goto IL_00ba;                               //brfalse				IL_00ba
	IL_01cb:                                                                        //ldc.i4				0xf
	IL_01d0:            V_8=15;                                                     //stloc				V_8
	IL_01d4:            /*goto IL_0002;*/goto IL_01d9;                              //br				IL_0002
	IL_01d9:            goto IL_0078;                                               //br				IL_0078
	IL_01de:            Temp_5=gcnew System::NotSupportedException();               //newobj				void System::NotSupportedException::.ctor()
	IL_01e3:            throw Temp_5;                                               //throw

}
inline Root::T_x3::T_x5::T_x5(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2,Root::T_x79^ A_3)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::ImageList^ Temp_0 = nullptr;
	System::Windows::Forms::ImageList^ Temp_1 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_2 = nullptr;
	System::Drawing::Image^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::ImageList^ Temp_5 = nullptr;
	System::Windows::Forms::ImageList^ Temp_6 = nullptr;
	System::Drawing::Color Temp_7;
	Reflector::ICommandBarCollection^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::ICommandBar^ Temp_10 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Drawing::Image^ Temp_13 = nullptr;
	System::EventHandler^ Temp_14 = nullptr;
	Reflector::ICommandBarButton^ Temp_15 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_16 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_17 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::EventHandler^ Temp_20 = nullptr;
	Reflector::ICommandBarButton^ Temp_21 = nullptr;
	//local variables.
	Reflector::ICommandBar^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_1=12;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*System::Windows::Forms::TreeView();*/                     //call				void System::Windows::Forms::TreeView::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldc.i4.5
	IL_0011:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldc.i4.1
	IL_0018:            this->HotTracking=true;                                     //call				void System::Windows::Forms::TreeView::set_HotTracking(System::Boolean)
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldc.i4.0
	IL_001f:            this->HideSelection=false;                                  //call				void System::Windows::Forms::TreeView::set_HideSelection(System::Boolean)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldc.i4.0
	IL_0026:            this->ShowLines=false;                                      //call				void System::Windows::Forms::TreeView::set_ShowLines(System::Boolean)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            Temp_0=gcnew System::Windows::Forms::ImageList();           //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0031:            this->ImageList=Temp_0;                                     //call				void System::Windows::Forms::TreeView::set_ImageList(System::Windows::Forms::ImageList^)
	IL_0036:                                                                        //ldarg.0
	IL_0037:            Temp_1=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_003c:            Temp_2=Temp_1->Images;                                      //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0041:            Temp_3=Root::T_x117::M_x1();                                //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_0046:            Temp_4=Temp_2->AddStrip(Temp_3);                            //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_004b:                                                                        //pop
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_5=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_0052:                                                                        //ldc.i4.s				32
	IL_0054:            Temp_5->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_6=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_005f:                                                                        //ldc.i4				0xff
	IL_0064:                                                                        //ldc.i4.0
	IL_0065:                                                                        //ldc.i4				0x80
	IL_006a:                                                                        //ldc.i4.0
	IL_006b:            Temp_7=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_0070:            Temp_6->TransparentColor=Temp_7;                            //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_0075:                                                                        //ldarg.0
	IL_0076:                                                                        //ldarg.1
	IL_0077:            this->F_x1=A_0;                                             //stfld				Reflector::IAssemblyBrowser^ Root::T_x3::T_x5 F_x1
	IL_007c:                                                                        //ldarg.0
	IL_007d:                                                                        //ldarg.2
	IL_007e:            this->F_x2=A_1;                                             //stfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5 F_x2
	IL_0083:                                                                        //ldarg.0
	IL_0084:                                                                        //ldarg.s				A_3
	IL_0086:            this->F_x12=A_3;                                            //stfld				Root::T_x79^ Root::T_x3::T_x5 F_x12
	IL_008b:                                                                        //ldarg.3
	IL_008c:            Temp_8=A_2->CommandBars;                                    //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0091:                                                                        //ldstr				L"\x6B29\x422B\x4F2D\x5C2F\x4B31\x4E33\x5335\x4A37\x6D39\x553B\x503D\x243F\x2D41\x3343"
	IL_0096:                                                                        //ldloc				V_1
	IL_009a:            Temp_9=a(L"\x6B29\x422B\x4F2D\x5C2F\x4B31\x4E33\x5335\x4A37\x6D39\x553B\x503D\x243F\x2D41\x3343",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009f:            Temp_10=Temp_8->AddContextMenu(Temp_9);                     //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_00a4:            V_0=Temp_10;                                                //stloc.0
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:            Temp_11=V_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00ab:                                                                        //ldstr				L"\x0C29\x6F2B\x412D\x402F\x4B31"
	IL_00b0:                                                                        //ldloc				V_1
	IL_00b4:            Temp_12=a(L"\x0C29\x6F2B\x412D\x402F\x4B31",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b9:            Temp_13=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_00be:                                                                        //ldarg.0
	IL_00bf:                                                                        //ldftn				void Root::T_x3::T_x5::M_x1(System::Object^,System::EventArgs^)
	IL_00c5:            Temp_14=gcnew System::EventHandler(this,&Root::T_x3::T_x5::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_00ca:                                                                        //ldc.i4				0x20043
	IL_00cf:            Temp_15=Temp_11->AddButton(Temp_12,Temp_13,Temp_14,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_00d4:                                                                        //pop
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:            Temp_16=V_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00db:            Temp_17=Temp_16->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_00e0:                                                                        //pop
	IL_00e1:                                                                        //ldloc.0
	IL_00e2:            Temp_18=V_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00e7:                                                                        //ldstr				L"\x6D29\x432B\x0E2D\x642F\x5D31\x1433\x1035\x7537\x5F39\x513B\x5C3D\x253F\x3041"
	IL_00ec:                                                                        //ldloc				V_1
	IL_00f0:            Temp_19=a(L"\x6D29\x432B\x0E2D\x642F\x5D31\x1433\x1035\x7537\x5F39\x513B\x5C3D\x253F\x3041",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:                                                                        //ldftn				void Root::T_x3::T_x5::M_x2(System::Object^,System::EventArgs^)
	IL_00fc:            Temp_20=gcnew System::EventHandler(this,&Root::T_x3::T_x5::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0101:            Temp_21=Temp_18->AddButton(Temp_19,Temp_20);                //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::EventHandler^)
	IL_0106:                                                                        //pop
	IL_0107:                                                                        //ldarg.0
	IL_0108:                                                                        //ldloc.0
	IL_0109:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_010e:            this->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_0);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_0113:            return;                                                     //ret

}
inline Root::T_x79^ Root::T_x3::T_x5::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x79^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x79^ Root::T_x3::T_x5 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x3::T_x5::M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Windows::Forms::TreeNodeCollection^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IEnumerator^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	System::Windows::Forms::TreeNode^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_5=6;                                                      //stloc				V_5
	IL_0009:                                                                        //ldc.i4.5
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.6
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.3
	IL_0015:            Temp_0=A_2->GetEnumerator();                                //callvirt				System::Collections::IEnumerator^ System::Windows::Forms::TreeNodeCollection::GetEnumerator()
	IL_001a:            V_1=Temp_0;                                                 //stloc.1
	IL_001b:            /*goto IL_001d;*/goto IL_001B01;                            //br.s				IL_001d
	IL_001B01:          try{
	IL_001d:                                                                        //ldc.i4				0x6
	IL_0022:            V_3=6;                                                      //stloc				V_3
	IL_0026:            /*goto IL_002a;*/goto IL_0028;                              //br.s				IL_002a
	IL_0028:            goto IL_004f;                                               //br.s				IL_004f
	IL_002a:                                                                        //ldloc				V_3
	IL_002e:            switch(V_3){case 0:goto IL_00e8;case 1:goto IL_00b7;case 2:goto IL_00a1;case 3:goto IL_0094;case 4:goto IL_00f8;case 5:goto IL_0081;case 6:goto IL_0028;};//switch				(IL_00e8,IL_00b7,IL_00a1,IL_0094,IL_00f8,IL_0081,IL_0028)
	IL_004f:            goto IL_0096;                                               //br.s				IL_0096
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_2=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0057:                                                                        //castclass				System::Windows::Forms::TreeNode
	IL_005c:            V_0=safe_cast<System::Windows::Forms::TreeNode^>(Temp_2);   //stloc.0
	IL_005d:                                                                        //ldarg.1
	IL_005e:                                                                        //ldarg.2
	IL_005f:            A_0->Write(A_1);                                            //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0064:                                                                        //ldarg.1
	IL_0065:                                                                        //ldloc.0
	IL_0066:            Temp_3=V_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_006b:            A_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0070:                                                                        //ldarg.1
	IL_0071:            A_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0076:                                                                        //ldc.i4				0x5
	IL_007b:            V_3=5;                                                      //stloc				V_3
	IL_007f:            /*goto IL_002a;*/goto IL_0081;                              //br.s				IL_002a
	IL_0081:                                                                        //ldloc.0
	IL_0082:            Temp_7=V_0->IsExpanded;                                     //callvirt				System::Boolean System::Windows::Forms::TreeNode::get_IsExpanded()
	IL_0087:            if(!Temp_7)goto IL_0096;                                    //brfalse.s				IL_0096
	IL_0089:                                                                        //ldc.i4				0x3
	IL_008e:            V_3=3;                                                      //stloc				V_3
	IL_0092:            /*goto IL_002a;*/goto IL_0094;                              //br.s				IL_002a
	IL_0094:            goto IL_00b9;                                               //br.s				IL_00b9
	IL_0096:                                                                        //ldc.i4				0x2
	IL_009b:            V_3=2;                                                      //stloc				V_3
	IL_009f:            /*goto IL_002a;*/goto IL_00a1;                              //br.s				IL_002a
	IL_00a1:                                                                        //ldloc.1
	IL_00a2:            Temp_1=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a7:            if(Temp_1)goto IL_0051;                                     //brtrue.s				IL_0051
	IL_00a9:                                                                        //ldc.i4				0x1
	IL_00ae:            V_3=1;                                                      //stloc				V_3
	IL_00b2:            /*goto IL_002a;*/goto IL_00b7;                              //br				IL_002a
	IL_00b7:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00b9:                                                                        //ldarg.0
	IL_00ba:                                                                        //ldarg.1
	IL_00bb:                                                                        //ldarg.2
	IL_00bc:                                                                        //ldstr				L"\x2D23"
	IL_00c1:                                                                        //ldloc				V_5
	IL_00c5:            Temp_4=a(L"\x2D23",V_5);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ca:            Temp_5=System::String::Concat(A_1,Temp_4);                  //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:            Temp_6=V_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00d5:            this->M_x1(A_0,Temp_5,Temp_6);                              //call				void Root::T_x3::T_x5::M_x1(System::IO::StringWriter^,System::String^,System::Windows::Forms::TreeNodeCollection^)
	IL_00da:                                                                        //ldc.i4				0x0
	IL_00df:            V_3=0;                                                      //stloc				V_3
	IL_00e3:            /*goto IL_002a;*/goto IL_00e8;                              //br				IL_002a
	IL_00e8:            goto IL_0096;                                               //br.s				IL_0096
	IL_00ea:                                                                        //ldc.i4				0x4
	IL_00ef:            V_3=4;                                                      //stloc				V_3
	IL_00f3:            /*goto IL_002a;*/goto IL_00f8;                              //br				IL_002a
	IL_00f8:            goto IL_0147;                                               //leave.s				IL_0147
	                    ;}
	                    finally{
	IL_00fa:            goto IL_0111;                                               //br.s				IL_0111
	IL_00fc:                                                                        //ldloc				V_4
	IL_0100:            switch(V_4){case 0:goto IL_0131;case 1:goto IL_0123;case 2:goto IL_0144;};//switch				(IL_0131,IL_0123,IL_0144)
	IL_0111:                                                                        //ldloc.1
	IL_0112:                                                                        //isinst				System::IDisposable
	IL_0117:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_0118:                                                                        //ldc.i4				0x1
	IL_011d:            V_4=1;                                                      //stloc				V_4
	IL_0121:            /*goto IL_00fc;*/goto IL_0123;                              //br.s				IL_00fc
	IL_0123:                                                                        //ldloc.2
	IL_0124:            if(V_2==nullptr)goto IL_0146;                               //brfalse.s				IL_0146
	IL_0126:                                                                        //ldc.i4				0x0
	IL_012b:            V_4=0;                                                      //stloc				V_4
	IL_012f:            /*goto IL_00fc;*/goto IL_0131;                              //br.s				IL_00fc
	IL_0131:            goto IL_0133;                                               //br.s				IL_0133
	IL_0133:                                                                        //ldloc.2
	IL_0134:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0139:                                                                        //ldc.i4				0x2
	IL_013e:            V_4=2;                                                      //stloc				V_4
	IL_0142:            /*goto IL_00fc;*/goto IL_0144;                              //br.s				IL_00fc
	IL_0144:            goto IL_0146;                                               //br.s				IL_0146
	IL_0146:                                                                        //endfinally
	                    ;}
	IL_0147:            return;                                                     //ret

}
inline void Root::T_x3::T_x5::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_5 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldc.i4				0x1
	IL_0010:            V_1=1;                                                      //stloc				V_1
	IL_0014:            /*goto IL_0018;*/goto IL_0016;                              //br.s				IL_0018
	IL_0016:            goto IL_002d;                                               //br.s				IL_002d
	IL_0018:                                                                        //ldloc				V_1
	IL_001c:            switch(V_1){case 0:goto IL_0043;case 1:goto IL_0016;case 2:goto IL_00c3;};//switch				(IL_0043,IL_0016,IL_00c3)
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_5=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0033:            if(Temp_5==nullptr)goto IL_00c5;                            //brfalse				IL_00c5
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_1=0;                                                      //stloc				V_1
	IL_0041:            /*goto IL_0018;*/goto IL_0043;                              //br.s				IL_0018
	IL_0043:            goto IL_00aa;                                               //br.s				IL_00aa
	IL_004301:          try{
	IL_0045:                                                                        //ldarg.0
	IL_0046:                                                                        //ldloc.0
	IL_0047:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_3=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0052:            this->M_x1(V_0,Temp_2,Temp_3);                              //call				void Root::T_x3::T_x5::M_x1(System::IO::StringWriter^,System::String^,System::Windows::Forms::TreeNodeCollection^)
	IL_0057:                                                                        //ldloc.0
	IL_0058:            Temp_4=V_0->ToString();                                     //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_005d:            System::Windows::Forms::Clipboard::SetDataObject(safe_cast<System::Object^>(Temp_4));//call				void System::Windows::Forms::Clipboard::SetDataObject(System::Object^)
	IL_0062:            goto IL_00c5;                                               //leave.s				IL_00c5
	                    ;}
	                    finally{
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_1=2;                                                      //stloc				V_1
	IL_006d:            /*goto IL_0071;*/goto IL_006f;                              //br.s				IL_0071
	IL_006f:            goto IL_0086;                                               //br.s				IL_0086
	IL_0071:                                                                        //ldloc				V_1
	IL_0075:            switch(V_1){case 0:goto IL_0094;case 1:goto IL_00a7;case 2:goto IL_006f;};//switch				(IL_0094,IL_00a7,IL_006f)
	IL_0086:                                                                        //ldloc.0
	IL_0087:            if(V_0==nullptr)goto IL_00a9;                               //brfalse.s				IL_00a9
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_1=0;                                                      //stloc				V_1
	IL_0092:            /*goto IL_0071;*/goto IL_0094;                              //br.s				IL_0071
	IL_0094:            goto IL_0096;                                               //br.s				IL_0096
	IL_0096:                                                                        //ldloc.0
	IL_0097:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_009c:                                                                        //ldc.i4				0x1
	IL_00a1:            V_1=1;                                                      //stloc				V_1
	IL_00a5:            /*goto IL_0071;*/goto IL_00a7;                              //br.s				IL_0071
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:                                                                        //endfinally
	                    ;}
	IL_00aa:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00af:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_00b4:            V_0=Temp_1;                                                 //stloc.0
	IL_00b5:                                                                        //ldc.i4				0x2
	IL_00ba:            V_1=2;                                                      //stloc				V_1
	IL_00be:            /*goto IL_0018;*/goto IL_00c3;                              //br				IL_0018
	IL_00c3:            /*goto IL_0045;*/goto IL_004301;                            //br.s				IL_0045
	IL_00c5:            return;                                                     //ret

}
inline void Root::T_x3::T_x5::M_x1(System::Windows::Forms::KeyEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnKeyDown by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Windows::Forms::Keys Temp_1 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_0060;case 2:goto IL_003d;};//switch				(IL_000b,IL_0060,IL_003d)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_1=A_0->KeyData;                                        //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_002b:                                                                        //ldc.i4				0x60047
	IL_0030:            if(safe_cast<System::Int32>(Temp_1)!=393287)goto IL_0062;   //bne.un.s				IL_0062
	IL_0032:                                                                        //ldc.i4				0x2
	IL_0037:            V_0=2;                                                      //stloc				V_0
	IL_003b:            /*goto IL_000d;*/goto IL_003d;                              //br.s				IL_000d
	IL_003d:            goto IL_003f;                                               //br.s				IL_003f
	IL_003f:                                                                        //ldarg.0
	IL_0040:                                                                        //ldarg.0
	IL_0041:            Temp_0=this->ShowLines;                                     //call				System::Boolean System::Windows::Forms::TreeView::get_ShowLines()
	IL_0046:                                                                        //ldc.i4.0
	IL_0047:                                                                        //ceq
	IL_0049:            this->ShowLines=(Temp_0 == false);                          //call				void System::Windows::Forms::TreeView::set_ShowLines(System::Boolean)
	IL_004e:                                                                        //ldarg.1
	IL_004f:                                                                        //ldc.i4.1
	IL_0050:            A_0->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_0055:                                                                        //ldc.i4				0x1
	IL_005a:            V_0=1;                                                      //stloc				V_0
	IL_005e:            /*goto IL_000d;*/goto IL_0060;                              //br.s				IL_000d
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldarg.1
	IL_0064:            System::Windows::Forms::TreeView::OnKeyDown(A_0);           //call				void System::Windows::Forms::TreeView::OnKeyDown(System::Windows::Forms::KeyEventArgs^)
	IL_0069:            return;                                                     //ret

}
inline void Root::T_x3::T_x5::M_x1(System::Windows::Forms::TreeViewCancelEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnBeforeExpand by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_3 = nullptr;
	Root::T_x100^ Temp_4 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_5 = nullptr;
	//local variables.
	Root::T_x3::T_x16^ V_0 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0046;case 1:goto IL_0038;case 2:goto IL_0088;};//switch				(IL_0046,IL_0038,IL_0088)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            System::Windows::Forms::TreeView::OnBeforeExpand(A_0);      //call				void System::Windows::Forms::TreeView::OnBeforeExpand(System::Windows::Forms::TreeViewCancelEventArgs^)
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_0=A_0->Node;                                           //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeViewCancelEventArgs::get_Node()
	IL_0024:                                                                        //isinst				Root::T_x3::T_x16
	IL_0029:            V_0=dynamic_cast<Root::T_x3::T_x16^>(Temp_0);               //stloc.0
	IL_002a:            goto IL_002d;                                               //br.s				IL_002d
	IL_002c:                                                                        //break
	IL_002d:                                                                        //ldc.i4				0x1
	IL_0032:            V_2=1;                                                      //stloc				V_2
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:                                                                        //ldloc.0
	IL_0039:            if(V_0==nullptr)goto IL_008a;                               //brfalse.s				IL_008a
	IL_003b:                                                                        //ldc.i4				0x0
	IL_0040:            V_2=0;                                                      //stloc				V_2
	IL_0044:            /*goto IL_0002;*/goto IL_0046;                              //br.s				IL_0002
	IL_0046:            goto IL_006e;                                               //br.s				IL_006e
	IL_004601:          try{
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_3=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5 F_x2
	IL_004e:                                                                        //ldloc.1
	IL_004f:            Temp_4=gcnew Root::T_x100(V_1);                             //newobj				void Root::T_x100::.ctor(Reflector::CodeModel::IAssemblyResolver^)
	IL_0054:            Temp_3->Resolver=safe_cast<Reflector::CodeModel::IAssemblyResolver^>(Temp_4);//callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_0059:                                                                        //ldloc.0
	IL_005a:            V_0->M_x1();                                                //callvirt				void Root::T_x3::T_x16::M_x1()
	IL_005f:            goto IL_008a;                                               //leave.s				IL_008a
	                    ;}
	                    finally{
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_5=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5 F_x2
	IL_0067:                                                                        //ldloc.1
	IL_0068:            Temp_5->Resolver=V_1;                                       //callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_006d:                                                                        //endfinally
	                    ;}
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_1=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5 F_x2
	IL_0074:            Temp_2=Temp_1->Resolver;                                    //callvirt				Reflector::CodeModel::IAssemblyResolver^ Reflector::CodeModel::IAssemblyManager::get_Resolver()
	IL_0079:            V_1=Temp_2;                                                 //stloc.1
	IL_007a:                                                                        //ldc.i4				0x2
	IL_007f:            V_2=2;                                                      //stloc				V_2
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:            /*goto IL_0048;*/goto IL_004601;                            //br.s				IL_0048
	IL_008a:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x3::T_x5::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	Root::T_x3::T_x6^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003f;case 1:goto IL_005d;case 2:goto IL_0031;};//switch				(IL_003f,IL_005d,IL_0031)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0020:                                                                        //isinst				Root::T_x3::T_x6
	IL_0025:            V_0=dynamic_cast<Root::T_x3::T_x6^>(Temp_0);                //stloc.0
	IL_0026:                                                                        //ldc.i4				0x2
	IL_002b:            V_1=2;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_005f;                               //brfalse.s				IL_005f
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_1=0;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x3::T_x5 F_x1
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_2=V_0->M_x1();                                         //callvirt				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_004d:            Temp_1->ActiveItem=Temp_2;                                  //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_0052:                                                                        //ldc.i4				0x1
	IL_0057:            V_1=1;                                                      //stloc				V_1
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:            goto IL_005f;                                               //br.s				IL_005f
	IL_005f:            return;                                                     //ret

}
inline void Root::T_x3::T_x5::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Windows::Forms::TreeNode^ Temp_2 = nullptr;
	System::Windows::Forms::MouseButtons Temp_3 = (System::Windows::Forms::MouseButtons)0;
	System::Windows::Forms::MouseButtons Temp_4 = (System::Windows::Forms::MouseButtons)0;
	//local variables.
	System::Windows::Forms::TreeNode^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_00cf;case 1:goto IL_0051;case 2:goto IL_0099;case 3:goto IL_0039;case 4:goto IL_0065;case 5:goto IL_0088;case 6:goto IL_00a9;};//switch				(IL_00cf,IL_0051,IL_0099,IL_0039,IL_0065,IL_0088,IL_00a9)
	IL_0027:                                                                        //ldarg.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            System::Windows::Forms::TreeView::OnMouseDown(e);           //call				void System::Windows::Forms::TreeView::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_002e:                                                                        //ldc.i4				0x3
	IL_0033:            V_1=3;                                                      //stloc				V_1
	IL_0037:            /*goto IL_0002;*/goto IL_0039;                              //br.s				IL_0002
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_3=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_003f:                                                                        //ldc.i4				0x100000
	IL_0044:            if(safe_cast<System::Int32>(Temp_3)==1048576)goto IL_0067;  //beq.s				IL_0067
	IL_0046:                                                                        //ldc.i4				0x1
	IL_004b:            V_1=1;                                                      //stloc				V_1
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_009b;                                               //br.s				IL_009b
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldloc.0
	IL_0055:            this->SelectedNode=V_0;                                     //call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_005a:                                                                        //ldc.i4				0x4
	IL_005f:            V_1=4;                                                      //stloc				V_1
	IL_0063:            /*goto IL_0002;*/goto IL_0065;                              //br.s				IL_0002
	IL_0065:            goto IL_00d1;                                               //br.s				IL_00d1
	IL_0067:                                                                        //ldarg.0
	IL_0068:                                                                        //ldarg.1
	IL_0069:            Temp_0=e->X;                                                //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_X()
	IL_006e:                                                                        //ldarg.1
	IL_006f:            Temp_1=e->Y;                                                //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Y()
	IL_0074:            Temp_2=this->GetNodeAt(Temp_0,Temp_1);                      //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::GetNodeAt(System::Int32,System::Int32)
	IL_0079:            V_0=Temp_2;                                                 //stloc.0
	IL_007a:                                                                        //ldc.i4				0x5
	IL_007f:            V_1=5;                                                      //stloc				V_1
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldloc.0
	IL_0089:            if(V_0==nullptr)goto IL_00d1;                               //brfalse.s				IL_00d1
	IL_008b:                                                                        //ldc.i4				0x2
	IL_0090:            V_1=2;                                                      //stloc				V_1
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:            goto IL_0053;                                               //br.s				IL_0053
	IL_009b:                                                                        //ldc.i4				0x6
	IL_00a0:            V_1=6;                                                      //stloc				V_1
	IL_00a4:            /*goto IL_0002;*/goto IL_00a9;                              //br				IL_0002
	IL_00a9:                                                                        //ldc.i4.4
	IL_00aa:                                                                        //dup
	IL_00ab:                                                                        //dup
	IL_00ac:                                                                        //ldc.i4.2
	IL_00ad:                                                                        //sub
	IL_00ae:                                                                        //blt				IL_00aa
	IL_00b3:                                                                        //pop
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            Temp_4=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_00ba:                                                                        //ldc.i4				0x200000
	IL_00bf:            if(safe_cast<System::Int32>(Temp_4)!=2097152)goto IL_00d1;  //bne.un.s				IL_00d1
	IL_00c1:                                                                        //ldc.i4				0x0
	IL_00c6:            V_1=0;                                                      //stloc				V_1
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:            goto IL_0067;                                               //br.s				IL_0067
	IL_00d1:            return;                                                     //ret

}
inline System::Boolean Root::T_x3::T_x5::ProcessDialogKey(System::Windows::Forms::Keys key)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	System::Windows::Forms::TreeNode^ Temp_1 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_2 = nullptr;
	Reflector::IAssemblyBrowser^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Root::T_x3::T_x6^ V_0 = nullptr;
	Root::T_x3::T_x6^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_2=1;                                                      //stloc				V_2
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0036;                                               //br.s				IL_0036
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_007a;case 1:goto IL_000b;case 2:goto IL_0046;case 3:goto IL_00ba;case 4:goto IL_005f;case 5:goto IL_008a;case 6:goto IL_006d;case 7:goto IL_00a6;};//switch				(IL_007a,IL_000b,IL_0046,IL_00ba,IL_005f,IL_008a,IL_006d,IL_00a6)
	IL_0036:                                                                        //ldarg.1
	IL_0037:                                                                        //ldc.i4.s				13
	IL_0039:            if(safe_cast<System::Int32>(key)!=13)goto IL_006f;          //bne.un.s				IL_006f
	IL_003b:                                                                        //ldc.i4				0x2
	IL_0040:            V_2=2;                                                      //stloc				V_2
	IL_0044:            /*goto IL_000d;*/goto IL_0046;                              //br.s				IL_000d
	IL_0046:            goto IL_008c;                                               //br.s				IL_008c
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_2=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_004e:                                                                        //isinst				Root::T_x3::T_x6
	IL_0053:            V_1=dynamic_cast<Root::T_x3::T_x6^>(Temp_2);                //stloc.1
	IL_0054:                                                                        //ldc.i4				0x4
	IL_0059:            V_2=4;                                                      //stloc				V_2
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:                                                                        //ldloc.1
	IL_0060:            if(V_1==nullptr)goto IL_00d7;                               //brfalse.s				IL_00d7
	IL_0062:                                                                        //ldc.i4				0x6
	IL_0067:            V_2=6;                                                      //stloc				V_2
	IL_006b:            /*goto IL_000d;*/goto IL_006d;                              //br.s				IL_000d
	IL_006d:            goto IL_00bc;                                               //br.s				IL_00bc
	IL_006f:                                                                        //ldc.i4				0x0
	IL_0074:            V_2=0;                                                      //stloc				V_2
	IL_0078:            /*goto IL_000d;*/goto IL_007a;                              //br.s				IL_000d
	IL_007a:                                                                        //ldarg.1
	IL_007b:                                                                        //ldc.i4.s				32
	IL_007d:            if(safe_cast<System::Int32>(key)!=32)goto IL_00d7;          //bne.un.s				IL_00d7
	IL_007f:                                                                        //ldc.i4				0x5
	IL_0084:            V_2=5;                                                      //stloc				V_2
	IL_0088:            /*goto IL_000d;*/goto IL_008a;                              //br.s				IL_000d
	IL_008a:            goto IL_0048;                                               //br.s				IL_0048
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_1=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0092:                                                                        //isinst				Root::T_x3::T_x6
	IL_0097:            V_0=dynamic_cast<Root::T_x3::T_x6^>(Temp_1);                //stloc.0
	IL_0098:                                                                        //ldc.i4				0x7
	IL_009d:            V_2=7;                                                      //stloc				V_2
	IL_00a1:            /*goto IL_000d;*/goto IL_00a6;                              //br				IL_000d
	IL_00a6:                                                                        //ldloc.0
	IL_00a7:            if(V_0==nullptr)goto IL_006f;                               //brfalse.s				IL_006f
	IL_00a9:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00ab:                                                                        //break
	IL_00ac:                                                                        //ldc.i4				0x3
	IL_00b1:            V_2=3;                                                      //stloc				V_2
	IL_00b5:            /*goto IL_000d;*/goto IL_00ba;                              //br				IL_000d
	IL_00ba:            goto IL_00cf;                                               //br.s				IL_00cf
	IL_00bc:                                                                        //ldarg.0
	IL_00bd:            Temp_3=this->F_x1;                                          //ldfld				Reflector::IAssemblyBrowser^ Root::T_x3::T_x5 F_x1
	IL_00c2:                                                                        //ldloc.1
	IL_00c3:            Temp_4=V_1->M_x1();                                         //callvirt				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_00c8:            Temp_3->ActiveItem=Temp_4;                                  //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_00cd:                                                                        //ldc.i4.1
	IL_00ce:            return true;                                                //ret
	IL_00cf:                                                                        //ldloc.0
	IL_00d0:            V_0->Toggle();                                              //callvirt				void System::Windows::Forms::TreeNode::Toggle()
	IL_00d5:                                                                        //ldc.i4.1
	IL_00d6:            return true;                                                //ret
	IL_00d7:                                                                        //ldarg.0
	IL_00d8:                                                                        //ldarg.1
	IL_00d9:            Temp_0=System::Windows::Forms::TreeView::ProcessDialogKey(key);//call				System::Boolean System::Windows::Forms::TreeView::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_00de:            return Temp_0;                                              //ret

}
inline Root::T_x3::T_x6::T_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::TreeNode();*/                     //call				void System::Windows::Forms::TreeNode::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Object^ Root::T_x3::T_x6::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x6 F_x1
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x3::T_x6::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:            return;                                                     //ret

}
inline void Root::T_x3::T_x6::M_x12(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x3::T_x6 F_x1
	IL_0007:            return;                                                     //ret

}
inline System::Int32 Root::T_x3::T_x6::M_x2(System::Object^ A_0)
//System::IComparable^::CompareTo by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	Root::T_x3::T_x6^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //isinst				Root::T_x3::T_x6
	IL_0006:            V_0=dynamic_cast<Root::T_x3::T_x6^>(A_0);                   //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_0021;                               //brfalse.s				IL_0021
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_0=this->Text;                                          //call				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_0015:                                                                        //ldloc.0
	IL_0016:            Temp_1=V_0->Text;                                           //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_001b:            Temp_2=Temp_0->CompareTo(Temp_1);                           //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_0020:            return Temp_2;                                              //ret
	IL_0021:                                                                        //ldc.i4.m1
	IL_0022:            return -1;                                                  //ret

}
inline Root::T_x3::T_x7::T_x7(Reflector::CodeModel::IAssemblyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::IAssembly^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.1
	IL_000e:            if(A_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0010:            goto IL_002c;                                               //br.s				IL_002c
	IL_0012:                                                                        //ldloc.0
	IL_0013:            Temp_2=V_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0018:            Temp_3=Temp_2->Length;                                      //callvirt				System::Int32 System::String::get_Length()
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            if(Temp_3<=0)goto IL_006e;                                  //ble.s				IL_006e
	IL_0020:            goto IL_0058;                                               //br.s				IL_0058
	IL_0022:                                                                        //ldloc.0
	IL_0023:            Temp_1=V_0->Status;                                         //callvirt				System::String^ Reflector::CodeModel::IAssembly::get_Status()
	IL_0028:            if(Temp_1==nullptr)goto IL_006e;                            //brfalse.s				IL_006e
	IL_002a:            goto IL_0012;                                               //br.s				IL_0012
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //ldarg.1
	IL_002e:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0033:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldarg.0
	IL_003a:                                                                        //ldc.i4				0x97
	IL_003f:                                                                        //dup
	IL_0040:            V_1=151;                                                    //stloc.1
	IL_0041:            this->SelectedImageIndex=151;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0046:                                                                        //ldloc.1
	IL_0047:            this->ImageIndex=V_1;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_004c:                                                                        //ldarg.1
	IL_004d:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_0052:            V_0=dynamic_cast<Reflector::CodeModel::IAssembly^>(A_0);    //stloc.0
	IL_0053:                                                                        //ldloc.0
	IL_0054:            if(V_0==nullptr)goto IL_006e;                               //brfalse.s				IL_006e
	IL_0056:            goto IL_0022;                                               //br.s				IL_0022
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //ldc.i4				0xa6
	IL_005f:                                                                        //dup
	IL_0060:            V_1=166;                                                    //stloc.1
	IL_0061:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0066:                                                                        //ldloc.1
	IL_0067:            this->ImageIndex=V_1;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_006c:            goto IL_006e;                                               //br.s				IL_006e
	IL_006e:            return;                                                     //ret

}
inline void Root::T_x3::T_x7::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x3::T_x17^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Root::T_x3::T_x19^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_000f:            Temp_2=gcnew Root::T_x3::T_x17(Temp_1);                     //newobj				void Root::T_x3::T_x17::.ctor(System::Object^)
	IL_0014:            Temp_3=Temp_0->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0019:                                                                        //pop
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_5=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0026:            Temp_6=gcnew Root::T_x3::T_x19(Temp_5);                     //newobj				void Root::T_x3::T_x19::.ctor(System::Object^)
	IL_002b:            Temp_7=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_6));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0030:                                                                        //pop
	IL_0031:            return;                                                     //ret

}
inline Root::T_x3::T_x8::T_x8(Reflector::CodeModel::IModuleReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IModuleReference::get_Name()
	IL_0014:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldc.i4				0x99
	IL_0020:                                                                        //dup
	IL_0021:            V_0=153;                                                    //stloc.0
	IL_0022:            this->SelectedImageIndex=153;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0027:                                                                        //ldloc.0
	IL_0028:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002d:            return;                                                     //ret

}
inline Root::T_x3::T_x8::T_x8(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldnull
	IL_0008:            this->M_x12(safe_cast<System::Object^>(nullptr));           //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            this->Text=A_0;                                             //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.0
	IL_0016:                                                                        //ldc.i4				0x99
	IL_001b:                                                                        //dup
	IL_001c:            V_0=153;                                                    //stloc.0
	IL_001d:            this->SelectedImageIndex=153;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0022:                                                                        //ldloc.0
	IL_0023:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0028:            return;                                                     //ret

}
inline void Root::T_x3::T_x8::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x3::T_x17^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Root::T_x3::T_x19^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_1=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_000f:            Temp_2=gcnew Root::T_x3::T_x17(Temp_1);                     //newobj				void Root::T_x3::T_x17::.ctor(System::Object^)
	IL_0014:            Temp_3=Temp_0->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0019:                                                                        //pop
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_5=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0026:            Temp_6=gcnew Root::T_x3::T_x19(Temp_5);                     //newobj				void Root::T_x3::T_x19::.ctor(System::Object^)
	IL_002b:            Temp_7=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_6));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0030:                                                                        //pop
	IL_0031:            return;                                                     //ret

}
inline Root::T_x3::T_x9::T_x9(Reflector::CodeModel::INamespace^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0014:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldc.i4.1
	IL_001c:                                                                        //dup
	IL_001d:            V_0=1;                                                      //stloc.0
	IL_001e:            this->SelectedImageIndex=1;                                 //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0023:                                                                        //ldloc.0
	IL_0024:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0029:            return;                                                     //ret

}
inline void Root::T_x3::T_x9::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x17^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::INamespace^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003f;case 1:goto IL_0031;case 2:goto IL_005e;};//switch				(IL_003f,IL_0031,IL_005e)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0020:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_0025:            V_0=dynamic_cast<Reflector::CodeModel::INamespace^>(Temp_0);//stloc.0
	IL_0026:                                                                        //ldc.i4				0x1
	IL_002b:            V_1=1;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_0060;                               //brfalse.s				IL_0060
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_1=0;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_2=gcnew Root::T_x3::T_x17(safe_cast<System::Object^>(V_0));//newobj				void Root::T_x3::T_x17::.ctor(System::Object^)
	IL_004d:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0052:                                                                        //pop
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_1=2;                                                      //stloc				V_1
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:            goto IL_0060;                                               //br.s				IL_0060
	IL_0060:            return;                                                     //ret

}
inline Root::T_x3::T_x10::T_x10(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Drawing::Color Temp_4;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=Root::T_x115::M_x8(A_0);                             //call				System::String^ Root::T_x115::M_x8(Reflector::CodeModel::ITypeReference^)
	IL_0014:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0019:                                                                        //ldarg.1
	IL_001a:            Temp_1=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_001f:            if(Temp_1==nullptr)goto IL_004a;                            //brfalse.s				IL_004a
	IL_0021:            goto IL_0023;                                               //br.s				IL_0023
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:            Temp_2=Root::T_x116::M_x12(A_0);                            //call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::ITypeReference^)
	IL_002b:                                                                        //dup
	IL_002c:            V_0=Temp_2;                                                 //stloc.0
	IL_002d:            this->SelectedImageIndex=V_0;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0032:                                                                        //ldloc.0
	IL_0033:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0038:                                                                        //ldarg.0
	IL_0039:                                                                        //ldarg.1
	IL_003a:            Temp_3=Root::T_x116::M_x1(A_0);                             //call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_003f:            Temp_4=System::Drawing::Color::FromArgb(Temp_3);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_0044:            this->ForeColor=Temp_4;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_0049:            return;                                                     //ret
	IL_004a:                                                                        //ldarg.0
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldc.i4				0xa6
	IL_0051:                                                                        //dup
	IL_0052:            V_0=166;                                                    //stloc.0
	IL_0053:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0058:                                                                        //ldloc.0
	IL_0059:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_005e:            return;                                                     //ret

}
inline void Root::T_x3::T_x10::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x17^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	Root::T_x3::T_x1^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0009:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_000e:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0015:                                                                        //ldloc.0
	IL_0016:            Temp_2=gcnew Root::T_x3::T_x17(safe_cast<System::Object^>(V_0));//newobj				void Root::T_x3::T_x17::.ctor(System::Object^)
	IL_001b:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldarg.0
	IL_0022:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0027:                                                                        //ldloc.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            Temp_5=gcnew Root::T_x3::T_x1(safe_cast<System::Object^>(V_0),A_0);//newobj				void Root::T_x3::T_x1::.ctor(System::Object^,System::Object^)
	IL_002e:            Temp_6=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0033:                                                                        //pop
	IL_0034:            return;                                                     //ret

}
inline Root::T_x3::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x3::T_x11::T_x11(Reflector::CodeModel::IMethodReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::InvalidOperationException^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	Root::T_x3::T_x15^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Drawing::Color Temp_9;
	//local variables.
	Reflector::CodeModel::IMethodDeclaration^ V_0 = nullptr;
	System::InvalidOperationException^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_3=14;                                                     //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x2();*/                                     //call				void Root::T_x3::T_x2::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_0=Root::T_x115::M_x1(A_0);                             //call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IMethodReference^)
	IL_001d:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_1=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0028:            V_0=Temp_1;                                                 //stloc.0
	IL_0029:                                                                        //ldloc.0
	IL_002a:            if(V_0==nullptr)goto IL_0055;                               //brfalse.s				IL_0055
	IL_002c:            goto IL_002e;                                               //br.s				IL_002e
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //ldarg.1
	IL_0031:            Temp_7=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0036:                                                                        //dup
	IL_0037:            V_2=Temp_7;                                                 //stloc.2
	IL_0038:            this->SelectedImageIndex=V_2;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_003d:                                                                        //ldloc.2
	IL_003e:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldarg.1
	IL_0045:            Temp_8=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_004a:            Temp_9=System::Drawing::Color::FromArgb(Temp_8);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_004f:            this->ForeColor=Temp_9;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_0054:            return;                                                     //ret
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldc.i4				0xa6
	IL_005c:                                                                        //dup
	IL_005d:            V_2=166;                                                    //stloc.2
	IL_005e:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0063:                                                                        //ldloc.2
	IL_0064:            this->ImageIndex=V_2;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0069:                                                                        //ldstr				L"\x612B\x4B2D\x442F\x5A31\x5B33\x5235\x1837\x5939\x5D3B\x503D\x603F\x2C41\x2B43\x3245\x6847\x2849\x294B\x6E4D\x224F\x3751\x2753\x3955\x3457\x2C59\x395B\x3A5D\x4E5F"
	IL_006e:                                                                        //ldloc				V_3
	IL_0072:            Temp_2=a(L"\x612B\x4B2D\x442F\x5A31\x5B33\x5235\x1837\x5939\x5D3B\x503D\x603F\x2C41\x2B43\x3245\x6847\x2849\x294B\x6E4D\x224F\x3751\x2753\x3955\x3457\x2C59\x395B\x3A5D\x4E5F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0077:            Temp_3=gcnew System::InvalidOperationException(Temp_2);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_007c:            V_1=Temp_3;                                                 //stloc.1
	IL_007d:                                                                        //ldarg.0
	IL_007e:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0083:                                                                        //ldloc.1
	IL_0084:            Temp_5=gcnew Root::T_x3::T_x15(safe_cast<System::Exception^>(V_1));//newobj				void Root::T_x3::T_x15::.ctor(System::Exception^)
	IL_0089:            Temp_6=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_008e:                                                                        //pop
	IL_008f:            return;                                                     //ret

}
inline void Root::T_x3::T_x11::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x17^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	Root::T_x3::T_x1^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	//local variables.
	Reflector::CodeModel::IMethodReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0031;case 1:goto IL_0071;case 2:goto IL_003f;};//switch				(IL_0031,IL_0071,IL_003f)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0020:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0025:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_0);//stloc.0
	IL_0026:                                                                        //ldc.i4				0x0
	IL_002b:            V_1=0;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_0073;                               //brfalse.s				IL_0073
	IL_0034:                                                                        //ldc.i4				0x2
	IL_0039:            V_1=2;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0047:                                                                        //ldloc.0
	IL_0048:            Temp_2=gcnew Root::T_x3::T_x17(safe_cast<System::Object^>(V_0));//newobj				void Root::T_x3::T_x17::.ctor(System::Object^)
	IL_004d:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0052:                                                                        //pop
	IL_0053:                                                                        //ldarg.0
	IL_0054:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0059:                                                                        //ldloc.0
	IL_005a:                                                                        //ldarg.1
	IL_005b:            Temp_5=gcnew Root::T_x3::T_x1(safe_cast<System::Object^>(V_0),A_0);//newobj				void Root::T_x3::T_x1::.ctor(System::Object^,System::Object^)
	IL_0060:            Temp_6=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0065:                                                                        //pop
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_1=1;                                                      //stloc				V_1
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_0073;                                               //br.s				IL_0073
	IL_0073:            return;                                                     //ret

}
inline Root::T_x3::T_x12::T_x12(Reflector::CodeModel::IFieldReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::InvalidOperationException^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_4 = nullptr;
	Root::T_x3::T_x15^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Drawing::Color Temp_9;
	//local variables.
	System::InvalidOperationException^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_2=11;                                                     //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x2();*/                                     //call				void Root::T_x3::T_x2::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            Temp_0=Root::T_x115::M_x1(A_0);                             //call				System::String^ Root::T_x115::M_x1(Reflector::CodeModel::IFieldReference^)
	IL_001d:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_1=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_0028:            if(Temp_1==nullptr)goto IL_0053;                            //brfalse.s				IL_0053
	IL_002a:            goto IL_002c;                                               //br.s				IL_002c
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //ldarg.0
	IL_002e:                                                                        //ldarg.1
	IL_002f:            Temp_7=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0034:                                                                        //dup
	IL_0035:            V_1=Temp_7;                                                 //stloc.1
	IL_0036:            this->SelectedImageIndex=V_1;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_003b:                                                                        //ldloc.1
	IL_003c:            this->ImageIndex=V_1;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            Temp_8=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0048:            Temp_9=System::Drawing::Color::FromArgb(Temp_8);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_004d:            this->ForeColor=Temp_9;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_0052:            return;                                                     //ret
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldc.i4				0xa6
	IL_005a:                                                                        //dup
	IL_005b:            V_1=166;                                                    //stloc.1
	IL_005c:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0061:                                                                        //ldloc.1
	IL_0062:            this->ImageIndex=V_1;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0067:                                                                        //ldstr				L"\x6F28\x422A\x482C\x432E\x5530\x1332\x5634\x5636\x5738\x1B3A\x533C\x503E\x3540\x6342\x2744\x2246\x6948\x394A\x284C\x3C4E\x3E50\x3F52\x2354\x3256\x3D58\x755A"
	IL_006c:                                                                        //ldloc				V_2
	IL_0070:            Temp_2=a(L"\x6F28\x422A\x482C\x432E\x5530\x1332\x5634\x5636\x5738\x1B3A\x533C\x503E\x3540\x6342\x2744\x2246\x6948\x394A\x284C\x3C4E\x3E50\x3F52\x2354\x3256\x3D58\x755A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0075:            Temp_3=gcnew System::InvalidOperationException(Temp_2);     //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_007a:            V_0=Temp_3;                                                 //stloc.0
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_4=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0081:                                                                        //ldloc.0
	IL_0082:            Temp_5=gcnew Root::T_x3::T_x15(safe_cast<System::Exception^>(V_0));//newobj				void Root::T_x3::T_x15::.ctor(System::Exception^)
	IL_0087:            Temp_6=Temp_4->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_5));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_008c:                                                                        //pop
	IL_008d:            return;                                                     //ret

}
inline void Root::T_x3::T_x12::M_x1(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x1^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	Reflector::CodeModel::IFieldReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003f;case 1:goto IL_0031;case 2:goto IL_005f;};//switch				(IL_003f,IL_0031,IL_005f)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:            Temp_0=Root::T_x3::T_x6::M_x1();                            //call				System::Object^ Root::T_x3::T_x6::M_x1()
	IL_0020:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0025:            V_0=dynamic_cast<Reflector::CodeModel::IFieldReference^>(Temp_0);//stloc.0
	IL_0026:                                                                        //ldc.i4				0x1
	IL_002b:            V_1=1;                                                      //stloc				V_1
	IL_002f:            /*goto IL_0002;*/goto IL_0031;                              //br.s				IL_0002
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_0061;                               //brfalse.s				IL_0061
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_1=0;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0047:                                                                        //ldloc.0
	IL_0048:                                                                        //ldarg.1
	IL_0049:            Temp_2=gcnew Root::T_x3::T_x1(safe_cast<System::Object^>(V_0),A_0);//newobj				void Root::T_x3::T_x1::.ctor(System::Object^,System::Object^)
	IL_004e:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0053:                                                                        //pop
	IL_0054:                                                                        //ldc.i4				0x2
	IL_0059:            V_1=2;                                                      //stloc				V_1
	IL_005d:            /*goto IL_0002;*/goto IL_005f;                              //br.s				IL_0002
	IL_005f:            goto IL_0061;                                               //br.s				IL_0061
	IL_0061:            return;                                                     //ret

}
inline Root::T_x3::T_x13::T_x13(Reflector::CodeModel::IPropertyReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Drawing::Color Temp_3;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_8 = nullptr;
	Root::T_x3::T_x11^ Temp_9 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_12 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_13 = nullptr;
	Root::T_x3::T_x11^ Temp_14 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	//local variables.
	Reflector::CodeModel::IPropertyDeclaration^ V_0 = nullptr;
	Root::T_x3::T_x11^ V_1 = nullptr;
	Root::T_x3::T_x11^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x2();*/                                     //call				void Root::T_x3::T_x2::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=Root::T_x115::M_x12(A_0);                            //call				System::String^ Root::T_x115::M_x12(Reflector::CodeModel::IPropertyReference^)
	IL_0014:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_1=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0021:                                                                        //dup
	IL_0022:            V_3=Temp_1;                                                 //stloc.3
	IL_0023:            this->SelectedImageIndex=V_3;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0028:                                                                        //ldloc.3
	IL_0029:            this->ImageIndex=V_3;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldarg.1
	IL_0030:            Temp_2=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0035:            Temp_3=System::Drawing::Color::FromArgb(Temp_2);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_003a:            this->ForeColor=Temp_3;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_003f:                                                                        //ldarg.1
	IL_0040:            Temp_4=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyReference::Resolve()
	IL_0045:            V_0=Temp_4;                                                 //stloc.0
	IL_0046:                                                                        //ldloc.0
	IL_0047:            Temp_5=V_0->GetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_004c:            if(Temp_5==nullptr)goto IL_0077;                            //brfalse.s				IL_0077
	IL_004e:            goto IL_0081;                                               //br.s				IL_0081
	IL_0050:                                                                        //ldloc.0
	IL_0051:            Temp_7=V_0->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_0056:            Temp_8=Temp_7->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_005b:            Temp_9=gcnew Root::T_x3::T_x11(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_8));//newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_0060:            V_2=Temp_9;                                                 //stloc.2
	IL_0061:                                                                        //ldloc.2
	IL_0062:                                                                        //ldnull
	IL_0063:            V_2->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_0068:                                                                        //ldarg.0
	IL_0069:            Temp_10=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_006e:                                                                        //ldloc.2
	IL_006f:            Temp_11=Temp_10->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0074:                                                                        //pop
	IL_0075:            goto IL_00a8;                                               //br.s				IL_00a8
	IL_0077:                                                                        //ldloc.0
	IL_0078:            Temp_6=V_0->SetMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_SetMethod()
	IL_007d:            if(Temp_6==nullptr)goto IL_00a8;                            //brfalse.s				IL_00a8
	IL_007f:            goto IL_0050;                                               //br.s				IL_0050
	IL_0081:                                                                        //ldloc.0
	IL_0082:            Temp_12=V_0->GetMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IPropertyDeclaration::get_GetMethod()
	IL_0087:            Temp_13=Temp_12->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_008c:            Temp_14=gcnew Root::T_x3::T_x11(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_13));//newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_0091:            V_1=Temp_14;                                                //stloc.1
	IL_0092:                                                                        //ldloc.1
	IL_0093:                                                                        //ldnull
	IL_0094:            V_1->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_15=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_009f:                                                                        //ldloc.1
	IL_00a0:            Temp_16=Temp_15->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00a5:                                                                        //pop
	IL_00a6:            goto IL_0077;                                               //br.s				IL_0077
	IL_00a8:            return;                                                     //ret

}
inline Root::T_x3::T_x14::T_x14(Reflector::CodeModel::IEventReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Drawing::Color Temp_3;
	Reflector::CodeModel::IEventDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_9 = nullptr;
	Root::T_x3::T_x11^ Temp_10 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_13 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_14 = nullptr;
	Root::T_x3::T_x11^ Temp_15 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_16 = nullptr;
	System::Int32 Temp_17 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_18 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_19 = nullptr;
	Root::T_x3::T_x11^ Temp_20 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_21 = nullptr;
	System::Int32 Temp_22 = 0;
	//local variables.
	Reflector::CodeModel::IEventDeclaration^ V_0 = nullptr;
	Root::T_x3::T_x11^ V_1 = nullptr;
	Root::T_x3::T_x11^ V_2 = nullptr;
	Root::T_x3::T_x11^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x2();*/                                     //call				void Root::T_x3::T_x2::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.1
	IL_000f:            Temp_0=Root::T_x115::M_x5(A_0);                             //call				System::String^ Root::T_x115::M_x5(Reflector::CodeModel::IEventReference^)
	IL_0014:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0019:                                                                        //ldarg.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_1=Root::T_x116::M_x12(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x12(Reflector::CodeModel::IMemberReference^)
	IL_0021:                                                                        //dup
	IL_0022:            V_4=Temp_1;                                                 //stloc.s				V_4
	IL_0024:            this->SelectedImageIndex=V_4;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0029:                                                                        //ldloc.s				V_4
	IL_002b:            this->ImageIndex=V_4;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            Temp_2=Root::T_x116::M_x1(safe_cast<Reflector::CodeModel::IMemberReference^>(A_0));//call				System::Int32 Root::T_x116::M_x1(Reflector::CodeModel::IMemberReference^)
	IL_0037:            Temp_3=System::Drawing::Color::FromArgb(Temp_2);            //call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32)
	IL_003c:            this->ForeColor=Temp_3;                                     //call				void System::Windows::Forms::TreeNode::set_ForeColor(System::Drawing::Color)
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_4=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventReference::Resolve()
	IL_0047:            V_0=Temp_4;                                                 //stloc.0
	IL_0048:                                                                        //ldloc.0
	IL_0049:            Temp_5=V_0->AddMethod;                                      //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_004e:            if(Temp_5==nullptr)goto IL_00d7;                            //brfalse				IL_00d7
	IL_0053:            goto IL_0089;                                               //br.s				IL_0089
	IL_0055:                                                                        //ldloc.0
	IL_0056:            Temp_7=V_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_005b:            if(Temp_7==nullptr)goto IL_00e7;                            //brfalse				IL_00e7
	IL_0060:            goto IL_00b0;                                               //br.s				IL_00b0
	IL_0062:                                                                        //ldloc.0
	IL_0063:            Temp_13=V_0->RemoveMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_0068:            Temp_14=Temp_13->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_006d:            Temp_15=gcnew Root::T_x3::T_x11(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_14));//newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_0072:            V_2=Temp_15;                                                //stloc.2
	IL_0073:                                                                        //ldloc.2
	IL_0074:                                                                        //ldnull
	IL_0075:            V_2->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_007a:                                                                        //ldarg.0
	IL_007b:            Temp_16=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0080:                                                                        //ldloc.2
	IL_0081:            Temp_17=Temp_16->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0086:                                                                        //pop
	IL_0087:            goto IL_0055;                                               //br.s				IL_0055
	IL_0089:                                                                        //ldloc.0
	IL_008a:            Temp_18=V_0->AddMethod;                                     //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_AddMethod()
	IL_008f:            Temp_19=Temp_18->Resolve();                                 //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_0094:            Temp_20=gcnew Root::T_x3::T_x11(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_19));//newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_0099:            V_1=Temp_20;                                                //stloc.1
	IL_009a:                                                                        //ldloc.1
	IL_009b:                                                                        //ldnull
	IL_009c:            V_1->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_21=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00a7:                                                                        //ldloc.1
	IL_00a8:            Temp_22=Temp_21->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_1));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00ad:                                                                        //pop
	IL_00ae:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00b0:                                                                        //ldloc.0
	IL_00b1:            Temp_8=V_0->InvokeMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_InvokeMethod()
	IL_00b6:            Temp_9=Temp_8->Resolve();                                   //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_00bb:            Temp_10=gcnew Root::T_x3::T_x11(safe_cast<Reflector::CodeModel::IMethodReference^>(Temp_9));//newobj				void Root::T_x3::T_x11::.ctor(Reflector::CodeModel::IMethodReference^)
	IL_00c0:            V_3=Temp_10;                                                //stloc.3
	IL_00c1:                                                                        //ldloc.3
	IL_00c2:                                                                        //ldnull
	IL_00c3:            V_3->M_x1(safe_cast<System::Object^>(nullptr));             //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            Temp_11=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_00ce:                                                                        //ldloc.3
	IL_00cf:            Temp_12=Temp_11->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_3));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_00d4:                                                                        //pop
	IL_00d5:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00d7:                                                                        //ldloc.0
	IL_00d8:            Temp_6=V_0->RemoveMethod;                                   //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IEventDeclaration::get_RemoveMethod()
	IL_00dd:            if(Temp_6==nullptr)goto IL_0055;                            //brfalse				IL_0055
	IL_00e2:            goto IL_0062;                                               //br				IL_0062
	IL_00e7:            return;                                                     //ret

}
inline Root::T_x3::T_x15::T_x15(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*Root::T_x3::T_x6();*/                                     //call				void Root::T_x3::T_x6::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->M_x12(safe_cast<System::Object^>(A_0));               //call				void Root::T_x3::T_x6::M_x12(System::Object^)
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.0
	IL_000f:                                                                        //ldc.i4				0xa6
	IL_0014:                                                                        //dup
	IL_0015:            V_0=166;                                                    //stloc.0
	IL_0016:            this->SelectedImageIndex=166;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_001b:                                                                        //ldloc.0
	IL_001c:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldarg.1
	IL_0023:            Temp_0=A_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_0028:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_002d:            return;                                                     //ret

}
inline Root::T_x3::T_x16::T_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Windows::Forms::TreeNode();*/                     //call				void System::Windows::Forms::TreeNode::.ctor()
	IL_0006:            return;                                                     //ret

}
inline void Root::T_x3::T_x16::M_x1(array<System::Windows::Forms::TreeNode^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	//local variables.
	System::Windows::Forms::TreeView^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_002a;                               //brfalse.s				IL_002a
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:            /*goto IL_000f;*/goto IL_000D01;                            //br.s				IL_000f
	IL_000D01:          try{
	IL_000f:                                                                        //ldloc.0
	IL_0010:            V_0->BeginUpdate();                                         //callvirt				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_1->AddRange(A_0);                                      //callvirt				void System::Windows::Forms::TreeNodeCollection::AddRange(array<System::Windows::Forms::TreeNode^>^)
	IL_0021:            goto IL_002a;                                               //leave.s				IL_002a
	                    ;}
	                    finally{
	IL_0023:                                                                        //ldloc.0
	IL_0024:            V_0->EndUpdate();                                           //callvirt				void System::Windows::Forms::TreeView::EndUpdate()
	IL_0029:                                                                        //endfinally
	                    ;}
	IL_002a:            return;                                                     //ret

}
inline void Root::T_x3::T_x16::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNodeCollection^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0006:            Temp_0->Clear();                                            //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_000b:            return;                                                     //ret

}
inline Root::T_x79^ Root::T_x3::T_x16::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	//local variables.
	Root::T_x3::T_x5^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0006:                                                                        //isinst				Root::T_x3::T_x5
	IL_000b:            V_0=dynamic_cast<Root::T_x3::T_x5^>(Temp_0);                //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0!=nullptr)goto IL_0013;                               //brtrue.s				IL_0013
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldnull
	IL_0012:            return nullptr;                                             //ret
	IL_0013:            goto IL_0016;                                               //br.s				IL_0016
	IL_0015:                                                                        //break
	IL_0016:                                                                        //ldloc.0
	IL_0017:            Temp_1=V_0->M_x1();                                         //callvirt				Root::T_x79^ Root::T_x3::T_x5::M_x1()
	IL_001c:            return Temp_1;                                              //ret

}
inline Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x16::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeView^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_1 = nullptr;
	//local variables.
	Root::T_x3::T_x5^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->TreeView;                                      //call				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0006:                                                                        //isinst				Root::T_x3::T_x5
	IL_000b:            V_0=dynamic_cast<Root::T_x3::T_x5^>(Temp_0);                //stloc.0
	IL_000c:                                                                        //ldloc.0
	IL_000d:            if(V_0!=nullptr)goto IL_0013;                               //brtrue.s				IL_0013
	IL_000f:            goto IL_0011;                                               //br.s				IL_0011
	IL_0011:                                                                        //ldnull
	IL_0012:            return nullptr;                                             //ret
	IL_0013:                                                                        //ldc.i4.4
	IL_0014:                                                                        //dup
	IL_0015:                                                                        //dup
	IL_0016:                                                                        //ldc.i4.2
	IL_0017:                                                                        //sub
	IL_0018:                                                                        //blt				IL_0014
	IL_001d:                                                                        //pop
	IL_001e:                                                                        //ldloc.0
	IL_001f:            Temp_1=V_0->M_x2();                                         //callvirt				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x5::M_x2()
	IL_0024:            return Temp_1;                                              //ret

}
inline Root::T_x3::T_x17::T_x17(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x6^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_1=6;                                                      //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x16();*/                                    //call				void Root::T_x3::T_x16::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldc.i4				0xa4
	IL_001d:                                                                        //dup
	IL_001e:            V_0=164;                                                    //stloc.0
	IL_001f:            this->SelectedImageIndex=164;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0024:                                                                        //ldloc.0
	IL_0025:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldstr				L"\x6023\x4325\x5827\x4F29\x422B\x4A2D\x432F\x1231\x7B33\x5835"
	IL_0030:                                                                        //ldloc				V_1
	IL_0034:            Temp_0=a(L"\x6023\x4325\x5827\x4F29\x422B\x4A2D\x432F\x1231\x7B33\x5835",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0044:            Temp_2=gcnew Root::T_x3::T_x6();                            //newobj				void Root::T_x3::T_x6::.ctor()
	IL_0049:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_004e:                                                                        //pop
	IL_004f:            return;                                                     //ret

}
inline void Root::T_x3::T_x17::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
	Root::T_x21^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Collections::SortedList^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_10 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	System::Object^ Temp_13 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_14 = nullptr;
	Root::T_x3::T_x6^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::Collections::ArrayList^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::Boolean Temp_20 = false;
	System::Object^ Temp_21 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	Reflector::CodeModel::IType^ Temp_24 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ Temp_25 = nullptr;
	Root::T_x3::T_x6^ Temp_26 = nullptr;
	System::Boolean Temp_27 = false;
	System::Boolean Temp_28 = false;
	System::Object^ Temp_29 = nullptr;
	System::Object^ Temp_30 = nullptr;
	Root::T_x3::T_x6^ Temp_31 = nullptr;
	System::Int32 Temp_32 = 0;
	System::Object^ Temp_33 = nullptr;
	System::Collections::IEnumerator^ Temp_34 = nullptr;
	//local variables.
	Root::T_x79^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Reflector::CodeModel::IModule^ V_2 = nullptr;
	Reflector::CodeModel::IAssembly^ V_3 = nullptr;
	Root::T_x21^ V_4 = nullptr;
	System::Collections::SortedList^ V_5 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_6 = nullptr;
	Root::T_x3::T_x6^ V_7 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_8 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_9 = nullptr;
	System::Collections::ArrayList^ V_10 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Collections::DictionaryEntry V_13;
	Reflector::CodeModel::IAssemblyReference^ V_14 = nullptr;
	Root::T_x3::T_x6^ V_15 = nullptr;
	System::Collections::ArrayList^ V_16 = nullptr;
	Root::T_x3::T_x6^ V_17 = nullptr;
	System::Collections::IDictionaryEnumerator^ V_18 = nullptr;
	System::Collections::IEnumerator^ V_19 = nullptr;
	System::IDisposable^ V_20 = nullptr;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:            goto IL_008e;                                               //br				IL_008e
	IL_0005:                                                                        //ldloc				V_21
	IL_0009:            switch(V_21){case 0:goto IL_00d9;case 1:goto IL_0255;case 2:goto IL_04c2;case 3:goto IL_0230;case 4:goto IL_03a3;case 5:goto IL_02e1;case 6:goto IL_00ec;case 7:goto IL_02fc;case 8:goto IL_037c;case 9:goto IL_0143;case 10:goto IL_0285;case 11:goto IL_0507;case 12:goto IL_0106;case 13:goto IL_04ad;case 14:goto IL_02b4;case 15:goto IL_03b8;case 16:goto IL_034c;case 17:goto IL_03e2;case 18:goto IL_00c5;case 19:goto IL_049d;case 20:goto IL_0298;case 21:goto IL_051b;case 22:goto IL_0129;case 23:goto IL_031d;case 24:goto IL_0449;case 25:goto IL_0332;case 26:goto IL_0367;case 27:goto IL_02c7;case 28:goto IL_0549;case 29:goto IL_04e8;case 30:goto IL_026b;case 31:goto IL_0466;};//switch				(IL_00d9,IL_0255,IL_04c2,IL_0230,IL_03a3,IL_02e1,IL_00ec,IL_02fc,IL_037c,IL_0143,IL_0285,IL_0507,IL_0106,IL_04ad,IL_02b4,IL_03b8,IL_034c,IL_03e2,IL_00c5,IL_049d,IL_0298,IL_051b,IL_0129,IL_031d,IL_0449,IL_0332,IL_0367,IL_02c7,IL_0549,IL_04e8,IL_026b,IL_0466)
	IL_008e:                                                                        //ldarg.0
	IL_008f:            this->M_x12();                                              //call				void Root::T_x3::T_x16::M_x12()
	IL_0094:                                                                        //ldarg.0
	IL_0095:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x16::M_x8()
	IL_009a:                                                                        //pop
	IL_009b:                                                                        //ldarg.0
	IL_009c:            Temp_1=this->M_x13();                                       //call				Root::T_x79^ Root::T_x3::T_x16::M_x13()
	IL_00a1:            V_0=Temp_1;                                                 //stloc.0
	IL_00a2:                                                                        //ldloc.0
	IL_00a3:                                                                        //ldc.i4.0
	IL_00a4:            V_0->M_x1(safe_cast<System::Int32>(0));                     //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_00a9:                                                                        //ldnull
	IL_00aa:            V_1=safe_cast<Reflector::CodeModel::IAssembly^>(nullptr);   //stloc.1
	IL_00ab:                                                                        //ldarg.0
	IL_00ac:            Temp_2=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_00b1:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_00b6:            V_2=dynamic_cast<Reflector::CodeModel::IModule^>(Temp_2);   //stloc.2
	IL_00b7:                                                                        //ldc.i4				0x12
	IL_00bc:            V_21=18;                                                    //stloc				V_21
	IL_00c0:            /*goto IL_0005;*/goto IL_00c5;                              //br				IL_0005
	IL_00c5:                                                                        //ldloc.2
	IL_00c6:            if(V_2==nullptr)goto IL_04ed;                               //brfalse				IL_04ed
	IL_00cb:                                                                        //ldc.i4				0x0
	IL_00d0:            V_21=0;                                                     //stloc				V_21
	IL_00d4:            /*goto IL_0005;*/goto IL_00d9;                              //br				IL_0005
	IL_00d9:            goto IL_0337;                                               //br				IL_0337
	IL_00de:                                                                        //ldc.i4				0x6
	IL_00e3:            V_21=6;                                                     //stloc				V_21
	IL_00e7:            /*goto IL_0005;*/goto IL_00ec;                              //br				IL_0005
	IL_00ec:                                                                        //ldloc.s				V_4
	IL_00ee:            Temp_7=V_4->M_x8();                                         //callvirt				System::Boolean Root::T_x21::M_x8()
	IL_00f3:            if(Temp_7)goto IL_02b9;                                     //brtrue				IL_02b9
	IL_00f8:                                                                        //ldc.i4				0xc
	IL_00fd:            V_21=12;                                                    //stloc				V_21
	IL_0101:            /*goto IL_0005;*/goto IL_0106;                              //br				IL_0005
	IL_0106:            goto IL_0520;                                               //br				IL_0520
	IL_010b:                                                                        //ldloc.s				V_5
	IL_010d:                                                                        //ldloc.s				V_6
	IL_010f:            Temp_13=V_5[safe_cast<System::Object^>(V_6)];               //callvirt				System::Object^ System::Collections::SortedList::get_Item(System::Object^)
	IL_0114:                                                                        //castclass				System::Collections::ArrayList
	IL_0119:            V_10=safe_cast<System::Collections::ArrayList^>(Temp_13);   //stloc.s				V_10
	IL_011b:                                                                        //ldc.i4				0x16
	IL_0120:            V_21=22;                                                    //stloc				V_21
	IL_0124:            /*goto IL_0005;*/goto IL_0129;                              //br				IL_0005
	IL_0129:            goto IL_044e;                                               //br				IL_044e
	IL_012e:            Temp_8=gcnew System::Collections::SortedList();             //newobj				void System::Collections::SortedList::.ctor()
	IL_0133:            V_5=Temp_8;                                                 //stloc.s				V_5
	IL_0135:                                                                        //ldc.i4				0x9
	IL_013a:            V_21=9;                                                     //stloc				V_21
	IL_013e:            /*goto IL_0005;*/goto IL_0143;                              //br				IL_0005
	IL_0143:            goto IL_00de;                                               //br				IL_00de
	IL_014301:          try{
	IL_0148:                                                                        //ldc.i4				0x0
	IL_014d:            V_21=0;                                                     //stloc				V_21
	IL_0151:            /*goto IL_0155;*/goto IL_0153;                              //br.s				IL_0155
	IL_0153:            goto IL_0172;                                               //br.s				IL_0172
	IL_0155:                                                                        //ldloc				V_21
	IL_0159:            switch(V_21){case 0:goto IL_0153;case 1:goto IL_01ca;case 2:goto IL_01bd;case 3:goto IL_0193;case 4:goto IL_017f;};//switch				(IL_0153,IL_01ca,IL_01bd,IL_0193,IL_017f)
	IL_0172:            goto IL_0174;                                               //br.s				IL_0174
	IL_0174:                                                                        //ldc.i4				0x4
	IL_0179:            V_21=4;                                                     //stloc				V_21
	IL_017d:            /*goto IL_0155;*/goto IL_017f;                              //br.s				IL_0155
	IL_017f:                                                                        //ldloc.s				V_19
	IL_0181:            Temp_20=V_19->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0186:            if(Temp_20)goto IL_0195;                                    //brtrue.s				IL_0195
	IL_0188:                                                                        //ldc.i4				0x3
	IL_018d:            V_21=3;                                                     //stloc				V_21
	IL_0191:            /*goto IL_0155;*/goto IL_0193;                              //br.s				IL_0155
	IL_0193:            goto IL_01bf;                                               //br.s				IL_01bf
	IL_0195:                                                                        //ldloc.s				V_19
	IL_0197:            Temp_21=V_19->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_019c:                                                                        //castclass				Root::T_x3::T_x6
	IL_01a1:            V_17=safe_cast<Root::T_x3::T_x6^>(Temp_21);                 //stloc.s				V_17
	IL_01a3:                                                                        //ldloc.s				V_15
	IL_01a5:            Temp_22=V_15->Nodes;                                        //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_01aa:                                                                        //ldloc.s				V_17
	IL_01ac:            Temp_23=Temp_22->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_17));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_01b1:                                                                        //pop
	IL_01b2:                                                                        //ldc.i4				0x2
	IL_01b7:            V_21=2;                                                     //stloc				V_21
	IL_01bb:            /*goto IL_0155;*/goto IL_01bd;                              //br.s				IL_0155
	IL_01bd:            goto IL_0174;                                               //br.s				IL_0174
	IL_01bf:                                                                        //ldc.i4				0x1
	IL_01c4:            V_21=1;                                                     //stloc				V_21
	IL_01c8:            /*goto IL_0155;*/goto IL_01ca;                              //br.s				IL_0155
	IL_01ca:            goto IL_025d;                                               //leave				IL_025d
	                    ;}
	                    finally{
	IL_01cf:            goto IL_01e6;                                               //br.s				IL_01e6
	IL_01d1:                                                                        //ldloc				V_21
	IL_01d5:            switch(V_21){case 0:goto IL_01fa;case 1:goto IL_0209;case 2:goto IL_021d;};//switch				(IL_01fa,IL_0209,IL_021d)
	IL_01e6:                                                                        //ldloc.s				V_19
	IL_01e8:                                                                        //isinst				System::IDisposable
	IL_01ed:            V_20=dynamic_cast<System::IDisposable^>(V_19);              //stloc.s				V_20
	IL_01ef:                                                                        //ldc.i4				0x0
	IL_01f4:            V_21=0;                                                     //stloc				V_21
	IL_01f8:            /*goto IL_01d1;*/goto IL_01fa;                              //br.s				IL_01d1
	IL_01fa:                                                                        //ldloc.s				V_20
	IL_01fc:            if(V_20==nullptr)goto IL_021f;                              //brfalse.s				IL_021f
	IL_01fe:                                                                        //ldc.i4				0x1
	IL_0203:            V_21=1;                                                     //stloc				V_21
	IL_0207:            /*goto IL_01d1;*/goto IL_0209;                              //br.s				IL_01d1
	IL_0209:            goto IL_020b;                                               //br.s				IL_020b
	IL_020b:                                                                        //ldloc.s				V_20
	IL_020d:            /*V_20->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0212:                                                                        //ldc.i4				0x2
	IL_0217:            V_21=2;                                                     //stloc				V_21
	IL_021b:            /*goto IL_01d1;*/goto IL_021d;                              //br.s				IL_01d1
	IL_021d:            goto IL_021f;                                               //br.s				IL_021f
	IL_021f:                                                                        //endfinally
	                    ;}
	IL_0220:                                                                        //ldloc.3
	IL_0221:            V_1=V_3;                                                    //stloc.1
	IL_0222:                                                                        //ldc.i4				0x3
	IL_0227:            V_21=3;                                                     //stloc				V_21
	IL_022b:            /*goto IL_0005;*/goto IL_0230;                              //br				IL_0005
	IL_0230:            goto IL_0351;                                               //br				IL_0351
	IL_0235:                                                                        //ldloc.0
	IL_0236:                                                                        //ldloc.s				V_4
	IL_0238:            Temp_12=V_4->M_x1();                                        //callvirt				System::Int32 Root::T_x21::M_x1()
	IL_023d:            V_0->M_x1(Temp_12);                                         //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_0242:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0247:                                                                        //ldc.i4				0x1
	IL_024c:            V_21=1;                                                     //stloc				V_21
	IL_0250:            /*goto IL_0005;*/goto IL_0255;                              //br				IL_0005
	IL_0255:            goto IL_0258;                                               //br.s				IL_0258
	IL_0257:                                                                        //break
	IL_0258:            goto IL_00de;                                               //br				IL_00de
	IL_025d:                                                                        //ldc.i4				0x1e
	IL_0262:            V_21=30;                                                    //stloc				V_21
	IL_0266:            /*goto IL_0005;*/goto IL_026b;                              //br				IL_0005
	IL_026b:                                                                        //ldloc.s				V_18
	IL_026d:            Temp_28=safe_cast<System::Collections::IEnumerator^>(V_18)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0272:            if(Temp_28)goto IL_03e7;                                    //brtrue				IL_03e7
	IL_0277:                                                                        //ldc.i4				0xa
	IL_027c:            V_21=10;                                                    //stloc				V_21
	IL_0280:            /*goto IL_0005;*/goto IL_0285;                              //br				IL_0005
	IL_0285:            goto IL_02e6;                                               //br.s				IL_02e6
	IL_0287:                                                                        //ldnull
	IL_0288:            V_10=safe_cast<System::Collections::ArrayList^>(nullptr);   //stloc.s				V_10
	IL_028a:                                                                        //ldc.i4				0x14
	IL_028f:            V_21=20;                                                    //stloc				V_21
	IL_0293:            /*goto IL_0005;*/goto IL_0298;                              //br				IL_0005
	IL_0298:                                                                        //ldloc.s				V_5
	IL_029a:                                                                        //ldloc.s				V_6
	IL_029c:            Temp_17=V_5->Contains(safe_cast<System::Object^>(V_6));     //callvirt				System::Boolean System::Collections::SortedList::Contains(System::Object^)
	IL_02a1:            if(!Temp_17)goto IL_04c7;                                   //brfalse				IL_04c7
	IL_02a6:                                                                        //ldc.i4				0xe
	IL_02ab:            V_21=14;                                                    //stloc				V_21
	IL_02af:            /*goto IL_0005;*/goto IL_02b4;                              //br				IL_0005
	IL_02b4:            goto IL_010b;                                               //br				IL_010b
	IL_02b9:                                                                        //ldc.i4				0x1b
	IL_02be:            V_21=27;                                                    //stloc				V_21
	IL_02c2:            /*goto IL_0005;*/goto IL_02c7;                              //br				IL_0005
	IL_02c7:                                                                        //ldloc.s				V_4
	IL_02c9:            Temp_27=V_4->M_x2();                                        //callvirt				System::Boolean Root::T_x21::M_x2()
	IL_02ce:            if(!Temp_27)goto IL_0235;                                   //brfalse				IL_0235
	IL_02d3:                                                                        //ldc.i4				0x5
	IL_02d8:            V_21=5;                                                     //stloc				V_21
	IL_02dc:            /*goto IL_0005;*/goto IL_02e1;                              //br				IL_0005
	IL_02e1:            goto IL_0381;                                               //br				IL_0381
	IL_02e6:                                                                        //ldarg.0
	IL_02e7:                                                                        //ldloc.s				V_11
	IL_02e9:            Root::T_x3::T_x16::M_x1(V_11);                              //call				void Root::T_x3::T_x16::M_x1(array<System::Windows::Forms::TreeNode^>^)
	IL_02ee:                                                                        //ldc.i4				0x7
	IL_02f3:            V_21=7;                                                     //stloc				V_21
	IL_02f7:            /*goto IL_0005;*/goto IL_02fc;                              //br				IL_0005
	IL_02fc:            goto IL_054e;                                               //br				IL_054e
	IL_0301:                                                                        //ldloc.s				V_4
	IL_0303:            Temp_5=V_4->M_x12();                                        //callvirt				System::Object^ Root::T_x21::M_x12()
	IL_0308:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_030d:            V_9=dynamic_cast<Reflector::CodeModel::IMemberReference^>(Temp_5);//stloc.s				V_9
	IL_030f:                                                                        //ldc.i4				0x17
	IL_0314:            V_21=23;                                                    //stloc				V_21
	IL_0318:            /*goto IL_0005;*/goto IL_031d;                              //br				IL_0005
	IL_031d:                                                                        //ldloc.s				V_9
	IL_031f:            if(V_9==nullptr)goto IL_049f;                               //brfalse				IL_049f
	IL_0324:                                                                        //ldc.i4				0x19
	IL_0329:            V_21=25;                                                    //stloc				V_21
	IL_032d:            /*goto IL_0005;*/goto IL_0332;                              //br				IL_0005
	IL_0332:            goto IL_046b;                                               //br				IL_046b
	IL_0337:                                                                        //ldloc.2
	IL_0338:            Temp_3=V_2->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_033d:            V_1=Temp_3;                                                 //stloc.1
	IL_033e:                                                                        //ldc.i4				0x10
	IL_0343:            V_21=16;                                                    //stloc				V_21
	IL_0347:            /*goto IL_0005;*/goto IL_034c;                              //br				IL_0005
	IL_034c:            goto IL_04ed;                                               //br				IL_04ed
	IL_0351:                                                                        //ldarg.0
	IL_0352:            Temp_4=this->M_x2();                                        //call				Root::T_x21^ Root::T_x3::T_x17::M_x2()
	IL_0357:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_0359:                                                                        //ldc.i4				0x1a
	IL_035e:            V_21=26;                                                    //stloc				V_21
	IL_0362:            /*goto IL_0005;*/goto IL_0367;                              //br				IL_0005
	IL_0367:                                                                        //ldloc.s				V_4
	IL_0369:            if(V_4==nullptr)goto IL_054e;                               //brfalse				IL_054e
	IL_036e:                                                                        //ldc.i4				0x8
	IL_0373:            V_21=8;                                                     //stloc				V_21
	IL_0377:            /*goto IL_0005;*/goto IL_037c;                              //br				IL_0005
	IL_037c:            goto IL_012e;                                               //br				IL_012e
	IL_0381:                                                                        //ldnull
	IL_0382:            V_6=safe_cast<Reflector::CodeModel::IAssemblyReference^>(nullptr);//stloc.s				V_6
	IL_0384:                                                                        //ldnull
	IL_0385:            V_7=safe_cast<Root::T_x3::T_x6^>(nullptr);                  //stloc.s				V_7
	IL_0387:                                                                        //ldloc.s				V_4
	IL_0389:            Temp_6=V_4->M_x12();                                        //callvirt				System::Object^ Root::T_x21::M_x12()
	IL_038e:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0393:            V_8=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_6);//stloc.s				V_8
	IL_0395:                                                                        //ldc.i4				0x4
	IL_039a:            V_21=4;                                                     //stloc				V_21
	IL_039e:            /*goto IL_0005;*/goto IL_03a3;                              //br				IL_0005
	IL_03a3:                                                                        //ldloc.s				V_8
	IL_03a5:            if(V_8==nullptr)goto IL_0301;                               //brfalse				IL_0301
	IL_03aa:                                                                        //ldc.i4				0xf
	IL_03af:            V_21=15;                                                    //stloc				V_21
	IL_03b3:            /*goto IL_0005;*/goto IL_03b8;                              //br				IL_0005
	IL_03b8:            goto IL_03ba;                                               //br.s				IL_03ba
	IL_03ba:                                                                        //ldloc.s				V_8
	IL_03bc:            Temp_14=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(V_8));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_03c1:            V_6=Temp_14;                                                //stloc.s				V_6
	IL_03c3:                                                                        //ldloc.s				V_8
	IL_03c5:            Temp_15=Root::T_x3::T_x4::M_x1(safe_cast<System::Object^>(V_8));//call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_03ca:            V_7=Temp_15;                                                //stloc.s				V_7
	IL_03cc:                                                                        //ldloc.s				V_7
	IL_03ce:                                                                        //ldloc.1
	IL_03cf:            V_7->M_x1(safe_cast<System::Object^>(V_1));                 //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_03d4:                                                                        //ldc.i4				0x11
	IL_03d9:            V_21=17;                                                    //stloc				V_21
	IL_03dd:            /*goto IL_0005;*/goto IL_03e2;                              //br				IL_0005
	IL_03e2:            goto IL_0301;                                               //br				IL_0301
	IL_03e7:                                                                        //ldloc.s				V_18
	IL_03e9:            Temp_29=safe_cast<System::Collections::IEnumerator^>(V_18)->Current;//callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_03ee:                                                                        //unbox				System::Collections::DictionaryEntry
	IL_03f3:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_03f8:            V_13=safe_cast<System::Collections::DictionaryEntry>(Temp_29);//stloc.s				V_13
	IL_03fa:                                                                        //ldloca.s				V_13
	IL_03fc:            Temp_30=V_13.Key;                                           //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_0401:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_0406:            V_14=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_30);//stloc.s				V_14
	IL_0408:                                                                        //ldloc.s				V_14
	IL_040a:            Temp_31=Root::T_x3::T_x4::M_x1(safe_cast<System::Object^>(V_14));//call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_040f:            V_15=Temp_31;                                               //stloc.s				V_15
	IL_0411:                                                                        //ldloc.s				V_11
	IL_0413:            Temp_32=V_12;                                               //ldloc.s				V_12
	IL_0415:                                                                        //dup
	IL_0416:                                                                        //ldc.i4.1
	IL_0417:                                                                        //add
	IL_0418:            V_12=(Temp_32 + 1);                                         //stloc.s				V_12
	IL_041a:                                                                        //ldloc.s				V_15
	IL_041c:            V_11[Temp_32]=safe_cast<System::Windows::Forms::TreeNode^>(V_15);//stelem.ref
	IL_041d:                                                                        //ldloca.s				V_13
	IL_041f:            Temp_33=V_13.Value;                                         //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_0424:                                                                        //castclass				System::Collections::ArrayList
	IL_0429:            V_16=safe_cast<System::Collections::ArrayList^>(Temp_33);   //stloc.s				V_16
	IL_042b:                                                                        //ldloc.s				V_16
	IL_042d:            V_16->Sort();                                               //callvirt				void System::Collections::ArrayList::Sort()
	IL_0432:                                                                        //ldloc.s				V_16
	IL_0434:            Temp_34=V_16->GetEnumerator();                              //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_0439:            V_19=Temp_34;                                               //stloc.s				V_19
	IL_043b:                                                                        //ldc.i4				0x18
	IL_0440:            V_21=24;                                                    //stloc				V_21
	IL_0444:            /*goto IL_0005;*/goto IL_0449;                              //br				IL_0005
	IL_0449:            /*goto IL_0148;*/goto IL_014301;                            //br				IL_0148
	IL_044e:                                                                        //ldloc.s				V_10
	IL_0450:                                                                        //ldloc.s				V_7
	IL_0452:            Temp_19=V_10->Add(safe_cast<System::Object^>(V_7));         //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0457:                                                                        //pop
	IL_0458:                                                                        //ldc.i4				0x1f
	IL_045d:            V_21=31;                                                    //stloc				V_21
	IL_0461:            /*goto IL_0005;*/goto IL_0466;                              //br				IL_0005
	IL_0466:            goto IL_0235;                                               //br				IL_0235
	IL_046b:                                                                        //ldloc.s				V_9
	IL_046d:            Temp_24=V_9->DeclaringType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0472:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0477:            Temp_25=Root::T_x115::M_x1(safe_cast<Reflector::CodeModel::IType^>(dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_24)));//call				Reflector::CodeModel::IAssemblyReference^ Root::T_x115::M_x1(Reflector::CodeModel::IType^)
	IL_047c:            V_6=Temp_25;                                                //stloc.s				V_6
	IL_047e:                                                                        //ldloc.s				V_9
	IL_0480:            Temp_26=Root::T_x3::T_x4::M_x1(safe_cast<System::Object^>(V_9));//call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_0485:            V_7=Temp_26;                                                //stloc.s				V_7
	IL_0487:                                                                        //ldloc.s				V_7
	IL_0489:                                                                        //ldloc.1
	IL_048a:            V_7->M_x1(safe_cast<System::Object^>(V_1));                 //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_048f:                                                                        //ldc.i4				0x13
	IL_0494:            V_21=19;                                                    //stloc				V_21
	IL_0498:            /*goto IL_0005;*/goto IL_049d;                              //br				IL_0005
	IL_049d:            goto IL_049f;                                               //br.s				IL_049f
	IL_049f:                                                                        //ldc.i4				0xd
	IL_04a4:            V_21=13;                                                    //stloc				V_21
	IL_04a8:            /*goto IL_0005;*/goto IL_04ad;                              //br				IL_0005
	IL_04ad:                                                                        //ldloc.s				V_6
	IL_04af:            if(V_6==nullptr)goto IL_0235;                               //brfalse				IL_0235
	IL_04b4:                                                                        //ldc.i4				0x2
	IL_04b9:            V_21=2;                                                     //stloc				V_21
	IL_04bd:            /*goto IL_0005;*/goto IL_04c2;                              //br				IL_0005
	IL_04c2:            goto IL_0287;                                               //br				IL_0287
	IL_04c7:                                                                        //ldc.i4.0
	IL_04c8:            Temp_18=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_04cd:            V_10=Temp_18;                                               //stloc.s				V_10
	IL_04cf:                                                                        //ldloc.s				V_5
	IL_04d1:                                                                        //ldloc.s				V_6
	IL_04d3:                                                                        //ldloc.s				V_10
	IL_04d5:            V_5->Add(safe_cast<System::Object^>(V_6),safe_cast<System::Object^>(V_10));//callvirt				void System::Collections::SortedList::Add(System::Object^,System::Object^)
	IL_04da:                                                                        //ldc.i4				0x1d
	IL_04df:            V_21=29;                                                    //stloc				V_21
	IL_04e3:            /*goto IL_0005;*/goto IL_04e8;                              //br				IL_0005
	IL_04e8:            goto IL_044e;                                               //br				IL_044e
	IL_04ed:                                                                        //ldarg.0
	IL_04ee:            Temp_16=this->F_x1;                                         //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_04f3:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_04f8:            V_3=dynamic_cast<Reflector::CodeModel::IAssembly^>(Temp_16);//stloc.3
	IL_04f9:                                                                        //ldc.i4				0xb
	IL_04fe:            V_21=11;                                                    //stloc				V_21
	IL_0502:            /*goto IL_0005;*/goto IL_0507;                              //br				IL_0005
	IL_0507:                                                                        //ldloc.3
	IL_0508:            if(V_3==nullptr)goto IL_0351;                               //brfalse				IL_0351
	IL_050d:                                                                        //ldc.i4				0x15
	IL_0512:            V_21=21;                                                    //stloc				V_21
	IL_0516:            /*goto IL_0005;*/goto IL_051b;                              //br				IL_0005
	IL_051b:            goto IL_0220;                                               //br				IL_0220
	IL_0520:                                                                        //ldloc.s				V_5
	IL_0522:            Temp_9=V_5->Count;                                          //callvirt				System::Int32 System::Collections::SortedList::get_Count()
	IL_0527:                                                                        //conv.ovf.u4
	IL_0528:            Temp_10=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_9));//newarr				System::Windows::Forms::TreeNode
	IL_052d:            V_11=Temp_10;                                               //stloc.s				V_11
	IL_052f:                                                                        //ldc.i4.0
	IL_0530:            V_12=0;                                                     //stloc.s				V_12
	IL_0532:                                                                        //ldloc.s				V_5
	IL_0534:            Temp_11=V_5->GetEnumerator();                               //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::SortedList::GetEnumerator()
	IL_0539:            V_18=Temp_11;                                               //stloc.s				V_18
	IL_053b:                                                                        //ldc.i4				0x1c
	IL_0540:            V_21=28;                                                    //stloc				V_21
	IL_0544:            /*goto IL_0005;*/goto IL_0549;                              //br				IL_0005
	IL_0549:            goto IL_025d;                                               //br				IL_025d
	IL_054e:                                                                        //ldloc.0
	IL_054f:                                                                        //ldc.i4.s				100
	IL_0551:            V_0->M_x1(safe_cast<System::Int32>(100));                   //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_0556:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_055b:            return;                                                     //ret

}
inline Root::T_x21^ Root::T_x3::T_x17::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	Root::T_x21^ Temp_1 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_2 = nullptr;
	Root::T_x21^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Root::T_x21^ Temp_5 = nullptr;
	Root::T_x21^ Temp_6 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	Root::T_x21^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	//local variables.
	Reflector::CodeModel::IModule^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_4 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_5 = nullptr;
	Reflector::CodeModel::INamespace^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_7
	IL_0006:            switch(V_7){case 0:goto IL_0068;case 1:goto IL_01b2;case 2:goto IL_013b;case 3:goto IL_005a;case 4:goto IL_00ca;case 5:goto IL_0093;case 6:goto IL_0182;case 7:goto IL_00e7;case 8:goto IL_0162;case 9:goto IL_0081;case 10:goto IL_00fc;case 11:goto IL_01a1;case 12:goto IL_012a;case 13:goto IL_00b6;};//switch				(IL_0068,IL_01b2,IL_013b,IL_005a,IL_00ca,IL_0093,IL_0182,IL_00e7,IL_0162,IL_0081,IL_00fc,IL_01a1,IL_012a,IL_00b6)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_0=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_0049:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_004e:            V_0=dynamic_cast<Reflector::CodeModel::IModule^>(Temp_0);   //stloc.0
	IL_004f:                                                                        //ldc.i4				0x3
	IL_0054:            V_7=3;                                                      //stloc				V_7
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:                                                                        //ldloc.0
	IL_005b:            if(V_0==nullptr)goto IL_009c;                               //brfalse.s				IL_009c
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_7=0;                                                      //stloc				V_7
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:            goto IL_00fe;                                               //br				IL_00fe
	IL_006d:                                                                        //ldloc.s				V_4
	IL_006f:            Temp_7=V_4->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0074:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_0076:                                                                        //ldc.i4				0x9
	IL_007b:            V_7=9;                                                      //stloc				V_7
	IL_007f:            /*goto IL_0002;*/goto IL_0081;                              //br.s				IL_0002
	IL_0081:                                                                        //ldloc.s				V_5
	IL_0083:            if(V_5==nullptr)goto IL_00cc;                               //brfalse.s				IL_00cc
	IL_0085:                                                                        //ldc.i4				0x5
	IL_008a:            V_7=5;                                                      //stloc				V_7
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_0105;                                               //br.s				IL_0105
	IL_0095:                                                                        //ldloc.3
	IL_0096:            Temp_3=gcnew Root::T_x21(safe_cast<System::Object^>(V_3));  //newobj				void Root::T_x21::.ctor(System::Object^)
	IL_009b:            return Temp_3;                                              //ret
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_4=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_00a2:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_00a7:            V_1=dynamic_cast<Reflector::CodeModel::IAssembly^>(Temp_4); //stloc.1
	IL_00a8:                                                                        //ldc.i4				0xd
	IL_00ad:            V_7=13;                                                     //stloc				V_7
	IL_00b1:            /*goto IL_0002;*/goto IL_00b6;                              //br				IL_0002
	IL_00b6:                                                                        //ldloc.1
	IL_00b7:            if(V_1==nullptr)goto IL_0187;                               //brfalse				IL_0187
	IL_00bc:                                                                        //ldc.i4				0x4
	IL_00c1:            V_7=4;                                                      //stloc				V_7
	IL_00c5:            /*goto IL_0002;*/goto IL_00ca;                              //br				IL_0002
	IL_00ca:            goto IL_0140;                                               //br.s				IL_0140
	IL_00cc:                                                                        //ldarg.0
	IL_00cd:            Temp_8=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_00d2:                                                                        //isinst				Reflector::CodeModel::INamespace
	IL_00d7:            V_6=dynamic_cast<Reflector::CodeModel::INamespace^>(Temp_8);//stloc.s				V_6
	IL_00d9:                                                                        //ldc.i4				0x7
	IL_00de:            V_7=7;                                                      //stloc				V_7
	IL_00e2:            /*goto IL_0002;*/goto IL_00e7;                              //br				IL_0002
	IL_00e7:                                                                        //ldloc.s				V_6
	IL_00e9:            if(V_6==nullptr)goto IL_01b7;                               //brfalse				IL_01b7
	IL_00ee:                                                                        //ldc.i4				0xa
	IL_00f3:            V_7=10;                                                     //stloc				V_7
	IL_00f7:            /*goto IL_0002;*/goto IL_00fc;                              //br				IL_0002
	IL_00fc:            goto IL_010d;                                               //br.s				IL_010d
	IL_00fe:                                                                        //ldloc.0
	IL_00ff:            Temp_1=gcnew Root::T_x21(safe_cast<System::Object^>(V_0));  //newobj				void Root::T_x21::.ctor(System::Object^)
	IL_0104:            return Temp_1;                                              //ret
	IL_0105:                                                                        //ldloc.s				V_5
	IL_0107:            Temp_6=gcnew Root::T_x21(safe_cast<System::Object^>(V_5));  //newobj				void Root::T_x21::.ctor(System::Object^)
	IL_010c:            return Temp_6;                                              //ret
	IL_010d:                                                                        //ldloc.s				V_6
	IL_010f:            Temp_9=gcnew Root::T_x21(safe_cast<System::Object^>(V_6));  //newobj				void Root::T_x21::.ctor(System::Object^)
	IL_0114:            return Temp_9;                                              //ret
	IL_0115:                                                                        //ldloc.2
	IL_0116:            Temp_2=V_2->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_011b:            V_3=Temp_2;                                                 //stloc.3
	IL_011c:                                                                        //ldc.i4				0xc
	IL_0121:            V_7=12;                                                     //stloc				V_7
	IL_0125:            /*goto IL_0002;*/goto IL_012a;                              //br				IL_0002
	IL_012a:                                                                        //ldloc.3
	IL_012b:            if(V_3==nullptr)goto IL_0147;                               //brfalse.s				IL_0147
	IL_012d:                                                                        //ldc.i4				0x2
	IL_0132:            V_7=2;                                                      //stloc				V_7
	IL_0136:            /*goto IL_0002;*/goto IL_013b;                              //br				IL_0002
	IL_013b:            goto IL_0095;                                               //br				IL_0095
	IL_0140:                                                                        //ldloc.1
	IL_0141:            Temp_5=gcnew Root::T_x21(safe_cast<System::Object^>(V_1));  //newobj				void Root::T_x21::.ctor(System::Object^)
	IL_0146:            return Temp_5;                                              //ret
	IL_0147:                                                                        //ldarg.0
	IL_0148:            Temp_10=this->F_x1;                                         //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_014d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0152:            V_4=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_10);//stloc.s				V_4
	IL_0154:                                                                        //ldc.i4				0x8
	IL_0159:            V_7=8;                                                      //stloc				V_7
	IL_015d:            /*goto IL_0002;*/goto IL_0162;                              //br				IL_0002
	IL_0162:                                                                        //ldloc.s				V_4
	IL_0164:            if(V_4==nullptr)goto IL_00cc;                               //brfalse				IL_00cc
	IL_0169:                                                                        //ldc.i4.4
	IL_016a:                                                                        //dup
	IL_016b:                                                                        //dup
	IL_016c:                                                                        //ldc.i4.2
	IL_016d:                                                                        //sub
	IL_016e:                                                                        //blt				IL_016a
	IL_0173:                                                                        //pop
	IL_0174:                                                                        //ldc.i4				0x6
	IL_0179:            V_7=6;                                                      //stloc				V_7
	IL_017d:            /*goto IL_0002;*/goto IL_0182;                              //br				IL_0002
	IL_0182:            goto IL_006d;                                               //br				IL_006d
	IL_0187:                                                                        //ldarg.0
	IL_0188:            Temp_11=this->F_x1;                                         //ldfld				System::Object^ Root::T_x3::T_x17 F_x1
	IL_018d:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0192:            V_2=dynamic_cast<Reflector::CodeModel::IMethodReference^>(Temp_11);//stloc.2
	IL_0193:                                                                        //ldc.i4				0xb
	IL_0198:            V_7=11;                                                     //stloc				V_7
	IL_019c:            /*goto IL_0002;*/goto IL_01a1;                              //br				IL_0002
	IL_01a1:                                                                        //ldloc.2
	IL_01a2:            if(V_2==nullptr)goto IL_0147;                               //brfalse.s				IL_0147
	IL_01a4:                                                                        //ldc.i4				0x1
	IL_01a9:            V_7=1;                                                      //stloc				V_7
	IL_01ad:            /*goto IL_0002;*/goto IL_01b2;                              //br				IL_0002
	IL_01b2:            goto IL_0115;                                               //br				IL_0115
	IL_01b7:                                                                        //ldnull
	IL_01b8:            return nullptr;                                             //ret

}
inline Root::T_x3::T_x1::T_x1(System::Object^ A_0,System::Object^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_2 = nullptr;
	Root::T_x3::T_x6^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Root::T_x3::T_x1^ Temp_10 = nullptr;
	Root::T_x3::T_x1^ Temp_11 = nullptr;
	Root::T_x3::T_x1^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	Root::T_x3::T_x1^ Temp_14 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_1=7;                                                      //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x16();*/                                    //call				void Root::T_x3::T_x16::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x3::T_x1 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.2
	IL_0018:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_001d:            this->F_x2=safe_cast<Reflector::CodeModel::IAssembly^>(A_1);//stfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldc.i4				0xa4
	IL_0029:                                                                        //dup
	IL_002a:            V_0=164;                                                    //stloc.0
	IL_002b:            this->SelectedImageIndex=164;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0030:                                                                        //ldloc.0
	IL_0031:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_0036:                                                                        //ldarg.0
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_0=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_003d:            Temp_11=this;if(Temp_0==nullptr)goto IL_0041;               //brfalse.s				IL_0041
	IL_003f:            Temp_12=Temp_11;goto IL_0051;                               //br.s				IL_0051
	IL_0041:                                                                        //ldstr				L"\x7024\x5426\x4C28\x4F2A\x0D2C\x6D2E\x4830"
	IL_0046:                                                                        //ldloc				V_1
	IL_004a:            Temp_1=a(L"\x7024\x5426\x4C28\x4F2A\x0D2C\x6D2E\x4830",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004f:            Temp_14=Temp_11;Temp_13=Temp_1;goto IL_007f;                //br.s				IL_007f
	IL_0051:                                                                        //ldstr				L"\x7024\x5426\x4C28\x4F2A\x0D2C\x662E\x5F30\x1332\x1234"
	IL_0056:                                                                        //ldloc				V_1
	IL_005a:            Temp_5=a(L"\x7024\x5426\x4C28\x4F2A\x0D2C\x662E\x5F30\x1332\x1234",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:                                                                        //ldarg.0
	IL_0060:            Temp_6=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_0065:            Temp_7=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_006a:                                                                        //ldstr				L"\x0224\x0726\x6B28\x522A"
	IL_006f:                                                                        //ldloc				V_1
	IL_0073:            Temp_8=a(L"\x0224\x0726\x6B28\x522A",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0078:            Temp_9=System::String::Concat(Temp_5,Temp_7,Temp_8);        //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_007d:            Temp_14=Temp_12;Temp_13=Temp_9;goto IL_007f;                //br.s				IL_007f
	IL_007f:            Temp_14->Text=Temp_13;/*warning ! semantic stack doesn't empty at joint !;*///call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_0084:                                                                        //ldarg.0
	IL_0085:            Temp_2=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_008a:            Temp_3=gcnew Root::T_x3::T_x6();                            //newobj				void Root::T_x3::T_x6::.ctor()
	IL_008f:            Temp_4=Temp_2->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_3));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0094:                                                                        //pop
	IL_0095:            return;                                                     //ret

}
inline void Root::T_x3::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ Temp_2 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_3 = nullptr;
	Root::T_x100^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Root::T_x23^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	Root::T_x3::T_x6^ Temp_8 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::Boolean Temp_11 = false;
	System::Boolean Temp_12 = false;
	System::Int32 Temp_13 = 0;
	System::Collections::ArrayList^ Temp_14 = nullptr;
	Reflector::CodeModel::IAssemblyResolver^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_17 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_18 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	array<Reflector::CodeModel::IAssembly^>^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_22 = nullptr;
	Root::T_x3::T_x15^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Root::T_x79^ V_1 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_2 = nullptr;
	System::Collections::ArrayList^ V_3 = nullptr;
	System::Boolean V_4 = false;
	Reflector::CodeModel::IAssemblyResolver^ V_5 = nullptr;
	Root::T_x23^ V_6 = nullptr;
	Root::T_x3::T_x6^ V_7 = nullptr;
	System::NullReferenceException^ V_8 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_9 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_11
	IL_0006:            switch(V_11){case 0:goto IL_0062;case 1:goto IL_021f;case 2:goto IL_01dc;case 3:goto IL_01a1;case 4:goto IL_01ec;case 5:goto IL_01b7;case 6:goto IL_004c;case 7:goto IL_01fe;};//switch				(IL_0062,IL_021f,IL_01dc,IL_01a1,IL_01ec,IL_01b7,IL_004c,IL_01fe)
	IL_002b:                                                                        //ldarg.0
	IL_002c:            this->M_x12();                                              //call				void Root::T_x3::T_x16::M_x12()
	IL_0031:                                                                        //ldarg.0
	IL_0032:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x16::M_x8()
	IL_0037:            V_0=Temp_0;                                                 //stloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_1=this->M_x13();                                       //call				Root::T_x79^ Root::T_x3::T_x16::M_x13()
	IL_003e:            V_1=Temp_1;                                                 //stloc.1
	IL_003f:                                                                        //ldnull
	IL_0040:            V_2=safe_cast<array<Reflector::CodeModel::IAssembly^>^>(nullptr);//stloc.2
	IL_0041:                                                                        //ldc.i4				0x6
	IL_0046:            V_11=6;                                                     //stloc				V_11
	IL_004a:            /*goto IL_0002;*/goto IL_004c;                              //br.s				IL_0002
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_18=this->F_x2;                                         //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_0052:            if(Temp_18==nullptr)goto IL_0174;                           //brfalse				IL_0174
	IL_0057:                                                                        //ldc.i4				0x0
	IL_005c:            V_11=0;                                                     //stloc				V_11
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:            goto IL_0065;                                               //br.s				IL_0065
	IL_0064:                                                                        //break
	IL_0065:            goto IL_01b9;                                               //br				IL_01b9
	IL_006501:          try{
	IL_006a:            goto IL_0091;                                               //br.s				IL_0091
	IL_006c:                                                                        //ldloc				V_11
	IL_0070:            switch(V_11){case 0:goto IL_00d8;case 1:goto IL_0169;case 2:goto IL_00fc;case 3:goto IL_011e;case 4:goto IL_00b7;case 5:goto IL_00e5;case 6:goto IL_00c4;};//switch				(IL_00d8,IL_0169,IL_00fc,IL_011e,IL_00b7,IL_00e5,IL_00c4)
	IL_0091:                                                                        //ldloc.0
	IL_0092:                                                                        //ldloc.s				V_5
	IL_0094:            Temp_4=gcnew Root::T_x100(V_5);                             //newobj				void Root::T_x100::.ctor(Reflector::CodeModel::IAssemblyResolver^)
	IL_0099:            V_0->Resolver=safe_cast<Reflector::CodeModel::IAssemblyResolver^>(Temp_4);//callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_5=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x1 F_x1
	IL_00a4:                                                                        //ldloc.2
	IL_00a5:            Temp_6=gcnew Root::T_x23(Temp_5,V_2);                       //newobj				void Root::T_x23::.ctor(System::Object^,array<Reflector::CodeModel::IAssembly^>^)
	IL_00aa:            V_6=Temp_6;                                                 //stloc.s				V_6
	IL_00ac:                                                                        //ldc.i4				0x4
	IL_00b1:            V_11=4;                                                     //stloc				V_11
	IL_00b5:            /*goto IL_006c;*/goto IL_00b7;                              //br.s				IL_006c
	IL_00b7:            goto IL_00da;                                               //br.s				IL_00da
	IL_00b9:                                                                        //ldc.i4				0x6
	IL_00be:            V_11=6;                                                     //stloc				V_11
	IL_00c2:            /*goto IL_006c;*/goto IL_00c4;                              //br.s				IL_006c
	IL_00c4:                                                                        //ldloc.s				V_6
	IL_00c6:            Temp_12=V_6->M_x8();                                        //callvirt				System::Boolean Root::T_x23::M_x8()
	IL_00cb:            if(!Temp_12)goto IL_00fe;                                   //brfalse.s				IL_00fe
	IL_00cd:                                                                        //ldc.i4				0x0
	IL_00d2:            V_11=0;                                                     //stloc				V_11
	IL_00d6:            /*goto IL_006c;*/goto IL_00d8;                              //br.s				IL_006c
	IL_00d8:            /*goto IL_0120;*/goto IL_011E01;                            //br.s				IL_0120
	IL_00da:                                                                        //ldc.i4				0x5
	IL_00df:            V_11=5;                                                     //stloc				V_11
	IL_00e3:            /*goto IL_006c;*/goto IL_00e5;                              //br.s				IL_006c
	IL_00e5:                                                                        //ldloc.s				V_6
	IL_00e7:            Temp_11=V_6->M_x13();                                       //callvirt				System::Boolean Root::T_x23::M_x13()
	IL_00ec:            if(Temp_11)goto IL_00b9;                                    //brtrue.s				IL_00b9
	IL_00ee:                                                                        //ldc.i4				0x2
	IL_00f3:            V_11=2;                                                     //stloc				V_11
	IL_00f7:            /*goto IL_006c;*/goto IL_00fc;                              //br				IL_006c
	IL_00fc:            goto IL_015b;                                               //br.s				IL_015b
	IL_00fe:                                                                        //ldloc.1
	IL_00ff:                                                                        //ldloc.s				V_6
	IL_0101:            Temp_13=V_6->M_x1();                                        //callvirt				System::Int32 Root::T_x23::M_x1()
	IL_0106:            V_1->M_x1(Temp_13);                                         //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_010b:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0110:                                                                        //ldc.i4				0x3
	IL_0115:            V_11=3;                                                     //stloc				V_11
	IL_0119:            /*goto IL_006c;*/goto IL_011e;                              //br				IL_006c
	IL_011e:            goto IL_00da;                                               //br.s				IL_00da
	IL_011E01:          try{
	IL_0120:                                                                        //ldloc.s				V_6
	IL_0122:            Temp_7=V_6->M_x2();                                         //callvirt				System::Object^ Root::T_x23::M_x2()
	IL_0127:            Temp_8=Root::T_x3::T_x4::M_x1(Temp_7);                      //call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_012c:            V_7=Temp_8;                                                 //stloc.s				V_7
	IL_012e:                                                                        //ldloc.s				V_7
	IL_0130:                                                                        //ldarg.0
	IL_0131:            Temp_9=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_0136:            V_7->M_x1(safe_cast<System::Object^>(Temp_9));              //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_013b:                                                                        //ldloc.3
	IL_013c:                                                                        //ldloc.s				V_7
	IL_013e:            Temp_10=V_3->Add(safe_cast<System::Object^>(V_7));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0143:                                                                        //pop
	IL_0144:            goto IL_00fe;                                               //leave.s				IL_00fe
	                    ;}
	                    catch(System::NullReferenceException^ Ex_014402){
	IL_0146:            V_8=Ex_014402;                                              //stloc.s				V_8
	IL_0148:                                                                        //ldloc.3
	IL_0149:                                                                        //ldloc.s				V_8
	IL_014b:            Temp_23=gcnew Root::T_x3::T_x15(safe_cast<System::Exception^>(V_8));//newobj				void Root::T_x3::T_x15::.ctor(System::Exception^)
	IL_0150:            Temp_24=V_3->Add(safe_cast<System::Object^>(Temp_23));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0155:                                                                        //pop
	IL_0156:                                                                        //ldc.i4.0
	IL_0157:            V_4=false;                                                  //stloc.s				V_4
	IL_0159:            goto IL_00fe;                                               //leave.s				IL_00fe
	                    ;}
	IL_015b:                                                                        //ldc.i4				0x1
	IL_0160:            V_11=1;                                                     //stloc				V_11
	IL_0164:            /*goto IL_006c;*/goto IL_0169;                              //br				IL_006c
	IL_0169:            goto IL_01de;                                               //leave.s				IL_01de
	                    ;}
	                    finally{
	IL_016b:                                                                        //ldloc.0
	IL_016c:                                                                        //ldloc.s				V_5
	IL_016e:            V_0->Resolver=V_5;                                          //callvirt				void Reflector::CodeModel::IAssemblyManager::set_Resolver(Reflector::CodeModel::IAssemblyResolver^)
	IL_0173:                                                                        //endfinally
	                    ;}
	IL_0174:                                                                        //ldloc.0
	IL_0175:            Temp_19=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_017a:            Temp_20=safe_cast<System::Collections::ICollection^>(Temp_19)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_017f:                                                                        //conv.ovf.u4
	IL_0180:            Temp_21=gcnew array<Reflector::CodeModel::IAssembly^>(safe_cast<System::UInt32>(Temp_20));//newarr				Reflector::CodeModel::IAssembly
	IL_0185:            V_2=Temp_21;                                                //stloc.2
	IL_0186:                                                                        //ldloc.0
	IL_0187:            Temp_22=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_018c:                                                                        //ldloc.2
	IL_018d:                                                                        //ldc.i4.0
	IL_018e:            safe_cast<System::Collections::ICollection^>(Temp_22)->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ICollection::CopyTo(System::Array^,System::Int32)
	IL_0193:                                                                        //ldc.i4				0x3
	IL_0198:            V_11=3;                                                     //stloc				V_11
	IL_019c:            /*goto IL_0002;*/goto IL_01a1;                              //br				IL_0002
	IL_01a1:            goto IL_0200;                                               //br.s				IL_0200
	IL_01a3:                                                                        //ldloc.3
	IL_01a4:            V_3->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_01a9:                                                                        //ldc.i4				0x5
	IL_01ae:            V_11=5;                                                     //stloc				V_11
	IL_01b2:            /*goto IL_0002;*/goto IL_01b7;                              //br				IL_0002
	IL_01b7:            goto IL_0224;                                               //br.s				IL_0224
	IL_01b9:                                                                        //ldc.i4.1
	IL_01ba:            Temp_2=gcnew array<Reflector::CodeModel::IAssembly^>(1);    //newarr				Reflector::CodeModel::IAssembly
	IL_01bf:            V_10=Temp_2;                                                //stloc.s				V_10
	IL_01c1:                                                                        //ldloc.s				V_10
	IL_01c3:                                                                        //ldc.i4.0
	IL_01c4:                                                                        //ldarg.0
	IL_01c5:            Temp_3=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssembly^ Root::T_x3::T_x1 F_x2
	IL_01ca:            V_10[0]=Temp_3;                                             //stelem.ref
	IL_01cb:                                                                        //ldloc.s				V_10
	IL_01cd:            V_2=V_10;                                                   //stloc.2
	IL_01ce:                                                                        //ldc.i4				0x2
	IL_01d3:            V_11=2;                                                     //stloc				V_11
	IL_01d7:            /*goto IL_0002;*/goto IL_01dc;                              //br				IL_0002
	IL_01dc:            goto IL_0200;                                               //br.s				IL_0200
	IL_01de:                                                                        //ldc.i4				0x4
	IL_01e3:            V_11=4;                                                     //stloc				V_11
	IL_01e7:            /*goto IL_0002;*/goto IL_01ec;                              //br				IL_0002
	IL_01ec:                                                                        //ldloc.s				V_4
	IL_01ee:            if(!V_4)goto IL_0224;                                       //brfalse.s				IL_0224
	IL_01f0:                                                                        //ldc.i4				0x7
	IL_01f5:            V_11=7;                                                     //stloc				V_11
	IL_01f9:            /*goto IL_0002;*/goto IL_01fe;                              //br				IL_0002
	IL_01fe:            goto IL_01a3;                                               //br.s				IL_01a3
	IL_0200:            Temp_14=gcnew System::Collections::ArrayList();             //newobj				void System::Collections::ArrayList::.ctor()
	IL_0205:            V_3=Temp_14;                                                //stloc.3
	IL_0206:                                                                        //ldc.i4.1
	IL_0207:            V_4=true;                                                   //stloc.s				V_4
	IL_0209:                                                                        //ldloc.0
	IL_020a:            Temp_15=V_0->Resolver;                                      //callvirt				Reflector::CodeModel::IAssemblyResolver^ Reflector::CodeModel::IAssemblyManager::get_Resolver()
	IL_020f:            V_5=Temp_15;                                                //stloc.s				V_5
	IL_0211:                                                                        //ldc.i4				0x1
	IL_0216:            V_11=1;                                                     //stloc				V_11
	IL_021a:            /*goto IL_0002;*/goto IL_021f;                              //br				IL_0002
	IL_021f:            /*goto IL_006a;*/goto IL_006501;                            //br				IL_006a
	IL_0224:                                                                        //ldloc.3
	IL_0225:            Temp_16=V_3->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_022a:                                                                        //conv.ovf.u4
	IL_022b:            Temp_17=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_16));//newarr				System::Windows::Forms::TreeNode
	IL_0230:            V_9=Temp_17;                                                //stloc.s				V_9
	IL_0232:                                                                        //ldloc.3
	IL_0233:                                                                        //ldloc.s				V_9
	IL_0235:            V_3->CopyTo(safe_cast<System::Array^>(V_9));                //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^)
	IL_023a:                                                                        //ldarg.0
	IL_023b:                                                                        //ldloc.s				V_9
	IL_023d:            Root::T_x3::T_x16::M_x1(V_9);                               //call				void Root::T_x3::T_x16::M_x1(array<System::Windows::Forms::TreeNode^>^)
	IL_0242:                                                                        //ldloc.1
	IL_0243:                                                                        //ldc.i4.s				100
	IL_0245:            V_1->M_x1(safe_cast<System::Int32>(100));                   //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_024a:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_024f:            return;                                                     //ret

}
inline Root::T_x3::T_x18::T_x18(Reflector::CodeModel::IMethodDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x6^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_1=12;                                                     //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x16();*/                                    //call				void Root::T_x3::T_x16::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x1=A_0;                                             //stfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x3::T_x18 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldc.i4				0xa4
	IL_001d:                                                                        //dup
	IL_001e:            V_0=164;                                                    //stloc.0
	IL_001f:            this->SelectedImageIndex=164;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0024:                                                                        //ldloc.0
	IL_0025:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldstr				L"\x7E29\x442B\x5C2D\x5F2F\x4531\x4733"
	IL_0030:                                                                        //ldloc				V_1
	IL_0034:            Temp_0=a(L"\x7E29\x442B\x5C2D\x5F2F\x4531\x4733",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0044:            Temp_2=gcnew Root::T_x3::T_x6();                            //newobj				void Root::T_x3::T_x6::.ctor()
	IL_0049:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_004e:                                                                        //pop
	IL_004f:            return;                                                     //ret

}
inline void Root::T_x3::T_x18::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	System::Collections::ArrayList^ Temp_2 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ Temp_3 = nullptr;
	Root::T_x22^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Object^ Temp_6 = nullptr;
	Root::T_x3::T_x6^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_10 = nullptr;
	Root::T_x3::T_x15^ Temp_11 = nullptr;
	System::Int32 Temp_12 = 0;
	//local variables.
	Root::T_x79^ V_0 = nullptr;
	System::Collections::ArrayList^ V_1 = nullptr;
	System::Boolean V_2 = false;
	Root::T_x22^ V_3 = nullptr;
	System::NullReferenceException^ V_4 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_0061;case 1:goto IL_00fb;case 2:goto IL_00e5;case 3:goto IL_0071;case 4:goto IL_0082;case 5:goto IL_0097;case 6:goto IL_00d5;};//switch				(IL_0061,IL_00fb,IL_00e5,IL_0071,IL_0082,IL_0097,IL_00d5)
	IL_0027:                                                                        //ldarg.0
	IL_0028:            this->M_x12();                                              //call				void Root::T_x3::T_x16::M_x12()
	IL_002d:                                                                        //ldarg.0
	IL_002e:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x16::M_x8()
	IL_0033:                                                                        //pop
	IL_0034:                                                                        //ldarg.0
	IL_0035:            Temp_1=this->M_x13();                                       //call				Root::T_x79^ Root::T_x3::T_x16::M_x13()
	IL_003a:            V_0=Temp_1;                                                 //stloc.0
	IL_003b:                                                                        //ldloc.0
	IL_003c:                                                                        //ldc.i4.0
	IL_003d:            V_0->M_x1(safe_cast<System::Int32>(0));                     //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_0042:            Temp_2=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_0047:            V_1=Temp_2;                                                 //stloc.1
	IL_0048:                                                                        //ldc.i4.1
	IL_0049:            V_2=true;                                                   //stloc.2
	IL_004a:                                                                        //ldarg.0
	IL_004b:            Temp_3=this->F_x1;                                          //ldfld				Reflector::CodeModel::IMethodDeclaration^ Root::T_x3::T_x18 F_x1
	IL_0050:            Temp_4=gcnew Root::T_x22(Temp_3);                           //newobj				void Root::T_x22::.ctor(Reflector::CodeModel::IMethodDeclaration^)
	IL_0055:            V_3=Temp_4;                                                 //stloc.3
	IL_0056:                                                                        //ldc.i4				0x0
	IL_005b:            V_6=0;                                                      //stloc				V_6
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_0063:            goto IL_0066;                                               //br.s				IL_0066
	IL_0065:                                                                        //break
	IL_0066:                                                                        //ldc.i4				0x3
	IL_006b:            V_6=3;                                                      //stloc				V_6
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:                                                                        //ldloc.2
	IL_0072:            if(!V_2)goto IL_0100;                                       //brfalse				IL_0100
	IL_0077:                                                                        //ldc.i4				0x4
	IL_007c:            V_6=4;                                                      //stloc				V_6
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_0084:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0089:                                                                        //ldc.i4				0x5
	IL_008e:            V_6=5;                                                      //stloc				V_6
	IL_0092:            /*goto IL_0002;*/goto IL_0097;                              //br				IL_0002
	IL_0097:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_009701:          try{
	IL_0099:                                                                        //ldloc.1
	IL_009a:                                                                        //ldloc.3
	IL_009b:            Temp_6=V_3->M_x1();                                         //callvirt				System::Object^ Root::T_x22::M_x1()
	IL_00a0:            Temp_7=Root::T_x3::T_x4::M_x1(Temp_6);                      //call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_00a5:            Temp_8=V_1->Add(safe_cast<System::Object^>(Temp_7));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00aa:                                                                        //pop
	IL_00ab:            goto IL_0084;                                               //leave.s				IL_0084
	                    ;}
	                    catch(System::NullReferenceException^ Ex_00AB02){
	IL_00ad:            V_4=Ex_00AB02;                                              //stloc.s				V_4
	IL_00af:                                                                        //ldc.i4.0
	IL_00b0:            V_2=false;                                                  //stloc.2
	IL_00b1:                                                                        //ldloc.1
	IL_00b2:                                                                        //ldloc.s				V_4
	IL_00b4:            Temp_11=gcnew Root::T_x3::T_x15(safe_cast<System::Exception^>(V_4));//newobj				void Root::T_x3::T_x15::.ctor(System::Exception^)
	IL_00b9:            Temp_12=V_1->Add(safe_cast<System::Object^>(Temp_11));      //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00be:                                                                        //pop
	IL_00bf:            goto IL_0084;                                               //leave.s				IL_0084
	                    ;}
	IL_00c1:                                                                        //ldloc.1
	IL_00c2:            V_1->Sort();                                                //callvirt				void System::Collections::ArrayList::Sort()
	IL_00c7:                                                                        //ldc.i4				0x6
	IL_00cc:            V_6=6;                                                      //stloc				V_6
	IL_00d0:            /*goto IL_0002;*/goto IL_00d5;                              //br				IL_0002
	IL_00d5:            goto IL_0100;                                               //br.s				IL_0100
	IL_00d7:                                                                        //ldc.i4				0x2
	IL_00dc:            V_6=2;                                                      //stloc				V_6
	IL_00e0:            /*goto IL_0002;*/goto IL_00e5;                              //br				IL_0002
	IL_00e5:                                                                        //ldloc.3
	IL_00e6:            Temp_5=V_3->M_x12();                                        //callvirt				System::Boolean Root::T_x22::M_x12()
	IL_00eb:            /*if(Temp_5)goto IL_0099;*/if(Temp_5)goto IL_009701;        //brtrue.s				IL_0099
	IL_00ed:                                                                        //ldc.i4				0x1
	IL_00f2:            V_6=1;                                                      //stloc				V_6
	IL_00f6:            /*goto IL_0002;*/goto IL_00fb;                              //br				IL_0002
	IL_00fb:            goto IL_0063;                                               //br				IL_0063
	IL_0100:                                                                        //ldloc.1
	IL_0101:            Temp_9=V_1->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0106:                                                                        //conv.ovf.u4
	IL_0107:            Temp_10=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_9));//newarr				System::Windows::Forms::TreeNode
	IL_010c:            V_5=Temp_10;                                                //stloc.s				V_5
	IL_010e:                                                                        //ldloc.1
	IL_010f:                                                                        //ldloc.s				V_5
	IL_0111:            V_1->CopyTo(safe_cast<System::Array^>(V_5));                //callvirt				void System::Collections::ArrayList::CopyTo(System::Array^)
	IL_0116:                                                                        //ldarg.0
	IL_0117:                                                                        //ldloc.s				V_5
	IL_0119:            Root::T_x3::T_x16::M_x1(V_5);                               //call				void Root::T_x3::T_x16::M_x1(array<System::Windows::Forms::TreeNode^>^)
	IL_011e:                                                                        //ldloc.0
	IL_011f:                                                                        //ldc.i4.s				100
	IL_0121:            V_0->M_x1(safe_cast<System::Int32>(100));                   //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_0126:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_012b:            return;                                                     //ret

}
inline Root::T_x3::T_x19::T_x19(System::Object^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	Root::T_x3::T_x6^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_1=6;                                                      //stloc				V_1
	IL_0009:                                                                        //ldarg.0
	IL_000a:            /*Root::T_x3::T_x16();*/                                    //call				void Root::T_x3::T_x16::.ctor()
	IL_000f:                                                                        //ldarg.0
	IL_0010:                                                                        //ldarg.1
	IL_0011:            this->F_x1=A_0;                                             //stfld				System::Object^ Root::T_x3::T_x19 F_x1
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldc.i4				0xa4
	IL_001d:                                                                        //dup
	IL_001e:            V_0=164;                                                    //stloc.0
	IL_001f:            this->SelectedImageIndex=164;                               //call				void System::Windows::Forms::TreeNode::set_SelectedImageIndex(System::Int32)
	IL_0024:                                                                        //ldloc.0
	IL_0025:            this->ImageIndex=V_0;                                       //call				void System::Windows::Forms::TreeNode::set_ImageIndex(System::Int32)
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldstr				L"\x7423\x0925\x6127\x4429\x5A2B\x412D\x5B2F\x5731\x1433\x7F35\x5537\x4A39\x533B\x4C3D\x343F\x3141"
	IL_0030:                                                                        //ldloc				V_1
	IL_0034:            Temp_0=a(L"\x7423\x0925\x6127\x4429\x5A2B\x412D\x5B2F\x5731\x1433\x7F35\x5537\x4A39\x533B\x4C3D\x343F\x3141",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0039:            this->Text=Temp_0;                                          //call				void System::Windows::Forms::TreeNode::set_Text(System::String^)
	IL_003e:                                                                        //ldarg.0
	IL_003f:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_0044:            Temp_2=gcnew Root::T_x3::T_x6();                            //newobj				void Root::T_x3::T_x6::.ctor()
	IL_0049:            Temp_3=Temp_1->Add(safe_cast<System::Windows::Forms::TreeNode^>(Temp_2));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_004e:                                                                        //pop
	IL_004f:            return;                                                     //ret

}
inline void Root::T_x3::T_x19::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssemblyManager^ Temp_0 = nullptr;
	Root::T_x79^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Collections::SortedList^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Object^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Root::T_x3::T_x8^ Temp_7 = nullptr;
	System::Int32 Temp_8 = 0;
	System::Object^ Temp_9 = nullptr;
	System::Collections::IEnumerator^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	Root::T_x3::T_x6^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	System::Int32 Temp_15 = 0;
	array<Reflector::CodeModel::IModule^>^ Temp_16 = nullptr;
	Root::T_x121^ Temp_17 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	Root::T_x3::T_x6^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	array<System::Windows::Forms::TreeNode^>^ Temp_22 = nullptr;
	System::Collections::IDictionaryEnumerator^ Temp_23 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ Temp_24 = nullptr;
	Root::T_x121^ Temp_25 = nullptr;
	System::Object^ Temp_26 = nullptr;
	System::Int32 Temp_27 = 0;
	System::Object^ Temp_28 = nullptr;
	System::Object^ Temp_29 = nullptr;
	System::Boolean Temp_30 = false;
	System::Object^ Temp_31 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_32 = nullptr;
	System::Int32 Temp_33 = 0;
	System::Boolean Temp_34 = false;
	System::Collections::ArrayList^ Temp_35 = nullptr;
	//local variables.
	Root::T_x79^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Root::T_x121^ V_2 = nullptr;
	Reflector::CodeModel::IModule^ V_3 = nullptr;
	Reflector::CodeModel::IAssembly^ V_4 = nullptr;
	System::Collections::SortedList^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	Root::T_x3::T_x6^ V_7 = nullptr;
	Reflector::CodeModel::IFieldDeclaration^ V_8 = nullptr;
	Reflector::CodeModel::IMethodDeclaration^ V_9 = nullptr;
	System::Collections::ArrayList^ V_10 = nullptr;
	array<System::Windows::Forms::TreeNode^>^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Collections::DictionaryEntry V_13;
	System::String^ V_14 = nullptr;
	Root::T_x3::T_x8^ V_15 = nullptr;
	System::Collections::ArrayList^ V_16 = nullptr;
	Root::T_x3::T_x6^ V_17 = nullptr;
	array<Reflector::CodeModel::IModule^>^ V_18 = nullptr;
	array<Reflector::CodeModel::IAssembly^>^ V_19 = nullptr;
	System::Collections::IDictionaryEnumerator^ V_20 = nullptr;
	System::Collections::IEnumerator^ V_21 = nullptr;
	System::IDisposable^ V_22 = nullptr;
	System::Int32 V_23 = 0;
	//method body ------- 
	IL_0000:            goto IL_007f;                                               //br.s				IL_007f
	IL_0002:                                                                        //ldloc				V_23
	IL_0006:            switch(V_23){case 0:goto IL_04d5;case 1:goto IL_033d;case 2:goto IL_038c;case 3:goto IL_00f0;case 4:goto IL_01b9;case 5:goto IL_01cc;case 6:goto IL_04a0;case 7:goto IL_00cc;case 8:goto IL_0255;case 9:goto IL_01e8;case 10:goto IL_04ea;case 11:goto IL_0126;case 12:goto IL_03d5;case 13:goto IL_03bb;case 14:goto IL_00b8;case 15:goto IL_0113;case 16:goto IL_0240;case 17:goto IL_0445;case 18:goto IL_03e9;case 19:goto IL_0510;case 20:goto IL_0377;case 21:goto IL_021a;case 22:goto IL_04b5;case 23:goto IL_048d;case 24:goto IL_0470;case 25:goto IL_018d;case 26:goto IL_01fe;case 27:goto IL_0357;case 28:goto IL_0417;};//switch				(IL_04d5,IL_033d,IL_038c,IL_00f0,IL_01b9,IL_01cc,IL_04a0,IL_00cc,IL_0255,IL_01e8,IL_04ea,IL_0126,IL_03d5,IL_03bb,IL_00b8,IL_0113,IL_0240,IL_0445,IL_03e9,IL_0510,IL_0377,IL_021a,IL_04b5,IL_048d,IL_0470,IL_018d,IL_01fe,IL_0357,IL_0417)
	IL_007f:                                                                        //ldarg.0
	IL_0080:            this->M_x12();                                              //call				void Root::T_x3::T_x16::M_x12()
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_0=this->M_x8();                                        //call				Reflector::CodeModel::IAssemblyManager^ Root::T_x3::T_x16::M_x8()
	IL_008b:                                                                        //pop
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_1=this->M_x13();                                       //call				Root::T_x79^ Root::T_x3::T_x16::M_x13()
	IL_0092:            V_0=Temp_1;                                                 //stloc.0
	IL_0093:                                                                        //ldloc.0
	IL_0094:                                                                        //ldc.i4.0
	IL_0095:            V_0->M_x1(safe_cast<System::Int32>(0));                     //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_009a:                                                                        //ldnull
	IL_009b:            V_1=safe_cast<Reflector::CodeModel::IAssembly^>(nullptr);   //stloc.1
	IL_009c:                                                                        //ldnull
	IL_009d:            V_2=safe_cast<Root::T_x121^>(nullptr);                      //stloc.2
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_2=this->F_x1;                                          //ldfld				System::Object^ Root::T_x3::T_x19 F_x1
	IL_00a4:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_00a9:            V_3=dynamic_cast<Reflector::CodeModel::IModule^>(Temp_2);   //stloc.3
	IL_00aa:                                                                        //ldc.i4				0xe
	IL_00af:            V_23=14;                                                    //stloc				V_23
	IL_00b3:            /*goto IL_0002;*/goto IL_00b8;                              //br				IL_0002
	IL_00b8:                                                                        //ldloc.3
	IL_00b9:            if(V_3==nullptr)goto IL_04ba;                               //brfalse				IL_04ba
	IL_00be:                                                                        //ldc.i4				0x7
	IL_00c3:            V_23=7;                                                     //stloc				V_23
	IL_00c7:            /*goto IL_0002;*/goto IL_00cc;                              //br				IL_0002
	IL_00cc:            goto IL_0391;                                               //br				IL_0391
	IL_00d1:                                                                        //ldloc.0
	IL_00d2:                                                                        //ldloc.2
	IL_00d3:            Temp_15=V_2->M_x1();                                        //callvirt				System::Int32 Root::T_x121::M_x1()
	IL_00d8:            V_0->M_x1(Temp_15);                                         //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_00dd:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_00e2:                                                                        //ldc.i4				0x3
	IL_00e7:            V_23=3;                                                     //stloc				V_23
	IL_00eb:            /*goto IL_0002;*/goto IL_00f0;                              //br				IL_0002
	IL_00f0:            goto IL_01be;                                               //br				IL_01be
	IL_00f5:                                                                        //ldloc.s				V_5
	IL_00f7:                                                                        //ldloc.s				V_6
	IL_00f9:            Temp_29=V_5[safe_cast<System::Object^>(V_6)];               //callvirt				System::Object^ System::Collections::SortedList::get_Item(System::Object^)
	IL_00fe:                                                                        //castclass				System::Collections::ArrayList
	IL_0103:            V_10=safe_cast<System::Collections::ArrayList^>(Temp_29);   //stloc.s				V_10
	IL_0105:                                                                        //ldc.i4				0xf
	IL_010a:            V_23=15;                                                    //stloc				V_23
	IL_010e:            /*goto IL_0002;*/goto IL_0113;                              //br				IL_0002
	IL_0113:            goto IL_0475;                                               //br				IL_0475
	IL_0118:                                                                        //ldc.i4				0xb
	IL_011d:            V_23=11;                                                    //stloc				V_23
	IL_0121:            /*goto IL_0002;*/goto IL_0126;                              //br				IL_0002
	IL_0126:            goto IL_01be;                                               //br				IL_01be
	IL_012b:                                                                        //ldloc.s				V_20
	IL_012d:            Temp_5=safe_cast<System::Collections::IEnumerator^>(V_20)->Current;//callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0132:                                                                        //unbox				System::Collections::DictionaryEntry
	IL_0137:                                                                        //ldobj				System::Collections::DictionaryEntry
	IL_013c:            V_13=safe_cast<System::Collections::DictionaryEntry>(Temp_5);//stloc.s				V_13
	IL_013e:                                                                        //ldloca.s				V_13
	IL_0140:            Temp_6=V_13.Key;                                            //call				System::Object^ System::Collections::DictionaryEntry::get_Key()
	IL_0145:                                                                        //castclass				System::String
	IL_014a:            V_14=safe_cast<System::String^>(Temp_6);                    //stloc.s				V_14
	IL_014c:                                                                        //ldloc.s				V_14
	IL_014e:            Temp_7=gcnew Root::T_x3::T_x8(V_14);                        //newobj				void Root::T_x3::T_x8::.ctor(System::String^)
	IL_0153:            V_15=Temp_7;                                                //stloc.s				V_15
	IL_0155:                                                                        //ldloc.s				V_11
	IL_0157:            Temp_8=V_12;                                                //ldloc.s				V_12
	IL_0159:                                                                        //dup
	IL_015a:                                                                        //ldc.i4.1
	IL_015b:                                                                        //add
	IL_015c:            V_12=(Temp_8 + 1);                                          //stloc.s				V_12
	IL_015e:                                                                        //ldloc.s				V_15
	IL_0160:            V_11[Temp_8]=safe_cast<System::Windows::Forms::TreeNode^>(V_15);//stelem.ref
	IL_0161:                                                                        //ldloca.s				V_13
	IL_0163:            Temp_9=V_13.Value;                                          //call				System::Object^ System::Collections::DictionaryEntry::get_Value()
	IL_0168:                                                                        //castclass				System::Collections::ArrayList
	IL_016d:            V_16=safe_cast<System::Collections::ArrayList^>(Temp_9);    //stloc.s				V_16
	IL_016f:                                                                        //ldloc.s				V_16
	IL_0171:            V_16->Sort();                                               //callvirt				void System::Collections::ArrayList::Sort()
	IL_0176:                                                                        //ldloc.s				V_16
	IL_0178:            Temp_10=V_16->GetEnumerator();                              //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_017d:            V_21=Temp_10;                                               //stloc.s				V_21
	IL_017f:                                                                        //ldc.i4				0x19
	IL_0184:            V_23=25;                                                    //stloc				V_23
	IL_0188:            /*goto IL_0002;*/goto IL_018d;                              //br				IL_0002
	IL_018d:            /*goto IL_025a;*/goto IL_025501;                            //br				IL_025a
	IL_0192:                                                                        //ldc.i4.1
	IL_0193:            Temp_24=gcnew array<Reflector::CodeModel::IAssembly^>(1);   //newarr				Reflector::CodeModel::IAssembly
	IL_0198:            V_19=Temp_24;                                               //stloc.s				V_19
	IL_019a:                                                                        //ldloc.s				V_19
	IL_019c:                                                                        //ldc.i4.0
	IL_019d:                                                                        //ldloc.s				V_4
	IL_019f:            V_19[0]=V_4;                                                //stelem.ref
	IL_01a0:                                                                        //ldloc.s				V_19
	IL_01a2:            Temp_25=gcnew Root::T_x121(V_19);                           //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IAssembly^>^)
	IL_01a7:            V_2=Temp_25;                                                //stloc.2
	IL_01a8:                                                                        //ldloc.s				V_4
	IL_01aa:            V_1=V_4;                                                    //stloc.1
	IL_01ab:                                                                        //ldc.i4				0x4
	IL_01b0:            V_23=4;                                                     //stloc				V_23
	IL_01b4:            /*goto IL_0002;*/goto IL_01b9;                              //br				IL_0002
	IL_01b9:            goto IL_03c0;                                               //br				IL_03c0
	IL_01be:                                                                        //ldc.i4				0x5
	IL_01c3:            V_23=5;                                                     //stloc				V_23
	IL_01c7:            /*goto IL_0002;*/goto IL_01cc;                              //br				IL_0002
	IL_01cc:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01ce:                                                                        //break
	IL_01cf:                                                                        //ldloc.2
	IL_01d0:            Temp_13=V_2->M_x13();                                       //callvirt				System::Boolean Root::T_x121::M_x13()
	IL_01d5:            if(Temp_13)goto IL_021f;                                    //brtrue				IL_021f
	IL_01da:                                                                        //ldc.i4				0x9
	IL_01df:            V_23=9;                                                     //stloc				V_23
	IL_01e3:            /*goto IL_0002;*/goto IL_01e8;                              //br				IL_0002
	IL_01e8:            goto IL_0447;                                               //br				IL_0447
	IL_01ed:                                                                        //ldnull
	IL_01ee:            V_10=safe_cast<System::Collections::ArrayList^>(nullptr);   //stloc.s				V_10
	IL_01f0:                                                                        //ldc.i4				0x1a
	IL_01f5:            V_23=26;                                                    //stloc				V_23
	IL_01f9:            /*goto IL_0002;*/goto IL_01fe;                              //br				IL_0002
	IL_01fe:                                                                        //ldloc.s				V_5
	IL_0200:                                                                        //ldloc.s				V_6
	IL_0202:            Temp_34=V_5->Contains(safe_cast<System::Object^>(V_6));     //callvirt				System::Boolean System::Collections::SortedList::Contains(System::Object^)
	IL_0207:            if(!Temp_34)goto IL_04ef;                                   //brfalse				IL_04ef
	IL_020c:                                                                        //ldc.i4				0x15
	IL_0211:            V_23=21;                                                    //stloc				V_23
	IL_0215:            /*goto IL_0002;*/goto IL_021a;                              //br				IL_0002
	IL_021a:            goto IL_00f5;                                               //br				IL_00f5
	IL_021f:                                                                        //ldnull
	IL_0220:            V_6=safe_cast<System::String^>(nullptr);                    //stloc.s				V_6
	IL_0222:                                                                        //ldnull
	IL_0223:            V_7=safe_cast<Root::T_x3::T_x6^>(nullptr);                  //stloc.s				V_7
	IL_0225:                                                                        //ldloc.2
	IL_0226:            Temp_14=V_2->M_x2();                                        //callvirt				System::Object^ Root::T_x121::M_x2()
	IL_022b:                                                                        //isinst				Reflector::CodeModel::IFieldDeclaration
	IL_0230:            V_8=dynamic_cast<Reflector::CodeModel::IFieldDeclaration^>(Temp_14);//stloc.s				V_8
	IL_0232:                                                                        //ldc.i4				0x10
	IL_0237:            V_23=16;                                                    //stloc				V_23
	IL_023b:            /*goto IL_0002;*/goto IL_0240;                              //br				IL_0002
	IL_0240:                                                                        //ldloc.s				V_8
	IL_0242:            if(V_8==nullptr)goto IL_035c;                               //brfalse				IL_035c
	IL_0247:                                                                        //ldc.i4				0x8
	IL_024c:            V_23=8;                                                     //stloc				V_23
	IL_0250:            /*goto IL_0002;*/goto IL_0255;                              //br				IL_0002
	IL_0255:            goto IL_03ee;                                               //br				IL_03ee
	IL_025501:          try{
	IL_025a:                                                                        //ldc.i4				0x0
	IL_025f:            V_23=0;                                                     //stloc				V_23
	IL_0263:            /*goto IL_0267;*/goto IL_0265;                              //br.s				IL_0267
	IL_0265:            goto IL_0284;                                               //br.s				IL_0284
	IL_0267:                                                                        //ldloc				V_23
	IL_026b:            switch(V_23){case 0:goto IL_0265;case 1:goto IL_02ae;case 2:goto IL_02bb;case 3:goto IL_02cf;case 4:goto IL_02dc;};//switch				(IL_0265,IL_02ae,IL_02bb,IL_02cf,IL_02dc)
	IL_0284:            goto IL_02b0;                                               //br.s				IL_02b0
	IL_0286:                                                                        //ldloc.s				V_21
	IL_0288:            Temp_31=V_21->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_028d:                                                                        //castclass				Root::T_x3::T_x6
	IL_0292:            V_17=safe_cast<Root::T_x3::T_x6^>(Temp_31);                 //stloc.s				V_17
	IL_0294:                                                                        //ldloc.s				V_15
	IL_0296:            Temp_32=V_15->Nodes;                                        //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_029b:                                                                        //ldloc.s				V_17
	IL_029d:            Temp_33=Temp_32->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_17));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_02a2:                                                                        //pop
	IL_02a3:                                                                        //ldc.i4				0x1
	IL_02a8:            V_23=1;                                                     //stloc				V_23
	IL_02ac:            /*goto IL_0267;*/goto IL_02ae;                              //br.s				IL_0267
	IL_02ae:            goto IL_02b0;                                               //br.s				IL_02b0
	IL_02b0:                                                                        //ldc.i4				0x2
	IL_02b5:            V_23=2;                                                     //stloc				V_23
	IL_02b9:            /*goto IL_0267;*/goto IL_02bb;                              //br.s				IL_0267
	IL_02bb:                                                                        //ldloc.s				V_21
	IL_02bd:            Temp_30=V_21->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_02c2:            if(Temp_30)goto IL_0286;                                    //brtrue.s				IL_0286
	IL_02c4:                                                                        //ldc.i4				0x3
	IL_02c9:            V_23=3;                                                     //stloc				V_23
	IL_02cd:            /*goto IL_0267;*/goto IL_02cf;                              //br.s				IL_0267
	IL_02cf:            goto IL_02d1;                                               //br.s				IL_02d1
	IL_02d1:                                                                        //ldc.i4				0x4
	IL_02d6:            V_23=4;                                                     //stloc				V_23
	IL_02da:            /*goto IL_0267;*/goto IL_02dc;                              //br.s				IL_0267
	IL_02dc:            goto IL_032f;                                               //leave.s				IL_032f
	                    ;}
	                    finally{
	IL_02de:            goto IL_02f5;                                               //br.s				IL_02f5
	IL_02e0:                                                                        //ldloc				V_23
	IL_02e4:            switch(V_23){case 0:goto IL_032c;case 1:goto IL_0318;case 2:goto IL_0309;};//switch				(IL_032c,IL_0318,IL_0309)
	IL_02f5:                                                                        //ldloc.s				V_21
	IL_02f7:                                                                        //isinst				System::IDisposable
	IL_02fc:            V_22=dynamic_cast<System::IDisposable^>(V_21);              //stloc.s				V_22
	IL_02fe:                                                                        //ldc.i4				0x2
	IL_0303:            V_23=2;                                                     //stloc				V_23
	IL_0307:            /*goto IL_02e0;*/goto IL_0309;                              //br.s				IL_02e0
	IL_0309:                                                                        //ldloc.s				V_22
	IL_030b:            if(V_22==nullptr)goto IL_032e;                              //brfalse.s				IL_032e
	IL_030d:                                                                        //ldc.i4				0x1
	IL_0312:            V_23=1;                                                     //stloc				V_23
	IL_0316:            /*goto IL_02e0;*/goto IL_0318;                              //br.s				IL_02e0
	IL_0318:            goto IL_031a;                                               //br.s				IL_031a
	IL_031a:                                                                        //ldloc.s				V_22
	IL_031c:            /*V_22->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0321:                                                                        //ldc.i4				0x0
	IL_0326:            V_23=0;                                                     //stloc				V_23
	IL_032a:            /*goto IL_02e0;*/goto IL_032c;                              //br.s				IL_02e0
	IL_032c:            goto IL_032e;                                               //br.s				IL_032e
	IL_032e:                                                                        //endfinally
	                    ;}
	IL_032f:                                                                        //ldc.i4				0x1
	IL_0334:            V_23=1;                                                     //stloc				V_23
	IL_0338:            /*goto IL_0002;*/goto IL_033d;                              //br				IL_0002
	IL_033d:                                                                        //ldloc.s				V_20
	IL_033f:            Temp_4=safe_cast<System::Collections::IEnumerator^>(V_20)->MoveNext();//callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0344:            if(Temp_4)goto IL_012b;                                     //brtrue				IL_012b
	IL_0349:                                                                        //ldc.i4				0x1b
	IL_034e:            V_23=27;                                                    //stloc				V_23
	IL_0352:            /*goto IL_0002;*/goto IL_0357;                              //br				IL_0002
	IL_0357:            goto IL_0515;                                               //br				IL_0515
	IL_035c:                                                                        //ldloc.2
	IL_035d:            Temp_28=V_2->M_x2();                                        //callvirt				System::Object^ Root::T_x121::M_x2()
	IL_0362:                                                                        //isinst				Reflector::CodeModel::IMethodDeclaration
	IL_0367:            V_9=dynamic_cast<Reflector::CodeModel::IMethodDeclaration^>(Temp_28);//stloc.s				V_9
	IL_0369:                                                                        //ldc.i4				0x14
	IL_036e:            V_23=20;                                                    //stloc				V_23
	IL_0372:            /*goto IL_0002;*/goto IL_0377;                              //br				IL_0002
	IL_0377:                                                                        //ldloc.s				V_9
	IL_0379:            if(V_9==nullptr)goto IL_0492;                               //brfalse				IL_0492
	IL_037e:                                                                        //ldc.i4				0x2
	IL_0383:            V_23=2;                                                     //stloc				V_23
	IL_0387:            /*goto IL_0002;*/goto IL_038c;                              //br				IL_0002
	IL_038c:            goto IL_041c;                                               //br				IL_041c
	IL_0391:                                                                        //ldc.i4.1
	IL_0392:            Temp_16=gcnew array<Reflector::CodeModel::IModule^>(1);     //newarr				Reflector::CodeModel::IModule
	IL_0397:            V_18=Temp_16;                                               //stloc.s				V_18
	IL_0399:                                                                        //ldloc.s				V_18
	IL_039b:                                                                        //ldc.i4.0
	IL_039c:                                                                        //ldloc.3
	IL_039d:            V_18[0]=V_3;                                                //stelem.ref
	IL_039e:                                                                        //ldloc.s				V_18
	IL_03a0:            Temp_17=gcnew Root::T_x121(V_18);                           //newobj				void Root::T_x121::.ctor(array<Reflector::CodeModel::IModule^>^)
	IL_03a5:            V_2=Temp_17;                                                //stloc.2
	IL_03a6:                                                                        //ldloc.3
	IL_03a7:            Temp_18=V_3->Assembly;                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_03ac:            V_1=Temp_18;                                                //stloc.1
	IL_03ad:                                                                        //ldc.i4				0xd
	IL_03b2:            V_23=13;                                                    //stloc				V_23
	IL_03b6:            /*goto IL_0002;*/goto IL_03bb;                              //br				IL_0002
	IL_03bb:            goto IL_04ba;                                               //br				IL_04ba
	IL_03c0:            Temp_3=gcnew System::Collections::SortedList();             //newobj				void System::Collections::SortedList::.ctor()
	IL_03c5:            V_5=Temp_3;                                                 //stloc.s				V_5
	IL_03c7:                                                                        //ldc.i4				0xc
	IL_03cc:            V_23=12;                                                    //stloc				V_23
	IL_03d0:            /*goto IL_0002;*/goto IL_03d5;                              //br				IL_0002
	IL_03d5:                                                                        //ldloc.2
	IL_03d6:            if(V_2==nullptr)goto IL_0447;                               //brfalse				IL_0447
	IL_03db:                                                                        //ldc.i4				0x12
	IL_03e0:            V_23=18;                                                    //stloc				V_23
	IL_03e4:            /*goto IL_0002;*/goto IL_03e9;                              //br				IL_0002
	IL_03e9:            goto IL_0118;                                               //br				IL_0118
	IL_03ee:                                                                        //ldarg.0
	IL_03ef:                                                                        //ldloc.s				V_8
	IL_03f1:            Temp_19=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_8));//call				System::String^ Root::T_x3::T_x19::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_03f6:            V_6=Temp_19;                                                //stloc.s				V_6
	IL_03f8:                                                                        //ldloc.s				V_8
	IL_03fa:            Temp_20=Root::T_x3::T_x4::M_x1(safe_cast<System::Object^>(V_8));//call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_03ff:            V_7=Temp_20;                                                //stloc.s				V_7
	IL_0401:                                                                        //ldloc.s				V_7
	IL_0403:                                                                        //ldloc.1
	IL_0404:            V_7->M_x1(safe_cast<System::Object^>(V_1));                 //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_0409:                                                                        //ldc.i4				0x1c
	IL_040e:            V_23=28;                                                    //stloc				V_23
	IL_0412:            /*goto IL_0002;*/goto IL_0417;                              //br				IL_0002
	IL_0417:            goto IL_035c;                                               //br				IL_035c
	IL_041c:                                                                        //ldarg.0
	IL_041d:                                                                        //ldloc.s				V_9
	IL_041f:            Temp_11=this->M_x1(safe_cast<Reflector::CodeModel::ICustomAttributeProvider^>(V_9));//call				System::String^ Root::T_x3::T_x19::M_x1(Reflector::CodeModel::ICustomAttributeProvider^)
	IL_0424:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_0426:                                                                        //ldloc.s				V_9
	IL_0428:            Temp_12=Root::T_x3::T_x4::M_x1(safe_cast<System::Object^>(V_9));//call				Root::T_x3::T_x6^ Root::T_x3::T_x4::M_x1(System::Object^)
	IL_042d:            V_7=Temp_12;                                                //stloc.s				V_7
	IL_042f:                                                                        //ldloc.s				V_7
	IL_0431:                                                                        //ldloc.1
	IL_0432:            V_7->M_x1(safe_cast<System::Object^>(V_1));                 //callvirt				void Root::T_x3::T_x6::M_x1(System::Object^)
	IL_0437:                                                                        //ldc.i4				0x11
	IL_043c:            V_23=17;                                                    //stloc				V_23
	IL_0440:            /*goto IL_0002;*/goto IL_0445;                              //br				IL_0002
	IL_0445:            goto IL_0492;                                               //br.s				IL_0492
	IL_0447:                                                                        //ldloc.s				V_5
	IL_0449:            Temp_21=V_5->Count;                                         //callvirt				System::Int32 System::Collections::SortedList::get_Count()
	IL_044e:                                                                        //conv.ovf.u4
	IL_044f:            Temp_22=gcnew array<System::Windows::Forms::TreeNode^>(safe_cast<System::UInt32>(Temp_21));//newarr				System::Windows::Forms::TreeNode
	IL_0454:            V_11=Temp_22;                                               //stloc.s				V_11
	IL_0456:                                                                        //ldc.i4.0
	IL_0457:            V_12=0;                                                     //stloc.s				V_12
	IL_0459:                                                                        //ldloc.s				V_5
	IL_045b:            Temp_23=V_5->GetEnumerator();                               //callvirt				System::Collections::IDictionaryEnumerator^ System::Collections::SortedList::GetEnumerator()
	IL_0460:            V_20=Temp_23;                                               //stloc.s				V_20
	IL_0462:                                                                        //ldc.i4				0x18
	IL_0467:            V_23=24;                                                    //stloc				V_23
	IL_046b:            /*goto IL_0002;*/goto IL_0470;                              //br				IL_0002
	IL_0470:            goto IL_032f;                                               //br				IL_032f
	IL_0475:                                                                        //ldloc.s				V_10
	IL_0477:                                                                        //ldloc.s				V_7
	IL_0479:            Temp_27=V_10->Add(safe_cast<System::Object^>(V_7));         //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_047e:                                                                        //pop
	IL_047f:                                                                        //ldc.i4				0x17
	IL_0484:            V_23=23;                                                    //stloc				V_23
	IL_0488:            /*goto IL_0002;*/goto IL_048d;                              //br				IL_0002
	IL_048d:            goto IL_00d1;                                               //br				IL_00d1
	IL_0492:                                                                        //ldc.i4				0x6
	IL_0497:            V_23=6;                                                     //stloc				V_23
	IL_049b:            /*goto IL_0002;*/goto IL_04a0;                              //br				IL_0002
	IL_04a0:                                                                        //ldloc.s				V_6
	IL_04a2:            if(V_6==nullptr)goto IL_00d1;                               //brfalse				IL_00d1
	IL_04a7:                                                                        //ldc.i4				0x16
	IL_04ac:            V_23=22;                                                    //stloc				V_23
	IL_04b0:            /*goto IL_0002;*/goto IL_04b5;                              //br				IL_0002
	IL_04b5:            goto IL_01ed;                                               //br				IL_01ed
	IL_04ba:                                                                        //ldarg.0
	IL_04bb:            Temp_26=this->F_x1;                                         //ldfld				System::Object^ Root::T_x3::T_x19 F_x1
	IL_04c0:                                                                        //isinst				Reflector::CodeModel::IAssembly
	IL_04c5:            V_4=dynamic_cast<Reflector::CodeModel::IAssembly^>(Temp_26);//stloc.s				V_4
	IL_04c7:                                                                        //ldc.i4				0x0
	IL_04cc:            V_23=0;                                                     //stloc				V_23
	IL_04d0:            /*goto IL_0002;*/goto IL_04d5;                              //br				IL_0002
	IL_04d5:                                                                        //ldloc.s				V_4
	IL_04d7:            if(V_4==nullptr)goto IL_03c0;                               //brfalse				IL_03c0
	IL_04dc:                                                                        //ldc.i4				0xa
	IL_04e1:            V_23=10;                                                    //stloc				V_23
	IL_04e5:            /*goto IL_0002;*/goto IL_04ea;                              //br				IL_0002
	IL_04ea:            goto IL_0192;                                               //br				IL_0192
	IL_04ef:                                                                        //ldc.i4.0
	IL_04f0:            Temp_35=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_04f5:            V_10=Temp_35;                                               //stloc.s				V_10
	IL_04f7:                                                                        //ldloc.s				V_5
	IL_04f9:                                                                        //ldloc.s				V_6
	IL_04fb:                                                                        //ldloc.s				V_10
	IL_04fd:            V_5->Add(safe_cast<System::Object^>(V_6),safe_cast<System::Object^>(V_10));//callvirt				void System::Collections::SortedList::Add(System::Object^,System::Object^)
	IL_0502:                                                                        //ldc.i4				0x13
	IL_0507:            V_23=19;                                                    //stloc				V_23
	IL_050b:            /*goto IL_0002;*/goto IL_0510;                              //br				IL_0002
	IL_0510:            goto IL_0475;                                               //br				IL_0475
	IL_0515:                                                                        //ldarg.0
	IL_0516:                                                                        //ldloc.s				V_11
	IL_0518:            Root::T_x3::T_x16::M_x1(V_11);                              //call				void Root::T_x3::T_x16::M_x1(array<System::Windows::Forms::TreeNode^>^)
	IL_051d:                                                                        //ldloc.0
	IL_051e:                                                                        //ldc.i4.s				100
	IL_0520:            V_0->M_x1(safe_cast<System::Int32>(100));                   //callvirt				void Root::T_x79::M_x1(System::Int32)
	IL_0525:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_052a:            return;                                                     //ret

}
inline System::String^ Root::T_x3::T_x19::M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_3=3;                                                      //stloc				V_3
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0061;case 1:goto IL_0053;case 2:goto IL_00b6;case 3:goto IL_008f;};//switch				(IL_0061,IL_0053,IL_00b6,IL_008f)
	IL_0024:                                                                        //ldarg.0
	IL_0025:                                                                        //ldarg.1
	IL_0026:                                                                        //ldstr				L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A"
	IL_002b:                                                                        //ldloc				V_3
	IL_002f:            Temp_0=a(L"\x7220\x5A22\x5624\x5326\x4C28\x462A\x032C\x7D2E\x4430\x5D32\x4134\x5E36\x5438\x5E3A\x133C\x763E\x2F40\x3742\x2044\x3546\x2648\x3B4A\x1E4C\x2A4E\x2350\x2552\x3C54\x3456\x3C58\x285A",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0034:                                                                        //ldstr				L"\x6520\x4F22\x4924\x6E26\x4428\x5B2A\x422C\x5D2E\x4530\x7232\x4134\x4336\x4B38\x523A\x5F3C\x4A3E\x3540\x2642"
	IL_0039:                                                                        //ldloc				V_3
	IL_003d:            Temp_1=a(L"\x6520\x4F22\x4924\x6E26\x4428\x5B2A\x422C\x5D2E\x4530\x7232\x4134\x4336\x4B38\x523A\x5F3C\x4A3E\x3540\x2642",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0042:            Temp_2=this->M_x1(A_0,Temp_0,Temp_1);                       //call				Reflector::CodeModel::ICustomAttribute^ Root::T_x3::T_x19::M_x1(Reflector::CodeModel::ICustomAttributeProvider^,System::String^,System::String^)
	IL_0047:            V_0=Temp_2;                                                 //stloc.0
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_2=1;                                                      //stloc				V_2
	IL_0051:            /*goto IL_000b;*/goto IL_0053;                              //br.s				IL_000b
	IL_0053:                                                                        //ldloc.0
	IL_0054:            if(V_0==nullptr)goto IL_00b8;                               //brfalse.s				IL_00b8
	IL_0056:                                                                        //ldc.i4				0x0
	IL_005b:            V_2=0;                                                      //stloc				V_2
	IL_005f:            /*goto IL_000b;*/goto IL_0061;                              //br.s				IL_000b
	IL_0061:            goto IL_0081;                                               //br.s				IL_0081
	IL_0063:                                                                        //ldloc.0
	IL_0064:            Temp_3=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0069:                                                                        //ldc.i4.0
	IL_006a:            Temp_4=Temp_3[safe_cast<System::Int32>(0)];                 //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionCollection::get_Item(System::Int32)
	IL_006f:                                                                        //castclass				Reflector::CodeModel::ILiteralExpression
	IL_0074:            V_1=safe_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_4);//stloc.1
	IL_0075:                                                                        //ldloc.1
	IL_0076:            Temp_5=V_1->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_007b:                                                                        //castclass				System::String
	IL_0080:            return safe_cast<System::String^>(Temp_5);                  //ret
	IL_0081:                                                                        //ldc.i4				0x3
	IL_0086:            V_2=3;                                                      //stloc				V_2
	IL_008a:            /*goto IL_000b;*/goto IL_008f;                              //br				IL_000b
	IL_008f:                                                                        //ldloc.0
	IL_0090:            Temp_6=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::ICustomAttribute::get_Arguments()
	IL_0095:            Temp_7=safe_cast<System::Collections::ICollection^>(Temp_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_009a:                                                                        //ldc.i4.0
	IL_009b:            if(Temp_7<=0)goto IL_00b8;                                  //ble.s				IL_00b8
	IL_009d:                                                                        //ldc.i4.4
	IL_009e:                                                                        //dup
	IL_009f:                                                                        //dup
	IL_00a0:                                                                        //ldc.i4.2
	IL_00a1:                                                                        //sub
	IL_00a2:                                                                        //blt				IL_009e
	IL_00a7:                                                                        //pop
	IL_00a8:                                                                        //ldc.i4				0x2
	IL_00ad:            V_2=2;                                                      //stloc				V_2
	IL_00b1:            /*goto IL_000b;*/goto IL_00b6;                              //br				IL_000b
	IL_00b6:            goto IL_0063;                                               //br.s				IL_0063
	IL_00b8:                                                                        //ldnull
	IL_00b9:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::ICustomAttribute^ Root::T_x3::T_x19::M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICustomAttributeCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ICustomAttribute^ V_0 = nullptr;
	Reflector::CodeModel::IType^ V_1 = nullptr;
	Reflector::CodeModel::ICustomAttribute^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0->Attributes;                                     //callvirt				Reflector::CodeModel::ICustomAttributeCollection^ Reflector::CodeModel::ICustomAttributeProvider::get_Attributes()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_3=Temp_1;                                                 //stloc.3
	IL_000c:            /*goto IL_0010;*/goto IL_000F01;                            //br.s				IL_0010
	IL_000e:                                                                        //ldnull
	IL_000f:            return nullptr;                                             //ret
	IL_000F01:          try{
	IL_0010:                                                                        //ldc.i4				0x2
	IL_0015:            V_5=2;                                                      //stloc				V_5
	IL_0019:            /*goto IL_001d;*/goto IL_001b;                              //br.s				IL_001d
	IL_001b:            goto IL_0042;                                               //br.s				IL_0042
	IL_001d:                                                                        //ldloc				V_5
	IL_0021:            switch(V_5){case 0:goto IL_00af;case 1:goto IL_009d;case 2:goto IL_001b;case 3:goto IL_0062;case 4:goto IL_00bf;case 5:goto IL_0087;case 6:goto IL_004f;};//switch				(IL_00af,IL_009d,IL_001b,IL_0062,IL_00bf,IL_0087,IL_004f)
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldc.i4				0x6
	IL_0049:            V_5=6;                                                      //stloc				V_5
	IL_004d:            /*goto IL_001d;*/goto IL_004f;                              //br.s				IL_001d
	IL_004f:                                                                        //ldloc.3
	IL_0050:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0055:            if(Temp_3)goto IL_0064;                                     //brtrue.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x3
	IL_005c:            V_5=3;                                                      //stloc				V_5
	IL_0060:            /*goto IL_001d;*/goto IL_0062;                              //br.s				IL_001d
	IL_0062:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0064:                                                                        //ldloc.3
	IL_0065:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006a:                                                                        //castclass				Reflector::CodeModel::ICustomAttribute
	IL_006f:            V_0=safe_cast<Reflector::CodeModel::ICustomAttribute^>(Temp_4);//stloc.0
	IL_0070:                                                                        //ldloc.0
	IL_0071:            Temp_5=V_0->Constructor;                                    //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::ICustomAttribute::get_Constructor()
	IL_0076:            Temp_6=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_5)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_007b:            V_1=Temp_6;                                                 //stloc.1
	IL_007c:                                                                        //ldc.i4				0x5
	IL_0081:            V_5=5;                                                      //stloc				V_5
	IL_0085:            /*goto IL_001d;*/goto IL_0087;                              //br.s				IL_001d
	IL_0087:                                                                        //ldarg.0
	IL_0088:                                                                        //ldloc.1
	IL_0089:                                                                        //ldarg.2
	IL_008a:                                                                        //ldarg.3
	IL_008b:            Temp_2=this->M_x1(V_1,A_1,A_2);                             //call				System::Boolean Root::T_x3::T_x19::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0090:            if(!Temp_2)goto IL_0044;                                    //brfalse.s				IL_0044
	IL_0092:                                                                        //ldc.i4				0x1
	IL_0097:            V_5=1;                                                      //stloc				V_5
	IL_009b:            /*goto IL_001d;*/goto IL_009d;                              //br.s				IL_001d
	IL_009d:            goto IL_009f;                                               //br.s				IL_009f
	IL_009f:                                                                        //ldloc.0
	IL_00a0:            V_2=V_0;                                                    //stloc.2
	IL_00a1:                                                                        //ldc.i4				0x0
	IL_00a6:            V_5=0;                                                      //stloc				V_5
	IL_00aa:            /*goto IL_001d;*/goto IL_00af;                              //br				IL_001d
	IL_00af:            goto IL_0114;                                               //leave.s				IL_0114
	IL_00b1:                                                                        //ldc.i4				0x4
	IL_00b6:            V_5=4;                                                      //stloc				V_5
	IL_00ba:            /*goto IL_001d;*/goto IL_00bf;                              //br				IL_001d
	IL_00bf:            goto IL_000e;                                               //leave				IL_000e
	                    ;}
	                    finally{
	IL_00c4:            goto IL_00db;                                               //br.s				IL_00db
	IL_00c6:                                                                        //ldloc				V_6
	IL_00ca:            switch(V_6){case 0:goto IL_00fd;case 1:goto IL_0111;case 2:goto IL_00ee;};//switch				(IL_00fd,IL_0111,IL_00ee)
	IL_00db:                                                                        //ldloc.3
	IL_00dc:                                                                        //isinst				System::IDisposable
	IL_00e1:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00e3:                                                                        //ldc.i4				0x2
	IL_00e8:            V_6=2;                                                      //stloc				V_6
	IL_00ec:            /*goto IL_00c6;*/goto IL_00ee;                              //br.s				IL_00c6
	IL_00ee:                                                                        //ldloc.s				V_4
	IL_00f0:            if(V_4==nullptr)goto IL_0113;                               //brfalse.s				IL_0113
	IL_00f2:                                                                        //ldc.i4				0x0
	IL_00f7:            V_6=0;                                                      //stloc				V_6
	IL_00fb:            /*goto IL_00c6;*/goto IL_00fd;                              //br.s				IL_00c6
	IL_00fd:            goto IL_00ff;                                               //br.s				IL_00ff
	IL_00ff:                                                                        //ldloc.s				V_4
	IL_0101:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0106:                                                                        //ldc.i4				0x1
	IL_010b:            V_6=1;                                                      //stloc				V_6
	IL_010f:            /*goto IL_00c6;*/goto IL_0111;                              //br.s				IL_00c6
	IL_0111:            goto IL_0113;                                               //br.s				IL_0113
	IL_0113:                                                                        //endfinally
	                    ;}
	IL_0114:            goto IL_0117;                                               //br.s				IL_0117
	IL_0116:                                                                        //break
	IL_0117:                                                                        //ldloc.2
	IL_0118:            return V_2;                                                 //ret

}
inline System::Boolean Root::T_x3::T_x19::M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003e;case 1:goto IL_005a;case 2:goto IL_002d;case 3:goto IL_0073;};//switch				(IL_003e,IL_005a,IL_002d,IL_0073)
	IL_001b:                                                                        //ldarg.1
	IL_001c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0021:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0022:                                                                        //ldc.i4				0x2
	IL_0027:            V_1=2;                                                      //stloc				V_1
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:            goto IL_0030;                                               //br.s				IL_0030
	IL_002f:                                                                        //break
	IL_0030:                                                                        //ldloc.0
	IL_0031:            if(V_0==nullptr)goto IL_0075;                               //brfalse.s				IL_0075
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_1=0;                                                      //stloc				V_1
	IL_003c:            /*goto IL_0002;*/goto IL_003e;                              //br.s				IL_0002
	IL_003e:            goto IL_004f;                                               //br.s				IL_004f
	IL_0040:                                                                        //ldc.i4.0
	IL_0041:            return false;                                               //ret
	IL_0042:                                                                        //ldloc.0
	IL_0043:            Temp_2=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0048:                                                                        //ldarg.3
	IL_0049:            Temp_3=(Temp_2 == A_2);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_004e:            return Temp_3;                                              //ret
	IL_004f:                                                                        //ldc.i4				0x1
	IL_0054:            V_1=1;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:                                                                        //ldloc.0
	IL_005b:            Temp_0=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0060:                                                                        //ldarg.2
	IL_0061:            Temp_1=(Temp_0 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0066:            if(!Temp_1)goto IL_0040;                                    //brfalse.s				IL_0040
	IL_0068:                                                                        //ldc.i4				0x3
	IL_006d:            V_1=3;                                                      //stloc				V_1
	IL_0071:            /*goto IL_0002;*/goto IL_0073;                              //br.s				IL_0002
	IL_0073:            goto IL_0042;                                               //br.s				IL_0042
	IL_0075:                                                                        //ldc.i4.0
	IL_0076:            return false;                                               //ret

}
