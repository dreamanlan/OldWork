#include "global_xref.h"

inline Root::T_x112::T_x112()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::String^ Root::T_x112::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Security::Cryptography::TripleDESCryptoServiceProvider^ Temp_1 = nullptr;
	System::Security::Cryptography::MD5CryptoServiceProvider^ Temp_2 = nullptr;
	System::Text::Encoding^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::Byte>^ Temp_5 = nullptr;
	array<System::Byte>^ Temp_6 = nullptr;
	array<System::Byte>^ Temp_7 = nullptr;
	System::Text::Encoding^ Temp_8 = nullptr;
	System::Security::Cryptography::ICryptoTransform^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	array<System::Byte>^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	//local variables.
	System::Security::Cryptography::SymmetricAlgorithm^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_3=9;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_2=0;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0014;case 1:goto IL_004c;case 2:goto IL_006a;case 3:goto IL_003d;};//switch				(IL_0014,IL_004c,IL_006a,IL_003d)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            if(A_0==nullptr)goto IL_003f;                               //brfalse.s				IL_003f
	IL_0032:                                                                        //ldc.i4				0x3
	IL_0037:            V_2=3;                                                      //stloc				V_2
	IL_003b:            /*goto IL_0016;*/goto IL_003d;                              //br.s				IL_0016
	IL_003d:            goto IL_0041;                                               //br.s				IL_0041
	IL_003f:                                                                        //ldarg.0
	IL_0040:            return A_0;                                                 //ret
	IL_0041:                                                                        //ldc.i4				0x1
	IL_0046:            V_2=1;                                                      //stloc				V_2
	IL_004a:            /*goto IL_0016;*/goto IL_004c;                              //br.s				IL_0016
	IL_004c:                                                                        //ldarg.0
	IL_004d:            Temp_0=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0052:            if(Temp_0!=0)goto IL_006c;                                  //brtrue.s				IL_006c
	IL_0054:                                                                        //ldc.i4.4
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //dup
	IL_0057:                                                                        //ldc.i4.2
	IL_0058:                                                                        //sub
	IL_0059:                                                                        //blt				IL_0055
	IL_005e:                                                                        //pop
	IL_005f:                                                                        //ldc.i4				0x2
	IL_0064:            V_2=2;                                                      //stloc				V_2
	IL_0068:            /*goto IL_0016;*/goto IL_006a;                              //br.s				IL_0016
	IL_006a:            goto IL_003f;                                               //br.s				IL_003f
	IL_006c:            Temp_1=gcnew System::Security::Cryptography::TripleDESCryptoServiceProvider();//newobj				void System::Security::Cryptography::TripleDESCryptoServiceProvider::.ctor()
	IL_0071:            V_0=safe_cast<System::Security::Cryptography::SymmetricAlgorithm^>(Temp_1);//stloc.0
	IL_0072:                                                                        //ldloc.0
	IL_0073:            Temp_2=gcnew System::Security::Cryptography::MD5CryptoServiceProvider();//newobj				void System::Security::Cryptography::MD5CryptoServiceProvider::.ctor()
	IL_0078:            Temp_3=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_007d:                                                                        //ldstr				L"\x5D26\x5328\x512A\x572C\x552E\x4B30\x4932\x4F34"
	IL_0082:                                                                        //ldloc				V_3
	IL_0086:            Temp_4=a(L"\x5D26\x5328\x512A\x572C\x552E\x4B30\x4932\x4F34",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            Temp_5=Temp_3->GetBytes(Temp_4);                            //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_0090:            Temp_6=Temp_2->ComputeHash(Temp_5);                         //call				array<System::Byte>^ System::Security::Cryptography::HashAlgorithm::ComputeHash(array<System::Byte>^)
	IL_0095:            V_0->Key=Temp_6;                                            //callvirt				void System::Security::Cryptography::SymmetricAlgorithm::set_Key(array<System::Byte>^)
	IL_009a:                                                                        //ldloc.0
	IL_009b:                                                                        //ldc.i4.2
	IL_009c:            V_0->Mode=safe_cast<System::Security::Cryptography::CipherMode>(2);//callvirt				void System::Security::Cryptography::SymmetricAlgorithm::set_Mode(System::Security::Cryptography::CipherMode)
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_7=System::Convert::FromBase64String(A_0);              //call				array<System::Byte>^ System::Convert::FromBase64String(System::String^)
	IL_00a7:            V_1=Temp_7;                                                 //stloc.1
	IL_00a8:            Temp_8=System::Text::Encoding::Unicode;                     //call				System::Text::Encoding^ System::Text::Encoding::get_Unicode()
	IL_00ad:                                                                        //ldloc.0
	IL_00ae:            Temp_9=V_0->CreateDecryptor();                              //callvirt				System::Security::Cryptography::ICryptoTransform^ System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor()
	IL_00b3:                                                                        //ldloc.1
	IL_00b4:                                                                        //ldc.i4.0
	IL_00b5:                                                                        //ldloc.1
	IL_00b6:            Temp_10=V_1->Length;                                        //ldlen
	IL_00b7:                                                                        //conv.i4
	IL_00b8:            Temp_11=Temp_9->TransformFinalBlock(V_1,safe_cast<System::Int32>(0),Temp_10);//callvirt				array<System::Byte>^ System::Security::Cryptography::ICryptoTransform::TransformFinalBlock(array<System::Byte>^,System::Int32,System::Int32)
	IL_00bd:            Temp_12=Temp_8->GetString(Temp_11);                         //callvirt				System::String^ System::Text::Encoding::GetString(array<System::Byte>^)
	IL_00c2:            return Temp_12;                                             //ret

}
inline System::String^ Root::T_x112::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Security::Cryptography::TripleDESCryptoServiceProvider^ Temp_1 = nullptr;
	System::Security::Cryptography::MD5CryptoServiceProvider^ Temp_2 = nullptr;
	System::Text::Encoding^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	array<System::Byte>^ Temp_5 = nullptr;
	array<System::Byte>^ Temp_6 = nullptr;
	System::Text::Encoding^ Temp_7 = nullptr;
	array<System::Byte>^ Temp_8 = nullptr;
	System::Security::Cryptography::ICryptoTransform^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	array<System::Byte>^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	//local variables.
	System::Security::Cryptography::SymmetricAlgorithm^ V_0 = nullptr;
	array<System::Byte>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_2=0;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0014;case 1:goto IL_004f;case 2:goto IL_0062;case 3:goto IL_0040;};//switch				(IL_0014,IL_004f,IL_0062,IL_0040)
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //ldarg.0
	IL_0033:            if(A_0==nullptr)goto IL_0042;                               //brfalse.s				IL_0042
	IL_0035:                                                                        //ldc.i4				0x3
	IL_003a:            V_2=3;                                                      //stloc				V_2
	IL_003e:            /*goto IL_0016;*/goto IL_0040;                              //br.s				IL_0016
	IL_0040:            goto IL_0044;                                               //br.s				IL_0044
	IL_0042:                                                                        //ldarg.0
	IL_0043:            return A_0;                                                 //ret
	IL_0044:                                                                        //ldc.i4				0x1
	IL_0049:            V_2=1;                                                      //stloc				V_2
	IL_004d:            /*goto IL_0016;*/goto IL_004f;                              //br.s				IL_0016
	IL_004f:                                                                        //ldarg.0
	IL_0050:            Temp_0=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0055:            if(Temp_0!=0)goto IL_0064;                                  //brtrue.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_2=2;                                                      //stloc				V_2
	IL_0060:            /*goto IL_0016;*/goto IL_0062;                              //br.s				IL_0016
	IL_0062:            goto IL_0042;                                               //br.s				IL_0042
	IL_0064:            Temp_1=gcnew System::Security::Cryptography::TripleDESCryptoServiceProvider();//newobj				void System::Security::Cryptography::TripleDESCryptoServiceProvider::.ctor()
	IL_0069:            V_0=safe_cast<System::Security::Cryptography::SymmetricAlgorithm^>(Temp_1);//stloc.0
	IL_006a:                                                                        //ldloc.0
	IL_006b:            Temp_2=gcnew System::Security::Cryptography::MD5CryptoServiceProvider();//newobj				void System::Security::Cryptography::MD5CryptoServiceProvider::.ctor()
	IL_0070:            Temp_3=System::Text::Encoding::ASCII;                       //call				System::Text::Encoding^ System::Text::Encoding::get_ASCII()
	IL_0075:                                                                        //ldstr				L"\x5F24\x5D26\x5328\x512A\x572C\x552E\x4B30\x4932"
	IL_007a:                                                                        //ldloc				V_3
	IL_007e:            Temp_4=a(L"\x5F24\x5D26\x5328\x512A\x572C\x552E\x4B30\x4932",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0083:            Temp_5=Temp_3->GetBytes(Temp_4);                            //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_0088:            Temp_6=Temp_2->ComputeHash(Temp_5);                         //call				array<System::Byte>^ System::Security::Cryptography::HashAlgorithm::ComputeHash(array<System::Byte>^)
	IL_008d:            V_0->Key=Temp_6;                                            //callvirt				void System::Security::Cryptography::SymmetricAlgorithm::set_Key(array<System::Byte>^)
	IL_0092:                                                                        //ldloc.0
	IL_0093:                                                                        //ldc.i4.2
	IL_0094:            V_0->Mode=safe_cast<System::Security::Cryptography::CipherMode>(2);//callvirt				void System::Security::Cryptography::SymmetricAlgorithm::set_Mode(System::Security::Cryptography::CipherMode)
	IL_0099:            Temp_7=System::Text::Encoding::Unicode;                     //call				System::Text::Encoding^ System::Text::Encoding::get_Unicode()
	IL_009e:                                                                        //ldarg.0
	IL_009f:            Temp_8=Temp_7->GetBytes(A_0);                               //callvirt				array<System::Byte>^ System::Text::Encoding::GetBytes(System::String^)
	IL_00a4:            V_1=Temp_8;                                                 //stloc.1
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:            Temp_9=V_0->CreateEncryptor();                              //callvirt				System::Security::Cryptography::ICryptoTransform^ System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor()
	IL_00ab:                                                                        //ldloc.1
	IL_00ac:                                                                        //ldc.i4.0
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:            Temp_10=V_1->Length;                                        //ldlen
	IL_00af:                                                                        //conv.i4
	IL_00b0:            Temp_11=Temp_9->TransformFinalBlock(V_1,safe_cast<System::Int32>(0),Temp_10);//callvirt				array<System::Byte>^ System::Security::Cryptography::ICryptoTransform::TransformFinalBlock(array<System::Byte>^,System::Int32,System::Int32)
	IL_00b5:            Temp_12=System::Convert::ToBase64String(Temp_11);           //call				System::String^ System::Convert::ToBase64String(array<System::Byte>^)
	IL_00ba:            return Temp_12;                                             //ret

}
