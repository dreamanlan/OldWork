#include "global_xref.h"

inline Root::T_x86::T_x86(Reflector::ICommandBarManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
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
	Root::T_x47^ Temp_30 = nullptr;
	Root::T_x47^ Temp_31 = nullptr;
	Root::T_x47^ Temp_32 = nullptr;
	Root::T_x47^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	Root::T_x47^ Temp_35 = nullptr;
	Root::T_x52^ Temp_36 = nullptr;
	Root::T_x47^ Temp_37 = nullptr;
	Root::T_x50^ Temp_38 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_39 = nullptr;
	Root::T_x47^ Temp_40 = nullptr;
	Reflector::ICommandBarCollection^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	Reflector::ICommandBar^ Temp_43 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::Drawing::Image^ Temp_46 = nullptr;
	System::EventHandler^ Temp_47 = nullptr;
	Reflector::ICommandBarButton^ Temp_48 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_49 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_50 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::Drawing::Image^ Temp_53 = nullptr;
	System::EventHandler^ Temp_54 = nullptr;
	Reflector::ICommandBarButton^ Temp_55 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::Drawing::Image^ Temp_58 = nullptr;
	System::EventHandler^ Temp_59 = nullptr;
	Reflector::ICommandBarButton^ Temp_60 = nullptr;
	Root::T_x47^ Temp_61 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	Reflector::ICommandBar^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_2=4;                                                      //stloc				V_2
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_000f:            this->F_x12=Temp_0;                                         //stfld				System::String^ Root::T_x86 F_x12
	IL_0014:                                                                        //ldarg.0
	IL_0015:            /*System::Windows::Forms::Control();*/                      //call				void System::Windows::Forms::Control::.ctor()
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:            this->TabStop=false;                                        //call				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0021:                                                                        //ldarg.0
	IL_0022:                                                                        //ldc.i4.5
	IL_0023:            this->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0028:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_002d:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0032:            V_0=Temp_2;                                                 //stloc.0
	IL_0033:            /*goto IL_0035;*/goto IL_003301;                            //br.s				IL_0035
	IL_003301:          try{
	IL_0035:                                                                        //ldloc.0
	IL_0036:                                                                        //ldstr				L"\x1E21\x4C23\x5225\x4527\x4629\x122B\x122D\x582F\x5731\x5533\x5235\x0637\x0639\x4F3B\x4A3D\x393F\x2E41\x2143\x7845"
	IL_003b:                                                                        //ldloc				V_2
	IL_003f:            Temp_3=a(L"\x1E21\x4C23\x5225\x4527\x4629\x122B\x122D\x582F\x5731\x5533\x5235\x0637\x0639\x4F3B\x4A3D\x393F\x2E41\x2143\x7845",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0044:            V_0->Write(Temp_3);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0049:                                                                        //ldloc.0
	IL_004a:                                                                        //ldstr				L"\x4021\x4B23\x4225\x5127\x0A29\x572B\x0E2D\x522F\x5331\x5733\x5D35\x5F37\x4839\x533B\x4B3D\x2E3F\x2641\x7E43\x6645\x6B47\x2C49\x2A4B\x284D\x364F\x3451\x3253\x6D55\x7857\x3959\x335B\x325D\x0F5F\x1061\x5E63\x4665\x4B67\x5A69\x5C6B\x5E6D\x406F\x4271\x4473\x4D75\x5877\x1C79\x137B\x107D\xF47F\xAF81\xE283\xE785\xE587\xE389\xE08B\xF78D\xAA8F\xB291\xC293\xF395\xEA97\xFE99\xFD9B\xF09D\xC19F\x8EA1\x84A3\xE7A5\xDAA7\xC3A9\xCDAB\xC2AD\x9CAF\x92B1\xFCB3\xD3B5\xD4B7\xCCB9\xD9BB\xCABD\xA9BF\xA1C1\xA5C3\xFDC5\xE8C7\xACC9\xA3CB\xA0CD\xA4CF\xFFD1\xA7D3\xBFD5\xA2D7\xBFD9\xE6DB\xFEDD\xD7DF\xD2E1\xC1E3\xDDE5\xC8E7\x9DE9\x85EB\x8AED\x84EF\x9AF1\xCEF3\xD6F5\xC9F7\xCAF9\xCCFB\xDBFD\x3BFF\x2201\x7903"
	IL_004f:                                                                        //ldloc				V_2
	IL_0053:            Temp_4=a(L"\x4021\x4B23\x4225\x5127\x0A29\x572B\x0E2D\x522F\x5331\x5733\x5D35\x5F37\x4839\x533B\x4B3D\x2E3F\x2641\x7E43\x6645\x6B47\x2C49\x2A4B\x284D\x364F\x3451\x3253\x6D55\x7857\x3959\x335B\x325D\x0F5F\x1061\x5E63\x4665\x4B67\x5A69\x5C6B\x5E6D\x406F\x4271\x4473\x4D75\x5877\x1C79\x137B\x107D\xF47F\xAF81\xE283\xE785\xE587\xE389\xE08B\xF78D\xAA8F\xB291\xC293\xF395\xEA97\xFE99\xFD9B\xF09D\xC19F\x8EA1\x84A3\xE7A5\xDAA7\xC3A9\xCDAB\xC2AD\x9CAF\x92B1\xFCB3\xD3B5\xD4B7\xCCB9\xD9BB\xCABD\xA9BF\xA1C1\xA5C3\xFDC5\xE8C7\xACC9\xA3CB\xA0CD\xA4CF\xFFD1\xA7D3\xBFD5\xA2D7\xBFD9\xE6DB\xFEDD\xD7DF\xD2E1\xC1E3\xDDE5\xC8E7\x9DE9\x85EB\x8AED\x84EF\x9AF1\xCEF3\xD6F5\xC9F7\xCAF9\xCCFB\xDBFD\x3BFF\x2201\x7903",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            V_0->Write(Temp_4);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_005d:                                                                        //ldloc.0
	IL_005e:                                                                        //ldstr				L"\x4621\x4823\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x4E39\x533B\x4E3D\x7A3F\x6241\x7443\x2345\x2547\x7149\x6C4B\x3E4D\x314F\x3651\x3053\x3F55\x3657\x3D59\x715B\x325D\x055F\x0461\x1063\x5C65\x4867\x5B69\x1C6B\x166D\x4B6F\x5271\x0973"
	IL_0063:                                                                        //ldloc				V_2
	IL_0067:            Temp_5=a(L"\x4621\x4823\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x4E39\x533B\x4E3D\x7A3F\x6241\x7443\x2345\x2547\x7149\x6C4B\x3E4D\x314F\x3651\x3053\x3F55\x3657\x3D59\x715B\x325D\x055F\x0461\x1063\x5C65\x4867\x5B69\x1C6B\x166D\x4B6F\x5271\x0973",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006c:            V_0->Write(Temp_5);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0071:                                                                        //ldloc.0
	IL_0072:                                                                        //ldstr				L"\x4621\x4023\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x5839\x533B\x4A3D\x343F\x2D41\x2943\x7C45\x6847\x7A49\x294B\x234D\x6B4F\x7251\x3953\x3755\x2A57\x3D59\x355B\x305D\x4D5F\x0E61\x0163\x0065\x1C67\x5069\x4C6B\x5F6D\x5E6F\x4771\x1173\x1B75\x4377\x5A79\x017B"
	IL_0077:                                                                        //ldloc				V_2
	IL_007b:            Temp_6=a(L"\x4621\x4023\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x5839\x533B\x4A3D\x343F\x2D41\x2943\x7C45\x6847\x7A49\x294B\x234D\x6B4F\x7251\x3953\x3755\x2A57\x3D59\x355B\x305D\x4D5F\x0E61\x0163\x0065\x1C67\x5069\x4C6B\x5F6D\x5E6F\x4771\x1173\x1B75\x4377\x5A79\x017B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0080:            V_0->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0085:                                                                        //ldloc.0
	IL_0086:                                                                        //ldstr				L"\x4621\x5023\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x4E39\x533B\x4E3D\x7A3F\x6241\x6A43\x7345\x2D47\x2749\x774B\x6E4D\x2D4F"
	IL_008b:                                                                        //ldloc				V_2
	IL_008f:            Temp_7=a(L"\x4621\x5023\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x4E39\x533B\x4E3D\x7A3F\x6241\x6A43\x7345\x2D47\x2749\x774B\x6E4D\x2D4F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            V_0->Write(Temp_7);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0099:                                                                        //ldloc.0
	IL_009a:                                                                        //ldstr				L"\x4321\x1E23\x4A25\x4127\x4429\x472B\x0E2D\x4B2F\x1231\x5733\x5935\x5437\x5539\x4E3B\x043D\x603F\x6141\x7443\x7645\x7847\x7A49\x2A4B\x284D\x704F\x2F51"
	IL_009f:                                                                        //ldloc				V_2
	IL_00a3:            Temp_8=a(L"\x4321\x1E23\x4A25\x4127\x4429\x472B\x0E2D\x4B2F\x1231\x5733\x5935\x5437\x5539\x4E3B\x043D\x603F\x6141\x7443\x7645\x7847\x7A49\x2A4B\x284D\x704F\x2F51",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a8:            V_0->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ad:                                                                        //ldloc.0
	IL_00ae:                                                                        //ldstr				L"\x4321\x1E23\x5025\x4127\x5929\x452B\x5A2D\x552F\x5631\x1433\x4D35\x1837\x5939\x533B\x523D\x2F3F\x3041\x7E43\x6645\x6B47\x7A49\x7C4B\x7E4D\x604F\x3451\x3253\x7655\x2557"
	IL_00b3:                                                                        //ldloc				V_2
	IL_00b7:            Temp_9=a(L"\x4321\x1E23\x5025\x4127\x5929\x452B\x5A2D\x552F\x5631\x1433\x4D35\x1837\x5939\x533B\x523D\x2F3F\x3041\x7E43\x6645\x6B47\x7A49\x7C4B\x7E4D\x604F\x3451\x3253\x7655\x2557",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00bc:            V_0->Write(Temp_9);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00c1:                                                                        //ldloc.0
	IL_00c2:                                                                        //ldstr				L"\x4321\x1E23\x4E25\x4727\x5C29\x492B\x5C2D\x102F\x4931\x1433\x5535\x5737\x5639\x533B\x4C3D\x7A3F\x6241\x6743\x7545\x7947\x7C49\x794B\x284D\x364F\x7251\x2953"
	IL_00c7:                                                                        //ldloc				V_2
	IL_00cb:            Temp_10=a(L"\x4321\x1E23\x4E25\x4727\x5C29\x492B\x5C2D\x102F\x4931\x1433\x5535\x5737\x5639\x533B\x4C3D\x7A3F\x6241\x6743\x7545\x7947\x7C49\x794B\x284D\x364F\x7251\x2953",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d0:            V_0->Write(Temp_10);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:                                                                        //ldstr				L"\x5221\x0423\x5D25\x0827\x4729\x4D2B\x5C2D\x572F\x5B31\x5A33\x1B35\x4C37\x5539\x4C3B\x043D\x603F\x6C41\x7143\x2345\x2547\x7149\x6C4B\x234D\x314F\x2051\x3353\x3F55\x3657\x7759\x3E5B\x315D\x145F\x1661\x0B63\x0B65\x5267\x4A69\x426B\x5B6D\x156F\x1F71\x4F73\x5675\x0577"
	IL_00db:                                                                        //ldloc				V_2
	IL_00df:            Temp_11=a(L"\x5221\x0423\x5D25\x0827\x4729\x4D2B\x5C2D\x572F\x5B31\x5A33\x1B35\x4C37\x5539\x4C3B\x043D\x603F\x6C41\x7143\x2345\x2547\x7149\x6C4B\x234D\x314F\x2051\x3353\x3F55\x3657\x7759\x3E5B\x315D\x145F\x1661\x0B63\x0B65\x5267\x4A69\x426B\x5B6D\x156F\x1F71\x4F73\x5675\x0577",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e4:            V_0->Write(Temp_11);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00e9:                                                                        //ldloc.0
	IL_00ea:                                                                        //ldstr				L"\x4A21\x1523\x0A25\x0827\x4229\x1E2B\x022D\x102F\x5A31\x0733\x1A35\x1837\x5239\x083B\x1E3D\x3B3F\x6241\x2243\x2945\x2647\x3E49\x614B\x284D\x314F\x3F51\x3D53\x3A55\x2157\x6059\x7C5B\x085D\x055F\x1061\x0063\x0765\x0667\x0B69\x406B\x4E6D\x316F\x0071\x1D73\x1775\x1477\x5679\x5C7B\x367D\xE57F\xEE81\xF283\xE385\xFC87\xE389\xEF8B\xEF8D\xAB8F\xB291\xF993\xF795\xEA97\xFD99\xF59B\xF09D\x8D9F\xC0A1\xCBA3\xD2A5\xDCA7\xC5A9\xC1AB\x94AD\x90AF\x9CB1\x80B3\xD3B5\xD5B7\x81B9\x9CBB\xD3BD\xA1BF\xB0C1\xA3C3\xAFC5\xA6C7\xE7C9\xB8CB\xA1CD\xA0CF\xE8D1\xF4D3\xE7D5\xBDD7\xB7D9\xE7DB\xFEDD\x86DF\x8DE1\x8AE3\x92E5\xC5E7\x9DE9\x89EB\x87ED\x97EF\x9AF1\x80F3\xCCF5\xD8F7\x98F9\x93FB\x92FD\x64FF\x3901\x2403\x7B05"
	IL_00ef:                                                                        //ldloc				V_2
	IL_00f3:            Temp_12=a(L"\x4A21\x1523\x0A25\x0827\x4229\x1E2B\x022D\x102F\x5A31\x0733\x1A35\x1837\x5239\x083B\x1E3D\x3B3F\x6241\x2243\x2945\x2647\x3E49\x614B\x284D\x314F\x3F51\x3D53\x3A55\x2157\x6059\x7C5B\x085D\x055F\x1061\x0063\x0765\x0667\x0B69\x406B\x4E6D\x316F\x0071\x1D73\x1775\x1477\x5679\x5C7B\x367D\xE57F\xEE81\xF283\xE385\xFC87\xE389\xEF8B\xEF8D\xAB8F\xB291\xF993\xF795\xEA97\xFD99\xF59B\xF09D\x8D9F\xC0A1\xCBA3\xD2A5\xDCA7\xC5A9\xC1AB\x94AD\x90AF\x9CB1\x80B3\xD3B5\xD5B7\x81B9\x9CBB\xD3BD\xA1BF\xB0C1\xA3C3\xAFC5\xA6C7\xE7C9\xB8CB\xA1CD\xA0CF\xE8D1\xF4D3\xE7D5\xBDD7\xB7D9\xE7DB\xFEDD\x86DF\x8DE1\x8AE3\x92E5\xC5E7\x9DE9\x89EB\x87ED\x97EF\x9AF1\x80F3\xCCF5\xD8F7\x98F9\x93FB\x92FD\x64FF\x3901\x2403\x7B05",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f8:            V_0->Write(Temp_12);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00fd:                                                                        //ldloc.0
	IL_00fe:                                                                        //ldstr				L"\x4A21\x1523\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7143\x7645\x6D47\x7149\x6C4B\x234D\x314F\x2051\x3353\x3F55\x3657\x7759\x285B\x315D\x105F\x5861\x4463\x5665\x0D67\x0769\x576B\x4E6D\x0D6F"
	IL_0103:                                                                        //ldloc				V_2
	IL_0107:            Temp_13=a(L"\x4A21\x1523\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7143\x7645\x6D47\x7149\x6C4B\x234D\x314F\x2051\x3353\x3F55\x3657\x7759\x285B\x315D\x105F\x5861\x4463\x5665\x0D67\x0769\x576B\x4E6D\x0D6F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010c:            V_0->Write(Temp_13);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0111:                                                                        //ldloc.0
	IL_0112:                                                                        //ldstr				L"\x4A21\x1623\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7643\x7645\x6D47\x7149\x6C4B\x334D"
	IL_0117:                                                                        //ldloc				V_2
	IL_011b:            Temp_14=a(L"\x4A21\x1623\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7643\x7645\x6D47\x7149\x6C4B\x334D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0120:            V_0->Write(Temp_14);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0125:                                                                        //ldloc.0
	IL_0126:                                                                        //ldstr				L"\x4A21\x1723\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7543\x7645\x6D47\x7149\x6C4B\x334D"
	IL_012b:                                                                        //ldloc				V_2
	IL_012f:            Temp_15=a(L"\x4A21\x1723\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7543\x7645\x6D47\x7149\x6C4B\x334D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0134:            V_0->Write(Temp_15);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0139:                                                                        //ldloc.0
	IL_013a:                                                                        //ldstr				L"\x4A21\x1023\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7443\x7645\x6D47\x7149\x6C4B\x334D"
	IL_013f:                                                                        //ldloc				V_2
	IL_0143:            Temp_16=a(L"\x4A21\x1023\x0625\x5327\x0A29\x4A2B\x412D\x5E2F\x4631\x1933\x4535\x5137\x4039\x593B\x043D\x603F\x7341\x7443\x7645\x6D47\x7149\x6C4B\x334D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0148:            V_0->Write(Temp_16);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_014d:                                                                        //ldloc.0
	IL_014e:                                                                        //ldstr				L"\x5621\x4523\x4425\x4427\x4F29\x0C2B\x552D\x102F\x4531\x5D33\x5235\x4C37\x5239\x063B\x1E3D\x713F\x7241\x7443\x6345\x7347\x6A49\x214B\x2F4D\x224F\x3551\x3D53\x3855\x7557\x2E59\x335B\x2E5D\x5A5F\x4261\x4A63\x5065\x0D67\x0769\x576B\x4E6D\x1D6F\x1371\x0673\x1175\x1177\x1479\x517B\x1C7D\xEF7F\xF681\xF083\xE985\xE587\xB089\xAC8B\xA08D\xA38F\xF791\xF993\xAD95\xB897\xFC99\xF39B\xF09D\xD49F\x8FA1\xD7A3\xCFA5\xD2A7\xCFA9\x96AB\x8EAD\x81AF\x82B1\x84B3\x93B5\x83B7\x9AB9\xDEBB\xDFBD\xA3BF\xA9C1\xA3C3\xB4C5\xA7C7\xBFC9\xA2CB\xAACD\xFDCF\xB1D1\xBBD3\xBAD5\xB7D7\xA8D9\xE6DB\xFEDD\xC3DF\xDBE1\xDDE3\xDFE5\xD1E7\xD3E9\xD5EB\xD5ED\xD0EF\x8FF1"
	IL_0153:                                                                        //ldloc				V_2
	IL_0157:            Temp_17=a(L"\x5621\x4523\x4425\x4427\x4F29\x0C2B\x552D\x102F\x4531\x5D33\x5235\x4C37\x5239\x063B\x1E3D\x713F\x7241\x7443\x6345\x7347\x6A49\x214B\x2F4D\x224F\x3551\x3D53\x3855\x7557\x2E59\x335B\x2E5D\x5A5F\x4261\x4A63\x5065\x0D67\x0769\x576B\x4E6D\x1D6F\x1371\x0673\x1175\x1177\x1479\x517B\x1C7D\xEF7F\xF681\xF083\xE985\xE587\xB089\xAC8B\xA08D\xA38F\xF791\xF993\xAD95\xB897\xFC99\xF39B\xF09D\xD49F\x8FA1\xD7A3\xCFA5\xD2A7\xCFA9\x96AB\x8EAD\x81AF\x82B1\x84B3\x93B5\x83B7\x9AB9\xDEBB\xDFBD\xA3BF\xA9C1\xA3C3\xB4C5\xA7C7\xBFC9\xA2CB\xAACD\xFDCF\xB1D1\xBBD3\xBAD5\xB7D7\xA8D9\xE6DB\xFEDD\xC3DF\xDBE1\xDDE3\xDFE5\xD1E7\xD3E9\xD5EB\xD5ED\xD0EF\x8FF1",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015c:            V_0->Write(Temp_17);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0161:                                                                        //ldloc.0
	IL_0162:                                                                        //ldstr				L"\x0C21\x5723\x5225\x4927\x4429\x482B\x4F2D\x422F\x5631\x1433\x4D35\x1837\x5839\x533B\x4C3D\x243F\x2741\x3643\x6B45\x3F47\x2349\x284B\x3A4D\x384F\x6851\x7453\x6755\x2857\x2259\x7C5B\x6F5D\x105F\x1A61\x4463\x5665\x1867\x1269\x4C6B\x5E6D\x006F\x0A71\x4F73\x5675\x1A77\x1579\x0E7B\x1A7D\xE57F\xF081\xA983\xF585\xFC87\xF389\xE08B\xEB8D\xAA8F\xB291\xE793\xF995\xF497\xF399\xF89B\xA59D\x809F\xC0A1\xCBA3\xD4A5\xCCA7\xCFA9\xDEAB\x83AD\xD3AF\xDDB1\xD8B3\xD9B5\xCAB7\x80B9\x9CBB\x9DBD\xF9BF\xFBC1\xFDC3\xFFC5\xF1C7\xF3C9\xF7CB\xEECD\xADCF"
	IL_0167:                                                                        //ldloc				V_2
	IL_016b:            Temp_18=a(L"\x0C21\x5723\x5225\x4927\x4429\x482B\x4F2D\x422F\x5631\x1433\x4D35\x1837\x5839\x533B\x4C3D\x243F\x2741\x3643\x6B45\x3F47\x2349\x284B\x3A4D\x384F\x6851\x7453\x6755\x2857\x2259\x7C5B\x6F5D\x105F\x1A61\x4463\x5665\x1867\x1269\x4C6B\x5E6D\x006F\x0A71\x4F73\x5675\x1A77\x1579\x0E7B\x1A7D\xE57F\xF081\xA983\xF585\xFC87\xF389\xE08B\xEB8D\xAA8F\xB291\xE793\xF995\xF497\xF399\xF89B\xA59D\x809F\xC0A1\xCBA3\xD4A5\xCCA7\xCFA9\xDEAB\x83AD\xD3AF\xDDB1\xD8B3\xD9B5\xCAB7\x80B9\x9CBB\x9DBD\xF9BF\xFBC1\xFDC3\xFFC5\xF1C7\xF3C9\xF7CB\xEECD\xADCF",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0170:            V_0->Write(Temp_18);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0175:                                                                        //ldloc.0
	IL_0176:                                                                        //ldstr				L"\x5621\x4523\x4425\x4427\x4F29\x022B\x5D2D\x442F\x5331\x5A33\x5235\x5937\x4839\x583B\x1E3D\x343F\x2A41\x6843\x6645\x3C47\x2B49\x2E4B\x224D\x354F\x7C51\x2753\x2255\x3957\x3459\x385B\x3F5D\x125F\x0661\x4463\x1265\x0C67\x4A69\x176B\x4E6D\x126F\x1D71\x0673\x1275\x1D77\x0879\x517B\x0D7D\xF47F\xFB81\xE883\xE385\xB287\xAA89\xFF8B\xE18D\xFC8F\xFB91\xF093\xAD95\xB897\xF899\xF39B\xEC9D\xC49F\xC7A1\xD6A3\x8BA5\xDFA7\xC3A9\xC8AB\xDAAD\xD8AF\x88B1\x94B3\x86B5\xC8B7\xC2B9\x9CBB\x8EBD\xB0BF\xBAC1\xE4C3\xF7C5\xB8C7\xB2C9\xECCB\xFFCD\xA0CF\xAAD1\xEFD3\xF6D5\xBAD7\xB5D9\xAEDB\xBADD\x85DF\x90E1\xC9E3\x95E5\x9CE7\x93E9\x80EB\x8BED\xCAEF\xD2F1\x87F3\x99F5\x94F7\x93F9\x98FB\xC5FD\x20FF\x6001\x6B03\x7405\x6C07\x6F09\x7E0B\x230D\x730F\x7D11\x7813\x7915\x6A17\x2019\x3C1B\x3D1D\x191F\x1B21\x1D23\x1F25\x1127\x1329\x172B\x0E2D\x402F\x5331\x5033\x5235\x5137\x5439\x5B3B\x043D\x603F\x7641\x3443\x3E45\x6847\x7C49\x3C4B\x364D\x6B4F\x7251\x2053\x3355\x2057\x2E59\x715B\x3F5D\x0C5F\x0B61\x0363\x0865\x5267\x4A69\x006B\x0B6D\x166F\x0671\x4F73\x5675\x0577"
	IL_017b:                                                                        //ldloc				V_2
	IL_017f:            Temp_19=a(L"\x5621\x4523\x4425\x4427\x4F29\x022B\x5D2D\x442F\x5331\x5A33\x5235\x5937\x4839\x583B\x1E3D\x343F\x2A41\x6843\x6645\x3C47\x2B49\x2E4B\x224D\x354F\x7C51\x2753\x2255\x3957\x3459\x385B\x3F5D\x125F\x0661\x4463\x1265\x0C67\x4A69\x176B\x4E6D\x126F\x1D71\x0673\x1275\x1D77\x0879\x517B\x0D7D\xF47F\xFB81\xE883\xE385\xB287\xAA89\xFF8B\xE18D\xFC8F\xFB91\xF093\xAD95\xB897\xF899\xF39B\xEC9D\xC49F\xC7A1\xD6A3\x8BA5\xDFA7\xC3A9\xC8AB\xDAAD\xD8AF\x88B1\x94B3\x86B5\xC8B7\xC2B9\x9CBB\x8EBD\xB0BF\xBAC1\xE4C3\xF7C5\xB8C7\xB2C9\xECCB\xFFCD\xA0CF\xAAD1\xEFD3\xF6D5\xBAD7\xB5D9\xAEDB\xBADD\x85DF\x90E1\xC9E3\x95E5\x9CE7\x93E9\x80EB\x8BED\xCAEF\xD2F1\x87F3\x99F5\x94F7\x93F9\x98FB\xC5FD\x20FF\x6001\x6B03\x7405\x6C07\x6F09\x7E0B\x230D\x730F\x7D11\x7813\x7915\x6A17\x2019\x3C1B\x3D1D\x191F\x1B21\x1D23\x1F25\x1127\x1329\x172B\x0E2D\x402F\x5331\x5033\x5235\x5137\x5439\x5B3B\x043D\x603F\x7641\x3443\x3E45\x6847\x7C49\x3C4B\x364D\x6B4F\x7251\x2053\x3355\x2057\x2E59\x715B\x3F5D\x0C5F\x0B61\x0363\x0865\x5267\x4A69\x006B\x0B6D\x166F\x0671\x4F73\x5675\x0577",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0184:            V_0->Write(Temp_19);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0189:                                                                        //ldloc.0
	IL_018a:                                                                        //ldstr				L"\x5621\x4C23\x0625\x5327\x0A29\x4E2B\x4F2D\x532F\x5931\x5333\x4435\x5737\x4F39\x523B\x5A3D\x7A3F\x6241\x6743\x2545\x2B47\x2949\x2F4B\x2D4D\x334F\x6951\x7453\x2055\x3D57\x2859\x285B\x375D\x035F\x0361\x0863\x4B65\x0967\x0669\x056B\x096D\x1E6F\x4871\x5473\x1475\x1777\x0E79\x087B\x117D\xED7F\xB981\xA483\xFB85"
	IL_018f:                                                                        //ldloc				V_2
	IL_0193:            Temp_20=a(L"\x5621\x4C23\x0625\x5327\x0A29\x4E2B\x4F2D\x532F\x5931\x5333\x4435\x5737\x4F39\x523B\x5A3D\x7A3F\x6241\x6743\x2545\x2B47\x2949\x2F4B\x2D4D\x334F\x6951\x7453\x2055\x3D57\x2859\x285B\x375D\x035F\x0361\x0863\x4B65\x0967\x0669\x056B\x096D\x1E6F\x4871\x5473\x1475\x1777\x0E79\x087B\x117D\xED7F\xB981\xA483\xFB85",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0198:            V_0->Write(Temp_20);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_019d:                                                                        //ldloc.0
	IL_019e:                                                                        //ldstr				L"\x5621\x4023\x0625\x5327\x0A29\x4E2B\x4F2D\x532F\x5931\x5333\x4435\x5737\x4F39\x523B\x5A3D\x7A3F\x6241\x6743\x2045\x2E47\x2C49\x2A4B\x284D\x364F\x6951\x7453\x2055\x3D57\x2859\x285B\x375D\x035F\x0361\x0863\x4B65\x0967\x0669\x056B\x096D\x1E6F\x4871\x5473\x0275\x1777\x0A79\x477B\x5E7D\xFD7F"
	IL_01a3:                                                                        //ldloc				V_2
	IL_01a7:            Temp_21=a(L"\x5621\x4023\x0625\x5327\x0A29\x4E2B\x4F2D\x532F\x5931\x5333\x4435\x5737\x4F39\x523B\x5A3D\x7A3F\x6241\x6743\x2045\x2E47\x2C49\x2A4B\x284D\x364F\x6951\x7453\x2055\x3D57\x2859\x285B\x375D\x035F\x0361\x0863\x4B65\x0967\x0669\x056B\x096D\x1E6F\x4871\x5473\x0275\x1777\x0A79\x477B\x5E7D\xFD7F",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ac:            V_0->Write(Temp_21);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01b1:                                                                        //ldloc.0
	IL_01b2:                                                                        //ldstr				L"\x5221\x5623\x4325\x0827\x5129\x0C2B\x432D\x512F\x4031\x5333\x5F35\x5637\x1739\x483B\x513D\x303F\x7841\x6443\x6845\x7D47\x2F49\x214B\x754D\x704F\x3F51\x3553\x2455\x3F57\x3359\x325B\x735D\x025F\x0D61\x1063\x1265\x0767\x0769\x566B\x4E6D\x5E6F\x4771\x1173\x1B75\x4377\x5A79\x017B"
	IL_01b7:                                                                        //ldloc				V_2
	IL_01bb:            Temp_22=a(L"\x5221\x5623\x4325\x0827\x5129\x0C2B\x432D\x512F\x4031\x5333\x5F35\x5637\x1739\x483B\x513D\x303F\x7841\x6443\x6845\x7D47\x2F49\x214B\x754D\x704F\x3F51\x3553\x2455\x3F57\x3359\x325B\x735D\x025F\x0D61\x1063\x1265\x0767\x0769\x566B\x4E6D\x5E6F\x4771\x1173\x1B75\x4377\x5A79\x017B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c0:            V_0->Write(Temp_22);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01c5:                                                                        //ldloc.0
	IL_01c6:                                                                        //ldstr				L"\x5221\x5623\x4325\x0427\x0A29\x4F2B\x412D\x542F\x5731\x1833\x1635\x1637\x5939\x533B\x5A3D\x253F\x6241\x3F43\x6645\x2E47\x2549\x224B\x3A4D\x7D4F\x3451\x3553\x3B55\x3157\x3659\x255B\x645D\x405F\x2F61\x0B63\x0865\x0767\x1969\x1C6B\x0F6D\x136F\x1771\x5873\x5675\x3B77\x1579\x097B\x0C7D\xE97F\xE781\xF683\xA685\xC687\xEF89\xFB8B\xA28D\xB08F\xD191\xFB93\xE395\xEA97\xF399\xF99B\xEC9D\x9B9F\x82A1\xC2A3\xC9A5\xC6A7\xDEA9\x96AB\x8EAD\x81AF\x82B1\x84B3\x93B5\x83B7\x9AB9\xDFBB\xD1BD\xACBF\xADC1\xB6C3\xFCC5\xE8C7\xE9C9\xFCCB\xFECD\xE0CF\xE2D1\xE2D3\xE0D5\xE3D7\xFAD9\xA1DB"
	IL_01cb:                                                                        //ldloc				V_2
	IL_01cf:            Temp_23=a(L"\x5221\x5623\x4325\x0427\x0A29\x4F2B\x412D\x542F\x5731\x1833\x1635\x1637\x5939\x533B\x5A3D\x253F\x6241\x3F43\x6645\x2E47\x2549\x224B\x3A4D\x7D4F\x3451\x3553\x3B55\x3157\x3659\x255B\x645D\x405F\x2F61\x0B63\x0865\x0767\x1969\x1C6B\x0F6D\x136F\x1771\x5873\x5675\x3B77\x1579\x097B\x0C7D\xE97F\xE781\xF683\xA685\xC687\xEF89\xFB8B\xA28D\xB08F\xD191\xFB93\xE395\xEA97\xF399\xF99B\xEC9D\x9B9F\x82A1\xC2A3\xC9A5\xC6A7\xDEA9\x96AB\x8EAD\x81AF\x82B1\x84B3\x93B5\x83B7\x9AB9\xDFBB\xD1BD\xACBF\xADC1\xB6C3\xFCC5\xE8C7\xE9C9\xFCCB\xFECD\xE0CF\xE2D1\xE2D3\xE0D5\xE3D7\xFAD9\xA1DB",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d4:            V_0->Write(Temp_23);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01d9:                                                                        //ldloc.0
	IL_01da:                                                                        //ldstr				L"\x5221\x5623\x4325\x0627\x5929\x552B\x402D\x442F\x5331\x4C33\x1635\x4337\x1A39\x5E3B\x5F3D\x233F\x2941\x2343\x3445\x2747\x3F49\x224B\x2A4D\x6A4F\x7251\x7753\x3555\x3B57\x3959\x3F5B\x3D5D\x035F\x5961\x4463\x1665\x0967\x0E69\x086B\x076D\x1E6F\x1571\x4E73\x5675\x4C77\x0A79\x047B\x5E7D\xB87F\xF281\xFC83\xBD85\xA887\xE989\xF98B\xFC8D\xE38F\xFD91\xE693\xAC95\xB897\xEE99\xF99B\xE69D\xD49F\x99A1\x84A3\xCBA5\xC9A7\xD8A9\xCBAB\xC7AD\xDEAF\x9FB1\xC0B3\xD9B5\xC8B7\x80B9\x9CBB\x8FBD\xA5BF\xAFC1\xFFC3\xE6C5\xA5C7\xABC9\xBECB\xA9CD\xB9CF\xBCD1\xF9D3\xB4D5\xB7D7\xAED9\xA8DB\xB1DD\x8DDF\xD8E1\xC4E3\xD7E5\x8DE7\x87E9\xD7EB\xCEED\x93EF\x9DF1\x98F3\x99F5\x8AF7\xC0F9\xDCFB\xDDFD\x30FF\x3201\x3403\x3605\x3807\x3A09\x370B\x2E0D\x720F\x7D11\x6613\x7215\x7D17\x6819\x311B\x691D\x491F\x4621\x5023\x4E25\x1227\x0A29\x1D2B\x5E2D\x482F\x0931\x1433\x5435\x5737\x4839\x583B\x5B3D\x323F\x6F41\x3743\x3245\x3147\x2649\x294B\x744D\x704F\x2151\x3B53\x3A55\x3157\x3E59\x675B\x7E5D\x025F\x0D61\x1663\x0265\x0D67\x1869\x416B\x0D6D\x1F6F\x1E71\x1B73\x0475\x4277\x5A79\x5F7B\x477D\xB97F\xBB81\xBD83\xBF85\xB187\xB189\xAC8B\xF38D"
	IL_01df:                                                                        //ldloc				V_2
	IL_01e3:            Temp_24=a(L"\x5221\x5623\x4325\x0627\x5929\x552B\x402D\x442F\x5331\x4C33\x1635\x4337\x1A39\x5E3B\x5F3D\x233F\x2941\x2343\x3445\x2747\x3F49\x224B\x2A4D\x6A4F\x7251\x7753\x3555\x3B57\x3959\x3F5B\x3D5D\x035F\x5961\x4463\x1665\x0967\x0E69\x086B\x076D\x1E6F\x1571\x4E73\x5675\x4C77\x0A79\x047B\x5E7D\xB87F\xF281\xFC83\xBD85\xA887\xE989\xF98B\xFC8D\xE38F\xFD91\xE693\xAC95\xB897\xEE99\xF99B\xE69D\xD49F\x99A1\x84A3\xCBA5\xC9A7\xD8A9\xCBAB\xC7AD\xDEAF\x9FB1\xC0B3\xD9B5\xC8B7\x80B9\x9CBB\x8FBD\xA5BF\xAFC1\xFFC3\xE6C5\xA5C7\xABC9\xBECB\xA9CD\xB9CF\xBCD1\xF9D3\xB4D5\xB7D7\xAED9\xA8DB\xB1DD\x8DDF\xD8E1\xC4E3\xD7E5\x8DE7\x87E9\xD7EB\xCEED\x93EF\x9DF1\x98F3\x99F5\x8AF7\xC0F9\xDCFB\xDDFD\x30FF\x3201\x3403\x3605\x3807\x3A09\x370B\x2E0D\x720F\x7D11\x6613\x7215\x7D17\x6819\x311B\x691D\x491F\x4621\x5023\x4E25\x1227\x0A29\x1D2B\x5E2D\x482F\x0931\x1433\x5435\x5737\x4839\x583B\x5B3D\x323F\x6F41\x3743\x3245\x3147\x2649\x294B\x744D\x704F\x2151\x3B53\x3A55\x3157\x3E59\x675B\x7E5D\x025F\x0D61\x1663\x0265\x0D67\x1869\x416B\x0D6D\x1F6F\x1E71\x1B73\x0475\x4277\x5A79\x5F7B\x477D\xB97F\xBB81\xBD83\xBF85\xB187\xB189\xAC8B\xF38D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e8:            V_0->Write(Temp_24);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01ed:                                                                        //ldloc.0
	IL_01ee:                                                                        //ldstr				L"\x0C21\x4823\x4725\x4627\x4D29\x0C2B\x552D\x102F\x5131\x5B33\x5A35\x5737\x4839\x063B\x1E3D\x633F\x7441\x7243\x7045\x7E47\x7C49\x7A4B\x754D\x704F\x3451\x3B53\x3855\x2C57\x7759\x3A5B\x3F5D\x0D5F\x0B61\x0863\x1F65\x5267\x4A69\x3A6B\x0B6D\x026F\x1671\x1573\x1875\x1977\x5679\x5C7B\x3F7D\xF27F\xEB81\xE583\xEA85\xA487\xAA89\xC48B\xEB8D\xFC8F\xE491\xF193\xE295\xF197\xF999\xFD9B\xB29D\x809F\xC4A1\xCBA3\xC8A5\xDCA7\x87A9\xDFAB\xC7AD\xCAAF\xD7B1\x8EB3\x96B5\x80B7\x8AB9\x99BB\x85BD\xE0BF\xA4C1\xABC3\xA8C5\xBCC7\xE7C9\xBBCB\xABCD\xB9CF\xB5D1\xBCD3\xA2D5\xE2D7\xFAD9\xB2DB\xB1DD\x92DF\x8FE1\x85E3\x8AE5\xD3E7\xCAE9\x8AEB\x81ED\x9EEF\x86F1\xD9F3\x85F5\x8CF7\x83F9\x90FB\x9BFD\x3AFF\x2201\x6A03\x6905\x7A07\x6709\x6D0B\x620D\x2B0F\x3211\x6913"
	IL_01f3:                                                                        //ldloc				V_2
	IL_01f7:            Temp_25=a(L"\x0C21\x4823\x4725\x4627\x4D29\x0C2B\x552D\x102F\x5131\x5B33\x5A35\x5737\x4839\x063B\x1E3D\x633F\x7441\x7243\x7045\x7E47\x7C49\x7A4B\x754D\x704F\x3451\x3B53\x3855\x2C57\x7759\x3A5B\x3F5D\x0D5F\x0B61\x0863\x1F65\x5267\x4A69\x3A6B\x0B6D\x026F\x1671\x1573\x1875\x1977\x5679\x5C7B\x3F7D\xF27F\xEB81\xE583\xEA85\xA487\xAA89\xC48B\xEB8D\xFC8F\xE491\xF193\xE295\xF197\xF999\xFD9B\xB29D\x809F\xC4A1\xCBA3\xC8A5\xDCA7\x87A9\xDFAB\xC7AD\xCAAF\xD7B1\x8EB3\x96B5\x80B7\x8AB9\x99BB\x85BD\xE0BF\xA4C1\xABC3\xA8C5\xBCC7\xE7C9\xBBCB\xABCD\xB9CF\xB5D1\xBCD3\xA2D5\xE2D7\xFAD9\xB2DB\xB1DD\x92DF\x8FE1\x85E3\x8AE5\xD3E7\xCAE9\x8AEB\x81ED\x9EEF\x86F1\xD9F3\x85F5\x8CF7\x83F9\x90FB\x9BFD\x3AFF\x2201\x6A03\x6905\x7A07\x6709\x6D0B\x620D\x2B0F\x3211\x6913",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01fc:            V_0->Write(Temp_25);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0201:                                                                        //ldloc.0
	IL_0202:                                                                        //ldstr				L"\x4021\x4823\x4925\x4B27\x4129\x5D2B\x5B2D\x5F2F\x4631\x5133\x1635\x4337\x1A39\x513B\x5F3D\x323F\x2541\x2D43\x2845\x7247\x6A49\x624B\x7B4D\x354F\x3F51\x7453\x6755\x7657\x6F59\x395B\x335D\x405F\x4C61\x5163\x0365\x0567\x4A69\x5D6B\x406D\x456F\x1771\x1973\x4D75\x5877\x0779"
	IL_0207:                                                                        //ldloc				V_2
	IL_020b:            Temp_26=a(L"\x4021\x4823\x4925\x4B27\x4129\x5D2B\x5B2D\x5F2F\x4631\x5133\x1635\x4337\x1A39\x513B\x5F3D\x323F\x2541\x2D43\x2845\x7247\x6A49\x624B\x7B4D\x354F\x3F51\x7453\x6755\x7657\x6F59\x395B\x335D\x405F\x4C61\x5163\x0365\x0567\x4A69\x5D6B\x406D\x456F\x1771\x1973\x4D75\x5877\x0779",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0210:            V_0->Write(Temp_26);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0215:                                                                        //ldloc.0
	IL_0216:                                                                        //ldstr				L"\x4D21\x4823\x0A25\x0827\x5F29\x402B\x0E2D\x4B2F\x1231\x5933\x5735\x4A37\x5D39\x553B\x503D\x7A3F\x6241\x6A43\x7345\x2D47\x2749\x6C4B\x7E4D\x354F\x3F51\x7453\x6655\x3D57\x3759\x7C5B\x6C5D\x055F\x0F61\x5F63\x4665\x1567"
	IL_021b:                                                                        //ldloc				V_2
	IL_021f:            Temp_27=a(L"\x4D21\x4823\x0A25\x0827\x5F29\x402B\x0E2D\x4B2F\x1231\x5933\x5735\x4A37\x5D39\x553B\x503D\x7A3F\x6241\x6A43\x7345\x2D47\x2749\x6C4B\x7E4D\x354F\x3F51\x7453\x6655\x3D57\x3759\x7C5B\x6C5D\x055F\x0F61\x5F63\x4665\x1567",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0224:            V_0->Write(Temp_27);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0229:                                                                        //ldloc.0
	IL_022a:                                                                        //ldstr				L"\x4E21\x4D23\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x5839\x533B\x4A3D\x343F\x2D41\x2943\x7C45\x6847\x6449\x794B\x2B4D\x3D4F\x6951\x7453\x2B55"
	IL_022f:                                                                        //ldloc				V_2
	IL_0233:            Temp_28=a(L"\x4E21\x4D23\x0625\x5327\x0A29\x412B\x4F2D\x422F\x5531\x5D33\x5835\x1537\x5839\x533B\x4A3D\x343F\x2D41\x2943\x7C45\x6847\x6449\x794B\x2B4D\x3D4F\x6951\x7453\x2B55",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0238:            V_0->Write(Temp_28);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_023d:                                                                        //ldloc.0
	IL_023e:                                                                        //ldstr				L"\x1E21\x0B23\x5525\x5C27\x5329\x402B\x4B2D\x0E2F\x0E31\x1B33\x5E35\x5D37\x5B39\x583B\x003D\x7C3F\x2041\x2B43\x2245\x3147\x6549\x724B\x724D\x7F4F\x3A51\x2053\x3B55\x3457\x6459"
	IL_0243:                                                                        //ldloc				V_2
	IL_0247:            Temp_29=a(L"\x1E21\x0B23\x5525\x5C27\x5329\x402B\x4B2D\x0E2F\x0E31\x1B33\x5E35\x5D37\x5B39\x583B\x003D\x7C3F\x2041\x2B43\x2245\x3147\x6549\x724B\x724D\x7F4F\x3A51\x2053\x3B55\x3457\x6459",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024c:            V_0->Write(Temp_29);                                        //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0251:                                                                        //ldarg.0
	IL_0252:            Temp_30=gcnew Root::T_x47();                                //newobj				void Root::T_x47::.ctor()
	IL_0257:            this->F_x2=Temp_30;                                         //stfld				Root::T_x47^ Root::T_x86 F_x2
	IL_025c:                                                                        //ldarg.0
	IL_025d:            Temp_31=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0262:                                                                        //ldc.i4.0
	IL_0263:            Temp_31->TabStop=false;                                     //callvirt				void System::Windows::Forms::Control::set_TabStop(System::Boolean)
	IL_0268:                                                                        //ldarg.0
	IL_0269:            Temp_32=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_026e:                                                                        //ldc.i4.5
	IL_026f:            Temp_32->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0274:                                                                        //ldarg.0
	IL_0275:            Temp_33=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_027a:                                                                        //ldloc.0
	IL_027b:            Temp_34=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0280:            Temp_33->M_x2(Temp_34);                                     //callvirt				void Root::T_x47::M_x2(System::String^)
	IL_0285:                                                                        //ldarg.0
	IL_0286:            Temp_35=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_028b:                                                                        //ldarg.0
	IL_028c:                                                                        //ldftn				void Root::T_x86::M_x1(System::Object^,Root::T_x51^)
	IL_0292:            Temp_36=gcnew Root::T_x52(this,&Root::T_x86::M_x1);         //newobj				void Root::T_x52::.ctor(System::Object^,System::IntPtr)
	IL_0297:            Temp_35->M_x2(Temp_36);                                     //callvirt				void Root::T_x47::M_x2(Root::T_x52^)
	IL_029c:                                                                        //ldarg.0
	IL_029d:            Temp_37=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_02a2:                                                                        //ldarg.0
	IL_02a3:                                                                        //ldftn				void Root::T_x86::M_x1(System::Object^,Root::T_x49^)
	IL_02a9:            Temp_38=gcnew Root::T_x50(this,&Root::T_x86::M_x1);         //newobj				void Root::T_x50::.ctor(System::Object^,System::IntPtr)
	IL_02ae:            Temp_37->M_x13(Temp_38);                                    //callvirt				void Root::T_x47::M_x13(Root::T_x50^)
	IL_02b3:                                                                        //ldarg.0
	IL_02b4:            Temp_39=this->Controls;                                     //call				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_02b9:                                                                        //ldarg.0
	IL_02ba:            Temp_40=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_02bf:            Temp_39->Add(safe_cast<System::Windows::Forms::Control^>(Temp_40));//callvirt				void System::Windows::Forms::Control::ControlCollection::Add(System::Windows::Forms::Control^)
	IL_02c4:            goto IL_02d4;                                               //leave.s				IL_02d4
	                    ;}
	                    finally{
	IL_02c6:                                                                        //ldloc.0
	IL_02c7:            if(V_0==nullptr)goto IL_02d3;                               //brfalse.s				IL_02d3
	IL_02c9:            goto IL_02cb;                                               //br.s				IL_02cb
	IL_02cb:                                                                        //ldloc.0
	IL_02cc:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_02d1:            goto IL_02d3;                                               //br.s				IL_02d3
	IL_02d3:                                                                        //endfinally
	                    ;}
	IL_02d4:                                                                        //ldarg.1
	IL_02d5:            Temp_41=A_0->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_02da:                                                                        //ldstr				L"\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439\x6B3B\x573D\x2E3F\x2641\x2B43\x3145"
	IL_02df:                                                                        //ldloc				V_2
	IL_02e3:            Temp_42=a(L"\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439\x6B3B\x573D\x2E3F\x2641\x2B43\x3145",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e8:            Temp_43=Temp_41->AddContextMenu(Temp_42);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_02ed:            V_1=Temp_43;                                                //stloc.1
	IL_02ee:                                                                        //ldloc.1
	IL_02ef:            Temp_44=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_02f4:                                                                        //ldstr				L"\x0421\x6723\x4925\x5827\x5329"
	IL_02f9:                                                                        //ldloc				V_2
	IL_02fd:            Temp_45=a(L"\x0421\x6723\x4925\x5827\x5329",V_2);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0302:            Temp_46=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0307:                                                                        //ldarg.0
	IL_0308:                                                                        //ldftn				void Root::T_x86::M_x12(System::Object^,System::EventArgs^)
	IL_030e:            Temp_47=gcnew System::EventHandler(this,&Root::T_x86::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0313:                                                                        //ldc.i4				0x20043
	IL_0318:            Temp_48=Temp_44->AddButton(Temp_45,Temp_46,Temp_47,safe_cast<System::Windows::Forms::Keys>(131139));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_031d:                                                                        //pop
	IL_031e:                                                                        //ldloc.1
	IL_031f:            Temp_49=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0324:            Temp_50=Temp_49->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0329:                                                                        //pop
	IL_032a:                                                                        //ldloc.1
	IL_032b:            Temp_51=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0330:                                                                        //ldstr				L"\x7221\x5623\x4F25\x4627\x5E29\x0C2B\x7E2D\x422F\x5731\x1233\x4035\x5137\x5F39\x4B3B\x103D\x6E3F\x6C41"
	IL_0335:                                                                        //ldloc				V_2
	IL_0339:            Temp_52=a(L"\x7221\x5623\x4F25\x4627\x5E29\x0C2B\x7E2D\x422F\x5731\x1233\x4035\x5137\x5F39\x4B3B\x103D\x6E3F\x6C41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033e:            Temp_53=Root::T_x106::M_x6();                               //call				System::Drawing::Image^ Root::T_x106::M_x6()
	IL_0343:                                                                        //ldarg.0
	IL_0344:                                                                        //ldftn				void Root::T_x86::M_x1(System::Object^,System::EventArgs^)
	IL_034a:            Temp_54=gcnew System::EventHandler(this,&Root::T_x86::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_034f:            Temp_55=Temp_51->AddButton(Temp_52,Temp_53,Temp_54);        //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^)
	IL_0354:                                                                        //pop
	IL_0355:                                                                        //ldloc.1
	IL_0356:            Temp_56=V_1->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_035b:                                                                        //ldstr				L"\x0421\x7423\x5425\x4127\x4429\x582B\x002D\x1E2F\x1C31"
	IL_0360:                                                                        //ldloc				V_2
	IL_0364:            Temp_57=a(L"\x0421\x7423\x5425\x4127\x4429\x582B\x002D\x1E2F\x1C31",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0369:            Temp_58=Root::T_x106::M_x16();                              //call				System::Drawing::Image^ Root::T_x106::M_x16()
	IL_036e:                                                                        //ldarg.0
	IL_036f:                                                                        //ldftn				void Root::T_x86::M_x2(System::Object^,System::EventArgs^)
	IL_0375:            Temp_59=gcnew System::EventHandler(this,&Root::T_x86::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_037a:                                                                        //ldc.i4				0x20050
	IL_037f:            Temp_60=Temp_56->AddButton(Temp_57,Temp_58,Temp_59,safe_cast<System::Windows::Forms::Keys>(131152));//callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0384:                                                                        //pop
	IL_0385:                                                                        //ldarg.0
	IL_0386:            Temp_61=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_038b:                                                                        //ldloc.1
	IL_038c:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0391:            Temp_61->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_1);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_0396:            return;                                                     //ret

}
inline System::String^ Root::T_x86::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::String^ Root::T_x86 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x86::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0006:            Temp_0->M_x5();                                             //callvirt				void Root::T_x47::M_x5()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x86::M_x1(System::Object^ A_0,Root::T_x49^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->M_x1();                                        //call				System::String^ Root::T_x86::M_x1()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x86::M_x1(System::String^)
	IL_000c:            return;                                                     //ret

}
inline void Root::T_x86::M_x1(System::Object^ A_0,Root::T_x51^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::String^ Temp_3 = nullptr;
	Root::T_x84^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Root::T_x84^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_4=10;                                                     //stloc				V_4
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_0095;case 1:goto IL_0053;case 2:goto IL_003a;};//switch				(IL_0095,IL_0053,IL_003a)
	IL_0020:                                                                        //ldstr				L"\x5D27\x5829\x422B\x142D\x5D2F\x5731\x5933\x5435\x5D37\x4839\x063B"
	IL_0025:                                                                        //ldloc				V_4
	IL_0029:            Temp_0=a(L"\x5D27\x5829\x422B\x142D\x5D2F\x5731\x5933\x5435\x5D37\x4839\x063B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002e:            V_0=Temp_0;                                                 //stloc.0
	IL_002f:                                                                        //ldc.i4				0x2
	IL_0034:            V_3=2;                                                      //stloc				V_3
	IL_0038:            /*goto IL_000b;*/goto IL_003a;                              //br.s				IL_000b
	IL_003a:                                                                        //ldarg.2
	IL_003b:            Temp_5=A_1->M_x1();                                         //callvirt				System::String^ Root::T_x51::M_x1()
	IL_0040:                                                                        //ldloc.0
	IL_0041:            Temp_6=Temp_5->StartsWith(V_0);                             //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0046:            if(!Temp_6)goto IL_0097;                                    //brfalse.s				IL_0097
	IL_0048:                                                                        //ldc.i4				0x1
	IL_004d:            V_3=1;                                                      //stloc				V_3
	IL_0051:            /*goto IL_000b;*/goto IL_0053;                              //br.s				IL_000b
	IL_0053:            goto IL_0055;                                               //br.s				IL_0055
	IL_0055:                                                                        //ldarg.2
	IL_0056:                                                                        //ldc.i4.1
	IL_0057:            A_1->Cancel=true;                                           //callvirt				void System::ComponentModel::CancelEventArgs::set_Cancel(System::Boolean)
	IL_005c:                                                                        //ldarg.2
	IL_005d:            Temp_1=A_1->M_x1();                                         //callvirt				System::String^ Root::T_x51::M_x1()
	IL_0062:                                                                        //ldloc.0
	IL_0063:            Temp_2=V_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0068:            Temp_3=Temp_1->Substring(Temp_2);                           //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_006d:            V_1=Temp_3;                                                 //stloc.1
	IL_006e:                                                                        //ldloc.1
	IL_006f:            Temp_4=gcnew Root::T_x84(V_1);                              //newobj				void Root::T_x84::.ctor(System::String^)
	IL_0074:            V_2=Temp_4;                                                 //stloc.2
	IL_0075:                                                                        //ldarg.0
	IL_0076:                                                                        //ldloc.2
	IL_0077:            this->M_x1(V_2);                                            //callvirt				void Root::T_x86::M_x1(Root::T_x84^)
	IL_007c:                                                                        //ldc.i4.4
	IL_007d:                                                                        //dup
	IL_007e:                                                                        //dup
	IL_007f:                                                                        //ldc.i4.2
	IL_0080:                                                                        //sub
	IL_0081:                                                                        //blt				IL_007d
	IL_0086:                                                                        //pop
	IL_0087:                                                                        //ldc.i4				0x0
	IL_008c:            V_3=0;                                                      //stloc				V_3
	IL_0090:            /*goto IL_000b;*/goto IL_0095;                              //br				IL_000b
	IL_0095:            goto IL_0097;                                               //br.s				IL_0097
	IL_0097:            return;                                                     //ret

}
inline void Root::T_x86::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	Root::T_x53^ Temp_1 = nullptr;
	Root::T_x47^ Temp_2 = nullptr;
	Root::T_x47^ Temp_3 = nullptr;
	Root::T_x53^ Temp_4 = nullptr;
	Root::T_x54^ Temp_5 = nullptr;
	System::Xml::XmlDocument^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Root::T_x86::T_x1^ Temp_11 = nullptr;
	Root::T_x47^ Temp_12 = nullptr;
	Root::T_x53^ Temp_13 = nullptr;
	Root::T_x54^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	Root::T_x47^ Temp_16 = nullptr;
	Root::T_x53^ Temp_17 = nullptr;
	Root::T_x54^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	//local variables.
	System::Xml::XmlDocument^ V_0 = nullptr;
	Root::T_x86::T_x1^ V_1 = nullptr;
	System::Exception^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_4=13;                                                     //stloc				V_4
	IL_0009:            goto IL_0030;                                               //br.s				IL_0030
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_00e0;case 1:goto IL_005b;case 2:goto IL_0042;case 3:goto IL_0120;case 4:goto IL_00fb;case 5:goto IL_0140;case 6:goto IL_0110;};//switch				(IL_00e0,IL_005b,IL_0042,IL_0120,IL_00fb,IL_0140,IL_0110)
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldarg.1
	IL_0032:            this->F_x12=A_0;                                            //stfld				System::String^ Root::T_x86 F_x12
	IL_0037:                                                                        //ldc.i4				0x2
	IL_003c:            V_3=2;                                                      //stloc				V_3
	IL_0040:            /*goto IL_000b;*/goto IL_0042;                              //br.s				IL_000b
	IL_0042:                                                                        //ldarg.0
	IL_0043:            Temp_2=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0048:            if(Temp_2==nullptr)goto IL_0145;                            //brfalse				IL_0145
	IL_004d:            goto IL_0050;                                               //br.s				IL_0050
	IL_004f:                                                                        //break
	IL_0050:                                                                        //ldc.i4				0x1
	IL_0055:            V_3=1;                                                      //stloc				V_3
	IL_0059:            /*goto IL_000b;*/goto IL_005b;                              //br.s				IL_000b
	IL_005b:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_005B01:          try{
	IL_005d:            Temp_6=gcnew System::Xml::XmlDocument();                    //newobj				void System::Xml::XmlDocument::.ctor()
	IL_0062:            V_0=Temp_6;                                                 //stloc.0
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldstr				L"\x172A\x402C\x4A2E\x5C30\x5132\x5034\x4536\x0738"
	IL_0069:                                                                        //ldloc				V_4
	IL_006d:            Temp_7=a(L"\x172A\x402C\x4A2E\x5C30\x5132\x5034\x4536\x0738",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_8=this->F_x12;                                         //ldfld				System::String^ Root::T_x86 F_x12
	IL_0078:                                                                        //ldstr				L"\x172A\x022C\x422E\x5430\x5E32\x5734\x5236\x4B38\x053A"
	IL_007d:                                                                        //ldloc				V_4
	IL_0081:            Temp_9=a(L"\x172A\x022C\x422E\x5430\x5E32\x5734\x5236\x4B38\x053A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:            Temp_10=System::String::Concat(Temp_7,Temp_8,Temp_9);       //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_008b:            V_0->LoadXml(Temp_10);                                      //callvirt				void System::Xml::XmlDocument::LoadXml(System::String^)
	IL_0090:                                                                        //ldloc.0
	IL_0091:            Temp_11=gcnew Root::T_x86::T_x1(V_0);                       //newobj				void Root::T_x86::T_x1::.ctor(System::Xml::XmlDocument^)
	IL_0096:            V_1=Temp_11;                                                //stloc.1
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_12=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_009d:            Temp_13=Temp_12->M_x4();                                    //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_00a2:            Temp_14=Temp_13->M_x1();                                    //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_00a7:                                                                        //ldloc.1
	IL_00a8:            Temp_15=V_1->M_x2();                                        //callvirt				System::String^ Root::T_x86::T_x1::M_x2()
	IL_00ad:            Temp_14->M_x1(Temp_15);                                     //callvirt				void Root::T_x54::M_x1(System::String^)
	IL_00b2:            goto IL_00fd;                                               //leave.s				IL_00fd
	                    ;}
	                    catch(System::Exception^ Ex_00B202){
	IL_00b4:            V_2=Ex_00B202;                                              //stloc.2
	IL_00b5:                                                                        //ldarg.0
	IL_00b6:            Temp_16=this->F_x2;                                         //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_00bb:            Temp_17=Temp_16->M_x4();                                    //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_00c0:            Temp_18=Temp_17->M_x1();                                    //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_00c5:                                                                        //ldloc.2
	IL_00c6:            Temp_19=V_2->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_00cb:            Temp_18->M_x1(Temp_19);                                     //callvirt				void Root::T_x54::M_x1(System::String^)
	IL_00d0:            goto IL_00fd;                                               //leave.s				IL_00fd
	                    ;}
	IL_00d2:                                                                        //ldc.i4				0x0
	IL_00d7:            V_3=0;                                                      //stloc				V_3
	IL_00db:            /*goto IL_000b;*/goto IL_00e0;                              //br				IL_000b
	IL_00e0:                                                                        //ldarg.0
	IL_00e1:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_00e6:            Temp_1=Temp_0->M_x4();                                      //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_00eb:            if(Temp_1==nullptr)goto IL_0145;                            //brfalse.s				IL_0145
	IL_00ed:                                                                        //ldc.i4				0x4
	IL_00f2:            V_3=4;                                                      //stloc				V_3
	IL_00f6:            /*goto IL_000b;*/goto IL_00fb;                              //br				IL_000b
	IL_00fb:            goto IL_0112;                                               //br.s				IL_0112
	IL_00fd:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0102:                                                                        //ldc.i4				0x6
	IL_0107:            V_3=6;                                                      //stloc				V_3
	IL_010b:            /*goto IL_000b;*/goto IL_0110;                              //br				IL_000b
	IL_0110:            goto IL_0145;                                               //br.s				IL_0145
	IL_0112:                                                                        //ldc.i4				0x3
	IL_0117:            V_3=3;                                                      //stloc				V_3
	IL_011b:            /*goto IL_000b;*/goto IL_0120;                              //br				IL_000b
	IL_0120:                                                                        //ldarg.0
	IL_0121:            Temp_3=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0126:            Temp_4=Temp_3->M_x4();                                      //callvirt				Root::T_x53^ Root::T_x47::M_x4()
	IL_012b:            Temp_5=Temp_4->M_x1();                                      //callvirt				Root::T_x54^ Root::T_x53::M_x1()
	IL_0130:            if(Temp_5==nullptr)goto IL_0145;                            //brfalse.s				IL_0145
	IL_0132:                                                                        //ldc.i4				0x5
	IL_0137:            V_3=5;                                                      //stloc				V_3
	IL_013b:            /*goto IL_000b;*/goto IL_0140;                              //br				IL_000b
	IL_0140:            /*goto IL_005d;*/goto IL_005B01;                            //br				IL_005d
	IL_0145:            return;                                                     //ret

}
inline void Root::T_x86::M_x1(Root::T_x84^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x85^ Temp_0 = nullptr;
	Root::T_x85^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void Root::T_x85::Invoke(System::Object^,Root::T_x84^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x86::M_x1(Root::T_x85^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x85^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x85
	IL_0012:            this->F_x1=safe_cast<Root::T_x85^>(Temp_1);                 //stfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x86::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0006:            Temp_0->M_x9();                                             //callvirt				void Root::T_x47::M_x9()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x86::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x47^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Root::T_x47^ Root::T_x86 F_x2
	IL_0006:            Temp_0->M_x12();                                            //callvirt				void Root::T_x47::M_x12()
	IL_000b:            return;                                                     //ret

}
inline void Root::T_x86::M_x2(Root::T_x85^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x85^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				Root::T_x85
	IL_0012:            this->F_x1=safe_cast<Root::T_x85^>(Temp_1);                 //stfld				Root::T_x85^ Root::T_x86 F_x1
	IL_0017:            return;                                                     //ret

}
inline Root::T_x86::T_x1::T_x1(System::Xml::XmlDocument^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0006:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_000b:            this->F_x1=safe_cast<System::IO::TextWriter^>(Temp_1);      //stfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0016:                                                                        //ldarg.0
	IL_0017:                                                                        //ldarg.1
	IL_0018:            this->F_x2=A_0;                                             //stfld				System::Xml::XmlDocument^ Root::T_x86::T_x1 F_x2
	IL_001d:            return;                                                     //ret

}
inline void Root::T_x86::T_x1::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Xml::XmlDocument^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_0=14;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_0=this->F_x2;                                          //ldfld				System::Xml::XmlDocument^ Root::T_x86::T_x1 F_x2
	IL_0010:                                                                        //ldstr				L"\x412B\x4B2D\x5D2F\x5031\x5133\x4435"
	IL_0015:                                                                        //ldloc				V_0
	IL_0019:            Temp_1=a(L"\x412B\x4B2D\x5D2F\x5031\x5133\x4435",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001e:            this->M_x12(safe_cast<System::Xml::XmlNode^>(Temp_0),Temp_1);//call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0023:            return;                                                     //ret

}
inline System::String^ Root::T_x86::T_x1::M_x1(System::String^ A_0)
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
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_0=10;                                                     //stloc				V_0
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldstr				L"\x0E27"
	IL_0012:                                                                        //ldloc				V_0
	IL_0016:            Temp_0=a(L"\x0E27",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_001b:                                                                        //ldstr				L"\x0E27\x4B29\x412B\x5E2D\x0B2F"
	IL_0020:                                                                        //ldloc				V_0
	IL_0024:            Temp_1=a(L"\x0E27\x4B29\x412B\x5E2D\x0B2F",V_0);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0029:            Temp_2=A_0->Replace(Temp_0,Temp_1);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_002e:            A_0=Temp_2;                                                 //starg.s				A_0
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldstr				L"\x1427"
	IL_0036:                                                                        //ldloc				V_0
	IL_003a:            Temp_3=a(L"\x1427",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003f:                                                                        //ldstr				L"\x0E27\x4629\x582B\x152D"
	IL_0044:                                                                        //ldloc				V_0
	IL_0048:            Temp_4=a(L"\x0E27\x4629\x582B\x152D",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:            Temp_5=A_0->Replace(Temp_3,Temp_4);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0052:            A_0=Temp_5;                                                 //starg.s				A_0
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldstr				L"\x1627"
	IL_005a:                                                                        //ldloc				V_0
	IL_005e:            Temp_6=a(L"\x1627",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldstr				L"\x0E27\x4D29\x582B\x152D"
	IL_0068:                                                                        //ldloc				V_0
	IL_006c:            Temp_7=a(L"\x0E27\x4D29\x582B\x152D",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0071:            Temp_8=A_0->Replace(Temp_6,Temp_7);                         //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_0076:            A_0=Temp_8;                                                 //starg.s				A_0
	IL_0078:                                                                        //ldarg.0
	IL_0079:                                                                        //ldstr				L"\x0F27"
	IL_007e:                                                                        //ldloc				V_0
	IL_0082:            Temp_9=a(L"\x0F27",V_0);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0087:                                                                        //ldstr				L"\x0E27\x4B29\x5C2B\x412D\x432F\x0931"
	IL_008c:                                                                        //ldloc				V_0
	IL_0090:            Temp_10=a(L"\x0E27\x4B29\x5C2B\x412D\x432F\x0931",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0095:            Temp_11=A_0->Replace(Temp_9,Temp_10);                       //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_009a:            A_0=Temp_11;                                                //starg.s				A_0
	IL_009c:                                                                        //ldarg.0
	IL_009d:                                                                        //ldstr				L"\x0A27"
	IL_00a2:                                                                        //ldloc				V_0
	IL_00a6:            Temp_12=a(L"\x0A27",V_0);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ab:                                                                        //ldstr				L"\x0E27\x5B29\x592B\x412D\x442F\x0931"
	IL_00b0:                                                                        //ldloc				V_0
	IL_00b4:            Temp_13=a(L"\x0E27\x5B29\x592B\x412D\x442F\x0931",V_0);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b9:            Temp_14=A_0->Replace(Temp_12,Temp_13);                      //callvirt				System::String^ System::String::Replace(System::String^,System::String^)
	IL_00be:            A_0=Temp_14;                                                //starg.s				A_0
	IL_00c0:                                                                        //ldarg.0
	IL_00c1:            return A_0;                                                 //ret

}
inline void Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::TextWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::IO::TextWriter^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::TextWriter^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::IO::TextWriter^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::IO::TextWriter^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_13 = nullptr;
	System::IO::TextWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::Int32 Temp_17 = 0;
	System::IO::TextWriter^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::IO::TextWriter^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::IO::TextWriter^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	System::Int32 Temp_25 = 0;
	System::IO::TextWriter^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_29 = nullptr;
	System::Int32 Temp_30 = 0;
	System::IO::TextWriter^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_34 = nullptr;
	System::Int32 Temp_35 = 0;
	System::String^ Temp_36 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::IO::TextWriter^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::IO::TextWriter^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::IO::TextWriter^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_50 = nullptr;
	System::Int32 Temp_51 = 0;
	System::IO::TextWriter^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_57 = nullptr;
	System::Int32 Temp_58 = 0;
	System::IO::TextWriter^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_62 = nullptr;
	System::Int32 Temp_63 = 0;
	System::Int32 Temp_64 = 0;
	System::String^ Temp_65 = nullptr;
	System::IO::TextWriter^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::String^ Temp_68 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::IO::TextWriter^ Temp_71 = nullptr;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_74 = nullptr;
	System::IO::TextWriter^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::Int32 Temp_77 = 0;
	System::Int32 Temp_78 = 0;
	System::String^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::String^ Temp_81 = nullptr;
	//local variables.
	System::Xml::XmlElement^ V_0 = nullptr;
	System::Xml::XmlElement^ V_1 = nullptr;
	System::Xml::XmlElement^ V_2 = nullptr;
	System::Xml::XmlElement^ V_3 = nullptr;
	System::Xml::XmlElement^ V_4 = nullptr;
	System::Xml::XmlElement^ V_5 = nullptr;
	System::Xml::XmlElement^ V_6 = nullptr;
	array<System::Xml::XmlNode^>^ V_7 = nullptr;
	array<System::Xml::XmlNode^>^ V_8 = nullptr;
	System::Xml::XmlElement^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Xml::XmlElement^ V_11 = nullptr;
	System::Xml::XmlElement^ V_12 = nullptr;
	System::String^ V_13 = nullptr;
	array<System::Xml::XmlNode^>^ V_14 = nullptr;
	System::Int32 V_15 = 0;
	array<System::Xml::XmlNode^>^ V_16 = nullptr;
	System::Int32 V_17 = 0;
	System::Int32 V_18 = 0;
	System::Int32 V_19 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_19=1;                                                     //stloc				V_19
	IL_0009:                                                                        //ldc.i4				0x12
	IL_000e:            V_18=18;                                                    //stloc				V_18
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_0102;                                               //br				IL_0102
	IL_0019:                                                                        //ldloc				V_18
	IL_001d:            switch(V_18){case 0:goto IL_025c;case 1:goto IL_0707;case 2:goto IL_01a5;case 3:goto IL_05f7;case 4:goto IL_047c;case 5:goto IL_059f;case 6:goto IL_05cb;case 7:goto IL_06e4;case 8:goto IL_075c;case 9:goto IL_0423;case 10:goto IL_0320;case 11:goto IL_0463;case 12:goto IL_06c8;case 13:goto IL_07ed;case 14:goto IL_0934;case 15:goto IL_094a;case 16:goto IL_051b;case 17:goto IL_0230;case 18:goto IL_0014;case 19:goto IL_09c4;case 20:goto IL_071a;case 21:goto IL_0746;case 22:goto IL_0534;case 23:goto IL_034c;case 24:goto IL_0733;case 25:goto IL_0856;case 26:goto IL_01be;case 27:goto IL_0376;case 28:goto IL_0820;case 29:goto IL_03a1;case 30:goto IL_0450;case 31:goto IL_0339;case 32:goto IL_02f3;case 33:goto IL_0192;case 34:goto IL_0647;case 35:goto IL_0586;case 36:goto IL_04a9;case 37:goto IL_0866;case 38:goto IL_06ad;case 39:goto IL_03f1;case 40:goto IL_08f7;case 41:goto IL_07bb;case 42:goto IL_08b1;case 43:goto IL_0833;case 44:goto IL_07fd;case 45:goto IL_0924;case 46:goto IL_0576;case 47:goto IL_0142;case 48:goto IL_02a1;case 49:goto IL_078e;case 50:goto IL_087f;case 51:goto IL_021d;case 52:goto IL_0243;case 53:goto IL_0508;case 54:goto IL_05de;case 55:goto IL_04ee;};//switch				(IL_025c,IL_0707,IL_01a5,IL_05f7,IL_047c,IL_059f,IL_05cb,IL_06e4,IL_075c,IL_0423,IL_0320,IL_0463,IL_06c8,IL_07ed,IL_0934,IL_094a,IL_051b,IL_0230,IL_0014,IL_09c4,IL_071a,IL_0746,IL_0534,IL_034c,IL_0733,IL_0856,IL_01be,IL_0376,IL_0820,IL_03a1,IL_0450,IL_0339,IL_02f3,IL_0192,IL_0647,IL_0586,IL_04a9,IL_0866,IL_06ad,IL_03f1,IL_08f7,IL_07bb,IL_08b1,IL_0833,IL_07fd,IL_0924,IL_0576,IL_0142,IL_02a1,IL_078e,IL_087f,IL_021d,IL_0243,IL_0508,IL_05de,IL_04ee)
	IL_0102:                                                                        //ldstr				L"\x6B1E\x4020\x4122\x4924\x4226"
	IL_0107:                                                                        //ldloc				V_19
	IL_010b:            Temp_79=a(L"\x6B1E\x4020\x4122\x4924\x4226",V_19);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0110:                                                                        //ldstr				L"\x7D1E\x5420\x4F22\x4924\x4226\x5D28"
	IL_0115:                                                                        //ldloc				V_19
	IL_0119:            Temp_80=a(L"\x7D1E\x5420\x4F22\x4924\x4226\x5D28",V_19);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011e:                                                                        //ldstr				L"\x711E\x5420\x4E22\x4724\x4226\x5B28"
	IL_0123:                                                                        //ldloc				V_19
	IL_0127:            Temp_81=a(L"\x711E\x5420\x4E22\x4724\x4226\x5B28",V_19);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012c:            goto IL_033e;                                               //leave				IL_033e
	IL_0131:                                                                        //ldc.i4.0
	IL_0132:            V_10=0;                                                     //stloc.s				V_10
	IL_0134:                                                                        //ldc.i4				0x2f
	IL_0139:            V_18=47;                                                    //stloc				V_18
	IL_013d:            /*goto IL_0019;*/goto IL_0142;                              //br				IL_0019
	IL_0142:            goto IL_0455;                                               //br				IL_0455
	IL_0147:                                                                        //ldc.i4.5
	IL_0148:                                                                        //dup
	IL_0149:                                                                        //dup
	IL_014a:                                                                        //ldc.i4.6
	IL_014b:                                                                        //add
	IL_014c:                                                                        //bgt				IL_0148
	IL_0151:                                                                        //pop
	IL_0152:                                                                        //ldarg.0
	IL_0153:            Temp_66=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0158:                                                                        //ldstr				L"\x231E\x5420\x4F22\x0524\x5326\x5028\x5B2A\x482C\x122E\x1630\x5732\x5C34\x4436\x5A38\x1C3A\x033C"
	IL_015d:                                                                        //ldloc				V_19
	IL_0161:            Temp_67=a(L"\x231E\x5420\x4F22\x0524\x5326\x5028\x5B2A\x482C\x122E\x1630\x5732\x5C34\x4436\x5A38\x1C3A\x033C",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0166:            Temp_66->Write(Temp_67);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_016b:                                                                        //ldarg.1
	IL_016c:                                                                        //ldstr				L"\x761E\x5520\x4622\x4824"
	IL_0171:                                                                        //ldloc				V_19
	IL_0175:            Temp_68=a(L"\x761E\x5520\x4622\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017a:            Temp_69=Root::T_x86::T_x1::M_x1(A_0,Temp_68);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_017f:            V_14=Temp_69;                                               //stloc.s				V_14
	IL_0181:                                                                        //ldc.i4.0
	IL_0182:            V_15=0;                                                     //stloc.s				V_15
	IL_0184:                                                                        //ldc.i4				0x21
	IL_0189:            V_18=33;                                                    //stloc				V_18
	IL_018d:            /*goto IL_0019;*/goto IL_0192;                              //br				IL_0019
	IL_0192:            goto IL_0578;                                               //br				IL_0578
	IL_0197:                                                                        //ldc.i4				0x2
	IL_019c:            V_18=2;                                                     //stloc				V_18
	IL_01a0:            /*goto IL_0019;*/goto IL_01a5;                              //br				IL_0019
	IL_01a5:                                                                        //ldloc.s				V_17
	IL_01a7:                                                                        //ldloc.s				V_16
	IL_01a9:            Temp_2=V_16->Length;                                        //ldlen
	IL_01aa:                                                                        //conv.i4
	IL_01ab:            if(V_17<Temp_2)goto IL_037b;                                //blt				IL_037b
	IL_01b0:                                                                        //ldc.i4				0x1a
	IL_01b5:            V_18=26;                                                    //stloc				V_18
	IL_01b9:            /*goto IL_0019;*/goto IL_01be;                              //br				IL_0019
	IL_01be:            goto IL_0536;                                               //br				IL_0536
	IL_01c3:                                                                        //ldarg.0
	IL_01c4:            Temp_7=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01c9:                                                                        //ldstr				L"\x231E\x0E20\x5622\x4924\x1926"
	IL_01ce:                                                                        //ldloc				V_19
	IL_01d2:            Temp_8=a(L"\x231E\x0E20\x5622\x4924\x1926",V_19);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d7:            Temp_7->Write(Temp_8);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01dc:            return;                                                     //ret
	IL_01dd:                                                                        //ldarg.0
	IL_01de:            Temp_10=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01e3:                                                                        //ldstr				L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x4E2C\x4A2E\x5D30\x5F32\x4634\x4736\x5838\x583A\x543C\x513E\x2640\x7E42\x6244\x7746\x6E48\x6B4A\x2E4C\x234E\x3050\x2052\x2654\x6A56\x7E58\x285A\x295C\x3E5E\x0F60\x0762\x0464\x1566\x0D68\x4C6A\x536C"
	IL_01e8:                                                                        //ldloc				V_19
	IL_01ec:            Temp_11=a(L"\x231E\x5520\x4222\x4724\x4B26\x4C28\x0B2A\x4E2C\x4A2E\x5D30\x5F32\x4634\x4736\x5838\x583A\x543C\x513E\x2640\x7E42\x6244\x7746\x6E48\x6B4A\x2E4C\x234E\x3050\x2052\x2654\x6A56\x7E58\x285A\x295C\x3E5E\x0F60\x0762\x0464\x1566\x0D68\x4C6A\x536C",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f1:            Temp_10->Write(Temp_11);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01f6:                                                                        //ldarg.1
	IL_01f7:                                                                        //ldstr				L"\x731E\x4820\x5022\x5124\x4F26\x4C28\x4A2A\x492C\x4A2E\x4330"
	IL_01fc:                                                                        //ldloc				V_19
	IL_0200:            Temp_12=a(L"\x731E\x4820\x5022\x5124\x4F26\x4C28\x4A2A\x492C\x4A2E\x4330",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0205:            Temp_13=Root::T_x86::T_x1::M_x1(A_0,Temp_12);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_020a:            V_14=Temp_13;                                               //stloc.s				V_14
	IL_020c:                                                                        //ldc.i4.0
	IL_020d:            V_15=0;                                                     //stloc.s				V_15
	IL_020f:                                                                        //ldc.i4				0x33
	IL_0214:            V_18=51;                                                    //stloc				V_18
	IL_0218:            /*goto IL_0019;*/goto IL_021d;                              //br				IL_0019
	IL_021d:            goto IL_050d;                                               //br				IL_050d
	IL_0222:                                                                        //ldc.i4				0x11
	IL_0227:            V_18=17;                                                    //stloc				V_18
	IL_022b:            /*goto IL_0019;*/goto IL_0230;                              //br				IL_0019
	IL_0230:            goto IL_0761;                                               //br				IL_0761
	IL_0235:                                                                        //ldc.i4				0x34
	IL_023a:            V_18=52;                                                    //stloc				V_18
	IL_023e:            /*goto IL_0019;*/goto IL_0243;                              //br				IL_0019
	IL_0243:                                                                        //ldloc.s				V_17
	IL_0245:                                                                        //ldloc.s				V_16
	IL_0247:            Temp_77=V_16->Length;                                       //ldlen
	IL_0248:                                                                        //conv.i4
	IL_0249:            if(V_17<Temp_77)goto IL_0428;                               //blt				IL_0428
	IL_024e:                                                                        //ldc.i4				0x0
	IL_0253:            V_18=0;                                                     //stloc				V_18
	IL_0257:            /*goto IL_0019;*/goto IL_025c;                              //br				IL_0019
	IL_025c:            goto IL_07c0;                                               //br				IL_07c0
	IL_0261:                                                                        //ldarg.0
	IL_0262:            Temp_40=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0267:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C"
	IL_026c:                                                                        //ldloc				V_19
	IL_0270:            Temp_41=a(L"\x231E\x0E20\x5722\x4424\x4526\x4528\x4E2A\x132C",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0275:            Temp_40->Write(Temp_41);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_027a:            return;                                                     //ret
	IL_027b:                                                                        //ldloc.s				V_16
	IL_027d:                                                                        //ldloc.s				V_17
	IL_027f:                                                                        //ldelem.ref
	IL_0280:                                                                        //castclass				System::Xml::XmlElement
	IL_0285:            V_2=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);        //stloc.2
	IL_0286:                                                                        //ldarg.0
	IL_0287:                                                                        //ldloc.2
	IL_0288:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_2));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_028d:                                                                        //ldloc.s				V_17
	IL_028f:                                                                        //ldc.i4.1
	IL_0290:                                                                        //add
	IL_0291:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_0293:                                                                        //ldc.i4				0x30
	IL_0298:            V_18=48;                                                    //stloc				V_18
	IL_029c:            /*goto IL_0019;*/goto IL_02a1;                              //br				IL_0019
	IL_02a1:            goto IL_05d0;                                               //br				IL_05d0
	IL_02a6:                                                                        //ldloc.s				V_14
	IL_02a8:                                                                        //ldloc.s				V_15
	IL_02aa:                                                                        //ldelem.ref
	IL_02ab:                                                                        //castclass				System::Xml::XmlElement
	IL_02b0:            V_11=safe_cast<System::Xml::XmlElement^>(V_14[V_15]);       //stloc.s				V_11
	IL_02b2:                                                                        //ldarg.0
	IL_02b3:            Temp_59=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02b8:                                                                        //ldstr				L"\x231E\x4D20\x4A22\x1B24"
	IL_02bd:                                                                        //ldloc				V_19
	IL_02c1:            Temp_60=a(L"\x231E\x4D20\x4A22\x1B24",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c6:            Temp_59->Write(Temp_60);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02cb:                                                                        //ldloc.s				V_11
	IL_02cd:                                                                        //ldstr				L"\x6B1E\x4420\x5122\x4824"
	IL_02d2:                                                                        //ldloc				V_19
	IL_02d6:            Temp_61=a(L"\x6B1E\x4420\x5122\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02db:            Temp_62=Root::T_x86::T_x1::M_x1(V_11,Temp_61);              //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_02e0:            V_16=Temp_62;                                               //stloc.s				V_16
	IL_02e2:                                                                        //ldc.i4.0
	IL_02e3:            V_17=0;                                                     //stloc.s				V_17
	IL_02e5:                                                                        //ldc.i4				0x20
	IL_02ea:            V_18=32;                                                    //stloc				V_18
	IL_02ee:            /*goto IL_0019;*/goto IL_02f3;                              //br				IL_0019
	IL_02f3:            goto IL_0235;                                               //br				IL_0235
	IL_02f8:                                                                        //ldarg.0
	IL_02f9:            Temp_75=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02fe:                                                                        //ldstr				L"\x231E\x0E20\x4C22\x4924\x1926"
	IL_0303:                                                                        //ldloc				V_19
	IL_0307:            Temp_76=a(L"\x231E\x0E20\x4C22\x4924\x1926",V_19);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_030c:            Temp_75->Write(Temp_76);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0311:            return;                                                     //ret
	IL_0312:                                                                        //ldc.i4				0xa
	IL_0317:            V_18=10;                                                    //stloc				V_18
	IL_031b:            /*goto IL_0019;*/goto IL_0320;                              //br				IL_0019
	IL_0320:                                                                        //ldloc.s				V_17
	IL_0322:                                                                        //ldloc.s				V_16
	IL_0324:            Temp_16=V_16->Length;                                       //ldlen
	IL_0325:                                                                        //conv.i4
	IL_0326:            if(V_17<Temp_16)goto IL_0481;                               //blt				IL_0481
	IL_032b:                                                                        //ldc.i4				0x1f
	IL_0330:            V_18=31;                                                    //stloc				V_18
	IL_0334:            /*goto IL_0019;*/goto IL_0339;                              //br				IL_0019
	IL_0339:            goto IL_04ae;                                               //br				IL_04ae
	IL_033e:                                                                        //ldc.i4				0x17
	IL_0343:            V_18=23;                                                    //stloc				V_18
	IL_0347:            /*goto IL_0019;*/goto IL_034c;                              //br				IL_0019
	IL_034c:                                                                        //ldarg.1
	IL_034d:                                                                        //ldstr				L"\x5F1E\x5520\x5A22\x5524\x4226"
	IL_0352:                                                                        //ldloc				V_19
	IL_0356:            Temp_38=a(L"\x5F1E\x5520\x5A22\x5524\x4226",V_19);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_035b:            Temp_39=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_38);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0360:                                                                        //dup
	IL_0361:            V_13=Temp_39;                                               //stloc.s				V_13
	IL_0363:            if(V_13==nullptr)goto IL_09c9;                              //brfalse				IL_09c9
	IL_0368:                                                                        //ldc.i4				0x1b
	IL_036d:            V_18=27;                                                    //stloc				V_18
	IL_0371:            /*goto IL_0019;*/goto IL_0376;                              //br				IL_0019
	IL_0376:            goto IL_06cd;                                               //br				IL_06cd
	IL_037b:                                                                        //ldloc.s				V_16
	IL_037d:                                                                        //ldloc.s				V_17
	IL_037f:                                                                        //ldelem.ref
	IL_0380:                                                                        //castclass				System::Xml::XmlElement
	IL_0385:            V_1=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);        //stloc.1
	IL_0386:                                                                        //ldarg.0
	IL_0387:                                                                        //ldloc.1
	IL_0388:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_038d:                                                                        //ldloc.s				V_17
	IL_038f:                                                                        //ldc.i4.1
	IL_0390:                                                                        //add
	IL_0391:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_0393:                                                                        //ldc.i4				0x1d
	IL_0398:            V_18=29;                                                    //stloc				V_18
	IL_039c:            /*goto IL_0019;*/goto IL_03a1;                              //br				IL_0019
	IL_03a1:            goto IL_0197;                                               //br				IL_0197
	IL_03a6:                                                                        //ldloc.s				V_14
	IL_03a8:                                                                        //ldloc.s				V_15
	IL_03aa:                                                                        //ldelem.ref
	IL_03ab:                                                                        //castclass				System::Xml::XmlElement
	IL_03b0:            V_0=safe_cast<System::Xml::XmlElement^>(V_14[V_15]);        //stloc.0
	IL_03b1:                                                                        //ldarg.0
	IL_03b2:            Temp_26=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03b7:                                                                        //ldstr				L"\x231E\x5520\x5122\x1B24\x1B26\x5D28\x432A\x132C"
	IL_03bc:                                                                        //ldloc				V_19
	IL_03c0:            Temp_27=a(L"\x231E\x5520\x5122\x1B24\x1B26\x5D28\x432A\x132C",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c5:            Temp_26->Write(Temp_27);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03ca:                                                                        //ldloc.0
	IL_03cb:                                                                        //ldstr				L"\x6B1E\x4420\x5122\x4824"
	IL_03d0:                                                                        //ldloc				V_19
	IL_03d4:            Temp_28=a(L"\x6B1E\x4420\x5122\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d9:            Temp_29=Root::T_x86::T_x1::M_x1(V_0,Temp_28);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_03de:            V_16=Temp_29;                                               //stloc.s				V_16
	IL_03e0:                                                                        //ldc.i4.0
	IL_03e1:            V_17=0;                                                     //stloc.s				V_17
	IL_03e3:                                                                        //ldc.i4				0x27
	IL_03e8:            V_18=39;                                                    //stloc				V_18
	IL_03ec:            /*goto IL_0019;*/goto IL_03f1;                              //br				IL_0019
	IL_03f1:            goto IL_0197;                                               //br				IL_0197
	IL_03f6:                                                                        //ldarg.0
	IL_03f7:            Temp_3=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03fc:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4D24\x1926\x1528\x042A\x592C\x5D2E\x0F30"
	IL_0401:                                                                        //ldloc				V_19
	IL_0405:            Temp_4=a(L"\x231E\x0E20\x5722\x4D24\x1926\x1528\x042A\x592C\x5D2E\x0F30",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040a:            Temp_3->Write(Temp_4);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_040f:                                                                        //ldloc.s				V_15
	IL_0411:                                                                        //ldc.i4.1
	IL_0412:                                                                        //add
	IL_0413:            V_15=(V_15 + 1);                                            //stloc.s				V_15
	IL_0415:                                                                        //ldc.i4				0x9
	IL_041a:            V_18=9;                                                     //stloc				V_18
	IL_041e:            /*goto IL_0019;*/goto IL_0423;                              //br				IL_0019
	IL_0423:            goto IL_050d;                                               //br				IL_050d
	IL_0428:                                                                        //ldloc.s				V_16
	IL_042a:                                                                        //ldloc.s				V_17
	IL_042c:                                                                        //ldelem.ref
	IL_042d:                                                                        //castclass				System::Xml::XmlElement
	IL_0432:            V_12=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);       //stloc.s				V_12
	IL_0434:                                                                        //ldarg.0
	IL_0435:                                                                        //ldloc.s				V_12
	IL_0437:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_12));         //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_043c:                                                                        //ldloc.s				V_17
	IL_043e:                                                                        //ldc.i4.1
	IL_043f:                                                                        //add
	IL_0440:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_0442:                                                                        //ldc.i4				0x1e
	IL_0447:            V_18=30;                                                    //stloc				V_18
	IL_044b:            /*goto IL_0019;*/goto IL_0450;                              //br				IL_0019
	IL_0450:            goto IL_0235;                                               //br				IL_0235
	IL_0455:                                                                        //ldc.i4				0xb
	IL_045a:            V_18=11;                                                    //stloc				V_18
	IL_045e:            /*goto IL_0019;*/goto IL_0463;                              //br				IL_0019
	IL_0463:                                                                        //ldloc.s				V_10
	IL_0465:                                                                        //ldloc.s				V_7
	IL_0467:            Temp_17=V_7->Length;                                        //ldlen
	IL_0468:                                                                        //conv.i4
	IL_0469:            if(V_10<Temp_17)goto IL_094f;                               //blt				IL_094f
	IL_046e:                                                                        //ldc.i4				0x4
	IL_0473:            V_18=4;                                                     //stloc				V_18
	IL_0477:            /*goto IL_0019;*/goto IL_047c;                              //br				IL_0019
	IL_047c:            goto IL_0761;                                               //br				IL_0761
	IL_0481:                                                                        //ldloc.s				V_16
	IL_0483:                                                                        //ldloc.s				V_17
	IL_0485:                                                                        //ldelem.ref
	IL_0486:                                                                        //castclass				System::Xml::XmlElement
	IL_048b:            V_4=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);        //stloc.s				V_4
	IL_048d:                                                                        //ldarg.0
	IL_048e:                                                                        //ldloc.s				V_4
	IL_0490:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_4));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0495:                                                                        //ldloc.s				V_17
	IL_0497:                                                                        //ldc.i4.1
	IL_0498:                                                                        //add
	IL_0499:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_049b:                                                                        //ldc.i4				0x24
	IL_04a0:            V_18=36;                                                    //stloc				V_18
	IL_04a4:            /*goto IL_0019;*/goto IL_04a9;                              //br				IL_0019
	IL_04a9:            goto IL_0312;                                               //br				IL_0312
	IL_04ae:                                                                        //ldarg.0
	IL_04af:            Temp_47=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_04b4:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4124\x1926\x1528\x5F2A\x492C\x112E"
	IL_04b9:                                                                        //ldloc				V_19
	IL_04bd:            Temp_48=a(L"\x231E\x0E20\x5722\x4124\x1926\x1528\x5F2A\x492C\x112E",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c2:            Temp_47->Write(Temp_48);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_04c7:                                                                        //ldloc.3
	IL_04c8:                                                                        //ldstr				L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32"
	IL_04cd:                                                                        //ldloc				V_19
	IL_04d1:            Temp_49=a(L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04d6:            Temp_50=Root::T_x86::T_x1::M_x1(V_3,Temp_49);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_04db:            V_16=Temp_50;                                               //stloc.s				V_16
	IL_04dd:                                                                        //ldc.i4.0
	IL_04de:            V_17=0;                                                     //stloc.s				V_17
	IL_04e0:                                                                        //ldc.i4				0x37
	IL_04e5:            V_18=55;                                                    //stloc				V_18
	IL_04e9:            /*goto IL_0019;*/goto IL_04ee;                              //br				IL_0019
	IL_04ee:            goto IL_0738;                                               //br				IL_0738
	IL_04f3:                                                                        //ldloc.s				V_7
	IL_04f5:            V_16=V_7;                                                   //stloc.s				V_16
	IL_04f7:                                                                        //ldc.i4.0
	IL_04f8:            V_17=0;                                                     //stloc.s				V_17
	IL_04fa:                                                                        //ldc.i4				0x35
	IL_04ff:            V_18=53;                                                    //stloc				V_18
	IL_0503:            /*goto IL_0019;*/goto IL_0508;                              //br				IL_0019
	IL_0508:            goto IL_0926;                                               //br				IL_0926
	IL_050d:                                                                        //ldc.i4				0x10
	IL_0512:            V_18=16;                                                    //stloc				V_18
	IL_0516:            /*goto IL_0019;*/goto IL_051b;                              //br				IL_0019
	IL_051b:                                                                        //ldloc.s				V_15
	IL_051d:                                                                        //ldloc.s				V_14
	IL_051f:            Temp_25=V_14->Length;                                       //ldlen
	IL_0520:                                                                        //conv.i4
	IL_0521:            if(V_15<Temp_25)goto IL_03a6;                               //blt				IL_03a6
	IL_0526:                                                                        //ldc.i4				0x16
	IL_052b:            V_18=22;                                                    //stloc				V_18
	IL_052f:            /*goto IL_0019;*/goto IL_0534;                              //br				IL_0019
	IL_0534:            goto IL_05a4;                                               //br.s				IL_05a4
	IL_0536:                                                                        //ldarg.0
	IL_0537:            Temp_42=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_053c:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4D24\x1926\x1528\x5F2A\x452C\x112E"
	IL_0541:                                                                        //ldloc				V_19
	IL_0545:            Temp_43=a(L"\x231E\x0E20\x5722\x4D24\x1926\x1528\x5F2A\x452C\x112E",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_054a:            Temp_42->Write(Temp_43);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_054f:                                                                        //ldloc.0
	IL_0550:                                                                        //ldstr				L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32"
	IL_0555:                                                                        //ldloc				V_19
	IL_0559:            Temp_44=a(L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_055e:            Temp_45=Root::T_x86::T_x1::M_x1(V_0,Temp_44);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0563:            V_16=Temp_45;                                               //stloc.s				V_16
	IL_0565:                                                                        //ldc.i4.0
	IL_0566:            V_17=0;                                                     //stloc.s				V_17
	IL_0568:                                                                        //ldc.i4				0x2e
	IL_056d:            V_18=46;                                                    //stloc				V_18
	IL_0571:            /*goto IL_0019;*/goto IL_0576;                              //br				IL_0019
	IL_0576:            goto IL_05d0;                                               //br.s				IL_05d0
	IL_0578:                                                                        //ldc.i4				0x23
	IL_057d:            V_18=35;                                                    //stloc				V_18
	IL_0581:            /*goto IL_0019;*/goto IL_0586;                              //br				IL_0019
	IL_0586:                                                                        //ldloc.s				V_15
	IL_0588:                                                                        //ldloc.s				V_14
	IL_058a:            Temp_51=V_14->Length;                                       //ldlen
	IL_058b:                                                                        //conv.i4
	IL_058c:            if(V_15<Temp_51)goto IL_064c;                               //blt				IL_064c
	IL_0591:                                                                        //ldc.i4				0x5
	IL_0596:            V_18=5;                                                     //stloc				V_18
	IL_059a:            /*goto IL_0019;*/goto IL_059f;                              //br				IL_0019
	IL_059f:            goto IL_01c3;                                               //br				IL_01c3
	IL_05a4:                                                                        //ldarg.1
	IL_05a5:                                                                        //ldstr				L"\x761E\x5520\x4622\x4824"
	IL_05aa:                                                                        //ldloc				V_19
	IL_05ae:            Temp_36=a(L"\x761E\x5520\x4622\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b3:            Temp_37=Root::T_x86::T_x1::M_x1(A_0,Temp_36);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_05b8:            V_14=Temp_37;                                               //stloc.s				V_14
	IL_05ba:                                                                        //ldc.i4.0
	IL_05bb:            V_15=0;                                                     //stloc.s				V_15
	IL_05bd:                                                                        //ldc.i4				0x6
	IL_05c2:            V_18=6;                                                     //stloc				V_18
	IL_05c6:            /*goto IL_0019;*/goto IL_05cb;                              //br				IL_0019
	IL_05cb:            goto IL_070c;                                               //br				IL_070c
	IL_05d0:                                                                        //ldc.i4				0x36
	IL_05d5:            V_18=54;                                                    //stloc				V_18
	IL_05d9:            /*goto IL_0019;*/goto IL_05de;                              //br				IL_0019
	IL_05de:                                                                        //ldloc.s				V_17
	IL_05e0:                                                                        //ldloc.s				V_16
	IL_05e2:            Temp_78=V_16->Length;                                       //ldlen
	IL_05e3:                                                                        //conv.i4
	IL_05e4:            if(V_17<Temp_78)goto IL_027b;                               //blt				IL_027b
	IL_05e9:                                                                        //ldc.i4				0x3
	IL_05ee:            V_18=3;                                                     //stloc				V_18
	IL_05f2:            /*goto IL_0019;*/goto IL_05f7;                              //br				IL_0019
	IL_05f7:            goto IL_03f6;                                               //br				IL_03f6
	IL_05fc:                                                                        //ldloc.s				V_14
	IL_05fe:                                                                        //ldloc.s				V_15
	IL_0600:                                                                        //ldelem.ref
	IL_0601:                                                                        //castclass				System::Xml::XmlElement
	IL_0606:            V_3=safe_cast<System::Xml::XmlElement^>(V_14[V_15]);        //stloc.3
	IL_0607:                                                                        //ldarg.0
	IL_0608:            Temp_31=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_060d:                                                                        //ldstr				L"\x231E\x5520\x5122\x1B24\x1B26\x5D28\x4F2A\x132C"
	IL_0612:                                                                        //ldloc				V_19
	IL_0616:            Temp_32=a(L"\x231E\x5520\x5122\x1B24\x1B26\x5D28\x4F2A\x132C",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_061b:            Temp_31->Write(Temp_32);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0620:                                                                        //ldloc.3
	IL_0621:                                                                        //ldstr				L"\x6B1E\x4420\x5122\x4824"
	IL_0626:                                                                        //ldloc				V_19
	IL_062a:            Temp_33=a(L"\x6B1E\x4420\x5122\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062f:            Temp_34=Root::T_x86::T_x1::M_x1(V_3,Temp_33);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0634:            V_16=Temp_34;                                               //stloc.s				V_16
	IL_0636:                                                                        //ldc.i4.0
	IL_0637:            V_17=0;                                                     //stloc.s				V_17
	IL_0639:                                                                        //ldc.i4				0x22
	IL_063e:            V_18=34;                                                    //stloc				V_18
	IL_0642:            /*goto IL_0019;*/goto IL_0647;                              //br				IL_0019
	IL_0647:            goto IL_0312;                                               //br				IL_0312
	IL_064c:                                                                        //ldloc.s				V_14
	IL_064e:                                                                        //ldloc.s				V_15
	IL_0650:                                                                        //ldelem.ref
	IL_0651:                                                                        //castclass				System::Xml::XmlElement
	IL_0656:            V_6=safe_cast<System::Xml::XmlElement^>(V_14[V_15]);        //stloc.s				V_6
	IL_0658:                                                                        //ldarg.0
	IL_0659:            Temp_52=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_065e:                                                                        //ldstr				L"\x231E\x4D20\x4A22\x1B24"
	IL_0663:                                                                        //ldloc				V_19
	IL_0667:            Temp_53=a(L"\x231E\x4D20\x4A22\x1B24",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_066c:            Temp_52->Write(Temp_53);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0671:                                                                        //ldloc.s				V_6
	IL_0673:                                                                        //ldstr				L"\x6B1E\x4420\x5122\x4824"
	IL_0678:                                                                        //ldloc				V_19
	IL_067c:            Temp_54=a(L"\x6B1E\x4420\x5122\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0681:            Temp_55=Root::T_x86::T_x1::M_x1(V_6,Temp_54);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0686:            V_7=Temp_55;                                                //stloc.s				V_7
	IL_0688:                                                                        //ldloc.s				V_6
	IL_068a:                                                                        //ldstr				L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32"
	IL_068f:                                                                        //ldloc				V_19
	IL_0693:            Temp_56=a(L"\x7B1E\x4420\x5022\x4624\x5526\x4028\x5B2A\x592C\x462E\x5E30\x5D32",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0698:            Temp_57=Root::T_x86::T_x1::M_x1(V_6,Temp_56);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_069d:            V_8=Temp_57;                                                //stloc.s				V_8
	IL_069f:                                                                        //ldc.i4				0x26
	IL_06a4:            V_18=38;                                                    //stloc				V_18
	IL_06a8:            /*goto IL_0019;*/goto IL_06ad;                              //br				IL_0019
	IL_06ad:                                                                        //ldloc.s				V_7
	IL_06af:            Temp_63=V_7->Length;                                        //ldlen
	IL_06b0:                                                                        //conv.i4
	IL_06b1:                                                                        //ldloc.s				V_8
	IL_06b3:            Temp_64=V_8->Length;                                        //ldlen
	IL_06b4:                                                                        //conv.i4
	IL_06b5:            if(Temp_63==Temp_64)goto IL_0131;                           //beq				IL_0131
	IL_06ba:                                                                        //ldc.i4				0xc
	IL_06bf:            V_18=12;                                                    //stloc				V_18
	IL_06c3:            /*goto IL_0019;*/goto IL_06c8;                              //br				IL_0019
	IL_06c8:            goto IL_04f3;                                               //br				IL_04f3
	IL_06cd:                                                                        //ldloc.s				V_13
	IL_06cf:            Temp_46=System::String::IsInterned(V_13);                   //call				System::String^ System::String::IsInterned(System::String^)
	IL_06d4:            V_13=Temp_46;                                               //stloc.s				V_13
	IL_06d6:                                                                        //ldc.i4				0x7
	IL_06db:            V_18=7;                                                     //stloc				V_18
	IL_06df:            /*goto IL_0019;*/goto IL_06e4;                              //br				IL_0019
	IL_06e4:                                                                        //ldloc.s				V_13
	IL_06e6:                                                                        //ldstr				L"\x6B1E\x4020\x4122\x4924\x4226"
	IL_06eb:                                                                        //ldloc				V_19
	IL_06ef:            Temp_9=a(L"\x6B1E\x4020\x4122\x4924\x4226",V_19);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06f4:            if(V_13==Temp_9)goto IL_01dd;                               //beq				IL_01dd
	IL_06f9:                                                                        //ldc.i4				0x1
	IL_06fe:            V_18=1;                                                     //stloc				V_18
	IL_0702:            /*goto IL_0019;*/goto IL_0707;                              //br				IL_0019
	IL_0707:            goto IL_0825;                                               //br				IL_0825
	IL_070c:                                                                        //ldc.i4				0x14
	IL_0711:            V_18=20;                                                    //stloc				V_18
	IL_0715:            /*goto IL_0019;*/goto IL_071a;                              //br				IL_0019
	IL_071a:                                                                        //ldloc.s				V_15
	IL_071c:                                                                        //ldloc.s				V_14
	IL_071e:            Temp_30=V_14->Length;                                       //ldlen
	IL_071f:                                                                        //conv.i4
	IL_0720:            if(V_15<Temp_30)goto IL_05fc;                               //blt				IL_05fc
	IL_0725:                                                                        //ldc.i4				0x18
	IL_072a:            V_18=24;                                                    //stloc				V_18
	IL_072e:            /*goto IL_0019;*/goto IL_0733;                              //br				IL_0019
	IL_0733:            goto IL_0261;                                               //br				IL_0261
	IL_0738:                                                                        //ldc.i4				0x15
	IL_073d:            V_18=21;                                                    //stloc				V_18
	IL_0741:            /*goto IL_0019;*/goto IL_0746;                              //br				IL_0019
	IL_0746:                                                                        //ldloc.s				V_17
	IL_0748:                                                                        //ldloc.s				V_16
	IL_074a:            Temp_35=V_16->Length;                                       //ldlen
	IL_074b:                                                                        //conv.i4
	IL_074c:            if(V_17<Temp_35)goto IL_0793;                               //blt.s				IL_0793
	IL_074e:                                                                        //ldc.i4				0x8
	IL_0753:            V_18=8;                                                     //stloc				V_18
	IL_0757:            /*goto IL_0019;*/goto IL_075c;                              //br				IL_0019
	IL_075c:            goto IL_0884;                                               //br				IL_0884
	IL_0761:                                                                        //ldarg.0
	IL_0762:            Temp_5=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0767:                                                                        //ldstr				L"\x231E\x0E20\x4F22\x4C24\x1926"
	IL_076c:                                                                        //ldloc				V_19
	IL_0770:            Temp_6=a(L"\x231E\x0E20\x4F22\x4C24\x1926",V_19);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0775:            Temp_5->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_077a:                                                                        //ldloc.s				V_15
	IL_077c:                                                                        //ldc.i4.1
	IL_077d:                                                                        //add
	IL_077e:            V_15=(V_15 + 1);                                            //stloc.s				V_15
	IL_0780:                                                                        //ldc.i4				0x31
	IL_0785:            V_18=49;                                                    //stloc				V_18
	IL_0789:            /*goto IL_0019;*/goto IL_078e;                              //br				IL_0019
	IL_078e:            goto IL_0578;                                               //br				IL_0578
	IL_0793:                                                                        //ldloc.s				V_16
	IL_0795:                                                                        //ldloc.s				V_17
	IL_0797:                                                                        //ldelem.ref
	IL_0798:                                                                        //castclass				System::Xml::XmlElement
	IL_079d:            V_5=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);        //stloc.s				V_5
	IL_079f:                                                                        //ldarg.0
	IL_07a0:                                                                        //ldloc.s				V_5
	IL_07a2:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_5));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_07a7:                                                                        //ldloc.s				V_17
	IL_07a9:                                                                        //ldc.i4.1
	IL_07aa:                                                                        //add
	IL_07ab:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_07ad:                                                                        //ldc.i4				0x29
	IL_07b2:            V_18=41;                                                    //stloc				V_18
	IL_07b6:            /*goto IL_0019;*/goto IL_07bb;                              //br				IL_0019
	IL_07bb:            goto IL_0738;                                               //br				IL_0738
	IL_07c0:                                                                        //ldarg.0
	IL_07c1:            Temp_0=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_07c6:                                                                        //ldstr				L"\x231E\x0E20\x4F22\x4C24\x1926"
	IL_07cb:                                                                        //ldloc				V_19
	IL_07cf:            Temp_1=a(L"\x231E\x0E20\x4F22\x4C24\x1926",V_19);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07d4:            Temp_0->Write(Temp_1);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_07d9:                                                                        //ldloc.s				V_15
	IL_07db:                                                                        //ldc.i4.1
	IL_07dc:                                                                        //add
	IL_07dd:            V_15=(V_15 + 1);                                            //stloc.s				V_15
	IL_07df:                                                                        //ldc.i4				0xd
	IL_07e4:            V_18=13;                                                    //stloc				V_18
	IL_07e8:            /*goto IL_0019;*/goto IL_07ed;                              //br				IL_0019
	IL_07ed:            goto IL_0858;                                               //br.s				IL_0858
	IL_07ef:                                                                        //ldc.i4				0x2c
	IL_07f4:            V_18=44;                                                    //stloc				V_18
	IL_07f8:            /*goto IL_0019;*/goto IL_07fd;                              //br				IL_0019
	IL_07fd:                                                                        //ldloc.s				V_13
	IL_07ff:                                                                        //ldstr				L"\x711E\x5420\x4E22\x4724\x4226\x5B28"
	IL_0804:                                                                        //ldloc				V_19
	IL_0808:            Temp_70=a(L"\x711E\x5420\x4E22\x4724\x4226\x5B28",V_19);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_080d:            if(V_13==Temp_70)goto IL_08b7;                              //beq				IL_08b7
	IL_0812:                                                                        //ldc.i4				0x1c
	IL_0817:            V_18=28;                                                    //stloc				V_18
	IL_081b:            /*goto IL_0019;*/goto IL_0820;                              //br				IL_0019
	IL_0820:            goto IL_08b6;                                               //br				IL_08b6
	IL_0825:                                                                        //ldc.i4				0x2b
	IL_082a:            V_18=43;                                                    //stloc				V_18
	IL_082e:            /*goto IL_0019;*/goto IL_0833;                              //br				IL_0019
	IL_0833:                                                                        //ldloc.s				V_13
	IL_0835:                                                                        //ldstr				L"\x7D1E\x5420\x4F22\x4924\x4226\x5D28"
	IL_083a:                                                                        //ldloc				V_19
	IL_083e:            Temp_65=a(L"\x7D1E\x5420\x4F22\x4924\x4226\x5D28",V_19);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0843:            if(V_13==Temp_65)goto IL_0147;                              //beq				IL_0147
	IL_0848:                                                                        //ldc.i4				0x19
	IL_084d:            V_18=25;                                                    //stloc				V_18
	IL_0851:            /*goto IL_0019;*/goto IL_0856;                              //br				IL_0019
	IL_0856:            goto IL_07ef;                                               //br.s				IL_07ef
	IL_0858:                                                                        //ldc.i4				0x25
	IL_085d:            V_18=37;                                                    //stloc				V_18
	IL_0861:            /*goto IL_0019;*/goto IL_0866;                              //br				IL_0019
	IL_0866:                                                                        //ldloc.s				V_15
	IL_0868:                                                                        //ldloc.s				V_14
	IL_086a:            Temp_58=V_14->Length;                                       //ldlen
	IL_086b:                                                                        //conv.i4
	IL_086c:            if(V_15<Temp_58)goto IL_02a6;                               //blt				IL_02a6
	IL_0871:                                                                        //ldc.i4				0x32
	IL_0876:            V_18=50;                                                    //stloc				V_18
	IL_087a:            /*goto IL_0019;*/goto IL_087f;                              //br				IL_0019
	IL_087f:            goto IL_02f8;                                               //br				IL_02f8
	IL_0884:                                                                        //ldarg.0
	IL_0885:            Temp_14=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_088a:                                                                        //ldstr				L"\x231E\x0E20\x5722\x4124\x1926\x1528\x042A\x592C\x5D2E\x0F30"
	IL_088f:                                                                        //ldloc				V_19
	IL_0893:            Temp_15=a(L"\x231E\x0E20\x5722\x4124\x1926\x1528\x042A\x592C\x5D2E\x0F30",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0898:            Temp_14->Write(Temp_15);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_089d:                                                                        //ldloc.s				V_15
	IL_089f:                                                                        //ldc.i4.1
	IL_08a0:                                                                        //add
	IL_08a1:            V_15=(V_15 + 1);                                            //stloc.s				V_15
	IL_08a3:                                                                        //ldc.i4				0x2a
	IL_08a8:            V_18=42;                                                    //stloc				V_18
	IL_08ac:            /*goto IL_0019;*/goto IL_08b1;                              //br				IL_0019
	IL_08b1:            goto IL_070c;                                               //br				IL_070c
	IL_08b6:            return;                                                     //ret
	IL_08b7:                                                                        //ldarg.0
	IL_08b8:            Temp_71=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_08bd:                                                                        //ldstr				L"\x231E\x4E20\x4F22\x0524\x5326\x5028\x5B2A\x482C\x122E\x1630\x0232\x1234\x0936"
	IL_08c2:                                                                        //ldloc				V_19
	IL_08c6:            Temp_72=a(L"\x231E\x4E20\x4F22\x0524\x5326\x5028\x5B2A\x482C\x122E\x1630\x0232\x1234\x0936",V_19);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08cb:            Temp_71->Write(Temp_72);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_08d0:                                                                        //ldarg.1
	IL_08d1:                                                                        //ldstr				L"\x761E\x5520\x4622\x4824"
	IL_08d6:                                                                        //ldloc				V_19
	IL_08da:            Temp_73=a(L"\x761E\x5520\x4622\x4824",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08df:            Temp_74=Root::T_x86::T_x1::M_x1(A_0,Temp_73);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_08e4:            V_14=Temp_74;                                               //stloc.s				V_14
	IL_08e6:                                                                        //ldc.i4.0
	IL_08e7:            V_15=0;                                                     //stloc.s				V_15
	IL_08e9:                                                                        //ldc.i4				0x28
	IL_08ee:            V_18=40;                                                    //stloc				V_18
	IL_08f2:            /*goto IL_0019;*/goto IL_08f7;                              //br				IL_0019
	IL_08f7:            goto IL_0858;                                               //br				IL_0858
	IL_08fc:                                                                        //ldloc.s				V_16
	IL_08fe:                                                                        //ldloc.s				V_17
	IL_0900:                                                                        //ldelem.ref
	IL_0901:                                                                        //castclass				System::Xml::XmlElement
	IL_0906:            V_9=safe_cast<System::Xml::XmlElement^>(V_16[V_17]);        //stloc.s				V_9
	IL_0908:                                                                        //ldarg.0
	IL_0909:                                                                        //ldloc.s				V_9
	IL_090b:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_9));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0910:                                                                        //ldloc.s				V_17
	IL_0912:                                                                        //ldc.i4.1
	IL_0913:                                                                        //add
	IL_0914:            V_17=(V_17 + 1);                                            //stloc.s				V_17
	IL_0916:                                                                        //ldc.i4				0x2d
	IL_091b:            V_18=45;                                                    //stloc				V_18
	IL_091f:            /*goto IL_0019;*/goto IL_0924;                              //br				IL_0019
	IL_0924:            goto IL_0926;                                               //br.s				IL_0926
	IL_0926:                                                                        //ldc.i4				0xe
	IL_092b:            V_18=14;                                                    //stloc				V_18
	IL_092f:            /*goto IL_0019;*/goto IL_0934;                              //br				IL_0019
	IL_0934:                                                                        //ldloc.s				V_17
	IL_0936:                                                                        //ldloc.s				V_16
	IL_0938:            Temp_24=V_16->Length;                                       //ldlen
	IL_0939:                                                                        //conv.i4
	IL_093a:            if(V_17<Temp_24)goto IL_08fc;                               //blt.s				IL_08fc
	IL_093c:                                                                        //ldc.i4				0xf
	IL_0941:            V_18=15;                                                    //stloc				V_18
	IL_0945:            /*goto IL_0019;*/goto IL_094a;                              //br				IL_0019
	IL_094a:            goto IL_0222;                                               //br				IL_0222
	IL_094f:                                                                        //ldarg.0
	IL_0950:            Temp_18=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0955:                                                                        //ldstr				L"\x231E\x4320\x1D22"
	IL_095a:                                                                        //ldloc				V_19
	IL_095e:            Temp_19=a(L"\x231E\x4320\x1D22",V_19);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0963:            Temp_18->Write(Temp_19);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0968:                                                                        //ldarg.0
	IL_0969:                                                                        //ldloc.s				V_7
	IL_096b:                                                                        //ldloc.s				V_10
	IL_096d:                                                                        //ldelem.ref
	IL_096e:            this->M_x1(V_7[V_10]);                                      //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0973:                                                                        //ldarg.0
	IL_0974:            Temp_20=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0979:                                                                        //ldstr				L"\x231E\x0E20\x4122\x1B24"
	IL_097e:                                                                        //ldloc				V_19
	IL_0982:            Temp_21=a(L"\x231E\x0E20\x4122\x1B24",V_19);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0987:            Temp_20->Write(Temp_21);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_098c:                                                                        //ldarg.0
	IL_098d:            Temp_22=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0992:                                                                        //ldstr				L"\x3F1E\x0C20\x0322"
	IL_0997:                                                                        //ldloc				V_19
	IL_099b:            Temp_23=a(L"\x3F1E\x0C20\x0322",V_19);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09a0:            Temp_22->Write(Temp_23);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_09a5:                                                                        //ldarg.0
	IL_09a6:                                                                        //ldloc.s				V_8
	IL_09a8:                                                                        //ldloc.s				V_10
	IL_09aa:                                                                        //ldelem.ref
	IL_09ab:            this->M_x1(V_8[V_10]);                                      //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_09b0:                                                                        //ldloc.s				V_10
	IL_09b2:                                                                        //ldc.i4.1
	IL_09b3:                                                                        //add
	IL_09b4:            V_10=(V_10 + 1);                                            //stloc.s				V_10
	IL_09b6:                                                                        //ldc.i4				0x13
	IL_09bb:            V_18=19;                                                    //stloc				V_18
	IL_09bf:            /*goto IL_0019;*/goto IL_09c4;                              //br				IL_0019
	IL_09c4:            goto IL_0455;                                               //br				IL_0455
	IL_09c9:            return;                                                     //ret

}
inline array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Xml::XmlNodeList^ Temp_1 = nullptr;
	System::Xml::XmlNode^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Xml::XmlNodeList^ Temp_5 = nullptr;
	System::Xml::XmlNode^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	array<System::Xml::XmlNode^>^ Temp_9 = nullptr;
	System::Xml::XmlNodeList^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	array<System::Xml::XmlNode^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0027;                                               //br.s				IL_0027
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_007b;case 1:goto IL_00a2;case 2:goto IL_006e;case 3:goto IL_003d;case 4:goto IL_00ce;case 5:goto IL_004e;case 6:goto IL_00b2;};//switch				(IL_007b,IL_00a2,IL_006e,IL_003d,IL_00ce,IL_004e,IL_00b2)
	IL_0027:            goto IL_002a;                                               //br.s				IL_002a
	IL_0029:                                                                        //break
	IL_002a:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_002f:            V_0=Temp_0;                                                 //stloc.0
	IL_0030:                                                                        //ldc.i4.0
	IL_0031:            V_1=0;                                                      //stloc.1
	IL_0032:                                                                        //ldc.i4				0x3
	IL_0037:            V_3=3;                                                      //stloc				V_3
	IL_003b:            /*goto IL_0002;*/goto IL_003d;                              //br.s				IL_0002
	IL_003d:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_003f:                                                                        //ldloc.1
	IL_0040:                                                                        //ldc.i4.1
	IL_0041:                                                                        //add
	IL_0042:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0043:                                                                        //ldc.i4				0x5
	IL_0048:            V_3=5;                                                      //stloc				V_3
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_0050:                                                                        //ldloc.0
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_5=A_0->ChildNodes;                                     //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::get_ChildNodes()
	IL_0057:                                                                        //ldloc.1
	IL_0058:            Temp_6=Temp_5[V_1];                                         //callvirt				System::Xml::XmlNode^ System::Xml::XmlNodeList::get_ItemOf(System::Int32)
	IL_005d:            Temp_7=V_0->Add(safe_cast<System::Object^>(Temp_6));        //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0062:                                                                        //pop
	IL_0063:                                                                        //ldc.i4				0x2
	IL_0068:            V_3=2;                                                      //stloc				V_3
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:            goto IL_003f;                                               //br.s				IL_003f
	IL_0070:                                                                        //ldc.i4				0x0
	IL_0075:            V_3=0;                                                      //stloc				V_3
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:                                                                        //ldarg.0
	IL_007c:            Temp_1=A_0->ChildNodes;                                     //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::get_ChildNodes()
	IL_0081:                                                                        //ldloc.1
	IL_0082:            Temp_2=Temp_1[V_1];                                         //callvirt				System::Xml::XmlNode^ System::Xml::XmlNodeList::get_ItemOf(System::Int32)
	IL_0087:            Temp_3=Temp_2->Name;                                        //callvirt				System::String^ System::Xml::XmlNode::get_Name()
	IL_008c:                                                                        //ldarg.1
	IL_008d:            Temp_4=(Temp_3 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0092:            if(!Temp_4)goto IL_003f;                                    //brfalse.s				IL_003f
	IL_0094:                                                                        //ldc.i4				0x1
	IL_0099:            V_3=1;                                                      //stloc				V_3
	IL_009d:            /*goto IL_0002;*/goto IL_00a2;                              //br				IL_0002
	IL_00a2:            goto IL_0050;                                               //br.s				IL_0050
	IL_00a4:                                                                        //ldc.i4				0x6
	IL_00a9:            V_3=6;                                                      //stloc				V_3
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:                                                                        //ldloc.1
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_10=A_0->ChildNodes;                                    //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::get_ChildNodes()
	IL_00b9:            Temp_11=Temp_10->Count;                                     //callvirt				System::Int32 System::Xml::XmlNodeList::get_Count()
	IL_00be:            if(V_1<Temp_11)goto IL_0070;                                //blt.s				IL_0070
	IL_00c0:                                                                        //ldc.i4				0x4
	IL_00c5:            V_3=4;                                                      //stloc				V_3
	IL_00c9:            /*goto IL_0002;*/goto IL_00ce;                              //br				IL_0002
	IL_00ce:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:            Temp_8=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00d6:                                                                        //conv.ovf.u4
	IL_00d7:            Temp_9=gcnew array<System::Xml::XmlNode^>(safe_cast<System::UInt32>(Temp_8));//newarr				System::Xml::XmlNode
	IL_00dc:            V_2=Temp_9;                                                 //stloc.2
	IL_00dd:                                                                        //ldloc.0
	IL_00de:                                                                        //ldloc.2
	IL_00df:                                                                        //ldc.i4.0
	IL_00e0:            V_0->CopyTo(safe_cast<System::Array^>(V_2),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_00e5:                                                                        //ldloc.2
	IL_00e6:            return V_2;                                                 //ret

}
inline void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Xml::XmlNodeList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->ChildNodes;                                     //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::get_ChildNodes()
	IL_0007:            this->M_x1(Temp_0);                                         //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNodeList^)
	IL_000c:            return;                                                     //ret

}
inline System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Xml::XmlNodeList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->SelectNodes(A_1);                               //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::SelectNodes(System::String^)
	IL_0007:            Temp_1=Temp_0->Count;                                       //callvirt				System::Int32 System::Xml::XmlNodeList::get_Count()
	IL_000c:                                                                        //ldc.i4.0
	IL_000d:                                                                        //ceq
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //ceq
	IL_0012:            return ((Temp_1 == 0) == false);                            //ret

}
inline void Root::T_x86::T_x1::M_x1(System::Xml::XmlNodeList^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::IO::TextWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::IO::TextWriter^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::IO::TextWriter^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::IO::TextWriter^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::TextWriter^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::IO::TextWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::IO::TextWriter^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::IO::TextWriter^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	Root::T_x111^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::IO::TextWriter^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::IO::TextWriter^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Root::T_x111^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::IO::TextWriter^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::IO::TextWriter^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::IO::TextWriter^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::IO::TextWriter^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::IO::TextWriter^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::IO::TextWriter^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	Root::T_x111^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::IO::TextWriter^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::IO::TextWriter^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	Root::T_x111^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::IO::TextWriter^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::IO::TextWriter^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::IO::TextWriter^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::IO::TextWriter^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::IO::TextWriter^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::IO::TextWriter^ Temp_68 = nullptr;
	System::String^ Temp_69 = nullptr;
	System::IO::TextWriter^ Temp_70 = nullptr;
	System::String^ Temp_71 = nullptr;
	System::IO::TextWriter^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	System::IO::TextWriter^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::IO::TextWriter^ Temp_77 = nullptr;
	System::String^ Temp_78 = nullptr;
	System::IO::TextWriter^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::IO::TextWriter^ Temp_81 = nullptr;
	System::String^ Temp_82 = nullptr;
	System::IO::TextWriter^ Temp_83 = nullptr;
	System::String^ Temp_84 = nullptr;
	System::String^ Temp_85 = nullptr;
	System::IO::TextWriter^ Temp_86 = nullptr;
	System::String^ Temp_87 = nullptr;
	System::IO::TextWriter^ Temp_88 = nullptr;
	System::String^ Temp_89 = nullptr;
	System::IO::TextWriter^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::IO::TextWriter^ Temp_92 = nullptr;
	System::String^ Temp_93 = nullptr;
	System::IO::TextWriter^ Temp_94 = nullptr;
	System::String^ Temp_95 = nullptr;
	System::IO::TextWriter^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::String^ Temp_98 = nullptr;
	System::IO::TextWriter^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::IO::TextWriter^ Temp_101 = nullptr;
	System::String^ Temp_102 = nullptr;
	System::IO::TextWriter^ Temp_103 = nullptr;
	System::String^ Temp_104 = nullptr;
	System::String^ Temp_105 = nullptr;
	System::Boolean Temp_106 = false;
	System::Object^ Temp_107 = nullptr;
	System::Collections::Hashtable^ Temp_108 = nullptr;
	System::Object^ Temp_109 = nullptr;
	System::Object^ Temp_110 = nullptr;
	System::String^ Temp_111 = nullptr;
	System::Collections::Hashtable^ Temp_112 = nullptr;
	System::String^ Temp_113 = nullptr;
	System::String^ Temp_114 = nullptr;
	System::String^ Temp_115 = nullptr;
	System::String^ Temp_116 = nullptr;
	System::String^ Temp_117 = nullptr;
	System::String^ Temp_118 = nullptr;
	System::String^ Temp_119 = nullptr;
	System::String^ Temp_120 = nullptr;
	System::String^ Temp_121 = nullptr;
	System::String^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	System::String^ Temp_124 = nullptr;
	System::String^ Temp_125 = nullptr;
	System::String^ Temp_126 = nullptr;
	System::String^ Temp_127 = nullptr;
	System::String^ Temp_128 = nullptr;
	System::String^ Temp_129 = nullptr;
	System::String^ Temp_130 = nullptr;
	System::String^ Temp_131 = nullptr;
	System::Collections::IEnumerator^ Temp_132 = nullptr;
	System::Collections::Hashtable^ Temp_133 = nullptr;
	//local variables.
	System::Xml::XmlNode^ V_0 = nullptr;
	System::Xml::XmlElement^ V_1 = nullptr;
	System::Xml::XmlText^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::Object^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_7=4;                                                      //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_6=0;                                                      //stloc				V_6
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_6
	IL_001a:            switch(V_6){case 0:goto IL_0014;case 1:goto IL_09cf;case 2:goto IL_0049;case 3:goto IL_0bed;};//switch				(IL_0014,IL_09cf,IL_0049,IL_0bed)
	IL_002f:            goto IL_0032;                                               //br.s				IL_0032
	IL_0031:                                                                        //break
	IL_0032:                                                                        //volatile.
	IL_0034:            Temp_133=Root::T_x188::F_x8;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x8
	IL_0039:            if(Temp_133!=nullptr)goto IL_09ba;                          //brtrue				IL_09ba
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_6=2;                                                      //stloc				V_6
	IL_0047:            /*goto IL_0016;*/goto IL_0049;                              //br.s				IL_0016
	IL_0049:            goto IL_09d4;                                               //br				IL_09d4
	IL_004901:          try{
	IL_004e:                                                                        //ldc.i4				0x5
	IL_0053:            V_6=5;                                                      //stloc				V_6
	IL_0057:            /*goto IL_005e;*/goto IL_0059;                              //br.s				IL_005e
	IL_0059:            goto IL_0103;                                               //br				IL_0103
	IL_005e:                                                                        //ldloc				V_6
	IL_0062:            switch(V_6){case 0:goto IL_074d;case 1:goto IL_0397;case 2:goto IL_0511;case 3:goto IL_0240;case 4:goto IL_02de;case 5:goto IL_0059;case 6:goto IL_0666;case 7:goto IL_037d;case 8:goto IL_03ca;case 9:goto IL_0538;case 10:goto IL_0653;case 11:goto IL_0226;case 12:goto IL_07ff;case 13:goto IL_091e;case 14:goto IL_0194;case 15:goto IL_04e5;case 16:goto IL_017a;case 17:goto IL_071a;case 18:goto IL_06e7;case 19:goto IL_02f2;case 20:goto IL_02b8;case 21:goto IL_0965;case 22:goto IL_07d0;case 23:goto IL_030c;case 24:goto IL_0116;case 25:goto IL_01a8;case 26:goto IL_0938;case 27:goto IL_0253;case 28:goto IL_026c;case 29:goto IL_084f;case 30:goto IL_0784;case 31:goto IL_08ec;case 32:goto IL_0760;case 33:goto IL_0359;case 34:goto IL_0326;case 35:goto IL_07e3;case 36:goto IL_06cd;case 37:goto IL_020c;case 38:goto IL_0952;};//switch				(IL_074d,IL_0397,IL_0511,IL_0240,IL_02de,IL_0059,IL_0666,IL_037d,IL_03ca,IL_0538,IL_0653,IL_0226,IL_07ff,IL_091e,IL_0194,IL_04e5,IL_017a,IL_071a,IL_06e7,IL_02f2,IL_02b8,IL_0965,IL_07d0,IL_030c,IL_0116,IL_01a8,IL_0938,IL_0253,IL_026c,IL_084f,IL_0784,IL_08ec,IL_0760,IL_0359,IL_0326,IL_07e3,IL_06cd,IL_020c,IL_0952)
	IL_0103:            goto IL_0245;                                               //br				IL_0245
	IL_0108:                                                                        //ldc.i4				0x18
	IL_010d:            V_6=24;                                                     //stloc				V_6
	IL_0111:            /*goto IL_005e;*/goto IL_0116;                              //br				IL_005e
	IL_0116:            goto IL_035e;                                               //br				IL_035e
	IL_011b:                                                                        //ldarg.0
	IL_011c:            Temp_94=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0121:                                                                        //ldstr				L"\x1E21\x5723\x5625\x4927\x4429\x0C2B\x4D2D\x5C2F\x5331\x4733\x4535\x0537\x1D39\x503B\x5F3D\x2E3F\x2541\x6343\x7845\x1347"
	IL_0126:                                                                        //ldloc				V_7
	IL_012a:            Temp_95=a(L"\x1E21\x5723\x5625\x4927\x4429\x0C2B\x4D2D\x5C2F\x5331\x4733\x4535\x0537\x1D39\x503B\x5F3D\x2E3F\x2541\x6343\x7845\x1347",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            Temp_94->Write(Temp_95);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0134:                                                                        //ldarg.0
	IL_0135:            Temp_96=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_013a:                                                                        //ldloc.1
	IL_013b:                                                                        //ldstr				L"\x6221\x4823\x4725\x4627\x4D29"
	IL_0140:                                                                        //ldloc				V_7
	IL_0144:            Temp_97=a(L"\x6221\x4823\x4725\x4627\x4D29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0149:            Temp_98=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_97);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_014e:            Temp_96->Write(Temp_98);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0153:                                                                        //ldarg.0
	IL_0154:            Temp_99=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0159:                                                                        //ldstr				L"\x7F21\x1823\x0925\x5B27\x5A29\x4D2B\x402D\x0E2F\x0E31\x5633\x4435\x1737\x0439"
	IL_015e:                                                                        //ldloc				V_7
	IL_0162:            Temp_100=a(L"\x7F21\x1823\x0925\x5B27\x5A29\x4D2B\x402D\x0E2F\x0E31\x5633\x4435\x1737\x0439",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0167:            Temp_99->Write(Temp_100);                                   //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_016c:                                                                        //ldc.i4				0x10
	IL_0171:            V_6=16;                                                     //stloc				V_6
	IL_0175:            /*goto IL_005e;*/goto IL_017a;                              //br				IL_005e
	IL_017a:            goto IL_0804;                                               //br				IL_0804
	IL_017f:                                                                        //ldloc.0
	IL_0180:                                                                        //isinst				System::Xml::XmlText
	IL_0185:            V_2=dynamic_cast<System::Xml::XmlText^>(V_0);               //stloc.2
	IL_0186:                                                                        //ldc.i4				0xe
	IL_018b:            V_6=14;                                                     //stloc				V_6
	IL_018f:            /*goto IL_005e;*/goto IL_0194;                              //br				IL_005e
	IL_0194:                                                                        //ldloc.2
	IL_0195:            if(V_2==nullptr)goto IL_0245;                               //brfalse				IL_0245
	IL_019a:                                                                        //ldc.i4				0x19
	IL_019f:            V_6=25;                                                     //stloc				V_6
	IL_01a3:            /*goto IL_005e;*/goto IL_01a8;                              //br				IL_005e
	IL_01a8:            goto IL_08f1;                                               //br				IL_08f1
	IL_01ad:                                                                        //ldarg.0
	IL_01ae:            Temp_81=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01b3:                                                                        //ldstr				L"\x1E21\x4D23\x1825"
	IL_01b8:                                                                        //ldloc				V_7
	IL_01bc:            Temp_82=a(L"\x1E21\x4D23\x1825",V_7);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c1:            Temp_81->Write(Temp_82);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01c6:                                                                        //ldarg.0
	IL_01c7:            Temp_83=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01cc:                                                                        //ldloc.1
	IL_01cd:                                                                        //ldstr				L"\x6221\x4A23\x4725\x4527\x4F29"
	IL_01d2:                                                                        //ldloc				V_7
	IL_01d6:            Temp_84=a(L"\x6221\x4A23\x4725\x4527\x4F29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01db:            Temp_85=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_84);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_01e0:            Temp_83->Write(Temp_85);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01e5:                                                                        //ldarg.0
	IL_01e6:            Temp_86=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01eb:                                                                        //ldstr				L"\x1E21\x0B23\x4F25\x1627"
	IL_01f0:                                                                        //ldloc				V_7
	IL_01f4:            Temp_87=a(L"\x1E21\x0B23\x4F25\x1627",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f9:            Temp_86->Write(Temp_87);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01fe:                                                                        //ldc.i4				0x25
	IL_0203:            V_6=37;                                                     //stloc				V_6
	IL_0207:            /*goto IL_005e;*/goto IL_020c;                              //br				IL_005e
	IL_020c:            goto IL_017f;                                               //br				IL_017f
	IL_0211:                                                                        //ldarg.0
	IL_0212:                                                                        //ldloc.1
	IL_0213:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0218:                                                                        //ldc.i4				0xb
	IL_021d:            V_6=11;                                                     //stloc				V_6
	IL_0221:            /*goto IL_005e;*/goto IL_0226;                              //br				IL_005e
	IL_0226:            goto IL_017f;                                               //br				IL_017f
	IL_022b:                                                                        //ldarg.0
	IL_022c:                                                                        //ldloc.1
	IL_022d:            this->M_x1(V_1);                                            //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^)
	IL_0232:                                                                        //ldc.i4				0x3
	IL_0237:            V_6=3;                                                      //stloc				V_6
	IL_023b:            /*goto IL_005e;*/goto IL_0240;                              //br				IL_005e
	IL_0240:            goto IL_017f;                                               //br				IL_017f
	IL_0245:                                                                        //ldc.i4				0x1b
	IL_024a:            V_6=27;                                                     //stloc				V_6
	IL_024e:            /*goto IL_005e;*/goto IL_0253;                              //br				IL_005e
	IL_0253:                                                                        //ldloc.3
	IL_0254:            Temp_106=V_3->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0259:            if(Temp_106)goto IL_02bd;                                   //brtrue				IL_02bd
	IL_025e:                                                                        //ldc.i4				0x1c
	IL_0263:            V_6=28;                                                     //stloc				V_6
	IL_0267:            /*goto IL_005e;*/goto IL_026c;                              //br				IL_005e
	IL_026c:            goto IL_0957;                                               //br				IL_0957
	IL_0271:                                                                        //ldarg.0
	IL_0272:            Temp_62=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0277:                                                                        //ldstr				L"\x1E21\x5423\x1825"
	IL_027c:                                                                        //ldloc				V_7
	IL_0280:            Temp_63=a(L"\x1E21\x5423\x1825",V_7);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0285:            Temp_62->Write(Temp_63);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_028a:                                                                        //ldarg.0
	IL_028b:                                                                        //ldloc.1
	IL_028c:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0291:                                                                        //ldarg.0
	IL_0292:            Temp_64=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0297:                                                                        //ldstr				L"\x1E21\x0B23\x5625\x1627"
	IL_029c:                                                                        //ldloc				V_7
	IL_02a0:            Temp_65=a(L"\x1E21\x0B23\x5625\x1627",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a5:            Temp_64->Write(Temp_65);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02aa:                                                                        //ldc.i4				0x14
	IL_02af:            V_6=20;                                                     //stloc				V_6
	IL_02b3:            /*goto IL_005e;*/goto IL_02b8;                              //br				IL_005e
	IL_02b8:            goto IL_017f;                                               //br				IL_017f
	IL_02bd:                                                                        //ldloc.3
	IL_02be:            Temp_107=V_3->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_02c3:                                                                        //castclass				System::Xml::XmlNode
	IL_02c8:            V_0=safe_cast<System::Xml::XmlNode^>(Temp_107);             //stloc.0
	IL_02c9:                                                                        //ldloc.0
	IL_02ca:                                                                        //isinst				System::Xml::XmlElement
	IL_02cf:            V_1=dynamic_cast<System::Xml::XmlElement^>(V_0);            //stloc.1
	IL_02d0:                                                                        //ldc.i4				0x4
	IL_02d5:            V_6=4;                                                      //stloc				V_6
	IL_02d9:            /*goto IL_005e;*/goto IL_02de;                              //br				IL_005e
	IL_02de:                                                                        //ldloc.1
	IL_02df:            if(V_1==nullptr)goto IL_017f;                               //brfalse				IL_017f
	IL_02e4:                                                                        //ldc.i4				0x13
	IL_02e9:            V_6=19;                                                     //stloc				V_6
	IL_02ed:            /*goto IL_005e;*/goto IL_02f2;                              //br				IL_005e
	IL_02f2:            goto IL_07d5;                                               //br				IL_07d5
	IL_02f7:                                                                        //ldarg.0
	IL_02f8:                                                                        //ldloc.1
	IL_02f9:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_02fe:                                                                        //ldc.i4				0x17
	IL_0303:            V_6=23;                                                     //stloc				V_6
	IL_0307:            /*goto IL_005e;*/goto IL_030c;                              //br				IL_005e
	IL_030c:            goto IL_017f;                                               //br				IL_017f
	IL_0311:                                                                        //ldarg.0
	IL_0312:                                                                        //ldloc.1
	IL_0313:            this->M_x8(V_1);                                            //call				void Root::T_x86::T_x1::M_x8(System::Xml::XmlElement^)
	IL_0318:                                                                        //ldc.i4				0x22
	IL_031d:            V_6=34;                                                     //stloc				V_6
	IL_0321:            /*goto IL_005e;*/goto IL_0326;                              //br				IL_005e
	IL_0326:            goto IL_017f;                                               //br				IL_017f
	IL_032b:                                                                        //ldarg.0
	IL_032c:            Temp_10=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0331:                                                                        //ldstr				L"\x1E21\x4C23\x1225\x1627\x7829\x492B\x5A2D\x452F\x4031\x5A33\x1635\x6E37\x5B39\x503B\x4B3D\x253F\x7E41\x6B43\x2E45\x7C47\x7449"
	IL_0336:                                                                        //ldloc				V_7
	IL_033a:            Temp_11=a(L"\x1E21\x4C23\x1225\x1627\x7829\x492B\x5A2D\x452F\x4031\x5A33\x1635\x6E37\x5B39\x503B\x4B3D\x253F\x7E41\x6B43\x2E45\x7C47\x7449",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033f:            Temp_10->Write(Temp_11);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0344:                                                                        //ldarg.0
	IL_0345:                                                                        //ldloc.1
	IL_0346:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_034b:                                                                        //ldc.i4				0x21
	IL_0350:            V_6=33;                                                     //stloc				V_6
	IL_0354:            /*goto IL_005e;*/goto IL_0359;                              //br				IL_005e
	IL_0359:            goto IL_017f;                                               //br				IL_017f
	IL_035e:                                                                        //ldarg.0
	IL_035f:            Temp_101=this->F_x1;                                        //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0364:                                                                        //ldloc.1
	IL_0365:            Temp_102=V_1->OuterXml;                                     //callvirt				System::String^ System::Xml::XmlNode::get_OuterXml()
	IL_036a:            Temp_101->Write(Temp_102);                                  //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_036f:                                                                        //ldc.i4				0x7
	IL_0374:            V_6=7;                                                      //stloc				V_6
	IL_0378:            /*goto IL_005e;*/goto IL_037d;                              //br				IL_005e
	IL_037d:            goto IL_017f;                                               //br				IL_017f
	IL_0382:                                                                        //ldarg.0
	IL_0383:                                                                        //ldloc.1
	IL_0384:            this->M_x12(V_1);                                           //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlElement^)
	IL_0389:                                                                        //ldc.i4				0x1
	IL_038e:            V_6=1;                                                      //stloc				V_6
	IL_0392:            /*goto IL_005e;*/goto IL_0397;                              //br				IL_005e
	IL_0397:            goto IL_017f;                                               //br				IL_017f
	IL_039c:                                                                        //ldarg.0
	IL_039d:            Temp_66=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03a2:                                                                        //ldstr				L"\x1E21\x4C23\x1225\x1627\x7C29\x4D2B\x422D\x452F\x5731\x0833\x1935\x5037\x0E39\x023B"
	IL_03a7:                                                                        //ldloc				V_7
	IL_03ab:            Temp_67=a(L"\x1E21\x4C23\x1225\x1627\x7C29\x4D2B\x422D\x452F\x5731\x0833\x1935\x5037\x0E39\x023B",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b0:            Temp_66->Write(Temp_67);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03b5:                                                                        //ldarg.0
	IL_03b6:                                                                        //ldloc.1
	IL_03b7:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_03bc:                                                                        //ldc.i4				0x8
	IL_03c1:            V_6=8;                                                      //stloc				V_6
	IL_03c5:            /*goto IL_005e;*/goto IL_03ca;                              //br				IL_005e
	IL_03ca:            goto IL_017f;                                               //br				IL_017f
	IL_03cf:                                                                        //ldarg.0
	IL_03d0:            Temp_37=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03d5:                                                                        //ldstr				L"\x1E21\x5023\x5425\x0827\x5C29\x4D2B\x422D\x592F\x5531\x5A33\x0B35\x1F37\x4E39\x533B\x4E3D\x673F\x7C41\x7843\x3245\x2C47\x7449\x704B\x2F4D\x704F\x3A51\x2653\x3355\x3E57\x6759\x7B5B"
	IL_03da:                                                                        //ldloc				V_7
	IL_03de:            Temp_38=a(L"\x1E21\x5023\x5425\x0827\x5C29\x4D2B\x422D\x592F\x5531\x5A33\x0B35\x1F37\x4E39\x533B\x4E3D\x673F\x7C41\x7843\x3245\x2C47\x7449\x704B\x2F4D\x704F\x3A51\x2653\x3355\x3E57\x6759\x7B5B",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e3:            Temp_37->Write(Temp_38);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03e8:                                                                        //ldarg.0
	IL_03e9:            Temp_39=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03ee:                                                                        //ldstr				L"\x5721\x5623\x4825\x1227\x4729\x492B\x432D\x522F\x5731\x4633\x0C35"
	IL_03f3:                                                                        //ldloc				V_7
	IL_03f7:            Temp_40=a(L"\x5721\x5623\x4825\x1227\x4729\x492B\x432D\x522F\x5731\x4633\x0C35",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03fc:                                                                        //ldloc.1
	IL_03fd:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_0402:                                                                        //ldloc				V_7
	IL_0406:            Temp_41=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040b:            Temp_42=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_41);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0410:            Temp_43=System::String::Concat(Temp_40,Temp_42);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0415:            Temp_39->Write(Temp_43);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_041a:                                                                        //ldarg.0
	IL_041b:            Temp_44=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0420:                                                                        //ldstr				L"\x0521\x0423\x5225\x4127\x5E29\x402B\x4B2D\x0D2F\x1531"
	IL_0425:                                                                        //ldloc				V_7
	IL_0429:            Temp_45=a(L"\x0521\x0423\x5225\x4127\x5E29\x402B\x4B2D\x0D2F\x1531",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_042e:            Temp_44->Write(Temp_45);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0433:                                                                        //ldarg.0
	IL_0434:            Temp_46=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0439:                                                                        //ldloc.1
	IL_043a:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_043f:                                                                        //ldloc				V_7
	IL_0443:            Temp_47=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0448:            Temp_48=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_47);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_044d:            Temp_49=gcnew Root::T_x111(Temp_48);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0452:            Temp_50=Temp_49->M_x12();                                   //call				System::String^ Root::T_x111::M_x12()
	IL_0457:            Temp_46->Write(Temp_50);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_045c:                                                                        //ldarg.0
	IL_045d:            Temp_51=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0462:                                                                        //ldstr				L"\x0521\x1A23"
	IL_0467:                                                                        //ldloc				V_7
	IL_046b:            Temp_52=a(L"\x0521\x1A23",V_7);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0470:            Temp_51->Write(Temp_52);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0475:                                                                        //ldarg.0
	IL_0476:            Temp_53=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_047b:                                                                        //ldloc.1
	IL_047c:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_0481:                                                                        //ldloc				V_7
	IL_0485:            Temp_54=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_048a:            Temp_55=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_54);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_048f:            Temp_56=gcnew Root::T_x111(Temp_55);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0494:            Temp_57=Temp_56->M_x13();                                   //call				System::String^ Root::T_x111::M_x13()
	IL_0499:            Temp_53->Write(Temp_57);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_049e:                                                                        //ldarg.0
	IL_049f:            Temp_58=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_04a4:                                                                        //ldstr				L"\x1E21\x0B23\x4725\x1627\x1629\x032B\x5A2D\x542F\x0C31\x0833\x4235\x5C37\x0439"
	IL_04a9:                                                                        //ldloc				V_7
	IL_04ad:            Temp_59=a(L"\x1E21\x0B23\x4725\x1627\x1629\x032B\x5A2D\x542F\x0C31\x0833\x4235\x5C37\x0439",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04b2:            Temp_58->Write(Temp_59);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_04b7:                                                                        //ldarg.0
	IL_04b8:                                                                        //ldloc.1
	IL_04b9:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_04be:                                                                        //ldarg.0
	IL_04bf:            Temp_60=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_04c4:                                                                        //ldstr				L"\x1E21\x0B23\x5225\x4C27\x1429\x102B\x012D\x442F\x4031\x0A33"
	IL_04c9:                                                                        //ldloc				V_7
	IL_04cd:            Temp_61=a(L"\x1E21\x0B23\x5225\x4C27\x1429\x102B\x012D\x442F\x4031\x0A33",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04d2:            Temp_60->Write(Temp_61);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_04d7:                                                                        //ldc.i4				0xf
	IL_04dc:            V_6=15;                                                     //stloc				V_6
	IL_04e0:            /*goto IL_005e;*/goto IL_04e5;                              //br				IL_005e
	IL_04e5:            goto IL_017f;                                               //br				IL_017f
	IL_04ea:                                                                        //ldarg.0
	IL_04eb:            Temp_92=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_04f0:                                                                        //ldstr				L"\x1E21\x5423\x5425\x4D27\x0A29\x4F2B\x422D\x512F\x4131\x4733\x0B35\x1F37\x5939\x533B\x5A3D\x253F\x6541\x7A43"
	IL_04f5:                                                                        //ldloc				V_7
	IL_04f9:            Temp_93=a(L"\x1E21\x5423\x5425\x4D27\x0A29\x4F2B\x422D\x512F\x4131\x4733\x0B35\x1F37\x5939\x533B\x5A3D\x253F\x6541\x7A43",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04fe:            Temp_92->Write(Temp_93);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0503:                                                                        //ldc.i4				0x2
	IL_0508:            V_6=2;                                                      //stloc				V_6
	IL_050c:            /*goto IL_005e;*/goto IL_0511;                              //br				IL_005e
	IL_0511:                                                                        //ldloc.1
	IL_0512:                                                                        //ldstr				L"\x6221\x4823\x4725\x4627\x4D29"
	IL_0517:                                                                        //ldloc				V_7
	IL_051b:            Temp_0=a(L"\x6221\x4823\x4725\x4627\x4D29",V_7);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0520:            Temp_1=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(V_1),Temp_0);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_0525:            if(!Temp_1)goto IL_0804;                                    //brfalse				IL_0804
	IL_052a:                                                                        //ldc.i4				0x9
	IL_052f:            V_6=9;                                                      //stloc				V_6
	IL_0533:            /*goto IL_005e;*/goto IL_0538;                              //br				IL_005e
	IL_0538:            goto IL_011b;                                               //br				IL_011b
	IL_053d:                                                                        //ldarg.0
	IL_053e:            Temp_12=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0543:                                                                        //ldstr				L"\x1E21\x5023\x5425\x0827\x5C29\x4D2B\x422D\x592F\x5531\x5A33\x0B35\x1F37\x4E39\x533B\x4E3D\x673F\x7C41\x7843\x3245\x2C47\x7449\x704B\x2F4D\x704F\x3A51\x2653\x3355\x3E57\x6759\x7B5B"
	IL_0548:                                                                        //ldloc				V_7
	IL_054c:            Temp_13=a(L"\x1E21\x5023\x5425\x0827\x5C29\x4D2B\x422D\x592F\x5531\x5A33\x0B35\x1F37\x4E39\x533B\x4E3D\x673F\x7C41\x7843\x3245\x2C47\x7449\x704B\x2F4D\x704F\x3A51\x2653\x3355\x3E57\x6759\x7B5B",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0551:            Temp_12->Write(Temp_13);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0556:                                                                        //ldarg.0
	IL_0557:            Temp_14=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_055c:                                                                        //ldstr				L"\x5721\x5623\x4825\x1227\x4729\x492B\x432D\x522F\x5731\x4633\x0C35"
	IL_0561:                                                                        //ldloc				V_7
	IL_0565:            Temp_15=a(L"\x5721\x5623\x4825\x1227\x4729\x492B\x432D\x522F\x5731\x4633\x0C35",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_056a:                                                                        //ldloc.1
	IL_056b:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_0570:                                                                        //ldloc				V_7
	IL_0574:            Temp_16=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0579:            Temp_17=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_16);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_057e:            Temp_18=System::String::Concat(Temp_15,Temp_17);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_0583:            Temp_14->Write(Temp_18);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0588:                                                                        //ldarg.0
	IL_0589:            Temp_19=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_058e:                                                                        //ldstr				L"\x0521\x0423\x5225\x4127\x5E29\x402B\x4B2D\x0D2F\x1531"
	IL_0593:                                                                        //ldloc				V_7
	IL_0597:            Temp_20=a(L"\x0521\x0423\x5225\x4127\x5E29\x402B\x4B2D\x0D2F\x1531",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_059c:            Temp_19->Write(Temp_20);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_05a1:                                                                        //ldarg.0
	IL_05a2:            Temp_21=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_05a7:                                                                        //ldloc.1
	IL_05a8:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_05ad:                                                                        //ldloc				V_7
	IL_05b1:            Temp_22=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b6:            Temp_23=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_22);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_05bb:            Temp_24=gcnew Root::T_x111(Temp_23);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_05c0:            Temp_25=Temp_24->M_x12();                                   //call				System::String^ Root::T_x111::M_x12()
	IL_05c5:            Temp_21->Write(Temp_25);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_05ca:                                                                        //ldarg.0
	IL_05cb:            Temp_26=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_05d0:                                                                        //ldstr				L"\x0521\x1A23"
	IL_05d5:                                                                        //ldloc				V_7
	IL_05d9:            Temp_27=a(L"\x0521\x1A23",V_7);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05de:            Temp_26->Write(Temp_27);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_05e3:                                                                        //ldarg.0
	IL_05e4:            Temp_28=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_05e9:                                                                        //ldloc.1
	IL_05ea:                                                                        //ldstr				L"\x6221\x4723\x5425\x4D27\x4C29"
	IL_05ef:                                                                        //ldloc				V_7
	IL_05f3:            Temp_29=a(L"\x6221\x4723\x5425\x4D27\x4C29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05f8:            Temp_30=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_29);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_05fd:            Temp_31=gcnew Root::T_x111(Temp_30);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0602:            Temp_32=Temp_31->M_x13();                                   //call				System::String^ Root::T_x111::M_x13()
	IL_0607:            Temp_28->Write(Temp_32);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_060c:                                                                        //ldarg.0
	IL_060d:            Temp_33=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0612:                                                                        //ldstr				L"\x1E21\x0B23\x4725\x1627\x1629\x032B\x5A2D\x542F\x0C31\x0833\x4235\x5C37\x0439"
	IL_0617:                                                                        //ldloc				V_7
	IL_061b:            Temp_34=a(L"\x1E21\x0B23\x4725\x1627\x1629\x032B\x5A2D\x542F\x0C31\x0833\x4235\x5C37\x0439",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0620:            Temp_33->Write(Temp_34);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0625:                                                                        //ldarg.0
	IL_0626:                                                                        //ldloc.1
	IL_0627:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_062c:                                                                        //ldarg.0
	IL_062d:            Temp_35=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0632:                                                                        //ldstr				L"\x1E21\x0B23\x5225\x4C27\x1429\x102B\x012D\x442F\x4031\x0A33"
	IL_0637:                                                                        //ldloc				V_7
	IL_063b:            Temp_36=a(L"\x1E21\x0B23\x5225\x4C27\x1429\x102B\x012D\x442F\x4031\x0A33",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0640:            Temp_35->Write(Temp_36);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0645:                                                                        //ldc.i4				0xa
	IL_064a:            V_6=10;                                                     //stloc				V_6
	IL_064e:            /*goto IL_005e;*/goto IL_0653;                              //br				IL_005e
	IL_0653:            goto IL_017f;                                               //br				IL_017f
	IL_0658:                                                                        //ldc.i4				0x6
	IL_065d:            V_6=6;                                                      //stloc				V_6
	IL_0661:            /*goto IL_005e;*/goto IL_0666;                              //br				IL_005e
	IL_0666:                                                                        //ldloc.s				V_4
	IL_0668:                                                                        //unbox				System::Int32
	IL_066d:                                                                        //ldind.i4
	IL_066e:            switch(safe_cast<System::Int32>(V_4)){case 0:goto IL_0311;case 1:goto IL_02f7;case 2:goto IL_0211;case 3:goto IL_06ec;case 4:goto IL_032b;case 5:goto IL_053d;case 6:goto IL_03cf;case 7:goto IL_0271;case 8:goto IL_039c;case 9:goto IL_071f;case 10:goto IL_0923;case 11:goto IL_0854;case 12:goto IL_01ad;case 13:goto IL_0789;case 14:goto IL_04ea;case 15:goto IL_0382;case 16:goto IL_093d;case 17:goto IL_06d2;case 18:goto IL_022b;};//switch				(IL_0311,IL_02f7,IL_0211,IL_06ec,IL_032b,IL_053d,IL_03cf,IL_0271,IL_039c,IL_071f,IL_0923,IL_0854,IL_01ad,IL_0789,IL_04ea,IL_0382,IL_093d,IL_06d2,IL_022b)
	IL_06bf:                                                                        //ldc.i4				0x24
	IL_06c4:            V_6=36;                                                     //stloc				V_6
	IL_06c8:            /*goto IL_005e;*/goto IL_06cd;                              //br				IL_005e
	IL_06cd:            goto IL_0108;                                               //br				IL_0108
	IL_06d2:                                                                        //ldarg.0
	IL_06d3:                                                                        //ldloc.1
	IL_06d4:            this->M_x2(V_1);                                            //call				void Root::T_x86::T_x1::M_x2(System::Xml::XmlElement^)
	IL_06d9:                                                                        //ldc.i4				0x12
	IL_06de:            V_6=18;                                                     //stloc				V_6
	IL_06e2:            /*goto IL_005e;*/goto IL_06e7;                              //br				IL_005e
	IL_06e7:            goto IL_017f;                                               //br				IL_017f
	IL_06ec:                                                                        //ldarg.0
	IL_06ed:            Temp_8=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_06f2:                                                                        //ldstr				L"\x1E21\x4C23\x1225\x1627\x6F29\x5E2B\x5C2D\x5F2F\x4031\x0833\x1935\x5037\x0E39\x023B"
	IL_06f7:                                                                        //ldloc				V_7
	IL_06fb:            Temp_9=a(L"\x1E21\x4C23\x1225\x1627\x6F29\x5E2B\x5C2D\x5F2F\x4031\x0833\x1935\x5037\x0E39\x023B",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0700:            Temp_8->Write(Temp_9);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0705:                                                                        //ldarg.0
	IL_0706:                                                                        //ldloc.1
	IL_0707:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_070c:                                                                        //ldc.i4				0x11
	IL_0711:            V_6=17;                                                     //stloc				V_6
	IL_0715:            /*goto IL_005e;*/goto IL_071a;                              //br				IL_005e
	IL_071a:            goto IL_017f;                                               //br				IL_017f
	IL_071f:                                                                        //ldarg.0
	IL_0720:            Temp_68=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0725:                                                                        //ldstr				L"\x1E21\x4C23\x1225\x1627\x7829\x492B\x432D\x512F\x4031\x5F33\x4535\x0437\x1539\x543B\x0A3D\x7E3F"
	IL_072a:                                                                        //ldloc				V_7
	IL_072e:            Temp_69=a(L"\x1E21\x4C23\x1225\x1627\x7829\x492B\x432D\x512F\x4031\x5F33\x4535\x0437\x1539\x543B\x0A3D\x7E3F",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0733:            Temp_68->Write(Temp_69);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0738:                                                                        //ldarg.0
	IL_0739:                                                                        //ldloc.1
	IL_073a:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_073f:                                                                        //ldc.i4				0x0
	IL_0744:            V_6=0;                                                      //stloc				V_6
	IL_0748:            /*goto IL_005e;*/goto IL_074d;                              //br				IL_005e
	IL_074d:            goto IL_017f;                                               //br				IL_017f
	IL_0752:                                                                        //ldc.i4				0x20
	IL_0757:            V_6=32;                                                     //stloc				V_6
	IL_075b:            /*goto IL_005e;*/goto IL_0760;                              //br				IL_005e
	IL_0760:                                                                        //volatile.
	IL_0762:            Temp_108=Root::T_x188::F_x8;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x8
	IL_0767:            Temp_110=V_4;                                               //ldloc.s				V_4
	IL_0769:            Temp_109=Temp_108[Temp_110];                                //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_076e:                                                                        //dup
	IL_076f:            V_4=Temp_109;                                               //stloc.s				V_4
	IL_0771:            if(V_4==nullptr)goto IL_035e;                               //brfalse				IL_035e
	IL_0776:                                                                        //ldc.i4				0x1e
	IL_077b:            V_6=30;                                                     //stloc				V_6
	IL_077f:            /*goto IL_005e;*/goto IL_0784;                              //br				IL_005e
	IL_0784:            goto IL_0658;                                               //br				IL_0658
	IL_0789:                                                                        //ldarg.0
	IL_078a:            Temp_88=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_078f:                                                                        //ldstr				L"\x1E21\x4723\x4925\x4C27\x4F29\x122B"
	IL_0794:                                                                        //ldloc				V_7
	IL_0798:            Temp_89=a(L"\x1E21\x4723\x4925\x4C27\x4F29\x122B",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_079d:            Temp_88->Write(Temp_89);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_07a2:                                                                        //ldarg.0
	IL_07a3:                                                                        //ldloc.1
	IL_07a4:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_07a9:                                                                        //ldarg.0
	IL_07aa:            Temp_90=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_07af:                                                                        //ldstr				L"\x1E21\x0B23\x4525\x4727\x4E29\x492B\x102D"
	IL_07b4:                                                                        //ldloc				V_7
	IL_07b8:            Temp_91=a(L"\x1E21\x0B23\x4525\x4727\x4E29\x492B\x102D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07bd:            Temp_90->Write(Temp_91);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_07c2:                                                                        //ldc.i4				0x16
	IL_07c7:            V_6=22;                                                     //stloc				V_6
	IL_07cb:            /*goto IL_005e;*/goto IL_07d0;                              //br				IL_005e
	IL_07d0:            goto IL_017f;                                               //br				IL_017f
	IL_07d5:                                                                        //ldc.i4				0x23
	IL_07da:            V_6=35;                                                     //stloc				V_6
	IL_07de:            /*goto IL_005e;*/goto IL_07e3;                              //br				IL_005e
	IL_07e3:                                                                        //ldloc.1
	IL_07e4:            Temp_111=V_1->Name;                                         //callvirt				System::String^ System::Xml::XmlNode::get_Name()
	IL_07e9:                                                                        //dup
	IL_07ea:            V_4=safe_cast<System::Object^>(Temp_111);                   //stloc.s				V_4
	IL_07ec:            if(Temp_111==nullptr)goto IL_035e;                          //brfalse				IL_035e
	IL_07f1:                                                                        //ldc.i4				0xc
	IL_07f6:            V_6=12;                                                     //stloc				V_6
	IL_07fa:            /*goto IL_005e;*/goto IL_07ff;                              //br				IL_005e
	IL_07ff:            goto IL_0752;                                               //br				IL_0752
	IL_0804:                                                                        //ldarg.0
	IL_0805:            Temp_2=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_080a:                                                                        //ldloc.1
	IL_080b:                                                                        //ldstr				L"\x0C21"
	IL_0810:                                                                        //ldloc				V_7
	IL_0814:            Temp_3=a(L"\x0C21",V_7);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0819:            Temp_4=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_3);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_081e:            Temp_5=Root::T_x86::T_x1::M_x1(Temp_4);                     //call				System::String^ Root::T_x86::T_x1::M_x1(System::String^)
	IL_0823:            Temp_2->Write(Temp_5);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0828:                                                                        //ldarg.0
	IL_0829:            Temp_6=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_082e:                                                                        //ldstr				L"\x1E21\x0B23\x5625\x5A27\x4F29\x122B"
	IL_0833:                                                                        //ldloc				V_7
	IL_0837:            Temp_7=a(L"\x1E21\x0B23\x5625\x5A27\x4F29\x122B",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_083c:            Temp_6->Write(Temp_7);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0841:                                                                        //ldc.i4				0x1d
	IL_0846:            V_6=29;                                                     //stloc				V_6
	IL_084a:            /*goto IL_005e;*/goto IL_084f;                              //br				IL_005e
	IL_084f:            goto IL_017f;                                               //br				IL_017f
	IL_0854:                                                                        //ldarg.0
	IL_0855:            Temp_70=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_085a:                                                                        //ldstr				L"\x1E21\x4023\x5225\x1627\x1629\x452B\x102D"
	IL_085f:                                                                        //ldloc				V_7
	IL_0863:            Temp_71=a(L"\x1E21\x4023\x5225\x1627\x1629\x452B\x102D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0868:            Temp_70->Write(Temp_71);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_086d:                                                                        //ldarg.0
	IL_086e:            Temp_72=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0873:                                                                        //ldloc.1
	IL_0874:                                                                        //ldstr				L"\x6221\x4A23\x4725\x4527\x4F29"
	IL_0879:                                                                        //ldloc				V_7
	IL_087d:            Temp_73=a(L"\x6221\x4A23\x4725\x4527\x4F29",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0882:            Temp_74=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(V_1),Temp_73);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0887:            Temp_72->Write(Temp_74);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_088c:                                                                        //ldarg.0
	IL_088d:            Temp_75=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0892:                                                                        //ldstr				L"\x1E21\x0B23\x4F25\x1627\x1629\x032B\x4A2D\x442F\x0C31"
	IL_0897:                                                                        //ldloc				V_7
	IL_089b:            Temp_76=a(L"\x1E21\x0B23\x4F25\x1627\x1629\x032B\x4A2D\x442F\x0C31",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08a0:            Temp_75->Write(Temp_76);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_08a5:                                                                        //ldarg.0
	IL_08a6:            Temp_77=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_08ab:                                                                        //ldstr				L"\x1E21\x4023\x4225\x1627"
	IL_08b0:                                                                        //ldloc				V_7
	IL_08b4:            Temp_78=a(L"\x1E21\x4023\x4225\x1627",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08b9:            Temp_77->Write(Temp_78);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_08be:                                                                        //ldarg.0
	IL_08bf:                                                                        //ldloc.1
	IL_08c0:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_08c5:                                                                        //ldarg.0
	IL_08c6:            Temp_79=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_08cb:                                                                        //ldstr				L"\x1E21\x0B23\x4225\x4C27\x1429"
	IL_08d0:                                                                        //ldloc				V_7
	IL_08d4:            Temp_80=a(L"\x1E21\x0B23\x4225\x4C27\x1429",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08d9:            Temp_79->Write(Temp_80);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_08de:                                                                        //ldc.i4				0x1f
	IL_08e3:            V_6=31;                                                     //stloc				V_6
	IL_08e7:            /*goto IL_005e;*/goto IL_08ec;                              //br				IL_005e
	IL_08ec:            goto IL_017f;                                               //br				IL_017f
	IL_08f1:                                                                        //ldarg.0
	IL_08f2:            Temp_103=this->F_x1;                                        //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_08f7:                                                                        //ldloc.0
	IL_08f8:                                                                        //ldstr				L"\x0C21"
	IL_08fd:                                                                        //ldloc				V_7
	IL_0901:            Temp_104=a(L"\x0C21",V_7);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0906:            Temp_105=Root::T_x86::T_x1::M_x2(V_0,Temp_104);             //call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_090b:            Temp_103->Write(Temp_105);                                  //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0910:                                                                        //ldc.i4				0xd
	IL_0915:            V_6=13;                                                     //stloc				V_6
	IL_0919:            /*goto IL_005e;*/goto IL_091e;                              //br				IL_005e
	IL_091e:            goto IL_0245;                                               //br				IL_0245
	IL_0923:                                                                        //ldarg.0
	IL_0924:                                                                        //ldloc.1
	IL_0925:            this->M_x1(safe_cast<System::Xml::XmlNode^>(V_1));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_092a:                                                                        //ldc.i4				0x1a
	IL_092f:            V_6=26;                                                     //stloc				V_6
	IL_0933:            /*goto IL_005e;*/goto IL_0938;                              //br				IL_005e
	IL_0938:            goto IL_017f;                                               //br				IL_017f
	IL_093d:                                                                        //ldarg.0
	IL_093e:                                                                        //ldloc.1
	IL_093f:            this->M_x13(V_1);                                           //call				void Root::T_x86::T_x1::M_x13(System::Xml::XmlElement^)
	IL_0944:                                                                        //ldc.i4				0x26
	IL_0949:            V_6=38;                                                     //stloc				V_6
	IL_094d:            /*goto IL_005e;*/goto IL_0952;                              //br				IL_005e
	IL_0952:            goto IL_017f;                                               //br				IL_017f
	IL_0957:                                                                        //ldc.i4				0x15
	IL_095c:            V_6=21;                                                     //stloc				V_6
	IL_0960:            /*goto IL_005e;*/goto IL_0965;                              //br				IL_005e
	IL_0965:            goto IL_0bf2;                                               //leave				IL_0bf2
	                    ;}
	                    finally{
	IL_096a:            goto IL_0981;                                               //br.s				IL_0981
	IL_096c:                                                                        //ldloc				V_6
	IL_0970:            switch(V_6){case 0:goto IL_09b7;case 1:goto IL_09a3;case 2:goto IL_0994;};//switch				(IL_09b7,IL_09a3,IL_0994)
	IL_0981:                                                                        //ldloc.3
	IL_0982:                                                                        //isinst				System::IDisposable
	IL_0987:            V_5=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_5
	IL_0989:                                                                        //ldc.i4				0x2
	IL_098e:            V_6=2;                                                      //stloc				V_6
	IL_0992:            /*goto IL_096c;*/goto IL_0994;                              //br.s				IL_096c
	IL_0994:                                                                        //ldloc.s				V_5
	IL_0996:            if(V_5==nullptr)goto IL_09b9;                               //brfalse.s				IL_09b9
	IL_0998:                                                                        //ldc.i4				0x1
	IL_099d:            V_6=1;                                                      //stloc				V_6
	IL_09a1:            /*goto IL_096c;*/goto IL_09a3;                              //br.s				IL_096c
	IL_09a3:            goto IL_09a5;                                               //br.s				IL_09a5
	IL_09a5:                                                                        //ldloc.s				V_5
	IL_09a7:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_09ac:                                                                        //ldc.i4				0x0
	IL_09b1:            V_6=0;                                                      //stloc				V_6
	IL_09b5:            /*goto IL_096c;*/goto IL_09b7;                              //br.s				IL_096c
	IL_09b7:            goto IL_09b9;                                               //br.s				IL_09b9
	IL_09b9:                                                                        //endfinally
	                    ;}
	IL_09ba:                                                                        //ldarg.1
	IL_09bb:            Temp_132=A_0->GetEnumerator();                              //callvirt				System::Collections::IEnumerator^ System::Xml::XmlNodeList::GetEnumerator()
	IL_09c0:            V_3=Temp_132;                                               //stloc.3
	IL_09c1:                                                                        //ldc.i4				0x1
	IL_09c6:            V_6=1;                                                      //stloc				V_6
	IL_09ca:            /*goto IL_0016;*/goto IL_09cf;                              //br				IL_0016
	IL_09cf:            /*goto IL_004e;*/goto IL_004901;                            //br				IL_004e
	IL_09d4:                                                                        //ldc.i4.s				40
	IL_09d6:                                                                        //ldc.r4				0.5
	IL_09db:            Temp_112=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(40),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_09e0:                                                                        //dup
	IL_09e1:                                                                        //ldstr				L"\x4F21\x4123\x4B25\x4A27\x4F29\x5E2B"
	IL_09e6:                                                                        //ldloc				V_7
	IL_09ea:            Temp_113=a(L"\x4F21\x4123\x4B25\x4A27\x4F29\x5E2B",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09ef:                                                                        //ldc.i4.0
	IL_09f0:                                                                        //box				System::Int32
	IL_09f5:            Temp_112->Add(safe_cast<System::Object^>(Temp_113),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_09fa:                                                                        //dup
	IL_09fb:                                                                        //ldstr				L"\x4421\x4523\x4F25\x4427\x5F29\x5E2B\x4B2D"
	IL_0a00:                                                                        //ldloc				V_7
	IL_0a04:            Temp_114=a(L"\x4421\x4523\x4F25\x4427\x5F29\x5E2B\x4B2D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a09:                                                                        //ldc.i4.1
	IL_0a0a:                                                                        //box				System::Int32
	IL_0a0f:            Temp_112->Add(safe_cast<System::Object^>(Temp_114),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a14:                                                                        //dup
	IL_0a15:                                                                        //ldstr				L"\x5121\x5123\x4B25\x4527\x4B29\x5E2B\x572D"
	IL_0a1a:                                                                        //ldloc				V_7
	IL_0a1e:            Temp_115=a(L"\x5121\x5123\x4B25\x4527\x4B29\x5E2B\x572D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a23:                                                                        //ldc.i4.2
	IL_0a24:                                                                        //box				System::Int32
	IL_0a29:            Temp_112->Add(safe_cast<System::Object^>(Temp_115),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a2e:                                                                        //dup
	IL_0a2f:                                                                        //ldstr				L"\x4721\x5623\x5425\x4727\x5829"
	IL_0a34:                                                                        //ldloc				V_7
	IL_0a38:            Temp_116=a(L"\x4721\x5623\x5425\x4727\x5829",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a3d:                                                                        //ldc.i4.3
	IL_0a3e:                                                                        //box				System::Int32
	IL_0a43:            Temp_112->Add(safe_cast<System::Object^>(Temp_116),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a48:                                                                        //dup
	IL_0a49:                                                                        //ldstr				L"\x5021\x4123\x5225\x5D27\x5829\x422B\x5D2D"
	IL_0a4e:                                                                        //ldloc				V_7
	IL_0a52:            Temp_117=a(L"\x5021\x4123\x5225\x5D27\x5829\x422B\x5D2D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a57:                                                                        //ldc.i4.4
	IL_0a58:                                                                        //box				System::Int32
	IL_0a5d:            Temp_112->Add(safe_cast<System::Object^>(Temp_117),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a62:                                                                        //dup
	IL_0a63:                                                                        //ldstr				L"\x4721\x5C23\x4525\x4D27\x5A29\x582B\x472D\x5F2F\x5C31"
	IL_0a68:                                                                        //ldloc				V_7
	IL_0a6c:            Temp_118=a(L"\x4721\x5C23\x4525\x4D27\x5A29\x582B\x472D\x5F2F\x5C31",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a71:                                                                        //ldc.i4.5
	IL_0a72:                                                                        //box				System::Int32
	IL_0a77:            Temp_112->Add(safe_cast<System::Object^>(Temp_118),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a7c:                                                                        //dup
	IL_0a7d:                                                                        //ldstr				L"\x5221\x4123\x5425\x4527\x4329\x5F2B\x5D2D\x592F\x5D31\x5A33"
	IL_0a82:                                                                        //ldloc				V_7
	IL_0a86:            Temp_119=a(L"\x5221\x4123\x5425\x4527\x4329\x5F2B\x5D2D\x592F\x5D31\x5A33",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a8b:                                                                        //ldc.i4.6
	IL_0a8c:                                                                        //box				System::Int32
	IL_0a91:            Temp_112->Add(safe_cast<System::Object^>(Temp_119),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0a96:                                                                        //dup
	IL_0a97:                                                                        //ldstr				L"\x5221\x4523\x5425\x4927"
	IL_0a9c:                                                                        //ldloc				V_7
	IL_0aa0:            Temp_120=a(L"\x5221\x4523\x5425\x4927",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0aa5:                                                                        //ldc.i4.7
	IL_0aa6:                                                                        //box				System::Int32
	IL_0aab:            Temp_112->Add(safe_cast<System::Object^>(Temp_120),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ab0:                                                                        //dup
	IL_0ab1:                                                                        //ldstr				L"\x5421\x4523\x4A25\x5D27\x4F29"
	IL_0ab6:                                                                        //ldloc				V_7
	IL_0aba:            Temp_121=a(L"\x5421\x4523\x4A25\x5D27\x4F29",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0abf:                                                                        //ldc.i4.8
	IL_0ac0:                                                                        //box				System::Int32
	IL_0ac5:            Temp_112->Add(safe_cast<System::Object^>(Temp_121),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0aca:                                                                        //dup
	IL_0acb:                                                                        //ldstr				L"\x5021\x4123\x4B25\x4927\x5829\x472B\x5D2D"
	IL_0ad0:                                                                        //ldloc				V_7
	IL_0ad4:            Temp_122=a(L"\x5021\x4123\x4B25\x4927\x5829\x472B\x5D2D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ad9:                                                                        //ldc.i4.s				9
	IL_0adb:                                                                        //box				System::Int32
	IL_0ae0:            Temp_112->Add(safe_cast<System::Object^>(Temp_122),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ae5:                                                                        //dup
	IL_0ae6:                                                                        //ldstr				L"\x4721\x5C23\x4725\x4527\x5A29\x402B\x4B2D"
	IL_0aeb:                                                                        //ldloc				V_7
	IL_0aef:            Temp_123=a(L"\x4721\x5C23\x4725\x4527\x5A29\x402B\x4B2D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0af4:                                                                        //ldc.i4.s				10
	IL_0af6:                                                                        //box				System::Int32
	IL_0afb:            Temp_112->Add(safe_cast<System::Object^>(Temp_123),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b00:                                                                        //dup
	IL_0b01:                                                                        //ldstr				L"\x5221\x4523\x5425\x4927\x4729"
	IL_0b06:                                                                        //ldloc				V_7
	IL_0b0a:            Temp_124=a(L"\x5221\x4523\x5425\x4927\x4729",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b0f:                                                                        //ldc.i4.s				11
	IL_0b11:                                                                        //box				System::Int32
	IL_0b16:            Temp_112->Add(safe_cast<System::Object^>(Temp_124),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b1b:                                                                        //dup
	IL_0b1c:                                                                        //ldstr				L"\x5221\x4523\x5425\x4927\x4729\x5E2B\x4B2D\x562F"
	IL_0b21:                                                                        //ldloc				V_7
	IL_0b25:            Temp_125=a(L"\x5221\x4523\x5425\x4927\x4729\x5E2B\x4B2D\x562F",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b2a:                                                                        //ldc.i4.s				12
	IL_0b2c:                                                                        //box				System::Int32
	IL_0b31:            Temp_112->Add(safe_cast<System::Object^>(Temp_125),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b36:                                                                        //dup
	IL_0b37:                                                                        //ldstr				L"\x4121"
	IL_0b3c:                                                                        //ldloc				V_7
	IL_0b40:            Temp_126=a(L"\x4121",V_7);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b45:                                                                        //ldc.i4.s				13
	IL_0b47:                                                                        //box				System::Int32
	IL_0b4c:            Temp_112->Add(safe_cast<System::Object^>(Temp_126),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b51:                                                                        //dup
	IL_0b52:                                                                        //ldstr				L"\x4121\x4B23\x4225\x4D27"
	IL_0b57:                                                                        //ldloc				V_7
	IL_0b5b:            Temp_127=a(L"\x4121\x4B23\x4225\x4D27",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b60:                                                                        //ldc.i4.s				14
	IL_0b62:                                                                        //box				System::Int32
	IL_0b67:            Temp_112->Add(safe_cast<System::Object^>(Temp_127),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b6c:                                                                        //dup
	IL_0b6d:                                                                        //ldstr				L"\x5121\x4123\x4325"
	IL_0b72:                                                                        //ldloc				V_7
	IL_0b76:            Temp_128=a(L"\x5121\x4123\x4325",V_7);                      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b7b:                                                                        //ldc.i4.s				15
	IL_0b7d:                                                                        //box				System::Int32
	IL_0b82:            Temp_112->Add(safe_cast<System::Object^>(Temp_128),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0b87:                                                                        //dup
	IL_0b88:                                                                        //ldstr				L"\x5121\x4123\x4325\x4927\x4629\x5F2B\x412D"
	IL_0b8d:                                                                        //ldloc				V_7
	IL_0b91:            Temp_129=a(L"\x5121\x4123\x4325\x4927\x4629\x5F2B\x412D",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b96:                                                                        //ldc.i4.s				16
	IL_0b98:                                                                        //box				System::Int32
	IL_0b9d:            Temp_112->Add(safe_cast<System::Object^>(Temp_129),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0ba2:                                                                        //dup
	IL_0ba3:                                                                        //ldstr				L"\x4C21\x4B23\x5225\x4D27"
	IL_0ba8:                                                                        //ldloc				V_7
	IL_0bac:            Temp_130=a(L"\x4C21\x4B23\x5225\x4D27",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bb1:                                                                        //ldc.i4.s				17
	IL_0bb3:                                                                        //box				System::Int32
	IL_0bb8:            Temp_112->Add(safe_cast<System::Object^>(Temp_130),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0bbd:                                                                        //dup
	IL_0bbe:                                                                        //ldstr				L"\x4E21\x4D23\x5525\x5C27"
	IL_0bc3:                                                                        //ldloc				V_7
	IL_0bc7:            Temp_131=a(L"\x4E21\x4D23\x5525\x5C27",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bcc:                                                                        //ldc.i4.s				18
	IL_0bce:                                                                        //box				System::Int32
	IL_0bd3:            Temp_112->Add(safe_cast<System::Object^>(Temp_131),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0bd8:                                                                        //volatile.
	IL_0bda:            Root::T_x188::F_x8=Temp_112;                                //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x8
	IL_0bdf:                                                                        //ldc.i4				0x3
	IL_0be4:            V_6=3;                                                      //stloc				V_6
	IL_0be8:            /*goto IL_0016;*/goto IL_0bed;                              //br				IL_0016
	IL_0bed:            goto IL_09ba;                                               //br				IL_09ba
	IL_0bf2:            return;                                                     //ret

}
inline void Root::T_x86::T_x1::M_x12(System::Xml::XmlElement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::TextWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IO::TextWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::TextWriter^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::IO::TextWriter^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::IO::TextWriter^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::IO::TextWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::IO::TextWriter^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::IO::TextWriter^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::IO::TextWriter^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Boolean Temp_24 = false;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	System::IO::TextWriter^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::IO::TextWriter^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::IO::TextWriter^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::IO::TextWriter^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	Root::T_x111^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::IO::TextWriter^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::IO::TextWriter^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	Root::T_x111^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::IO::TextWriter^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::Boolean Temp_51 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_1=19;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x6
	IL_000e:            V_0=6;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0043;                                               //br.s				IL_0043
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0067;case 1:goto IL_0109;case 2:goto IL_0194;case 3:goto IL_00f6;case 4:goto IL_0220;case 5:goto IL_01f9;case 6:goto IL_0014;case 7:goto IL_00cf;case 8:goto IL_0130;};//switch				(IL_0067,IL_0109,IL_0194,IL_00f6,IL_0220,IL_01f9,IL_0014,IL_00cf,IL_0130)
	IL_0043:                                                                        //ldarg.1
	IL_0044:                                                                        //ldstr				L"\x7130\x5F32\x5434\x5936\x5E38\x4C3A\x523C\x4D3E\x2540"
	IL_0049:                                                                        //ldloc				V_1
	IL_004d:            Temp_50=a(L"\x7130\x5F32\x5434\x5936\x5E38\x4C3A\x523C\x4D3E\x2540",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0052:            Temp_51=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_50);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_0057:            if(!Temp_51)goto IL_00fb;                                   //brfalse				IL_00fb
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_0=0;                                                      //stloc				V_0
	IL_0065:            /*goto IL_0016;*/goto IL_0067;                              //br.s				IL_0016
	IL_0067:            goto IL_0199;                                               //br				IL_0199
	IL_006c:                                                                        //ldarg.0
	IL_006d:            Temp_9=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0072:                                                                        //ldstr				L"\x0D30\x4632\x0B34"
	IL_0077:                                                                        //ldloc				V_1
	IL_007b:            Temp_10=a(L"\x0D30\x4632\x0B34",V_1);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0080:            Temp_9->Write(Temp_10);                                     //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_11=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_008b:                                                                        //ldarg.1
	IL_008c:                                                                        //ldstr				L"\x7130\x5A32\x5B34\x4336\x5C38\x493A\x533C\x5E3E\x2D40"
	IL_0091:                                                                        //ldloc				V_1
	IL_0095:            Temp_12=a(L"\x7130\x5A32\x5B34\x4336\x5C38\x493A\x533C\x5E3E\x2D40",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009a:            Temp_13=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_12);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_009f:            Temp_11->Write(Temp_13);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:            Temp_14=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_00aa:                                                                        //ldstr				L"\x0D30\x1C32\x4034\x0936"
	IL_00af:                                                                        //ldloc				V_1
	IL_00b3:            Temp_15=a(L"\x0D30\x1C32\x4034\x0936",V_1);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b8:            Temp_14->Write(Temp_15);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00bd:            return;                                                     //ret
	IL_00be:            goto IL_00c1;                                               //br.s				IL_00c1
	IL_00c0:                                                                        //break
	IL_00c1:                                                                        //ldc.i4				0x7
	IL_00c6:            V_0=7;                                                      //stloc				V_0
	IL_00ca:            /*goto IL_0016;*/goto IL_00cf;                              //br				IL_0016
	IL_00cf:                                                                        //ldarg.1
	IL_00d0:                                                                        //ldstr				L"\x7130\x5A32\x5B34\x4336\x5C38\x493A\x533C\x5E3E\x2D40"
	IL_00d5:                                                                        //ldloc				V_1
	IL_00d9:            Temp_25=a(L"\x7130\x5A32\x5B34\x4336\x5C38\x493A\x533C\x5E3E\x2D40",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            Temp_26=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_25);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_00e3:            if(!Temp_26)goto IL_01eb;                                   //brfalse				IL_01eb
	IL_00e8:                                                                        //ldc.i4				0x3
	IL_00ed:            V_0=3;                                                      //stloc				V_0
	IL_00f1:            /*goto IL_0016;*/goto IL_00f6;                              //br				IL_0016
	IL_00f6:            goto IL_006c;                                               //br				IL_006c
	IL_00fb:                                                                        //ldc.i4				0x1
	IL_0100:            V_0=1;                                                      //stloc				V_0
	IL_0104:            /*goto IL_0016;*/goto IL_0109;                              //br				IL_0016
	IL_0109:                                                                        //ldarg.1
	IL_010a:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_010f:                                                                        //ldloc				V_1
	IL_0113:            Temp_7=a(L"\x7130\x5032\x4734\x5236\x5F38",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0118:            Temp_8=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_7);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_011d:            if(!Temp_8)goto IL_00be;                                    //brfalse				IL_00be
	IL_0122:                                                                        //ldc.i4				0x8
	IL_0127:            V_0=8;                                                      //stloc				V_0
	IL_012b:            /*goto IL_0016;*/goto IL_0130;                              //br				IL_0016
	IL_0130:            goto IL_0225;                                               //br				IL_0225
	IL_0135:                                                                        //ldarg.0
	IL_0136:            Temp_16=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_013b:                                                                        //ldstr				L"\x0D30\x4632\x0B34"
	IL_0140:                                                                        //ldloc				V_1
	IL_0144:            Temp_17=a(L"\x0D30\x4632\x0B34",V_1);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0149:            Temp_16->Write(Temp_17);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_014e:                                                                        //ldarg.0
	IL_014f:            Temp_18=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0154:                                                                        //ldarg.1
	IL_0155:                                                                        //ldstr				L"\x7130\x4732\x5A34\x4736\x5038\x583A"
	IL_015a:                                                                        //ldloc				V_1
	IL_015e:            Temp_19=a(L"\x7130\x4732\x5A34\x4736\x5038\x583A",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0163:            Temp_20=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_19);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0168:            Temp_18->Write(Temp_20);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_016d:                                                                        //ldarg.0
	IL_016e:            Temp_21=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0173:                                                                        //ldstr				L"\x0D30\x1C32\x4034\x0936"
	IL_0178:                                                                        //ldloc				V_1
	IL_017c:            Temp_22=a(L"\x0D30\x1C32\x4034\x0936",V_1);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0181:            Temp_21->Write(Temp_22);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0186:                                                                        //ldc.i4				0x2
	IL_018b:            V_0=2;                                                      //stloc				V_0
	IL_018f:            /*goto IL_0016;*/goto IL_0194;                              //br				IL_0016
	IL_0194:            goto IL_030e;                                               //br				IL_030e
	IL_0199:                                                                        //ldarg.0
	IL_019a:            Temp_0=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_019f:                                                                        //ldstr				L"\x0D30\x5132\x0B34"
	IL_01a4:                                                                        //ldloc				V_1
	IL_01a8:            Temp_1=a(L"\x0D30\x5132\x0B34",V_1);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ad:            Temp_0->Write(Temp_1);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01b2:                                                                        //ldarg.0
	IL_01b3:            Temp_2=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01b8:                                                                        //ldarg.1
	IL_01b9:                                                                        //ldstr				L"\x7130\x5F32\x5434\x5936\x5E38\x4C3A\x523C\x4D3E\x2540"
	IL_01be:                                                                        //ldloc				V_1
	IL_01c2:            Temp_3=a(L"\x7130\x5F32\x5434\x5936\x5E38\x4C3A\x523C\x4D3E\x2540",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c7:            Temp_4=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_3);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_01cc:            Temp_2->Write(Temp_4);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01d1:                                                                        //ldarg.0
	IL_01d2:            Temp_5=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01d7:                                                                        //ldstr				L"\x0D30\x1C32\x5734\x0936"
	IL_01dc:                                                                        //ldloc				V_1
	IL_01e0:            Temp_6=a(L"\x0D30\x1C32\x5734\x0936",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e5:            Temp_5->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01ea:            return;                                                     //ret
	IL_01eb:                                                                        //ldc.i4				0x5
	IL_01f0:            V_0=5;                                                      //stloc				V_0
	IL_01f4:            /*goto IL_0016;*/goto IL_01f9;                              //br				IL_0016
	IL_01f9:                                                                        //ldarg.1
	IL_01fa:                                                                        //ldstr				L"\x7130\x4732\x5A34\x4736\x5038\x583A"
	IL_01ff:                                                                        //ldloc				V_1
	IL_0203:            Temp_23=a(L"\x7130\x4732\x5A34\x4736\x5038\x583A",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0208:            Temp_24=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_23);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_020d:            if(!Temp_24)goto IL_030e;                                   //brfalse				IL_030e
	IL_0212:                                                                        //ldc.i4				0x4
	IL_0217:            V_0=4;                                                      //stloc				V_0
	IL_021b:            /*goto IL_0016;*/goto IL_0220;                              //br				IL_0016
	IL_0220:            goto IL_0135;                                               //br				IL_0135
	IL_0225:                                                                        //ldarg.0
	IL_0226:            Temp_27=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_022b:                                                                        //ldstr				L"\x0D30\x5232\x1534\x5F36\x4B38\x5E3A\x5B3C\x023E\x6640"
	IL_0230:                                                                        //ldloc				V_1
	IL_0234:            Temp_28=a(L"\x0D30\x5232\x1534\x5F36\x4B38\x5E3A\x5B3C\x023E\x6640",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0239:            Temp_27->Write(Temp_28);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_023e:                                                                        //ldarg.0
	IL_023f:            Temp_29=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0244:                                                                        //ldstr				L"\x4430\x4132\x5B34\x0D36\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x7F44"
	IL_0249:                                                                        //ldloc				V_1
	IL_024d:            Temp_30=a(L"\x4430\x4132\x5B34\x0D36\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x7F44",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0252:                                                                        //ldarg.1
	IL_0253:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_0258:                                                                        //ldloc				V_1
	IL_025c:            Temp_31=a(L"\x7130\x5032\x4734\x5236\x5F38",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0261:            Temp_32=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_31);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0266:            Temp_33=System::String::Concat(Temp_30,Temp_32);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_026b:            Temp_29->Write(Temp_33);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0270:                                                                        //ldarg.0
	IL_0271:            Temp_34=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0276:                                                                        //ldstr				L"\x1630\x1332\x4134\x5E36\x4D38\x573A\x583C\x023E\x6640"
	IL_027b:                                                                        //ldloc				V_1
	IL_027f:            Temp_35=a(L"\x1630\x1332\x4134\x5E36\x4D38\x573A\x583C\x023E\x6640",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0284:            Temp_34->Write(Temp_35);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0289:                                                                        //ldarg.0
	IL_028a:            Temp_36=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_028f:                                                                        //ldarg.1
	IL_0290:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_0295:                                                                        //ldloc				V_1
	IL_0299:            Temp_37=a(L"\x7130\x5032\x4734\x5236\x5F38",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029e:            Temp_38=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_37);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_02a3:            Temp_39=gcnew Root::T_x111(Temp_38);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_02a8:            Temp_40=Temp_39->M_x12();                                   //call				System::String^ Root::T_x111::M_x12()
	IL_02ad:            Temp_36->Write(Temp_40);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02b2:                                                                        //ldarg.0
	IL_02b3:            Temp_41=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02b8:                                                                        //ldstr				L"\x1630\x0D32"
	IL_02bd:                                                                        //ldloc				V_1
	IL_02c1:            Temp_42=a(L"\x1630\x0D32",V_1);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c6:            Temp_41->Write(Temp_42);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02cb:                                                                        //ldarg.0
	IL_02cc:            Temp_43=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02d1:                                                                        //ldarg.1
	IL_02d2:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_02d7:                                                                        //ldloc				V_1
	IL_02db:            Temp_44=a(L"\x7130\x5032\x4734\x5236\x5F38",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02e0:            Temp_45=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_44);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_02e5:            Temp_46=gcnew Root::T_x111(Temp_45);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_02ea:            Temp_47=Temp_46->M_x13();                                   //call				System::String^ Root::T_x111::M_x13()
	IL_02ef:            Temp_43->Write(Temp_47);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02f4:                                                                        //ldarg.0
	IL_02f5:            Temp_48=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02fa:                                                                        //ldstr				L"\x0D30\x1C32\x5434\x0936"
	IL_02ff:                                                                        //ldloc				V_1
	IL_0303:            Temp_49=a(L"\x0D30\x1C32\x5434\x0936",V_1);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0308:            Temp_48->Write(Temp_49);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_030d:            return;                                                     //ret
	IL_030e:            return;                                                     //ret

}
inline void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Xml::XmlNodeList^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:                                                                        //ldarg.2
	IL_0003:            Temp_0=A_0->SelectNodes(A_1);                               //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::SelectNodes(System::String^)
	IL_0008:            this->M_x1(Temp_0);                                         //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNodeList^)
	IL_000d:            return;                                                     //ret

}
inline void Root::T_x86::T_x1::M_x13(System::Xml::XmlElement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::TextWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IO::TextWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::TextWriter^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Xml::XmlNode^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Xml::XmlNodeList^ Temp_11 = nullptr;
	System::Xml::XmlNode^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::IO::TextWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::IO::TextWriter^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::IO::TextWriter^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::IO::TextWriter^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	Root::T_x111^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::IO::TextWriter^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::IO::TextWriter^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	Root::T_x111^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::IO::TextWriter^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::IO::TextWriter^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::Boolean Temp_40 = false;
	//local variables.
	System::Xml::XmlNodeList^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_3=19;                                                     //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x9
	IL_000e:            V_2=9;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0053;                                               //br.s				IL_0053
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0108;case 1:goto IL_00e1;case 2:goto IL_00b6;case 3:goto IL_0243;case 4:goto IL_00a3;case 5:goto IL_011b;case 6:goto IL_0275;case 7:goto IL_022f;case 8:goto IL_0134;case 9:goto IL_0014;case 10:goto IL_02d9;case 11:goto IL_0077;case 12:goto IL_00d1;};//switch				(IL_0108,IL_00e1,IL_00b6,IL_0243,IL_00a3,IL_011b,IL_0275,IL_022f,IL_0134,IL_0014,IL_02d9,IL_0077,IL_00d1)
	IL_0053:                                                                        //ldarg.1
	IL_0054:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_0059:                                                                        //ldloc				V_3
	IL_005d:            Temp_39=a(L"\x7130\x5032\x4734\x5236\x5F38",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0062:            Temp_40=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_39);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_0067:            if(!Temp_40)goto IL_00d3;                                   //brfalse				IL_00d3
	IL_006c:                                                                        //ldc.i4				0xb
	IL_0071:            V_2=11;                                                     //stloc				V_2
	IL_0075:            /*goto IL_0016;*/goto IL_0077;                              //br.s				IL_0016
	IL_0077:            goto IL_0139;                                               //br				IL_0139
	IL_007c:                                                                        //ldarg.0
	IL_007d:            Temp_37=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0082:                                                                        //ldstr				L"\x1130\x4F32\x1534"
	IL_0087:                                                                        //ldloc				V_3
	IL_008b:            Temp_38=a(L"\x1130\x4F32\x1534",V_3);                       //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:            Temp_37->Write(Temp_38);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0095:                                                                        //ldc.i4				0x4
	IL_009a:            V_2=4;                                                      //stloc				V_2
	IL_009e:            /*goto IL_0016;*/goto IL_00a3;                              //br				IL_0016
	IL_00a3:            goto IL_0231;                                               //br				IL_0231
	IL_00a8:                                                                        //ldc.i4				0x2
	IL_00ad:            V_2=2;                                                      //stloc				V_2
	IL_00b1:            /*goto IL_0016;*/goto IL_00b6;                              //br				IL_0016
	IL_00b6:                                                                        //ldloc.0
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:            Temp_12=V_0[V_1];                                           //callvirt				System::Xml::XmlNode^ System::Xml::XmlNodeList::get_ItemOf(System::Int32)
	IL_00bd:                                                                        //ldarg.1
	IL_00be:            if(Temp_12!=safe_cast<System::Xml::XmlNode^>(A_0))goto IL_0231;//bne.un				IL_0231
	IL_00c3:                                                                        //ldc.i4				0xc
	IL_00c8:            V_2=12;                                                     //stloc				V_2
	IL_00cc:            /*goto IL_0016;*/goto IL_00d1;                              //br				IL_0016
	IL_00d1:            goto IL_007c;                                               //br.s				IL_007c
	IL_00d3:                                                                        //ldc.i4				0x1
	IL_00d8:            V_2=1;                                                      //stloc				V_2
	IL_00dc:            /*goto IL_0016;*/goto IL_00e1;                              //br				IL_0016
	IL_00e1:                                                                        //ldarg.1
	IL_00e2:                                                                        //ldstr				L"\x7130\x4732\x5A34\x4736\x5038\x583A"
	IL_00e7:                                                                        //ldloc				V_3
	IL_00eb:            Temp_7=a(L"\x7130\x4732\x5A34\x4736\x5038\x583A",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f0:            Temp_8=Root::T_x86::T_x1::M_x1(safe_cast<System::Xml::XmlNode^>(A_0),Temp_7);//call				System::Boolean Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^,System::String^)
	IL_00f5:            if(!Temp_8)goto IL_0248;                                    //brfalse				IL_0248
	IL_00fa:                                                                        //ldc.i4				0x0
	IL_00ff:            V_2=0;                                                      //stloc				V_2
	IL_0103:            /*goto IL_0016;*/goto IL_0108;                              //br				IL_0016
	IL_0108:            goto IL_027a;                                               //br				IL_027a
	IL_010d:                                                                        //ldc.i4				0x5
	IL_0112:            V_2=5;                                                      //stloc				V_2
	IL_0116:            /*goto IL_0016;*/goto IL_011b;                              //br				IL_0016
	IL_011b:                                                                        //ldloc.1
	IL_011c:                                                                        //ldloc.0
	IL_011d:            Temp_13=V_0->Count;                                         //callvirt				System::Int32 System::Xml::XmlNodeList::get_Count()
	IL_0122:                                                                        //ldc.i4.1
	IL_0123:                                                                        //sub
	IL_0124:            if(V_1<(Temp_13 - 1))goto IL_00a8;                          //blt.s				IL_00a8
	IL_0126:                                                                        //ldc.i4				0x8
	IL_012b:            V_2=8;                                                      //stloc				V_2
	IL_012f:            /*goto IL_0016;*/goto IL_0134;                              //br				IL_0016
	IL_0134:            goto IL_02de;                                               //br				IL_02de
	IL_0139:                                                                        //ldarg.0
	IL_013a:            Temp_14=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_013f:                                                                        //ldstr				L"\x0D30\x5232\x1534\x5F36\x4B38\x5E3A\x5B3C\x023E\x6640"
	IL_0144:                                                                        //ldloc				V_3
	IL_0148:            Temp_15=a(L"\x0D30\x5232\x1534\x5F36\x4B38\x5E3A\x5B3C\x023E\x6640",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014d:            Temp_14->Write(Temp_15);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0152:                                                                        //ldarg.0
	IL_0153:            Temp_16=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0158:                                                                        //ldstr				L"\x4430\x4132\x5B34\x0D36\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x7F44"
	IL_015d:                                                                        //ldloc				V_3
	IL_0161:            Temp_17=a(L"\x4430\x4132\x5B34\x0D36\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x7F44",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0166:                                                                        //ldarg.1
	IL_0167:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_016c:                                                                        //ldloc				V_3
	IL_0170:            Temp_18=a(L"\x7130\x5032\x4734\x5236\x5F38",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0175:            Temp_19=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_18);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_017a:            Temp_20=System::String::Concat(Temp_17,Temp_19);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_017f:            Temp_16->Write(Temp_20);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0184:                                                                        //ldarg.0
	IL_0185:            Temp_21=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_018a:                                                                        //ldstr				L"\x1630\x1332\x4134\x5E36\x4D38\x573A\x583C\x023E\x6640"
	IL_018f:                                                                        //ldloc				V_3
	IL_0193:            Temp_22=a(L"\x1630\x1332\x4134\x5E36\x4D38\x573A\x583C\x023E\x6640",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0198:            Temp_21->Write(Temp_22);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_019d:                                                                        //ldarg.0
	IL_019e:            Temp_23=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01a3:                                                                        //ldarg.1
	IL_01a4:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_01a9:                                                                        //ldloc				V_3
	IL_01ad:            Temp_24=a(L"\x7130\x5032\x4734\x5236\x5F38",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b2:            Temp_25=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_24);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_01b7:            Temp_26=gcnew Root::T_x111(Temp_25);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_01bc:            Temp_27=Temp_26->M_x12();                                   //call				System::String^ Root::T_x111::M_x12()
	IL_01c1:            Temp_23->Write(Temp_27);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01c6:                                                                        //ldarg.0
	IL_01c7:            Temp_28=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01cc:                                                                        //ldstr				L"\x1630\x0D32"
	IL_01d1:                                                                        //ldloc				V_3
	IL_01d5:            Temp_29=a(L"\x1630\x0D32",V_3);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01da:            Temp_28->Write(Temp_29);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_01df:                                                                        //ldarg.0
	IL_01e0:            Temp_30=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_01e5:                                                                        //ldarg.1
	IL_01e6:                                                                        //ldstr				L"\x7130\x5032\x4734\x5236\x5F38"
	IL_01eb:                                                                        //ldloc				V_3
	IL_01ef:            Temp_31=a(L"\x7130\x5032\x4734\x5236\x5F38",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f4:            Temp_32=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_31);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_01f9:            Temp_33=gcnew Root::T_x111(Temp_32);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_01fe:            Temp_34=Temp_33->M_x13();                                   //call				System::String^ Root::T_x111::M_x13()
	IL_0203:            Temp_30->Write(Temp_34);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0208:                                                                        //ldarg.0
	IL_0209:            Temp_35=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_020e:                                                                        //ldstr				L"\x0D30\x1C32\x5434\x0936"
	IL_0213:                                                                        //ldloc				V_3
	IL_0217:            Temp_36=a(L"\x0D30\x1C32\x5434\x0936",V_3);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_021c:            Temp_35->Write(Temp_36);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0221:                                                                        //ldc.i4				0x7
	IL_0226:            V_2=7;                                                      //stloc				V_2
	IL_022a:            /*goto IL_0016;*/goto IL_022f;                              //br				IL_0016
	IL_022f:            goto IL_0248;                                               //br.s				IL_0248
	IL_0231:                                                                        //ldloc.1
	IL_0232:                                                                        //ldc.i4.1
	IL_0233:                                                                        //add
	IL_0234:            V_1=(V_1 + 1);                                              //stloc.1
	IL_0235:                                                                        //ldc.i4				0x3
	IL_023a:            V_2=3;                                                      //stloc				V_2
	IL_023e:            /*goto IL_0016;*/goto IL_0243;                              //br				IL_0016
	IL_0243:            goto IL_010d;                                               //br				IL_010d
	IL_0248:            goto IL_024b;                                               //br.s				IL_024b
	IL_024a:                                                                        //break
	IL_024b:                                                                        //ldarg.1
	IL_024c:            Temp_9=A_0->ParentNode;                                     //callvirt				System::Xml::XmlNode^ System::Xml::XmlNode::get_ParentNode()
	IL_0251:                                                                        //ldstr				L"\x4230\x5632\x5034\x5636\x5538\x483A\x523C"
	IL_0256:                                                                        //ldloc				V_3
	IL_025a:            Temp_10=a(L"\x4230\x5632\x5034\x5636\x5538\x483A\x523C",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025f:            Temp_11=Temp_9->SelectNodes(Temp_10);                       //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::SelectNodes(System::String^)
	IL_0264:            V_0=Temp_11;                                                //stloc.0
	IL_0265:                                                                        //ldc.i4.0
	IL_0266:            V_1=0;                                                      //stloc.1
	IL_0267:                                                                        //ldc.i4				0x6
	IL_026c:            V_2=6;                                                      //stloc				V_2
	IL_0270:            /*goto IL_0016;*/goto IL_0275;                              //br				IL_0016
	IL_0275:            goto IL_010d;                                               //br				IL_010d
	IL_027a:                                                                        //ldarg.0
	IL_027b:            Temp_0=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0280:                                                                        //ldstr				L"\x0D30\x4632\x0B34"
	IL_0285:                                                                        //ldloc				V_3
	IL_0289:            Temp_1=a(L"\x0D30\x4632\x0B34",V_3);                        //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028e:            Temp_0->Write(Temp_1);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0293:                                                                        //ldarg.0
	IL_0294:            Temp_2=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0299:                                                                        //ldarg.1
	IL_029a:                                                                        //ldstr				L"\x7130\x4732\x5A34\x4736\x5038\x583A"
	IL_029f:                                                                        //ldloc				V_3
	IL_02a3:            Temp_3=a(L"\x7130\x4732\x5A34\x4736\x5038\x583A",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a8:            Temp_4=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_3);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_02ad:            Temp_2->Write(Temp_4);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02b2:                                                                        //ldarg.0
	IL_02b3:            Temp_5=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02b8:                                                                        //ldstr				L"\x0D30\x1C32\x4034\x0936"
	IL_02bd:                                                                        //ldloc				V_3
	IL_02c1:            Temp_6=a(L"\x0D30\x1C32\x4034\x0936",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c6:            Temp_5->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02cb:                                                                        //ldc.i4				0xa
	IL_02d0:            V_2=10;                                                     //stloc				V_2
	IL_02d4:            /*goto IL_0016;*/goto IL_02d9;                              //br				IL_0016
	IL_02d9:            goto IL_0248;                                               //br				IL_0248
	IL_02de:            return;                                                     //ret

}
inline System::String^ Root::T_x86::T_x1::M_x2()
//System::Object^::ToString by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IO::TextWriter^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x1();                                               //call				void Root::T_x86::T_x1::M_x1()
	IL_0006:                                                                        //ldarg.0
	IL_0007:            Temp_0=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_000c:            Temp_1=Temp_0->ToString();                                  //callvirt				System::String^ System::Object::ToString()
	IL_0011:            return Temp_1;                                              //ret

}
inline void Root::T_x86::T_x1::M_x2(System::Xml::XmlElement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::IO::TextWriter^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::TextWriter^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::IO::TextWriter^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::IO::TextWriter^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::IO::TextWriter^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::IO::TextWriter^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_2=9;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0043;                                               //br.s				IL_0043
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_01fe;case 2:goto IL_0131;case 3:goto IL_00c5;case 4:goto IL_01a7;case 5:goto IL_015a;case 6:goto IL_00e4;case 7:goto IL_01dc;case 8:goto IL_01c9;};//switch				(IL_0014,IL_01fe,IL_0131,IL_00c5,IL_01a7,IL_015a,IL_00e4,IL_01dc,IL_01c9)
	IL_0043:                                                                        //ldstr				L"\x4926\x4628\x5F2A\x482C"
	IL_0048:                                                                        //ldloc				V_2
	IL_004c:            Temp_18=a(L"\x4926\x4628\x5F2A\x482C",V_2);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0051:                                                                        //ldstr				L"\x4E26\x4728\x432A\x482C\x5D2E\x5830\x4732\x5C34\x5936\x5F38\x543A"
	IL_0056:                                                                        //ldloc				V_2
	IL_005a:            Temp_19=a(L"\x4E26\x4728\x432A\x482C\x5D2E\x5830\x4732\x5C34\x5936\x5F38\x543A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005f:                                                                        //ldstr				L"\x4E26\x4728\x442A\x592C\x4A2E\x4230"
	IL_0064:                                                                        //ldloc				V_2
	IL_0068:            Temp_20=a(L"\x4E26\x4728\x442A\x592C\x4A2E\x4230",V_2);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:            goto IL_0123;                                               //leave				IL_0123
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_3=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0078:                                                                        //ldstr				L"\x1B26\x4B28\x472A\x422C\x4C2E\x5A30\x4232\x4034\x5836\x4D38\x5E3A\x033C\x033E\x2340\x7D42\x0B44\x2846\x3D48\x2E4A\x774C\x6F4E\x6D50\x7C52\x3754\x6956"
	IL_007d:                                                                        //ldloc				V_2
	IL_0081:            Temp_4=a(L"\x1B26\x4B28\x472A\x422C\x4C2E\x5A30\x4232\x4034\x5836\x4D38\x5E3A\x033C\x033E\x2340\x7D42\x0B44\x2846\x3D48\x2E4A\x774C\x6F4E\x6D50\x7C52\x3754\x6956",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:            Temp_3->Write(Temp_4);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_008b:                                                                        //ldarg.0
	IL_008c:                                                                        //ldarg.1
	IL_008d:            this->M_x1(safe_cast<System::Xml::XmlNode^>(A_0));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0092:                                                                        //ldarg.0
	IL_0093:            Temp_5=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0098:                                                                        //ldstr				L"\x1B26\x0628\x492A\x412C\x402E\x5230\x5832\x4434\x4236\x5638\x4F3A\x583C\x013E"
	IL_009d:                                                                        //ldloc				V_2
	IL_00a1:            Temp_6=a(L"\x1B26\x0628\x492A\x412C\x402E\x5230\x5832\x4434\x4236\x5638\x4F3A\x583C\x013E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a6:            Temp_5->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00ab:            return;                                                     //ret
	IL_00ac:            return;                                                     //ret
	IL_00ad:                                                                        //ldloc.0
	IL_00ae:            Temp_12=System::String::IsInterned(V_0);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_00b3:            V_0=Temp_12;                                                //stloc.0
	IL_00b4:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00b6:                                                                        //break
	IL_00b7:                                                                        //ldc.i4				0x3
	IL_00bc:            V_1=3;                                                      //stloc				V_1
	IL_00c0:            /*goto IL_0016;*/goto IL_00c5;                              //br				IL_0016
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldstr				L"\x4926\x4628\x5F2A\x482C"
	IL_00cb:                                                                        //ldloc				V_2
	IL_00cf:            Temp_2=a(L"\x4926\x4628\x5F2A\x482C",V_2);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d4:            if(V_0==Temp_2)goto IL_0072;                                //beq.s				IL_0072
	IL_00d6:                                                                        //ldc.i4				0x6
	IL_00db:            V_1=6;                                                      //stloc				V_1
	IL_00df:            /*goto IL_0016;*/goto IL_00e4;                              //br				IL_0016
	IL_00e4:            goto IL_01ce;                                               //br				IL_01ce
	IL_00e9:                                                                        //ldarg.0
	IL_00ea:            Temp_8=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_00ef:                                                                        //ldstr				L"\x1B26\x5928\x152A\x112C\x4D2E\x0F30\x7D32\x5A34\x4336\x5C38\x1B3A\x493C\x503E\x6140\x0A42\x2844\x3746\x2548\x2E4A\x204C\x2A4E\x3F50\x2752\x3054\x2556\x2A58\x615A\x7D5C\x635E\x4E60\x0162\x5B64"
	IL_00f4:                                                                        //ldloc				V_2
	IL_00f8:            Temp_9=a(L"\x1B26\x5928\x152A\x112C\x4D2E\x0F30\x7D32\x5A34\x4336\x5C38\x1B3A\x493C\x503E\x6140\x0A42\x2844\x3746\x2548\x2E4A\x204C\x2A4E\x3F50\x2752\x3054\x2556\x2A58\x615A\x7D5C\x635E\x4E60\x0162\x5B64",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fd:            Temp_8->Write(Temp_9);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0102:                                                                        //ldarg.0
	IL_0103:                                                                        //ldarg.1
	IL_0104:            this->M_x1(safe_cast<System::Xml::XmlNode^>(A_0));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_0109:                                                                        //ldarg.0
	IL_010a:            Temp_10=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_010f:                                                                        //ldstr				L"\x1B26\x0628\x5B2A\x132C"
	IL_0114:                                                                        //ldloc				V_2
	IL_0118:            Temp_11=a(L"\x1B26\x0628\x5B2A\x132C",V_2);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011d:            Temp_10->Write(Temp_11);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0122:            return;                                                     //ret
	IL_0123:                                                                        //ldc.i4				0x2
	IL_0128:            V_1=2;                                                      //stloc				V_1
	IL_012c:            /*goto IL_0016;*/goto IL_0131;                              //br				IL_0016
	IL_0131:                                                                        //ldarg.1
	IL_0132:                                                                        //ldstr				L"\x6726\x5D28\x522A\x5D2C\x4A2E"
	IL_0137:                                                                        //ldloc				V_2
	IL_013b:            Temp_0=a(L"\x6726\x5D28\x522A\x5D2C\x4A2E",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0140:            Temp_1=Root::T_x86::T_x1::M_x2(safe_cast<System::Xml::XmlNode^>(A_0),Temp_0);//call				System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^,System::String^)
	IL_0145:                                                                        //dup
	IL_0146:            V_0=Temp_1;                                                 //stloc.0
	IL_0147:            if(V_0==nullptr)goto IL_0200;                               //brfalse				IL_0200
	IL_014c:                                                                        //ldc.i4				0x5
	IL_0151:            V_1=5;                                                      //stloc				V_1
	IL_0155:            /*goto IL_0016;*/goto IL_015a;                              //br				IL_0016
	IL_015a:            goto IL_00ad;                                               //br				IL_00ad
	IL_015f:                                                                        //ldarg.0
	IL_0160:            Temp_14=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0165:                                                                        //ldstr				L"\x1B26\x5928\x152A\x112C\x4D2E\x0F30\x7D32\x5A34\x4336\x5C38\x1B3A\x493C\x503E\x6140\x0A42\x2B44\x2F46\x2C48\x394A\x244C\x3B4E\x3E50\x2152\x2654\x6D56\x7958\x675A\x725C\x3D5E\x5F60"
	IL_016a:                                                                        //ldloc				V_2
	IL_016e:            Temp_15=a(L"\x1B26\x5928\x152A\x112C\x4D2E\x0F30\x7D32\x5A34\x4336\x5C38\x1B3A\x493C\x503E\x6140\x0A42\x2B44\x2F46\x2C48\x394A\x244C\x3B4E\x3E50\x2152\x2654\x6D56\x7958\x675A\x725C\x3D5E\x5F60",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0173:            Temp_14->Write(Temp_15);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0178:                                                                        //ldarg.0
	IL_0179:                                                                        //ldarg.1
	IL_017a:            this->M_x1(safe_cast<System::Xml::XmlNode^>(A_0));          //call				void Root::T_x86::T_x1::M_x1(System::Xml::XmlNode^)
	IL_017f:                                                                        //ldarg.0
	IL_0180:            Temp_16=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0185:                                                                        //ldstr				L"\x1B26\x0628\x5B2A\x132C"
	IL_018a:                                                                        //ldloc				V_2
	IL_018e:            Temp_17=a(L"\x1B26\x0628\x5B2A\x132C",V_2);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0193:            Temp_16->Write(Temp_17);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0198:            return;                                                     //ret
	IL_0199:                                                                        //ldc.i4				0x4
	IL_019e:            V_1=4;                                                      //stloc				V_1
	IL_01a2:            /*goto IL_0016;*/goto IL_01a7;                              //br				IL_0016
	IL_01a7:                                                                        //ldloc.0
	IL_01a8:                                                                        //ldstr				L"\x4E26\x4728\x442A\x592C\x4A2E\x4230"
	IL_01ad:                                                                        //ldloc				V_2
	IL_01b1:            Temp_7=a(L"\x4E26\x4728\x442A\x592C\x4A2E\x4230",V_2);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b6:            if(V_0==Temp_7)goto IL_00e9;                                //beq				IL_00e9
	IL_01bb:                                                                        //ldc.i4				0x8
	IL_01c0:            V_1=8;                                                      //stloc				V_1
	IL_01c4:            /*goto IL_0016;*/goto IL_01c9;                              //br				IL_0016
	IL_01c9:            goto IL_00ac;                                               //br				IL_00ac
	IL_01ce:                                                                        //ldc.i4				0x7
	IL_01d3:            V_1=7;                                                      //stloc				V_1
	IL_01d7:            /*goto IL_0016;*/goto IL_01dc;                              //br				IL_0016
	IL_01dc:                                                                        //ldloc.0
	IL_01dd:                                                                        //ldstr				L"\x4E26\x4728\x432A\x482C\x5D2E\x5830\x4732\x5C34\x5936\x5F38\x543A"
	IL_01e2:                                                                        //ldloc				V_2
	IL_01e6:            Temp_13=a(L"\x4E26\x4728\x432A\x482C\x5D2E\x5830\x4732\x5C34\x5936\x5F38\x543A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01eb:            if(V_0==Temp_13)goto IL_015f;                               //beq				IL_015f
	IL_01f0:                                                                        //ldc.i4				0x1
	IL_01f5:            V_1=1;                                                      //stloc				V_1
	IL_01f9:            /*goto IL_0016;*/goto IL_01fe;                              //br				IL_0016
	IL_01fe:            goto IL_0199;                                               //br.s				IL_0199
	IL_0200:            return;                                                     //ret

}
inline System::String^ Root::T_x86::T_x1::M_x2(System::Xml::XmlNode^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Xml::XmlNodeList^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::Xml::XmlNode^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::Xml::XmlNodeList^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.1
	IL_000d:            Temp_0=A_0->SelectNodes(A_1);                               //callvirt				System::Xml::XmlNodeList^ System::Xml::XmlNode::SelectNodes(System::String^)
	IL_0012:            V_0=Temp_0;                                                 //stloc.0
	IL_0013:                                                                        //ldloc.0
	IL_0014:            Temp_1=V_0->Count;                                          //callvirt				System::Int32 System::Xml::XmlNodeList::get_Count()
	IL_0019:                                                                        //ldc.i4.1
	IL_001a:            if(Temp_1!=1)goto IL_002d;                                  //bne.un.s				IL_002d
	IL_001c:            goto IL_001e;                                               //br.s				IL_001e
	IL_001e:                                                                        //ldloc.0
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            Temp_3=V_0[safe_cast<System::Int32>(0)];                    //callvirt				System::Xml::XmlNode^ System::Xml::XmlNodeList::get_ItemOf(System::Int32)
	IL_0025:            Temp_4=Temp_3->InnerText;                                   //callvirt				System::String^ System::Xml::XmlNode::get_InnerText()
	IL_002a:            V_1=Temp_4;                                                 //stloc.1
	IL_002b:                                                                        //ldloc.1
	IL_002c:            return V_1;                                                 //ret
	IL_002d:            Temp_2=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0032:            return Temp_2;                                              //ret

}
inline void Root::T_x86::T_x1::M_x8(System::Xml::XmlElement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::IO::TextWriter^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::TextWriter^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::IO::TextWriter^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::IO::TextWriter^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::IO::TextWriter^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::IO::TextWriter^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::IO::TextWriter^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::IO::TextWriter^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::IO::TextWriter^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::IO::TextWriter^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::IO::TextWriter^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::IO::TextWriter^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	System::IO::TextWriter^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::IO::TextWriter^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_42 = nullptr;
	System::Int32 Temp_43 = 0;
	System::String^ Temp_44 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_45 = nullptr;
	System::Int32 Temp_46 = 0;
	System::String^ Temp_47 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_48 = nullptr;
	System::Int32 Temp_49 = 0;
	System::String^ Temp_50 = nullptr;
	array<System::Xml::XmlNode^>^ Temp_51 = nullptr;
	System::Int32 Temp_52 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_1=0;                                                      //stloc				V_1
	IL_0009:            goto IL_0050;                                               //br.s				IL_0050
	IL_000b:                                                                        //ldloc				V_0
	IL_000f:            switch(V_0){case 0:goto IL_02e1;case 1:goto IL_0322;case 2:goto IL_021d;case 3:goto IL_00ae;case 4:goto IL_0085;case 5:goto IL_01e1;case 6:goto IL_03f5;case 7:goto IL_017b;case 8:goto IL_0369;case 9:goto IL_01b8;case 10:goto IL_0340;case 11:goto IL_0290;case 12:goto IL_01f4;case 13:goto IL_02b8;case 14:goto IL_00ef;};//switch				(IL_02e1,IL_0322,IL_021d,IL_00ae,IL_0085,IL_01e1,IL_03f5,IL_017b,IL_0369,IL_01b8,IL_0340,IL_0290,IL_01f4,IL_02b8,IL_00ef)
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //ldarg.1
	IL_0052:                                                                        //ldstr				L"\x7B1D\x521F\x5021\x4B23\x5425"
	IL_0057:                                                                        //ldloc				V_1
	IL_005b:            Temp_0=a(L"\x7B1D\x521F\x5021\x4B23\x5425",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0060:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_0);  //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0065:                                                                        //ldarg.0
	IL_0066:                                                                        //ldarg.1
	IL_0067:                                                                        //ldstr				L"\x6D1D\x551F\x4F21\x4923\x4725\x5A27\x5329"
	IL_006c:                                                                        //ldloc				V_1
	IL_0070:            Temp_1=a(L"\x6D1D\x551F\x4F21\x4923\x4725\x5A27\x5329",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0075:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_1);  //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_007a:                                                                        //ldc.i4				0x4
	IL_007f:            V_0=4;                                                      //stloc				V_0
	IL_0083:            /*goto IL_000b;*/goto IL_0085;                              //br.s				IL_000b
	IL_0085:                                                                        //ldarg.1
	IL_0086:                                                                        //ldstr				L"\x6E1D\x411F\x5021\x4523\x4B25"
	IL_008b:                                                                        //ldloc				V_1
	IL_008f:            Temp_17=a(L"\x6E1D\x411F\x5021\x4523\x4B25",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            Temp_18=Root::T_x86::T_x1::M_x1(A_0,Temp_17);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0099:            Temp_19=Temp_18->Length;                                    //ldlen
	IL_009a:                                                                        //conv.i4
	IL_009b:            if(Temp_19==0)goto IL_0180;                                 //brfalse				IL_0180
	IL_00a0:                                                                        //ldc.i4				0x3
	IL_00a5:            V_0=3;                                                      //stloc				V_0
	IL_00a9:            /*goto IL_000b;*/goto IL_00ae;                              //br				IL_000b
	IL_00ae:            goto IL_0222;                                               //br				IL_0222
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_2=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_00b9:                                                                        //ldstr				L"\x221D\x481F\x1621\x1A23\x6325\x5027\x4B29\x412B\x5E2D\x5C2F\x5731\x0833\x1935\x5037\x0E39\x023B"
	IL_00be:                                                                        //ldloc				V_1
	IL_00c2:            Temp_3=a(L"\x221D\x481F\x1621\x1A23\x6325\x5027\x4B29\x412B\x5E2D\x5C2F\x5731\x0833\x1935\x5037\x0E39\x023B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c7:            Temp_2->Write(Temp_3);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_00cc:                                                                        //ldarg.0
	IL_00cd:                                                                        //ldarg.1
	IL_00ce:                                                                        //ldstr				L"\x7B1D\x581F\x4321\x4923\x5625\x4427\x4F29"
	IL_00d3:                                                                        //ldloc				V_1
	IL_00d7:            Temp_4=a(L"\x7B1D\x581F\x4321\x4923\x5625\x4427\x4F29",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00dc:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_4);  //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_00e1:                                                                        //ldc.i4				0xe
	IL_00e6:            V_0=14;                                                     //stloc				V_0
	IL_00ea:            /*goto IL_000b;*/goto IL_00ef;                              //br				IL_000b
	IL_00ef:            goto IL_01e6;                                               //br				IL_01e6
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            Temp_32=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_00fa:                                                                        //ldstr				L"\x221D\x481F\x1621\x1A23\x7625\x4D27\x5829\x412B\x472D\x432F\x4131\x5D33\x5935\x5637\x0639\x133B\x563D\x743F\x7C41"
	IL_00ff:                                                                        //ldloc				V_1
	IL_0103:            Temp_33=a(L"\x221D\x481F\x1621\x1A23\x7625\x4D27\x5829\x412B\x472D\x432F\x4131\x5D33\x5935\x5637\x0639\x133B\x563D\x743F\x7C41",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0108:            Temp_32->Write(Temp_33);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_010d:                                                                        //ldarg.0
	IL_010e:            Temp_34=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0113:                                                                        //ldstr				L"\x221D\x541F\x4321\x4623\x4A25\x4D27\x0A29\x4F2B\x4B2D\x5C2F\x5E31\x4733\x4635\x5937\x5939\x553B\x503D\x273F\x7F41\x6343\x7645\x6F47\x6A49\x2F4B\x224D\x314F\x2151\x2753\x6B55\x7F57\x2959\x285B\x3F5D\x0E5F\x0661\x0563\x1465\x0C67\x4D69\x526B"
	IL_0118:                                                                        //ldloc				V_1
	IL_011c:            Temp_35=a(L"\x221D\x541F\x4321\x4623\x4A25\x4D27\x0A29\x4F2B\x4B2D\x5C2F\x5E31\x4733\x4635\x5937\x5939\x553B\x503D\x273F\x7F41\x6343\x7645\x6F47\x6A49\x2F4B\x224D\x314F\x2151\x2753\x6B55\x7F57\x2959\x285B\x3F5D\x0E5F\x0661\x0563\x1465\x0C67\x4D69\x526B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0121:            Temp_34->Write(Temp_35);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0126:                                                                        //ldarg.0
	IL_0127:            Temp_36=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_012c:                                                                        //ldstr				L"\x221D\x541F\x5021\x0423\x5025\x4927\x4629\x452B\x492D\x5E2F\x0F31\x1333\x4235\x5737\x4A39\x1B3B\x003D\x7C3F\x3641\x2C43\x7845\x0547\x2F49\x214B\x2C4D\x354F\x2051\x6853\x7955\x2C57\x3259\x625B\x625D\x145F\x0A61\x5A63\x2265\x0D67\x1969\x0F6B\x1C6D\x196F\x0271\x0073\x1F75\x1777\x1479\x407B\x517D\xF47F\xEA81\xBA83\xBA85\xA787\xFE89\xFE8B\xB08D"
	IL_0131:                                                                        //ldloc				V_1
	IL_0135:            Temp_37=a(L"\x221D\x541F\x5021\x0423\x5025\x4927\x4629\x452B\x492D\x5E2F\x0F31\x1333\x4235\x5737\x4A39\x1B3B\x003D\x7C3F\x3641\x2C43\x7845\x0547\x2F49\x214B\x2C4D\x354F\x2051\x6853\x7955\x2C57\x3259\x625B\x625D\x145F\x0A61\x5A63\x2265\x0D67\x1969\x0F6B\x1C6D\x196F\x0271\x0073\x1F75\x1777\x1479\x407B\x517D\xF47F\xEA81\xBA83\xBA85\xA787\xFE89\xFE8B\xB08D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013a:            Temp_36->Write(Temp_37);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_013f:                                                                        //ldarg.0
	IL_0140:                                                                        //ldarg.1
	IL_0141:                                                                        //ldstr				L"\x6E1D\x451F\x5021\x4923\x4F25\x5B27\x5929\x452B\x412D\x5E2F"
	IL_0146:                                                                        //ldloc				V_1
	IL_014a:            Temp_38=a(L"\x6E1D\x451F\x5021\x4923\x4F25\x5B27\x5929\x452B\x412D\x5E2F",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014f:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_38); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0154:                                                                        //ldarg.0
	IL_0155:            Temp_39=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_015a:                                                                        //ldstr				L"\x221D\x0F1F\x5621\x4523\x4425\x4427\x4F29\x122B"
	IL_015f:                                                                        //ldloc				V_1
	IL_0163:            Temp_40=a(L"\x221D\x0F1F\x5621\x4523\x4425\x4427\x4F29\x122B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0168:            Temp_39->Write(Temp_40);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_016d:                                                                        //ldc.i4				0x7
	IL_0172:            V_0=7;                                                      //stloc				V_0
	IL_0176:            /*goto IL_000b;*/goto IL_017b;                              //br				IL_000b
	IL_017b:            goto IL_0295;                                               //br				IL_0295
	IL_0180:                                                                        //ldarg.0
	IL_0181:                                                                        //ldarg.1
	IL_0182:                                                                        //ldstr				L"\x6C1D\x451F\x5621\x5123\x5425\x4627\x5929"
	IL_0187:                                                                        //ldloc				V_1
	IL_018b:            Temp_20=a(L"\x6C1D\x451F\x5621\x5123\x5425\x4627\x5929",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0190:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_20); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0195:                                                                        //ldarg.0
	IL_0196:                                                                        //ldarg.1
	IL_0197:                                                                        //ldstr				L"\x681D\x411F\x4E21\x5123\x4325"
	IL_019c:                                                                        //ldloc				V_1
	IL_01a0:            Temp_21=a(L"\x681D\x411F\x4E21\x5123\x4325",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a5:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_21); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_01aa:                                                                        //ldc.i4				0x9
	IL_01af:            V_0=9;                                                      //stloc				V_0
	IL_01b3:            /*goto IL_000b;*/goto IL_01b8;                              //br				IL_000b
	IL_01b8:                                                                        //ldarg.1
	IL_01b9:                                                                        //ldstr				L"\x7B1D\x581F\x4121\x4123\x5625\x5C27\x4329\x432B\x402D"
	IL_01be:                                                                        //ldloc				V_1
	IL_01c2:            Temp_41=a(L"\x7B1D\x581F\x4121\x4123\x5625\x5C27\x4329\x432B\x402D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c7:            Temp_42=Root::T_x86::T_x1::M_x1(A_0,Temp_41);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_01cc:            Temp_43=Temp_42->Length;                                    //ldlen
	IL_01cd:                                                                        //conv.i4
	IL_01ce:            if(Temp_43==0)goto IL_0327;                                 //brfalse				IL_0327
	IL_01d3:                                                                        //ldc.i4				0x5
	IL_01d8:            V_0=5;                                                      //stloc				V_0
	IL_01dc:            /*goto IL_000b;*/goto IL_01e1;                              //br				IL_000b
	IL_01e1:            goto IL_036e;                                               //br				IL_036e
	IL_01e6:                                                                        //ldc.i4				0xc
	IL_01eb:            V_0=12;                                                     //stloc				V_0
	IL_01ef:            /*goto IL_000b;*/goto IL_01f4;                              //br				IL_000b
	IL_01f4:                                                                        //ldarg.1
	IL_01f5:                                                                        //ldstr				L"\x6D1D\x451F\x4721\x4523\x4A25\x5B27\x4529"
	IL_01fa:                                                                        //ldloc				V_1
	IL_01fe:            Temp_47=a(L"\x6D1D\x451F\x4721\x4523\x4A25\x5B27\x4529",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0203:            Temp_48=Root::T_x86::T_x1::M_x1(A_0,Temp_47);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0208:            Temp_49=Temp_48->Length;                                    //ldlen
	IL_0209:                                                                        //conv.i4
	IL_020a:            if(Temp_49==0)goto IL_03fa;                                 //brfalse				IL_03fa
	IL_020f:                                                                        //ldc.i4				0x2
	IL_0214:            V_0=2;                                                      //stloc				V_0
	IL_0218:            /*goto IL_000b;*/goto IL_021d;                              //br				IL_000b
	IL_021d:            goto IL_02e6;                                               //br				IL_02e6
	IL_0222:                                                                        //ldarg.0
	IL_0223:            Temp_10=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0228:                                                                        //ldstr				L"\x221D\x481F\x1621\x1A23\x7625\x4927\x5829\x4D2B\x432D\x552F\x4631\x5133\x4435\x4B37\x0639\x133B\x563D\x743F\x7C41"
	IL_022d:                                                                        //ldloc				V_1
	IL_0231:            Temp_11=a(L"\x221D\x481F\x1621\x1A23\x7625\x4927\x5829\x4D2B\x432D\x552F\x4631\x5133\x4435\x4B37\x0639\x133B\x563D\x743F\x7C41",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0236:            Temp_10->Write(Temp_11);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_023b:                                                                        //ldarg.0
	IL_023c:            Temp_12=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0241:                                                                        //ldstr				L"\x221D\x441F\x4E21\x1A23"
	IL_0246:                                                                        //ldloc				V_1
	IL_024a:            Temp_13=a(L"\x221D\x441F\x4E21\x1A23",V_1);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024f:            Temp_12->Write(Temp_13);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0254:                                                                        //ldarg.0
	IL_0255:                                                                        //ldarg.1
	IL_0256:                                                                        //ldstr				L"\x6E1D\x411F\x5021\x4523\x4B25"
	IL_025b:                                                                        //ldloc				V_1
	IL_025f:            Temp_14=a(L"\x6E1D\x411F\x5021\x4523\x4B25",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0264:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_14); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0269:                                                                        //ldarg.0
	IL_026a:            Temp_15=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_026f:                                                                        //ldstr				L"\x221D\x0F1F\x4621\x4823\x1825"
	IL_0274:                                                                        //ldloc				V_1
	IL_0278:            Temp_16=a(L"\x221D\x0F1F\x4621\x4823\x1825",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027d:            Temp_15->Write(Temp_16);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0282:                                                                        //ldc.i4				0xb
	IL_0287:            V_0=11;                                                     //stloc				V_0
	IL_028b:            /*goto IL_000b;*/goto IL_0290;                              //br				IL_000b
	IL_0290:            goto IL_0180;                                               //br				IL_0180
	IL_0295:                                                                        //ldarg.0
	IL_0296:                                                                        //ldarg.1
	IL_0297:                                                                        //ldstr				L"\x6C1D\x451F\x4F21\x4523\x5425\x4327\x5929"
	IL_029c:                                                                        //ldloc				V_1
	IL_02a0:            Temp_31=a(L"\x6C1D\x451F\x4F21\x4523\x5425\x4327\x5929",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a5:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_31); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_02aa:                                                                        //ldc.i4				0xd
	IL_02af:            V_0=13;                                                     //stloc				V_0
	IL_02b3:            /*goto IL_000b;*/goto IL_02b8;                              //br				IL_000b
	IL_02b8:                                                                        //ldarg.1
	IL_02b9:                                                                        //ldstr				L"\x7B1D\x581F\x4321\x4923\x5625\x4427\x4F29"
	IL_02be:                                                                        //ldloc				V_1
	IL_02c2:            Temp_50=a(L"\x7B1D\x581F\x4321\x4923\x5625\x4427\x4F29",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c7:            Temp_51=Root::T_x86::T_x1::M_x1(A_0,Temp_50);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_02cc:            Temp_52=Temp_51->Length;                                    //ldlen
	IL_02cd:                                                                        //conv.i4
	IL_02ce:            if(Temp_52==0)goto IL_01e6;                                 //brfalse				IL_01e6
	IL_02d3:                                                                        //ldc.i4				0x0
	IL_02d8:            V_0=0;                                                      //stloc				V_0
	IL_02dc:            /*goto IL_000b;*/goto IL_02e1;                              //br				IL_000b
	IL_02e1:            goto IL_00b3;                                               //br				IL_00b3
	IL_02e6:                                                                        //ldarg.0
	IL_02e7:            Temp_7=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_02ec:                                                                        //ldstr				L"\x221D\x481F\x1621\x1A23\x7525\x4D27\x4F29\x0C2B\x6F2D\x5C2F\x4131\x5B33\x0A35\x1737\x5239\x083B\x003D"
	IL_02f1:                                                                        //ldloc				V_1
	IL_02f5:            Temp_8=a(L"\x221D\x481F\x1621\x1A23\x7525\x4D27\x4F29\x0C2B\x6F2D\x5C2F\x4131\x5B33\x0A35\x1737\x5239\x083B\x003D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fa:            Temp_7->Write(Temp_8);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_02ff:                                                                        //ldarg.0
	IL_0300:                                                                        //ldarg.1
	IL_0301:                                                                        //ldstr				L"\x6D1D\x451F\x4721\x4523\x4A25\x5B27\x4529"
	IL_0306:                                                                        //ldloc				V_1
	IL_030a:            Temp_9=a(L"\x6D1D\x451F\x4721\x4523\x4A25\x5B27\x4529",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_030f:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_9);  //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_0314:                                                                        //ldc.i4				0x1
	IL_0319:            V_0=1;                                                      //stloc				V_0
	IL_031d:            /*goto IL_000b;*/goto IL_0322;                              //br				IL_000b
	IL_0322:            goto IL_03fa;                                               //br				IL_03fa
	IL_0327:                                                                        //ldc.i4.4
	IL_0328:                                                                        //dup
	IL_0329:                                                                        //dup
	IL_032a:                                                                        //ldc.i4.2
	IL_032b:                                                                        //sub
	IL_032c:                                                                        //blt				IL_0328
	IL_0331:                                                                        //pop
	IL_0332:                                                                        //ldc.i4				0xa
	IL_0337:            V_0=10;                                                     //stloc				V_0
	IL_033b:            /*goto IL_000b;*/goto IL_0340;                              //br				IL_000b
	IL_0340:                                                                        //ldarg.1
	IL_0341:                                                                        //ldstr				L"\x6E1D\x451F\x5021\x4923\x4F25\x5B27\x5929\x452B\x412D\x5E2F"
	IL_0346:                                                                        //ldloc				V_1
	IL_034a:            Temp_44=a(L"\x6E1D\x451F\x5021\x4923\x4F25\x5B27\x5929\x452B\x412D\x5E2F",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_034f:            Temp_45=Root::T_x86::T_x1::M_x1(A_0,Temp_44);               //call				array<System::Xml::XmlNode^>^ Root::T_x86::T_x1::M_x1(System::Xml::XmlElement^,System::String^)
	IL_0354:            Temp_46=Temp_45->Length;                                    //ldlen
	IL_0355:                                                                        //conv.i4
	IL_0356:            if(Temp_46==0)goto IL_0295;                                 //brfalse				IL_0295
	IL_035b:                                                                        //ldc.i4				0x8
	IL_0360:            V_0=8;                                                      //stloc				V_0
	IL_0364:            /*goto IL_000b;*/goto IL_0369;                              //br				IL_000b
	IL_0369:            goto IL_00f4;                                               //br				IL_00f4
	IL_036e:                                                                        //ldarg.0
	IL_036f:            Temp_22=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0374:                                                                        //ldstr				L"\x221D\x481F\x1621\x1A23\x6325\x5027\x4929\x492B\x5E2D\x442F\x5B31\x5B33\x5835\x4B37\x0639\x133B\x563D\x743F\x7C41"
	IL_0379:                                                                        //ldloc				V_1
	IL_037d:            Temp_23=a(L"\x221D\x481F\x1621\x1A23\x6325\x5027\x4929\x492B\x5E2D\x442F\x5B31\x5B33\x5835\x4B37\x0639\x133B\x563D\x743F\x7C41",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0382:            Temp_22->Write(Temp_23);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0387:                                                                        //ldarg.0
	IL_0388:            Temp_24=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_038d:                                                                        //ldstr				L"\x221D\x541F\x4321\x4623\x4A25\x4D27\x0A29\x4F2B\x4B2D\x5C2F\x5E31\x4733\x4635\x5937\x5939\x553B\x503D\x273F\x7F41\x6343\x7645\x6F47\x6A49\x2F4B\x224D\x314F\x2151\x2753\x6B55\x7F57\x2959\x285B\x3F5D\x0E5F\x0661\x0563\x1465\x0C67\x4D69\x526B"
	IL_0392:                                                                        //ldloc				V_1
	IL_0396:            Temp_25=a(L"\x221D\x541F\x4321\x4623\x4A25\x4D27\x0A29\x4F2B\x4B2D\x5C2F\x5E31\x4733\x4635\x5937\x5939\x553B\x503D\x273F\x7F41\x6343\x7645\x6F47\x6A49\x2F4B\x224D\x314F\x2151\x2753\x6B55\x7F57\x2959\x285B\x3F5D\x0E5F\x0661\x0563\x1465\x0C67\x4D69\x526B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_039b:            Temp_24->Write(Temp_25);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03a0:                                                                        //ldarg.0
	IL_03a1:            Temp_26=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03a6:                                                                        //ldstr				L"\x221D\x541F\x5021\x0423\x5025\x4927\x4629\x452B\x492D\x5E2F\x0F31\x1333\x4235\x5737\x4A39\x1B3B\x003D\x7C3F\x3641\x2C43\x7845\x0D47\x3249\x2F4B\x2B4D\x204F\x2651\x3D53\x3955\x3657\x6659\x735B\x2A5D\x085F\x5C61\x5863\x1265\x0067\x5469\x2F6B\x016D\x1E6F\x1671\x1D73\x0275\x1177\x1579\x127B\x427D\xAF7F\xF681\xEC83\xB885\xB487\xA589\xF88B\xFC8D\xAE8F"
	IL_03ab:                                                                        //ldloc				V_1
	IL_03af:            Temp_27=a(L"\x221D\x541F\x5021\x0423\x5025\x4927\x4629\x452B\x492D\x5E2F\x0F31\x1333\x4235\x5737\x4A39\x1B3B\x003D\x7C3F\x3641\x2C43\x7845\x0D47\x3249\x2F4B\x2B4D\x204F\x2651\x3D53\x3955\x3657\x6659\x735B\x2A5D\x085F\x5C61\x5863\x1265\x0067\x5469\x2F6B\x016D\x1E6F\x1671\x1D73\x0275\x1177\x1579\x127B\x427D\xAF7F\xF681\xEC83\xB885\xB487\xA589\xF88B\xFC8D\xAE8F",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b4:            Temp_26->Write(Temp_27);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03b9:                                                                        //ldarg.0
	IL_03ba:                                                                        //ldarg.1
	IL_03bb:                                                                        //ldstr				L"\x7B1D\x581F\x4121\x4123\x5625\x5C27\x4329\x432B\x402D"
	IL_03c0:                                                                        //ldloc				V_1
	IL_03c4:            Temp_28=a(L"\x7B1D\x581F\x4121\x4123\x5625\x5C27\x4329\x432B\x402D",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c9:            this->M_x12(safe_cast<System::Xml::XmlNode^>(A_0),Temp_28); //call				void Root::T_x86::T_x1::M_x12(System::Xml::XmlNode^,System::String^)
	IL_03ce:                                                                        //ldarg.0
	IL_03cf:            Temp_29=this->F_x1;                                         //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_03d4:                                                                        //ldstr				L"\x221D\x0F1F\x5621\x4523\x4425\x4427\x4F29\x122B"
	IL_03d9:                                                                        //ldloc				V_1
	IL_03dd:            Temp_30=a(L"\x221D\x0F1F\x5621\x4523\x4425\x4427\x4F29\x122B",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e2:            Temp_29->Write(Temp_30);                                    //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_03e7:                                                                        //ldc.i4				0x6
	IL_03ec:            V_0=6;                                                      //stloc				V_0
	IL_03f0:            /*goto IL_000b;*/goto IL_03f5;                              //br				IL_000b
	IL_03f5:            goto IL_0327;                                               //br				IL_0327
	IL_03fa:                                                                        //ldarg.0
	IL_03fb:            Temp_5=this->F_x1;                                          //ldfld				System::IO::TextWriter^ Root::T_x86::T_x1 F_x1
	IL_0400:                                                                        //ldstr				L"\x221D\x421F\x5021\x0B23\x1825\x1427\x4829\x5E2B\x012D\x0E2F"
	IL_0405:                                                                        //ldloc				V_1
	IL_0409:            Temp_6=a(L"\x221D\x421F\x5021\x0B23\x1825\x1427\x4829\x5E2B\x012D\x0E2F",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040e:            Temp_5->Write(Temp_6);                                      //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0413:            return;                                                     //ret

}
