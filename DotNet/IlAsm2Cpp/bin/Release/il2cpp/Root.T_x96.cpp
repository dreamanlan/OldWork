#include "global_xref.h"

inline Root::T_x96::T_x96(System::IServiceProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x96::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::IServiceProvider^ Root::T_x96 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_0=gcnew Root::T_x96::T_x1();                           //newobj				void Root::T_x96::T_x1::.ctor()
	IL_0013:            this->F_x12=Temp_0;                                         //stfld				Root::T_x96::T_x1^ Root::T_x96 F_x12
	IL_0018:            return;                                                     //ret

}
inline void Root::T_x96::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x94^ Temp_0 = nullptr;
	System::Windows::Forms::DialogResult Temp_1 = (System::Windows::Forms::DialogResult)0;
	Root::T_x94^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0038;case 1:goto IL_0051;case 2:goto IL_000b;};//switch				(IL_0038,IL_0051,IL_000b)
	IL_0022:            goto IL_0025;                                               //br.s				IL_0025
	IL_0024:                                                                        //break
	IL_0025:                                                                        //ldarg.0
	IL_0026:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x94^ Root::T_x96 F_x2
	IL_002b:            if(Temp_2==nullptr)goto IL_0053;                            //brfalse.s				IL_0053
	IL_002d:                                                                        //ldc.i4				0x0
	IL_0032:            V_0=0;                                                      //stloc				V_0
	IL_0036:            /*goto IL_000d;*/goto IL_0038;                              //br.s				IL_000d
	IL_0038:            goto IL_003a;                                               //br.s				IL_003a
	IL_003a:                                                                        //ldarg.0
	IL_003b:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x94^ Root::T_x96 F_x2
	IL_0040:            Temp_1=Temp_0->ShowDialog();                                //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0045:                                                                        //pop
	IL_0046:                                                                        //ldc.i4				0x1
	IL_004b:            V_0=1;                                                      //stloc				V_0
	IL_004f:            /*goto IL_000d;*/goto IL_0051;                              //br.s				IL_000d
	IL_0051:            goto IL_0053;                                               //br.s				IL_0053
	IL_0053:                                                                        //ldarg.0
	IL_0054:                                                                        //ldnull
	IL_0055:            this->F_x2=safe_cast<Root::T_x94^>(nullptr);                //stfld				Root::T_x94^ Root::T_x96 F_x2
	IL_005a:            return;                                                     //ret

}
inline void Root::T_x96::M_x1(array<System::String^>^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x90^ Temp_1 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	array<System::String^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_003a;case 1:goto IL_004b;case 2:goto IL_002d;case 3:goto IL_0068;};//switch				(IL_003a,IL_004b,IL_002d,IL_0068)
	IL_001b:                                                                        //ldarg.1
	IL_001c:            V_1=A_0;                                                    //stloc.1
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:            V_2=0;                                                      //stloc.2
	IL_001f:            goto IL_0022;                                               //br.s				IL_0022
	IL_0021:                                                                        //break
	IL_0022:                                                                        //ldc.i4				0x2
	IL_0027:            V_3=2;                                                      //stloc				V_3
	IL_002b:            /*goto IL_0002;*/goto IL_002d;                              //br.s				IL_0002
	IL_002d:            goto IL_002f;                                               //br.s				IL_002f
	IL_002f:                                                                        //ldc.i4				0x0
	IL_0034:            V_3=0;                                                      //stloc				V_3
	IL_0038:            /*goto IL_0002;*/goto IL_003a;                              //br.s				IL_0002
	IL_003a:                                                                        //ldloc.2
	IL_003b:                                                                        //ldloc.1
	IL_003c:            Temp_0=V_1->Length;                                         //ldlen
	IL_003d:                                                                        //conv.i4
	IL_003e:            if(V_2<Temp_0)goto IL_004d;                                 //blt.s				IL_004d
	IL_0040:                                                                        //ldc.i4				0x1
	IL_0045:            V_3=1;                                                      //stloc				V_3
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:            goto IL_006a;                                               //br.s				IL_006a
	IL_004d:                                                                        //ldloc.1
	IL_004e:                                                                        //ldloc.2
	IL_004f:                                                                        //ldelem.ref
	IL_0050:            V_0=V_1[V_2];                                               //stloc.0
	IL_0051:                                                                        //ldarg.0
	IL_0052:                                                                        //ldloc.0
	IL_0053:            Temp_1=this->M_x1(V_0);                                     //call				Root::T_x90^ Root::T_x96::M_x1(System::String^)
	IL_0058:                                                                        //pop
	IL_0059:                                                                        //ldloc.2
	IL_005a:                                                                        //ldc.i4.1
	IL_005b:                                                                        //add
	IL_005c:            V_2=(V_2 + 1);                                              //stloc.2
	IL_005d:                                                                        //ldc.i4				0x3
	IL_0062:            V_3=3;                                                      //stloc				V_3
	IL_0066:            /*goto IL_0002;*/goto IL_0068;                              //br.s				IL_0002
	IL_0068:            goto IL_002f;                                               //br.s				IL_002f
	IL_006a:                                                                        //ldarg.0
	IL_006b:            this->M_x1();                                               //call				void Root::T_x96::M_x1()
	IL_0070:            return;                                                     //ret

}
inline Root::T_x90^ Root::T_x96::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Reflection::Assembly^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Globalization::CultureInfo^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	array<System::Object^>^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::InvalidOperationException^ Temp_10 = nullptr;
	Root::T_x91^ Temp_11 = nullptr;
	System::IServiceProvider^ Temp_12 = nullptr;
	Root::T_x92^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::String^ Temp_15 = nullptr;
	System::InvalidOperationException^ Temp_16 = nullptr;
	Root::T_x96::T_x1^ Temp_17 = nullptr;
	System::Reflection::AssemblyName^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	Root::T_x56^ Temp_20 = nullptr;
	System::Collections::IEnumerator^ Temp_21 = nullptr;
	//local variables.
	System::Reflection::Assembly^ V_0 = nullptr;
	System::IO::FileNotFoundException^ V_1 = nullptr;
	System::IO::FileLoadException^ V_2 = nullptr;
	System::Reflection::ReflectionTypeLoadException^ V_3 = nullptr;
	System::BadImageFormatException^ V_4 = nullptr;
	System::TypeLoadException^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	Root::T_x91^ V_7 = nullptr;
	System::InvalidOperationException^ V_8 = nullptr;
	Root::T_x91^ V_9 = nullptr;
	System::InvalidOperationException^ V_10 = nullptr;
	System::Reflection::ReflectionTypeLoadException^ V_11 = nullptr;
	System::Reflection::TargetInvocationException^ V_12 = nullptr;
	System::ArrayTypeMismatchException^ V_13 = nullptr;
	System::InvalidOperationException^ V_14 = nullptr;
	System::TypeLoadException^ V_15 = nullptr;
	Root::T_x90^ V_16 = nullptr;
	System::Collections::IEnumerator^ V_17 = nullptr;
	array<System::Object^>^ V_18 = nullptr;
	System::IDisposable^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_21=19;                                                    //stloc				V_21
	IL_0009:            goto IL_0030;                                               //br.s				IL_0030
	IL_000b:                                                                        //ldloc				V_20
	IL_000f:            switch(V_20){case 0:goto IL_003d;case 1:goto IL_008a;case 2:goto IL_004a;case 3:goto IL_037f;case 4:goto IL_034a;case 5:goto IL_0369;case 6:goto IL_005b;};//switch				(IL_003d,IL_008a,IL_004a,IL_037f,IL_034a,IL_0369,IL_005b)
	IL_0030:                                                                        //ldnull
	IL_0031:            V_0=safe_cast<System::Reflection::Assembly^>(nullptr);      //stloc.0
	IL_0032:                                                                        //ldc.i4				0x0
	IL_0037:            V_20=0;                                                     //stloc				V_20
	IL_003b:            /*goto IL_000b;*/goto IL_003d;                              //br.s				IL_000b
	IL_003d:            /*goto IL_008c;*/goto IL_008A01;                            //br.s				IL_008c
	IL_003f:                                                                        //ldc.i4				0x2
	IL_0044:            V_20=2;                                                     //stloc				V_20
	IL_0048:            /*goto IL_000b;*/goto IL_004a;                              //br.s				IL_000b
	IL_004a:                                                                        //ldloc.0
	IL_004b:            if(V_0==nullptr)goto IL_0063;                               //brfalse				IL_0063
	IL_0050:                                                                        //ldc.i4				0x6
	IL_0055:            V_20=6;                                                     //stloc				V_20
	IL_0059:            /*goto IL_000b;*/goto IL_005b;                              //br.s				IL_000b
	IL_005b:            goto IL_036e;                                               //br				IL_036e
	IL_0060:                                                                        //ldloc.s				V_9
	IL_0062:            return safe_cast<Root::T_x90^>(V_9);                        //ret
	IL_0063:                                                                        //ldnull
	IL_0064:            return nullptr;                                             //ret
	IL_0065:                                                                        //ldloc.0
	IL_0066:            Temp_18=V_0->GetName();                                     //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_006b:            Temp_19=Temp_18->Name;                                      //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_0070:            V_6=Temp_19;                                                //stloc.s				V_6
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_20=this->M_x2();                                       //call				Root::T_x56^ Root::T_x96::M_x2()
	IL_0078:            Temp_21=safe_cast<System::Collections::IEnumerable^>(Temp_20)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_007d:            V_17=Temp_21;                                               //stloc.s				V_17
	IL_007f:                                                                        //ldc.i4				0x1
	IL_0084:            V_20=1;                                                     //stloc				V_20
	IL_0088:            /*goto IL_000b;*/goto IL_008a;                              //br.s				IL_000b
	IL_008a:            /*goto IL_00e7;*/goto IL_00E202;                            //br.s				IL_00e7
	IL_008A01:          try{
	IL_008c:                                                                        //ldarg.1
	IL_008d:            Temp_0=System::Environment::ExpandEnvironmentVariables(A_0);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0092:            Temp_1=System::Reflection::Assembly::LoadFrom(Temp_0);      //call				System::Reflection::Assembly^ System::Reflection::Assembly::LoadFrom(System::String^)
	IL_0097:            V_0=Temp_1;                                                 //stloc.0
	IL_0098:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	                    catch(System::IO::FileNotFoundException^ Ex_009802){
	IL_009d:            V_1=Ex_009802;                                              //stloc.1
	IL_009e:                                                                        //ldarg.0
	IL_009f:                                                                        //ldarg.1
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            this->M_x1(A_0,safe_cast<System::Exception^>(V_1));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_00a6:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	                    catch(System::IO::FileLoadException^ Ex_00A602){
	IL_00ab:            V_2=Ex_00A602;                                              //stloc.2
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:                                                                        //ldarg.1
	IL_00ae:                                                                        //ldloc.2
	IL_00af:            this->M_x1(A_0,safe_cast<System::Exception^>(V_2));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_00b4:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	                    catch(System::Reflection::ReflectionTypeLoadException^ Ex_00B402){
	IL_00b9:            V_3=Ex_00B402;                                              //stloc.3
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:                                                                        //ldloc.3
	IL_00bd:            this->M_x1(A_0,safe_cast<System::Exception^>(V_3));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_00c2:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	                    catch(System::BadImageFormatException^ Ex_00C202){
	IL_00c7:            V_4=Ex_00C202;                                              //stloc.s				V_4
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:                                                                        //ldarg.1
	IL_00cb:                                                                        //ldloc.s				V_4
	IL_00cd:            this->M_x1(A_0,safe_cast<System::Exception^>(V_4));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_00d2:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	                    catch(System::TypeLoadException^ Ex_00D202){
	IL_00d7:            V_5=Ex_00D202;                                              //stloc.s				V_5
	IL_00d9:                                                                        //ldarg.0
	IL_00da:                                                                        //ldarg.1
	IL_00db:                                                                        //ldloc.s				V_5
	IL_00dd:            this->M_x1(A_0,safe_cast<System::Exception^>(V_5));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_00e2:            goto IL_033c;                                               //leave				IL_033c
	                    ;}
	IL_00E202:          try{
	IL_00e7:                                                                        //ldc.i4				0x2
	IL_00ec:            V_20=2;                                                     //stloc				V_20
	IL_00f0:            /*goto IL_00f4;*/goto IL_00f2;                              //br.s				IL_00f4
	IL_00f2:            goto IL_0119;                                               //br.s				IL_0119
	IL_00f4:                                                                        //ldloc				V_20
	IL_00f8:            switch(V_20){case 0:goto IL_01b6;case 1:goto IL_0185;case 2:goto IL_00f2;case 3:goto IL_01dd;case 4:goto IL_01a3;case 5:goto IL_0164;case 6:goto IL_01cd;};//switch				(IL_01b6,IL_0185,IL_00f2,IL_01dd,IL_01a3,IL_0164,IL_01cd)
	IL_0119:            goto IL_01a8;                                               //br				IL_01a8
	IL_011e:            Temp_6=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0123:                                                                        //ldstr				L"\x7030\x5D32\x1534\x5636\x5D38\x5F3A\x103C\x563E\x2F40\x6342\x3244\x2E46\x3D48\x234A\x6D4C\x3B4E\x3950\x3652\x7554\x3956\x3858\x365A\x385C\x7F5E\x4660\x1862\x5564\x1A66\x4E68\x4B6A\x046C\x1C6E\x5170\x1272\x1974\x0576\x1C78\x1A7A\x197C\x067E\xA180\xEF82\xEA84\xE686\xED88\xEE8A\xE98C\xA18E"
	IL_0128:                                                                        //ldloc				V_21
	IL_012c:            Temp_7=a(L"\x7030\x5D32\x1534\x5636\x5D38\x5F3A\x103C\x563E\x2F40\x6342\x3244\x2E46\x3D48\x234A\x6D4C\x3B4E\x3950\x3652\x7554\x3956\x3858\x365A\x385C\x7F5E\x4660\x1862\x5564\x1A66\x4E68\x4B6A\x046C\x1C6E\x5170\x1272\x1974\x0576\x1C78\x1A7A\x197C\x067E\xA180\xEF82\xEA84\xE686\xED88\xEE8A\xE98C\xA18E",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0131:                                                                        //ldc.i4.1
	IL_0132:            Temp_8=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0137:            V_18=Temp_8;                                                //stloc.s				V_18
	IL_0139:                                                                        //ldloc.s				V_18
	IL_013b:                                                                        //ldc.i4.0
	IL_013c:                                                                        //ldloc.s				V_6
	IL_013e:            V_18[0]=safe_cast<System::Object^>(V_6);                    //stelem.ref
	IL_013f:                                                                        //ldloc.s				V_18
	IL_0141:            Temp_9=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_6),Temp_7,V_18);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0146:            Temp_10=gcnew System::InvalidOperationException(Temp_9);    //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_014b:            V_8=Temp_10;                                                //stloc.s				V_8
	IL_014d:                                                                        //ldarg.0
	IL_014e:                                                                        //ldarg.1
	IL_014f:                                                                        //ldloc.s				V_8
	IL_0151:            this->M_x1(A_0,safe_cast<System::Exception^>(V_8));         //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_0156:                                                                        //ldnull
	IL_0157:            V_16=safe_cast<Root::T_x90^>(nullptr);                      //stloc.s				V_16
	IL_0159:                                                                        //ldc.i4				0x5
	IL_015e:            V_20=5;                                                     //stloc				V_20
	IL_0162:            /*goto IL_00f4;*/goto IL_0164;                              //br.s				IL_00f4
	IL_0164:            goto IL_0384;                                               //leave				IL_0384
	IL_0169:                                                                        //ldloc.s				V_17
	IL_016b:            Temp_3=V_17->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0170:                                                                        //castclass				Root::T_x91
	IL_0175:            V_7=safe_cast<Root::T_x91^>(Temp_3);                        //stloc.s				V_7
	IL_0177:                                                                        //ldc.i4				0x1
	IL_017c:            V_20=1;                                                     //stloc				V_20
	IL_0180:            /*goto IL_00f4;*/goto IL_0185;                              //br				IL_00f4
	IL_0185:                                                                        //ldloc.s				V_6
	IL_0187:                                                                        //ldloc.s				V_7
	IL_0189:            Temp_4=V_7->M_x8();                                         //callvirt				System::String^ Root::T_x91::M_x8()
	IL_018e:            Temp_5=(V_6 == Temp_4);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0193:            if(!Temp_5)goto IL_01a8;                                    //brfalse.s				IL_01a8
	IL_0195:                                                                        //ldc.i4				0x4
	IL_019a:            V_20=4;                                                     //stloc				V_20
	IL_019e:            /*goto IL_00f4;*/goto IL_01a3;                              //br				IL_00f4
	IL_01a3:            goto IL_011e;                                               //br				IL_011e
	IL_01a8:                                                                        //ldc.i4				0x0
	IL_01ad:            V_20=0;                                                     //stloc				V_20
	IL_01b1:            /*goto IL_00f4;*/goto IL_01b6;                              //br				IL_00f4
	IL_01b6:                                                                        //ldloc.s				V_17
	IL_01b8:            Temp_2=V_17->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01bd:            if(Temp_2)goto IL_0169;                                     //brtrue.s				IL_0169
	IL_01bf:                                                                        //ldc.i4				0x6
	IL_01c4:            V_20=6;                                                     //stloc				V_20
	IL_01c8:            /*goto IL_00f4;*/goto IL_01cd;                              //br				IL_00f4
	IL_01cd:            goto IL_01cf;                                               //br.s				IL_01cf
	IL_01cf:                                                                        //ldc.i4				0x3
	IL_01d4:            V_20=3;                                                     //stloc				V_20
	IL_01d8:            /*goto IL_00f4;*/goto IL_01dd;                              //br				IL_00f4
	IL_01dd:            goto IL_003f;                                               //leave				IL_003f
	                    ;}
	                    finally{
	IL_01e2:            goto IL_01f9;                                               //br.s				IL_01f9
	IL_01e4:                                                                        //ldloc				V_20
	IL_01e8:            switch(V_20){case 0:goto IL_0230;case 1:goto IL_020d;case 2:goto IL_021c;};//switch				(IL_0230,IL_020d,IL_021c)
	IL_01f9:                                                                        //ldloc.s				V_17
	IL_01fb:                                                                        //isinst				System::IDisposable
	IL_0200:            V_19=dynamic_cast<System::IDisposable^>(V_17);              //stloc.s				V_19
	IL_0202:                                                                        //ldc.i4				0x1
	IL_0207:            V_20=1;                                                     //stloc				V_20
	IL_020b:            /*goto IL_01e4;*/goto IL_020d;                              //br.s				IL_01e4
	IL_020d:                                                                        //ldloc.s				V_19
	IL_020f:            if(V_19==nullptr)goto IL_0232;                              //brfalse.s				IL_0232
	IL_0211:                                                                        //ldc.i4				0x2
	IL_0216:            V_20=2;                                                     //stloc				V_20
	IL_021a:            /*goto IL_01e4;*/goto IL_021c;                              //br.s				IL_01e4
	IL_021c:            goto IL_021e;                                               //br.s				IL_021e
	IL_021e:                                                                        //ldloc.s				V_19
	IL_0220:            /*V_19->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0225:                                                                        //ldc.i4				0x0
	IL_022a:            V_20=0;                                                     //stloc				V_20
	IL_022e:            /*goto IL_01e4;*/goto IL_0230;                              //br.s				IL_01e4
	IL_0230:            goto IL_0232;                                               //br.s				IL_0232
	IL_0232:                                                                        //endfinally
	                    ;}
	IL_023202:          try{
	IL_0233:            goto IL_0252;                                               //br.s				IL_0252
	IL_0235:                                                                        //ldloc				V_20
	IL_0239:            switch(V_20){case 0:goto IL_0273;case 1:goto IL_028c;case 2:goto IL_02ba;case 3:goto IL_02d7;case 4:goto IL_02e7;};//switch				(IL_0273,IL_028c,IL_02ba,IL_02d7,IL_02e7)
	IL_0252:                                                                        //ldarg.1
	IL_0253:                                                                        //ldloc.0
	IL_0254:            Temp_11=gcnew Root::T_x91(A_0,V_0);                         //newobj				void Root::T_x91::.ctor(System::String^,System::Reflection::Assembly^)
	IL_0259:            V_9=Temp_11;                                                //stloc.s				V_9
	IL_025b:                                                                        //ldloc.s				V_9
	IL_025d:                                                                        //ldarg.0
	IL_025e:            Temp_12=this->F_x1;                                         //ldfld				System::IServiceProvider^ Root::T_x96 F_x1
	IL_0263:            V_9->M_x1(Temp_12);                                         //callvirt				void Root::T_x91::M_x1(System::IServiceProvider^)
	IL_0268:                                                                        //ldc.i4				0x0
	IL_026d:            V_20=0;                                                     //stloc				V_20
	IL_0271:            /*goto IL_0235;*/goto IL_0273;                              //br.s				IL_0235
	IL_0273:                                                                        //ldloc.s				V_9
	IL_0275:            Temp_13=V_9->M_x1();                                        //callvirt				Root::T_x92^ Root::T_x91::M_x1()
	IL_027a:            Temp_14=safe_cast<System::Collections::ICollection^>(Temp_13)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_027f:            if(Temp_14==0)goto IL_028e;                                 //brfalse.s				IL_028e
	IL_0281:                                                                        //ldc.i4				0x1
	IL_0286:            V_20=1;                                                     //stloc				V_20
	IL_028a:            /*goto IL_0235;*/goto IL_028c;                              //br.s				IL_0235
	IL_028c:            goto IL_02bc;                                               //br.s				IL_02bc
	IL_028e:                                                                        //ldstr				L"\x7030\x5732\x5134\x1A36\x5038\x553A\x1D3C\x5C3E\x2E40\x2D42\x3144\x2646\x2048\x254A\x3E4C\x6F4E\x3F50\x3C52\x7554\x2756\x3858\x385A\x365C\x3E5E\x0660\x0662\x1664\x4966"
	IL_0293:                                                                        //ldloc				V_21
	IL_0297:            Temp_15=a(L"\x7030\x5732\x5134\x1A36\x5038\x553A\x1D3C\x5C3E\x2E40\x2D42\x3144\x2646\x2048\x254A\x3E4C\x6F4E\x3F50\x3C52\x7554\x2756\x3858\x385A\x365C\x3E5E\x0660\x0662\x1664\x4966",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029c:            Temp_16=gcnew System::InvalidOperationException(Temp_15);   //newobj				void System::InvalidOperationException::.ctor(System::String^)
	IL_02a1:            V_10=Temp_16;                                               //stloc.s				V_10
	IL_02a3:                                                                        //ldarg.0
	IL_02a4:                                                                        //ldarg.1
	IL_02a5:                                                                        //ldloc.s				V_10
	IL_02a7:            this->M_x1(A_0,safe_cast<System::Exception^>(V_10));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_02ac:                                                                        //ldc.i4				0x2
	IL_02b1:            V_20=2;                                                     //stloc				V_20
	IL_02b5:            /*goto IL_0235;*/goto IL_02ba;                              //br				IL_0235
	IL_02ba:            goto IL_02d9;                                               //br.s				IL_02d9
	IL_02bc:                                                                        //ldarg.0
	IL_02bd:            Temp_17=this->F_x12;                                        //ldfld				Root::T_x96::T_x1^ Root::T_x96 F_x12
	IL_02c2:                                                                        //ldloc.s				V_9
	IL_02c4:            Temp_17->M_x1(safe_cast<Root::T_x90^>(V_9));                //callvirt				void Root::T_x96::T_x1::M_x1(Root::T_x90^)
	IL_02c9:                                                                        //ldc.i4				0x3
	IL_02ce:            V_20=3;                                                     //stloc				V_20
	IL_02d2:            /*goto IL_0235;*/goto IL_02d7;                              //br				IL_0235
	IL_02d7:            goto IL_02d9;                                               //br.s				IL_02d9
	IL_02d9:                                                                        //ldc.i4				0x4
	IL_02de:            V_20=4;                                                     //stloc				V_20
	IL_02e2:            /*goto IL_0235;*/goto IL_02e7;                              //br				IL_0235
	IL_02e7:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	                    catch(System::Reflection::ReflectionTypeLoadException^ Ex_02E702){
	IL_02ec:            V_11=Ex_02E702;                                             //stloc.s				V_11
	IL_02ee:                                                                        //ldarg.0
	IL_02ef:                                                                        //ldarg.1
	IL_02f0:                                                                        //ldloc.s				V_11
	IL_02f2:            this->M_x1(A_0,safe_cast<System::Exception^>(V_11));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_02f7:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	                    catch(System::Reflection::TargetInvocationException^ Ex_02F702){
	IL_02fc:            V_12=Ex_02F702;                                             //stloc.s				V_12
	IL_02fe:                                                                        //ldarg.0
	IL_02ff:                                                                        //ldarg.1
	IL_0300:                                                                        //ldloc.s				V_12
	IL_0302:            this->M_x1(A_0,safe_cast<System::Exception^>(V_12));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_0307:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	                    catch(System::ArrayTypeMismatchException^ Ex_030702){
	IL_030c:            V_13=Ex_030702;                                             //stloc.s				V_13
	IL_030e:                                                                        //ldarg.0
	IL_030f:                                                                        //ldarg.1
	IL_0310:                                                                        //ldloc.s				V_13
	IL_0312:            this->M_x1(A_0,safe_cast<System::Exception^>(V_13));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_0317:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_031702){
	IL_031c:            V_14=Ex_031702;                                             //stloc.s				V_14
	IL_031e:                                                                        //ldarg.0
	IL_031f:                                                                        //ldarg.1
	IL_0320:                                                                        //ldloc.s				V_14
	IL_0322:            this->M_x1(A_0,safe_cast<System::Exception^>(V_14));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_0327:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	                    catch(System::TypeLoadException^ Ex_032702){
	IL_032c:            V_15=Ex_032702;                                             //stloc.s				V_15
	IL_032e:                                                                        //ldarg.0
	IL_032f:                                                                        //ldarg.1
	IL_0330:                                                                        //ldloc.s				V_15
	IL_0332:            this->M_x1(A_0,safe_cast<System::Exception^>(V_15));        //call				void Root::T_x96::M_x1(System::String^,System::Exception^)
	IL_0337:            goto IL_0060;                                               //leave				IL_0060
	                    ;}
	IL_033c:                                                                        //ldc.i4				0x4
	IL_0341:            V_20=4;                                                     //stloc				V_20
	IL_0345:            /*goto IL_000b;*/goto IL_034a;                              //br				IL_000b
	IL_034a:                                                                        //ldc.i4.4
	IL_034b:                                                                        //dup
	IL_034c:                                                                        //dup
	IL_034d:                                                                        //ldc.i4.2
	IL_034e:                                                                        //sub
	IL_034f:                                                                        //blt				IL_034b
	IL_0354:                                                                        //pop
	IL_0355:                                                                        //ldloc.0
	IL_0356:            if(V_0==nullptr)goto IL_003f;                               //brfalse				IL_003f
	IL_035b:                                                                        //ldc.i4				0x5
	IL_0360:            V_20=5;                                                     //stloc				V_20
	IL_0364:            /*goto IL_000b;*/goto IL_0369;                              //br				IL_000b
	IL_0369:            goto IL_0065;                                               //br				IL_0065
	IL_036e:                                                                        //ldnull
	IL_036f:            V_9=safe_cast<Root::T_x91^>(nullptr);                       //stloc.s				V_9
	IL_0371:                                                                        //ldc.i4				0x3
	IL_0376:            V_20=3;                                                     //stloc				V_20
	IL_037a:            /*goto IL_000b;*/goto IL_037f;                              //br				IL_000b
	IL_037f:            /*goto IL_0233;*/goto IL_023202;                            //br				IL_0233
	IL_0384:                                                                        //ldloc.s				V_16
	IL_0386:            return V_16;                                                //ret

}
inline void Root::T_x96::M_x1(System::String^ A_0,System::Exception^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x94^ Temp_0 = nullptr;
	Root::T_x94^ Temp_1 = nullptr;
	Root::T_x94^ Temp_2 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_0=2;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0050;case 1:goto IL_0035;case 2:goto IL_000b;};//switch				(IL_0050,IL_0035,IL_000b)
	IL_0022:                                                                        //ldarg.0
	IL_0023:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x94^ Root::T_x96 F_x2
	IL_0028:            if(Temp_2!=nullptr)goto IL_0052;                            //brtrue.s				IL_0052
	IL_002a:                                                                        //ldc.i4				0x1
	IL_002f:            V_0=1;                                                      //stloc				V_0
	IL_0033:            /*goto IL_000d;*/goto IL_0035;                              //br.s				IL_000d
	IL_0035:            goto IL_0037;                                               //br.s				IL_0037
	IL_0037:                                                                        //ldarg.0
	IL_0038:            Temp_1=gcnew Root::T_x94();                                 //newobj				void Root::T_x94::.ctor()
	IL_003d:            this->F_x2=Temp_1;                                          //stfld				Root::T_x94^ Root::T_x96 F_x2
	IL_0042:            goto IL_0045;                                               //br.s				IL_0045
	IL_0044:                                                                        //break
	IL_0045:                                                                        //ldc.i4				0x0
	IL_004a:            V_0=0;                                                      //stloc				V_0
	IL_004e:            /*goto IL_000d;*/goto IL_0050;                              //br.s				IL_000d
	IL_0050:            goto IL_0052;                                               //br.s				IL_0052
	IL_0052:                                                                        //ldarg.0
	IL_0053:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x94^ Root::T_x96 F_x2
	IL_0058:                                                                        //ldarg.1
	IL_0059:                                                                        //ldarg.2
	IL_005a:            Temp_0->M_x1(A_0,A_1);                                      //callvirt				void Root::T_x94::M_x1(System::String^,System::Exception^)
	IL_005f:            return;                                                     //ret

}
inline void Root::T_x96::M_x1(Root::T_x90^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x96::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x96::T_x1^ Root::T_x96 F_x12
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_0->M_x2(A_0);                                          //callvirt				void Root::T_x96::T_x1::M_x2(Root::T_x90^)
	IL_000c:                                                                        //ldarg.1
	IL_000d:            /*safe_cast<System::IDisposable^>(A_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0012:            return;                                                     //ret

}
inline Root::T_x56^ Root::T_x96::M_x2()
//Root::T_x95^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x96::T_x1^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				Root::T_x96::T_x1^ Root::T_x96 F_x12
	IL_0006:            return safe_cast<Root::T_x56^>(Temp_0);                     //ret

}
inline void Root::T_x96::M_x2(System::String^ A_0)
//Root::T_x95^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x90^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=this->M_x1(A_0);                                     //call				Root::T_x90^ Root::T_x96::M_x1(System::String^)
	IL_0007:                                                                        //pop
	IL_0008:                                                                        //ldarg.0
	IL_0009:            this->M_x1();                                               //call				void Root::T_x96::M_x1()
	IL_000e:            return;                                                     //ret

}
inline Root::T_x96::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Collections::CollectionBase();*/                  //call				void System::Collections::CollectionBase::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Root::T_x90^ Root::T_x96::T_x1::M_x1(System::Int32 A_0)
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
	IL_000c:                                                                        //castclass				Root::T_x90
	IL_0011:            return safe_cast<Root::T_x90^>(Temp_1);                     //ret

}
inline void Root::T_x96::T_x1::M_x1(Root::T_x90^ A_0)
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
inline void Root::T_x96::T_x1::M_x2(Root::T_x90^ A_0)
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
