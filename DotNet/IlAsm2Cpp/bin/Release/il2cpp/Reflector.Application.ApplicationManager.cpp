#include "global_xref.h"

//[System::Diagnostics::DebuggerHidden()]
inline Reflector::Application::ApplicationManager::ApplicationManager(Reflector::IWindowManager^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::AppDomain^ Temp_1 = nullptr;
	System::UnhandledExceptionEventHandler^ Temp_2 = nullptr;
	System::Threading::ThreadExceptionEventHandler^ Temp_3 = nullptr;
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
	System::Type^ Temp_15 = nullptr;
	System::Reflection::Module^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	Root::T_x110^ Temp_20 = nullptr;
	System::Collections::IDictionary^ Temp_21 = nullptr;
	System::Type^ Temp_22 = nullptr;
	Root::T_x110^ Temp_23 = nullptr;
	Root::T_x110^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	Root::T_x110^ Temp_26 = nullptr;
	Root::T_x134^ Temp_27 = nullptr;
	Root::T_x134^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	Root::T_x108^ Temp_30 = nullptr;
	System::Collections::IDictionary^ Temp_31 = nullptr;
	System::Type^ Temp_32 = nullptr;
	System::Collections::IDictionary^ Temp_33 = nullptr;
	System::Type^ Temp_34 = nullptr;
	Reflector::IWindowManager^ Temp_35 = nullptr;
	Reflector::IWindowManager^ Temp_36 = nullptr;
	System::EventHandler^ Temp_37 = nullptr;
	Reflector::IWindowManager^ Temp_38 = nullptr;
	System::EventHandler^ Temp_39 = nullptr;
	Root::T_x105^ Temp_40 = nullptr;
	System::Collections::IDictionary^ Temp_41 = nullptr;
	System::Type^ Temp_42 = nullptr;
	Reflector::ICommandBarCollection^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	Reflector::ICommandBar^ Temp_45 = nullptr;
	Reflector::ICommandBarCollection^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	Reflector::ICommandBar^ Temp_48 = nullptr;
	Reflector::IWindowManager^ Temp_49 = nullptr;
	Root::T_x25^ Temp_50 = nullptr;
	System::Collections::IDictionary^ Temp_51 = nullptr;
	System::Type^ Temp_52 = nullptr;
	Root::T_x25^ Temp_53 = nullptr;
	Root::T_x25^ Temp_54 = nullptr;
	Root::T_x110^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	Reflector::IConfiguration^ Temp_57 = nullptr;
	Root::T_x25^ Temp_58 = nullptr;
	Root::T_x25^ Temp_59 = nullptr;
	Root::T_x25^ Temp_60 = nullptr;
	Root::T_x25^ Temp_61 = nullptr;
	System::Windows::Forms::DragEventHandler^ Temp_62 = nullptr;
	Root::T_x25^ Temp_63 = nullptr;
	System::Windows::Forms::DragEventHandler^ Temp_64 = nullptr;
	Root::T_x25^ Temp_65 = nullptr;
	System::EventHandler^ Temp_66 = nullptr;
	Root::T_x80^ Temp_67 = nullptr;
	Root::T_x75^ Temp_68 = nullptr;
	Root::T_x125^ Temp_69 = nullptr;
	Reflector::IWindowManager^ Temp_70 = nullptr;
	System::Windows::Forms::Splitter^ Temp_71 = nullptr;
	Root::T_x75^ Temp_72 = nullptr;
	System::Drawing::Size Temp_73;
	System::Windows::Forms::ContainerControl^ Temp_74 = nullptr;
	System::EventHandler^ Temp_75 = nullptr;
	System::Windows::Forms::Control::ControlCollection^ Temp_76 = nullptr;
	array<System::Windows::Forms::Control^>^ Temp_77 = nullptr;
	Root::T_x25^ Temp_78 = nullptr;
	Reflector::IWindowManager^ Temp_79 = nullptr;
	System::IntPtr Temp_80 = (System::IntPtr)0;
	Root::T_x5^ Temp_81 = nullptr;
	Root::T_x110^ Temp_82 = nullptr;
	System::String^ Temp_83 = nullptr;
	Reflector::IConfiguration^ Temp_84 = nullptr;
	System::Collections::IDictionary^ Temp_85 = nullptr;
	System::Type^ Temp_86 = nullptr;
	Root::T_x119^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	System::String^ Temp_89 = nullptr;
	System::String^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::String^ Temp_92 = nullptr;
	System::String^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::String^ Temp_95 = nullptr;
	System::String^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::String^ Temp_98 = nullptr;
	System::String^ Temp_99 = nullptr;
	System::Collections::IDictionary^ Temp_100 = nullptr;
	System::Type^ Temp_101 = nullptr;
	Root::T_x118^ Temp_102 = nullptr;
	System::Collections::IDictionary^ Temp_103 = nullptr;
	System::Type^ Temp_104 = nullptr;
	System::EventHandler^ Temp_105 = nullptr;
	Root::T_x132^ Temp_106 = nullptr;
	System::Collections::IDictionary^ Temp_107 = nullptr;
	System::Type^ Temp_108 = nullptr;
	Root::T_x63^ Temp_109 = nullptr;
	Root::T_x60^ Temp_110 = nullptr;
	Root::T_x14^ Temp_111 = nullptr;
	Root::T_x62^ Temp_112 = nullptr;
	Root::T_x64^ Temp_113 = nullptr;
	Root::T_x59^ Temp_114 = nullptr;
	Root::T_x55^ Temp_115 = nullptr;
	System::Collections::IDictionary^ Temp_116 = nullptr;
	System::Type^ Temp_117 = nullptr;
	Root::T_x13^ Temp_118 = nullptr;
	Reflector::Application::ApplicationManager::T_x1^ Temp_119 = nullptr;
	System::EventHandler^ Temp_120 = nullptr;
	System::EventHandler^ Temp_121 = nullptr;
	System::Collections::IDictionary^ Temp_122 = nullptr;
	System::Type^ Temp_123 = nullptr;
	Root::T_x101^ Temp_124 = nullptr;
	Root::T_x110^ Temp_125 = nullptr;
	System::String^ Temp_126 = nullptr;
	Reflector::IConfiguration^ Temp_127 = nullptr;
	System::Collections::IDictionary^ Temp_128 = nullptr;
	System::Type^ Temp_129 = nullptr;
	Root::T_x96^ Temp_130 = nullptr;
	System::Collections::IDictionary^ Temp_131 = nullptr;
	System::Type^ Temp_132 = nullptr;
	Root::T_x25^ Temp_133 = nullptr;
	Root::T_x87^ Temp_134 = nullptr;
	Reflector::IWindowManager^ Temp_135 = nullptr;
	Reflector::IWindowCollection^ Temp_136 = nullptr;
	System::String^ Temp_137 = nullptr;
	System::String^ Temp_138 = nullptr;
	Reflector::IWindow^ Temp_139 = nullptr;
	Root::T_x25^ Temp_140 = nullptr;
	Root::T_x103^ Temp_141 = nullptr;
	Reflector::IWindowManager^ Temp_142 = nullptr;
	Reflector::IWindowCollection^ Temp_143 = nullptr;
	System::String^ Temp_144 = nullptr;
	System::String^ Temp_145 = nullptr;
	Reflector::IWindow^ Temp_146 = nullptr;
	Root::T_x25^ Temp_147 = nullptr;
	Reflector::IWindowManager^ Temp_148 = nullptr;
	Root::T_x89^ Temp_149 = nullptr;
	Reflector::IWindowManager^ Temp_150 = nullptr;
	Reflector::IWindowCollection^ Temp_151 = nullptr;
	System::String^ Temp_152 = nullptr;
	System::String^ Temp_153 = nullptr;
	Reflector::IWindow^ Temp_154 = nullptr;
	Root::T_x25^ Temp_155 = nullptr;
	Root::T_x3^ Temp_156 = nullptr;
	Reflector::IWindowManager^ Temp_157 = nullptr;
	Reflector::IWindowCollection^ Temp_158 = nullptr;
	System::String^ Temp_159 = nullptr;
	System::String^ Temp_160 = nullptr;
	Reflector::IWindow^ Temp_161 = nullptr;
	Root::T_x25^ Temp_162 = nullptr;
	Root::T_x110^ Temp_163 = nullptr;
	Root::T_x83^ Temp_164 = nullptr;
	Reflector::IWindowManager^ Temp_165 = nullptr;
	Reflector::IWindowCollection^ Temp_166 = nullptr;
	System::String^ Temp_167 = nullptr;
	System::String^ Temp_168 = nullptr;
	Reflector::IWindow^ Temp_169 = nullptr;
	Root::T_x25^ Temp_170 = nullptr;
	Root::T_x88^ Temp_171 = nullptr;
	Reflector::IWindowManager^ Temp_172 = nullptr;
	Reflector::IWindowCollection^ Temp_173 = nullptr;
	System::String^ Temp_174 = nullptr;
	System::String^ Temp_175 = nullptr;
	Reflector::IWindow^ Temp_176 = nullptr;
	Root::T_x47^ Temp_177 = nullptr;
	Reflector::IWindowManager^ Temp_178 = nullptr;
	Reflector::IWindowCollection^ Temp_179 = nullptr;
	System::String^ Temp_180 = nullptr;
	System::String^ Temp_181 = nullptr;
	Reflector::IWindow^ Temp_182 = nullptr;
	Root::T_x47^ Temp_183 = nullptr;
	Reflector::IWindowManager^ Temp_184 = nullptr;
	Reflector::IWindowCollection^ Temp_185 = nullptr;
	System::String^ Temp_186 = nullptr;
	System::String^ Temp_187 = nullptr;
	Reflector::IWindow^ Temp_188 = nullptr;
	Reflector::ICommandBarCollection^ Temp_189 = nullptr;
	System::String^ Temp_190 = nullptr;
	Reflector::ICommandBar^ Temp_191 = nullptr;
	Reflector::ICommandBarCollection^ Temp_192 = nullptr;
	System::String^ Temp_193 = nullptr;
	Reflector::ICommandBar^ Temp_194 = nullptr;
	Root::T_x131^ Temp_195 = nullptr;
	System::String^ Temp_196 = nullptr;
	System::String^ Temp_197 = nullptr;
	System::String^ Temp_198 = nullptr;
	System::NotSupportedException^ Temp_199 = nullptr;
	Root::T_x110^ Temp_200 = nullptr;
	System::String^ Temp_201 = nullptr;
	Reflector::IConfiguration^ Temp_202 = nullptr;
	Root::T_x73^ Temp_203 = nullptr;
	Root::T_x16^ Temp_204 = nullptr;
	Reflector::IWindowManager^ Temp_205 = nullptr;
	Root::T_x122^ Temp_206 = nullptr;
	System::Collections::IDictionary^ Temp_207 = nullptr;
	System::Type^ Temp_208 = nullptr;
	Reflector::ICommandBarCollection^ Temp_209 = nullptr;
	System::String^ Temp_210 = nullptr;
	Reflector::ICommandBar^ Temp_211 = nullptr;
	Root::T_x68^ Temp_212 = nullptr;
	System::String^ Temp_213 = nullptr;
	System::Int32 Temp_214 = 0;
	System::String^ Temp_215 = nullptr;
	System::String^ Temp_216 = nullptr;
	System::Boolean Temp_217 = false;
	System::Globalization::CultureInfo^ Temp_218 = nullptr;
	System::IO::StringWriter^ Temp_219 = nullptr;
	System::String^ Temp_220 = nullptr;
	System::String^ Temp_221 = nullptr;
	System::String^ Temp_222 = nullptr;
	System::String^ Temp_223 = nullptr;
	System::String^ Temp_224 = nullptr;
	System::String^ Temp_225 = nullptr;
	System::String^ Temp_226 = nullptr;
	System::String^ Temp_227 = nullptr;
	System::String^ Temp_228 = nullptr;
	System::String^ Temp_229 = nullptr;
	System::String^ Temp_230 = nullptr;
	System::String^ Temp_231 = nullptr;
	System::Windows::Forms::DialogResult Temp_232 = (System::Windows::Forms::DialogResult)0;
	Microsoft::Win32::RegistryKey^ Temp_233 = nullptr;
	System::String^ Temp_234 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_235 = nullptr;
	System::String^ Temp_236 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_237 = nullptr;
	System::String^ Temp_238 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_239 = nullptr;
	System::String^ Temp_240 = nullptr;
	System::Type^ Temp_241 = nullptr;
	System::Reflection::Module^ Temp_242 = nullptr;
	System::String^ Temp_243 = nullptr;
	System::String^ Temp_244 = nullptr;
	System::String^ Temp_245 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_246 = nullptr;
	System::String^ Temp_247 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_248 = nullptr;
	System::String^ Temp_249 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_250 = nullptr;
	System::String^ Temp_251 = nullptr;
	Microsoft::Win32::RegistryKey^ Temp_252 = nullptr;
	System::String^ Temp_253 = nullptr;
	System::Type^ Temp_254 = nullptr;
	System::Reflection::Module^ Temp_255 = nullptr;
	System::String^ Temp_256 = nullptr;
	System::String^ Temp_257 = nullptr;
	System::String^ Temp_258 = nullptr;
	System::String^ Temp_259 = nullptr;
	System::String^ Temp_260 = nullptr;
	System::String^ Temp_261 = nullptr;
	System::Windows::Forms::DialogResult Temp_262 = (System::Windows::Forms::DialogResult)0;
	System::EventHandler^ Temp_263 = nullptr;
	System::Globalization::CultureInfo^ Temp_264 = nullptr;
	System::String^ Temp_265 = nullptr;
	array<System::Object^>^ Temp_266 = nullptr;
	System::String^ Temp_267 = nullptr;
	System::String^ Temp_268 = nullptr;
	System::String^ Temp_269 = nullptr;
	System::String^ Temp_270 = nullptr;
	System::Windows::Forms::DialogResult Temp_271 = (System::Windows::Forms::DialogResult)0;
	Reflector::Application::ApplicationManager^ Temp_272 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_273 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_274 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_275 = nullptr;
	System::Object^ Temp_276 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_277 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_278 = nullptr;
	System::Object^ Temp_279 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_280 = nullptr;
	Reflector::Application::ApplicationManager^ Temp_281 = nullptr;
	//local variables.
	System::UnauthorizedAccessException^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Boolean V_3 = false;
	Root::T_x108^ V_4 = nullptr;
	Reflector::ICommandBarManager^ V_5 = nullptr;
	System::Windows::Forms::Form^ V_6 = nullptr;
	Root::T_x68^ V_7 = nullptr;
	System::Windows::Forms::Splitter^ V_8 = nullptr;
	System::Windows::Forms::Control^ V_9 = nullptr;
	System::Windows::Forms::ContainerControl^ V_10 = nullptr;
	Root::T_x5^ V_11 = nullptr;
	Root::T_x119^ V_12 = nullptr;
	Root::T_x118^ V_13 = nullptr;
	Root::T_x132^ V_14 = nullptr;
	Root::T_x63^ V_15 = nullptr;
	Root::T_x60^ V_16 = nullptr;
	Root::T_x14^ V_17 = nullptr;
	Root::T_x62^ V_18 = nullptr;
	Root::T_x64^ V_19 = nullptr;
	Root::T_x59^ V_20 = nullptr;
	Root::T_x55^ V_21 = nullptr;
	Root::T_x13^ V_22 = nullptr;
	Root::T_x101^ V_23 = nullptr;
	Root::T_x96^ V_24 = nullptr;
	Root::T_x87^ V_25 = nullptr;
	Root::T_x103^ V_26 = nullptr;
	Root::T_x89^ V_27 = nullptr;
	Root::T_x3^ V_28 = nullptr;
	Root::T_x83^ V_29 = nullptr;
	Root::T_x88^ V_30 = nullptr;
	Root::T_x47^ V_31 = nullptr;
	Root::T_x47^ V_32 = nullptr;
	System::Exception^ V_33 = nullptr;
	array<System::Object^>^ V_34 = nullptr;
	array<System::Windows::Forms::Control^>^ V_35 = nullptr;
	System::Int32 V_36 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_36=5;                                                     //stloc				V_36
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=gcnew System::Collections::Hashtable();              //newobj				void System::Collections::Hashtable::.ctor()
	IL_000f:            this->F_x2=safe_cast<System::Collections::IDictionary^>(Temp_0);//stfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldc.i4.1
	IL_0016:            this->F_x12=true;                                           //stfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_001b:                                                                        //ldarg.0
	IL_001c:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0021:            /*goto IL_0039;*/goto IL_003401;                            //br.s				IL_0039
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::EventArgs^)
	IL_002a:            Temp_263=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_002f:            System::Windows::Forms::Application::Idle += Temp_263;      //call				void System::Windows::Forms::Application::add_Idle(System::EventHandler^)
	IL_0034:            goto IL_0d0d;                                               //br				IL_0d0d
	IL_003401:          try{
	IL_0039:            Temp_1=System::AppDomain::CurrentDomain;                    //call				System::AppDomain^ System::AppDomain::get_CurrentDomain()
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::UnhandledExceptionEventArgs^)
	IL_0045:            Temp_2=gcnew System::UnhandledExceptionEventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::UnhandledExceptionEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_004a:            Temp_1->UnhandledException += Temp_2;                       //callvirt				void System::AppDomain::add_UnhandledException(System::UnhandledExceptionEventHandler^)
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::Threading::ThreadExceptionEventArgs^)
	IL_0056:            Temp_3=gcnew System::Threading::ThreadExceptionEventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::Threading::ThreadExceptionEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_005b:            System::Windows::Forms::Application::ThreadException += Temp_3;//call				void System::Windows::Forms::Application::add_ThreadException(System::Threading::ThreadExceptionEventHandler^)
	IL_0060:                                                                        //ldarg.0
	IL_0061:                                                                        //ldstr				L"\x5122\x4024\x4026\x4028\x582A\x592C\x4A2E\x4330"
	IL_0066:                                                                        //ldloc				V_36
	IL_006a:            Temp_4=a(L"\x5122\x4024\x4026\x4028\x582A\x592C\x4A2E\x4330",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006f:            Temp_5=this->M_x12(Temp_4);                                 //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_0074:            if(Temp_5==nullptr)goto IL_0977;                            //brfalse				IL_0977
	IL_0079:            /*goto IL_0a42;*/goto IL_0A3D01;                            //br				IL_0a42
	IL_007e:            Temp_30=gcnew Root::T_x108();                               //newobj				void Root::T_x108::.ctor()
	IL_0083:            V_4=Temp_30;                                                //stloc.s				V_4
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_31=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_008b:                                                                        //ldtoken				Root::T_x107
	IL_0090:            Temp_32=Root::T_x107::typeid;                               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0095:                                                                        //ldloc.s				V_4
	IL_0097:            Temp_31->Add(safe_cast<System::Object^>(Temp_32),safe_cast<System::Object^>(V_4));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_009c:                                                                        //ldloc.s				V_4
	IL_009e:                                                                        //ldarg.0
	IL_009f:            V_4->M_x2(safe_cast<Root::T_x24^>(this));                   //callvirt				void Root::T_x108::M_x2(Root::T_x24^)
	IL_00a4:                                                                        //ldarg.0
	IL_00a5:                                                                        //ldarg.1
	IL_00a6:            Temp_274=this;if(A_0!=nullptr)goto IL_093f;                 //brtrue				IL_093f
	IL_00ab:            Temp_278=Temp_274;goto IL_0a38;                             //br				IL_0a38
	IL_00b0:            Temp_40=gcnew Root::T_x105();                               //newobj				void Root::T_x105::.ctor()
	IL_00b5:            V_5=safe_cast<Reflector::ICommandBarManager^>(Temp_40);     //stloc.s				V_5
	IL_00b7:                                                                        //ldarg.0
	IL_00b8:            Temp_41=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_00bd:                                                                        //ldtoken				Reflector::ICommandBarManager
	IL_00c2:            Temp_42=Reflector::ICommandBarManager::typeid;              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00c7:                                                                        //ldloc.s				V_5
	IL_00c9:            Temp_41->Add(safe_cast<System::Object^>(Temp_42),safe_cast<System::Object^>(V_5));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_00ce:                                                                        //ldloc.s				V_5
	IL_00d0:            Temp_43=V_5->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_00d5:                                                                        //ldstr				L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E"
	IL_00da:                                                                        //ldloc				V_36
	IL_00de:            Temp_44=a(L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e3:            Temp_45=Temp_43->AddMenuBar(Temp_44);                       //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddMenuBar(System::String^)
	IL_00e8:                                                                        //pop
	IL_00e9:                                                                        //ldloc.s				V_5
	IL_00eb:            Temp_46=V_5->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_00f0:                                                                        //ldstr				L"\x7722\x4A24\x4826\x4528\x692A\x4C2C\x5D2E"
	IL_00f5:                                                                        //ldloc				V_36
	IL_00f9:            Temp_47=a(L"\x7722\x4A24\x4826\x4528\x692A\x4C2C\x5D2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fe:            Temp_48=Temp_46->AddToolBar(Temp_47);                       //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddToolBar(System::String^)
	IL_0103:                                                                        //pop
	IL_0104:                                                                        //ldarg.0
	IL_0105:            Temp_49=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_010a:                                                                        //ldloc.s				V_5
	IL_010c:                                                                        //castclass				System::Windows::Forms::Control
	IL_0111:            Temp_49->CommandBarManager=safe_cast<System::Windows::Forms::Control^>(V_5);//callvirt				void Reflector::IWindowManager::set_CommandBarManager(System::Windows::Forms::Control^)
	IL_0116:            goto IL_0210;                                               //br				IL_0210
	IL_011b:            goto IL_0d0d;                                               //leave				IL_0d0d
	IL_011B01:          try{
	IL_0120:                                                                        //ldloc.1
	IL_0121:                                                                        //ldstr				L"\x7622\x5624\x4626\x4E28\x4E2A\x172C"
	IL_0126:                                                                        //ldloc				V_36
	IL_012a:            Temp_220=a(L"\x7622\x5624\x4626\x4E28\x4E2A\x172C",V_36);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            V_1->WriteLine(Temp_220);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0134:                                                                        //ldloc.1
	IL_0135:                                                                        //ldstr				L"\x7122\x4024\x4126\x4528\x4E2A\x4E2C\x5B2E\x5E30\x4132\x1B34\x5236\x4138\x5E3A\x1D3C\x643E\x2E40\x3342\x3144\x2E46\x2648\x254A\x3E4C\x124E\x7150\x0852\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0A62\x0064\x1466\x3468"
	IL_013a:                                                                        //ldloc				V_36
	IL_013e:            Temp_221=a(L"\x7122\x4024\x4126\x4528\x4E2A\x4E2C\x5B2E\x5E30\x4132\x1B34\x5236\x4138\x5E3A\x1D3C\x643E\x2E40\x3342\x3144\x2E46\x2648\x254A\x3E4C\x124E\x7150\x0852\x3454\x2456\x2A58\x3E5A\x305C\x3D5E\x0D60\x0A62\x0064\x1466\x3468",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0143:            V_1->WriteLine(Temp_221);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0148:                                                                        //ldloc.1
	IL_0149:            V_1->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_014e:                                                                        //ldloc.1
	IL_014f:                                                                        //ldstr				L"\x6C22\x5524\x5326\x4028\x442A\x432C\x5C2E\x0B30"
	IL_0154:                                                                        //ldloc				V_36
	IL_0158:            Temp_222=a(L"\x6C22\x5524\x5326\x4028\x442A\x432C\x5C2E\x0B30",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015d:            V_1->WriteLine(Temp_222);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0162:                                                                        //ldloc.1
	IL_0163:                                                                        //ldstr				L"\x0C22\x5724\x4226\x4E28\x422A\x5E2C\x5B2E\x5430\x4132\x3C34\x3E36\x3038\x493A\x583C\x583E\x2840\x3042\x3144\x2246\x3B48\x6B4A\x2B4C\x264E\x3D50\x3652\x7554\x3256\x2158\x2F5A\x385C\x315E\x1260\x0A62\x0A64\x0966\x1A68"
	IL_0168:                                                                        //ldloc				V_36
	IL_016c:            Temp_223=a(L"\x0C22\x5724\x4226\x4E28\x422A\x5E2C\x5B2E\x5430\x4132\x3C34\x3E36\x3038\x493A\x583C\x583E\x2840\x3042\x3144\x2246\x3B48\x6B4A\x2B4C\x264E\x3D50\x3652\x7554\x3256\x2158\x2F5A\x385C\x315E\x1260\x0A62\x0A64\x0966\x1A68",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0171:            V_1->WriteLine(Temp_223);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0176:                                                                        //ldloc.1
	IL_0177:                                                                        //ldstr				L"\x0C22\x4624\x4826\x4728\x4D2A\x442C\x482E\x4430\x4132\x5434\x4336\x5038\x543A\x533C\x053E\x7D40\x2542\x2C44\x2B46\x2C48\x754A\x444C\x3A4E\x2250\x3652\x7554\x3456\x3658\x355A\x3B5C\x365E\x0660\x1662\x1764\x0666\x1D68\x026A\x026C\x016E\x5170\x1572\x1C74\x1B76\x1C78\x5B7A\x137C\x1E7E\xEC80\xE682"
	IL_017c:                                                                        //ldloc				V_36
	IL_0180:            Temp_224=a(L"\x0C22\x4624\x4826\x4728\x4D2A\x442C\x482E\x4430\x4132\x5434\x4336\x5038\x543A\x533C\x053E\x7D40\x2542\x2C44\x2B46\x2C48\x754A\x444C\x3A4E\x2250\x3652\x7554\x3456\x3658\x355A\x3B5C\x365E\x0660\x1662\x1764\x0666\x1D68\x026A\x026C\x016E\x5170\x1572\x1C74\x1B76\x1C78\x5B7A\x137C\x1E7E\xEC80\xE682",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0185:            V_1->WriteLine(Temp_224);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_018a:                                                                        //ldloc.1
	IL_018b:                                                                        //ldstr				L"\x0C22\x5624\x4226\x4528\x4E2A\x4E2C\x5B2E\x0B30\x0F32\x5C34\x5336\x5C38\x553A\x493C\x563E\x2740\x2A42\x2044\x3546\x7748\x424A\x444C\x3C4E\x3450\x3F52\x3054\x3456\x2D58\x7B5A\x295C\x265E\x1160\x0662\x4964\x4766\x0F68\x026A\x086C\x036E\x1570\x5F72\x5574\x1A76\x1C78\x0F7A\x157C\x107E\xE580\xAF82\xA584\xF786\xFB88\xE48A\xFD8C\xEA8E\xE390\xE792\xEC94\xB796\xF698\xE99A\xBD9C\xFA9E\xD7A0\xC6A2\xCBA4\xD3A6"
	IL_0190:                                                                        //ldloc				V_36
	IL_0194:            Temp_225=a(L"\x0C22\x5624\x4226\x4528\x4E2A\x4E2C\x5B2E\x0B30\x0F32\x5C34\x5336\x5C38\x553A\x493C\x563E\x2740\x2A42\x2044\x3546\x7748\x424A\x444C\x3C4E\x3450\x3F52\x3054\x3456\x2D58\x7B5A\x295C\x265E\x1160\x0662\x4964\x4766\x0F68\x026A\x086C\x036E\x1570\x5F72\x5574\x1A76\x1C78\x0F7A\x157C\x107E\xE580\xAF82\xA584\xF786\xFB88\xE48A\xFD8C\xEA8E\xE390\xE792\xEC94\xB796\xF698\xE99A\xBD9C\xFA9E\xD7A0\xC6A2\xCBA4\xD3A6",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0199:            V_1->WriteLine(Temp_225);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_019e:                                                                        //ldloc.1
	IL_019f:                                                                        //ldstr				L"\x0C22\x4324\x4826\x4728\x5F2A\x432C\x4E2E\x5C30\x5632\x0F34\x0B36\x5738\x5A3A\x503C\x5A3E\x7F40\x4A42\x3044\x3446\x2C48\x6B4A\x3E4C\x3F4E\x3450\x3052\x3C54\x3156\x3058\x3E5A\x395C\x7F5E\x0760\x0C62\x0B64\x1366\x4968\x056A\x0C6C\x026E\x1470"
	IL_01a4:                                                                        //ldloc				V_36
	IL_01a8:            Temp_226=a(L"\x0C22\x4324\x4826\x4728\x5F2A\x432C\x4E2E\x5C30\x5632\x0F34\x0B36\x5738\x5A3A\x503C\x5A3E\x7F40\x4A42\x3044\x3446\x2C48\x6B4A\x3E4C\x3F4E\x3450\x3052\x3C54\x3156\x3058\x3E5A\x395C\x7F5E\x0760\x0C62\x0B64\x1366\x4968\x056A\x0C6C\x026E\x1470",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ad:            V_1->WriteLine(Temp_226);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_01b2:                                                                        //ldloc.1
	IL_01b3:                                                                        //ldstr				L"\x0C22\x4324\x4826\x4728\x5F2A\x5E2C\x462E\x4B30\x5632\x0F34\x0B36\x4A38\x523A\x473C\x5A3E\x7F40\x4A42\x4C44\x3246\x3A48\x2E4A\x6D4C\x3C4E\x2150\x3652\x3654\x3E56\x3F58\x325A\x385C\x3B5E\x4160\x0562\x0A64\x0966\x1D68\x4B6A\x1E6C\x066E\x0B70\x1672"
	IL_01b8:                                                                        //ldloc				V_36
	IL_01bc:            Temp_227=a(L"\x0C22\x4324\x4826\x4728\x5F2A\x5E2C\x462E\x4B30\x5632\x0F34\x0B36\x4A38\x523A\x473C\x5A3E\x7F40\x4A42\x4C44\x3246\x3A48\x2E4A\x6D4C\x3C4E\x2150\x3652\x3654\x3E56\x3F58\x325A\x385C\x3B5E\x4160\x0562\x0A64\x0966\x1D68\x4B6A\x1E6C\x066E\x0B70\x1672",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c1:            V_1->WriteLine(Temp_227);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_01c6:                                                                        //ldloc.1
	IL_01c7:                                                                        //ldstr				L"\x0C22\x4D24\x4226\x4528\x5B2A\x242C\x262E\x3830\x4032\x5D34\x5836\x4E38\x1B3A\x493C\x573E\x2840\x3042\x6544\x2F46\x2C48\x274A\x3D4C\x6F4E\x3C50\x3652\x2654\x2456\x3858\x3C5A\x385C"
	IL_01cc:                                                                        //ldloc				V_36
	IL_01d0:            Temp_228=a(L"\x0C22\x4D24\x4226\x4528\x5B2A\x242C\x262E\x3830\x4032\x5D34\x5836\x4E38\x1B3A\x493C\x573E\x2840\x3042\x6544\x2F46\x2C48\x274A\x3D4C\x6F4E\x3C50\x3652\x2654\x2456\x3858\x3C5A\x385C",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d5:            V_1->WriteLine(Temp_228);                                   //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_01da:                                                                        //ldnull
	IL_01db:                                                                        //ldloc.1
	IL_01dc:            Temp_229=V_1->ToString();                                   //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_01e1:                                                                        //ldstr				L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E"
	IL_01e6:                                                                        //ldloc				V_36
	IL_01ea:            Temp_230=a(L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ef:            Temp_231=Root::T_x128::M_x1(Temp_230);                      //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01f4:                                                                        //ldc.i4.0
	IL_01f5:                                                                        //ldc.i4.s				64
	IL_01f7:            Temp_232=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_229,Temp_231,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(64));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01fc:                                                                        //pop
	IL_01fd:            goto IL_011b;                                               //leave				IL_011b
	                    ;}
	                    finally{
	IL_0202:                                                                        //ldloc.1
	IL_0203:            if(V_1==nullptr)goto IL_020f;                               //brfalse.s				IL_020f
	IL_0205:            goto IL_0207;                                               //br.s				IL_0207
	IL_0207:                                                                        //ldloc.1
	IL_0208:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_020d:            goto IL_020f;                                               //br.s				IL_020f
	IL_020f:                                                                        //endfinally
	                    ;}
	IL_0210:                                                                        //ldarg.0
	IL_0211:                                                                        //ldarg.0
	IL_0212:            Temp_50=gcnew Root::T_x25(safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x25::.ctor(System::IServiceProvider^)
	IL_0217:            this->F_x9=Temp_50;                                         //stfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_021c:                                                                        //ldarg.0
	IL_021d:            Temp_51=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0222:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0227:            Temp_52=Reflector::IAssemblyBrowser::typeid;                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_022c:                                                                        //ldarg.0
	IL_022d:            Temp_53=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0232:            Temp_51->Add(safe_cast<System::Object^>(Temp_52),safe_cast<System::Object^>(Temp_53));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0237:                                                                        //ldarg.0
	IL_0238:            Temp_54=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_023d:                                                                        //ldarg.0
	IL_023e:            Temp_55=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0243:                                                                        //ldstr				L"\x6222\x5624\x5426\x4C28\x462A\x4F2C\x432E\x4830\x7132\x4734\x5836\x4E38\x483A\x583C\x4D3E"
	IL_0248:                                                                        //ldloc				V_36
	IL_024c:            Temp_56=a(L"\x6222\x5624\x5426\x4C28\x462A\x4F2C\x432E\x4830\x7132\x4734\x5836\x4E38\x483A\x583C\x4D3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0251:            Temp_57=Temp_55->M_x2(Temp_56);                             //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0256:            Temp_54->M_x1(Temp_57);                                     //callvirt				void Root::T_x25::M_x1(Reflector::IConfiguration^)
	IL_025b:                                                                        //ldarg.0
	IL_025c:            Temp_58=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0261:                                                                        //ldc.i4.0
	IL_0262:            Temp_58->TabIndex=0;                                        //callvirt				void System::Windows::Forms::Control::set_TabIndex(System::Int32)
	IL_0267:                                                                        //ldarg.0
	IL_0268:            Temp_59=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_026d:                                                                        //ldc.i4.5
	IL_026e:            Temp_59->Dock=safe_cast<System::Windows::Forms::DockStyle>(5);//callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_0273:                                                                        //ldarg.0
	IL_0274:            Temp_60=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0279:                                                                        //ldc.i4.1
	IL_027a:            Temp_60->AllowDrop=true;                                    //callvirt				void System::Windows::Forms::Control::set_AllowDrop(System::Boolean)
	IL_027f:                                                                        //ldarg.0
	IL_0280:            Temp_61=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0285:                                                                        //ldarg.0
	IL_0286:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x2(System::Object^,System::Windows::Forms::DragEventArgs^)
	IL_028c:            Temp_62=gcnew System::Windows::Forms::DragEventHandler(this,&Reflector::Application::ApplicationManager::M_x2);//newobj				void System::Windows::Forms::DragEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0291:            Temp_61->DragEnter += Temp_62;                              //callvirt				void System::Windows::Forms::Control::add_DragEnter(System::Windows::Forms::DragEventHandler^)
	IL_0296:                                                                        //ldarg.0
	IL_0297:            Temp_63=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_029c:                                                                        //ldarg.0
	IL_029d:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::Windows::Forms::DragEventArgs^)
	IL_02a3:            Temp_64=gcnew System::Windows::Forms::DragEventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::Windows::Forms::DragEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_02a8:            Temp_63->DragDrop += Temp_64;                               //callvirt				void System::Windows::Forms::Control::add_DragDrop(System::Windows::Forms::DragEventHandler^)
	IL_02ad:                                                                        //ldarg.0
	IL_02ae:            Temp_65=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_02b3:                                                                        //ldarg.0
	IL_02b4:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x9(System::Object^,System::EventArgs^)
	IL_02ba:            Temp_66=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x9);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_02bf:            Temp_65->M_x2(Temp_66);                                     //callvirt				void Root::T_x25::M_x2(System::EventHandler^)
	IL_02c4:                                                                        //ldarg.0
	IL_02c5:                                                                        //ldloc.3
	IL_02c6:            Temp_275=this;if(V_3)goto IL_09cd;                          //brtrue				IL_09cd
	IL_02cb:            Temp_281=Temp_275;goto IL_0ced;                             //br				IL_0ced
	IL_02d0:                                                                        //ldarg.0
	IL_02d1:            this->M_x33();                                              //call				void Reflector::Application::ApplicationManager::M_x33()
	IL_02d6:            goto IL_0d0d;                                               //leave				IL_0d0d
	IL_02db:                                                                        //ldarg.0
	IL_02dc:                                                                        //ldstr				L"\x4A22\x4B24\x5426\x5D28\x4A2A\x412C\x432E"
	IL_02e1:                                                                        //ldloc				V_36
	IL_02e5:            Temp_215=a(L"\x4A22\x4B24\x5426\x5D28\x4A2A\x412C\x432E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ea:            Temp_216=this->M_x12(Temp_215);                             //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_02ef:            V_2=Temp_216;                                               //stloc.2
	IL_02f0:                                                                        //ldloc.2
	IL_02f1:            Temp_217=System::IO::File::Exists(V_2);                     //call				System::Boolean System::IO::File::Exists(System::String^)
	IL_02f6:            if(!Temp_217)goto IL_0bbf;                                  //brfalse				IL_0bbf
	IL_02fb:            goto IL_0a2d;                                               //br				IL_0a2d
	IL_0300:            Temp_71=gcnew System::Windows::Forms::Splitter();           //newobj				void System::Windows::Forms::Splitter::.ctor()
	IL_0305:            V_8=Temp_71;                                                //stloc.s				V_8
	IL_0307:                                                                        //ldloc.s				V_8
	IL_0309:                                                                        //ldc.i4.2
	IL_030a:            V_8->Dock=safe_cast<System::Windows::Forms::DockStyle>(2);  //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_030f:                                                                        //ldloc.s				V_8
	IL_0311:                                                                        //ldc.i4.0
	IL_0312:            V_8->BorderStyle=safe_cast<System::Windows::Forms::BorderStyle>(0);//callvirt				void System::Windows::Forms::Splitter::set_BorderStyle(System::Windows::Forms::BorderStyle)
	IL_0317:                                                                        //ldarg.0
	IL_0318:            Temp_72=this->F_x4;                                         //ldfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_031d:                                                                        //castclass				System::Windows::Forms::Control
	IL_0322:            V_9=safe_cast<System::Windows::Forms::Control^>(Temp_72);   //stloc.s				V_9
	IL_0324:                                                                        //ldloc.s				V_9
	IL_0326:                                                                        //ldc.i4.2
	IL_0327:            V_9->Dock=safe_cast<System::Windows::Forms::DockStyle>(2);  //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_032c:                                                                        //ldloc.s				V_9
	IL_032e:                                                                        //ldc.i4.s				100
	IL_0330:                                                                        //ldc.i4.s				120
	IL_0332:            Temp_73=System::Drawing::Size(safe_cast<System::Int32>(100),safe_cast<System::Int32>(120));//newobj				void System::Drawing::Size::.ctor(System::Int32,System::Int32)
	IL_0337:            V_9->Size=Temp_73;                                          //callvirt				void System::Windows::Forms::Control::set_Size(System::Drawing::Size)
	IL_033c:            Temp_74=gcnew System::Windows::Forms::ContainerControl();   //newobj				void System::Windows::Forms::ContainerControl::.ctor()
	IL_0341:            V_10=Temp_74;                                               //stloc.s				V_10
	IL_0343:                                                                        //ldloc.s				V_10
	IL_0345:                                                                        //ldarg.0
	IL_0346:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x11(System::Object^,System::EventArgs^)
	IL_034c:            Temp_75=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x11);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0351:            V_10->Enter += Temp_75;                                     //callvirt				void System::Windows::Forms::Control::add_Enter(System::EventHandler^)
	IL_0356:                                                                        //ldloc.s				V_10
	IL_0358:                                                                        //ldc.i4.5
	IL_0359:            V_10->Dock=safe_cast<System::Windows::Forms::DockStyle>(5); //callvirt				void System::Windows::Forms::Control::set_Dock(System::Windows::Forms::DockStyle)
	IL_035e:                                                                        //ldloc.s				V_10
	IL_0360:            Temp_76=V_10->Controls;                                     //callvirt				System::Windows::Forms::Control::ControlCollection^ System::Windows::Forms::Control::get_Controls()
	IL_0365:                                                                        //ldc.i4.3
	IL_0366:            Temp_77=gcnew array<System::Windows::Forms::Control^>(3);   //newarr				System::Windows::Forms::Control
	IL_036b:            V_35=Temp_77;                                               //stloc.s				V_35
	IL_036d:                                                                        //ldloc.s				V_35
	IL_036f:                                                                        //ldc.i4.0
	IL_0370:                                                                        //ldarg.0
	IL_0371:            Temp_78=this->F_x9;                                         //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0376:            V_35[0]=safe_cast<System::Windows::Forms::Control^>(Temp_78);//stelem.ref
	IL_0377:                                                                        //ldloc.s				V_35
	IL_0379:                                                                        //ldc.i4.1
	IL_037a:                                                                        //ldloc.s				V_8
	IL_037c:            V_35[1]=safe_cast<System::Windows::Forms::Control^>(V_8);   //stelem.ref
	IL_037d:                                                                        //ldloc.s				V_35
	IL_037f:                                                                        //ldc.i4.2
	IL_0380:                                                                        //ldloc.s				V_9
	IL_0382:            V_35[2]=V_9;                                                //stelem.ref
	IL_0383:                                                                        //ldloc.s				V_35
	IL_0385:            Temp_76->AddRange(V_35);                                    //callvirt				void System::Windows::Forms::Control::ControlCollection::AddRange(array<System::Windows::Forms::Control^>^)
	IL_038a:                                                                        //ldarg.0
	IL_038b:            Temp_79=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0390:                                                                        //ldloc.s				V_10
	IL_0392:            Temp_79->Content=safe_cast<System::Windows::Forms::Control^>(V_10);//callvirt				void Reflector::IWindowManager::set_Content(System::Windows::Forms::Control^)
	IL_0397:                                                                        //ldloc.s				V_10
	IL_0399:            Temp_80=V_10->Handle;                                       //callvirt				System::IntPtr System::Windows::Forms::Control::get_Handle()
	IL_039e:                                                                        //pop
	IL_039f:            Temp_81=gcnew Root::T_x5();                                 //newobj				void Root::T_x5::.ctor()
	IL_03a4:            V_11=Temp_81;                                               //stloc.s				V_11
	IL_03a6:                                                                        //ldloc.s				V_11
	IL_03a8:                                                                        //ldarg.0
	IL_03a9:            Temp_82=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_03ae:                                                                        //ldstr				L"\x7522\x4C24\x5426\x4028\x492A\x442C\x432E\x5830\x4732\x4C34"
	IL_03b3:                                                                        //ldloc				V_36
	IL_03b7:            Temp_83=a(L"\x7522\x4C24\x5426\x4028\x492A\x442C\x432E\x5830\x4732\x4C34",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03bc:            Temp_84=Temp_82->M_x2(Temp_83);                             //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_03c1:            V_11->M_x1(Temp_84);                                        //callvirt				void Root::T_x5::M_x1(Reflector::IConfiguration^)
	IL_03c6:                                                                        //ldarg.0
	IL_03c7:            Temp_85=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_03cc:                                                                        //ldtoken				Reflector::CodeModel::IVisibilityConfiguration
	IL_03d1:            Temp_86=Reflector::CodeModel::IVisibilityConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_03d6:                                                                        //ldloc.s				V_11
	IL_03d8:            Temp_85->Add(safe_cast<System::Object^>(Temp_86),safe_cast<System::Object^>(V_11));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_03dd:            Temp_87=gcnew Root::T_x119();                               //newobj				void Root::T_x119::.ctor()
	IL_03e2:            V_12=Temp_87;                                               //stloc.s				V_12
	IL_03e4:                                                                        //ldloc.s				V_12
	IL_03e6:                                                                        //ldloc.s				V_11
	IL_03e8:            V_12->M_x1(safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(V_11));//callvirt				void Root::T_x119::M_x1(Reflector::CodeModel::IVisibilityConfiguration^)
	IL_03ed:                                                                        //ldloc.s				V_12
	IL_03ef:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x682A\x582C\x5C2E\x4530\x5C32\x5834\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x3A48"
	IL_03f4:                                                                        //ldloc				V_36
	IL_03f8:            Temp_88=a(L"\x7022\x4D24\x4826\x5E28\x682A\x582C\x5C2E\x4530\x5C32\x5834\x7636\x4D38\x4F3A\x4F3C\x563E\x2340\x3642\x3144\x2246\x3A48",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03fd:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0402:                                                                        //ldloc				V_36
	IL_0406:            Temp_89=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040b:            V_12->M_x1(Temp_88,Temp_89);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0410:                                                                        //ldloc.s				V_12
	IL_0412:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x6F2A\x422C\x4C2E\x4430\x5E32\x5034\x5936\x4D38\x5A3A\x493C\x563E\x2E40\x2D42"
	IL_0417:                                                                        //ldloc				V_36
	IL_041b:            Temp_90=a(L"\x7022\x4D24\x4826\x5E28\x6F2A\x422C\x4C2E\x4430\x5E32\x5034\x5936\x4D38\x5A3A\x493C\x563E\x2E40\x2D42",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0420:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0425:                                                                        //ldloc				V_36
	IL_0429:            Temp_91=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_042e:            V_12->M_x1(Temp_90,Temp_91);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0433:                                                                        //ldloc.s				V_12
	IL_0435:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x652A\x4C2C\x422E\x5430\x4032\x4534\x5636\x5A38\x5E3A\x743C\x523E\x3140\x2C42\x3744\x3346\x3A48"
	IL_043a:                                                                        //ldloc				V_36
	IL_043e:            Temp_92=a(L"\x7022\x4D24\x4826\x5E28\x652A\x4C2C\x422E\x5430\x4032\x4534\x5636\x5A38\x5E3A\x743C\x523E\x3140\x2C42\x3744\x3346\x3A48",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0443:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_0448:                                                                        //ldloc				V_36
	IL_044c:            Temp_93=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0451:            V_12->M_x1(Temp_92,Temp_93);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0456:                                                                        //ldloc.s				V_12
	IL_0458:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x652A\x4C2C\x422E\x5430\x4032\x4534\x5636\x5A38\x5E3A\x7F3C\x503E\x2540\x3A42"
	IL_045d:                                                                        //ldloc				V_36
	IL_0461:            Temp_94=a(L"\x7022\x4D24\x4826\x5E28\x652A\x4C2C\x422E\x5430\x4032\x4534\x5636\x5A38\x5E3A\x7F3C\x503E\x2540\x3A42",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0466:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_046b:                                                                        //ldloc				V_36
	IL_046f:            Temp_95=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0474:            V_12->M_x1(Temp_94,Temp_95);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_0479:                                                                        //ldloc.s				V_12
	IL_047b:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x7F2A\x542C\x5F2E\x5430\x7732\x5034\x5436\x5538\x5A3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946\x0B48\x244A\x294C\x364E"
	IL_0480:                                                                        //ldloc				V_36
	IL_0484:            Temp_96=a(L"\x7022\x4D24\x4826\x5E28\x7F2A\x542C\x5F2E\x5430\x7732\x5034\x5436\x5538\x5A3A\x4F3C\x5E3E\x3540\x2A42\x2A44\x2946\x0B48\x244A\x294C\x364E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0489:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_048e:                                                                        //ldloc				V_36
	IL_0492:            Temp_97=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0497:            V_12->M_x1(Temp_96,Temp_97);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_049c:                                                                        //ldloc.s				V_12
	IL_049e:                                                                        //ldstr				L"\x7022\x4D24\x4826\x5E28\x662A\x482C\x5B2E\x5930\x5C32\x5134\x7336\x5C38\x583A\x513C\x5E3E\x3340\x2242\x3144\x2E46\x2648\x254A\x0F4C\x204E\x3550\x2A52"
	IL_04a3:                                                                        //ldloc				V_36
	IL_04a7:            Temp_98=a(L"\x7022\x4D24\x4826\x5E28\x662A\x482C\x5B2E\x5930\x5C32\x5134\x7336\x5C38\x583A\x513C\x5E3E\x3340\x2242\x3144\x2E46\x2648\x254A\x0F4C\x204E\x3550\x2A52",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ac:                                                                        //ldstr				L"\x4522\x4424\x4B26\x5A28\x4E2A"
	IL_04b1:                                                                        //ldloc				V_36
	IL_04b5:            Temp_99=a(L"\x4522\x4424\x4B26\x5A28\x4E2A",V_36);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ba:            V_12->M_x1(Temp_98,Temp_99);                                //callvirt				void Root::T_x119::M_x1(System::String^,System::String^)
	IL_04bf:                                                                        //ldarg.0
	IL_04c0:            Temp_100=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_04c5:                                                                        //ldtoken				Reflector::CodeModel::ILanguageWriterConfiguration
	IL_04ca:            Temp_101=Reflector::CodeModel::ILanguageWriterConfiguration::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_04cf:                                                                        //ldloc.s				V_12
	IL_04d1:            Temp_100->Add(safe_cast<System::Object^>(Temp_101),safe_cast<System::Object^>(V_12));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_04d6:            Temp_102=gcnew Root::T_x118();                              //newobj				void Root::T_x118::.ctor()
	IL_04db:            V_13=Temp_102;                                              //stloc.s				V_13
	IL_04dd:                                                                        //ldarg.0
	IL_04de:            Temp_103=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_04e3:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_04e8:            Temp_104=Reflector::ILanguageManager::typeid;               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_04ed:                                                                        //ldloc.s				V_13
	IL_04ef:            Temp_103->Add(safe_cast<System::Object^>(Temp_104),safe_cast<System::Object^>(V_13));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_04f4:                                                                        //ldloc.s				V_13
	IL_04f6:                                                                        //ldarg.0
	IL_04f7:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x5(System::Object^,System::EventArgs^)
	IL_04fd:            Temp_105=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x5);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0502:            V_13->M_x5(Temp_105);                                       //callvirt				void Root::T_x118::M_x5(System::EventHandler^)
	IL_0507:            Temp_106=gcnew Root::T_x132();                              //newobj				void Root::T_x132::.ctor()
	IL_050c:            V_14=Temp_106;                                              //stloc.s				V_14
	IL_050e:                                                                        //ldarg.0
	IL_050f:            Temp_107=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0514:                                                                        //ldtoken				Reflector::ITranslatorManager
	IL_0519:            Temp_108=Reflector::ITranslatorManager::typeid;             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_051e:                                                                        //ldloc.s				V_14
	IL_0520:            Temp_107->Add(safe_cast<System::Object^>(Temp_108),safe_cast<System::Object^>(V_14));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0525:            Temp_109=gcnew Root::T_x63();                               //newobj				void Root::T_x63::.ctor()
	IL_052a:            V_15=Temp_109;                                              //stloc.s				V_15
	IL_052c:                                                                        //ldloc.s				V_13
	IL_052e:                                                                        //ldloc.s				V_15
	IL_0530:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_15));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_0535:            Temp_110=gcnew Root::T_x60();                               //newobj				void Root::T_x60::.ctor()
	IL_053a:            V_16=Temp_110;                                              //stloc.s				V_16
	IL_053c:                                                                        //ldloc.s				V_13
	IL_053e:                                                                        //ldloc.s				V_16
	IL_0540:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_16));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_0545:                                                                        //ldloc.s				V_13
	IL_0547:                                                                        //ldloc.s				V_16
	IL_0549:            V_13->M_x2(safe_cast<Reflector::CodeModel::ILanguage^>(V_16));//callvirt				void Root::T_x118::M_x2(Reflector::CodeModel::ILanguage^)
	IL_054e:            Temp_111=gcnew Root::T_x14();                               //newobj				void Root::T_x14::.ctor()
	IL_0553:            V_17=Temp_111;                                              //stloc.s				V_17
	IL_0555:                                                                        //ldloc.s				V_13
	IL_0557:                                                                        //ldloc.s				V_17
	IL_0559:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_17));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_055e:            Temp_112=gcnew Root::T_x62();                               //newobj				void Root::T_x62::.ctor()
	IL_0563:            V_18=Temp_112;                                              //stloc.s				V_18
	IL_0565:                                                                        //ldloc.s				V_13
	IL_0567:                                                                        //ldloc.s				V_18
	IL_0569:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_18));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_056e:            Temp_113=gcnew Root::T_x64();                               //newobj				void Root::T_x64::.ctor()
	IL_0573:            V_19=Temp_113;                                              //stloc.s				V_19
	IL_0575:                                                                        //ldloc.s				V_13
	IL_0577:                                                                        //ldloc.s				V_19
	IL_0579:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_19));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_057e:            Temp_114=gcnew Root::T_x59();                               //newobj				void Root::T_x59::.ctor()
	IL_0583:            V_20=Temp_114;                                              //stloc.s				V_20
	IL_0585:                                                                        //ldloc.s				V_13
	IL_0587:                                                                        //ldloc.s				V_20
	IL_0589:            V_13->M_x12(safe_cast<Reflector::CodeModel::ILanguage^>(V_20));//callvirt				void Root::T_x118::M_x12(Reflector::CodeModel::ILanguage^)
	IL_058e:            Temp_115=gcnew Root::T_x55();                               //newobj				void Root::T_x55::.ctor()
	IL_0593:            V_21=Temp_115;                                              //stloc.s				V_21
	IL_0595:                                                                        //ldarg.0
	IL_0596:            Temp_116=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_059b:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyCache
	IL_05a0:            Temp_117=Reflector::CodeModel::IAssemblyCache::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_05a5:                                                                        //ldloc.s				V_21
	IL_05a7:            Temp_116->Add(safe_cast<System::Object^>(Temp_117),safe_cast<System::Object^>(V_21));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_05ac:            Temp_118=gcnew Root::T_x13();                               //newobj				void Root::T_x13::.ctor()
	IL_05b1:            V_22=Temp_118;                                              //stloc.s				V_22
	IL_05b3:                                                                        //ldloc.s				V_22
	IL_05b5:                                                                        //ldloc.s				V_10
	IL_05b7:                                                                        //ldloc.s				V_22
	IL_05b9:                                                                        //ldloc.s				V_21
	IL_05bb:            Temp_119=gcnew Reflector::Application::ApplicationManager::T_x1(safe_cast<System::ComponentModel::ISynchronizeInvoke^>(V_10),safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),safe_cast<Reflector::CodeModel::IAssemblyCache^>(V_21));//newobj				void Reflector::Application::ApplicationManager::T_x1::.ctor(System::ComponentModel::ISynchronizeInvoke^,Reflector::CodeModel::IAssemblyManager^,Reflector::CodeModel::IAssemblyCache^)
	IL_05c0:            V_22->M_x1(safe_cast<Reflector::CodeModel::IAssemblyResolver^>(Temp_119));//callvirt				void Root::T_x13::M_x1(Reflector::CodeModel::IAssemblyResolver^)
	IL_05c5:                                                                        //ldloc.s				V_22
	IL_05c7:                                                                        //ldarg.0
	IL_05c8:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x8(System::Object^,System::EventArgs^)
	IL_05ce:            Temp_120=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x8);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_05d3:            V_22->M_x12(Temp_120);                                      //callvirt				void Root::T_x13::M_x12(System::EventHandler^)
	IL_05d8:                                                                        //ldloc.s				V_22
	IL_05da:                                                                        //ldarg.0
	IL_05db:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x13(System::Object^,System::EventArgs^)
	IL_05e1:            Temp_121=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x13);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_05e6:            V_22->M_x1(Temp_121);                                       //callvirt				void Root::T_x13::M_x1(System::EventHandler^)
	IL_05eb:                                                                        //ldarg.0
	IL_05ec:            Temp_122=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_05f1:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_05f6:            Temp_123=Reflector::CodeModel::IAssemblyManager::typeid;    //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_05fb:                                                                        //ldloc.s				V_22
	IL_05fd:            Temp_122->Add(safe_cast<System::Object^>(Temp_123),safe_cast<System::Object^>(V_22));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0602:            Temp_124=gcnew Root::T_x101();                              //newobj				void Root::T_x101::.ctor()
	IL_0607:            V_23=Temp_124;                                              //stloc.s				V_23
	IL_0609:                                                                        //ldloc.s				V_23
	IL_060b:                                                                        //ldarg.0
	IL_060c:            Temp_125=this->F_x8;                                        //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0611:                                                                        //ldstr				L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x7E32\x5434\x5936\x5838\x5C3A\x583C\x4D3E"
	IL_0616:                                                                        //ldloc				V_36
	IL_061a:            Temp_126=a(L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x7E32\x5434\x5936\x5838\x5C3A\x583C\x4D3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_061f:            Temp_127=Temp_125->M_x2(Temp_126);                          //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0624:            V_23->M_x1(Temp_127);                                       //callvirt				void Root::T_x101::M_x1(Reflector::IConfiguration^)
	IL_0629:                                                                        //ldarg.0
	IL_062a:            Temp_128=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_062f:                                                                        //ldtoken				Root::T_x7
	IL_0634:            Temp_129=Root::T_x7::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0639:                                                                        //ldloc.s				V_23
	IL_063b:            Temp_128->Add(safe_cast<System::Object^>(Temp_129),safe_cast<System::Object^>(V_23));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0640:                                                                        //ldarg.0
	IL_0641:            Temp_130=gcnew Root::T_x96(safe_cast<System::IServiceProvider^>(this));//newobj				void Root::T_x96::.ctor(System::IServiceProvider^)
	IL_0646:            V_24=Temp_130;                                              //stloc.s				V_24
	IL_0648:                                                                        //ldarg.0
	IL_0649:            Temp_131=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_064e:                                                                        //ldtoken				Root::T_x95
	IL_0653:            Temp_132=Root::T_x95::typeid;                               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0658:                                                                        //ldloc.s				V_24
	IL_065a:            Temp_131->Add(safe_cast<System::Object^>(Temp_132),safe_cast<System::Object^>(V_24));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_065f:                                                                        //ldarg.0
	IL_0660:            Temp_133=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0665:                                                                        //ldloc.s				V_22
	IL_0667:                                                                        //ldloc.s				V_5
	IL_0669:            Temp_134=gcnew Root::T_x87(safe_cast<Reflector::IAssemblyBrowser^>(Temp_133),safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),V_5);//newobj				void Root::T_x87::.ctor(Reflector::IAssemblyBrowser^,Reflector::CodeModel::IAssemblyManager^,Reflector::ICommandBarManager^)
	IL_066e:            V_25=Temp_134;                                              //stloc.s				V_25
	IL_0670:                                                                        //ldarg.0
	IL_0671:            Temp_135=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0676:            Temp_136=Temp_135->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_067b:                                                                        //ldstr				L"\x6722\x4A24\x4426\x5C28\x462A\x482C\x412E\x4530\x5232\x4134\x5E36\x5638\x553A\x6A3C\x563E\x2F40\x2742\x2A44\x3046"
	IL_0680:                                                                        //ldloc				V_36
	IL_0684:            Temp_137=a(L"\x6722\x4A24\x4426\x5C28\x462A\x482C\x412E\x4530\x5232\x4134\x5E36\x5638\x553A\x6A3C\x563E\x2F40\x2742\x2A44\x3046",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0689:                                                                        //ldloc.s				V_25
	IL_068b:                                                                        //ldstr				L"\x6722\x4A24\x4426\x5C28\x462A\x482C\x412E\x4530\x5232\x4134\x5E36\x5638\x553A"
	IL_0690:                                                                        //ldloc				V_36
	IL_0694:            Temp_138=a(L"\x6722\x4A24\x4426\x5C28\x462A\x482C\x412E\x4530\x5232\x4134\x5E36\x5638\x553A",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0699:            Temp_139=Temp_136->Add(Temp_137,safe_cast<System::Windows::Forms::Control^>(V_25),Temp_138);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_069e:                                                                        //pop
	IL_069f:                                                                        //ldloc.s				V_23
	IL_06a1:                                                                        //ldloc.s				V_22
	IL_06a3:                                                                        //ldarg.0
	IL_06a4:            Temp_140=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_06a9:                                                                        //ldloc.s				V_5
	IL_06ab:            Temp_141=gcnew Root::T_x103(safe_cast<Root::T_x7^>(V_23),safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),safe_cast<Reflector::IAssemblyBrowser^>(Temp_140),V_5);//newobj				void Root::T_x103::.ctor(Root::T_x7^,Reflector::CodeModel::IAssemblyManager^,Reflector::IAssemblyBrowser^,Reflector::ICommandBarManager^)
	IL_06b0:            V_26=Temp_141;                                              //stloc.s				V_26
	IL_06b2:                                                                        //ldarg.0
	IL_06b3:            Temp_142=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_06b8:            Temp_143=Temp_142->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_06bd:                                                                        //ldstr				L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x6432\x5C34\x5936\x5D38\x543A\x4A3C"
	IL_06c2:                                                                        //ldloc				V_36
	IL_06c6:            Temp_144=a(L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x6432\x5C34\x5936\x5D38\x543A\x4A3C",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06cb:                                                                        //ldloc.s				V_26
	IL_06cd:                                                                        //ldstr				L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x4032"
	IL_06d2:                                                                        //ldloc				V_36
	IL_06d6:            Temp_145=a(L"\x6122\x4A24\x4826\x4228\x462A\x4C2C\x5D2E\x5A30\x4032",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06db:            Temp_146=Temp_143->Add(Temp_144,safe_cast<System::Windows::Forms::Control^>(V_26),Temp_145);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_06e0:                                                                        //pop
	IL_06e1:                                                                        //ldloc.s				V_22
	IL_06e3:                                                                        //ldarg.0
	IL_06e4:            Temp_147=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_06e9:                                                                        //ldarg.0
	IL_06ea:            Temp_148=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_06ef:                                                                        //ldloc.s				V_5
	IL_06f1:                                                                        //ldarg.0
	IL_06f2:                                                                        //ldloc.s				V_11
	IL_06f4:            Temp_149=gcnew Root::T_x89(safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),safe_cast<Reflector::IAssemblyBrowser^>(Temp_147),Temp_148,V_5,safe_cast<Root::T_x97^>(this),safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(V_11));//newobj				void Root::T_x89::.ctor(Reflector::CodeModel::IAssemblyManager^,Reflector::IAssemblyBrowser^,Reflector::IWindowManager^,Reflector::ICommandBarManager^,Root::T_x97^,Reflector::CodeModel::IVisibilityConfiguration^)
	IL_06f9:            V_27=Temp_149;                                              //stloc.s				V_27
	IL_06fb:                                                                        //ldarg.0
	IL_06fc:            Temp_150=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0701:            Temp_151=Temp_150->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0706:                                                                        //ldstr				L"\x7022\x4024\x4626\x5B28\x482A\x452C\x782E\x5830\x5D32\x5134\x5836\x4E38"
	IL_070b:                                                                        //ldloc				V_36
	IL_070f:            Temp_152=a(L"\x7022\x4024\x4626\x5B28\x482A\x452C\x782E\x5830\x5D32\x5134\x5836\x4E38",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0714:                                                                        //ldloc.s				V_27
	IL_0716:                                                                        //ldstr				L"\x7022\x4024\x4626\x5B28\x482A\x452C"
	IL_071b:                                                                        //ldloc				V_36
	IL_071f:            Temp_153=a(L"\x7022\x4024\x4626\x5B28\x482A\x452C",V_36);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0724:            Temp_154=Temp_151->Add(Temp_152,safe_cast<System::Windows::Forms::Control^>(V_27),Temp_153);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_0729:                                                                        //pop
	IL_072a:                                                                        //ldarg.0
	IL_072b:            Temp_155=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0730:                                                                        //ldloc.s				V_22
	IL_0732:                                                                        //ldloc.s				V_5
	IL_0734:            Temp_156=gcnew Root::T_x3(safe_cast<Reflector::IAssemblyBrowser^>(Temp_155),safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),V_5);//newobj				void Root::T_x3::.ctor(Reflector::IAssemblyBrowser^,Reflector::CodeModel::IAssemblyManager^,Reflector::ICommandBarManager^)
	IL_0739:            V_28=Temp_156;                                              //stloc.s				V_28
	IL_073b:                                                                        //ldarg.0
	IL_073c:            Temp_157=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0741:            Temp_158=Temp_157->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0746:                                                                        //ldstr				L"\x6222\x4B24\x4626\x4528\x522A\x572C\x4A2E\x4330\x6432\x5C34\x5936\x5D38\x543A\x4A3C"
	IL_074b:                                                                        //ldloc				V_36
	IL_074f:            Temp_159=a(L"\x6222\x4B24\x4626\x4528\x522A\x572C\x4A2E\x4330\x6432\x5C34\x5936\x5D38\x543A\x4A3C",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0754:                                                                        //ldloc.s				V_28
	IL_0756:                                                                        //ldstr				L"\x6222\x4B24\x4626\x4528\x522A\x572C\x4A2E\x4330"
	IL_075b:                                                                        //ldloc				V_36
	IL_075f:            Temp_160=a(L"\x6222\x4B24\x4626\x4528\x522A\x572C\x4A2E\x4330",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0764:            Temp_161=Temp_158->Add(Temp_159,safe_cast<System::Windows::Forms::Control^>(V_28),Temp_160);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_0769:                                                                        //pop
	IL_076a:                                                                        //ldarg.0
	IL_076b:            Temp_162=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0770:                                                                        //ldloc.s				V_22
	IL_0772:                                                                        //ldloc.s				V_13
	IL_0774:                                                                        //ldloc.s				V_14
	IL_0776:                                                                        //ldloc.s				V_5
	IL_0778:                                                                        //ldarg.0
	IL_0779:            Temp_163=this->F_x8;                                        //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_077e:                                                                        //ldarg.0
	IL_077f:                                                                        //ldloc.3
	IL_0780:            Temp_164=gcnew Root::T_x83(safe_cast<Reflector::IAssemblyBrowser^>(Temp_162),safe_cast<Reflector::CodeModel::IAssemblyManager^>(V_22),safe_cast<Reflector::ILanguageManager^>(V_13),safe_cast<Reflector::ITranslatorManager^>(V_14),V_5,safe_cast<Reflector::IConfigurationManager^>(Temp_163),safe_cast<Root::T_x97^>(this),V_3);//newobj				void Root::T_x83::.ctor(Reflector::IAssemblyBrowser^,Reflector::CodeModel::IAssemblyManager^,Reflector::ILanguageManager^,Reflector::ITranslatorManager^,Reflector::ICommandBarManager^,Reflector::IConfigurationManager^,Root::T_x97^,System::Boolean)
	IL_0785:            V_29=Temp_164;                                              //stloc.s				V_29
	IL_0787:                                                                        //ldloc.s				V_29
	IL_0789:                                                                        //ldloc.s				V_11
	IL_078b:            V_29->M_x1(safe_cast<Reflector::CodeModel::IVisibilityConfiguration^>(V_11));//callvirt				void Root::T_x83::M_x1(Reflector::CodeModel::IVisibilityConfiguration^)
	IL_0790:                                                                        //ldarg.0
	IL_0791:            Temp_165=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0796:            Temp_166=Temp_165->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_079b:                                                                        //ldstr				L"\x6722\x4C24\x5426\x4828\x582A\x5E2C\x4A2E\x5C30\x5132\x5934\x5236\x4B38\x6C3A\x543C\x513E\x2540\x2C42\x3244"
	IL_07a0:                                                                        //ldloc				V_36
	IL_07a4:            Temp_167=a(L"\x6722\x4C24\x5426\x4828\x582A\x5E2C\x4A2E\x5C30\x5132\x5934\x5236\x4B38\x6C3A\x543C\x513E\x2540\x2C42\x3244",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07a9:                                                                        //ldloc.s				V_29
	IL_07ab:                                                                        //ldstr				L"\x6722\x4C24\x5426\x4828\x582A\x5E2C\x4A2E\x5C30\x5132\x5934\x5236\x4B38"
	IL_07b0:                                                                        //ldloc				V_36
	IL_07b4:            Temp_168=a(L"\x6722\x4C24\x5426\x4828\x582A\x5E2C\x4A2E\x5C30\x5132\x5934\x5236\x4B38",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07b9:            Temp_169=Temp_166->Add(Temp_167,safe_cast<System::Windows::Forms::Control^>(V_29),Temp_168);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_07be:                                                                        //pop
	IL_07bf:                                                                        //ldarg.0
	IL_07c0:            Temp_170=this->F_x9;                                        //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_07c5:                                                                        //ldloc.s				V_5
	IL_07c7:            Temp_171=gcnew Root::T_x88(safe_cast<Reflector::IAssemblyBrowser^>(Temp_170),V_5);//newobj				void Root::T_x88::.ctor(Reflector::IAssemblyBrowser^,Reflector::ICommandBarManager^)
	IL_07cc:            V_30=Temp_171;                                              //stloc.s				V_30
	IL_07ce:                                                                        //ldarg.0
	IL_07cf:            Temp_172=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_07d4:            Temp_173=Temp_172->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_07d9:                                                                        //ldstr				L"\x7122\x4024\x5426\x4628\x5E2A\x5F2C\x4C2E\x5430\x6432\x5C34\x5936\x5D38\x543A\x4A3C"
	IL_07de:                                                                        //ldloc				V_36
	IL_07e2:            Temp_174=a(L"\x7122\x4024\x5426\x4628\x5E2A\x5F2C\x4C2E\x5430\x6432\x5C34\x5936\x5D38\x543A\x4A3C",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07e7:                                                                        //ldloc.s				V_30
	IL_07e9:                                                                        //ldstr				L"\x7122\x4024\x5426\x4628\x5E2A\x5F2C\x4C2E\x5430\x1332\x6334\x5E36\x5C38\x4C3A\x583C\x4D3E"
	IL_07ee:                                                                        //ldloc				V_36
	IL_07f2:            Temp_175=a(L"\x7122\x4024\x5426\x4628\x5E2A\x5F2C\x4C2E\x5430\x1332\x6334\x5E36\x5C38\x4C3A\x583C\x4D3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07f7:            Temp_176=Temp_173->Add(Temp_174,safe_cast<System::Windows::Forms::Control^>(V_30),Temp_175);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_07fc:                                                                        //pop
	IL_07fd:            Temp_177=gcnew Root::T_x47();                               //newobj				void Root::T_x47::.ctor()
	IL_0802:            V_31=Temp_177;                                              //stloc.s				V_31
	IL_0804:                                                                        //ldarg.0
	IL_0805:            Temp_178=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_080a:            Temp_179=Temp_178->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_080f:                                                                        //ldstr				L"\x6E22\x5624\x4326\x4728\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x6E38\x523A\x533C\x5B3E\x2E40\x3442"
	IL_0814:                                                                        //ldloc				V_36
	IL_0818:            Temp_180=a(L"\x6E22\x5624\x4326\x4728\x692A\x5F2C\x402E\x4630\x4032\x5034\x4536\x6E38\x523A\x533C\x5B3E\x2E40\x3442",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_081d:                                                                        //ldloc.s				V_31
	IL_081f:                                                                        //ldstr				L"\x6E22\x7624\x6326\x6728"
	IL_0824:                                                                        //ldloc				V_36
	IL_0828:            Temp_181=a(L"\x6E22\x7624\x6326\x6728",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_082d:            Temp_182=Temp_179->Add(Temp_180,safe_cast<System::Windows::Forms::Control^>(V_31),Temp_181);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_0832:                                                                        //pop
	IL_0833:            Temp_183=gcnew Root::T_x47();                               //newobj				void Root::T_x47::.ctor()
	IL_0838:            V_32=Temp_183;                                              //stloc.s				V_32
	IL_083a:                                                                        //ldarg.0
	IL_083b:            Temp_184=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0840:            Temp_185=Temp_184->Windows;                                 //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0845:                                                                        //ldstr				L"\x6422\x4A24\x4826\x4E28\x472A\x482C\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x6A3C\x563E\x2F40\x2742\x2A44\x3046"
	IL_084a:                                                                        //ldloc				V_36
	IL_084e:            Temp_186=a(L"\x6422\x4A24\x4826\x4E28\x472A\x482C\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A\x6A3C\x563E\x2F40\x2742\x2A44\x3046",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0853:                                                                        //ldloc.s				V_32
	IL_0855:                                                                        //ldstr				L"\x6422\x4A24\x4826\x4E28\x472A\x482C"
	IL_085a:                                                                        //ldloc				V_36
	IL_085e:            Temp_187=a(L"\x6422\x4A24\x4826\x4E28\x472A\x482C",V_36);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0863:            Temp_188=Temp_185->Add(Temp_186,safe_cast<System::Windows::Forms::Control^>(V_32),Temp_187);//callvirt				Reflector::IWindow^ Reflector::IWindowCollection::Add(System::String^,System::Windows::Forms::Control^,System::String^)
	IL_0868:                                                                        //pop
	IL_0869:                                                                        //ldarg.0
	IL_086a:                                                                        //ldloc.s				V_5
	IL_086c:            Temp_189=V_5->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0871:                                                                        //ldstr				L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E"
	IL_0876:                                                                        //ldloc				V_36
	IL_087a:            Temp_190=a(L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_087f:            Temp_191=Temp_189[Temp_190];                                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::get_Item(System::String^)
	IL_0884:            this->M_x2(Temp_191);                                       //call				void Reflector::Application::ApplicationManager::M_x2(Reflector::ICommandBar^)
	IL_0889:                                                                        //ldarg.0
	IL_088a:                                                                        //ldloc.s				V_5
	IL_088c:            Temp_192=V_5->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0891:                                                                        //ldstr				L"\x7722\x4A24\x4826\x4528\x692A\x4C2C\x5D2E"
	IL_0896:                                                                        //ldloc				V_36
	IL_089a:            Temp_193=a(L"\x7722\x4A24\x4826\x4528\x692A\x4C2C\x5D2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_089f:            Temp_194=Temp_192[Temp_193];                                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::get_Item(System::String^)
	IL_08a4:            this->M_x1(Temp_194);                                       //call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^)
	IL_08a9:                                                                        //ldarg.0
	IL_08aa:            this->M_x48();                                              //call				void Reflector::Application::ApplicationManager::M_x48()
	IL_08af:                                                                        //ldarg.0
	IL_08b0:            this->M_x19();                                              //call				void Reflector::Application::ApplicationManager::M_x19()
	IL_08b5:                                                                        //ldloc.s				V_14
	IL_08b7:                                                                        //ldc.i4.1
	IL_08b8:                                                                        //ldc.i4.1
	IL_08b9:            Temp_195=gcnew Root::T_x131(true,true);                     //newobj				void Root::T_x131::.ctor(System::Boolean,System::Boolean)
	IL_08be:            V_14->M_x1(safe_cast<Reflector::ITranslator^>(Temp_195));   //callvirt				void Root::T_x132::M_x1(Reflector::ITranslator^)
	IL_08c3:                                                                        //ldarg.0
	IL_08c4:            this->M_x2();                                               //call				void Reflector::Application::ApplicationManager::M_x2()
	IL_08c9:                                                                        //ldarg.0
	IL_08ca:            Temp_196=System::String::Empty;                             //ldsfld				System::String^ System::String Empty
	IL_08cf:            this->M_x1(Temp_196);                                       //call				void Reflector::Application::ApplicationManager::M_x1(System::String^)
	IL_08d4:                                                                        //ldarg.0
	IL_08d5:                                                                        //ldstr				L"\x4622\x5D24\x4426\x4C28\x5B2A\x592C\x462E\x5E30\x5D32"
	IL_08da:                                                                        //ldloc				V_36
	IL_08de:            Temp_197=a(L"\x4622\x5D24\x4426\x4C28\x5B2A\x592C\x462E\x5E30\x5D32",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08e3:            Temp_198=this->M_x12(Temp_197);                             //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_08e8:            if(Temp_198==nullptr)goto IL_0cf9;                          //brfalse				IL_0cf9
	IL_08ed:            goto IL_09d4;                                               //br				IL_09d4
	IL_08f2:                                                                        //ldarg.0
	IL_08f3:            Temp_205=this->F_x13;                                       //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_08f8:                                                                        //castclass				System::Windows::Forms::Form
	IL_08fd:            V_6=safe_cast<System::Windows::Forms::Form^>(Temp_205);     //stloc.s				V_6
	IL_08ff:                                                                        //ldloc.s				V_6
	IL_0901:            Temp_206=gcnew Root::T_x122(V_6);                           //newobj				void Root::T_x122::.ctor(System::Windows::Forms::Form^)
	IL_0906:            V_5=safe_cast<Reflector::ICommandBarManager^>(Temp_206);    //stloc.s				V_5
	IL_0908:                                                                        //ldarg.0
	IL_0909:            Temp_207=this->F_x2;                                        //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_090e:                                                                        //ldtoken				Reflector::ICommandBarManager
	IL_0913:            Temp_208=Reflector::ICommandBarManager::typeid;             //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0918:                                                                        //ldloc.s				V_5
	IL_091a:            Temp_207->Add(safe_cast<System::Object^>(Temp_208),safe_cast<System::Object^>(V_5));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_091f:                                                                        //ldloc.s				V_5
	IL_0921:            Temp_209=V_5->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0926:                                                                        //ldstr				L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E"
	IL_092b:                                                                        //ldloc				V_36
	IL_092f:            Temp_210=a(L"\x6E22\x4024\x4926\x5C28\x692A\x4C2C\x5D2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0934:            Temp_211=Temp_209->AddMenuBar(Temp_210);                    //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddMenuBar(System::String^)
	IL_0939:                                                                        //pop
	IL_093a:            goto IL_0210;                                               //br				IL_0210
	IL_093f:                                                                        //ldarg.1
	IL_0940:            Temp_280=Temp_274;Temp_279=A_0;goto IL_0c77;                //br				IL_0c77
	IL_0945:                                                                        //ldarg.0
	IL_0946:                                                                        //ldtoken				Reflector::IPackage
	IL_094b:            Temp_15=Reflector::IPackage::typeid;                        //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0950:            Temp_16=Temp_15->Module;                                    //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_0955:            Temp_17=Temp_16->FullyQualifiedName;                        //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_095a:                                                                        //ldstr				L"\x0D22\x4624\x4126\x4E28"
	IL_095f:                                                                        //ldloc				V_36
	IL_0963:            Temp_18=a(L"\x0D22\x4624\x4126\x4E28",V_36);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0968:            Temp_19=System::IO::Path::ChangeExtension(Temp_17,Temp_18); //call				System::String^ System::IO::Path::ChangeExtension(System::String^,System::String^)
	IL_096d:            this->F_x1=Temp_19;                                         //stfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0972:            goto IL_0c14;                                               //br				IL_0c14
	IL_0977:                                                                        //ldarg.0
	IL_0978:                                                                        //ldstr				L"\x4B22\x4024\x4B26\x5928"
	IL_097d:                                                                        //ldloc				V_36
	IL_0981:            Temp_6=a(L"\x4B22\x4024\x4B26\x5928",V_36);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0986:            Temp_7=this->M_x12(Temp_6);                                 //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_098b:            if(Temp_7==nullptr)goto IL_09da;                            //brfalse				IL_09da
	IL_0990:            goto IL_0c04;                                               //br				IL_0c04
	IL_0995:                                                                        //ldloc.s				V_7
	IL_0997:                                                                        //ldarg.0
	IL_0998:            Temp_200=this->F_x8;                                        //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_099d:                                                                        //ldstr				L"\x7422\x4C24\x4926\x4D28\x442A\x5A2C\x622E\x5030\x5D32\x5434\x5036\x5C38\x493A"
	IL_09a2:                                                                        //ldloc				V_36
	IL_09a6:            Temp_201=a(L"\x7422\x4C24\x4926\x4D28\x442A\x5A2C\x622E\x5030\x5D32\x5434\x5036\x5C38\x493A",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09ab:            Temp_202=Temp_200->M_x2(Temp_201);                          //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_09b0:            V_7->M_x1(Temp_202);                                        //callvirt				void Root::T_x68::M_x1(Reflector::IConfiguration^)
	IL_09b5:                                                                        //ldloc.s				V_7
	IL_09b7:                                                                        //ldarg.0
	IL_09b8:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,Root::T_x72^)
	IL_09be:            Temp_203=gcnew Root::T_x73(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void Root::T_x73::.ctor(System::Object^,System::IntPtr)
	IL_09c3:            V_7->M_x1(Temp_203);                                        //callvirt				void Root::T_x68::M_x1(Root::T_x73^)
	IL_09c8:            goto IL_0300;                                               //br				IL_0300
	IL_09cd:            Temp_67=gcnew Root::T_x80();                                //newobj				void Root::T_x80::.ctor()
	IL_09d2:            Temp_277=Temp_275;Temp_276=Temp_67;goto IL_09f8;            //br.s				IL_09f8
	IL_09d4:            Temp_199=gcnew System::NotSupportedException();             //newobj				void System::NotSupportedException::.ctor()
	IL_09d9:            throw Temp_199;                                             //throw
	IL_09da:                                                                        //ldarg.0
	IL_09db:                                                                        //ldstr				L"\x4A22\x4B24\x5426\x5D28\x4A2A\x412C\x432E"
	IL_09e0:                                                                        //ldloc				V_36
	IL_09e4:            Temp_8=a(L"\x4A22\x4B24\x5426\x5D28\x4A2A\x412C\x432E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09e9:            Temp_9=this->M_x12(Temp_8);                                 //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_09ee:            if(Temp_9==nullptr)goto IL_0bbf;                            //brfalse				IL_0bbf
	IL_09f3:            goto IL_02db;                                               //br				IL_02db
	IL_09f8:            Temp_277->F_x4=safe_cast<Root::T_x75^>(Temp_276);/*warning ! semantic stack doesn't empty at joint !;*///stfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_09fd:                                                                        //ldarg.0
	IL_09fe:            Temp_68=this->F_x4;                                         //ldfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_0a03:                                                                        //ldarg.0
	IL_0a04:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,Root::T_x124^)
	IL_0a0a:            Temp_69=gcnew Root::T_x125(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void Root::T_x125::.ctor(System::Object^,System::IntPtr)
	IL_0a0f:            Temp_68->M_x1(Temp_69);                                     //callvirt				void Root::T_x75::M_x1(Root::T_x125^)
	IL_0a14:                                                                        //ldarg.0
	IL_0a15:            Temp_70=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0a1a:                                                                        //isinst				Root::T_x68
	IL_0a1f:            V_7=dynamic_cast<Root::T_x68^>(Temp_70);                    //stloc.s				V_7
	IL_0a21:                                                                        //ldloc.s				V_7
	IL_0a23:            if(V_7==nullptr)goto IL_0300;                               //brfalse				IL_0300
	IL_0a28:            goto IL_0995;                                               //br				IL_0995
	IL_0a2d:                                                                        //ldloc.2
	IL_0a2e:            System::IO::File::Delete(V_2);                              //call				void System::IO::File::Delete(System::String^)
	IL_0a33:            goto IL_0bbf;                                               //br				IL_0bbf
	IL_0a38:            Temp_212=gcnew Root::T_x68();                               //newobj				void Root::T_x68::.ctor()
	IL_0a3d:            Temp_280=Temp_278;Temp_279=Temp_212;goto IL_0c77;           //br				IL_0c77
	IL_0A3D01:          try{
	IL_0a42:            Temp_233=Microsoft::Win32::Registry::ClassesRoot;           //ldsfld				Microsoft::Win32::RegistryKey^ Microsoft::Win32::Registry ClassesRoot
	IL_0a47:                                                                        //ldstr				L"\x0D22\x4124\x4B26\x4528"
	IL_0a4c:                                                                        //ldloc				V_36
	IL_0a50:            Temp_234=a(L"\x0D22\x4124\x4B26\x4528",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a55:            Temp_235=Temp_233->CreateSubKey(Temp_234);                  //callvirt				Microsoft::Win32::RegistryKey^ Microsoft::Win32::RegistryKey::CreateSubKey(System::String^)
	IL_0a5a:                                                                        //ldnull
	IL_0a5b:                                                                        //ldstr				L"\x4722\x4924\x4B26\x4F28\x422A\x412C\x4A2E"
	IL_0a60:                                                                        //ldloc				V_36
	IL_0a64:            Temp_236=a(L"\x4722\x4924\x4B26\x4F28\x422A\x412C\x4A2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a69:            Temp_235->SetValue(safe_cast<System::String^>(nullptr),safe_cast<System::Object^>(Temp_236));//callvirt				void Microsoft::Win32::RegistryKey::SetValue(System::String^,System::Object^)
	IL_0a6e:            Temp_237=Microsoft::Win32::Registry::ClassesRoot;           //ldsfld				Microsoft::Win32::RegistryKey^ Microsoft::Win32::Registry ClassesRoot
	IL_0a73:                                                                        //ldstr				L"\x4722\x4924\x4B26\x4F28\x422A\x412C\x4A2E\x6D30\x4032\x5D34\x5236\x5538\x573A\x613C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x6B4A\x3A4C\x264E\x2550\x3B52\x7554\x7956\x1758\x1E5A\x095C\x7F5E\x3360\x0662\x0364\x0B66\x0C68\x086A\x196C\x006E\x0370\x2F72\x1674\x1876\x1478\x167A\x1C7C\x117E\xE580"
	IL_0a78:                                                                        //ldloc				V_36
	IL_0a7c:            Temp_238=a(L"\x4722\x4924\x4B26\x4F28\x422A\x412C\x4A2E\x6D30\x4032\x5D34\x5236\x5538\x573A\x613C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x6B4A\x3A4C\x264E\x2550\x3B52\x7554\x7956\x1758\x1E5A\x095C\x7F5E\x3360\x0662\x0364\x0B66\x0C68\x086A\x196C\x006E\x0370\x2F72\x1674\x1876\x1478\x167A\x1C7C\x117E\xE580",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a81:            Temp_239=Temp_237->CreateSubKey(Temp_238);                  //callvirt				Microsoft::Win32::RegistryKey^ Microsoft::Win32::RegistryKey::CreateSubKey(System::String^)
	IL_0a86:                                                                        //ldnull
	IL_0a87:                                                                        //ldstr				L"\x0122"
	IL_0a8c:                                                                        //ldloc				V_36
	IL_0a90:            Temp_240=a(L"\x0122",V_36);                                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a95:                                                                        //ldtoken				Reflector::IPackage
	IL_0a9a:            Temp_241=Reflector::IPackage::typeid;                       //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0a9f:            Temp_242=Temp_241->Module;                                  //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_0aa4:            Temp_243=Temp_242->FullyQualifiedName;                      //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0aa9:                                                                        //ldstr				L"\x0122\x0524\x0526\x0C28\x1A2A\x0F2C"
	IL_0aae:                                                                        //ldloc				V_36
	IL_0ab2:            Temp_244=a(L"\x0122\x0524\x0526\x0C28\x1A2A\x0F2C",V_36);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ab7:            Temp_245=System::String::Concat(Temp_240,Temp_243,Temp_244);//call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0abc:            Temp_239->SetValue(safe_cast<System::String^>(nullptr),safe_cast<System::Object^>(Temp_245));//callvirt				void Microsoft::Win32::RegistryKey::SetValue(System::String^,System::Object^)
	IL_0ac1:            Temp_246=Microsoft::Win32::Registry::ClassesRoot;           //ldsfld				Microsoft::Win32::RegistryKey^ Microsoft::Win32::Registry ClassesRoot
	IL_0ac6:                                                                        //ldstr				L"\x0D22\x4024\x5F26\x4C28"
	IL_0acb:                                                                        //ldloc				V_36
	IL_0acf:            Temp_247=a(L"\x0D22\x4024\x5F26\x4C28",V_36);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ad4:            Temp_248=Temp_246->CreateSubKey(Temp_247);                  //callvirt				Microsoft::Win32::RegistryKey^ Microsoft::Win32::RegistryKey::CreateSubKey(System::String^)
	IL_0ad9:                                                                        //ldnull
	IL_0ada:                                                                        //ldstr				L"\x4622\x5D24\x4226\x4F28\x422A\x412C\x4A2E"
	IL_0adf:                                                                        //ldloc				V_36
	IL_0ae3:            Temp_249=a(L"\x4622\x5D24\x4226\x4F28\x422A\x412C\x4A2E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ae8:            Temp_248->SetValue(safe_cast<System::String^>(nullptr),safe_cast<System::Object^>(Temp_249));//callvirt				void Microsoft::Win32::RegistryKey::SetValue(System::String^,System::Object^)
	IL_0aed:            Temp_250=Microsoft::Win32::Registry::ClassesRoot;           //ldsfld				Microsoft::Win32::RegistryKey^ Microsoft::Win32::Registry ClassesRoot
	IL_0af2:                                                                        //ldstr				L"\x4622\x5D24\x4226\x4F28\x422A\x412C\x4A2E\x6D30\x4032\x5D34\x5236\x5538\x573A\x613C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x6B4A\x3A4C\x264E\x2550\x3B52\x7554\x7956\x1758\x1E5A\x095C\x7F5E\x3360\x0662\x0364\x0B66\x0C68\x086A\x196C\x006E\x0370\x2F72\x1674\x1876\x1478\x167A\x1C7C\x117E\xE580"
	IL_0af7:                                                                        //ldloc				V_36
	IL_0afb:            Temp_251=a(L"\x4622\x5D24\x4226\x4F28\x422A\x412C\x4A2E\x6D30\x4032\x5D34\x5236\x5538\x573A\x613C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x6B4A\x3A4C\x264E\x2550\x3B52\x7554\x7956\x1758\x1E5A\x095C\x7F5E\x3360\x0662\x0364\x0B66\x0C68\x086A\x196C\x006E\x0370\x2F72\x1674\x1876\x1478\x167A\x1C7C\x117E\xE580",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b00:            Temp_252=Temp_250->CreateSubKey(Temp_251);                  //callvirt				Microsoft::Win32::RegistryKey^ Microsoft::Win32::RegistryKey::CreateSubKey(System::String^)
	IL_0b05:                                                                        //ldnull
	IL_0b06:                                                                        //ldstr				L"\x0122"
	IL_0b0b:                                                                        //ldloc				V_36
	IL_0b0f:            Temp_253=a(L"\x0122",V_36);                                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b14:                                                                        //ldtoken				Reflector::IPackage
	IL_0b19:            Temp_254=Reflector::IPackage::typeid;                       //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0b1e:            Temp_255=Temp_254->Module;                                  //callvirt				System::Reflection::Module^ System::Type::get_Module()
	IL_0b23:            Temp_256=Temp_255->FullyQualifiedName;                      //callvirt				System::String^ System::Reflection::Module::get_FullyQualifiedName()
	IL_0b28:                                                                        //ldstr				L"\x0122\x0524\x0526\x0C28\x1A2A\x0F2C"
	IL_0b2d:                                                                        //ldloc				V_36
	IL_0b31:            Temp_257=a(L"\x0122\x0524\x0526\x0C28\x1A2A\x0F2C",V_36);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b36:            Temp_258=System::String::Concat(Temp_253,Temp_256,Temp_257);//call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_0b3b:            Temp_252->SetValue(safe_cast<System::String^>(nullptr),safe_cast<System::Object^>(Temp_258));//callvirt				void Microsoft::Win32::RegistryKey::SetValue(System::String^,System::Object^)
	IL_0b40:                                                                        //ldnull
	IL_0b41:                                                                        //ldstr				L"\x6522\x4C24\x4B26\x4C28\x0B2A\x482C\x572E\x4530\x5632\x5B34\x4436\x5038\x543A\x533C\x4C3E\x6140\x3042\x3044\x2446\x2A48\x2E4A\x3E4C\x3C4E\x3750\x2652\x3954\x3B56\x2058\x7B5A\x2F5C\x3A5E\x0660\x0A62\x1664\x1366\x0C68\x196A\x086C\x0B6E\x5F70"
	IL_0b46:                                                                        //ldloc				V_36
	IL_0b4a:            Temp_259=a(L"\x6522\x4C24\x4B26\x4C28\x0B2A\x482C\x572E\x4530\x5632\x5B34\x4436\x5038\x543A\x533C\x4C3E\x6140\x3042\x3044\x2446\x2A48\x2E4A\x3E4C\x3C4E\x3750\x2652\x3954\x3B56\x2058\x7B5A\x2F5C\x3A5E\x0660\x0A62\x1664\x1366\x0C68\x196A\x086C\x0B6E\x5F70",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b4f:                                                                        //ldstr				L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E"
	IL_0b54:                                                                        //ldloc				V_36
	IL_0b58:            Temp_260=a(L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b5d:            Temp_261=Root::T_x128::M_x1(Temp_260);                      //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0b62:                                                                        //ldc.i4.0
	IL_0b63:                                                                        //ldc.i4.s				48
	IL_0b65:            Temp_262=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_259,Temp_261,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0b6a:                                                                        //pop
	IL_0b6b:            goto IL_0ce8;                                               //leave				IL_0ce8
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_0B6B02){
	IL_0b70:            V_0=Ex_0B6B02;                                              //stloc.0
	IL_0b71:                                                                        //ldnull
	IL_0b72:            Temp_264=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0b77:                                                                        //ldstr				L"\x7122\x4024\x4026\x4028\x582A\x592C\x5D2E\x5030\x4732\x5C34\x5836\x5738\x1B3A\x5B3C\x5E3E\x2840\x2F42\x2044\x2346\x6948\x3C4A\x244C\x3B4E\x3950\x7352\x3354\x3856\x3558\x375A\x325C\x285E\x0860\x0D62\x0264\x4766\x0C68\x196A\x1F6C\x006E\x0370\x4972\x5574\x5076\x0278\x4B7A\x007C\x587E\xAF80"
	IL_0b7c:                                                                        //ldloc				V_36
	IL_0b80:            Temp_265=a(L"\x7122\x4024\x4026\x4028\x582A\x592C\x5D2E\x5030\x4732\x5C34\x5836\x5738\x1B3A\x5B3C\x5E3E\x2840\x2F42\x2044\x2346\x6948\x3C4A\x244C\x3B4E\x3950\x7352\x3354\x3856\x3558\x375A\x325C\x285E\x0860\x0D62\x0264\x4766\x0C68\x196A\x1F6C\x006E\x0370\x4972\x5574\x5076\x0278\x4B7A\x007C\x587E\xAF80",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b85:                                                                        //ldc.i4.1
	IL_0b86:            Temp_266=gcnew array<System::Object^>(1);                   //newarr				System::Object
	IL_0b8b:            V_34=Temp_266;                                              //stloc.s				V_34
	IL_0b8d:                                                                        //ldloc.s				V_34
	IL_0b8f:                                                                        //ldc.i4.0
	IL_0b90:                                                                        //ldloc.0
	IL_0b91:            Temp_267=V_0->Message;                                      //callvirt				System::String^ System::Exception::get_Message()
	IL_0b96:            V_34[0]=safe_cast<System::Object^>(Temp_267);               //stelem.ref
	IL_0b97:                                                                        //ldloc.s				V_34
	IL_0b99:            Temp_268=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_264),Temp_265,V_34);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0b9e:                                                                        //ldstr				L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E"
	IL_0ba3:                                                                        //ldloc				V_36
	IL_0ba7:            Temp_269=a(L"\x6222\x5524\x5726\x4528\x422A\x4E2C\x4E2E\x4530\x5A32\x5A34\x5936\x7738\x5A3A\x503C\x5A3E",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bac:            Temp_270=Root::T_x128::M_x1(Temp_269);                      //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0bb1:                                                                        //ldc.i4.0
	IL_0bb2:                                                                        //ldc.i4.s				16
	IL_0bb4:            Temp_271=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_268,Temp_270,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0bb9:                                                                        //pop
	IL_0bba:            goto IL_0ce8;                                               //leave				IL_0ce8
	                    ;}
	IL_0bbf:                                                                        //ldarg.0
	IL_0bc0:                                                                        //ldstr				L"\x4022\x4A24\x4A26\x5928\x4A2A\x592C\x462E\x5330\x5F32\x5034"
	IL_0bc5:                                                                        //ldloc				V_36
	IL_0bc9:            Temp_10=a(L"\x4022\x4A24\x4A26\x5928\x4A2A\x592C\x462E\x5330\x5F32\x5034",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bce:            Temp_11=this->M_x12(Temp_10);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_0bd3:                                                                        //ldnull
	IL_0bd4:                                                                        //ceq
	IL_0bd6:                                                                        //ldc.i4.0
	IL_0bd7:                                                                        //ceq
	IL_0bd9:            V_3=((Temp_11 == safe_cast<System::String^>(nullptr)) == false);//stloc.3
	IL_0bda:                                                                        //ldarg.0
	IL_0bdb:                                                                        //ldarg.0
	IL_0bdc:                                                                        //ldstr				L"\x4022\x4A24\x4926\x4F28\x422A\x4A2C\x5A2E\x4330\x5232\x4134\x5E36\x5638\x553A"
	IL_0be1:                                                                        //ldloc				V_36
	IL_0be5:            Temp_12=a(L"\x4022\x4A24\x4926\x4F28\x422A\x4A2C\x5A2E\x4330\x5232\x4134\x5E36\x5638\x553A",V_36);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bea:            Temp_13=this->M_x12(Temp_12);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_0bef:            this->F_x1=Temp_13;                                         //stfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0bf4:                                                                        //ldarg.0
	IL_0bf5:            Temp_14=this->F_x1;                                         //ldfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0bfa:            if(Temp_14==nullptr)goto IL_0945;                           //brfalse				IL_0945
	IL_0bff:            goto IL_0cd3;                                               //br				IL_0cd3
	IL_0c04:            Temp_218=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0c09:            Temp_219=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_218));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0c0e:            V_1=Temp_219;                                               //stloc.1
	IL_0c0f:            /*goto IL_0120;*/goto IL_011B01;                            //br				IL_0120
	IL_0c14:                                                                        //ldarg.0
	IL_0c15:            Temp_20=gcnew Root::T_x110();                               //newobj				void Root::T_x110::.ctor()
	IL_0c1a:            this->F_x8=Temp_20;                                         //stfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0c1f:                                                                        //ldarg.0
	IL_0c20:            Temp_21=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0c25:                                                                        //ldtoken				Reflector::IConfigurationManager
	IL_0c2a:            Temp_22=Reflector::IConfigurationManager::typeid;           //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0c2f:                                                                        //ldarg.0
	IL_0c30:            Temp_23=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0c35:            Temp_21->Add(safe_cast<System::Object^>(Temp_22),safe_cast<System::Object^>(Temp_23));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0c3a:                                                                        //ldarg.0
	IL_0c3b:            Temp_24=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0c40:                                                                        //ldarg.0
	IL_0c41:            Temp_25=this->F_x1;                                         //ldfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0c46:            Temp_24->M_x12(Temp_25);                                    //callvirt				void Root::T_x110::M_x12(System::String^)
	IL_0c4b:                                                                        //ldarg.0
	IL_0c4c:            this->M_x1();                                               //call				void Reflector::Application::ApplicationManager::M_x1()
	IL_0c51:                                                                        //ldarg.0
	IL_0c52:                                                                        //ldarg.0
	IL_0c53:            Temp_26=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0c58:            Temp_27=gcnew Root::T_x134(safe_cast<Reflector::IConfigurationManager^>(Temp_26));//newobj				void Root::T_x134::.ctor(Reflector::IConfigurationManager^)
	IL_0c5d:            this->F_x5=Temp_27;                                         //stfld				Root::T_x134^ Reflector::Application::ApplicationManager F_x5
	IL_0c62:                                                                        //ldarg.0
	IL_0c63:            Temp_28=this->F_x5;                                         //ldfld				Root::T_x134^ Reflector::Application::ApplicationManager F_x5
	IL_0c68:            Temp_29=Temp_28->M_x8();                                    //callvirt				System::Boolean Root::T_x134::M_x8()
	IL_0c6d:            if(!Temp_29)goto IL_007e;                                   //brfalse				IL_007e
	IL_0c72:            goto IL_02d0;                                               //br				IL_02d0
	IL_0c77:            Temp_280->F_x13=Temp_279;/*warning ! semantic stack doesn't empty at joint !;*///stfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0c7c:                                                                        //ldarg.0
	IL_0c7d:            Temp_33=this->F_x2;                                         //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0c82:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0c87:            Temp_34=Reflector::IWindowManager::typeid;                  //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0c8c:                                                                        //ldarg.0
	IL_0c8d:            Temp_35=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0c92:            Temp_33->Add(safe_cast<System::Object^>(Temp_34),safe_cast<System::Object^>(Temp_35));//callvirt				void System::Collections::IDictionary::Add(System::Object^,System::Object^)
	IL_0c97:                                                                        //ldarg.0
	IL_0c98:            Temp_36=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0c9d:                                                                        //ldarg.0
	IL_0c9e:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x4(System::Object^,System::EventArgs^)
	IL_0ca4:            Temp_37=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x4);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0ca9:            Temp_36->Closed += Temp_37;                                 //callvirt				void Reflector::IWindowManager::add_Closed(System::EventHandler^)
	IL_0cae:                                                                        //ldarg.0
	IL_0caf:            Temp_38=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0cb4:                                                                        //ldarg.0
	IL_0cb5:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x15(System::Object^,System::EventArgs^)
	IL_0cbb:            Temp_39=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x15);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0cc0:            Temp_38->Load += Temp_39;                                   //callvirt				void Reflector::IWindowManager::add_Load(System::EventHandler^)
	IL_0cc5:                                                                        //ldnull
	IL_0cc6:            V_5=safe_cast<Reflector::ICommandBarManager^>(nullptr);     //stloc.s				V_5
	IL_0cc8:                                                                        //ldloc.3
	IL_0cc9:            if(!V_3)goto IL_00b0;                                       //brfalse				IL_00b0
	IL_0cce:            goto IL_08f2;                                               //br				IL_08f2
	IL_0cd3:                                                                        //ldarg.0
	IL_0cd4:            Temp_213=this->F_x1;                                        //ldfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0cd9:            Temp_214=Temp_213->Length;                                  //callvirt				System::Int32 System::String::get_Length()
	IL_0cde:            if(Temp_214!=0)goto IL_0c14;                                //brtrue				IL_0c14
	IL_0ce3:            goto IL_0945;                                               //br				IL_0945
	IL_0ce8:            goto IL_0d0d;                                               //leave				IL_0d0d
	IL_0ced:                                                                        //ldloc.s				V_5
	IL_0cef:            Temp_204=gcnew Root::T_x16(V_5);                            //newobj				void Root::T_x16::.ctor(Reflector::ICommandBarManager^)
	IL_0cf4:            Temp_277=Temp_281;Temp_276=Temp_204;goto IL_09f8;           //br				IL_09f8
	IL_0cf9:            goto IL_0023;                                               //leave				IL_0023
	                    ;}
	                    catch(System::Exception^ Ex_0CF902){
	IL_0cfe:            V_33=Ex_0CF902;                                             //stloc.s				V_33
	IL_0d00:                                                                        //ldarg.0
	IL_0d01:                                                                        //ldloc.s				V_33
	IL_0d03:            this->M_x13(V_33);                                          //call				void Reflector::Application::ApplicationManager::M_x13(System::Exception^)
	IL_0d08:            goto IL_0023;                                               //leave				IL_0023
	                    ;}
	IL_0d0d:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::IConfiguration^ Temp_2 = nullptr;
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
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_5=13;                                                     //stloc				V_5
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0012:                                                                        //ldstr				L"\x7C2A\x482C\x4D2E\x6130\x4132\x5A34\x4F36\x4038"
	IL_0017:                                                                        //ldloc				V_5
	IL_001b:            Temp_1=a(L"\x7C2A\x482C\x4D2E\x6130\x4132\x5A34\x4F36\x4038",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0020:            Temp_2=Temp_0->M_x2(Temp_1);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0025:            V_0=Temp_2;                                                 //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldstr				L"\x7F2A\x542C\x5F2E\x5430"
	IL_002c:                                                                        //ldloc				V_5
	IL_0030:            Temp_3=a(L"\x7F2A\x542C\x5F2E\x5430",V_5);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0035:                                                                        //ldstr				L"\x6F2A\x482C\x492E\x5030\x4632\x5934\x4336"
	IL_003a:                                                                        //ldloc				V_5
	IL_003e:            Temp_4=a(L"\x6F2A\x482C\x492E\x5030\x4632\x5934\x4336",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0043:            Temp_5=V_0->GetProperty(Temp_3,Temp_4);                     //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_0048:            V_1=Temp_5;                                                 //stloc.1
	IL_0049:                                                                        //ldloc.0
	IL_004a:                                                                        //ldstr				L"\x6A2A\x492C\x4B2E\x4330\x5632\x4634\x4436"
	IL_004f:                                                                        //ldloc				V_5
	IL_0053:            Temp_6=a(L"\x6A2A\x492C\x4B2E\x4330\x5632\x4634\x4436",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            Temp_7=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_005d:            Temp_8=V_0->GetProperty(Temp_6,Temp_7);                     //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_0062:            V_2=Temp_8;                                                 //stloc.2
	IL_0063:                                                                        //ldloc.0
	IL_0064:                                                                        //ldstr				L"\x7E2A\x5E2C\x4A2E\x4330"
	IL_0069:                                                                        //ldloc				V_5
	IL_006d:            Temp_9=a(L"\x7E2A\x5E2C\x4A2E\x4330",V_5);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:            Temp_10=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0077:            Temp_11=V_0->GetProperty(Temp_9,Temp_10);                   //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_007c:            Temp_12=Root::T_x112::M_x1(Temp_11);                        //call				System::String^ Root::T_x112::M_x1(System::String^)
	IL_0081:            V_3=Temp_12;                                                //stloc.3
	IL_0082:                                                                        //ldloc.0
	IL_0083:                                                                        //ldstr				L"\x7B2A\x4C2C\x5C2E\x4230\x4432\x5A34\x4536\x5D38"
	IL_0088:                                                                        //ldloc				V_5
	IL_008c:            Temp_13=a(L"\x7B2A\x4C2C\x5C2E\x4230\x4432\x5A34\x4536\x5D38",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0091:            Temp_14=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0096:            Temp_15=V_0->GetProperty(Temp_13,Temp_14);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_009b:            Temp_16=Root::T_x112::M_x1(Temp_15);                        //call				System::String^ Root::T_x112::M_x1(System::String^)
	IL_00a0:            V_4=Temp_16;                                                //stloc.s				V_4
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //ldloc.2
	IL_00a4:                                                                        //ldloc.3
	IL_00a5:                                                                        //ldloc.s				V_4
	IL_00a7:            Root::T_x4::M_x1(V_1,V_2,V_3,V_4);                          //call				void Root::T_x4::M_x1(System::String^,System::String^,System::String^,System::String^)
	IL_00ac:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Drawing::Image^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Drawing::Image^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_10 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_11 = nullptr;
	System::Drawing::Image^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::Drawing::Image^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_18 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_19 = nullptr;
	System::Drawing::Image^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Drawing::Image^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Drawing::Image^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Drawing::Image^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	Root::T_x6^ Temp_34 = nullptr;
	Reflector::ICommandBarComboBox^ Temp_35 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_36 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_37 = nullptr;
	System::Drawing::Image^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	//local variables.
	Root::T_x118^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_2=10;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x0
	IL_000e:            V_1=0;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002b;                                               //br.s				IL_002b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_003f;case 2:goto IL_0240;};//switch				(IL_0014,IL_003f,IL_0240)
	IL_002b:                                                                        //ldarg.1
	IL_002c:            if(A_0==nullptr)goto IL_0242;                               //brfalse				IL_0242
	IL_0031:            goto IL_0034;                                               //br.s				IL_0034
	IL_0033:                                                                        //break
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_1=1;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0016;*/goto IL_003f;                              //br.s				IL_0016
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldtoken				Root::T_x107
	IL_0047:            Temp_0=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004c:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0051:                                                                        //castclass				Root::T_x107
	IL_0056:                                                                        //pop
	IL_0057:                                                                        //ldarg.0
	IL_0058:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_005d:            Temp_2=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0062:            Temp_3=this->M_x1(Temp_2);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0067:                                                                        //castclass				Root::T_x118
	IL_006c:            V_0=safe_cast<Root::T_x118^>(Temp_3);                       //stloc.0
	IL_006d:                                                                        //ldarg.0
	IL_006e:                                                                        //ldarg.1
	IL_006f:            Temp_4=Root::T_x106::M_x11();                               //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0074:                                                                        //ldstr				L"\x0E27\x6829\x4D2B\x4D2D\x5B2F"
	IL_0079:                                                                        //ldloc				V_2
	IL_007d:            Temp_5=a(L"\x0E27\x6829\x4D2B\x4D2D\x5B2F",V_2);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0082:                                                                        //ldc.i4				0x40025
	IL_0087:                                                                        //ldstr				L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35\x7A37\x4839\x533B\x493D\x333F\x2741\x3643\x6845\x0F47\x2549\x0E4B\x2F4D\x334F\x3951"
	IL_008c:                                                                        //ldloc				V_2
	IL_0090:            Temp_6=a(L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35\x7A37\x4839\x533B\x493D\x333F\x2741\x3643\x6845\x0F47\x2549\x0E4B\x2F4D\x334F\x3951",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0095:            this->M_x1(A_0,Temp_4,Temp_5,safe_cast<System::Windows::Forms::Keys>(262181),Temp_6);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_009a:                                                                        //ldarg.0
	IL_009b:                                                                        //ldarg.1
	IL_009c:            Temp_7=Root::T_x106::M_x15();                               //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_00a1:                                                                        //ldstr				L"\x0E27\x6C29\x432B\x5C2D\x472F\x5331\x4633\x5235"
	IL_00a6:                                                                        //ldloc				V_2
	IL_00aa:            Temp_8=a(L"\x0E27\x6C29\x432B\x5C2D\x472F\x5331\x4633\x5235",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00af:                                                                        //ldc.i4				0x40027
	IL_00b4:                                                                        //ldstr				L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35\x7A37\x4839\x533B\x493D\x333F\x2741\x3643\x6845\x0F47\x2549\x0A4B\x214D\x224F\x2551\x3553\x2455\x3C57"
	IL_00b9:                                                                        //ldloc				V_2
	IL_00bd:            Temp_9=a(L"\x6927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x4F35\x7A37\x4839\x533B\x493D\x333F\x2741\x3643\x6845\x0F47\x2549\x0A4B\x214D\x224F\x2551\x3553\x2455\x3C57",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c2:            this->M_x1(A_0,Temp_7,Temp_8,safe_cast<System::Windows::Forms::Keys>(262183),Temp_9);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_00c7:                                                                        //ldarg.1
	IL_00c8:            Temp_10=A_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00cd:            Temp_11=Temp_10->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_00d2:                                                                        //pop
	IL_00d3:                                                                        //ldarg.0
	IL_00d4:                                                                        //ldarg.1
	IL_00d5:            Temp_12=Root::T_x106::M_x56();                              //call				System::Drawing::Image^ Root::T_x106::M_x56()
	IL_00da:                                                                        //ldstr				L"\x0E27\x6529\x5C2B\x4B2D\x5E2F\x1C31\x1A33\x1835"
	IL_00df:                                                                        //ldloc				V_2
	IL_00e3:            Temp_13=a(L"\x0E27\x6529\x5C2B\x4B2D\x5E2F\x1C31\x1A33\x1835",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e8:                                                                        //ldc.i4				0x2004f
	IL_00ed:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x0F3F\x3241\x2143\x2845\x0E47\x2349\x204B\x2B4D"
	IL_00f2:                                                                        //ldloc				V_2
	IL_00f6:            Temp_14=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x0F3F\x3241\x2143\x2845\x0E47\x2349\x204B\x2B4D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fb:            this->M_x1(A_0,Temp_12,Temp_13,safe_cast<System::Windows::Forms::Keys>(131151),Temp_14);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0100:                                                                        //ldarg.0
	IL_0101:                                                                        //ldarg.1
	IL_0102:            Temp_15=Root::T_x106::M_x5();                               //call				System::Drawing::Image^ Root::T_x106::M_x5()
	IL_0107:                                                                        //ldstr				L"\x0E27\x7829\x492B\x482D\x422F\x5731\x4733\x5E35"
	IL_010c:                                                                        //ldloc				V_2
	IL_0110:            Temp_16=a(L"\x0E27\x7829\x492B\x482D\x422F\x5731\x4733\x5E35",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0115:                                                                        //ldc.i4.s				116
	IL_0117:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x123F\x2741\x2243\x3445\x2D47\x3949\x244B"
	IL_011c:                                                                        //ldloc				V_2
	IL_0120:            Temp_17=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x123F\x2741\x2243\x3445\x2D47\x3949\x244B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0125:            this->M_x1(A_0,Temp_15,Temp_16,safe_cast<System::Windows::Forms::Keys>(116),Temp_17);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_012a:                                                                        //ldarg.1
	IL_012b:            Temp_18=A_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0130:            Temp_19=Temp_18->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0135:                                                                        //pop
	IL_0136:                                                                        //ldarg.0
	IL_0137:                                                                        //ldarg.1
	IL_0138:            Temp_20=Root::T_x106::M_x10();                              //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_013d:                                                                        //ldstr				L"\x0E27\x6E29\x432B\x4D2D\x452F\x5F31\x5133\x5835\x4C37\x5B39\x483B\x573D\x2F3F\x2C41"
	IL_0142:                                                                        //ldloc				V_2
	IL_0146:            Temp_21=a(L"\x0E27\x6E29\x432B\x4D2D\x452F\x5F31\x5133\x5835\x4C37\x5B39\x483B\x573D\x2F3F\x2C41",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014b:                                                                        //ldc.i4.s				112
	IL_014d:                                                                        //ldstr				L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2747\x2949\x394B\x234D\x354F\x3C51\x2053\x3755\x2C57\x3359\x335B\x305D"
	IL_0152:                                                                        //ldloc				V_2
	IL_0156:            Temp_22=a(L"\x6927\x4929\x582B\x472D\x462F\x5731\x7D33\x4235\x5D37\x5739\x123B\x6D3D\x283F\x2D41\x3343\x0245\x2747\x2949\x394B\x234D\x354F\x3C51\x2053\x3755\x2C57\x3359\x335B\x305D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015b:            this->M_x1(A_0,Temp_20,Temp_21,safe_cast<System::Windows::Forms::Keys>(112),Temp_22);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0160:                                                                        //ldarg.0
	IL_0161:                                                                        //ldarg.1
	IL_0162:            Temp_23=Root::T_x106::M_x4();                               //call				System::Drawing::Image^ Root::T_x106::M_x4()
	IL_0167:                                                                        //ldstr				L"\x6A27\x4529\x432B\x452D\x162F\x5F31\x5533\x4435\x5337\x4939"
	IL_016c:                                                                        //ldloc				V_2
	IL_0170:            Temp_24=a(L"\x6A27\x4529\x432B\x452D\x162F\x5F31\x5533\x4435\x5337\x4939",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0175:                                                                        //ldc.i4.s				113
	IL_0177:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x023F\x2D41\x2B43\x2D45\x2547\x2B49\x3E4B\x254D"
	IL_017c:                                                                        //ldloc				V_2
	IL_0180:            Temp_25=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x023F\x2D41\x2B43\x2D45\x2547\x2B49\x3E4B\x254D",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0185:            this->M_x1(A_0,Temp_23,Temp_24,safe_cast<System::Windows::Forms::Keys>(113),Temp_25);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_018a:                                                                        //ldarg.0
	IL_018b:                                                                        //ldarg.1
	IL_018c:            Temp_26=Root::T_x106::M_x7();                               //call				System::Drawing::Image^ Root::T_x106::M_x7()
	IL_0191:                                                                        //ldstr				L"\x0E27\x7929\x492B\x4F2D\x422F\x5131\x5C33"
	IL_0196:                                                                        //ldloc				V_2
	IL_019a:            Temp_27=a(L"\x0E27\x7929\x492B\x4F2D\x422F\x5131\x5C33",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019f:                                                                        //ldc.i4.s				114
	IL_01a1:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249"
	IL_01a6:                                                                        //ldloc				V_2
	IL_01aa:            Temp_28=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01af:            this->M_x1(A_0,Temp_26,Temp_27,safe_cast<System::Windows::Forms::Keys>(114),Temp_28);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01b4:                                                                        //ldarg.0
	IL_01b5:                                                                        //ldarg.1
	IL_01b6:            Temp_29=Root::T_x106::M_x14();                              //call				System::Drawing::Image^ Root::T_x106::M_x14()
	IL_01bb:                                                                        //ldstr				L"\x0E27\x6529\x5C2B\x5A2D\x592F\x5D31\x5A33\x4535\x1637\x1439\x123B"
	IL_01c0:                                                                        //ldloc				V_2
	IL_01c4:            Temp_30=a(L"\x0E27\x6529\x5C2B\x5A2D\x592F\x5D31\x5A33\x4535\x1637\x1439\x123B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c9:                                                                        //ldc.i4.0
	IL_01ca:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x0F3F\x3241\x3043\x2F45\x2747\x2449\x3F4B"
	IL_01cf:                                                                        //ldloc				V_2
	IL_01d3:            Temp_31=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x0F3F\x3241\x3043\x2F45\x2747\x2449\x3F4B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d8:            this->M_x1(A_0,Temp_29,Temp_30,safe_cast<System::Windows::Forms::Keys>(0),Temp_31);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01dd:                                                                        //ldarg.1
	IL_01de:            Temp_32=A_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_01e3:                                                                        //ldstr				L"\x6427\x4B29\x422B\x492D\x452F\x5331\x5333\x5335"
	IL_01e8:                                                                        //ldloc				V_2
	IL_01ec:            Temp_33=a(L"\x6427\x4B29\x422B\x492D\x452F\x5331\x5333\x5335",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f1:                                                                        //ldloc.0
	IL_01f2:            Temp_34=gcnew Root::T_x6(V_0);                              //newobj				void Root::T_x6::.ctor(Root::T_x118^)
	IL_01f7:            Temp_35=Temp_32->AddComboBox(Temp_33,safe_cast<System::Windows::Forms::ComboBox^>(Temp_34));//callvirt				Reflector::ICommandBarComboBox^ Reflector::ICommandBarItemCollection::AddComboBox(System::String^,System::Windows::Forms::ComboBox^)
	IL_01fc:                                                                        //pop
	IL_01fd:                                                                        //ldarg.1
	IL_01fe:            Temp_36=A_0->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0203:            Temp_37=Temp_36->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0208:                                                                        //pop
	IL_0209:                                                                        //ldarg.0
	IL_020a:                                                                        //ldarg.1
	IL_020b:            Temp_38=Root::T_x106::M_x2();                               //call				System::Drawing::Image^ Root::T_x106::M_x2()
	IL_0210:                                                                        //ldstr				L"\x0E27\x7329\x432B\x5B2D\x422F\x1231\x7233\x5335\x5D37\x5E39\x5E3B\x5F3D\x233F\x2941"
	IL_0215:                                                                        //ldloc				V_2
	IL_0219:            Temp_39=a(L"\x0E27\x7329\x432B\x5B2D\x422F\x1231\x7233\x5335\x5D37\x5E39\x5E3B\x5F3D\x233F\x2941",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_021e:                                                                        //ldc.i4.0
	IL_021f:                                                                        //ldstr				L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x133F\x2741\x2A43\x2245\x0E47\x2F49\x294B\x2A4D\x324F\x3351\x3753\x3D55"
	IL_0224:                                                                        //ldloc				V_2
	IL_0228:            Temp_40=a(L"\x6927\x5A29\x5C2B\x422D\x592F\x5131\x5533\x4235\x5137\x5539\x523B\x103D\x133F\x2741\x2A43\x2245\x0E47\x2F49\x294B\x2A4D\x324F\x3351\x3753\x3D55",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_022d:            this->M_x1(A_0,Temp_38,Temp_39,safe_cast<System::Windows::Forms::Keys>(0),Temp_40);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0232:                                                                        //ldc.i4				0x2
	IL_0237:            V_1=2;                                                      //stloc				V_1
	IL_023b:            /*goto IL_0016;*/goto IL_0240;                              //br				IL_0016
	IL_0240:            goto IL_0242;                                               //br.s				IL_0242
	IL_0242:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^ A_0,System::Drawing::Image^ A_1,System::String^ A_2,System::Windows::Forms::Keys A_3,System::String^ A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	Reflector::ICommandBarButton^ Temp_2 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=A_0->Items;                                          //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0011:                                                                        //ldarg.3
	IL_0012:                                                                        //ldarg.2
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x2(System::Object^,System::EventArgs^)
	IL_001a:            Temp_1=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x2);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_001f:                                                                        //ldarg.s				A_3
	IL_0021:            Temp_2=Temp_0->AddButton(A_2,A_1,Temp_1,A_3);               //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_0026:            V_0=Temp_2;                                                 //stloc.0
	IL_0027:                                                                        //ldloc.0
	IL_0028:                                                                        //ldarg.s				A_4
	IL_002a:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Value=safe_cast<System::Object^>(A_4);//callvirt				void Reflector::ICommandBarItem::set_Value(System::Object^)
	IL_002f:            return;                                                     //ret

}
inline Reflector::ICommandBarMenu^ Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	Reflector::ICommandBarMenu^ Temp_1 = nullptr;
	System::EventHandler^ Temp_2 = nullptr;
	//local variables.
	Reflector::ICommandBarMenu^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.1
	IL_000c:            Temp_0=A_0->Items;                                          //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0011:                                                                        //ldarg.2
	IL_0012:                                                                        //ldarg.3
	IL_0013:            Temp_1=Temp_0->AddMenu(A_1,A_2);                            //callvirt				Reflector::ICommandBarMenu^ Reflector::ICommandBarItemCollection::AddMenu(System::String^,System::String^)
	IL_0018:            V_0=Temp_1;                                                 //stloc.0
	IL_0019:                                                                        //ldloc.0
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x12(System::Object^,System::EventArgs^)
	IL_0021:            Temp_2=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x12);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0026:            V_0->DropDown += Temp_2;                                    //callvirt				void Reflector::ICommandBarMenu::add_DropDown(System::EventHandler^)
	IL_002b:                                                                        //ldloc.0
	IL_002c:            return V_0;                                                 //ret

}
inline System::String^ Reflector::Application::ApplicationManager::M_x1(System::Exception^ A_0)
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
	System::Diagnostics::StackFrame^ Temp_8 = nullptr;
	System::Reflection::MethodBase^ Temp_9 = nullptr;
	System::Type^ Temp_10 = nullptr;
	System::Reflection::Assembly^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Diagnostics::StackTrace^ Temp_13 = nullptr;
	System::Int32 Temp_14 = 0;
	System::Collections::Hashtable^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Object^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Reflection::AssemblyName^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Collections::Hashtable^ Temp_23 = nullptr;
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
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Type^ Temp_45 = nullptr;
	array<System::Object^>^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	System::Boolean Temp_49 = false;
	System::Reflection::AssemblyName^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::String^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	System::Int32 Temp_67 = 0;
	System::String^ Temp_68 = nullptr;
	System::Collections::Hashtable^ Temp_69 = nullptr;
	//local variables.
	System::Diagnostics::StackTrace^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Reflection::Assembly^ V_2 = nullptr;
	array<System::Object^>^ V_3 = nullptr;
	System::Reflection::AssemblyCompanyAttribute^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Object^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_8=10;                                                     //stloc				V_8
	IL_0009:                                                                        //ldc.i4				0x13
	IL_000e:            V_7=19;                                                     //stloc				V_7
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_00ae;                                               //br				IL_00ae
	IL_0019:                                                                        //ldloc				V_7
	IL_001d:            switch(V_7){case 0:goto IL_020f;case 1:goto IL_0697;case 2:goto IL_0555;case 3:goto IL_0231;case 4:goto IL_064a;case 5:goto IL_04d0;case 6:goto IL_00ea;case 7:goto IL_01b8;case 8:goto IL_0187;case 9:goto IL_00c8;case 10:goto IL_027c;case 11:goto IL_05f7;case 12:goto IL_0166;case 13:goto IL_010e;case 14:goto IL_0637;case 15:goto IL_01ec;case 16:goto IL_0759;case 17:goto IL_0746;case 18:goto IL_0259;case 19:goto IL_0014;case 20:goto IL_066d;case 21:goto IL_0710;case 22:goto IL_0624;case 23:goto IL_0578;case 24:goto IL_0246;case 25:goto IL_0522;case 26:goto IL_04ec;case 27:goto IL_05bb;case 28:goto IL_0144;case 29:goto IL_01d9;case 30:goto IL_050f;case 31:goto IL_0545;case 32:goto IL_05d2;case 33:goto IL_07c8;case 34:goto IL_0121;};//switch				(IL_020f,IL_0697,IL_0555,IL_0231,IL_064a,IL_04d0,IL_00ea,IL_01b8,IL_0187,IL_00c8,IL_027c,IL_05f7,IL_0166,IL_010e,IL_0637,IL_01ec,IL_0759,IL_0746,IL_0259,IL_0014,IL_066d,IL_0710,IL_0624,IL_0578,IL_0246,IL_0522,IL_04ec,IL_05bb,IL_0144,IL_01d9,IL_050f,IL_0545,IL_05d2,IL_07c8,IL_0121)
	IL_00ae:                                                                        //volatile.
	IL_00b0:            Temp_69=Root::T_x188::F_x11;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x11
	IL_00b5:            if(Temp_69!=nullptr)goto IL_0728;                           //brtrue				IL_0728
	IL_00ba:                                                                        //ldc.i4				0x9
	IL_00bf:            V_7=9;                                                      //stloc				V_7
	IL_00c3:            /*goto IL_0019;*/goto IL_00c8;                              //br				IL_0019
	IL_00c8:            goto IL_0281;                                               //br				IL_0281
	IL_00cd:                                                                        //ldstr				L"\x4227\x4B29\x412B\x472D\x552F\x7231\x5933\x4335\x4C37\x5B39\x523B\x4A3D\x243F\x2741\x3743\x2F45\x2F47\x2449\x624B\x2D4D\x3F4F\x7C51\x2153\x3D55"
	IL_00d2:                                                                        //ldloc				V_8
	IL_00d6:            Temp_54=a(L"\x4227\x4B29\x412B\x472D\x552F\x7231\x5933\x4335\x4C37\x5B39\x523B\x4A3D\x243F\x2741\x3743\x2F45\x2F47\x2449\x624B\x2D4D\x3F4F\x7C51\x2153\x3D55",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00db:            return Temp_54;                                             //ret
	IL_00dc:                                                                        //ldc.i4				0x6
	IL_00e1:            V_7=6;                                                      //stloc				V_7
	IL_00e5:            /*goto IL_0019;*/goto IL_00ea;                              //br				IL_0019
	IL_00ea:                                                                        //volatile.
	IL_00ec:            Temp_15=Root::T_x188::F_x11;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x11
	IL_00f1:            Temp_17=V_6;                                                //ldloc.s				V_6
	IL_00f3:            Temp_16=Temp_15[Temp_17];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_00f8:                                                                        //dup
	IL_00f9:            V_6=Temp_16;                                                //stloc.s				V_6
	IL_00fb:            if(V_6==nullptr)goto IL_07dc;                               //brfalse				IL_07dc
	IL_0100:                                                                        //ldc.i4				0xd
	IL_0105:            V_7=13;                                                     //stloc				V_7
	IL_0109:            /*goto IL_0019;*/goto IL_010e;                              //br				IL_0019
	IL_010e:            goto IL_074b;                                               //br				IL_074b
	IL_0113:                                                                        //ldc.i4				0x22
	IL_0118:            V_7=34;                                                     //stloc				V_7
	IL_011c:            /*goto IL_0019;*/goto IL_0121;                              //br				IL_0019
	IL_0121:                                                                        //ldloc.s				V_5
	IL_0123:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31"
	IL_0128:                                                                        //ldloc				V_8
	IL_012c:            Temp_68=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31",V_8);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0131:            if(V_5==Temp_68)goto IL_06fe;                               //beq				IL_06fe
	IL_0136:                                                                        //ldc.i4				0x1c
	IL_013b:            V_7=28;                                                     //stloc				V_7
	IL_013f:            /*goto IL_0019;*/goto IL_0144;                              //br				IL_0019
	IL_0144:            goto IL_01de;                                               //br				IL_01de
	IL_0149:                                                                        //ldstr				L"\x5B27\x4F29\x4D2B\x402D\x1E2F\x5A31\x5133\x5235\x5D37\x4839\x513B\x5F3D\x2E3F\x0241\x2D43\x2B45\x2947\x2D49\x254B\x204D\x354F\x2651\x7A53\x3555\x3757\x7459\x265B\x3F5D"
	IL_014e:                                                                        //ldloc				V_8
	IL_0152:            Temp_58=a(L"\x5B27\x4F29\x4D2B\x402D\x1E2F\x5A31\x5133\x5235\x5D37\x4839\x513B\x5F3D\x2E3F\x0241\x2D43\x2B45\x2947\x2D49\x254B\x204D\x354F\x2651\x7A53\x3555\x3757\x7459\x265B\x3F5D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0157:            return Temp_58;                                             //ret
	IL_0158:                                                                        //ldc.i4				0xc
	IL_015d:            V_7=12;                                                     //stloc				V_7
	IL_0161:            /*goto IL_0019;*/goto IL_0166;                              //br				IL_0019
	IL_0166:                                                                        //ldloc.2
	IL_0167:            Temp_50=V_2->GetName();                                     //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_016c:            Temp_51=Temp_50->Name;                                      //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_0171:                                                                        //dup
	IL_0172:            V_5=Temp_51;                                                //stloc.s				V_5
	IL_0174:            if(V_5==nullptr)goto IL_059b;                               //brfalse				IL_059b
	IL_0179:                                                                        //ldc.i4				0x8
	IL_017e:            V_7=8;                                                      //stloc				V_7
	IL_0182:            /*goto IL_0019;*/goto IL_0187;                              //br				IL_0019
	IL_0187:            goto IL_04d5;                                               //br				IL_04d5
	IL_018c:                                                                        //ldstr				L"\x4227\x4529\x422B\x4F2D\x442F\x5A31\x5533\x5835\x1637\x5E39\x593B\x563D\x213F\x2E41\x2843\x2345\x3D47\x3249\x0C4B\x294D\x3D4F\x3351\x3D53\x3A55\x7657\x3959\x335B\x335D"
	IL_0191:                                                                        //ldloc				V_8
	IL_0195:            Temp_53=a(L"\x4227\x4529\x422B\x4F2D\x442F\x5A31\x5533\x5835\x1637\x5E39\x593B\x563D\x213F\x2E41\x2843\x2345\x3D47\x3249\x0C4B\x294D\x3D4F\x3351\x3D53\x3A55\x7657\x3959\x335B\x335D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019a:            return Temp_53;                                             //ret
	IL_019b:                                                                        //ldstr				L"\x4527\x4229\x6C2B\x4B2D\x5C2F\x5B31\x4033\x5335\x5C37\x5F39\x4A3B\x103D\x233F\x2D41\x2943"
	IL_01a0:                                                                        //ldloc				V_8
	IL_01a4:            Temp_60=a(L"\x4527\x4229\x6C2B\x4B2D\x5C2F\x5B31\x4033\x5335\x5C37\x5F39\x4A3B\x103D\x233F\x2D41\x2943",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a9:            return Temp_60;                                             //ret
	IL_01aa:                                                                        //ldc.i4				0x7
	IL_01af:            V_7=7;                                                      //stloc				V_7
	IL_01b3:            /*goto IL_0019;*/goto IL_01b8;                              //br				IL_0019
	IL_01b8:                                                                        //ldloc.2
	IL_01b9:            Temp_20=V_2->GetName();                                     //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_01be:            Temp_21=Temp_20->Name;                                      //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_01c3:                                                                        //dup
	IL_01c4:            V_6=safe_cast<System::Object^>(Temp_21);                    //stloc.s				V_6
	IL_01c6:            if(Temp_21==nullptr)goto IL_07dc;                           //brfalse				IL_07dc
	IL_01cb:                                                                        //ldc.i4				0x1d
	IL_01d0:            V_7=29;                                                     //stloc				V_7
	IL_01d4:            /*goto IL_0019;*/goto IL_01d9;                              //br				IL_0019
	IL_01d9:            goto IL_00dc;                                               //br				IL_00dc
	IL_01de:                                                                        //ldc.i4				0xf
	IL_01e3:            V_7=15;                                                     //stloc				V_7
	IL_01e7:            /*goto IL_0019;*/goto IL_01ec;                              //br				IL_0019
	IL_01ec:                                                                        //ldloc.s				V_5
	IL_01ee:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x7235\x4A37\x5B39\x4B3B\x573D\x2E3F\x2541"
	IL_01f3:                                                                        //ldloc				V_8
	IL_01f7:            Temp_52=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x7235\x4A37\x5B39\x4B3B\x573D\x2E3F\x2541",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01fc:            if(V_5==Temp_52)goto IL_06fe;                               //beq				IL_06fe
	IL_0201:                                                                        //ldc.i4				0x0
	IL_0206:            V_7=0;                                                      //stloc				V_7
	IL_020a:            /*goto IL_0019;*/goto IL_020f;                              //br				IL_0019
	IL_020f:            goto IL_0514;                                               //br				IL_0514
	IL_0214:                                                                        //ldstr				L"\x4327\x4F29\x5A2B\x472D\x5E2F\x5631\x7433\x5235\x5D37\x5439\x483B\x5B3D\x373F\x2D41\x3643\x2A45\x2C47\x6449\x2F4B\x214D\x3D4F"
	IL_0219:                                                                        //ldloc				V_8
	IL_021d:            Temp_59=a(L"\x4327\x4F29\x5A2B\x472D\x5E2F\x5631\x7433\x5235\x5D37\x5439\x483B\x5B3D\x373F\x2D41\x3643\x2A45\x2C47\x6449\x2F4B\x214D\x3D4F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0222:            return Temp_59;                                             //ret
	IL_0223:                                                                        //ldc.i4				0x3
	IL_0228:            V_7=3;                                                      //stloc				V_7
	IL_022c:            /*goto IL_0019;*/goto IL_0231;                              //br				IL_0019
	IL_0231:                                                                        //ldloc.1
	IL_0232:                                                                        //ldc.i4.0
	IL_0233:            if(V_1>=0)goto IL_0672;                                     //bge				IL_0672
	IL_0238:                                                                        //ldc.i4				0x18
	IL_023d:            V_7=24;                                                     //stloc				V_7
	IL_0241:            /*goto IL_0019;*/goto IL_0246;                              //br				IL_0019
	IL_0246:            goto IL_07dc;                                               //br				IL_07dc
	IL_024b:                                                                        //ldc.i4				0x12
	IL_0250:            V_7=18;                                                     //stloc				V_7
	IL_0254:            /*goto IL_0019;*/goto IL_0259;                              //br				IL_0019
	IL_0259:                                                                        //ldloc.s				V_5
	IL_025b:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7D3B\x4E3D\x303F\x2E41\x2D43\x2545\x2947\x3E49\x254B\x214D\x3E4F"
	IL_0260:                                                                        //ldloc				V_8
	IL_0264:            Temp_61=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7D3B\x4E3D\x303F\x2E41\x2D43\x2545\x2947\x3E49\x254B\x214D\x3E4F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0269:            if(V_5==Temp_61)goto IL_06fe;                               //beq				IL_06fe
	IL_026e:                                                                        //ldc.i4				0xa
	IL_0273:            V_7=10;                                                     //stloc				V_7
	IL_0277:            /*goto IL_0019;*/goto IL_027c;                              //br				IL_0019
	IL_027c:            goto IL_059b;                                               //br				IL_059b
	IL_0281:                                                                        //ldc.i4.s				42
	IL_0283:                                                                        //ldc.r4				0.5
	IL_0288:            Temp_23=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(42),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_028d:                                                                        //dup
	IL_028e:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x243F\x2741\x0943\x2345\x3C47\x3849\x254B\x2D4D\x234F"
	IL_0293:                                                                        //ldloc				V_8
	IL_0297:            Temp_24=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x243F\x2741\x0943\x2345\x3C47\x3849\x254B\x2D4D\x234F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_029c:                                                                        //ldc.i4.0
	IL_029d:                                                                        //box				System::Int32
	IL_02a2:            Temp_23->Add(safe_cast<System::Object^>(Temp_24),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02a7:                                                                        //dup
	IL_02a8:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x2D3F\x1441\x2D43\x2345\x3F47\x2F49\x3E4B"
	IL_02ad:                                                                        //ldloc				V_8
	IL_02b1:            Temp_25=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x2D3F\x1441\x2D43\x2345\x3F47\x2F49\x3E4B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b6:                                                                        //ldc.i4.1
	IL_02b7:                                                                        //box				System::Int32
	IL_02bc:            Temp_23->Add(safe_cast<System::Object^>(Temp_25),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02c1:                                                                        //dup
	IL_02c2:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x363F\x2741\x3643\x2745\x2F47\x2F49\x624B\x004D\x134F\x3D51\x2253\x3355\x2A57"
	IL_02c7:                                                                        //ldloc				V_8
	IL_02cb:            Temp_26=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7F3B\x513D\x363F\x2741\x3643\x2745\x2F47\x2F49\x624B\x004D\x134F\x3D51\x2253\x3355\x2A57",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d0:                                                                        //ldc.i4.2
	IL_02d1:                                                                        //box				System::Int32
	IL_02d6:            Temp_23->Add(safe_cast<System::Object^>(Temp_26),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02db:                                                                        //dup
	IL_02dc:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x5B3D\x333F\x2B41\x2343\x2845\x1E47\x2349\x294B\x394D\x354F\x2051"
	IL_02e1:                                                                        //ldloc				V_8
	IL_02e5:            Temp_27=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x5B3D\x333F\x2B41\x2343\x2845\x1E47\x2349\x294B\x394D\x354F\x2051",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ea:                                                                        //ldc.i4.3
	IL_02eb:                                                                        //box				System::Int32
	IL_02f0:            Temp_23->Add(safe_cast<System::Object^>(Temp_27),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_02f5:                                                                        //dup
	IL_02f6:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x4C3D\x213F\x3241\x2C43"
	IL_02fb:                                                                        //ldloc				V_8
	IL_02ff:            Temp_28=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x4C3D\x213F\x3241\x2C43",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0304:                                                                        //ldc.i4.4
	IL_0305:                                                                        //box				System::Int32
	IL_030a:            Temp_23->Add(safe_cast<System::Object^>(Temp_28),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_030f:                                                                        //dup
	IL_0310:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x4C3D\x213F\x3241\x2C43\x6845\x0C47\x3849\x2D4B\x394D\x394F\x3C51\x3353"
	IL_0315:                                                                        //ldloc				V_8
	IL_0319:            Temp_29=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x4C3D\x213F\x3241\x2C43\x6845\x0C47\x3849\x2D4B\x394D\x394F\x3C51\x3353",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_031e:                                                                        //ldc.i4.5
	IL_031f:                                                                        //box				System::Int32
	IL_0324:            Temp_23->Add(safe_cast<System::Object^>(Temp_29),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0329:                                                                        //dup
	IL_032a:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x513D\x243F\x2641\x2D43\x2345\x3B47"
	IL_032f:                                                                        //ldloc				V_8
	IL_0333:            Temp_30=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7B3B\x513D\x243F\x2641\x2D43\x2345\x3B47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0338:                                                                        //ldc.i4.6
	IL_0339:                                                                        //box				System::Int32
	IL_033e:            Temp_23->Add(safe_cast<System::Object^>(Temp_30),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0343:                                                                        //dup
	IL_0344:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7A3B\x4C3D\x213F\x2F41\x2143\x3145\x2747\x3849\x274B"
	IL_0349:                                                                        //ldloc				V_8
	IL_034d:            Temp_31=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7A3B\x4C3D\x213F\x2F41\x2143\x3145\x2747\x3849\x274B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0352:                                                                        //ldc.i4.7
	IL_0353:                                                                        //box				System::Int32
	IL_0358:            Temp_23->Add(safe_cast<System::Object^>(Temp_31),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_035d:                                                                        //dup
	IL_035e:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x743B\x5B3D\x2C3F\x3241\x2143\x3445\x3B47"
	IL_0363:                                                                        //ldloc				V_8
	IL_0367:            Temp_32=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x743B\x5B3D\x2C3F\x3241\x2143\x3445\x3B47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_036c:                                                                        //ldc.i4.8
	IL_036d:                                                                        //box				System::Int32
	IL_0372:            Temp_23->Add(safe_cast<System::Object^>(Temp_32),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0377:                                                                        //dup
	IL_0378:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x6E3B\x4B3D\x2C3F\x2741\x3743"
	IL_037d:                                                                        //ldloc				V_8
	IL_0381:            Temp_33=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x6E3B\x4B3D\x2C3F\x2741\x3743",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0386:                                                                        //ldc.i4.s				9
	IL_0388:                                                                        //box				System::Int32
	IL_038d:            Temp_23->Add(safe_cast<System::Object^>(Temp_33),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0392:                                                                        //dup
	IL_0393:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x683B\x4C3D\x253F\x2741\x0943\x2745\x3847"
	IL_0398:                                                                        //ldloc				V_8
	IL_039c:            Temp_34=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x683B\x4C3D\x253F\x2741\x0943\x2745\x3847",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a1:                                                                        //ldc.i4.s				10
	IL_03a3:                                                                        //box				System::Int32
	IL_03a8:            Temp_23->Add(safe_cast<System::Object^>(Temp_34),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03ad:                                                                        //dup
	IL_03ae:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x492F"
	IL_03b3:                                                                        //ldloc				V_8
	IL_03b7:            Temp_35=a(L"\x7A27\x4F29\x4A2B\x422D\x492F",V_8);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03bc:                                                                        //ldc.i4.s				11
	IL_03be:                                                                        //box				System::Int32
	IL_03c3:            Temp_23->Add(safe_cast<System::Object^>(Temp_35),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03c8:                                                                        //dup
	IL_03c9:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x713B\x5D3D\x303F\x3241\x0843\x2745\x2647\x2D49\x394B\x2F4D\x374F\x3751"
	IL_03ce:                                                                        //ldloc				V_8
	IL_03d2:            Temp_36=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x713B\x5D3D\x303F\x3241\x0843\x2745\x2647\x2D49\x394B\x2F4D\x374F\x3751",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d7:                                                                        //ldc.i4.s				12
	IL_03d9:                                                                        //box				System::Int32
	IL_03de:            Temp_23->Add(safe_cast<System::Object^>(Temp_36),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03e3:                                                                        //dup
	IL_03e4:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x713B\x7D3D\x303F\x3241\x0843\x2745\x2647\x2D49\x394B\x2F4D\x374F\x3751"
	IL_03e9:                                                                        //ldloc				V_8
	IL_03ed:            Temp_37=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x713B\x7D3D\x303F\x3241\x0843\x2745\x2647\x2D49\x394B\x2F4D\x374F\x3751",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03f2:                                                                        //ldc.i4.s				13
	IL_03f4:                                                                        //box				System::Int32
	IL_03f9:            Temp_23->Add(safe_cast<System::Object^>(Temp_37),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_03fe:                                                                        //dup
	IL_03ff:                                                                        //ldstr				L"\x6E27\x4329\x402B\x4B2D\x772F\x5731\x5A33\x5335\x4A37\x5B39\x483B\x513D\x323F"
	IL_0404:                                                                        //ldloc				V_8
	IL_0408:            Temp_38=a(L"\x6E27\x4329\x402B\x4B2D\x772F\x5731\x5A33\x5335\x4A37\x5B39\x483B\x513D\x323F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_040d:                                                                        //ldc.i4.s				14
	IL_040f:                                                                        //box				System::Int32
	IL_0414:            Temp_23->Add(safe_cast<System::Object^>(Temp_38),safe_cast<System::Object^>(14));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0419:                                                                        //dup
	IL_041a:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x5B3D\x2C3F\x3241\x2C43\x2F45\x0447\x2B49\x224B\x294D\x254F\x3351\x3353\x3355"
	IL_041f:                                                                        //ldloc				V_8
	IL_0423:            Temp_39=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x5B3D\x2C3F\x3241\x2C43\x2F45\x0447\x2B49\x224B\x294D\x254F\x3351\x3353\x3355",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0428:                                                                        //ldc.i4.s				15
	IL_042a:                                                                        //box				System::Int32
	IL_042f:            Temp_23->Add(safe_cast<System::Object^>(Temp_39),safe_cast<System::Object^>(15));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0434:                                                                        //dup
	IL_0435:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x6F3B\x6F3D\x0C3F\x7041\x7443\x7645\x7D47\x0849\x3E4B\x214D\x274F\x2151\x3153\x2455"
	IL_043a:                                                                        //ldloc				V_8
	IL_043e:            Temp_40=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x6F3B\x6F3D\x0C3F\x7041\x7443\x7645\x7D47\x0849\x3E4B\x214D\x274F\x2151\x3153\x2455",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0443:                                                                        //ldc.i4.s				16
	IL_0445:                                                                        //box				System::Int32
	IL_044a:            Temp_23->Add(safe_cast<System::Object^>(Temp_40),safe_cast<System::Object^>(16));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_044f:                                                                        //dup
	IL_0450:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7A3B\x573D\x2C3F\x2741\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859"
	IL_0455:                                                                        //ldloc				V_8
	IL_0459:            Temp_41=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7A3B\x573D\x2C3F\x2741\x0043\x2F45\x3B47\x2B49\x3F4B\x3D4D\x354F\x3F51\x3653\x3A55\x3D57\x2859",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_045e:                                                                        //ldc.i4.s				17
	IL_0460:                                                                        //box				System::Int32
	IL_0465:            Temp_23->Add(safe_cast<System::Object^>(Temp_41),safe_cast<System::Object^>(17));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_046a:                                                                        //dup
	IL_046b:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x573D\x263F\x2441"
	IL_0470:                                                                        //ldloc				V_8
	IL_0474:            Temp_42=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x783B\x573D\x263F\x2441",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0479:                                                                        //ldc.i4.s				18
	IL_047b:                                                                        //box				System::Int32
	IL_0480:            Temp_23->Add(safe_cast<System::Object^>(Temp_42),safe_cast<System::Object^>(18));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0485:                                                                        //dup
	IL_0486:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x733B\x4E3D\x253F\x2C41\x1643\x3345\x2647\x2449\x254B\x204D\x374F\x1351\x2753\x2555\x3D57\x3759\x3E5B\x325D\x195F"
	IL_048b:                                                                        //ldloc				V_8
	IL_048f:            Temp_43=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x733B\x4E3D\x253F\x2C41\x1643\x3345\x2647\x2449\x254B\x204D\x374F\x1351\x2753\x2555\x3D57\x3759\x3E5B\x325D\x195F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0494:                                                                        //ldc.i4.s				19
	IL_0496:                                                                        //box				System::Int32
	IL_049b:            Temp_23->Add(safe_cast<System::Object^>(Temp_43),safe_cast<System::Object^>(19));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04a0:                                                                        //dup
	IL_04a1:                                                                        //ldstr				L"\x7A27\x4F29\x412B\x612D\x522F\x5831\x5133\x5535\x4C37\x4939\x123B\x7D3D\x283F\x3041\x2B43\x2B45\x2D47\x6449\x1E4B\x2B4D\x364F\x3E51\x3153\x3555\x2C57\x3559\x2E5B"
	IL_04a6:                                                                        //ldloc				V_8
	IL_04aa:            Temp_44=a(L"\x7A27\x4F29\x412B\x612D\x522F\x5831\x5133\x5535\x4C37\x4939\x123B\x7D3D\x283F\x3041\x2B43\x2B45\x2D47\x6449\x1E4B\x2B4D\x364F\x3E51\x3153\x3555\x2C57\x3559\x2E5B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04af:                                                                        //ldc.i4.s				20
	IL_04b1:                                                                        //box				System::Int32
	IL_04b6:            Temp_23->Add(safe_cast<System::Object^>(Temp_44),safe_cast<System::Object^>(20));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_04bb:                                                                        //volatile.
	IL_04bd:            Root::T_x188::F_x11=Temp_23;                                //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x11
	IL_04c2:                                                                        //ldc.i4				0x5
	IL_04c7:            V_7=5;                                                      //stloc				V_7
	IL_04cb:            /*goto IL_0019;*/goto IL_04d0;                              //br				IL_0019
	IL_04d0:            goto IL_0728;                                               //br				IL_0728
	IL_04d5:                                                                        //ldloc.s				V_5
	IL_04d7:            Temp_22=System::String::IsInterned(V_5);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_04dc:            V_5=Temp_22;                                                //stloc.s				V_5
	IL_04de:                                                                        //ldc.i4				0x1a
	IL_04e3:            V_7=26;                                                     //stloc				V_7
	IL_04e7:            /*goto IL_0019;*/goto IL_04ec;                              //br				IL_0019
	IL_04ec:                                                                        //ldloc.s				V_5
	IL_04ee:                                                                        //ldstr				L"\x4527\x5929\x4F2B\x412D\x422F\x5E31\x5D33\x5435"
	IL_04f3:                                                                        //ldloc				V_8
	IL_04f7:            Temp_66=a(L"\x4527\x5929\x4F2B\x412D\x422F\x5E31\x5D33\x5435",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04fc:            if(V_5==Temp_66)goto IL_06fe;                               //beq				IL_06fe
	IL_0501:                                                                        //ldc.i4				0x1e
	IL_0506:            V_7=30;                                                     //stloc				V_7
	IL_050a:            /*goto IL_0019;*/goto IL_050f;                              //br				IL_0019
	IL_050f:            goto IL_0113;                                               //br				IL_0113
	IL_0514:                                                                        //ldc.i4				0x19
	IL_0519:            V_7=25;                                                     //stloc				V_7
	IL_051d:            /*goto IL_0019;*/goto IL_0522;                              //br				IL_0019
	IL_0522:                                                                        //ldloc.s				V_5
	IL_0524:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6135\x5137\x5439\x583B\x513D\x373F\x3141\x6A43\x0045\x2747\x3849\x214B\x3D4D"
	IL_0529:                                                                        //ldloc				V_8
	IL_052d:            Temp_65=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6135\x5137\x5439\x583B\x513D\x373F\x3141\x6A43\x0045\x2747\x3849\x214B\x3D4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0532:            if(V_5==Temp_65)goto IL_06fe;                               //beq				IL_06fe
	IL_0537:                                                                        //ldc.i4				0x1f
	IL_053c:            V_7=31;                                                     //stloc				V_7
	IL_0540:            /*goto IL_0019;*/goto IL_0545;                              //br				IL_0019
	IL_0545:            goto IL_0547;                                               //br.s				IL_0547
	IL_0547:                                                                        //ldc.i4				0x2
	IL_054c:            V_7=2;                                                      //stloc				V_7
	IL_0550:            /*goto IL_0019;*/goto IL_0555;                              //br				IL_0019
	IL_0555:                                                                        //ldloc.s				V_5
	IL_0557:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6E35\x5537\x5639"
	IL_055c:                                                                        //ldloc				V_8
	IL_0560:            Temp_7=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6E35\x5537\x5639",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0565:            if(V_5==Temp_7)goto IL_06fe;                                //beq				IL_06fe
	IL_056a:                                                                        //ldc.i4				0x17
	IL_056f:            V_7=23;                                                     //stloc				V_7
	IL_0573:            /*goto IL_0019;*/goto IL_0578;                              //br				IL_0019
	IL_0578:            goto IL_063c;                                               //br				IL_063c
	IL_057d:                                                                        //ldstr				L"\x5A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x5C39\x593B\x5B3D\x243F\x2041\x2543\x2545\x2347\x0A49\x284B\x2B4D\x3E4F\x3B51\x2753\x3455\x3957\x2F59\x395B\x2C5D\x4E5F\x0661\x0163"
	IL_0582:                                                                        //ldloc				V_8
	IL_0586:            Temp_57=a(L"\x5A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x5C39\x593B\x5B3D\x243F\x2041\x2543\x2545\x2347\x0A49\x284B\x2B4D\x3E4F\x3B51\x2753\x3455\x3957\x2F59\x395B\x2C5D\x4E5F\x0661\x0163",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_058b:            return Temp_57;                                             //ret
	IL_058c:                                                                        //ldstr				L"\x4227\x4B29\x5F2B\x412D\x5E2F\x7231\x5E33\x5735\x4B37\x5539\x523B\x5C3D\x2F3F\x2141\x2F43\x6845\x2647\x2F49\x384B"
	IL_0591:                                                                        //ldloc				V_8
	IL_0595:            Temp_55=a(L"\x4227\x4B29\x5F2B\x412D\x5E2F\x7231\x5E33\x5735\x4B37\x5539\x523B\x5C3D\x2F3F\x2141\x2F43\x6845\x2647\x2F49\x384B",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_059a:            return Temp_55;                                             //ret
	IL_059b:                                                                        //ldloc.2
	IL_059c:                                                                        //ldtoken				System::Reflection::AssemblyCompanyAttribute
	IL_05a1:            Temp_45=System::Reflection::AssemblyCompanyAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_05a6:                                                                        //ldc.i4.0
	IL_05a7:            Temp_46=V_2->GetCustomAttributes(Temp_45,false);            //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_05ac:            V_3=Temp_46;                                                //stloc.3
	IL_05ad:                                                                        //ldc.i4				0x1b
	IL_05b2:            V_7=27;                                                     //stloc				V_7
	IL_05b6:            /*goto IL_0019;*/goto IL_05bb;                              //br				IL_0019
	IL_05bb:                                                                        //ldloc.3
	IL_05bc:            Temp_67=V_3->Length;                                        //ldlen
	IL_05bd:                                                                        //conv.i4
	IL_05be:                                                                        //ldc.i4.1
	IL_05bf:            if(Temp_67!=1)goto IL_01aa;                                 //bne.un				IL_01aa
	IL_05c4:                                                                        //ldc.i4				0x20
	IL_05c9:            V_7=32;                                                     //stloc				V_7
	IL_05cd:            /*goto IL_0019;*/goto IL_05d2;                              //br				IL_0019
	IL_05d2:            goto IL_05d4;                                               //br.s				IL_05d4
	IL_05d4:                                                                        //ldc.i4.1
	IL_05d5:                                                                        //dup
	IL_05d6:                                                                        //dup
	IL_05d7:                                                                        //ldc.i4.3
	IL_05d8:                                                                        //add
	IL_05d9:                                                                        //bgt				IL_05d5
	IL_05de:                                                                        //pop
	IL_05df:                                                                        //ldloc.3
	IL_05e0:                                                                        //ldc.i4.0
	IL_05e1:                                                                        //ldelem.ref
	IL_05e2:                                                                        //castclass				System::Reflection::AssemblyCompanyAttribute
	IL_05e7:            V_4=safe_cast<System::Reflection::AssemblyCompanyAttribute^>(V_3[0]);//stloc.s				V_4
	IL_05e9:                                                                        //ldc.i4				0xb
	IL_05ee:            V_7=11;                                                     //stloc				V_7
	IL_05f2:            /*goto IL_0019;*/goto IL_05f7;                              //br				IL_0019
	IL_05f7:                                                                        //ldloc.s				V_4
	IL_05f9:            Temp_47=V_4->Company;                                       //callvirt				System::String^ System::Reflection::AssemblyCompanyAttribute::get_Company()
	IL_05fe:                                                                        //ldstr				L"\x4527\x4B29\x452B\x422D\x442F\x5D31\x0E33"
	IL_0603:                                                                        //ldloc				V_8
	IL_0607:            Temp_48=a(L"\x4527\x4B29\x452B\x422D\x442F\x5D31\x0E33",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_060c:            Temp_49=Temp_47->StartsWith(Temp_48);                       //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0611:            if(!Temp_49)goto IL_01aa;                                   //brfalse				IL_01aa
	IL_0616:                                                                        //ldc.i4				0x16
	IL_061b:            V_7=22;                                                     //stloc				V_7
	IL_061f:            /*goto IL_0019;*/goto IL_0624;                              //br				IL_0019
	IL_0624:            goto IL_0715;                                               //br				IL_0715
	IL_0629:                                                                        //ldc.i4				0xe
	IL_062e:            V_7=14;                                                     //stloc				V_7
	IL_0632:            /*goto IL_0019;*/goto IL_0637;                              //br				IL_0019
	IL_0637:            goto IL_07dc;                                               //br				IL_07dc
	IL_063c:                                                                        //ldc.i4				0x4
	IL_0641:            V_7=4;                                                      //stloc				V_7
	IL_0645:            /*goto IL_0019;*/goto IL_064a;                              //br				IL_0019
	IL_064a:                                                                        //ldloc.s				V_5
	IL_064c:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37"
	IL_0651:                                                                        //ldloc				V_8
	IL_0655:            Temp_12=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_065a:            if(V_5==Temp_12)goto IL_06fe;                               //beq				IL_06fe
	IL_065f:                                                                        //ldc.i4				0x14
	IL_0664:            V_7=20;                                                     //stloc				V_7
	IL_0668:            /*goto IL_0019;*/goto IL_066d;                              //br				IL_0019
	IL_066d:            goto IL_024b;                                               //br				IL_024b
	IL_0672:                                                                        //ldloc.0
	IL_0673:                                                                        //ldloc.1
	IL_0674:            Temp_8=V_0->GetFrame(V_1);                                  //callvirt				System::Diagnostics::StackFrame^ System::Diagnostics::StackTrace::GetFrame(System::Int32)
	IL_0679:            Temp_9=Temp_8->GetMethod();                                 //callvirt				System::Reflection::MethodBase^ System::Diagnostics::StackFrame::GetMethod()
	IL_067e:            Temp_10=Temp_9->DeclaringType;                              //callvirt				System::Type^ System::Reflection::MemberInfo::get_DeclaringType()
	IL_0683:            Temp_11=Temp_10->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0688:            V_2=Temp_11;                                                //stloc.2
	IL_0689:                                                                        //ldc.i4				0x1
	IL_068e:            V_7=1;                                                      //stloc				V_7
	IL_0692:            /*goto IL_0019;*/goto IL_0697;                              //br				IL_0019
	IL_0697:                                                                        //ldstr				L"\x4527\x5929\x4F2B\x412D\x422F\x5E31\x5D33\x5435"
	IL_069c:                                                                        //ldloc				V_8
	IL_06a0:            Temp_0=a(L"\x4527\x5929\x4F2B\x412D\x422F\x5E31\x5D33\x5435",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06a5:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31"
	IL_06aa:                                                                        //ldloc				V_8
	IL_06ae:            Temp_1=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31",V_8);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06b3:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x7235\x4A37\x5B39\x4B3B\x573D\x2E3F\x2541"
	IL_06b8:                                                                        //ldloc				V_8
	IL_06bc:            Temp_2=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x7235\x4A37\x5B39\x4B3B\x573D\x2E3F\x2541",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06c1:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6135\x5137\x5439\x583B\x513D\x373F\x3141\x6A43\x0045\x2747\x3849\x214B\x3D4D"
	IL_06c6:                                                                        //ldloc				V_8
	IL_06ca:            Temp_3=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6135\x5137\x5439\x583B\x513D\x373F\x3141\x6A43\x0045\x2747\x3849\x214B\x3D4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06cf:                                                                        //ldstr				L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6E35\x5537\x5639"
	IL_06d4:                                                                        //ldloc				V_8
	IL_06d8:            Temp_4=a(L"\x7B27\x5329\x5F2B\x5A2D\x552F\x5F31\x1A33\x6E35\x5537\x5639",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06dd:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37"
	IL_06e2:                                                                        //ldloc				V_8
	IL_06e6:            Temp_5=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06eb:                                                                        //ldstr				L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7D3B\x4E3D\x303F\x2E41\x2D43\x2545\x2947\x3E49\x254B\x214D\x3E4F"
	IL_06f0:                                                                        //ldloc				V_8
	IL_06f4:            Temp_6=a(L"\x7A27\x4F29\x4A2B\x422D\x552F\x5131\x4033\x5935\x4A37\x1439\x7D3B\x4E3D\x303F\x2E41\x2D43\x2545\x2947\x3E49\x254B\x214D\x3E4F",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06f9:            goto IL_0158;                                               //leave				IL_0158
	IL_06fe:                                                                        //ldloc.1
	IL_06ff:                                                                        //ldc.i4.1
	IL_0700:                                                                        //sub
	IL_0701:            V_1=(V_1 - 1);                                              //stloc.1
	IL_0702:                                                                        //ldc.i4				0x15
	IL_0707:            V_7=21;                                                     //stloc				V_7
	IL_070b:            /*goto IL_0019;*/goto IL_0710;                              //br				IL_0019
	IL_0710:            goto IL_0223;                                               //br				IL_0223
	IL_0715:                                                                        //ldloc.s				V_4
	IL_0717:            Temp_62=V_4->Company;                                       //callvirt				System::String^ System::Reflection::AssemblyCompanyAttribute::get_Company()
	IL_071c:                                                                        //ldc.i4.7
	IL_071d:            Temp_63=Temp_62->Substring(safe_cast<System::Int32>(7));    //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_0722:            Temp_64=Temp_63->Trim();                                    //callvirt				System::String^ System::String::Trim()
	IL_0727:            return Temp_64;                                             //ret
	IL_0728:                                                                        //ldarg.1
	IL_0729:            Temp_13=gcnew System::Diagnostics::StackTrace(A_0);         //newobj				void System::Diagnostics::StackTrace::.ctor(System::Exception^)
	IL_072e:            V_0=Temp_13;                                                //stloc.0
	IL_072f:                                                                        //ldloc.0
	IL_0730:            Temp_14=V_0->FrameCount;                                    //callvirt				System::Int32 System::Diagnostics::StackTrace::get_FrameCount()
	IL_0735:                                                                        //ldc.i4.1
	IL_0736:                                                                        //sub
	IL_0737:            V_1=(Temp_14 - 1);                                          //stloc.1
	IL_0738:                                                                        //ldc.i4				0x11
	IL_073d:            V_7=17;                                                     //stloc				V_7
	IL_0741:            /*goto IL_0019;*/goto IL_0746;                              //br				IL_0019
	IL_0746:            goto IL_0223;                                               //br				IL_0223
	IL_074b:                                                                        //ldc.i4				0x10
	IL_0750:            V_7=16;                                                     //stloc				V_7
	IL_0754:            /*goto IL_0019;*/goto IL_0759;                              //br				IL_0019
	IL_0759:                                                                        //ldloc.s				V_6
	IL_075b:                                                                        //unbox				System::Int32
	IL_0760:                                                                        //ldind.i4
	IL_0761:            switch(safe_cast<System::Int32>(V_6)){case 0:goto IL_018c;case 1:goto IL_018c;case 2:goto IL_018c;case 3:goto IL_018c;case 4:goto IL_018c;case 5:goto IL_018c;case 6:goto IL_018c;case 7:goto IL_018c;case 8:goto IL_018c;case 9:goto IL_018c;case 10:goto IL_018c;case 11:goto IL_018c;case 12:goto IL_00cd;case 13:goto IL_00cd;case 14:goto IL_058c;case 15:goto IL_07cd;case 16:goto IL_057d;case 17:goto IL_057d;case 18:goto IL_0149;case 19:goto IL_0214;case 20:goto IL_019b;};//switch				(IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_018c,IL_00cd,IL_00cd,IL_058c,IL_07cd,IL_057d,IL_057d,IL_0149,IL_0214,IL_019b)
	IL_07ba:                                                                        //ldc.i4				0x21
	IL_07bf:            V_7=33;                                                     //stloc				V_7
	IL_07c3:            /*goto IL_0019;*/goto IL_07c8;                              //br				IL_0019
	IL_07c8:            goto IL_0629;                                               //br				IL_0629
	IL_07cd:                                                                        //ldstr				L"\x5827\x4F29\x582B\x4B2D\x422F\x7231\x4733\x5735\x4F37\x5B39\x483B\x443D\x2B3F\x2B41\x6A43\x2245\x2D47"
	IL_07d2:                                                                        //ldloc				V_8
	IL_07d6:            Temp_56=a(L"\x5827\x4F29\x582B\x4B2D\x422F\x7231\x4733\x5735\x4F37\x5B39\x483B\x443D\x2B3F\x2B41\x6A43\x2245\x2D47",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07db:            return Temp_56;                                             //ret
	IL_07dc:                                                                        //ldstr				L"\x6D27\x4729\x4D2B\x472D\x5C2F"
	IL_07e1:                                                                        //ldloc				V_8
	IL_07e5:            Temp_18=a(L"\x6D27\x4729\x4D2B\x472D\x5C2F",V_8);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07ea:            Temp_19=Root::T_x128::M_x1(Temp_18);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_07ef:            return Temp_19;                                             //ret

}
inline System::String^ Reflector::Application::ApplicationManager::M_x1(System::Exception^ A_0,Reflector::IConfigurationManager^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::Object^>^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Type^ Temp_9 = nullptr;
	System::Reflection::Assembly^ Temp_10 = nullptr;
	System::Type^ Temp_11 = nullptr;
	array<System::Object^>^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Version^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::OperatingSystem^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	array<System::Object^>^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_5=12;                                                     //stloc				V_5
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:            goto IL_0031;                                               //br.s				IL_0031
	IL_0018:                                                                        //ldloc				V_3
	IL_001c:            switch(V_3){case 0:goto IL_013c;case 1:goto IL_011a;case 2:goto IL_0156;case 3:goto IL_0109;};//switch				(IL_013c,IL_011a,IL_0156,IL_0109)
	IL_0031:                                                                        //ldloc.0
	IL_0032:                                                                        //ldstr				L"\x7129\x7C2B\x422D\x552F\x5331\x4733\x5335\x1837\x5E39\x593B\x4D3D\x233F\x3041\x2D43\x2445\x2D47\x6A49\x3B4B\x264D\x314F\x2651\x7453\x3B55\x3157\x3D59\x345B\x2A5D\x405F\x0A61\x0563\x1065\x0D67\x4A69\x0F6B\x0F6D\x056F\x0171\x1173\x1275\x5877\x0E79\x147B\x177D\xF37F\xA281\xE183\xF485\xFA87\xE589\xFE8B\xA08D\xCD8F"
	IL_0037:                                                                        //ldloc				V_5
	IL_003b:            Temp_2=a(L"\x7129\x7C2B\x422D\x552F\x5331\x4733\x5335\x1837\x5E39\x593B\x4D3D\x233F\x3041\x2D43\x2445\x2D47\x6A49\x3B4B\x264D\x314F\x2651\x7453\x3B55\x3157\x3D59\x345B\x2A5D\x405F\x0A61\x0563\x1065\x0D67\x4A69\x0F6B\x0F6D\x056F\x0171\x1173\x1275\x5877\x0E79\x147B\x177D\xF37F\xA281\xE183\xF485\xFA87\xE589\xFE8B\xA08D\xCD8F",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0040:            V_0->WriteLine(Temp_2);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0045:                                                                        //ldloc.0
	IL_0046:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_004b:                                                                        //ldloc.0
	IL_004c:                                                                        //ldarg.0
	IL_004d:                                                                        //ldarg.1
	IL_004e:            Temp_3=this->M_x12(A_0);                                    //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::Exception^)
	IL_0053:            V_0->WriteLine(Temp_3);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0058:                                                                        //ldloc.0
	IL_0059:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_005e:                                                                        //ldloc.0
	IL_005f:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0064:                                                                        //ldstr				L"\x5129\x1C2B\x532D\x102F\x4931\x0533\x4B35"
	IL_0069:                                                                        //ldloc				V_5
	IL_006d:            Temp_5=a(L"\x5129\x1C2B\x532D\x102F\x4931\x0533\x4B35",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0072:                                                                        //ldc.i4.2
	IL_0073:            Temp_6=gcnew array<System::Object^>(2);                     //newarr				System::Object
	IL_0078:            V_2=Temp_6;                                                 //stloc.2
	IL_0079:                                                                        //ldloc.2
	IL_007a:                                                                        //ldc.i4.0
	IL_007b:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345"
	IL_0080:                                                                        //ldloc				V_5
	IL_0084:            Temp_7=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x0E3F\x2341\x2943\x2345",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0089:            Temp_8=Root::T_x128::M_x1(Temp_7);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_008e:            V_2[0]=safe_cast<System::Object^>(Temp_8);                  //stelem.ref
	IL_008f:                                                                        //ldloc.2
	IL_0090:                                                                        //ldc.i4.1
	IL_0091:                                                                        //ldtoken				Reflector::IPackage
	IL_0096:            Temp_9=Reflector::IPackage::typeid;                         //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_009b:            Temp_10=Temp_9->Assembly;                                   //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_00a0:                                                                        //ldtoken				System::Reflection::AssemblyInformationalVersionAttribute
	IL_00a5:            Temp_11=System::Reflection::AssemblyInformationalVersionAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00aa:                                                                        //ldc.i4.0
	IL_00ab:            Temp_12=Temp_10->GetCustomAttributes(Temp_11,false);        //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_00b0:                                                                        //ldc.i4.0
	IL_00b1:                                                                        //ldelem.ref
	IL_00b2:                                                                        //isinst				System::Reflection::AssemblyInformationalVersionAttribute
	IL_00b7:            Temp_13=dynamic_cast<System::Reflection::AssemblyInformationalVersionAttribute^>(Temp_12[0])->InformationalVersion;//callvirt				System::String^ System::Reflection::AssemblyInformationalVersionAttribute::get_InformationalVersion()
	IL_00bc:            V_2[1]=safe_cast<System::Object^>(Temp_13);                 //stelem.ref
	IL_00bd:                                                                        //ldloc.2
	IL_00be:            Temp_14=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_4),Temp_5,V_2);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_00c3:            V_0->WriteLine(Temp_14);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:                                                                        //ldstr				L"\x0429\x622B\x6B2D\x642F\x1231\x7233\x4435\x5937\x5739\x593B\x493D\x2F3F\x3041\x2F43\x6645"
	IL_00ce:                                                                        //ldloc				V_5
	IL_00d2:            Temp_15=a(L"\x0429\x622B\x6B2D\x642F\x1231\x7233\x4435\x5937\x5739\x593B\x493D\x2F3F\x3041\x2F43\x6645",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d7:            Temp_16=System::Environment::Version;                       //call				System::Version^ System::Environment::get_Version()
	IL_00dc:            Temp_17=Temp_16->ToString();                                //callvirt				System::String^ System::Version::ToString()
	IL_00e1:            Temp_18=System::String::Concat(Temp_15,Temp_17);            //call				System::String^ System::String::Concat(System::String^,System::String^)
	IL_00e6:            V_0->WriteLine(Temp_18);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_00eb:                                                                        //ldloc.0
	IL_00ec:            Temp_19=System::Environment::OSVersion;                     //call				System::OperatingSystem^ System::Environment::get_OSVersion()
	IL_00f1:            Temp_20=Temp_19->ToString();                                //callvirt				System::String^ System::OperatingSystem::ToString()
	IL_00f6:            V_0->WriteLine(Temp_20);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_00fb:                                                                        //ldc.i4				0x3
	IL_0100:            V_3=3;                                                      //stloc				V_3
	IL_0104:            /*goto IL_0018;*/goto IL_0109;                              //br				IL_0018
	IL_0109:                                                                        //ldarg.2
	IL_010a:            if(A_1==nullptr)goto IL_013e;                               //brfalse.s				IL_013e
	IL_010c:                                                                        //ldc.i4				0x1
	IL_0111:            V_3=1;                                                      //stloc				V_3
	IL_0115:            /*goto IL_0018;*/goto IL_011a;                              //br				IL_0018
	IL_011a:            goto IL_011c;                                               //br.s				IL_011c
	IL_011c:                                                                        //ldloc.0
	IL_011d:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0122:                                                                        //ldloc.0
	IL_0123:                                                                        //ldarg.2
	IL_0124:            Temp_22=A_1->ToString();                                    //callvirt				System::String^ System::Object::ToString()
	IL_0129:            V_0->WriteLine(Temp_22);                                    //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_012e:                                                                        //ldc.i4				0x0
	IL_0133:            V_3=0;                                                      //stloc				V_3
	IL_0137:            /*goto IL_0018;*/goto IL_013c;                              //br				IL_0018
	IL_013c:            goto IL_013e;                                               //br.s				IL_013e
	IL_013e:            goto IL_0141;                                               //br.s				IL_0141
	IL_0140:                                                                        //break
	IL_0141:                                                                        //ldloc.0
	IL_0142:            Temp_21=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0147:            V_1=Temp_21;                                                //stloc.1
	IL_0148:                                                                        //ldc.i4				0x2
	IL_014d:            V_3=2;                                                      //stloc				V_3
	IL_0151:            /*goto IL_0018;*/goto IL_0156;                              //br				IL_0018
	IL_0156:            goto IL_019e;                                               //leave.s				IL_019e
	                    ;}
	                    finally{
	IL_0158:                                                                        //ldc.i4				0x1
	IL_015d:            V_4=1;                                                      //stloc				V_4
	IL_0161:            /*goto IL_0165;*/goto IL_0163;                              //br.s				IL_0165
	IL_0163:            goto IL_017a;                                               //br.s				IL_017a
	IL_0165:                                                                        //ldloc				V_4
	IL_0169:            switch(V_4){case 0:goto IL_0188;case 1:goto IL_0163;case 2:goto IL_019b;};//switch				(IL_0188,IL_0163,IL_019b)
	IL_017a:                                                                        //ldloc.0
	IL_017b:            if(V_0==nullptr)goto IL_019d;                               //brfalse.s				IL_019d
	IL_017d:                                                                        //ldc.i4				0x0
	IL_0182:            V_4=0;                                                      //stloc				V_4
	IL_0186:            /*goto IL_0165;*/goto IL_0188;                              //br.s				IL_0165
	IL_0188:            goto IL_018a;                                               //br.s				IL_018a
	IL_018a:                                                                        //ldloc.0
	IL_018b:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0190:                                                                        //ldc.i4				0x2
	IL_0195:            V_4=2;                                                      //stloc				V_4
	IL_0199:            /*goto IL_0165;*/goto IL_019b;                              //br.s				IL_0165
	IL_019b:            goto IL_019d;                                               //br.s				IL_019d
	IL_019d:                                                                        //endfinally
	                    ;}
	IL_019e:                                                                        //ldloc.1
	IL_019f:            return V_1;                                                 //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Type^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Boolean Temp_10 = false;
	System::Object^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_14 = nullptr;
	System::Collections::IEnumerator^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	System::Object^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Object^ Temp_20 = nullptr;
	System::Boolean Temp_21 = false;
	System::Object^ Temp_22 = nullptr;
	System::Object^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	Reflector::ICommandBarCollection^ Temp_27 = nullptr;
	System::Collections::IEnumerator^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::NullReferenceException^ Temp_32 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Root::T_x107^ V_2 = nullptr;
	Reflector::ICommandBarManager^ V_3 = nullptr;
	Reflector::ICommandBar^ V_4 = nullptr;
	Reflector::ICommandBarItem^ V_5 = nullptr;
	System::NullReferenceException^ V_6 = nullptr;
	System::Collections::IEnumerator^ V_7 = nullptr;
	System::Collections::IEnumerator^ V_8 = nullptr;
	System::IDisposable^ V_9 = nullptr;
	System::Int32 V_10 = 0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_11=0;                                                     //stloc				V_11
	IL_0009:                                                                        //ldstr				L"\x501D\x4F1F\x4C21\x4123"
	IL_000e:                                                                        //ldloc				V_11
	IL_0012:            Temp_0=a(L"\x501D\x4F1F\x4C21\x4123",V_11);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0017:            V_0=Temp_0;                                                 //stloc.0
	IL_0018:                                                                        //ldstr				L"\x501D\x4F1F\x4C21\x4123"
	IL_001d:                                                                        //ldloc				V_11
	IL_0021:            Temp_1=a(L"\x501D\x4F1F\x4C21\x4123",V_11);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0026:            V_1=Temp_1;                                                 //stloc.1
	IL_0027:            /*goto IL_0029;*/goto IL_002701;                            //br.s				IL_0029
	IL_002701:          try{
	IL_0029:            goto IL_004b;                                               //br.s				IL_004b
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:                                                                        //ldloc				V_10
	IL_0032:            switch(V_10){case 0:goto IL_00c3;case 1:goto IL_00ff;case 2:goto IL_03cc;case 3:goto IL_00e2;case 4:goto IL_00b2;};//switch				(IL_00c3,IL_00ff,IL_03cc,IL_00e2,IL_00b2)
	IL_004b:                                                                        //ldstr				L"\x5F1D\x111F"
	IL_0050:                                                                        //ldloc				V_11
	IL_0054:            Temp_2=a(L"\x5F1D\x111F",V_11);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0059:            V_0=Temp_2;                                                 //stloc.0
	IL_005a:                                                                        //ldarg.0
	IL_005b:                                                                        //ldtoken				Root::T_x107
	IL_0060:            Temp_3=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0065:            Temp_4=this->M_x1(Temp_3);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_006a:                                                                        //castclass				Root::T_x107
	IL_006f:            V_2=safe_cast<Root::T_x107^>(Temp_4);                       //stloc.2
	IL_0070:                                                                        //ldstr				L"\x5F1D\x121F"
	IL_0075:                                                                        //ldloc				V_11
	IL_0079:            Temp_5=a(L"\x5F1D\x121F",V_11);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:            V_0=Temp_5;                                                 //stloc.0
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldtoken				Reflector::ICommandBarManager
	IL_0085:            Temp_6=Reflector::ICommandBarManager::typeid;               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_008a:            Temp_7=this->M_x1(Temp_6);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_008f:                                                                        //castclass				Reflector::ICommandBarManager
	IL_0094:            V_3=safe_cast<Reflector::ICommandBarManager^>(Temp_7);      //stloc.3
	IL_0095:                                                                        //ldstr				L"\x5F1D\x131F"
	IL_009a:                                                                        //ldloc				V_11
	IL_009e:            Temp_8=a(L"\x5F1D\x131F",V_11);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00a3:            V_0=Temp_8;                                                 //stloc.0
	IL_00a4:                                                                        //ldc.i4				0x4
	IL_00a9:            V_10=4;                                                     //stloc				V_10
	IL_00ad:            goto IL_002b;                                               //br				IL_002b
	IL_00b2:                                                                        //ldloc.3
	IL_00b3:            if(V_3==nullptr)goto IL_00e4;                               //brfalse.s				IL_00e4
	IL_00b5:                                                                        //ldc.i4				0x0
	IL_00ba:            V_10=0;                                                     //stloc				V_10
	IL_00be:            goto IL_002b;                                               //br				IL_002b
	IL_00c3:            goto IL_00c5;                                               //br.s				IL_00c5
	IL_00c5:                                                                        //ldstr				L"\x5F1D\x141F"
	IL_00ca:                                                                        //ldloc				V_11
	IL_00ce:            Temp_9=a(L"\x5F1D\x141F",V_11);                             //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d3:            V_0=Temp_9;                                                 //stloc.0
	IL_00d4:                                                                        //ldc.i4				0x3
	IL_00d9:            V_10=3;                                                     //stloc				V_10
	IL_00dd:            goto IL_002b;                                               //br				IL_002b
	IL_00e2:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00e4:                                                                        //ldloc.3
	IL_00e5:            Temp_27=V_3->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_00ea:            Temp_28=safe_cast<System::Collections::IEnumerable^>(Temp_27)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_00ef:            V_7=Temp_28;                                                //stloc.s				V_7
	IL_00f1:                                                                        //ldc.i4				0x1
	IL_00f6:            V_10=1;                                                     //stloc				V_10
	IL_00fa:            goto IL_002b;                                               //br				IL_002b
	IL_00ff:            /*goto IL_0101;*/goto IL_00FF01;                            //br.s				IL_0101
	IL_00FF01:          try{
	IL_0101:                                                                        //ldc.i4				0x0
	IL_0106:            V_10=0;                                                     //stloc				V_10
	IL_010a:            /*goto IL_010e;*/goto IL_010c;                              //br.s				IL_010e
	IL_010c:            goto IL_0133;                                               //br.s				IL_0133
	IL_010e:                                                                        //ldloc				V_10
	IL_0112:            switch(V_10){case 0:goto IL_010c;case 1:goto IL_0143;case 2:goto IL_032b;case 3:goto IL_0358;case 4:goto IL_02fe;case 5:goto IL_036b;case 6:goto IL_015a;};//switch				(IL_010c,IL_0143,IL_032b,IL_0358,IL_02fe,IL_036b,IL_015a)
	IL_0133:            goto IL_0138;                                               //br				IL_0138
	IL_0138:                                                                        //ldc.i4				0x1
	IL_013d:            V_10=1;                                                     //stloc				V_10
	IL_0141:            /*goto IL_010e;*/goto IL_0143;                              //br.s				IL_010e
	IL_0143:                                                                        //ldloc.s				V_7
	IL_0145:            Temp_10=V_7->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_014a:            if(Temp_10)goto IL_02d3;                                    //brtrue				IL_02d3
	IL_014f:                                                                        //ldc.i4				0x6
	IL_0154:            V_10=6;                                                     //stloc				V_10
	IL_0158:            /*goto IL_010e;*/goto IL_015a;                              //br.s				IL_010e
	IL_015a:            goto IL_035d;                                               //br				IL_035d
	IL_015A01:          try{
	IL_015f:                                                                        //ldc.i4				0x1
	IL_0164:            V_10=1;                                                     //stloc				V_10
	IL_0168:            /*goto IL_016c;*/goto IL_016a;                              //br.s				IL_016c
	IL_016a:            goto IL_0199;                                               //br.s				IL_0199
	IL_016c:                                                                        //ldloc				V_10
	IL_0170:            switch(V_10){case 0:goto IL_0253;case 1:goto IL_016a;case 2:goto IL_01c5;case 3:goto IL_027d;case 4:goto IL_01f2;case 5:goto IL_01a9;case 6:goto IL_026d;case 7:goto IL_0209;case 8:goto IL_0243;};//switch				(IL_0253,IL_016a,IL_01c5,IL_027d,IL_01f2,IL_01a9,IL_026d,IL_0209,IL_0243)
	IL_0199:            goto IL_0245;                                               //br				IL_0245
	IL_019e:                                                                        //ldc.i4				0x5
	IL_01a3:            V_10=5;                                                     //stloc				V_10
	IL_01a7:            /*goto IL_016c;*/goto IL_01a9;                              //br.s				IL_016c
	IL_01a9:                                                                        //ldloc.s				V_5
	IL_01ab:            Temp_23=V_5->Value;                                         //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_01b0:                                                                        //isinst				System::String
	IL_01b5:            if(dynamic_cast<System::String^>(Temp_23)==nullptr)goto IL_0245;//brfalse				IL_0245
	IL_01ba:                                                                        //ldc.i4				0x2
	IL_01bf:            V_10=2;                                                     //stloc				V_10
	IL_01c3:            /*goto IL_016c;*/goto IL_01c5;                              //br.s				IL_016c
	IL_01c5:            goto IL_020b;                                               //br.s				IL_020b
	IL_01c7:                                                                        //ldloc.s				V_8
	IL_01c9:            Temp_17=V_8->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_01ce:                                                                        //castclass				Reflector::ICommandBarItem
	IL_01d3:            V_5=safe_cast<Reflector::ICommandBarItem^>(Temp_17);        //stloc.s				V_5
	IL_01d5:                                                                        //ldstr				L"\x5A1D"
	IL_01da:                                                                        //ldloc				V_11
	IL_01de:            Temp_18=a(L"\x5A1D",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e3:            V_0=Temp_18;                                                //stloc.0
	IL_01e4:                                                                        //ldc.i4				0x4
	IL_01e9:            V_10=4;                                                     //stloc				V_10
	IL_01ed:            /*goto IL_016c;*/goto IL_01f2;                              //br				IL_016c
	IL_01f2:                                                                        //ldloc.s				V_5
	IL_01f4:            Temp_22=V_5->Value;                                         //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_01f9:            if(Temp_22==nullptr)goto IL_0245;                           //brfalse.s				IL_0245
	IL_01fb:                                                                        //ldc.i4				0x7
	IL_0200:            V_10=7;                                                     //stloc				V_10
	IL_0204:            /*goto IL_016c;*/goto IL_0209;                              //br				IL_016c
	IL_0209:            goto IL_019e;                                               //br.s				IL_019e
	IL_020b:                                                                        //ldstr				L"\x5B1D"
	IL_0210:                                                                        //ldloc				V_11
	IL_0214:            Temp_19=a(L"\x5B1D",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0219:            V_0=Temp_19;                                                //stloc.0
	IL_021a:                                                                        //ldloc.s				V_5
	IL_021c:            Temp_20=V_5->Value;                                         //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0221:                                                                        //castclass				System::String
	IL_0226:            V_1=safe_cast<System::String^>(Temp_20);                    //stloc.1
	IL_0227:                                                                        //ldloc.s				V_5
	IL_0229:                                                                        //ldloc.2
	IL_022a:                                                                        //ldloc.1
	IL_022b:            Temp_21=safe_cast<Root::T_x24^>(V_2)->M_x2(V_1);            //callvirt				System::Boolean Root::T_x24::M_x2(System::String^)
	IL_0230:            V_5->Enabled=Temp_21;                                       //callvirt				void Reflector::ICommandBarItem::set_Enabled(System::Boolean)
	IL_0235:                                                                        //ldc.i4				0x8
	IL_023a:            V_10=8;                                                     //stloc				V_10
	IL_023e:            /*goto IL_016c;*/goto IL_0243;                              //br				IL_016c
	IL_0243:            goto IL_0245;                                               //br.s				IL_0245
	IL_0245:                                                                        //ldc.i4				0x0
	IL_024a:            V_10=0;                                                     //stloc				V_10
	IL_024e:            /*goto IL_016c;*/goto IL_0253;                              //br				IL_016c
	IL_0253:                                                                        //ldloc.s				V_8
	IL_0255:            Temp_16=V_8->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_025a:            if(Temp_16)goto IL_01c7;                                    //brtrue				IL_01c7
	IL_025f:                                                                        //ldc.i4				0x6
	IL_0264:            V_10=6;                                                     //stloc				V_10
	IL_0268:            /*goto IL_016c;*/goto IL_026d;                              //br				IL_016c
	IL_026d:            goto IL_026f;                                               //br.s				IL_026f
	IL_026f:                                                                        //ldc.i4				0x3
	IL_0274:            V_10=3;                                                     //stloc				V_10
	IL_0278:            /*goto IL_016c;*/goto IL_027d;                              //br				IL_016c
	IL_027d:            goto IL_0138;                                               //leave				IL_0138
	                    ;}
	                    finally{
	IL_0282:            goto IL_0299;                                               //br.s				IL_0299
	IL_0284:                                                                        //ldloc				V_10
	IL_0288:            switch(V_10){case 0:goto IL_02d0;case 1:goto IL_02bc;case 2:goto IL_02ad;};//switch				(IL_02d0,IL_02bc,IL_02ad)
	IL_0299:                                                                        //ldloc.s				V_8
	IL_029b:                                                                        //isinst				System::IDisposable
	IL_02a0:            V_9=dynamic_cast<System::IDisposable^>(V_8);                //stloc.s				V_9
	IL_02a2:                                                                        //ldc.i4				0x2
	IL_02a7:            V_10=2;                                                     //stloc				V_10
	IL_02ab:            /*goto IL_0284;*/goto IL_02ad;                              //br.s				IL_0284
	IL_02ad:                                                                        //ldloc.s				V_9
	IL_02af:            if(V_9==nullptr)goto IL_02d2;                               //brfalse.s				IL_02d2
	IL_02b1:                                                                        //ldc.i4				0x1
	IL_02b6:            V_10=1;                                                     //stloc				V_10
	IL_02ba:            /*goto IL_0284;*/goto IL_02bc;                              //br.s				IL_0284
	IL_02bc:            goto IL_02be;                                               //br.s				IL_02be
	IL_02be:                                                                        //ldloc.s				V_9
	IL_02c0:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_02c5:                                                                        //ldc.i4				0x0
	IL_02ca:            V_10=0;                                                     //stloc				V_10
	IL_02ce:            /*goto IL_0284;*/goto IL_02d0;                              //br.s				IL_0284
	IL_02d0:            goto IL_02d2;                                               //br.s				IL_02d2
	IL_02d2:                                                                        //endfinally
	                    ;}
	IL_02d3:                                                                        //ldloc.s				V_7
	IL_02d5:            Temp_11=V_7->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_02da:                                                                        //castclass				Reflector::ICommandBar
	IL_02df:            V_4=safe_cast<Reflector::ICommandBar^>(Temp_11);            //stloc.s				V_4
	IL_02e1:                                                                        //ldstr				L"\x5C1D"
	IL_02e6:                                                                        //ldloc				V_11
	IL_02ea:            Temp_12=a(L"\x5C1D",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ef:            V_0=Temp_12;                                                //stloc.0
	IL_02f0:                                                                        //ldc.i4				0x4
	IL_02f5:            V_10=4;                                                     //stloc				V_10
	IL_02f9:            /*goto IL_010e;*/goto IL_02fe;                              //br				IL_010e
	IL_02fe:                                                                        //ldloc.s				V_4
	IL_0300:            Temp_24=V_4->Identifier;                                    //callvirt				System::String^ Reflector::ICommandBar::get_Identifier()
	IL_0305:                                                                        //ldstr				L"\x4A1D\x4F1F\x4D21\x4823\x6425\x4927\x5829"
	IL_030a:                                                                        //ldloc				V_11
	IL_030e:            Temp_25=a(L"\x4A1D\x4F1F\x4D21\x4823\x6425\x4927\x5829",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0313:            Temp_26=(Temp_24 == Temp_25);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0318:            if(!Temp_26)goto IL_0138;                                   //brfalse				IL_0138
	IL_031d:                                                                        //ldc.i4				0x2
	IL_0322:            V_10=2;                                                     //stloc				V_10
	IL_0326:            /*goto IL_010e;*/goto IL_032b;                              //br				IL_010e
	IL_032b:            goto IL_032d;                                               //br.s				IL_032d
	IL_032d:                                                                        //ldstr				L"\x5D1D"
	IL_0332:                                                                        //ldloc				V_11
	IL_0336:            Temp_13=a(L"\x5D1D",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033b:            V_0=Temp_13;                                                //stloc.0
	IL_033c:                                                                        //ldloc.s				V_4
	IL_033e:            Temp_14=V_4->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0343:            Temp_15=safe_cast<System::Collections::IEnumerable^>(Temp_14)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0348:            V_8=Temp_15;                                                //stloc.s				V_8
	IL_034a:                                                                        //ldc.i4				0x3
	IL_034f:            V_10=3;                                                     //stloc				V_10
	IL_0353:            /*goto IL_010e;*/goto IL_0358;                              //br				IL_010e
	IL_0358:            /*goto IL_015f;*/goto IL_015A01;                            //br				IL_015f
	IL_035d:                                                                        //ldc.i4				0x5
	IL_0362:            V_10=5;                                                     //stloc				V_10
	IL_0366:            /*goto IL_010e;*/goto IL_036b;                              //br				IL_010e
	IL_036b:            goto IL_03be;                                               //leave.s				IL_03be
	                    ;}
	                    finally{
	IL_036d:            goto IL_0384;                                               //br.s				IL_0384
	IL_036f:                                                                        //ldloc				V_10
	IL_0373:            switch(V_10){case 0:goto IL_0398;case 1:goto IL_03bb;case 2:goto IL_03a7;};//switch				(IL_0398,IL_03bb,IL_03a7)
	IL_0384:                                                                        //ldloc.s				V_7
	IL_0386:                                                                        //isinst				System::IDisposable
	IL_038b:            V_9=dynamic_cast<System::IDisposable^>(V_7);                //stloc.s				V_9
	IL_038d:                                                                        //ldc.i4				0x0
	IL_0392:            V_10=0;                                                     //stloc				V_10
	IL_0396:            /*goto IL_036f;*/goto IL_0398;                              //br.s				IL_036f
	IL_0398:                                                                        //ldloc.s				V_9
	IL_039a:            if(V_9==nullptr)goto IL_03bd;                               //brfalse.s				IL_03bd
	IL_039c:                                                                        //ldc.i4				0x2
	IL_03a1:            V_10=2;                                                     //stloc				V_10
	IL_03a5:            /*goto IL_036f;*/goto IL_03a7;                              //br.s				IL_036f
	IL_03a7:            goto IL_03a9;                                               //br.s				IL_03a9
	IL_03a9:                                                                        //ldloc.s				V_9
	IL_03ab:            /*V_9->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_03b0:                                                                        //ldc.i4				0x1
	IL_03b5:            V_10=1;                                                     //stloc				V_10
	IL_03b9:            /*goto IL_036f;*/goto IL_03bb;                              //br.s				IL_036f
	IL_03bb:            goto IL_03bd;                                               //br.s				IL_03bd
	IL_03bd:                                                                        //endfinally
	                    ;}
	IL_03be:                                                                        //ldc.i4				0x2
	IL_03c3:            V_10=2;                                                     //stloc				V_10
	IL_03c7:            goto IL_002b;                                               //br				IL_002b
	IL_03cc:            goto IL_03fb;                                               //leave.s				IL_03fb
	                    ;}
	                    catch(System::NullReferenceException^ Ex_03CC02){
	IL_03ce:            V_6=Ex_03CC02;                                              //stloc.s				V_6
	IL_03d0:                                                                        //ldstr				L"\x5F1D\x501F\x5221\x4823\x4F25\x4B27\x4B29\x582B\x472D\x5F2F\x5C31\x6B33\x7F35\x5C37\x5639\x593B\x043D\x603F"
	IL_03d5:                                                                        //ldloc				V_11
	IL_03d9:            Temp_29=a(L"\x5F1D\x501F\x5221\x4823\x4F25\x4B27\x4B29\x582B\x472D\x5F2F\x5C31\x6B33\x7F35\x5C37\x5639\x593B\x043D\x603F",V_11);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03de:                                                                        //ldloc.0
	IL_03df:                                                                        //ldstr				L"\x3E1D"
	IL_03e4:                                                                        //ldloc				V_11
	IL_03e8:            Temp_30=a(L"\x3E1D",V_11);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03ed:                                                                        //ldloc.1
	IL_03ee:            Temp_31=System::String::Concat(Temp_29,V_0,Temp_30,V_1);    //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_03f3:                                                                        //ldloc.s				V_6
	IL_03f5:            Temp_32=gcnew System::NullReferenceException(Temp_31,safe_cast<System::Exception^>(V_6));//newobj				void System::NullReferenceException::.ctor(System::String^,System::Exception^)
	IL_03fa:            throw Temp_32;                                              //throw
	                    ;}
	IL_03fb:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,System::Threading::ThreadExceptionEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Exception^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.2
	IL_0002:            Temp_0=A_1->Exception;                                      //callvirt				System::Exception^ System::Threading::ThreadExceptionEventArgs::get_Exception()
	IL_0007:            this->M_x13(Temp_0);                                        //call				void Reflector::Application::ApplicationManager::M_x13(System::Exception^)
	IL_000c:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,System::UnhandledExceptionEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	//local variables.
	System::Exception^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.2
	IL_0001:            Temp_0=A_1->ExceptionObject;                                //callvirt				System::Object^ System::UnhandledExceptionEventArgs::get_ExceptionObject()
	IL_0006:                                                                        //castclass				System::Exception
	IL_000b:            V_0=safe_cast<System::Exception^>(Temp_0);                  //stloc.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:            this->M_x13(V_0);                                           //call				void Reflector::Application::ApplicationManager::M_x13(System::Exception^)
	IL_0013:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,System::Windows::Forms::DragEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::IDataObject^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_6 = nullptr;
	System::Windows::Forms::IDataObject^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ V_2 = nullptr;
	array<System::String^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_6=4;                                                      //stloc				V_6
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_5=1;                                                      //stloc				V_5
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0037;                                               //br.s				IL_0037
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_0060;case 1:goto IL_0014;case 2:goto IL_0082;case 3:goto IL_006d;case 4:goto IL_00ef;case 5:goto IL_00bb;};//switch				(IL_0060,IL_0014,IL_0082,IL_006d,IL_00ef,IL_00bb)
	IL_0037:                                                                        //ldarg.2
	IL_0038:            Temp_7=A_1->Data;                                           //callvirt				System::Windows::Forms::IDataObject^ System::Windows::Forms::DragEventArgs::get_Data()
	IL_003d:                                                                        //ldstr				L"\x6421\x4D23\x4A25\x4D27\x6E29\x5E2B\x412D\x402F"
	IL_0042:                                                                        //ldloc				V_6
	IL_0046:            Temp_8=a(L"\x6421\x4D23\x4A25\x4D27\x6E29\x5E2B\x412D\x402F",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004b:            Temp_9=Temp_7->GetDataPresent(Temp_8);                      //callvirt				System::Boolean System::Windows::Forms::IDataObject::GetDataPresent(System::String^)
	IL_0050:            if(!Temp_9)goto IL_00f4;                                    //brfalse				IL_00f4
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_5=0;                                                      //stloc				V_5
	IL_005e:            /*goto IL_0016;*/goto IL_0060;                              //br.s				IL_0016
	IL_0060:            goto IL_00bd;                                               //br.s				IL_00bd
	IL_0062:                                                                        //ldc.i4				0x3
	IL_0067:            V_5=3;                                                      //stloc				V_5
	IL_006b:            /*goto IL_0016;*/goto IL_006d;                              //br.s				IL_0016
	IL_006d:            goto IL_0070;                                               //br.s				IL_0070
	IL_006f:                                                                        //break
	IL_0070:                                                                        //ldloc.s				V_4
	IL_0072:                                                                        //ldloc.3
	IL_0073:            Temp_3=V_3->Length;                                         //ldlen
	IL_0074:                                                                        //conv.i4
	IL_0075:            if(V_4<Temp_3)goto IL_0084;                                 //blt.s				IL_0084
	IL_0077:                                                                        //ldc.i4				0x2
	IL_007c:            V_5=2;                                                      //stloc				V_5
	IL_0080:            /*goto IL_0016;*/goto IL_0082;                              //br.s				IL_0016
	IL_0082:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_0084:                                                                        //ldloc.3
	IL_0085:                                                                        //ldloc.s				V_4
	IL_0087:                                                                        //ldelem.ref
	IL_0088:            V_1=V_3[V_4];                                               //stloc.1
	IL_0089:                                                                        //ldarg.0
	IL_008a:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_008f:            Temp_4=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0094:            Temp_5=this->M_x1(Temp_4);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0099:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_009e:            V_2=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_5);//stloc.2
	IL_009f:                                                                        //ldloc.2
	IL_00a0:                                                                        //ldloc.1
	IL_00a1:            Temp_6=V_2->LoadFile(V_1);                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_00a6:                                                                        //pop
	IL_00a7:                                                                        //ldloc.s				V_4
	IL_00a9:                                                                        //ldc.i4.1
	IL_00aa:                                                                        //add
	IL_00ab:            V_4=(V_4 + 1);                                              //stloc.s				V_4
	IL_00ad:                                                                        //ldc.i4				0x5
	IL_00b2:            V_5=5;                                                      //stloc				V_5
	IL_00b6:            /*goto IL_0016;*/goto IL_00bb;                              //br				IL_0016
	IL_00bb:            goto IL_0062;                                               //br.s				IL_0062
	IL_00bd:                                                                        //ldarg.2
	IL_00be:            Temp_0=A_1->Data;                                           //callvirt				System::Windows::Forms::IDataObject^ System::Windows::Forms::DragEventArgs::get_Data()
	IL_00c3:                                                                        //ldstr				L"\x6421\x4D23\x4A25\x4D27\x6E29\x5E2B\x412D\x402F"
	IL_00c8:                                                                        //ldloc				V_6
	IL_00cc:            Temp_1=a(L"\x6421\x4D23\x4A25\x4D27\x6E29\x5E2B\x412D\x402F",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d1:            Temp_2=Temp_0->GetData(Temp_1);                             //callvirt				System::Object^ System::Windows::Forms::IDataObject::GetData(System::String^)
	IL_00d6:                                                                        //castclass				array<System::String^>
	IL_00db:            V_0=safe_cast<array<System::String^>^>(Temp_2);             //stloc.0
	IL_00dc:                                                                        //ldloc.0
	IL_00dd:            V_3=V_0;                                                    //stloc.3
	IL_00de:                                                                        //ldc.i4.0
	IL_00df:            V_4=0;                                                      //stloc.s				V_4
	IL_00e1:                                                                        //ldc.i4				0x4
	IL_00e6:            V_5=4;                                                      //stloc				V_5
	IL_00ea:            /*goto IL_0016;*/goto IL_00ef;                              //br				IL_0016
	IL_00ef:            goto IL_0062;                                               //br				IL_0062
	IL_00f4:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,Root::T_x124^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	Reflector::IAssemblyBrowser^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.3
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.1
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_0011:            Temp_0=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0016:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_001b:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0020:            V_0=safe_cast<Reflector::IAssemblyBrowser^>(Temp_1);        //stloc.0
	IL_0021:                                                                        //ldloc.0
	IL_0022:                                                                        //ldarg.2
	IL_0023:            Temp_2=A_1->M_x1();                                         //callvirt				System::Object^ Root::T_x124::M_x1()
	IL_0028:            V_0->ActiveItem=Temp_2;                                     //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_002d:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::Object^ A_0,Root::T_x72^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::IO::StringReader^ Temp_5 = nullptr;
	Reflector::IWindowManager^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_8 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_13 = nullptr;
	Reflector::IWindowManager^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	Root::T_x111^ Temp_17 = nullptr;
	System::Object^ Temp_18 = nullptr;
	Reflector::IWindowManager^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_29 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_30 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_31 = nullptr;
	Reflector::CodeModel::IModule^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_38 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_43 = nullptr;
	System::Int32 Temp_44 = 0;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Reflector::IAssemblyBrowser^ V_1 = nullptr;
	System::IO::StringReader^ V_2 = nullptr;
	Root::T_x111^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::String^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_9=18;                                                     //stloc				V_9
	IL_0009:            goto IL_008f;                                               //br				IL_008f
	IL_000e:                                                                        //ldloc				V_8
	IL_0012:            switch(V_8){case 0:goto IL_04e6;case 1:goto IL_02a1;case 2:goto IL_0203;case 3:goto IL_03e2;case 4:goto IL_03af;case 5:goto IL_0405;case 6:goto IL_041e;case 7:goto IL_00d5;case 8:goto IL_0376;case 9:goto IL_028e;case 10:goto IL_0158;case 11:goto IL_039c;case 12:goto IL_04a7;case 13:goto IL_0242;case 14:goto IL_0363;case 15:goto IL_022f;case 16:goto IL_0195;case 17:goto IL_027b;case 18:goto IL_0265;case 19:goto IL_044b;case 20:goto IL_0311;case 21:goto IL_02f5;case 22:goto IL_03d2;case 23:goto IL_02b9;case 24:goto IL_02dc;case 25:goto IL_04c3;case 26:goto IL_01f0;case 27:goto IL_0347;case 28:goto IL_01cd;case 29:goto IL_0334;};//switch				(IL_04e6,IL_02a1,IL_0203,IL_03e2,IL_03af,IL_0405,IL_041e,IL_00d5,IL_0376,IL_028e,IL_0158,IL_039c,IL_04a7,IL_0242,IL_0363,IL_022f,IL_0195,IL_027b,IL_0265,IL_044b,IL_0311,IL_02f5,IL_03d2,IL_02b9,IL_02dc,IL_04c3,IL_01f0,IL_0347,IL_01cd,IL_0334)
	IL_008f:                                                                        //ldarg.0
	IL_0090:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0095:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_009a:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_009f:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_00a4:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_00a5:                                                                        //ldarg.0
	IL_00a6:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_00ab:            Temp_2=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00b0:            Temp_3=this->M_x1(Temp_2);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00b5:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_00ba:            V_1=safe_cast<Reflector::IAssemblyBrowser^>(Temp_3);        //stloc.1
	IL_00bb:                                                                        //ldarg.2
	IL_00bc:            Temp_4=A_1->M_x2();                                         //callvirt				System::String^ Root::T_x72::M_x2()
	IL_00c1:            Temp_5=gcnew System::IO::StringReader(Temp_4);              //newobj				void System::IO::StringReader::.ctor(System::String^)
	IL_00c6:            V_2=Temp_5;                                                 //stloc.2
	IL_00c7:                                                                        //ldc.i4				0x7
	IL_00cc:            V_8=7;                                                      //stloc				V_8
	IL_00d0:            /*goto IL_000e;*/goto IL_00d5;                              //br				IL_000e
	IL_00d5:                                                                        //ldstr				L"\x712F\x4431\x5533\x5F35\x5437\x5B39\x5E3B\x523D\x253F"
	IL_00da:                                                                        //ldloc				V_9
	IL_00de:            Temp_20=a(L"\x712F\x4431\x5533\x5F35\x5437\x5B39\x5E3B\x523D\x253F",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e3:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x683B\x473D\x303F\x2741\x0043\x2345\x2B47\x2649\x2D4B\x3C4D\x314F\x2651\x3D53\x3955\x3657"
	IL_00e8:                                                                        //ldloc				V_9
	IL_00ec:            Temp_21=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x683B\x473D\x303F\x2741\x0043\x2345\x2B47\x2649\x2D4B\x3C4D\x314F\x2651\x3D53\x3955\x3657",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00f1:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x7A3B\x573D\x253F\x2E41\x2043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459"
	IL_00f6:                                                                        //ldloc				V_9
	IL_00fa:            Temp_22=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x7A3B\x573D\x253F\x2E41\x2043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ff:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x713B\x5B3D\x343F\x2A41\x2B43\x2245\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B"
	IL_0104:                                                                        //ldloc				V_9
	IL_0108:            Temp_23=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x713B\x5B3D\x343F\x2A41\x2B43\x2245\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010d:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x6C3B\x4C3D\x2F3F\x3241\x2143\x3445\x3C47\x3349\x084B\x2B4D\x334F\x3E51\x3553\x2455\x3957\x2E59\x355B\x315D\x0E5F"
	IL_0112:                                                                        //ldloc				V_9
	IL_0116:            Temp_24=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x6C3B\x4C3D\x2F3F\x3241\x2143\x3445\x3C47\x3349\x084B\x2B4D\x334F\x3E51\x3553\x2455\x3957\x2E59\x355B\x315D\x0E5F",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x793B\x483D\x253F\x2C41\x3043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459"
	IL_0120:                                                                        //ldloc				V_9
	IL_0124:            Temp_25=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x793B\x483D\x253F\x2C41\x3043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0129:                                                                        //ldstr				L"\x7C2F\x5D31\x5533\x5235\x7937\x4939\x4F3B\x5B3D\x2D3F\x2041\x2843\x3F45"
	IL_012e:                                                                        //ldloc				V_9
	IL_0132:            Temp_26=a(L"\x7C2F\x5D31\x5533\x5235\x7937\x4939\x4F3B\x5B3D\x2D3F\x2041\x2843\x3F45",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0137:                                                                        //ldstr				L"\x652F\x5C31\x5833\x5935\x5937\x5E39\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349"
	IL_013c:                                                                        //ldloc				V_9
	IL_0140:            Temp_27=a(L"\x652F\x5C31\x5833\x5935\x5937\x5E39\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0145:            goto IL_0339;                                               //leave				IL_0339
	IL_014a:                                                                        //ldc.i4				0xa
	IL_014f:            V_8=10;                                                     //stloc				V_8
	IL_0153:            /*goto IL_000e;*/goto IL_0158;                              //br				IL_000e
	IL_0158:                                                                        //ldloc.s				V_4
	IL_015a:                                                                        //ldloc.0
	IL_015b:            Temp_29=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0160:                                                                        //ldloc.s				V_5
	IL_0162:            Temp_30=Temp_29[V_5];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0167:            Temp_31=Temp_30->Modules;                                   //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_016c:                                                                        //ldloc.s				V_6
	IL_016e:            Temp_32=Temp_31[V_6];                                       //callvirt				Reflector::CodeModel::IModule^ Reflector::CodeModel::IModuleCollection::get_Item(System::Int32)
	IL_0173:            Temp_33=Temp_32->Location;                                  //callvirt				System::String^ Reflector::CodeModel::IModule::get_Location()
	IL_0178:            Temp_34=System::Environment::ExpandEnvironmentVariables(Temp_33);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_017d:            Temp_35=(V_4 == Temp_34);                                   //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0182:            if(!Temp_35)goto IL_040a;                                   //brfalse				IL_040a
	IL_0187:                                                                        //ldc.i4				0x10
	IL_018c:            V_8=16;                                                     //stloc				V_8
	IL_0190:            /*goto IL_000e;*/goto IL_0195;                              //br				IL_000e
	IL_0195:            goto IL_0423;                                               //br				IL_0423
	IL_019a:                                                                        //ldloc.1
	IL_019b:                                                                        //ldloc.0
	IL_019c:                                                                        //ldloc.2
	IL_019d:            Temp_12=V_2->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_01a2:            Temp_13=V_0->LoadFile(Temp_12);                             //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_01a7:            V_1->ActiveItem=safe_cast<System::Object^>(Temp_13);        //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_01ac:                                                                        //ldarg.0
	IL_01ad:            Temp_14=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_01b2:            Temp_14->Activate();                                        //callvirt				void Reflector::IWindowManager::Activate()
	IL_01b7:                                                                        //ldarg.2
	IL_01b8:                                                                        //ldc.i4.1
	IL_01b9:            A_1->M_x1(true);                                            //callvirt				void Root::T_x72::M_x1(System::Boolean)
	IL_01be:            return;                                                     //ret
	IL_01bf:                                                                        //ldc.i4				0x1c
	IL_01c4:            V_8=28;                                                     //stloc				V_8
	IL_01c8:            /*goto IL_000e;*/goto IL_01cd;                              //br				IL_000e
	IL_01cd:                                                                        //ldloc.s				V_7
	IL_01cf:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x713B\x5B3D\x343F\x2A41\x2B43\x2245\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B"
	IL_01d4:                                                                        //ldloc				V_9
	IL_01d8:            Temp_48=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x713B\x5B3D\x343F\x2A41\x2B43\x2245\x0C47\x2F49\x2F4B\x224D\x314F\x2051\x3553\x2255\x3157\x3559\x325B",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01dd:            if(V_7==Temp_48)goto IL_0451;                               //beq				IL_0451
	IL_01e2:                                                                        //ldc.i4				0x1a
	IL_01e7:            V_8=26;                                                     //stloc				V_8
	IL_01eb:            /*goto IL_000e;*/goto IL_01f0;                              //br				IL_000e
	IL_01f0:            goto IL_02ab;                                               //br				IL_02ab
	IL_01f5:                                                                        //ldc.i4				0x2
	IL_01fa:            V_8=2;                                                      //stloc				V_8
	IL_01fe:            /*goto IL_000e;*/goto IL_0203;                              //br				IL_000e
	IL_0203:                                                                        //ldloc.s				V_6
	IL_0205:                                                                        //ldloc.0
	IL_0206:            Temp_7=V_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_020b:                                                                        //ldloc.s				V_5
	IL_020d:            Temp_8=Temp_7[V_5];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0212:            Temp_9=Temp_8->Modules;                                     //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0217:            Temp_10=safe_cast<System::Collections::ICollection^>(Temp_9)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_021c:            if(V_6<Temp_10)goto IL_014a;                                //blt				IL_014a
	IL_0221:                                                                        //ldc.i4				0xf
	IL_0226:            V_8=15;                                                     //stloc				V_8
	IL_022a:            /*goto IL_000e;*/goto IL_022f;                              //br				IL_000e
	IL_022f:            goto IL_02e1;                                               //br				IL_02e1
	IL_0234:                                                                        //ldc.i4				0xd
	IL_0239:            V_8=13;                                                     //stloc				V_8
	IL_023d:            /*goto IL_000e;*/goto IL_0242;                              //br				IL_000e
	IL_0242:                                                                        //ldloc.s				V_7
	IL_0244:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x683B\x473D\x303F\x2741\x0043\x2345\x2B47\x2649\x2D4B\x3C4D\x314F\x2651\x3D53\x3955\x3657"
	IL_0249:                                                                        //ldloc				V_9
	IL_024d:            Temp_36=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x683B\x473D\x303F\x2741\x0043\x2345\x2B47\x2649\x2D4B\x3C4D\x314F\x2651\x3D53\x3955\x3657",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0252:            if(V_7==Temp_36)goto IL_0451;                               //beq				IL_0451
	IL_0257:                                                                        //ldc.i4				0x12
	IL_025c:            V_8=18;                                                     //stloc				V_8
	IL_0260:            /*goto IL_000e;*/goto IL_0265;                              //br				IL_000e
	IL_0265:            goto IL_0368;                                               //br				IL_0368
	IL_026a:                                                                        //ldc.i4.0
	IL_026b:            V_6=0;                                                      //stloc.s				V_6
	IL_026d:                                                                        //ldc.i4				0x11
	IL_0272:            V_8=17;                                                     //stloc				V_8
	IL_0276:            /*goto IL_000e;*/goto IL_027b;                              //br				IL_000e
	IL_027b:            goto IL_01f5;                                               //br				IL_01f5
	IL_0280:                                                                        //ldc.i4				0x9
	IL_0285:            V_8=9;                                                      //stloc				V_8
	IL_0289:            /*goto IL_000e;*/goto IL_028e;                              //br				IL_000e
	IL_028e:                                                                        //ldloc.s				V_5
	IL_0290:                                                                        //ldc.i4.0
	IL_0291:            if(V_5>=0)goto IL_026a;                                     //bge.s				IL_026a
	IL_0293:                                                                        //ldc.i4				0x1
	IL_0298:            V_8=1;                                                      //stloc				V_8
	IL_029c:            /*goto IL_000e;*/goto IL_02a1;                              //br				IL_000e
	IL_02a1:            goto IL_02f7;                                               //br.s				IL_02f7
	IL_02a3:                                                                        //ldarg.2
	IL_02a4:                                                                        //ldc.i4.1
	IL_02a5:            A_1->M_x1(true);                                            //callvirt				void Root::T_x72::M_x1(System::Boolean)
	IL_02aa:            return;                                                     //ret
	IL_02ab:                                                                        //ldc.i4				0x17
	IL_02b0:            V_8=23;                                                     //stloc				V_8
	IL_02b4:            /*goto IL_000e;*/goto IL_02b9;                              //br				IL_000e
	IL_02b9:                                                                        //ldloc.s				V_7
	IL_02bb:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x6C3B\x4C3D\x2F3F\x3241\x2143\x3445\x3C47\x3349\x084B\x2B4D\x334F\x3E51\x3553\x2455\x3957\x2E59\x355B\x315D\x0E5F"
	IL_02c0:                                                                        //ldloc				V_9
	IL_02c4:            Temp_45=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x6C3B\x4C3D\x2F3F\x3241\x2143\x3445\x3C47\x3349\x084B\x2B4D\x334F\x3E51\x3553\x2455\x3957\x2E59\x355B\x315D\x0E5F",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c9:            if(V_7==Temp_45)goto IL_0451;                               //beq				IL_0451
	IL_02ce:                                                                        //ldc.i4				0x18
	IL_02d3:            V_8=24;                                                     //stloc				V_8
	IL_02d7:            /*goto IL_000e;*/goto IL_02dc;                              //br				IL_000e
	IL_02dc:            goto IL_03a1;                                               //br				IL_03a1
	IL_02e1:                                                                        //ldloc.s				V_5
	IL_02e3:                                                                        //ldc.i4.1
	IL_02e4:                                                                        //sub
	IL_02e5:            V_5=(V_5 - 1);                                              //stloc.s				V_5
	IL_02e7:                                                                        //ldc.i4				0x15
	IL_02ec:            V_8=21;                                                     //stloc				V_8
	IL_02f0:            /*goto IL_000e;*/goto IL_02f5;                              //br				IL_000e
	IL_02f5:            goto IL_0280;                                               //br.s				IL_0280
	IL_02f7:                                                                        //ldarg.0
	IL_02f8:            Temp_6=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_02fd:            Temp_6->Activate();                                         //callvirt				void Reflector::IWindowManager::Activate()
	IL_0302:            return;                                                     //ret
	IL_0303:                                                                        //ldc.i4				0x14
	IL_0308:            V_8=20;                                                     //stloc				V_8
	IL_030c:            /*goto IL_000e;*/goto IL_0311;                              //br				IL_000e
	IL_0311:                                                                        //ldloc.s				V_7
	IL_0313:                                                                        //ldstr				L"\x652F\x5C31\x5833\x5935\x5937\x5E39\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349"
	IL_0318:                                                                        //ldloc				V_9
	IL_031c:            Temp_40=a(L"\x652F\x5C31\x5833\x5935\x5937\x5E39\x7D3B\x4D3D\x333F\x2741\x2943\x2445\x2447\x3349",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0321:            if(V_7==Temp_40)goto IL_047d;                               //beq				IL_047d
	IL_0326:                                                                        //ldc.i4				0x1d
	IL_032b:            V_8=29;                                                     //stloc				V_8
	IL_032f:            /*goto IL_000e;*/goto IL_0334;                              //br				IL_000e
	IL_0334:            goto IL_0450;                                               //br				IL_0450
	IL_0339:                                                                        //ldc.i4				0x1b
	IL_033e:            V_8=27;                                                     //stloc				V_8
	IL_0342:            /*goto IL_000e;*/goto IL_0347;                              //br				IL_000e
	IL_0347:                                                                        //ldloc.2
	IL_0348:            Temp_47=V_2->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_034d:                                                                        //dup
	IL_034e:            V_7=Temp_47;                                                //stloc.s				V_7
	IL_0350:            if(V_7==nullptr)goto IL_04eb;                               //brfalse				IL_04eb
	IL_0355:                                                                        //ldc.i4				0xe
	IL_035a:            V_8=14;                                                     //stloc				V_8
	IL_035e:            /*goto IL_000e;*/goto IL_0363;                              //br				IL_000e
	IL_0363:            goto IL_04ac;                                               //br				IL_04ac
	IL_0368:                                                                        //ldc.i4				0x8
	IL_036d:            V_8=8;                                                      //stloc				V_8
	IL_0371:            /*goto IL_000e;*/goto IL_0376;                              //br				IL_000e
	IL_0376:                                                                        //ldloc.s				V_7
	IL_0378:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x7A3B\x573D\x253F\x2E41\x2043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459"
	IL_037d:                                                                        //ldloc				V_9
	IL_0381:            Temp_28=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x7A3B\x573D\x253F\x2E41\x2043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0386:            if(V_7==Temp_28)goto IL_0451;                               //beq				IL_0451
	IL_038b:            goto IL_038e;                                               //br.s				IL_038e
	IL_038d:                                                                        //break
	IL_038e:                                                                        //ldc.i4				0xb
	IL_0393:            V_8=11;                                                     //stloc				V_8
	IL_0397:            /*goto IL_000e;*/goto IL_039c;                              //br				IL_000e
	IL_039c:            goto IL_01bf;                                               //br				IL_01bf
	IL_03a1:                                                                        //ldc.i4				0x4
	IL_03a6:            V_8=4;                                                      //stloc				V_8
	IL_03aa:            /*goto IL_000e;*/goto IL_03af;                              //br				IL_000e
	IL_03af:                                                                        //ldloc.s				V_7
	IL_03b1:                                                                        //ldstr				L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x793B\x483D\x253F\x2C41\x3043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459"
	IL_03b6:                                                                        //ldloc				V_9
	IL_03ba:            Temp_15=a(L"\x632F\x5731\x5833\x5335\x5B37\x4E39\x793B\x483D\x253F\x2C41\x3043\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03bf:            if(V_7==Temp_15)goto IL_0451;                               //beq				IL_0451
	IL_03c4:                                                                        //ldc.i4				0x16
	IL_03c9:            V_8=22;                                                     //stloc				V_8
	IL_03cd:            /*goto IL_000e;*/goto IL_03d2;                              //br				IL_000e
	IL_03d2:            goto IL_03d4;                                               //br.s				IL_03d4
	IL_03d4:                                                                        //ldc.i4				0x3
	IL_03d9:            V_8=3;                                                      //stloc				V_8
	IL_03dd:            /*goto IL_000e;*/goto IL_03e2;                              //br				IL_000e
	IL_03e2:                                                                        //ldloc.s				V_7
	IL_03e4:                                                                        //ldstr				L"\x7C2F\x5D31\x5533\x5235\x7937\x4939\x4F3B\x5B3D\x2D3F\x2041\x2843\x3F45"
	IL_03e9:                                                                        //ldloc				V_9
	IL_03ed:            Temp_11=a(L"\x7C2F\x5D31\x5533\x5235\x7937\x4939\x4F3B\x5B3D\x2D3F\x2041\x2843\x3F45",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03f2:            if(V_7==Temp_11)goto IL_019a;                               //beq				IL_019a
	IL_03f7:                                                                        //ldc.i4				0x5
	IL_03fc:            V_8=5;                                                      //stloc				V_8
	IL_0400:            /*goto IL_000e;*/goto IL_0405;                              //br				IL_000e
	IL_0405:            goto IL_0303;                                               //br				IL_0303
	IL_040a:                                                                        //ldloc.s				V_6
	IL_040c:                                                                        //ldc.i4.1
	IL_040d:                                                                        //add
	IL_040e:            V_6=(V_6 + 1);                                              //stloc.s				V_6
	IL_0410:                                                                        //ldc.i4				0x6
	IL_0415:            V_8=6;                                                      //stloc				V_8
	IL_0419:            /*goto IL_000e;*/goto IL_041e;                              //br				IL_000e
	IL_041e:            goto IL_01f5;                                               //br				IL_01f5
	IL_0423:                                                                        //ldloc.0
	IL_0424:                                                                        //ldloc.0
	IL_0425:            Temp_38=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_042a:                                                                        //ldloc.s				V_5
	IL_042c:            Temp_39=Temp_38[V_5];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0431:            V_0->Unload(Temp_39);                                       //callvirt				void Reflector::CodeModel::IAssemblyManager::Unload(Reflector::CodeModel::IAssembly^)
	IL_0436:                                                                        //ldarg.2
	IL_0437:                                                                        //ldc.i4.1
	IL_0438:            A_1->M_x1(true);                                            //callvirt				void Root::T_x72::M_x1(System::Boolean)
	IL_043d:                                                                        //ldc.i4				0x13
	IL_0442:            V_8=19;                                                     //stloc				V_8
	IL_0446:            /*goto IL_000e;*/goto IL_044b;                              //br				IL_000e
	IL_044b:            goto IL_02e1;                                               //br				IL_02e1
	IL_0450:            return;                                                     //ret
	IL_0451:                                                                        //ldloc.2
	IL_0452:            Temp_16=V_2->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_0457:            Temp_17=gcnew Root::T_x111(Temp_16);                        //newobj				void Root::T_x111::.ctor(System::String^)
	IL_045c:            V_3=Temp_17;                                                //stloc.3
	IL_045d:                                                                        //ldloc.1
	IL_045e:                                                                        //ldloc.3
	IL_045f:                                                                        //ldloc.0
	IL_0460:            Temp_18=V_3->M_x1(V_0);                                     //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_0465:            V_1->ActiveItem=Temp_18;                                    //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_046a:                                                                        //ldarg.0
	IL_046b:            Temp_19=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0470:            Temp_19->Activate();                                        //callvirt				void Reflector::IWindowManager::Activate()
	IL_0475:                                                                        //ldarg.2
	IL_0476:                                                                        //ldc.i4.1
	IL_0477:            A_1->M_x1(true);                                            //callvirt				void Root::T_x72::M_x1(System::Boolean)
	IL_047c:            return;                                                     //ret
	IL_047d:                                                                        //ldloc.2
	IL_047e:            Temp_41=V_2->ReadLine();                                    //callvirt				System::String^ System::IO::TextReader::ReadLine()
	IL_0483:            Temp_42=System::Environment::ExpandEnvironmentVariables(Temp_41);//call				System::String^ System::Environment::ExpandEnvironmentVariables(System::String^)
	IL_0488:            V_4=Temp_42;                                                //stloc.s				V_4
	IL_048a:                                                                        //ldloc.0
	IL_048b:            Temp_43=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0490:            Temp_44=safe_cast<System::Collections::ICollection^>(Temp_43)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0495:                                                                        //ldc.i4.1
	IL_0496:                                                                        //sub
	IL_0497:            V_5=(Temp_44 - 1);                                          //stloc.s				V_5
	IL_0499:                                                                        //ldc.i4				0xc
	IL_049e:            V_8=12;                                                     //stloc				V_8
	IL_04a2:            /*goto IL_000e;*/goto IL_04a7;                              //br				IL_000e
	IL_04a7:            goto IL_0280;                                               //br				IL_0280
	IL_04ac:                                                                        //ldloc.s				V_7
	IL_04ae:            Temp_37=System::String::IsInterned(V_7);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_04b3:            V_7=Temp_37;                                                //stloc.s				V_7
	IL_04b5:                                                                        //ldc.i4				0x19
	IL_04ba:            V_8=25;                                                     //stloc				V_8
	IL_04be:            /*goto IL_000e;*/goto IL_04c3;                              //br				IL_000e
	IL_04c3:                                                                        //ldloc.s				V_7
	IL_04c5:                                                                        //ldstr				L"\x712F\x4431\x5533\x5F35\x5437\x5B39\x5E3B\x523D\x253F"
	IL_04ca:                                                                        //ldloc				V_9
	IL_04ce:            Temp_46=a(L"\x712F\x4431\x5533\x5F35\x5437\x5B39\x5E3B\x523D\x253F",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04d3:            if(V_7==Temp_46)goto IL_02a3;                               //beq				IL_02a3
	IL_04d8:                                                                        //ldc.i4				0x0
	IL_04dd:            V_8=0;                                                      //stloc				V_8
	IL_04e1:            /*goto IL_000e;*/goto IL_04e6;                              //br				IL_000e
	IL_04e6:            goto IL_0234;                                               //br				IL_0234
	IL_04eb:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Type^ Temp_2 = nullptr;
	System::Reflection::Assembly^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	array<System::Object^>^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	//local variables.
	System::Windows::Forms::Form^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_3=15;                                                     //stloc				V_3
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0043;case 1:goto IL_0068;case 2:goto IL_00d7;case 3:goto IL_0054;case 4:goto IL_00f1;case 5:goto IL_009f;};//switch				(IL_0043,IL_0068,IL_00d7,IL_0054,IL_00f1,IL_009f)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0032:                                                                        //isinst				System::Windows::Forms::Form
	IL_0037:            V_0=dynamic_cast<System::Windows::Forms::Form^>(Temp_0);    //stloc.0
	IL_0038:                                                                        //ldc.i4				0x0
	IL_003d:            V_2=0;                                                      //stloc				V_2
	IL_0041:            /*goto IL_000b;*/goto IL_0043;                              //br.s				IL_000b
	IL_0043:                                                                        //ldloc.0
	IL_0044:            if(V_0==nullptr)goto IL_00f6;                               //brfalse				IL_00f6
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_2=3;                                                      //stloc				V_2
	IL_0052:            /*goto IL_000b;*/goto IL_0054;                              //br.s				IL_000b
	IL_0054:            goto IL_00a1;                                               //br.s				IL_00a1
	IL_0056:                                                                        //ldloc.0
	IL_0057:                                                                        //ldloc.1
	IL_0058:            V_0->Text=V_1;                                              //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_005d:                                                                        //ldc.i4				0x1
	IL_0062:            V_2=1;                                                      //stloc				V_2
	IL_0066:            /*goto IL_000b;*/goto IL_0068;                              //br.s				IL_000b
	IL_0068:            goto IL_00f6;                                               //br				IL_00f6
	IL_006d:                                                                        //ldloc.1
	IL_006e:                                                                        //ldstr				L"\x0D2C\x022E\x1130\x6832"
	IL_0073:                                                                        //ldloc				V_3
	IL_0077:            Temp_7=a(L"\x0D2C\x022E\x1130\x6832",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007c:                                                                        //ldarg.1
	IL_007d:                                                                        //ldstr				L"\x702C"
	IL_0082:                                                                        //ldloc				V_3
	IL_0086:            Temp_8=a(L"\x702C",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008b:            Temp_9=System::String::Concat(V_1,Temp_7,A_0,Temp_8);       //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_0090:            V_1=Temp_9;                                                 //stloc.1
	IL_0091:                                                                        //ldc.i4				0x5
	IL_0096:            V_2=5;                                                      //stloc				V_2
	IL_009a:            /*goto IL_000b;*/goto IL_009f;                              //br				IL_000b
	IL_009f:            goto IL_0056;                                               //br.s				IL_0056
	IL_00a1:                                                                        //ldarg.0
	IL_00a2:            Temp_2=this->GetType();                                     //call				System::Type^ System::Object::GetType()
	IL_00a7:            Temp_3=Temp_2->Assembly;                                    //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_00ac:                                                                        //ldtoken				System::Reflection::AssemblyTitleAttribute
	IL_00b1:            Temp_4=System::Reflection::AssemblyTitleAttribute::typeid;  //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00b6:                                                                        //ldc.i4.0
	IL_00b7:            Temp_5=Temp_3->GetCustomAttributes(Temp_4,false);           //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_00bc:                                                                        //ldc.i4.0
	IL_00bd:                                                                        //ldelem.ref
	IL_00be:                                                                        //isinst				System::Reflection::AssemblyTitleAttribute
	IL_00c3:            Temp_6=dynamic_cast<System::Reflection::AssemblyTitleAttribute^>(Temp_5[0])->Title;//callvirt				System::String^ System::Reflection::AssemblyTitleAttribute::get_Title()
	IL_00c8:            V_1=Temp_6;                                                 //stloc.1
	IL_00c9:                                                                        //ldc.i4				0x2
	IL_00ce:            V_2=2;                                                      //stloc				V_2
	IL_00d2:            /*goto IL_000b;*/goto IL_00d7;                              //br				IL_000b
	IL_00d7:                                                                        //ldarg.1
	IL_00d8:            Temp_1=A_0->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_00dd:                                                                        //ldc.i4.0
	IL_00de:            if(Temp_1<=0)goto IL_0056;                                  //ble				IL_0056
	IL_00e3:                                                                        //ldc.i4				0x4
	IL_00e8:            V_2=4;                                                      //stloc				V_2
	IL_00ec:            /*goto IL_000b;*/goto IL_00f1;                              //br				IL_000b
	IL_00f1:            goto IL_006d;                                               //br				IL_006d
	IL_00f6:                                                                        //ldc.i4.3
	IL_00f7:                                                                        //dup
	IL_00f8:                                                                        //dup
	IL_00f9:                                                                        //ldc.i4.4
	IL_00fa:                                                                        //sub
	IL_00fb:                                                                        //blt				IL_00f7
	IL_0100:                                                                        //pop
	IL_0101:            return;                                                     //ret

}
inline System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^ A_0)
//System::IServiceProvider^::GetService by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::IDictionary^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				System::Collections::IDictionary^ Reflector::Application::ApplicationManager F_x2
	IL_0006:                                                                        //ldarg.1
	IL_0007:            Temp_1=Temp_0[safe_cast<System::Object^>(A_0)];             //callvirt				System::Object^ System::Collections::IDictionary::get_Item(System::Object^)
	IL_000c:            return Temp_1;                                              //ret

}
inline void Reflector::Application::ApplicationManager::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowManager^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_0017;                            //brfalse.s				IL_0017
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0010:            Temp_1->Close();                                            //callvirt				void Reflector::IWindowManager::Close()
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowCollection^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IWindow^ Temp_3 = nullptr;
	Reflector::IWindowManager^ Temp_4 = nullptr;
	Reflector::IWindowCollection^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::IWindow^ Temp_7 = nullptr;
	System::Windows::Forms::Control^ Temp_8 = nullptr;
	//local variables.
	Root::T_x89^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_1=11;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4.2
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.2
	IL_000d:                                                                        //add
	IL_000e:                                                                        //bgt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_001a:            Temp_1=Temp_0->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_001f:                                                                        //ldstr				L"\x7A28\x4E2A\x4C2C\x5D2E\x5230\x5B32\x6234\x5E36\x5738\x5F3A\x523C\x483E"
	IL_0024:                                                                        //ldloc				V_1
	IL_0028:            Temp_2=a(L"\x7A28\x4E2A\x4C2C\x5D2E\x5230\x5B32\x6234\x5E36\x5738\x5F3A\x523C\x483E",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_002d:            Temp_3=Temp_1[Temp_2];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0032:                                                                        //ldc.i4.1
	IL_0033:            Temp_3->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_4=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_003e:            Temp_5=Temp_4->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0043:                                                                        //ldstr				L"\x7A28\x4E2A\x4C2C\x5D2E\x5230\x5B32\x6234\x5E36\x5738\x5F3A\x523C\x483E"
	IL_0048:                                                                        //ldloc				V_1
	IL_004c:            Temp_6=a(L"\x7A28\x4E2A\x4C2C\x5D2E\x5230\x5B32\x6234\x5E36\x5738\x5F3A\x523C\x483E",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0051:            Temp_7=Temp_5[Temp_6];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0056:            Temp_8=Temp_7->Content;                                     //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_005b:                                                                        //castclass				Root::T_x89
	IL_0060:            V_0=safe_cast<Root::T_x89^>(Temp_8);                        //stloc.0
	IL_0061:                                                                        //ldloc.0
	IL_0062:            V_0->M_x8();                                                //callvirt				void Root::T_x89::M_x8()
	IL_0067:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x11(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0006:            Temp_1=Temp_0->Focus();                                     //callvirt				System::Boolean System::Windows::Forms::Control::Focus()
	IL_000b:                                                                        //pop
	IL_000c:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x67^ Temp_0 = nullptr;
	System::Windows::Forms::DialogResult Temp_1 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Root::T_x67^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x67();                                 //newobj				void Root::T_x67::.ctor()
	IL_0005:            V_0=Temp_0;                                                 //stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:            Temp_1=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_000c:                                                                        //pop
	IL_000d:            return;                                                     //ret

}
inline System::String^ Reflector::Application::ApplicationManager::M_x12(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::IO::StringWriter^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Exception^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Exception^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	//local variables.
	System::IO::StringWriter^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_4=17;                                                     //stloc				V_4
	IL_0009:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_000e:            Temp_1=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_0));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_0013:            V_0=Temp_1;                                                 //stloc.0
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:            goto IL_0019;                                               //br.s				IL_0019
	IL_0018:                                                                        //break
	IL_0019:            goto IL_0040;                                               //br.s				IL_0040
	IL_001b:                                                                        //ldloc				V_2
	IL_001f:            switch(V_2){case 0:goto IL_0128;case 1:goto IL_0111;case 2:goto IL_0074;case 3:goto IL_0087;case 4:goto IL_00a3;case 5:goto IL_00fb;case 6:goto IL_00eb;};//switch				(IL_0128,IL_0111,IL_0074,IL_0087,IL_00a3,IL_00fb,IL_00eb)
	IL_0040:                                                                        //ldloc.0
	IL_0041:                                                                        //ldarg.1
	IL_0042:            Temp_2=A_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_0047:            V_0->WriteLine(Temp_2);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_004c:                                                                        //ldloc.0
	IL_004d:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0052:                                                                        //ldloc.0
	IL_0053:                                                                        //ldarg.1
	IL_0054:            Temp_3=A_0->GetType();                                      //callvirt				System::Type^ System::Object::GetType()
	IL_0059:            Temp_4=Temp_3->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_005e:            V_0->WriteLine(Temp_4);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0063:                                                                        //ldloc.0
	IL_0064:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_0069:                                                                        //ldc.i4				0x2
	IL_006e:            V_2=2;                                                      //stloc				V_2
	IL_0072:            /*goto IL_001b;*/goto IL_0074;                              //br.s				IL_001b
	IL_0074:                                                                        //ldarg.1
	IL_0075:            Temp_8=A_0->StackTrace;                                     //callvirt				System::String^ System::Exception::get_StackTrace()
	IL_007a:            if(Temp_8==nullptr)goto IL_00ed;                            //brfalse.s				IL_00ed
	IL_007c:                                                                        //ldc.i4				0x3
	IL_0081:            V_2=3;                                                      //stloc				V_2
	IL_0085:            /*goto IL_001b;*/goto IL_0087;                              //br.s				IL_001b
	IL_0087:            goto IL_0089;                                               //br.s				IL_0089
	IL_0089:                                                                        //ldloc.0
	IL_008a:                                                                        //ldarg.1
	IL_008b:            Temp_9=A_0->StackTrace;                                     //callvirt				System::String^ System::Exception::get_StackTrace()
	IL_0090:            V_0->WriteLine(Temp_9);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_0095:                                                                        //ldc.i4				0x4
	IL_009a:            V_2=4;                                                      //stloc				V_2
	IL_009e:            /*goto IL_001b;*/goto IL_00a3;                              //br				IL_001b
	IL_00a3:            goto IL_00ed;                                               //br.s				IL_00ed
	IL_00a5:                                                                        //ldloc.0
	IL_00a6:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_00ab:                                                                        //ldloc.0
	IL_00ac:                                                                        //ldstr				L"\x662E\x5F30\x5D32\x5034\x4536\x7C38\x433A\x5E3C\x5A3E\x3140\x3742\x2C44\x2846\x2748\x714A"
	IL_00b1:                                                                        //ldloc				V_4
	IL_00b5:            Temp_5=a(L"\x662E\x5F30\x5D32\x5034\x4536\x7C38\x433A\x5E3C\x5A3E\x3140\x3742\x2C44\x2846\x2748\x714A",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ba:            V_0->WriteLine(Temp_5);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_00bf:                                                                        //ldloc.0
	IL_00c0:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:                                                                        //ldarg.1
	IL_00c8:            Temp_6=A_0->InnerException;                                 //callvirt				System::Exception^ System::Exception::get_InnerException()
	IL_00cd:            Temp_7=this->M_x12(Temp_6);                                 //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::Exception^)
	IL_00d2:            V_0->WriteLine(Temp_7);                                     //callvirt				void System::IO::TextWriter::WriteLine(System::String^)
	IL_00d7:                                                                        //ldloc.0
	IL_00d8:            V_0->WriteLine();                                           //callvirt				void System::IO::TextWriter::WriteLine()
	IL_00dd:                                                                        //ldc.i4				0x6
	IL_00e2:            V_2=6;                                                      //stloc				V_2
	IL_00e6:            /*goto IL_001b;*/goto IL_00eb;                              //br				IL_001b
	IL_00eb:            goto IL_0113;                                               //br.s				IL_0113
	IL_00ed:                                                                        //ldc.i4				0x5
	IL_00f2:            V_2=5;                                                      //stloc				V_2
	IL_00f6:            /*goto IL_001b;*/goto IL_00fb;                              //br				IL_001b
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            Temp_10=A_0->InnerException;                                //callvirt				System::Exception^ System::Exception::get_InnerException()
	IL_0101:            if(Temp_10==nullptr)goto IL_0113;                           //brfalse.s				IL_0113
	IL_0103:                                                                        //ldc.i4				0x1
	IL_0108:            V_2=1;                                                      //stloc				V_2
	IL_010c:            /*goto IL_001b;*/goto IL_0111;                              //br				IL_001b
	IL_0111:            goto IL_00a5;                                               //br.s				IL_00a5
	IL_0113:                                                                        //ldloc.0
	IL_0114:            Temp_11=V_0->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_0119:            V_1=Temp_11;                                                //stloc.1
	IL_011a:                                                                        //ldc.i4				0x0
	IL_011f:            V_2=0;                                                      //stloc				V_2
	IL_0123:            /*goto IL_001b;*/goto IL_0128;                              //br				IL_001b
	IL_0128:            goto IL_0170;                                               //leave.s				IL_0170
	                    ;}
	                    finally{
	IL_012a:                                                                        //ldc.i4				0x1
	IL_012f:            V_3=1;                                                      //stloc				V_3
	IL_0133:            /*goto IL_0137;*/goto IL_0135;                              //br.s				IL_0137
	IL_0135:            goto IL_014c;                                               //br.s				IL_014c
	IL_0137:                                                                        //ldloc				V_3
	IL_013b:            switch(V_3){case 0:goto IL_015a;case 1:goto IL_0135;case 2:goto IL_016d;};//switch				(IL_015a,IL_0135,IL_016d)
	IL_014c:                                                                        //ldloc.0
	IL_014d:            if(V_0==nullptr)goto IL_016f;                               //brfalse.s				IL_016f
	IL_014f:                                                                        //ldc.i4				0x0
	IL_0154:            V_3=0;                                                      //stloc				V_3
	IL_0158:            /*goto IL_0137;*/goto IL_015a;                              //br.s				IL_0137
	IL_015a:            goto IL_015c;                                               //br.s				IL_015c
	IL_015c:                                                                        //ldloc.0
	IL_015d:            /*safe_cast<System::IDisposable^>(V_0)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_0162:                                                                        //ldc.i4				0x2
	IL_0167:            V_3=2;                                                      //stloc				V_3
	IL_016b:            /*goto IL_0137;*/goto IL_016d;                              //br.s				IL_0137
	IL_016d:            goto IL_016f;                                               //br.s				IL_016f
	IL_016f:                                                                        //endfinally
	                    ;}
	IL_0170:                                                                        //ldloc.1
	IL_0171:            return V_1;                                                 //ret

}
inline void Reflector::Application::ApplicationManager::M_x12(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_2 = nullptr;
	System::Collections::IEnumerator^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Boolean Temp_7 = false;
	System::Object^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	//local variables.
	Reflector::ICommandBarMenu^ V_0 = nullptr;
	Root::T_x107^ V_1 = nullptr;
	Reflector::ICommandBarItem^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:                                                                        //castclass				Reflector::ICommandBarMenu
	IL_0006:            V_0=safe_cast<Reflector::ICommandBarMenu^>(A_0);            //stloc.0
	IL_0007:                                                                        //ldarg.0
	IL_0008:                                                                        //ldtoken				Root::T_x107
	IL_000d:            Temp_0=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0012:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0017:                                                                        //castclass				Root::T_x107
	IL_001c:            V_1=safe_cast<Root::T_x107^>(Temp_1);                       //stloc.1
	IL_001d:                                                                        //ldloc.0
	IL_001e:            Temp_2=safe_cast<Reflector::ICommandBar^>(V_0)->Items;      //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0023:            Temp_3=safe_cast<System::Collections::IEnumerable^>(Temp_2)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0028:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_002a:            /*goto IL_002c;*/goto IL_002A01;                            //br.s				IL_002c
	IL_002A01:          try{
	IL_002c:                                                                        //ldc.i4				0x6
	IL_0031:            V_6=6;                                                      //stloc				V_6
	IL_0035:            /*goto IL_0039;*/goto IL_0037;                              //br.s				IL_0039
	IL_0037:            goto IL_0066;                                               //br.s				IL_0066
	IL_0039:                                                                        //ldloc				V_6
	IL_003d:            switch(V_6){case 0:goto IL_0108;case 1:goto IL_0093;case 2:goto IL_0080;case 3:goto IL_00df;case 4:goto IL_00b4;case 5:goto IL_0118;case 6:goto IL_0037;case 7:goto IL_00a0;case 8:goto IL_00c4;};//switch				(IL_0108,IL_0093,IL_0080,IL_00df,IL_00b4,IL_0118,IL_0037,IL_00a0,IL_00c4)
	IL_0066:            goto IL_0095;                                               //br.s				IL_0095
	IL_0068:                                                                        //ldloc.s				V_4
	IL_006a:            Temp_8=V_4->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006f:                                                                        //castclass				Reflector::ICommandBarItem
	IL_0074:            V_2=safe_cast<Reflector::ICommandBarItem^>(Temp_8);         //stloc.2
	IL_0075:                                                                        //ldc.i4				0x2
	IL_007a:            V_6=2;                                                      //stloc				V_6
	IL_007e:            /*goto IL_0039;*/goto IL_0080;                              //br.s				IL_0039
	IL_0080:                                                                        //ldloc.2
	IL_0081:            Temp_4=V_2->Value;                                          //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0086:            if(Temp_4==nullptr)goto IL_0095;                            //brfalse.s				IL_0095
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_6=1;                                                      //stloc				V_6
	IL_0091:            /*goto IL_0039;*/goto IL_0093;                              //br.s				IL_0039
	IL_0093:            goto IL_00b6;                                               //br.s				IL_00b6
	IL_0095:                                                                        //ldc.i4				0x7
	IL_009a:            V_6=7;                                                      //stloc				V_6
	IL_009e:            /*goto IL_0039;*/goto IL_00a0;                              //br.s				IL_0039
	IL_00a0:                                                                        //ldloc.s				V_4
	IL_00a2:            Temp_7=V_4->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a7:            if(Temp_7)goto IL_0068;                                     //brtrue.s				IL_0068
	IL_00a9:                                                                        //ldc.i4				0x4
	IL_00ae:            V_6=4;                                                      //stloc				V_6
	IL_00b2:            /*goto IL_0039;*/goto IL_00b4;                              //br.s				IL_0039
	IL_00b4:            goto IL_010a;                                               //br.s				IL_010a
	IL_00b6:                                                                        //ldc.i4				0x8
	IL_00bb:            V_6=8;                                                      //stloc				V_6
	IL_00bf:            /*goto IL_0039;*/goto IL_00c4;                              //br				IL_0039
	IL_00c4:                                                                        //ldloc.2
	IL_00c5:            Temp_9=V_2->Value;                                          //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_00ca:                                                                        //isinst				System::String
	IL_00cf:            if(dynamic_cast<System::String^>(Temp_9)==nullptr)goto IL_0095;//brfalse.s				IL_0095
	IL_00d1:                                                                        //ldc.i4				0x3
	IL_00d6:            V_6=3;                                                      //stloc				V_6
	IL_00da:            /*goto IL_0039;*/goto IL_00df;                              //br				IL_0039
	IL_00df:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_00e1:                                                                        //ldloc.2
	IL_00e2:            Temp_5=V_2->Value;                                          //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_00e7:                                                                        //castclass				System::String
	IL_00ec:            V_3=safe_cast<System::String^>(Temp_5);                     //stloc.3
	IL_00ed:                                                                        //ldloc.2
	IL_00ee:                                                                        //ldloc.1
	IL_00ef:                                                                        //ldloc.3
	IL_00f0:            Temp_6=safe_cast<Root::T_x24^>(V_1)->M_x2(V_3);             //callvirt				System::Boolean Root::T_x24::M_x2(System::String^)
	IL_00f5:            V_2->Enabled=Temp_6;                                        //callvirt				void Reflector::ICommandBarItem::set_Enabled(System::Boolean)
	IL_00fa:                                                                        //ldc.i4				0x0
	IL_00ff:            V_6=0;                                                      //stloc				V_6
	IL_0103:            /*goto IL_0039;*/goto IL_0108;                              //br				IL_0039
	IL_0108:            goto IL_0095;                                               //br.s				IL_0095
	IL_010a:                                                                        //ldc.i4				0x5
	IL_010f:            V_6=5;                                                      //stloc				V_6
	IL_0113:            /*goto IL_0039;*/goto IL_0118;                              //br				IL_0039
	IL_0118:            goto IL_016b;                                               //leave.s				IL_016b
	                    ;}
	                    finally{
	IL_011a:            goto IL_0131;                                               //br.s				IL_0131
	IL_011c:                                                                        //ldloc				V_7
	IL_0120:            switch(V_7){case 0:goto IL_0154;case 1:goto IL_0145;case 2:goto IL_0168;};//switch				(IL_0154,IL_0145,IL_0168)
	IL_0131:                                                                        //ldloc.s				V_4
	IL_0133:                                                                        //isinst				System::IDisposable
	IL_0138:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_013a:                                                                        //ldc.i4				0x1
	IL_013f:            V_7=1;                                                      //stloc				V_7
	IL_0143:            /*goto IL_011c;*/goto IL_0145;                              //br.s				IL_011c
	IL_0145:                                                                        //ldloc.s				V_5
	IL_0147:            if(V_5==nullptr)goto IL_016a;                               //brfalse.s				IL_016a
	IL_0149:                                                                        //ldc.i4				0x0
	IL_014e:            V_7=0;                                                      //stloc				V_7
	IL_0152:            /*goto IL_011c;*/goto IL_0154;                              //br.s				IL_011c
	IL_0154:            goto IL_0156;                                               //br.s				IL_0156
	IL_0156:                                                                        //ldloc.s				V_5
	IL_0158:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_015d:                                                                        //ldc.i4				0x2
	IL_0162:            V_7=2;                                                      //stloc				V_7
	IL_0166:            /*goto IL_011c;*/goto IL_0168;                              //br.s				IL_011c
	IL_0168:            goto IL_016a;                                               //br.s				IL_016a
	IL_016a:                                                                        //endfinally
	                    ;}
	IL_016b:            goto IL_016e;                                               //br.s				IL_016e
	IL_016d:                                                                        //break
	IL_016e:            return;                                                     //ret

}
inline System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::String^>^ Temp_0 = nullptr;
	System::InvalidOperationException^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	//local variables.
	array<System::String^>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_003f;case 1:goto IL_0067;case 2:goto IL_002e;case 3:goto IL_0056;};//switch				(IL_003f,IL_0067,IL_002e,IL_0056)
	IL_001b:                                                                        //ldarg.0
	IL_001c:                                                                        //ldarg.1
	IL_001d:            Temp_0=this->M_x2(A_0);                                     //call				array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^)
	IL_0022:            V_0=Temp_0;                                                 //stloc.0
	IL_0023:                                                                        //ldc.i4				0x2
	IL_0028:            V_1=2;                                                      //stloc				V_1
	IL_002c:            /*goto IL_0002;*/goto IL_002e;                              //br.s				IL_0002
	IL_002e:            goto IL_0031;                                               //br.s				IL_0031
	IL_0030:                                                                        //break
	IL_0031:                                                                        //ldloc.0
	IL_0032:            if(V_0==nullptr)goto IL_0069;                               //brfalse.s				IL_0069
	IL_0034:                                                                        //ldc.i4				0x0
	IL_0039:            V_1=0;                                                      //stloc				V_1
	IL_003d:            /*goto IL_0002;*/goto IL_003f;                              //br.s				IL_0002
	IL_003f:            goto IL_004b;                                               //br.s				IL_004b
	IL_0041:                                                                        //ldloc.0
	IL_0042:                                                                        //ldc.i4.0
	IL_0043:                                                                        //ldelem.ref
	IL_0044:            return V_0[0];                                              //ret
	IL_0045:            Temp_1=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_004a:            throw Temp_1;                                               //throw
	IL_004b:                                                                        //ldc.i4				0x3
	IL_0050:            V_1=3;                                                      //stloc				V_1
	IL_0054:            /*goto IL_0002;*/goto IL_0056;                              //br.s				IL_0002
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_2=V_0->Length;                                         //ldlen
	IL_0058:                                                                        //conv.i4
	IL_0059:                                                                        //ldc.i4.1
	IL_005a:            if(Temp_2==1)goto IL_0041;                                  //beq.s				IL_0041
	IL_005c:                                                                        //ldc.i4				0x1
	IL_0061:            V_1=1;                                                      //stloc				V_1
	IL_0065:            /*goto IL_0002;*/goto IL_0067;                              //br.s				IL_0002
	IL_0067:            goto IL_0045;                                               //br.s				IL_0045
	IL_0069:                                                                        //ldnull
	IL_006a:            return nullptr;                                             //ret

}
inline void Reflector::Application::ApplicationManager::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x134^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x5;                                          //ldfld				Root::T_x134^ Reflector::Application::ApplicationManager F_x5
	IL_0006:            Temp_1=Temp_0->M_x13();                                     //callvirt				System::Boolean Root::T_x134::M_x13()
	IL_000b:            if(!Temp_1)goto IL_0017;                                    //brfalse.s				IL_0017
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:                                                                        //ldarg.0
	IL_0010:            this->M_x10();                                              //call				void Reflector::Application::ApplicationManager::M_x10()
	IL_0015:            goto IL_0017;                                               //br.s				IL_0017
	IL_0017:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x13(System::Exception^ A_0)
//Root::T_x97^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x57^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::Windows::Forms::DialogResult Temp_10 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Reflector::IConfigurationManager^ V_0 = nullptr;
	Root::T_x57^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0080;case 1:goto IL_006c;case 2:goto IL_00b0;};//switch				(IL_0080,IL_006c,IL_00b0)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            this->M_x57();                                              //call				void Reflector::Application::ApplicationManager::M_x57()
	IL_001d:                                                                        //ldarg.0
	IL_001e:                                                                        //ldtoken				Reflector::IConfigurationManager
	IL_0023:            Temp_0=Reflector::IConfigurationManager::typeid;            //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0028:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_002d:                                                                        //castclass				Reflector::IConfigurationManager
	IL_0032:            V_0=safe_cast<Reflector::IConfigurationManager^>(Temp_1);   //stloc.0
	IL_0033:            Temp_2=gcnew Root::T_x57();                                 //newobj				void Root::T_x57::.ctor()
	IL_0038:            V_1=Temp_2;                                                 //stloc.1
	IL_0039:                                                                        //ldloc.1
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldarg.1
	IL_003c:            Temp_3=this->M_x1(A_0);                                     //call				System::String^ Reflector::Application::ApplicationManager::M_x1(System::Exception^)
	IL_0041:            V_1->M_x2(Temp_3);                                          //callvirt				void Root::T_x57::M_x2(System::String^)
	IL_0046:                                                                        //ldloc.1
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldarg.1
	IL_0049:            Temp_4=this->M_x2(A_0);                                     //call				System::String^ Reflector::Application::ApplicationManager::M_x2(System::Exception^)
	IL_004e:            V_1->M_x1(Temp_4);                                          //callvirt				void Root::T_x57::M_x1(System::String^)
	IL_0053:                                                                        //ldloc.1
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldarg.1
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_5=this->M_x1(A_0,V_0);                                 //call				System::String^ Reflector::Application::ApplicationManager::M_x1(System::Exception^,Reflector::IConfigurationManager^)
	IL_005c:            V_1->M_x12(Temp_5);                                         //callvirt				void Root::T_x57::M_x12(System::String^)
	IL_0061:                                                                        //ldc.i4				0x1
	IL_0066:            V_2=1;                                                      //stloc				V_2
	IL_006a:            /*goto IL_0002;*/goto IL_006c;                              //br.s				IL_0002
	IL_006c:                                                                        //ldloc.1
	IL_006d:            Temp_10=V_1->ShowDialog();                                  //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0072:                                                                        //ldc.i4.1
	IL_0073:            if(safe_cast<System::Int32>(Temp_10)!=1)goto IL_00b2;       //bne.un.s				IL_00b2
	IL_0075:                                                                        //ldc.i4				0x0
	IL_007a:            V_2=0;                                                      //stloc				V_2
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:            goto IL_0082;                                               //br.s				IL_0082
	IL_0082:                                                                        //ldloc.1
	IL_0083:            Temp_6=V_1->M_x13();                                        //callvirt				System::String^ Root::T_x57::M_x13()
	IL_0088:                                                                        //ldloc.1
	IL_0089:            Temp_7=V_1->M_x12();                                        //callvirt				System::String^ Root::T_x57::M_x12()
	IL_008e:                                                                        //ldloc.1
	IL_008f:            Temp_8=V_1->M_x2();                                         //callvirt				System::String^ Root::T_x57::M_x2()
	IL_0094:                                                                        //ldloc.1
	IL_0095:            Temp_9=V_1->M_x1();                                         //callvirt				System::String^ Root::T_x57::M_x1()
	IL_009a:            Root::T_x113::M_x1(Temp_6,Temp_7,Temp_8,Temp_9);            //call				void Root::T_x113::M_x1(System::String^,System::String^,System::String^,System::String^)
	IL_009f:            goto IL_00a2;                                               //br.s				IL_00a2
	IL_00a1:                                                                        //break
	IL_00a2:                                                                        //ldc.i4				0x2
	IL_00a7:            V_2=2;                                                      //stloc				V_2
	IL_00ab:            /*goto IL_0002;*/goto IL_00b0;                              //br				IL_0002
	IL_00b0:            goto IL_00b2;                                               //br.s				IL_00b2
	IL_00b2:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x13(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	Root::T_x25^ Temp_5 = nullptr;
	//local variables.
	Reflector::IWindow^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0006:            Temp_1=Temp_0->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_000b:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0010:            V_1=Temp_2;                                                 //stloc.1
	IL_0011:            /*goto IL_0013;*/goto IL_001101;                            //br.s				IL_0013
	IL_001101:          try{
	IL_0013:                                                                        //ldc.i4				0x3
	IL_0018:            V_3=3;                                                      //stloc				V_3
	IL_001c:            /*goto IL_0020;*/goto IL_001e;                              //br.s				IL_0020
	IL_001e:            goto IL_003d;                                               //br.s				IL_003d
	IL_0020:                                                                        //ldloc				V_3
	IL_0024:            switch(V_3){case 0:goto IL_006a;case 1:goto IL_007d;case 2:goto IL_008d;case 3:goto IL_001e;case 4:goto IL_005d;};//switch				(IL_006a,IL_007d,IL_008d,IL_001e,IL_005d)
	IL_003d:            goto IL_005f;                                               //br.s				IL_005f
	IL_003f:                                                                        //ldloc.1
	IL_0040:            Temp_4=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0045:                                                                        //castclass				Reflector::IWindow
	IL_004a:            V_0=safe_cast<Reflector::IWindow^>(Temp_4);                 //stloc.0
	IL_004b:                                                                        //ldloc.0
	IL_004c:                                                                        //ldc.i4.0
	IL_004d:            V_0->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0052:                                                                        //ldc.i4				0x4
	IL_0057:            V_3=4;                                                      //stloc				V_3
	IL_005b:            /*goto IL_0020;*/goto IL_005d;                              //br.s				IL_0020
	IL_005d:            goto IL_005f;                                               //br.s				IL_005f
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_3=0;                                                      //stloc				V_3
	IL_0068:            /*goto IL_0020;*/goto IL_006a;                              //br.s				IL_0020
	IL_006a:                                                                        //ldloc.1
	IL_006b:            Temp_3=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0070:            if(Temp_3)goto IL_003f;                                     //brtrue.s				IL_003f
	IL_0072:                                                                        //ldc.i4				0x1
	IL_0077:            V_3=1;                                                      //stloc				V_3
	IL_007b:            /*goto IL_0020;*/goto IL_007d;                              //br.s				IL_0020
	IL_007d:            goto IL_007f;                                               //br.s				IL_007f
	IL_007f:            goto IL_0082;                                               //br.s				IL_0082
	IL_0081:                                                                        //break
	IL_0082:                                                                        //ldc.i4				0x2
	IL_0087:            V_3=2;                                                      //stloc				V_3
	IL_008b:            /*goto IL_0020;*/goto IL_008d;                              //br.s				IL_0020
	IL_008d:            goto IL_00dc;                                               //leave.s				IL_00dc
	                    ;}
	                    finally{
	IL_008f:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_0091:                                                                        //ldloc				V_4
	IL_0095:            switch(V_4){case 0:goto IL_00d9;case 1:goto IL_00c6;case 2:goto IL_00b8;};//switch				(IL_00d9,IL_00c6,IL_00b8)
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:                                                                        //isinst				System::IDisposable
	IL_00ac:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00ad:                                                                        //ldc.i4				0x2
	IL_00b2:            V_4=2;                                                      //stloc				V_4
	IL_00b6:            /*goto IL_0091;*/goto IL_00b8;                              //br.s				IL_0091
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:            if(V_2==nullptr)goto IL_00db;                               //brfalse.s				IL_00db
	IL_00bb:                                                                        //ldc.i4				0x1
	IL_00c0:            V_4=1;                                                      //stloc				V_4
	IL_00c4:            /*goto IL_0091;*/goto IL_00c6;                              //br.s				IL_0091
	IL_00c6:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00c8:                                                                        //ldloc.2
	IL_00c9:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00ce:                                                                        //ldc.i4				0x0
	IL_00d3:            V_4=0;                                                      //stloc				V_4
	IL_00d7:            /*goto IL_0091;*/goto IL_00d9;                              //br.s				IL_0091
	IL_00d9:            goto IL_00db;                                               //br.s				IL_00db
	IL_00db:                                                                        //endfinally
	                    ;}
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            Temp_5=this->F_x9;                                          //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_00e2:            Temp_5->M_x13();                                            //callvirt				void Root::T_x25::M_x13()
	IL_00e7:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x13(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x13
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
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
	System::Collections::Hashtable^ Temp_14 = nullptr;
	System::Object^ Temp_15 = nullptr;
	System::Object^ Temp_16 = nullptr;
	System::Collections::Hashtable^ Temp_17 = nullptr;
	//local variables.
	System::Object^ V_0 = nullptr;
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
	IL_001a:            switch(V_1){case 0:goto IL_0014;case 1:goto IL_02da;case 2:goto IL_00c6;case 3:goto IL_00dd;case 4:goto IL_005a;case 5:goto IL_02ad;case 6:goto IL_029a;case 7:goto IL_00f3;case 8:goto IL_0078;};//switch				(IL_0014,IL_02da,IL_00c6,IL_00dd,IL_005a,IL_02ad,IL_029a,IL_00f3,IL_0078)
	IL_0043:                                                                        //volatile.
	IL_0045:            Temp_17=Root::T_x188::F_x4;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x4
	IL_004a:            if(Temp_17!=nullptr)goto IL_00cf;                           //brtrue				IL_00cf
	IL_004f:                                                                        //ldc.i4				0x4
	IL_0054:            V_1=4;                                                      //stloc				V_1
	IL_0058:            /*goto IL_0016;*/goto IL_005a;                              //br.s				IL_0016
	IL_005a:            goto IL_0123;                                               //br				IL_0123
	IL_005f:                                                                        //ldarg.0
	IL_0060:            this->M_x4();                                               //call				void Reflector::Application::ApplicationManager::M_x4()
	IL_0065:            return;                                                     //ret
	IL_0066:                                                                        //ldarg.0
	IL_0067:            this->M_x10();                                              //call				void Reflector::Application::ApplicationManager::M_x10()
	IL_006c:            return;                                                     //ret
	IL_006d:                                                                        //ldc.i4				0x8
	IL_0072:            V_1=8;                                                      //stloc				V_1
	IL_0076:            /*goto IL_0016;*/goto IL_0078;                              //br.s				IL_0016
	IL_0078:                                                                        //ldloc.0
	IL_0079:                                                                        //unbox				System::Int32
	IL_007e:                                                                        //ldind.i4
	IL_007f:            switch(safe_cast<System::Int32>(V_0)){case 0:goto IL_02df;case 1:goto IL_011c;case 2:goto IL_02e6;case 3:goto IL_0106;case 4:goto IL_0066;case 5:goto IL_02f4;case 6:goto IL_00f8;case 7:goto IL_005f;case 8:goto IL_02ed;case 9:goto IL_010e;case 10:goto IL_00c8;case 11:goto IL_00ff;case 12:goto IL_0115;};//switch				(IL_02df,IL_011c,IL_02e6,IL_0106,IL_0066,IL_02f4,IL_00f8,IL_005f,IL_02ed,IL_010e,IL_00c8,IL_00ff,IL_0115)
	IL_00b8:                                                                        //ldc.i4				0x2
	IL_00bd:            V_1=2;                                                      //stloc				V_1
	IL_00c1:            /*goto IL_0016;*/goto IL_00c6;                              //br				IL_0016
	IL_00c6:            goto IL_010d;                                               //br.s				IL_010d
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:            this->M_x8();                                               //call				void Reflector::Application::ApplicationManager::M_x8()
	IL_00ce:            return;                                                     //ret
	IL_00cf:                                                                        //ldc.i4				0x3
	IL_00d4:            V_1=3;                                                      //stloc				V_1
	IL_00d8:            /*goto IL_0016;*/goto IL_00dd;                              //br				IL_0016
	IL_00dd:                                                                        //ldarg.1
	IL_00de:                                                                        //dup
	IL_00df:            V_0=safe_cast<System::Object^>(A_0);                        //stloc.0
	IL_00e0:            if(A_0==nullptr)goto IL_02fb;                               //brfalse				IL_02fb
	IL_00e5:                                                                        //ldc.i4				0x7
	IL_00ea:            V_1=7;                                                      //stloc				V_1
	IL_00ee:            /*goto IL_0016;*/goto IL_00f3;                              //br				IL_0016
	IL_00f3:            goto IL_029f;                                               //br				IL_029f
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:            this->M_x11();                                              //call				void Reflector::Application::ApplicationManager::M_x11()
	IL_00fe:            return;                                                     //ret
	IL_00ff:                                                                        //ldarg.0
	IL_0100:            this->M_x13();                                              //call				void Reflector::Application::ApplicationManager::M_x13()
	IL_0105:            return;                                                     //ret
	IL_0106:                                                                        //ldarg.0
	IL_0107:            this->M_x7();                                               //call				void Reflector::Application::ApplicationManager::M_x7()
	IL_010c:            return;                                                     //ret
	IL_010d:            return;                                                     //ret
	IL_010e:                                                                        //ldarg.0
	IL_010f:            this->M_x9();                                               //call				void Reflector::Application::ApplicationManager::M_x9()
	IL_0114:            return;                                                     //ret
	IL_0115:                                                                        //ldarg.0
	IL_0116:            this->M_x12();                                              //call				void Reflector::Application::ApplicationManager::M_x12()
	IL_011b:            return;                                                     //ret
	IL_011c:                                                                        //ldarg.0
	IL_011d:            this->M_x6();                                               //call				void Reflector::Application::ApplicationManager::M_x6()
	IL_0122:            return;                                                     //ret
	IL_0123:                                                                        //ldc.i4.s				26
	IL_0125:                                                                        //ldc.r4				0.5
	IL_012a:            Temp_0=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(26),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_012f:                                                                        //dup
	IL_0130:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0146\x2048\x274A\x284C"
	IL_0135:                                                                        //ldloc				V_2
	IL_0139:            Temp_1=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0146\x2048\x274A\x284C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_013e:                                                                        //ldc.i4.0
	IL_013f:                                                                        //box				System::Int32
	IL_0144:            Temp_0->Add(safe_cast<System::Object^>(Temp_1),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0149:                                                                        //dup
	IL_014a:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0446\x2848\x284A\x254C\x2A4E"
	IL_014f:                                                                        //ldloc				V_2
	IL_0153:            Temp_2=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0446\x2848\x284A\x254C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0158:                                                                        //ldc.i4.1
	IL_0159:                                                                        //box				System::Int32
	IL_015e:            Temp_0->Add(safe_cast<System::Object^>(Temp_2),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0163:                                                                        //dup
	IL_0164:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0B46\x2048\x384A\x394C"
	IL_0169:                                                                        //ldloc				V_2
	IL_016d:            Temp_3=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x2642\x2B44\x0B46\x2048\x384A\x394C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0172:                                                                        //ldc.i4.2
	IL_0173:                                                                        //box				System::Int32
	IL_0178:            Temp_0->Add(safe_cast<System::Object^>(Temp_3),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_017d:                                                                        //dup
	IL_017e:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7C3E\x2D40\x2C42\x3644\x2246\x0F48\x224A\x214C\x2A4E"
	IL_0183:                                                                        //ldloc				V_2
	IL_0187:            Temp_4=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7C3E\x2D40\x2C42\x3644\x2246\x0F48\x224A\x214C\x2A4E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018c:                                                                        //ldc.i4.3
	IL_018d:                                                                        //box				System::Int32
	IL_0192:            Temp_0->Add(safe_cast<System::Object^>(Temp_4),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0197:                                                                        //dup
	IL_0198:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7A3E\x3940\x2A42\x3144"
	IL_019d:                                                                        //ldloc				V_2
	IL_01a1:            Temp_5=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7A3E\x3940\x2A42\x3144",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a6:                                                                        //ldc.i4.4
	IL_01a7:                                                                        //box				System::Int32
	IL_01ac:            Temp_0->Add(safe_cast<System::Object^>(Temp_5),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01b1:                                                                        //dup
	IL_01b2:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7D3E\x2E40\x2C42\x2E44\x2A46\x2848\x394A\x264C"
	IL_01b7:                                                                        //ldloc				V_2
	IL_01bb:            Temp_6=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7D3E\x2E40\x2C42\x2E44\x2A46\x2848\x394A\x264C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c0:                                                                        //ldc.i4.5
	IL_01c1:                                                                        //box				System::Int32
	IL_01c6:            Temp_0->Add(safe_cast<System::Object^>(Temp_6),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01cb:                                                                        //dup
	IL_01cc:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148"
	IL_01d1:                                                                        //ldloc				V_2
	IL_01d5:            Temp_7=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6C3E\x2440\x2242\x3744\x2446\x2148",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01da:                                                                        //ldc.i4.6
	IL_01db:                                                                        //box				System::Int32
	IL_01e0:            Temp_0->Add(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01e5:                                                                        //dup
	IL_01e6:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6D3E\x2440\x2542\x3744\x2246\x3A48\x234A"
	IL_01eb:                                                                        //ldloc				V_2
	IL_01ef:            Temp_8=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6D3E\x2440\x2542\x3744\x2246\x3A48\x234A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f4:                                                                        //ldc.i4.7
	IL_01f5:                                                                        //box				System::Int32
	IL_01fa:            Temp_0->Add(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01ff:                                                                        //dup
	IL_0200:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7E3E\x2540\x2742\x0C44\x2946\x3A48"
	IL_0205:                                                                        //ldloc				V_2
	IL_0209:            Temp_9=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7E3E\x2540\x2742\x0C44\x2946\x3A48",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_020e:                                                                        //ldc.i4.8
	IL_020f:                                                                        //box				System::Int32
	IL_0214:            Temp_0->Add(safe_cast<System::Object^>(Temp_9),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0219:                                                                        //dup
	IL_021a:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x3742\x2C44\x2846\x2748\x384A"
	IL_021f:                                                                        //ldloc				V_2
	IL_0223:            Temp_10=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x703E\x3140\x3742\x2C44\x2846\x2748\x384A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0228:                                                                        //ldc.i4.s				9
	IL_022a:                                                                        //box				System::Int32
	IL_022f:            Temp_0->Add(safe_cast<System::Object^>(Temp_10),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0234:                                                                        //dup
	IL_0235:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6C3E\x2440\x2D42\x2144\x0146\x2C48\x2E4A\x294C\x2D4E\x3050\x3052\x3E54"
	IL_023a:                                                                        //ldloc				V_2
	IL_023e:            Temp_11=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x6C3E\x2440\x2D42\x2144\x0146\x2C48\x2E4A\x294C\x2D4E\x3050\x3052\x3E54",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0243:                                                                        //ldc.i4.s				10
	IL_0245:                                                                        //box				System::Int32
	IL_024a:            Temp_0->Add(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_024f:                                                                        //dup
	IL_0250:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7C3E\x2940\x2642\x2644\x2C46\x0F48\x244A\x3F4C\x1A4E\x2150\x3752\x3454\x2356\x3C58\x285A"
	IL_0255:                                                                        //ldloc				V_2
	IL_0259:            Temp_12=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7C3E\x2940\x2642\x2644\x2C46\x0F48\x244A\x3F4C\x1A4E\x2150\x3752\x3454\x2356\x3C58\x285A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025e:                                                                        //ldc.i4.s				11
	IL_0260:                                                                        //box				System::Int32
	IL_0265:            Temp_0->Add(safe_cast<System::Object^>(Temp_12),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_026a:                                                                        //dup
	IL_026b:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7E3E\x2340\x2C42\x3044\x3346"
	IL_0270:                                                                        //ldloc				V_2
	IL_0274:            Temp_13=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x133C\x7E3E\x2340\x2C42\x3044\x3346",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0279:                                                                        //ldc.i4.s				12
	IL_027b:                                                                        //box				System::Int32
	IL_0280:            Temp_0->Add(safe_cast<System::Object^>(Temp_13),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0285:                                                                        //volatile.
	IL_0287:            Root::T_x188::F_x4=Temp_0;                                  //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x4
	IL_028c:                                                                        //ldc.i4				0x6
	IL_0291:            V_1=6;                                                      //stloc				V_1
	IL_0295:            /*goto IL_0016;*/goto IL_029a;                              //br				IL_0016
	IL_029a:            goto IL_00cf;                                               //br				IL_00cf
	IL_029f:                                                                        //ldc.i4				0x5
	IL_02a4:            V_1=5;                                                      //stloc				V_1
	IL_02a8:            /*goto IL_0016;*/goto IL_02ad;                              //br				IL_0016
	IL_02ad:                                                                        //volatile.
	IL_02af:            Temp_14=Root::T_x188::F_x4;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x4
	IL_02b4:            Temp_16=V_0;                                                //ldloc.0
	IL_02b5:            Temp_15=Temp_14[Temp_16];                                   //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_02ba:                                                                        //dup
	IL_02bb:            V_0=Temp_15;                                                //stloc.0
	IL_02bc:            if(V_0==nullptr)goto IL_02fb;                               //brfalse				IL_02fb
	IL_02c1:                                                                        //ldc.i4.4
	IL_02c2:                                                                        //dup
	IL_02c3:                                                                        //dup
	IL_02c4:                                                                        //ldc.i4.2
	IL_02c5:                                                                        //sub
	IL_02c6:                                                                        //blt				IL_02c2
	IL_02cb:                                                                        //pop
	IL_02cc:                                                                        //ldc.i4				0x1
	IL_02d1:            V_1=1;                                                      //stloc				V_1
	IL_02d5:            /*goto IL_0016;*/goto IL_02da;                              //br				IL_0016
	IL_02da:            goto IL_006d;                                               //br				IL_006d
	IL_02df:                                                                        //ldarg.0
	IL_02e0:            this->M_x14();                                              //call				void Reflector::Application::ApplicationManager::M_x14()
	IL_02e5:            return;                                                     //ret
	IL_02e6:                                                                        //ldarg.0
	IL_02e7:            this->M_x16();                                              //call				void Reflector::Application::ApplicationManager::M_x16()
	IL_02ec:            return;                                                     //ret
	IL_02ed:                                                                        //ldarg.0
	IL_02ee:            this->M_x5();                                               //call				void Reflector::Application::ApplicationManager::M_x5()
	IL_02f3:            return;                                                     //ret
	IL_02f4:                                                                        //ldarg.0
	IL_02f5:            this->M_x15();                                              //call				void Reflector::Application::ApplicationManager::M_x15()
	IL_02fa:            return;                                                     //ret
	IL_02fb:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x14()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Windows::Forms::OpenFileDialog^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::String^>^ Temp_6 = nullptr;
	System::Windows::Forms::DialogResult Temp_7 = (System::Windows::Forms::DialogResult)0;
	System::Int32 Temp_8 = 0;
	Reflector::CodeModel::IAssembly^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Windows::Forms::DialogResult Temp_13 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Windows::Forms::DialogResult Temp_17 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	System::Windows::Forms::OpenFileDialog^ V_1 = nullptr;
	System::Windows::Forms::DialogResult V_2 = (System::Windows::Forms::DialogResult)0;
	System::InvalidOperationException^ V_3 = nullptr;
	System::SystemException^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	array<System::String^>^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_9=17;                                                     //stloc				V_9
	IL_0009:            goto IL_0030;                                               //br.s				IL_0030
	IL_000b:                                                                        //ldloc				V_8
	IL_000f:            switch(V_8){case 0:goto IL_0101;case 1:goto IL_00db;case 2:goto IL_00c6;case 3:goto IL_0184;case 4:goto IL_0090;case 5:goto IL_00ab;case 6:goto IL_00eb;};//switch				(IL_0101,IL_00db,IL_00c6,IL_0184,IL_0090,IL_00ab,IL_00eb)
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0036:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_003b:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0040:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_0045:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_0046:            Temp_2=gcnew System::Windows::Forms::OpenFileDialog();      //newobj				void System::Windows::Forms::OpenFileDialog::.ctor()
	IL_004b:            V_1=Temp_2;                                                 //stloc.1
	IL_004c:                                                                        //ldloc.1
	IL_004d:                                                                        //ldstr				L"\x602E\x4130\x5632\x5B34\x1736\x7838\x483A\x4E3C\x5A3E\x2C40\x2142\x2944\x3E46"
	IL_0052:                                                                        //ldloc				V_9
	IL_0056:            Temp_3=a(L"\x602E\x4130\x5632\x5B34\x1736\x7838\x483A\x4E3C\x5A3E\x2C40\x2142\x2944\x3E46",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005b:            V_1->Title=Temp_3;                                          //callvirt				void System::Windows::Forms::FileDialog::set_Title(System::String^)
	IL_0060:                                                                        //ldloc.1
	IL_0061:                                                                        //ldstr				L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x793E\x2840\x2F42\x3144\x2246\x3B48"
	IL_0066:                                                                        //ldloc				V_9
	IL_006a:            Temp_4=a(L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x793E\x2840\x2F42\x3144\x2246\x3B48",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006f:            Temp_5=Root::T_x128::M_x1(Temp_4);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0074:            V_1->Filter=Temp_5;                                         //callvirt				void System::Windows::Forms::FileDialog::set_Filter(System::String^)
	IL_0079:                                                                        //ldloc.1
	IL_007a:                                                                        //ldc.i4.1
	IL_007b:            V_1->Multiselect=true;                                      //callvirt				void System::Windows::Forms::OpenFileDialog::set_Multiselect(System::Boolean)
	IL_0080:                                                                        //ldc.i4.0
	IL_0081:            V_2=safe_cast<System::Windows::Forms::DialogResult>(0);     //stloc.2
	IL_0082:                                                                        //ldc.i4				0x4
	IL_0087:            V_8=4;                                                      //stloc				V_8
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            /*goto IL_0106;*/goto IL_010101;                            //br.s				IL_0106
	IL_0092:                                                                        //ldloc.1
	IL_0093:            Temp_6=V_1->FileNames;                                      //callvirt				array<System::String^>^ System::Windows::Forms::FileDialog::get_FileNames()
	IL_0098:            V_6=Temp_6;                                                 //stloc.s				V_6
	IL_009a:                                                                        //ldc.i4.0
	IL_009b:            V_7=0;                                                      //stloc.s				V_7
	IL_009d:                                                                        //ldc.i4				0x5
	IL_00a2:            V_8=5;                                                      //stloc				V_8
	IL_00a6:            /*goto IL_000b;*/goto IL_00ab;                              //br				IL_000b
	IL_00ab:                                                                        //ldc.i4.1
	IL_00ac:                                                                        //dup
	IL_00ad:                                                                        //dup
	IL_00ae:                                                                        //ldc.i4.7
	IL_00af:                                                                        //add
	IL_00b0:                                                                        //bgt				IL_00ac
	IL_00b5:                                                                        //pop
	IL_00b6:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_00b8:                                                                        //ldc.i4				0x2
	IL_00bd:            V_8=2;                                                      //stloc				V_8
	IL_00c1:            /*goto IL_000b;*/goto IL_00c6;                              //br				IL_000b
	IL_00c6:                                                                        //ldloc.2
	IL_00c7:                                                                        //ldc.i4.1
	IL_00c8:            if(safe_cast<System::Int32>(V_2)!=1)goto IL_0189;           //bne.un				IL_0189
	IL_00cd:                                                                        //ldc.i4				0x1
	IL_00d2:            V_8=1;                                                      //stloc				V_8
	IL_00d6:            /*goto IL_000b;*/goto IL_00db;                              //br				IL_000b
	IL_00db:            goto IL_0092;                                               //br.s				IL_0092
	IL_00dd:                                                                        //ldc.i4				0x6
	IL_00e2:            V_8=6;                                                      //stloc				V_8
	IL_00e6:            /*goto IL_000b;*/goto IL_00eb;                              //br				IL_000b
	IL_00eb:                                                                        //ldloc.s				V_7
	IL_00ed:                                                                        //ldloc.s				V_6
	IL_00ef:            Temp_8=V_6->Length;                                         //ldlen
	IL_00f0:                                                                        //conv.i4
	IL_00f1:            if(V_7<Temp_8)goto IL_0160;                                 //blt.s				IL_0160
	IL_00f3:                                                                        //ldc.i4				0x0
	IL_00f8:            V_8=0;                                                      //stloc				V_8
	IL_00fc:            /*goto IL_000b;*/goto IL_0101;                              //br				IL_000b
	IL_0101:            goto IL_0189;                                               //br				IL_0189
	IL_010101:          try{
	IL_0106:                                                                        //ldloc.1
	IL_0107:            Temp_7=V_1->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::CommonDialog::ShowDialog()
	IL_010c:            V_2=Temp_7;                                                 //stloc.2
	IL_010d:            goto IL_00b8;                                               //leave.s				IL_00b8
	                    ;}
	                    catch(System::InvalidOperationException^ Ex_010D02){
	IL_010f:            V_3=Ex_010D02;                                              //stloc.3
	IL_0110:                                                                        //ldnull
	IL_0111:                                                                        //ldloc.3
	IL_0112:            Temp_10=V_3->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_0117:                                                                        //ldstr				L"\x6E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x0B44\x2646\x2448\x2E4A"
	IL_011c:                                                                        //ldloc				V_9
	IL_0120:            Temp_11=a(L"\x6E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x0B44\x2646\x2448\x2E4A",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0125:            Temp_12=Root::T_x128::M_x1(Temp_11);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_012a:                                                                        //ldc.i4.0
	IL_012b:                                                                        //ldc.i4.s				16
	IL_012d:            Temp_13=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_10,Temp_12,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0132:                                                                        //pop
	IL_0133:            goto IL_00b8;                                               //leave.s				IL_00b8
	                    ;}
	                    catch(System::SystemException^ Ex_013302){
	IL_0135:            V_4=Ex_013302;                                              //stloc.s				V_4
	IL_0137:                                                                        //ldnull
	IL_0138:                                                                        //ldloc.s				V_4
	IL_013a:            Temp_14=V_4->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_013f:                                                                        //ldstr				L"\x6E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x0B44\x2646\x2448\x2E4A"
	IL_0144:                                                                        //ldloc				V_9
	IL_0148:            Temp_15=a(L"\x6E2E\x4130\x4332\x5934\x5E36\x5A38\x5A3A\x493C\x563E\x2E40\x2D42\x0B44\x2646\x2448\x2E4A",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014d:            Temp_16=Root::T_x128::M_x1(Temp_15);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0152:                                                                        //ldc.i4.0
	IL_0153:                                                                        //ldc.i4.s				16
	IL_0155:            Temp_17=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_14,Temp_16,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_015a:                                                                        //pop
	IL_015b:            goto IL_00b8;                                               //leave				IL_00b8
	                    ;}
	IL_0160:                                                                        //ldloc.s				V_6
	IL_0162:                                                                        //ldloc.s				V_7
	IL_0164:                                                                        //ldelem.ref
	IL_0165:            V_5=V_6[V_7];                                               //stloc.s				V_5
	IL_0167:                                                                        //ldloc.0
	IL_0168:                                                                        //ldloc.s				V_5
	IL_016a:            Temp_9=V_0->LoadFile(V_5);                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_016f:                                                                        //pop
	IL_0170:                                                                        //ldloc.s				V_7
	IL_0172:                                                                        //ldc.i4.1
	IL_0173:                                                                        //add
	IL_0174:            V_7=(V_7 + 1);                                              //stloc.s				V_7
	IL_0176:                                                                        //ldc.i4				0x3
	IL_017b:            V_8=3;                                                      //stloc				V_8
	IL_017f:            /*goto IL_000b;*/goto IL_0184;                              //br				IL_000b
	IL_0184:            goto IL_00dd;                                               //br				IL_00dd
	IL_0189:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowCollection^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::IWindow^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_0=10;                                                     //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_000f:            Temp_1=Temp_0->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_0014:                                                                        //ldstr				L"\x6A27\x4529\x432B\x452D\x5D2F\x5331\x4633\x5D35\x6F37\x5339\x523B\x5A3D\x2F3F\x3541"
	IL_0019:                                                                        //ldloc				V_0
	IL_001d:            Temp_2=a(L"\x6A27\x4529\x432B\x452D\x5D2F\x5331\x4633\x5D35\x6F37\x5339\x523B\x5A3D\x2F3F\x3541",V_0);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0022:            Temp_3=Temp_1[Temp_2];                                      //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0027:                                                                        //ldc.i4.1
	IL_0028:            Temp_3->Visible=true;                                       //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_002d:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x15(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowManager^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	Root::T_x111^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	array<System::String^>^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	array<System::String^>^ Temp_16 = nullptr;
	array<System::String^>^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	array<System::String^>^ Temp_20 = nullptr;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	array<System::String^>^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	Reflector::CodeModel::IAssembly^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::Windows::Forms::DialogResult Temp_30 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Windows::Forms::DialogResult Temp_34 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_35 = nullptr;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::Windows::Forms::DialogResult Temp_38 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::String^ Temp_41 = nullptr;
	System::Windows::Forms::DialogResult Temp_42 = (System::Windows::Forms::DialogResult)0;
	array<System::String^>^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::Windows::Forms::DialogResult Temp_47 = (System::Windows::Forms::DialogResult)0;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::Windows::Forms::DialogResult Temp_51 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Reflector::IAssemblyBrowser^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	System::ArgumentException^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::ArgumentException^ V_6 = nullptr;
	array<System::String^>^ V_7 = nullptr;
	System::ArgumentException^ V_8 = nullptr;
	System::IO::DirectoryNotFoundException^ V_9 = nullptr;
	System::NotSupportedException^ V_10 = nullptr;
	System::IO::IOException^ V_11 = nullptr;
	System::String^ V_12 = nullptr;
	Reflector::CodeModel::IAssembly^ V_13 = nullptr;
	System::String^ V_14 = nullptr;
	Root::T_x111^ V_15 = nullptr;
	System::Object^ V_16 = nullptr;
	array<System::String^>^ V_17 = nullptr;
	System::Int32 V_18 = 0;
	array<System::String^>^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	System::Int32 V_22 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_22=9;                                                     //stloc				V_22
	IL_0009:            goto IL_008f;                                               //br				IL_008f
	IL_000e:                                                                        //ldloc				V_21
	IL_0012:            switch(V_21){case 0:goto IL_01db;case 1:goto IL_025d;case 2:goto IL_01c0;case 3:goto IL_0247;case 4:goto IL_0367;case 5:goto IL_03b2;case 6:goto IL_03cb;case 7:goto IL_0155;case 8:goto IL_04d6;case 9:goto IL_0237;case 10:goto IL_040a;case 11:goto IL_01a7;case 12:goto IL_033b;case 13:goto IL_0165;case 14:goto IL_0354;case 15:goto IL_0378;case 16:goto IL_010f;case 17:goto IL_041f;case 18:goto IL_03e6;case 19:goto IL_04b7;case 20:goto IL_013b;case 21:goto IL_01f5;case 22:goto IL_038b;case 23:goto IL_04ec;case 24:goto IL_049e;case 25:goto IL_00e6;case 26:goto IL_0122;case 27:goto IL_0507;case 28:goto IL_017b;case 29:goto IL_0222;};//switch				(IL_01db,IL_025d,IL_01c0,IL_0247,IL_0367,IL_03b2,IL_03cb,IL_0155,IL_04d6,IL_0237,IL_040a,IL_01a7,IL_033b,IL_0165,IL_0354,IL_0378,IL_010f,IL_041f,IL_03e6,IL_04b7,IL_013b,IL_01f5,IL_038b,IL_04ec,IL_049e,IL_00e6,IL_0122,IL_0507,IL_017b,IL_0222)
	IL_008f:                                                                        //ldarg.0
	IL_0090:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0095:                                                                        //ldc.i4.1
	IL_0096:            Temp_0->Visible=true;                                       //callvirt				void Reflector::IWindowManager::set_Visible(System::Boolean)
	IL_009b:                                                                        //ldarg.0
	IL_009c:            Temp_1=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_00a1:            Temp_1->Activate();                                         //callvirt				void Reflector::IWindowManager::Activate()
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:            this->M_x81();                                              //call				void Reflector::Application::ApplicationManager::M_x81()
	IL_00ac:                                                                        //ldarg.0
	IL_00ad:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_00b2:            Temp_2=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00b7:            Temp_3=this->M_x1(Temp_2);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00bc:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_00c1:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_3);//stloc.0
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_00c8:            Temp_4=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00cd:            Temp_5=this->M_x1(Temp_4);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00d2:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_00d7:            V_1=safe_cast<Reflector::IAssemblyBrowser^>(Temp_5);        //stloc.1
	IL_00d8:                                                                        //ldc.i4				0x19
	IL_00dd:            V_21=25;                                                    //stloc				V_21
	IL_00e1:            /*goto IL_000e;*/goto IL_00e6;                              //br				IL_000e
	IL_00e6:                                                                        //ldc.i4.5
	IL_00e7:                                                                        //dup
	IL_00e8:                                                                        //dup
	IL_00e9:                                                                        //ldc.i4.6
	IL_00ea:                                                                        //sub
	IL_00eb:                                                                        //blt				IL_00e7
	IL_00f0:                                                                        //pop
	IL_00f1:                                                                        //ldarg.0
	IL_00f2:            Temp_23=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_00f7:            Temp_24=this->M_x2(Temp_23);                                //call				array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^)
	IL_00fc:            if(Temp_24==nullptr)goto IL_037d;                           //brfalse				IL_037d
	IL_0101:                                                                        //ldc.i4				0x10
	IL_0106:            V_21=16;                                                    //stloc				V_21
	IL_010a:            /*goto IL_000e;*/goto IL_010f;                              //br				IL_000e
	IL_010f:            goto IL_031d;                                               //br				IL_031d
	IL_0114:                                                                        //ldc.i4				0x1a
	IL_0119:            V_21=26;                                                    //stloc				V_21
	IL_011d:            /*goto IL_000e;*/goto IL_0122;                              //br				IL_000e
	IL_0122:                                                                        //ldloc.s				V_20
	IL_0124:                                                                        //ldloc.s				V_19
	IL_0126:            Temp_25=V_19->Length;                                       //ldlen
	IL_0127:                                                                        //conv.i4
	IL_0128:            if(V_20<Temp_25)goto IL_03eb;                               //blt				IL_03eb
	IL_012d:                                                                        //ldc.i4				0x14
	IL_0132:            V_21=20;                                                    //stloc				V_21
	IL_0136:            /*goto IL_000e;*/goto IL_013b;                              //br				IL_000e
	IL_013b:            goto IL_03b7;                                               //br				IL_03b7
	IL_0140:                                                                        //ldloc.s				V_7
	IL_0142:            V_19=V_7;                                                   //stloc.s				V_19
	IL_0144:                                                                        //ldc.i4.0
	IL_0145:            V_20=0;                                                     //stloc.s				V_20
	IL_0147:                                                                        //ldc.i4				0x7
	IL_014c:            V_21=7;                                                     //stloc				V_21
	IL_0150:            /*goto IL_000e;*/goto IL_0155;                              //br				IL_000e
	IL_0155:            goto IL_0114;                                               //br.s				IL_0114
	IL_0157:                                                                        //ldc.i4				0xd
	IL_015c:            V_21=13;                                                    //stloc				V_21
	IL_0160:            /*goto IL_000e;*/goto IL_0165;                              //br				IL_000e
	IL_0165:                                                                        //ldloc.3
	IL_0166:            Temp_13=V_3->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_016b:            if(Temp_13!=0)goto IL_01e0;                                 //brtrue.s				IL_01e0
	IL_016d:                                                                        //ldc.i4				0x1c
	IL_0172:            V_21=28;                                                    //stloc				V_21
	IL_0176:            /*goto IL_000e;*/goto IL_017b;                              //br				IL_000e
	IL_017b:            goto IL_0340;                                               //br				IL_0340
	IL_0180:                                                                        //ldarg.0
	IL_0181:                                                                        //ldstr				L"\x5426\x4C28\x472A\x482C\x4C2E\x4530"
	IL_0186:                                                                        //ldloc				V_22
	IL_018a:            Temp_10=a(L"\x5426\x4C28\x472A\x482C\x4C2E\x4530",V_22);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_018f:            Temp_11=this->M_x2(Temp_10);                                //call				array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^)
	IL_0194:            V_17=Temp_11;                                               //stloc.s				V_17
	IL_0196:                                                                        //ldc.i4.0
	IL_0197:            V_18=0;                                                     //stloc.s				V_18
	IL_0199:                                                                        //ldc.i4				0xb
	IL_019e:            V_21=11;                                                    //stloc				V_21
	IL_01a2:            /*goto IL_000e;*/goto IL_01a7;                              //br				IL_000e
	IL_01a7:            goto IL_0239;                                               //br				IL_0239
	IL_01ac:                                                                        //ldloc.s				V_20
	IL_01ae:                                                                        //ldc.i4.1
	IL_01af:                                                                        //add
	IL_01b0:            V_20=(V_20 + 1);                                            //stloc.s				V_20
	IL_01b2:                                                                        //ldc.i4				0x2
	IL_01b7:            V_21=2;                                                     //stloc				V_21
	IL_01bb:            /*goto IL_000e;*/goto IL_01c0;                              //br				IL_000e
	IL_01c0:            goto IL_0114;                                               //br				IL_0114
	IL_01c5:                                                                        //ldloc.1
	IL_01c6:                                                                        //ldloc.s				V_16
	IL_01c8:            V_1->ActiveItem=V_16;                                       //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_01cd:                                                                        //ldc.i4				0x0
	IL_01d2:            V_21=0;                                                     //stloc				V_21
	IL_01d6:            /*goto IL_000e;*/goto IL_01db;                              //br				IL_000e
	IL_01db:            goto IL_04d8;                                               //br				IL_04d8
	IL_01e0:            Temp_14=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_01e5:            V_5=Temp_14;                                                //stloc.s				V_5
	IL_01e7:                                                                        //ldc.i4				0x15
	IL_01ec:            V_21=21;                                                    //stloc				V_21
	IL_01f0:            /*goto IL_000e;*/goto IL_01f5;                              //br				IL_000e
	IL_01f5:            /*goto IL_0424;*/goto IL_041F01;                            //br				IL_0424
	IL_01fa:                                                                        //ldloc.s				V_17
	IL_01fc:                                                                        //ldloc.s				V_18
	IL_01fe:                                                                        //ldelem.ref
	IL_01ff:            V_14=V_17[V_18];                                            //stloc.s				V_14
	IL_0201:                                                                        //ldloc.s				V_14
	IL_0203:            Temp_7=gcnew Root::T_x111(V_14);                            //newobj				void Root::T_x111::.ctor(System::String^)
	IL_0208:            V_15=Temp_7;                                                //stloc.s				V_15
	IL_020a:                                                                        //ldloc.s				V_15
	IL_020c:                                                                        //ldloc.0
	IL_020d:            Temp_8=V_15->M_x1(V_0);                                     //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_0212:            V_16=Temp_8;                                                //stloc.s				V_16
	IL_0214:                                                                        //ldc.i4				0x1d
	IL_0219:            V_21=29;                                                    //stloc				V_21
	IL_021d:            /*goto IL_000e;*/goto IL_0222;                              //br				IL_000e
	IL_0222:                                                                        //ldloc.s				V_16
	IL_0224:            if(V_16==nullptr)goto IL_04d8;                              //brfalse				IL_04d8
	IL_0229:                                                                        //ldc.i4				0x9
	IL_022e:            V_21=9;                                                     //stloc				V_21
	IL_0232:            /*goto IL_000e;*/goto IL_0237;                              //br				IL_000e
	IL_0237:            goto IL_01c5;                                               //br.s				IL_01c5
	IL_0239:                                                                        //ldc.i4				0x3
	IL_023e:            V_21=3;                                                     //stloc				V_21
	IL_0242:            /*goto IL_000e;*/goto IL_0247;                              //br				IL_000e
	IL_0247:                                                                        //ldloc.s				V_18
	IL_0249:                                                                        //ldloc.s				V_17
	IL_024b:            Temp_6=V_17->Length;                                        //ldlen
	IL_024c:                                                                        //conv.i4
	IL_024d:            if(V_18<Temp_6)goto IL_01fa;                                //blt.s				IL_01fa
	IL_024f:                                                                        //ldc.i4				0x1
	IL_0254:            V_21=1;                                                     //stloc				V_21
	IL_0258:            /*goto IL_000e;*/goto IL_025d;                              //br				IL_000e
	IL_025d:            goto IL_050c;                                               //br				IL_050c
	IL_025D01:          try{
	IL_0262:                                                                        //ldloc.3
	IL_0263:                                                                        //ldloc.s				V_5
	IL_0265:            Temp_17=System::IO::Directory::GetFiles(V_3,V_5);           //call				array<System::String^>^ System::IO::Directory::GetFiles(System::String^,System::String^)
	IL_026a:            V_7=Temp_17;                                                //stloc.s				V_7
	IL_026c:            goto IL_0140;                                               //leave				IL_0140
	                    ;}
	                    catch(System::ArgumentException^ Ex_026C02){
	IL_0271:            V_8=Ex_026C02;                                              //stloc.s				V_8
	IL_0273:                                                                        //ldnull
	IL_0274:                                                                        //ldloc.s				V_8
	IL_0276:            Temp_27=V_8->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_027b:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_0280:                                                                        //ldloc				V_22
	IL_0284:            Temp_28=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0289:            Temp_29=Root::T_x128::M_x1(Temp_28);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_028e:                                                                        //ldc.i4.0
	IL_028f:                                                                        //ldc.i4.s				16
	IL_0291:            Temp_30=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_27,Temp_29,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0296:                                                                        //pop
	IL_0297:            goto IL_0140;                                               //leave				IL_0140
	                    ;}
	                    catch(System::IO::DirectoryNotFoundException^ Ex_029702){
	IL_029c:            V_9=Ex_029702;                                              //stloc.s				V_9
	IL_029e:                                                                        //ldnull
	IL_029f:                                                                        //ldloc.s				V_9
	IL_02a1:            Temp_31=V_9->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_02a6:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_02ab:                                                                        //ldloc				V_22
	IL_02af:            Temp_32=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b4:            Temp_33=Root::T_x128::M_x1(Temp_32);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02b9:                                                                        //ldc.i4.0
	IL_02ba:                                                                        //ldc.i4.s				16
	IL_02bc:            Temp_34=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_31,Temp_33,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_02c1:                                                                        //pop
	IL_02c2:            goto IL_0140;                                               //leave				IL_0140
	                    ;}
	                    catch(System::NotSupportedException^ Ex_02C202){
	IL_02c7:            V_10=Ex_02C202;                                             //stloc.s				V_10
	IL_02c9:                                                                        //ldnull
	IL_02ca:                                                                        //ldloc.s				V_10
	IL_02cc:            Temp_35=V_10->Message;                                      //callvirt				System::String^ System::Exception::get_Message()
	IL_02d1:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_02d6:                                                                        //ldloc				V_22
	IL_02da:            Temp_36=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02df:            Temp_37=Root::T_x128::M_x1(Temp_36);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02e4:                                                                        //ldc.i4.0
	IL_02e5:                                                                        //ldc.i4.s				16
	IL_02e7:            Temp_38=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_35,Temp_37,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_02ec:                                                                        //pop
	IL_02ed:            goto IL_0140;                                               //leave				IL_0140
	                    ;}
	                    catch(System::IO::IOException^ Ex_02ED02){
	IL_02f2:            V_11=Ex_02ED02;                                             //stloc.s				V_11
	IL_02f4:                                                                        //ldnull
	IL_02f5:                                                                        //ldloc.s				V_11
	IL_02f7:            Temp_39=V_11->Message;                                      //callvirt				System::String^ System::Exception::get_Message()
	IL_02fc:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_0301:                                                                        //ldloc				V_22
	IL_0305:            Temp_40=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_030a:            Temp_41=Root::T_x128::M_x1(Temp_40);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_030f:                                                                        //ldc.i4.0
	IL_0310:                                                                        //ldc.i4.s				16
	IL_0312:            Temp_42=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_39,Temp_41,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0317:                                                                        //pop
	IL_0318:            goto IL_0140;                                               //leave				IL_0140
	                    ;}
	IL_031d:                                                                        //ldarg.0
	IL_031e:            Temp_15=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0323:            Temp_16=this->M_x2(Temp_15);                                //call				array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^)
	IL_0328:            V_17=Temp_16;                                               //stloc.s				V_17
	IL_032a:                                                                        //ldc.i4.0
	IL_032b:            V_18=0;                                                     //stloc.s				V_18
	IL_032d:                                                                        //ldc.i4				0xc
	IL_0332:            V_21=12;                                                    //stloc				V_21
	IL_0336:            /*goto IL_000e;*/goto IL_033b;                              //br				IL_000e
	IL_033b:            goto IL_0490;                                               //br				IL_0490
	IL_0340:            Temp_9=System::Environment::CurrentDirectory;               //call				System::String^ System::Environment::get_CurrentDirectory()
	IL_0345:            V_3=Temp_9;                                                 //stloc.3
	IL_0346:                                                                        //ldc.i4				0xe
	IL_034b:            V_21=14;                                                    //stloc				V_21
	IL_034f:            /*goto IL_000e;*/goto IL_0354;                              //br				IL_000e
	IL_0354:            goto IL_01e0;                                               //br				IL_01e0
	IL_0359:                                                                        //ldc.i4				0x4
	IL_035e:            V_21=4;                                                     //stloc				V_21
	IL_0362:            /*goto IL_000e;*/goto IL_0367;                              //br				IL_000e
	IL_0367:                                                                        //ldloc.3
	IL_0368:            if(V_3==nullptr)goto IL_0340;                               //brfalse.s				IL_0340
	IL_036a:                                                                        //ldc.i4				0xf
	IL_036f:            V_21=15;                                                    //stloc				V_21
	IL_0373:            /*goto IL_000e;*/goto IL_0378;                              //br				IL_000e
	IL_0378:            goto IL_0157;                                               //br				IL_0157
	IL_037d:                                                                        //ldc.i4				0x16
	IL_0382:            V_21=22;                                                    //stloc				V_21
	IL_0386:            /*goto IL_000e;*/goto IL_038b;                              //br				IL_000e
	IL_038b:                                                                        //ldarg.0
	IL_038c:                                                                        //ldstr				L"\x5426\x4C28\x472A\x482C\x4C2E\x4530"
	IL_0391:                                                                        //ldloc				V_22
	IL_0395:            Temp_19=a(L"\x5426\x4C28\x472A\x482C\x4C2E\x4530",V_22);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_039a:            Temp_20=this->M_x2(Temp_19);                                //call				array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^)
	IL_039f:            if(Temp_20==nullptr)goto IL_050c;                           //brfalse				IL_050c
	IL_03a4:                                                                        //ldc.i4				0x5
	IL_03a9:            V_21=5;                                                     //stloc				V_21
	IL_03ad:            /*goto IL_000e;*/goto IL_03b2;                              //br				IL_000e
	IL_03b2:            goto IL_0180;                                               //br				IL_0180
	IL_03b7:                                                                        //ldloc.s				V_18
	IL_03b9:                                                                        //ldc.i4.1
	IL_03ba:                                                                        //add
	IL_03bb:            V_18=(V_18 + 1);                                            //stloc.s				V_18
	IL_03bd:                                                                        //ldc.i4				0x6
	IL_03c2:            V_21=6;                                                     //stloc				V_21
	IL_03c6:            /*goto IL_000e;*/goto IL_03cb;                              //br				IL_000e
	IL_03cb:            goto IL_0490;                                               //br				IL_0490
	IL_03d0:                                                                        //ldc.i4.0
	IL_03d1:            Temp_43=gcnew array<System::String^>(0);                    //newarr				System::String
	IL_03d6:            V_7=Temp_43;                                                //stloc.s				V_7
	IL_03d8:                                                                        //ldc.i4				0x12
	IL_03dd:            V_21=18;                                                    //stloc				V_21
	IL_03e1:            /*goto IL_000e;*/goto IL_03e6;                              //br				IL_000e
	IL_03e6:            /*goto IL_0262;*/goto IL_025D01;                            //br				IL_0262
	IL_03eb:                                                                        //ldloc.s				V_19
	IL_03ed:                                                                        //ldloc.s				V_20
	IL_03ef:                                                                        //ldelem.ref
	IL_03f0:            V_12=V_19[V_20];                                            //stloc.s				V_12
	IL_03f2:                                                                        //ldloc.0
	IL_03f3:                                                                        //ldloc.s				V_12
	IL_03f5:            Temp_26=V_0->LoadFile(V_12);                                //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_03fa:            V_13=Temp_26;                                               //stloc.s				V_13
	IL_03fc:                                                                        //ldc.i4				0xa
	IL_0401:            V_21=10;                                                    //stloc				V_21
	IL_0405:            /*goto IL_000e;*/goto IL_040a;                              //br				IL_000e
	IL_040a:                                                                        //ldloc.s				V_13
	IL_040c:            if(V_13==nullptr)goto IL_01ac;                              //brfalse				IL_01ac
	IL_0411:                                                                        //ldc.i4				0x11
	IL_0416:            V_21=17;                                                    //stloc				V_21
	IL_041a:            /*goto IL_000e;*/goto IL_041f;                              //br				IL_000e
	IL_041f:            goto IL_04f1;                                               //br				IL_04f1
	IL_041F01:          try{
	IL_0424:                                                                        //ldloc.2
	IL_0425:            Temp_18=System::IO::Path::GetFileName(V_2);                 //call				System::String^ System::IO::Path::GetFileName(System::String^)
	IL_042a:            V_5=Temp_18;                                                //stloc.s				V_5
	IL_042c:            goto IL_03d0;                                               //leave.s				IL_03d0
	                    ;}
	                    catch(System::ArgumentException^ Ex_042C02){
	IL_042e:            V_6=Ex_042C02;                                              //stloc.s				V_6
	IL_0430:                                                                        //ldnull
	IL_0431:                                                                        //ldloc.s				V_6
	IL_0433:            Temp_44=V_6->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_0438:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_043d:                                                                        //ldloc				V_22
	IL_0441:            Temp_45=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0446:            Temp_46=Root::T_x128::M_x1(Temp_45);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_044b:                                                                        //ldc.i4.0
	IL_044c:                                                                        //ldc.i4.s				16
	IL_044e:            Temp_47=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_44,Temp_46,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0453:                                                                        //pop
	IL_0454:            goto IL_03d0;                                               //leave				IL_03d0
	                    ;}
	IL_045402:          try{
	IL_0459:                                                                        //ldloc.2
	IL_045a:            Temp_12=System::IO::Path::GetDirectoryName(V_2);            //call				System::String^ System::IO::Path::GetDirectoryName(System::String^)
	IL_045f:            V_3=Temp_12;                                                //stloc.3
	IL_0460:            goto IL_0359;                                               //leave				IL_0359
	                    ;}
	                    catch(System::ArgumentException^ Ex_046002){
	IL_0465:            V_4=Ex_046002;                                              //stloc.s				V_4
	IL_0467:                                                                        //ldnull
	IL_0468:                                                                        //ldloc.s				V_4
	IL_046a:            Temp_48=V_4->Message;                                       //callvirt				System::String^ System::Exception::get_Message()
	IL_046f:                                                                        //ldstr				L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642"
	IL_0474:                                                                        //ldloc				V_22
	IL_0478:            Temp_49=a(L"\x6626\x5928\x5B2A\x412C\x462E\x5230\x5232\x4134\x5E36\x5638\x553A\x733C\x5E3E\x2C40\x2642",V_22);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_047d:            Temp_50=Root::T_x128::M_x1(Temp_49);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0482:                                                                        //ldc.i4.0
	IL_0483:                                                                        //ldc.i4.s				16
	IL_0485:            Temp_51=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_48,Temp_50,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_048a:                                                                        //pop
	IL_048b:            goto IL_0359;                                               //leave				IL_0359
	                    ;}
	IL_0490:                                                                        //ldc.i4				0x18
	IL_0495:            V_21=24;                                                    //stloc				V_21
	IL_0499:            /*goto IL_000e;*/goto IL_049e;                              //br				IL_000e
	IL_049e:                                                                        //ldloc.s				V_18
	IL_04a0:                                                                        //ldloc.s				V_17
	IL_04a2:            Temp_21=V_17->Length;                                       //ldlen
	IL_04a3:                                                                        //conv.i4
	IL_04a4:            if(V_18<Temp_21)goto IL_04bc;                               //blt				IL_04bc
	IL_04a9:                                                                        //ldc.i4				0x13
	IL_04ae:            V_21=19;                                                    //stloc				V_21
	IL_04b2:            /*goto IL_000e;*/goto IL_04b7;                              //br				IL_000e
	IL_04b7:            goto IL_037d;                                               //br				IL_037d
	IL_04bc:                                                                        //ldloc.s				V_17
	IL_04be:                                                                        //ldloc.s				V_18
	IL_04c0:                                                                        //ldelem.ref
	IL_04c1:            V_2=V_17[V_18];                                             //stloc.2
	IL_04c2:            Temp_22=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_04c7:            V_3=Temp_22;                                                //stloc.3
	IL_04c8:                                                                        //ldc.i4				0x8
	IL_04cd:            V_21=8;                                                     //stloc				V_21
	IL_04d1:            /*goto IL_000e;*/goto IL_04d6;                              //br				IL_000e
	IL_04d6:            /*goto IL_0459;*/goto IL_045402;                            //br.s				IL_0459
	IL_04d8:                                                                        //ldloc.s				V_18
	IL_04da:                                                                        //ldc.i4.1
	IL_04db:                                                                        //add
	IL_04dc:            V_18=(V_18 + 1);                                            //stloc.s				V_18
	IL_04de:                                                                        //ldc.i4				0x17
	IL_04e3:            V_21=23;                                                    //stloc				V_21
	IL_04e7:            /*goto IL_000e;*/goto IL_04ec;                              //br				IL_000e
	IL_04ec:            goto IL_0239;                                               //br				IL_0239
	IL_04f1:                                                                        //ldloc.1
	IL_04f2:                                                                        //ldloc.s				V_13
	IL_04f4:            V_1->ActiveItem=safe_cast<System::Object^>(V_13);           //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_04f9:                                                                        //ldc.i4				0x1b
	IL_04fe:            V_21=27;                                                    //stloc				V_21
	IL_0502:            /*goto IL_000e;*/goto IL_0507;                              //br				IL_000e
	IL_0507:            goto IL_01ac;                                               //br				IL_01ac
	IL_050c:            return;                                                     //ret

}
inline Reflector::Application::ApplicationManager::~ApplicationManager()
//System::IDisposable^::Dispose by M_x158
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Threading::ThreadExceptionEventHandler^ Temp_1 = nullptr;
	System::AppDomain^ Temp_2 = nullptr;
	System::UnhandledExceptionEventHandler^ Temp_3 = nullptr;
	Root::T_x134^ Temp_4 = nullptr;
	Root::T_x134^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0070;case 1:goto IL_008b;case 2:goto IL_005d;};//switch				(IL_0070,IL_008b,IL_005d)
	IL_0017:            goto IL_001a;                                               //br.s				IL_001a
	IL_0019:                                                                        //break
	IL_001a:                                                                        //ldarg.0
	IL_001b:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::EventArgs^)
	IL_0021:            Temp_0=gcnew System::EventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0026:            System::Windows::Forms::Application::Idle -= Temp_0;        //call				void System::Windows::Forms::Application::remove_Idle(System::EventHandler^)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::Threading::ThreadExceptionEventArgs^)
	IL_0032:            Temp_1=gcnew System::Threading::ThreadExceptionEventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::Threading::ThreadExceptionEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0037:            System::Windows::Forms::Application::ThreadException -= Temp_1;//call				void System::Windows::Forms::Application::remove_ThreadException(System::Threading::ThreadExceptionEventHandler^)
	IL_003c:            Temp_2=System::AppDomain::CurrentDomain;                    //call				System::AppDomain^ System::AppDomain::get_CurrentDomain()
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldftn				void Reflector::Application::ApplicationManager::M_x1(System::Object^,System::UnhandledExceptionEventArgs^)
	IL_0048:            Temp_3=gcnew System::UnhandledExceptionEventHandler(this,&Reflector::Application::ApplicationManager::M_x1);//newobj				void System::UnhandledExceptionEventHandler::.ctor(System::Object^,System::IntPtr)
	IL_004d:            Temp_2->UnhandledException -= Temp_3;                       //callvirt				void System::AppDomain::remove_UnhandledException(System::UnhandledExceptionEventHandler^)
	IL_0052:                                                                        //ldc.i4				0x2
	IL_0057:            V_0=2;                                                      //stloc				V_0
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_5=this->F_x5;                                          //ldfld				Root::T_x134^ Reflector::Application::ApplicationManager F_x5
	IL_0063:            if(Temp_5==nullptr)goto IL_008d;                            //brfalse.s				IL_008d
	IL_0065:                                                                        //ldc.i4				0x0
	IL_006a:            V_0=0;                                                      //stloc				V_0
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_0072;                                               //br.s				IL_0072
	IL_0072:                                                                        //ldarg.0
	IL_0073:            Temp_4=this->F_x5;                                          //ldfld				Root::T_x134^ Reflector::Application::ApplicationManager F_x5
	IL_0078:            Temp_4->M_x12();                                            //callvirt				void Root::T_x134::M_x12()
	IL_007d:                                                                        //ldc.i4				0x1
	IL_0082:            V_0=1;                                                      //stloc				V_0
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:            goto IL_008d;                                               //br.s				IL_008d
	IL_008d:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x16()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x99^ Temp_0 = nullptr;
	Root::T_x110^ Temp_1 = nullptr;
	Root::T_x71^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Windows::Forms::DialogResult Temp_7 = (System::Windows::Forms::DialogResult)0;
	Root::T_x99^ Temp_8 = nullptr;
	Root::T_x110^ Temp_9 = nullptr;
	//local variables.
	Root::T_x99^ V_0 = nullptr;
	Root::T_x71^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x7
	IL_0005:            V_3=7;                                                      //stloc				V_3
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_00f1;case 1:goto IL_00ad;case 2:goto IL_00c4;};//switch				(IL_00f1,IL_00ad,IL_00c4)
	IL_0020:            goto IL_0023;                                               //br.s				IL_0023
	IL_0022:                                                                        //break
	IL_0023:                                                                        //ldarg.0
	IL_0024:            this->M_x57();                                              //call				void Reflector::Application::ApplicationManager::M_x57()
	IL_0029:            Temp_0=gcnew Root::T_x99();                                 //newobj				void Root::T_x99::.ctor()
	IL_002e:            V_0=Temp_0;                                                 //stloc.0
	IL_002f:                                                                        //ldloc.0
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0036:            V_0->M_x2(safe_cast<Reflector::IConfigurationManager^>(Temp_1));//callvirt				void Root::T_x99::M_x2(Reflector::IConfigurationManager^)
	IL_003b:            Temp_2=gcnew Root::T_x71();                                 //newobj				void Root::T_x71::.ctor()
	IL_0040:            V_1=Temp_2;                                                 //stloc.1
	IL_0041:                                                                        //ldloc.1
	IL_0042:                                                                        //ldstr				L"\x6424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x1534\x7B36\x5038\x483A\x493C\x1F3E\x0C40\x2242\x2B44\x2646\x2E48\x2E4A\x204C\x2A4E\x3F50\x2752"
	IL_0047:                                                                        //ldloc				V_3
	IL_004b:            Temp_3=a(L"\x6424\x5426\x5A28\x4E2A\x402C\x4D2E\x5D30\x4A32\x1534\x7B36\x5038\x483A\x493C\x1F3E\x0C40\x2242\x2B44\x2646\x2E48\x2E4A\x204C\x2A4E\x3F50\x2752",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0050:            V_1->Text=Temp_3;                                           //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_0055:                                                                        //ldloc.1
	IL_0056:                                                                        //ldstr				L"\x7624\x4226\x4528\x4E2A\x4E2C\x5B2E\x1130\x5C32\x4734\x1736\x5438\x5A3A\x533C\x5E3E\x2640\x2642\x6544\x2646\x2748\x6B4A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A\x7D5C\x335E\x0860\x1062\x1164\x5D66"
	IL_005b:                                                                        //ldloc				V_3
	IL_005f:            Temp_4=a(L"\x7624\x4226\x4528\x4E2A\x4E2C\x5B2E\x1130\x5C32\x4734\x1736\x5438\x5A3A\x533C\x5E3E\x2640\x2642\x6544\x2646\x2748\x6B4A\x2C4C\x3C4E\x2250\x3652\x3854\x3556\x3558\x225A\x7D5C\x335E\x0860\x1062\x1164\x5D66",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0064:            V_1->M_x12(Temp_4);                                         //callvirt				void Root::T_x71::M_x12(System::String^)
	IL_0069:                                                                        //ldloc.1
	IL_006a:                                                                        //ldc.i4.1
	IL_006b:            V_1->M_x1(true);                                            //callvirt				void Root::T_x71::M_x1(System::Boolean)
	IL_0070:                                                                        //ldloc.1
	IL_0071:                                                                        //ldloc.0
	IL_0072:            V_1->M_x1(V_0);                                             //callvirt				void Root::T_x71::M_x1(Root::T_x99^)
	IL_0077:                                                                        //ldloc.1
	IL_0078:                                                                        //ldstr				L"\x0324\x7426\x4C28\x472A\x482C\x4C2E\x4530"
	IL_007d:                                                                        //ldloc				V_3
	IL_0081:            Temp_5=a(L"\x0324\x7426\x4C28\x472A\x482C\x4C2E\x4530",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:            V_1->M_x13(Temp_5);                                         //callvirt				void Root::T_x71::M_x13(System::String^)
	IL_008b:                                                                        //ldloc.1
	IL_008c:                                                                        //ldstr				L"\x6624\x4626\x4728\x482A\x482C\x432E"
	IL_0091:                                                                        //ldloc				V_3
	IL_0095:            Temp_6=a(L"\x6624\x4626\x4728\x482A\x482C\x432E",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009a:            V_1->M_x2(Temp_6);                                          //callvirt				void Root::T_x71::M_x2(System::String^)
	IL_009f:                                                                        //ldc.i4				0x1
	IL_00a4:            V_2=1;                                                      //stloc				V_2
	IL_00a8:            /*goto IL_000b;*/goto IL_00ad;                              //br				IL_000b
	IL_00ad:                                                                        //ldloc.1
	IL_00ae:            Temp_7=V_1->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_00b3:                                                                        //ldc.i4.1
	IL_00b4:            if(safe_cast<System::Int32>(Temp_7)!=1)goto IL_00f3;        //bne.un.s				IL_00f3
	IL_00b6:                                                                        //ldc.i4				0x2
	IL_00bb:            V_2=2;                                                      //stloc				V_2
	IL_00bf:            /*goto IL_000b;*/goto IL_00c4;                              //br				IL_000b
	IL_00c4:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_00c6:                                                                        //ldarg.0
	IL_00c7:            this->M_x55();                                              //call				void Reflector::Application::ApplicationManager::M_x55()
	IL_00cc:                                                                        //ldloc.1
	IL_00cd:            Temp_8=V_1->M_x5();                                         //callvirt				Root::T_x99^ Root::T_x71::M_x5()
	IL_00d2:                                                                        //ldarg.0
	IL_00d3:            Temp_9=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_00d8:            Temp_8->M_x1(safe_cast<Reflector::IConfigurationManager^>(Temp_9));//callvirt				void Root::T_x99::M_x1(Reflector::IConfigurationManager^)
	IL_00dd:                                                                        //ldarg.0
	IL_00de:            this->M_x81();                                              //call				void Reflector::Application::ApplicationManager::M_x81()
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_2=0;                                                      //stloc				V_2
	IL_00ec:            /*goto IL_000b;*/goto IL_00f1;                              //br				IL_000b
	IL_00f1:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_00f3:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x17()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x56^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Root::T_x56^ Temp_4 = nullptr;
	Root::T_x90^ Temp_5 = nullptr;
	//local variables.
	Root::T_x95^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_001e;                                               //br.s				IL_001e
	IL_0002:            goto IL_0005;                                               //br.s				IL_0005
	IL_0004:                                                                        //break
	IL_0005:                                                                        //ldloc				V_2
	IL_0009:            switch(V_2){case 0:goto IL_0069;case 1:goto IL_005a;case 2:goto IL_008f;case 3:goto IL_004d;};//switch				(IL_0069,IL_005a,IL_008f,IL_004d)
	IL_001e:                                                                        //ldarg.0
	IL_001f:                                                                        //ldtoken				Root::T_x95
	IL_0024:            Temp_0=Root::T_x95::typeid;                                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0029:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_002e:                                                                        //castclass				Root::T_x95
	IL_0033:            V_0=safe_cast<Root::T_x95^>(Temp_1);                        //stloc.0
	IL_0034:                                                                        //ldloc.0
	IL_0035:            Temp_2=V_0->M_x1();                                         //callvirt				Root::T_x56^ Root::T_x95::M_x1()
	IL_003a:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_003f:                                                                        //ldc.i4.1
	IL_0040:                                                                        //sub
	IL_0041:            V_1=(Temp_3 - 1);                                           //stloc.1
	IL_0042:                                                                        //ldc.i4				0x3
	IL_0047:            V_2=3;                                                      //stloc				V_2
	IL_004b:            goto IL_0002;                                               //br.s				IL_0002
	IL_004d:            goto IL_004f;                                               //br.s				IL_004f
	IL_004f:                                                                        //ldc.i4				0x1
	IL_0054:            V_2=1;                                                      //stloc				V_2
	IL_0058:            goto IL_0002;                                               //br.s				IL_0002
	IL_005a:                                                                        //ldloc.1
	IL_005b:                                                                        //ldc.i4.0
	IL_005c:            if(V_1>=0)goto IL_006b;                                     //bge.s				IL_006b
	IL_005e:                                                                        //ldc.i4				0x0
	IL_0063:            V_2=0;                                                      //stloc				V_2
	IL_0067:            goto IL_0002;                                               //br.s				IL_0002
	IL_0069:            goto IL_0091;                                               //br.s				IL_0091
	IL_006b:                                                                        //ldloc.0
	IL_006c:                                                                        //ldloc.0
	IL_006d:            Temp_4=V_0->M_x1();                                         //callvirt				Root::T_x56^ Root::T_x95::M_x1()
	IL_0072:                                                                        //ldloc.1
	IL_0073:            Temp_5=Temp_4->M_x1(V_1);                                   //callvirt				Root::T_x90^ Root::T_x56::M_x1(System::Int32)
	IL_0078:            V_0->M_x1(Temp_5);                                          //callvirt				void Root::T_x95::M_x1(Root::T_x90^)
	IL_007d:                                                                        //ldloc.1
	IL_007e:                                                                        //ldc.i4.1
	IL_007f:                                                                        //sub
	IL_0080:            V_1=(V_1 - 1);                                              //stloc.1
	IL_0081:                                                                        //ldc.i4				0x2
	IL_0086:            V_2=2;                                                      //stloc				V_2
	IL_008a:            goto IL_0002;                                               //br				IL_0002
	IL_008f:            goto IL_004f;                                               //br.s				IL_004f
	IL_0091:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x18()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::IConfiguration^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Reflector::ILanguageManager^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_2=2;                                                      //stloc				V_2
	IL_0009:            goto IL_000c;                                               //br.s				IL_000c
	IL_000b:                                                                        //break
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0012:                                                                        //ldstr				L"\x6C1F\x4321\x4A23\x4125\x5D27\x4B29\x4B2B\x4B2D\x7D2F\x5331\x5A33\x5735\x5F37\x5F39\x4E3B"
	IL_0017:                                                                        //ldloc				V_2
	IL_001b:            Temp_1=a(L"\x6C1F\x4321\x4A23\x4125\x5D27\x4B29\x4B2B\x4B2D\x7D2F\x5331\x5A33\x5735\x5F37\x5F39\x4E3B",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0020:            Temp_2=Temp_0->M_x2(Temp_1);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0025:            V_0=Temp_2;                                                 //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:            V_0->Clear();                                               //callvirt				void Reflector::IConfiguration::Clear()
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_0032:            Temp_3=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0037:            Temp_4=this->M_x1(Temp_3);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_003c:                                                                        //castclass				Reflector::ILanguageManager
	IL_0041:            V_1=safe_cast<Reflector::ILanguageManager^>(Temp_4);        //stloc.1
	IL_0042:                                                                        //ldloc.0
	IL_0043:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x602B\x4F2D\x5E2F\x5531\x4133\x5735\x5F37\x5F39"
	IL_0048:                                                                        //ldloc				V_2
	IL_004c:            Temp_5=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x602B\x4F2D\x5E2F\x5531\x4133\x5735\x5F37\x5F39",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0051:                                                                        //ldloc.1
	IL_0052:            Temp_6=V_1->ActiveLanguage;                                 //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageManager::get_ActiveLanguage()
	IL_0057:            Temp_7=Temp_6->Name;                                        //callvirt				System::String^ Reflector::CodeModel::ILanguage::get_Name()
	IL_005c:            V_0->SetProperty(Temp_5,Temp_7);                            //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_0061:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x19()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::IConfiguration^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::ILanguageCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Reflector::ILanguageCollection^ Temp_11 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_12 = nullptr;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Reflector::ILanguageManager^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	Reflector::CodeModel::ILanguage^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_6=3;                                                      //stloc				V_6
	IL_0009:            goto IL_0043;                                               //br.s				IL_0043
	IL_000b:                                                                        //ldc.i4.1
	IL_000c:                                                                        //dup
	IL_000d:                                                                        //dup
	IL_000e:                                                                        //ldc.i4.6
	IL_000f:                                                                        //add
	IL_0010:                                                                        //bgt				IL_000c
	IL_0015:                                                                        //pop
	IL_0016:                                                                        //ldloc				V_5
	IL_001a:            switch(V_5){case 0:goto IL_0132;case 1:goto IL_00be;case 2:goto IL_00aa;case 3:goto IL_0096;case 4:goto IL_0114;case 5:goto IL_00e8;case 6:goto IL_00f8;case 7:goto IL_0152;case 8:goto IL_00d6;};//switch				(IL_0132,IL_00be,IL_00aa,IL_0096,IL_0114,IL_00e8,IL_00f8,IL_0152,IL_00d6)
	IL_0043:                                                                        //ldarg.0
	IL_0044:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0049:                                                                        //ldstr				L"\x6D20\x4222\x4B24\x4026\x5C28\x4A2A\x4A2C\x4A2E\x7C30\x5232\x5B34\x5636\x5E38\x5E3A\x4F3C"
	IL_004e:                                                                        //ldloc				V_6
	IL_0052:            Temp_1=a(L"\x6D20\x4222\x4B24\x4026\x5C28\x4A2A\x4A2C\x4A2E\x7C30\x5232\x5B34\x5636\x5E38\x5E3A\x4F3C",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:            Temp_2=Temp_0->M_x2(Temp_1);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_005c:            V_0=Temp_2;                                                 //stloc.0
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_0063:            Temp_3=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0068:            Temp_4=this->M_x1(Temp_3);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_006d:                                                                        //castclass				Reflector::ILanguageManager
	IL_0072:            V_1=safe_cast<Reflector::ILanguageManager^>(Temp_4);        //stloc.1
	IL_0073:                                                                        //ldloc.0
	IL_0074:                                                                        //ldstr				L"\x6020\x4022\x5124\x4E26\x5F28\x4E2A\x612C\x4E2E\x5F30\x5432\x4034\x5636\x5E38\x5E3A"
	IL_0079:                                                                        //ldloc				V_6
	IL_007d:            Temp_5=a(L"\x6020\x4022\x5124\x4E26\x5F28\x4E2A\x612C\x4E2E\x5F30\x5432\x4034\x5636\x5E38\x5E3A",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0082:            Temp_6=V_0->GetProperty(Temp_5);                            //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0087:            V_2=Temp_6;                                                 //stloc.2
	IL_0088:                                                                        //ldc.i4				0x3
	IL_008d:            V_5=3;                                                      //stloc				V_5
	IL_0091:            /*goto IL_000b;*/goto IL_0096;                              //br				IL_000b
	IL_0096:                                                                        //ldloc.2
	IL_0097:            if(V_2==nullptr)goto IL_0157;                               //brfalse				IL_0157
	IL_009c:                                                                        //ldc.i4				0x2
	IL_00a1:            V_5=2;                                                      //stloc				V_5
	IL_00a5:            /*goto IL_000b;*/goto IL_00aa;                              //br				IL_000b
	IL_00aa:            goto IL_00d8;                                               //br.s				IL_00d8
	IL_00ac:                                                                        //ldloc.3
	IL_00ad:                                                                        //ldc.i4.1
	IL_00ae:                                                                        //add
	IL_00af:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00b0:                                                                        //ldc.i4				0x1
	IL_00b5:            V_5=1;                                                      //stloc				V_5
	IL_00b9:            /*goto IL_000b;*/goto IL_00be;                              //br				IL_000b
	IL_00be:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00c0:                                                                        //ldloc.1
	IL_00c1:                                                                        //ldloc.s				V_4
	IL_00c3:            V_1->ActiveLanguage=V_4;                                    //callvirt				void Reflector::ILanguageManager::set_ActiveLanguage(Reflector::CodeModel::ILanguage^)
	IL_00c8:                                                                        //ldc.i4				0x8
	IL_00cd:            V_5=8;                                                      //stloc				V_5
	IL_00d1:            /*goto IL_000b;*/goto IL_00d6;                              //br				IL_000b
	IL_00d6:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00d8:                                                                        //ldc.i4.0
	IL_00d9:            V_3=0;                                                      //stloc.3
	IL_00da:                                                                        //ldc.i4				0x5
	IL_00df:            V_5=5;                                                      //stloc				V_5
	IL_00e3:            /*goto IL_000b;*/goto IL_00e8;                              //br				IL_000b
	IL_00e8:            goto IL_00ea;                                               //br.s				IL_00ea
	IL_00ea:                                                                        //ldc.i4				0x6
	IL_00ef:            V_5=6;                                                      //stloc				V_5
	IL_00f3:            /*goto IL_000b;*/goto IL_00f8;                              //br				IL_000b
	IL_00f8:                                                                        //ldloc.3
	IL_00f9:                                                                        //ldloc.1
	IL_00fa:            Temp_9=V_1->Languages;                                      //callvirt				Reflector::ILanguageCollection^ Reflector::ILanguageManager::get_Languages()
	IL_00ff:            Temp_10=safe_cast<System::Collections::ICollection^>(Temp_9)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0104:            if(V_3<Temp_10)goto IL_0116;                                //blt.s				IL_0116
	IL_0106:                                                                        //ldc.i4				0x4
	IL_010b:            V_5=4;                                                      //stloc				V_5
	IL_010f:            /*goto IL_000b;*/goto IL_0114;                              //br				IL_000b
	IL_0114:            goto IL_0157;                                               //br.s				IL_0157
	IL_0116:                                                                        //ldloc.1
	IL_0117:            Temp_11=V_1->Languages;                                     //callvirt				Reflector::ILanguageCollection^ Reflector::ILanguageManager::get_Languages()
	IL_011c:                                                                        //ldloc.3
	IL_011d:            Temp_12=Temp_11[V_3];                                       //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_0122:            V_4=Temp_12;                                                //stloc.s				V_4
	IL_0124:                                                                        //ldc.i4				0x0
	IL_0129:            V_5=0;                                                      //stloc				V_5
	IL_012d:            /*goto IL_000b;*/goto IL_0132;                              //br				IL_000b
	IL_0132:                                                                        //ldloc.2
	IL_0133:                                                                        //ldloc.s				V_4
	IL_0135:            Temp_7=V_4->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ILanguage::get_Name()
	IL_013a:            Temp_8=(V_2 == Temp_7);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_013f:            if(!Temp_8)goto IL_00ac;                                    //brfalse				IL_00ac
	IL_0144:                                                                        //ldc.i4				0x7
	IL_0149:            V_5=7;                                                      //stloc				V_5
	IL_014d:            /*goto IL_000b;*/goto IL_0152;                              //br				IL_000b
	IL_0152:            goto IL_00c0;                                               //br				IL_00c0
	IL_0157:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::IConfiguration^ Temp_2 = nullptr;
	Reflector::IWindowManager^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::Drawing::Font^ Temp_6 = nullptr;
	System::Single Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Globalization::CultureInfo^ Temp_12 = nullptr;
	System::Single Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Globalization::CultureInfo^ Temp_16 = nullptr;
	System::Single Temp_17 = 0;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Globalization::CultureInfo^ Temp_20 = nullptr;
	System::Single Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Globalization::CultureInfo^ Temp_29 = nullptr;
	System::Single Temp_30 = 0;
	System::Int32 Temp_31 = 0;
	System::Windows::Forms::Control^ Temp_32 = nullptr;
	System::Drawing::Font^ Temp_33 = nullptr;
	System::Int32 Temp_34 = 0;
	array<System::Char>^ Temp_35 = nullptr;
	array<System::String^>^ Temp_36 = nullptr;
	System::Int32 Temp_37 = 0;
	array<System::Char>^ Temp_38 = nullptr;
	array<System::String^>^ Temp_39 = nullptr;
	System::Int32 Temp_40 = 0;
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::Drawing::Font^ Temp_43 = nullptr;
	Root::T_x75^ Temp_44 = nullptr;
	System::Drawing::Font^ Temp_45 = nullptr;
	Reflector::IWindowManager^ Temp_46 = nullptr;
	Reflector::IWindowCollection^ Temp_47 = nullptr;
	System::String^ Temp_48 = nullptr;
	Reflector::IWindow^ Temp_49 = nullptr;
	System::Int32 Temp_50 = 0;
	System::String^ Temp_51 = nullptr;
	System::Drawing::Font^ Temp_52 = nullptr;
	System::Single Temp_53 = 0;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::Int32 Temp_59 = 0;
	System::Int32 Temp_60 = 0;
	System::Int32 Temp_61 = 0;
	System::Int32 Temp_62 = 0;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	System::Windows::Forms::DialogResult Temp_66 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Root::T_x68^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Single V_3 = 0;
	System::String^ V_4 = nullptr;
	array<System::String^>^ V_5 = nullptr;
	System::String^ V_6 = nullptr;
	System::Single V_7 = 0;
	System::String^ V_8 = nullptr;
	array<System::String^>^ V_9 = nullptr;
	Reflector::IWindow^ V_10 = nullptr;
	array<System::Char>^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	System::Int32 V_13 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_13=8;                                                     //stloc				V_13
	IL_0009:            goto IL_00af;                                               //br				IL_00af
	IL_000e:                                                                        //ldloc				V_12
	IL_0012:            switch(V_12){case 0:goto IL_0333;case 1:goto IL_02a2;case 2:goto IL_058f;case 3:goto IL_0471;case 4:goto IL_03ef;case 5:goto IL_04da;case 6:goto IL_04ab;case 7:goto IL_02e3;case 8:goto IL_0131;case 9:goto IL_041e;case 10:goto IL_0546;case 11:goto IL_00e3;case 12:goto IL_03da;case 13:goto IL_024a;case 14:goto IL_044d;case 15:goto IL_057c;case 16:goto IL_0431;case 17:goto IL_0222;case 18:goto IL_030b;case 19:goto IL_0392;case 20:goto IL_014f;case 21:goto IL_02b7;case 22:goto IL_016c;case 23:goto IL_020a;case 24:goto IL_05aa;case 25:goto IL_02f6;case 26:goto IL_0508;case 27:goto IL_04ed;case 28:goto IL_0484;case 29:goto IL_04be;case 30:goto IL_037d;case 31:goto IL_00f7;case 32:goto IL_010a;case 33:goto IL_0564;case 34:goto IL_0531;case 35:goto IL_02c7;case 36:goto IL_05e8;case 37:goto IL_0402;};//switch				(IL_0333,IL_02a2,IL_058f,IL_0471,IL_03ef,IL_04da,IL_04ab,IL_02e3,IL_0131,IL_041e,IL_0546,IL_00e3,IL_03da,IL_024a,IL_044d,IL_057c,IL_0431,IL_0222,IL_030b,IL_0392,IL_014f,IL_02b7,IL_016c,IL_020a,IL_05aa,IL_02f6,IL_0508,IL_04ed,IL_0484,IL_04be,IL_037d,IL_00f7,IL_010a,IL_0564,IL_0531,IL_02c7,IL_05e8,IL_0402)
	IL_00af:                                                                        //ldarg.0
	IL_00b0:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_00b5:                                                                        //ldstr				L"\x6725\x5B27\x5929\x492B\x432D\x522F\x5E31\x4D33\x7435\x4A37\x5539\x4B3B\x4D3D\x253F\x3041"
	IL_00ba:                                                                        //ldloc				V_13
	IL_00be:            Temp_1=a(L"\x6725\x5B27\x5929\x492B\x432D\x522F\x5E31\x4D33\x7435\x4A37\x5539\x4B3B\x4D3D\x253F\x3041",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c3:            Temp_2=Temp_0->M_x2(Temp_1);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_00c8:            V_0=Temp_2;                                                 //stloc.0
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:            Temp_3=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_00cf:                                                                        //isinst				Root::T_x68
	IL_00d4:            V_1=dynamic_cast<Root::T_x68^>(Temp_3);                     //stloc.1
	IL_00d5:                                                                        //ldc.i4				0xb
	IL_00da:            V_12=11;                                                    //stloc				V_12
	IL_00de:            /*goto IL_000e;*/goto IL_00e3;                              //br				IL_000e
	IL_00e3:                                                                        //ldloc.1
	IL_00e4:            if(V_1==nullptr)goto IL_05ed;                               //brfalse				IL_05ed
	IL_00e9:                                                                        //ldc.i4				0x1f
	IL_00ee:            V_12=31;                                                    //stloc				V_12
	IL_00f2:            /*goto IL_000e;*/goto IL_00f7;                              //br				IL_000e
	IL_00f7:            goto IL_0397;                                               //br				IL_0397
	IL_00fc:                                                                        //ldc.i4				0x20
	IL_0101:            V_12=32;                                                    //stloc				V_12
	IL_0105:            /*goto IL_000e;*/goto IL_010a;                              //br				IL_000e
	IL_010a:                                                                        //ldarg.0
	IL_010b:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133"
	IL_0110:                                                                        //ldloc				V_13
	IL_0114:            Temp_57=a(L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0119:            Temp_58=this->M_x12(Temp_57);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_011e:            if(Temp_58==nullptr)goto IL_0476;                           //brfalse				IL_0476
	IL_0123:                                                                        //ldc.i4				0x8
	IL_0128:            V_12=8;                                                     //stloc				V_12
	IL_012c:            /*goto IL_000e;*/goto IL_0131;                              //br				IL_000e
	IL_0131:            goto IL_05af;                                               //br				IL_05af
	IL_0136:                                                                        //ldloc.s				V_9
	IL_0138:                                                                        //ldc.i4.0
	IL_0139:                                                                        //ldelem.ref
	IL_013a:            Temp_22=V_9[0]->Trim();                                     //callvirt				System::String^ System::String::Trim()
	IL_013f:            V_6=Temp_22;                                                //stloc.s				V_6
	IL_0141:                                                                        //ldc.i4				0x14
	IL_0146:            V_12=20;                                                    //stloc				V_12
	IL_014a:            /*goto IL_000e;*/goto IL_014f;                              //br				IL_000e
	IL_014f:            goto IL_0556;                                               //br				IL_0556
	IL_0154:                                                                        //ldloc.s				V_5
	IL_0156:                                                                        //ldc.i4.0
	IL_0157:                                                                        //ldelem.ref
	IL_0158:            Temp_27=V_5[0]->Trim();                                     //callvirt				System::String^ System::String::Trim()
	IL_015d:            V_2=Temp_27;                                                //stloc.2
	IL_015e:                                                                        //ldc.i4				0x16
	IL_0163:            V_12=22;                                                    //stloc				V_12
	IL_0167:            /*goto IL_000e;*/goto IL_016c;                              //br				IL_000e
	IL_016c:            goto IL_02e8;                                               //br				IL_02e8
	IL_016C01:          try{
	IL_0171:                                                                        //ldarg.0
	IL_0172:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133"
	IL_0177:                                                                        //ldloc				V_13
	IL_017b:            Temp_14=a(L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0180:            Temp_15=this->M_x12(Temp_14);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_0185:            Temp_16=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_018a:            Temp_17=System::Single::Parse(Temp_15,safe_cast<System::IFormatProvider^>(Temp_16));//call				System::Single System::Single::Parse(System::String^,System::IFormatProvider^)
	IL_018f:            V_3=Temp_17;                                                //stloc.3
	IL_0190:                                                                        //ldarg.0
	IL_0191:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133"
	IL_0196:                                                                        //ldloc				V_13
	IL_019a:            Temp_18=a(L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_019f:            Temp_19=this->M_x12(Temp_18);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_01a4:            Temp_20=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01a9:            Temp_21=System::Single::Parse(Temp_19,safe_cast<System::IFormatProvider^>(Temp_20));//call				System::Single System::Single::Parse(System::String^,System::IFormatProvider^)
	IL_01ae:            V_7=Temp_21;                                                //stloc.s				V_7
	IL_01b0:            goto IL_024f;                                               //leave				IL_024f
	                    ;}
	                    catch(System::FormatException^ Ex_01B002){
	IL_01b5:                                                                        //pop
	IL_01b6:                                                                        //ldnull
	IL_01b7:                                                                        //ldstr				L"\x7225\x4027\x4F29\x0C2B\x5D2D\x402F\x5731\x5733\x5F35\x5E37\x5339\x593B\x5A3D\x603F\x2441\x2B43\x2845\x3C47\x6A49\x3F4B\x274D\x2A4F\x3751\x7453\x3F55\x2B57\x7A59\x355B\x305D\x165F\x0361\x0863\x0F65\x0C67\x4469"
	IL_01bc:                                                                        //ldloc				V_13
	IL_01c0:            Temp_63=a(L"\x7225\x4027\x4F29\x0C2B\x5D2D\x402F\x5731\x5733\x5F35\x5E37\x5339\x593B\x5A3D\x603F\x2441\x2B43\x2845\x3C47\x6A49\x3F4B\x274D\x2A4F\x3751\x7453\x3F55\x2B57\x7A59\x355B\x305D\x165F\x0361\x0863\x0F65\x0C67\x4469",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c5:                                                                        //ldstr				L"\x6725\x5827\x5A29\x402B\x472D\x532F\x5331\x4033\x5F35\x5737\x5439\x723B\x5F3D\x2D3F\x2741"
	IL_01ca:                                                                        //ldloc				V_13
	IL_01ce:            Temp_64=a(L"\x6725\x5827\x5A29\x402B\x472D\x532F\x5331\x4033\x5F35\x5737\x5439\x723B\x5F3D\x2D3F\x2741",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d3:            Temp_65=Root::T_x128::M_x1(Temp_64);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01d8:                                                                        //ldc.i4.0
	IL_01d9:                                                                        //ldc.i4.s				16
	IL_01db:            Temp_66=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_63,Temp_65,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01e0:                                                                        //pop
	IL_01e1:            goto IL_024f;                                               //leave.s				IL_024f
	                    ;}
	IL_01e3:                                                                        //ldloc.s				V_4
	IL_01e5:                                                                        //ldc.i4.1
	IL_01e6:            Temp_35=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_01eb:            V_11=Temp_35;                                               //stloc.s				V_11
	IL_01ed:                                                                        //ldloc.s				V_11
	IL_01ef:                                                                        //ldc.i4.0
	IL_01f0:                                                                        //ldc.i4.s				44
	IL_01f2:            V_11[0]=(System::Char)44;                                   //stelem.i2
	IL_01f3:                                                                        //ldloc.s				V_11
	IL_01f5:            Temp_36=V_4->Split(V_11);                                   //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_01fa:            V_5=Temp_36;                                                //stloc.s				V_5
	IL_01fc:                                                                        //ldc.i4				0x17
	IL_0201:            V_12=23;                                                    //stloc				V_12
	IL_0205:            /*goto IL_000e;*/goto IL_020a;                              //br				IL_000e
	IL_020a:                                                                        //ldloc.s				V_5
	IL_020c:            Temp_34=V_5->Length;                                        //ldlen
	IL_020d:                                                                        //conv.i4
	IL_020e:                                                                        //ldc.i4.0
	IL_020f:            if(Temp_34<=0)goto IL_02e8;                                 //ble				IL_02e8
	IL_0214:                                                                        //ldc.i4				0x11
	IL_0219:            V_12=17;                                                    //stloc				V_12
	IL_021d:            /*goto IL_000e;*/goto IL_0222;                              //br				IL_000e
	IL_0222:            goto IL_03f4;                                               //br				IL_03f4
	IL_0227:                                                                        //ldloc.s				V_9
	IL_0229:                                                                        //ldc.i4.1
	IL_022a:                                                                        //ldelem.ref
	IL_022b:            Temp_11=V_9[1]->Trim();                                     //callvirt				System::String^ System::String::Trim()
	IL_0230:            Temp_12=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0235:            Temp_13=System::Single::Parse(Temp_11,safe_cast<System::IFormatProvider^>(Temp_12));//call				System::Single System::Single::Parse(System::String^,System::IFormatProvider^)
	IL_023a:            V_7=Temp_13;                                                //stloc.s				V_7
	IL_023c:                                                                        //ldc.i4				0xd
	IL_0241:            V_12=13;                                                    //stloc				V_12
	IL_0245:            /*goto IL_000e;*/goto IL_024a;                              //br				IL_000e
	IL_024a:            goto IL_00fc;                                               //br				IL_00fc
	IL_024f:                                                                        //ldloc.1
	IL_0250:                                                                        //ldloc.2
	IL_0251:                                                                        //ldloc.3
	IL_0252:            Temp_43=gcnew System::Drawing::Font(V_2,V_3);               //newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_0257:            V_1->Font=Temp_43;                                          //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_025c:                                                                        //ldarg.0
	IL_025d:            Temp_44=this->F_x4;                                         //ldfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_0262:                                                                        //ldloc.2
	IL_0263:                                                                        //ldloc.3
	IL_0264:                                                                        //ldc.r4				1.2121212
	IL_0269:                                                                        //mul
	IL_026a:            Temp_45=gcnew System::Drawing::Font(V_2,(V_3 * 1.212121));  //newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_026f:            Temp_44->Font=Temp_45;                                      //callvirt				void Root::T_x75::set_Font(System::Drawing::Font^)
	IL_0274:                                                                        //ldarg.0
	IL_0275:            Temp_46=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_027a:            Temp_47=Temp_46->Windows;                                   //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_027f:                                                                        //ldstr				L"\x6225\x4127\x5929\x4D2B\x5D2D\x432F\x5731\x5933\x5435\x5437\x5F39\x4E3B\x693D\x293F\x2C41\x2043\x2945\x3F47"
	IL_0284:                                                                        //ldloc				V_13
	IL_0288:            Temp_48=a(L"\x6225\x4127\x5929\x4D2B\x5D2D\x432F\x5731\x5933\x5435\x5437\x5F39\x4E3B\x693D\x293F\x2C41\x2043\x2945\x3F47",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028d:            Temp_49=Temp_47[Temp_48];                                   //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0292:            V_10=Temp_49;                                               //stloc.s				V_10
	IL_0294:                                                                        //ldc.i4				0x1
	IL_0299:            V_12=1;                                                     //stloc				V_12
	IL_029d:            /*goto IL_000e;*/goto IL_02a2;                              //br				IL_000e
	IL_02a2:                                                                        //ldloc.s				V_10
	IL_02a4:            if(V_10==nullptr)goto IL_05ed;                              //brfalse				IL_05ed
	IL_02a9:                                                                        //ldc.i4				0x15
	IL_02ae:            V_12=21;                                                    //stloc				V_12
	IL_02b2:            /*goto IL_000e;*/goto IL_02b7;                              //br				IL_000e
	IL_02b7:            goto IL_0310;                                               //br.s				IL_0310
	IL_02b9:                                                                        //ldc.i4				0x23
	IL_02be:            V_12=35;                                                    //stloc				V_12
	IL_02c2:            /*goto IL_000e;*/goto IL_02c7;                              //br				IL_000e
	IL_02c7:                                                                        //ldloc.s				V_9
	IL_02c9:                                                                        //ldc.i4.0
	IL_02ca:                                                                        //ldelem.ref
	IL_02cb:            Temp_61=V_9[0]->Length;                                     //callvirt				System::Int32 System::String::get_Length()
	IL_02d0:            if(Temp_61==0)goto IL_0556;                                 //brfalse				IL_0556
	IL_02d5:                                                                        //ldc.i4				0x7
	IL_02da:            V_12=7;                                                     //stloc				V_12
	IL_02de:            /*goto IL_000e;*/goto IL_02e3;                              //br				IL_000e
	IL_02e3:            goto IL_0136;                                               //br				IL_0136
	IL_02e8:                                                                        //ldc.i4				0x19
	IL_02ed:            V_12=25;                                                    //stloc				V_12
	IL_02f1:            /*goto IL_000e;*/goto IL_02f6;                              //br				IL_000e
	IL_02f6:                                                                        //ldloc.s				V_5
	IL_02f8:            Temp_37=V_5->Length;                                        //ldlen
	IL_02f9:                                                                        //conv.i4
	IL_02fa:                                                                        //ldc.i4.1
	IL_02fb:            if(Temp_37<=1)goto IL_0338;                                 //ble.s				IL_0338
	IL_02fd:                                                                        //ldc.i4				0x12
	IL_0302:            V_12=18;                                                    //stloc				V_12
	IL_0306:            /*goto IL_000e;*/goto IL_030b;                              //br				IL_000e
	IL_030b:            goto IL_0423;                                               //br				IL_0423
	IL_0310:                                                                        //ldloc.s				V_10
	IL_0312:            Temp_32=V_10->Content;                                      //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_0317:                                                                        //ldloc.s				V_6
	IL_0319:                                                                        //ldloc.s				V_7
	IL_031b:            Temp_33=gcnew System::Drawing::Font(V_6,V_7);               //newobj				void System::Drawing::Font::.ctor(System::String^,System::Single)
	IL_0320:            Temp_32->Font=Temp_33;                                      //callvirt				void System::Windows::Forms::Control::set_Font(System::Drawing::Font^)
	IL_0325:                                                                        //ldc.i4				0x0
	IL_032a:            V_12=0;                                                     //stloc				V_12
	IL_032e:            /*goto IL_000e;*/goto IL_0333;                              //br				IL_000e
	IL_0333:            goto IL_05ed;                                               //br				IL_05ed
	IL_0338:                                                                        //ldstr				L"\x7225\x4927\x4229\x432B\x432D\x512F"
	IL_033d:                                                                        //ldloc				V_13
	IL_0341:            Temp_5=a(L"\x7225\x4927\x4229\x432B\x432D\x512F",V_13);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0346:            V_6=Temp_5;                                                 //stloc.s				V_6
	IL_0348:            Temp_6=System::Windows::Forms::Control::DefaultFont;        //call				System::Drawing::Font^ System::Windows::Forms::Control::get_DefaultFont()
	IL_034d:            Temp_7=Temp_6->SizeInPoints;                                //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_0352:            V_7=Temp_7;                                                 //stloc.s				V_7
	IL_0354:                                                                        //ldloc.0
	IL_0355:                                                                        //ldstr				L"\x6525\x4727\x4E29\x492B\x682D\x5F2F\x5C31\x4033"
	IL_035a:                                                                        //ldloc				V_13
	IL_035e:            Temp_8=a(L"\x6525\x4727\x4E29\x492B\x682D\x5F2F\x5C31\x4033",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0363:            Temp_9=System::String::Empty;                               //ldsfld				System::String^ System::String Empty
	IL_0368:            Temp_10=V_0->GetProperty(Temp_8,Temp_9);                    //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_036d:            V_8=Temp_10;                                                //stloc.s				V_8
	IL_036f:                                                                        //ldc.i4				0x1e
	IL_0374:            V_12=30;                                                    //stloc				V_12
	IL_0378:            /*goto IL_000e;*/goto IL_037d;                              //br				IL_000e
	IL_037d:                                                                        //ldloc.s				V_8
	IL_037f:            if(V_8==nullptr)goto IL_00fc;                               //brfalse				IL_00fc
	IL_0384:                                                                        //ldc.i4				0x13
	IL_0389:            V_12=19;                                                    //stloc				V_12
	IL_038d:            /*goto IL_000e;*/goto IL_0392;                              //br				IL_000e
	IL_0392:            goto IL_04df;                                               //br				IL_04df
	IL_0397:                                                                        //ldstr				L"\x7225\x4927\x4229\x432B\x432D\x512F"
	IL_039c:                                                                        //ldloc				V_13
	IL_03a0:            Temp_51=a(L"\x7225\x4927\x4229\x432B\x432D\x512F",V_13);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a5:            V_2=Temp_51;                                                //stloc.2
	IL_03a6:            Temp_52=System::Windows::Forms::Control::DefaultFont;       //call				System::Drawing::Font^ System::Windows::Forms::Control::get_DefaultFont()
	IL_03ab:            Temp_53=Temp_52->SizeInPoints;                              //callvirt				System::Single System::Drawing::Font::get_SizeInPoints()
	IL_03b0:            V_3=Temp_53;                                                //stloc.3
	IL_03b1:                                                                        //ldloc.0
	IL_03b2:                                                                        //ldstr				L"\x6425\x5A27\x4529\x5B2B\x5D2D\x552F\x4031\x7233\x5935\x5637\x4E39"
	IL_03b7:                                                                        //ldloc				V_13
	IL_03bb:            Temp_54=a(L"\x6425\x5A27\x4529\x5B2B\x5D2D\x552F\x4031\x7233\x5935\x5637\x4E39",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c0:            Temp_55=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_03c5:            Temp_56=V_0->GetProperty(Temp_54,Temp_55);                  //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^,System::String^)
	IL_03ca:            V_4=Temp_56;                                                //stloc.s				V_4
	IL_03cc:                                                                        //ldc.i4				0xc
	IL_03d1:            V_12=12;                                                    //stloc				V_12
	IL_03d5:            /*goto IL_000e;*/goto IL_03da;                              //br				IL_000e
	IL_03da:                                                                        //ldloc.s				V_4
	IL_03dc:            if(V_4==nullptr)goto IL_0338;                               //brfalse				IL_0338
	IL_03e1:                                                                        //ldc.i4				0x4
	IL_03e6:            V_12=4;                                                     //stloc				V_12
	IL_03ea:            /*goto IL_000e;*/goto IL_03ef;                              //br				IL_000e
	IL_03ef:            goto IL_0581;                                               //br				IL_0581
	IL_03f4:                                                                        //ldc.i4				0x25
	IL_03f9:            V_12=37;                                                    //stloc				V_12
	IL_03fd:            /*goto IL_000e;*/goto IL_0402;                              //br				IL_000e
	IL_0402:                                                                        //ldloc.s				V_5
	IL_0404:                                                                        //ldc.i4.0
	IL_0405:                                                                        //ldelem.ref
	IL_0406:            Temp_62=V_5[0]->Length;                                     //callvirt				System::Int32 System::String::get_Length()
	IL_040b:            if(Temp_62==0)goto IL_02e8;                                 //brfalse				IL_02e8
	IL_0410:                                                                        //ldc.i4				0x9
	IL_0415:            V_12=9;                                                     //stloc				V_12
	IL_0419:            /*goto IL_000e;*/goto IL_041e;                              //br				IL_000e
	IL_041e:            goto IL_0154;                                               //br				IL_0154
	IL_0423:                                                                        //ldc.i4				0x10
	IL_0428:            V_12=16;                                                    //stloc				V_12
	IL_042c:            /*goto IL_000e;*/goto IL_0431;                              //br				IL_000e
	IL_0431:                                                                        //ldloc.s				V_5
	IL_0433:                                                                        //ldc.i4.1
	IL_0434:                                                                        //ldelem.ref
	IL_0435:            Temp_31=V_5[1]->Length;                                     //callvirt				System::Int32 System::String::get_Length()
	IL_043a:            if(Temp_31==0)goto IL_0338;                                 //brfalse				IL_0338
	IL_043f:                                                                        //ldc.i4				0xe
	IL_0444:            V_12=14;                                                    //stloc				V_12
	IL_0448:            /*goto IL_000e;*/goto IL_044d;                              //br				IL_000e
	IL_044d:            goto IL_044f;                                               //br.s				IL_044f
	IL_044f:                                                                        //ldloc.s				V_5
	IL_0451:                                                                        //ldc.i4.1
	IL_0452:                                                                        //ldelem.ref
	IL_0453:            Temp_28=V_5[1]->Trim();                                     //callvirt				System::String^ System::String::Trim()
	IL_0458:            Temp_29=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_045d:            Temp_30=System::Single::Parse(Temp_28,safe_cast<System::IFormatProvider^>(Temp_29));//call				System::Single System::Single::Parse(System::String^,System::IFormatProvider^)
	IL_0462:            V_3=Temp_30;                                                //stloc.3
	IL_0463:                                                                        //ldc.i4				0x3
	IL_0468:            V_12=3;                                                     //stloc				V_12
	IL_046c:            /*goto IL_000e;*/goto IL_0471;                              //br				IL_000e
	IL_0471:            goto IL_0338;                                               //br				IL_0338
	IL_0476:                                                                        //ldc.i4				0x1c
	IL_047b:            V_12=28;                                                    //stloc				V_12
	IL_047f:            /*goto IL_000e;*/goto IL_0484;                              //br				IL_000e
	IL_0484:                                                                        //ldarg.0
	IL_0485:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133"
	IL_048a:                                                                        //ldloc				V_13
	IL_048e:            Temp_41=a(L"\x4025\x4727\x4429\x582B\x5D2D\x592F\x4831\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0493:            Temp_42=this->M_x12(Temp_41);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_0498:            if(Temp_42==nullptr)goto IL_024f;                           //brfalse				IL_024f
	IL_049d:                                                                        //ldc.i4				0x6
	IL_04a2:            V_12=6;                                                     //stloc				V_12
	IL_04a6:            /*goto IL_000e;*/goto IL_04ab;                              //br				IL_000e
	IL_04ab:            /*goto IL_0171;*/goto IL_016C01;                            //br				IL_0171
	IL_04b0:                                                                        //ldc.i4				0x1d
	IL_04b5:            V_12=29;                                                    //stloc				V_12
	IL_04b9:            /*goto IL_000e;*/goto IL_04be;                              //br				IL_000e
	IL_04be:                                                                        //ldloc.s				V_9
	IL_04c0:                                                                        //ldc.i4.1
	IL_04c1:                                                                        //ldelem.ref
	IL_04c2:            Temp_50=V_9[1]->Length;                                     //callvirt				System::Int32 System::String::get_Length()
	IL_04c7:            if(Temp_50==0)goto IL_00fc;                                 //brfalse				IL_00fc
	IL_04cc:                                                                        //ldc.i4				0x5
	IL_04d1:            V_12=5;                                                     //stloc				V_12
	IL_04d5:            /*goto IL_000e;*/goto IL_04da;                              //br				IL_000e
	IL_04da:            goto IL_0227;                                               //br				IL_0227
	IL_04df:                                                                        //ldc.i4				0x1b
	IL_04e4:            V_12=27;                                                    //stloc				V_12
	IL_04e8:            /*goto IL_000e;*/goto IL_04ed;                              //br				IL_000e
	IL_04ed:                                                                        //ldloc.s				V_8
	IL_04ef:            Temp_40=V_8->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_04f4:                                                                        //ldc.i4.0
	IL_04f5:            if(Temp_40<=0)goto IL_00fc;                                 //ble				IL_00fc
	IL_04fa:                                                                        //ldc.i4				0x1a
	IL_04ff:            V_12=26;                                                    //stloc				V_12
	IL_0503:            /*goto IL_000e;*/goto IL_0508;                              //br				IL_000e
	IL_0508:            goto IL_050a;                                               //br.s				IL_050a
	IL_050a:                                                                        //ldloc.s				V_8
	IL_050c:                                                                        //ldc.i4.1
	IL_050d:            Temp_38=gcnew array<System::Char>(1);                       //newarr				System::Char
	IL_0512:            V_11=Temp_38;                                               //stloc.s				V_11
	IL_0514:                                                                        //ldloc.s				V_11
	IL_0516:                                                                        //ldc.i4.0
	IL_0517:                                                                        //ldc.i4.s				44
	IL_0519:            V_11[0]=(System::Char)44;                                   //stelem.i2
	IL_051a:                                                                        //ldloc.s				V_11
	IL_051c:            Temp_39=V_8->Split(V_11);                                   //callvirt				array<System::String^>^ System::String::Split(array<System::Char>^)
	IL_0521:            V_9=Temp_39;                                                //stloc.s				V_9
	IL_0523:                                                                        //ldc.i4				0x22
	IL_0528:            V_12=34;                                                    //stloc				V_12
	IL_052c:            /*goto IL_000e;*/goto IL_0531;                              //br				IL_000e
	IL_0531:                                                                        //ldloc.s				V_9
	IL_0533:            Temp_60=V_9->Length;                                        //ldlen
	IL_0534:                                                                        //conv.i4
	IL_0535:                                                                        //ldc.i4.0
	IL_0536:            if(Temp_60<=0)goto IL_0556;                                 //ble.s				IL_0556
	IL_0538:                                                                        //ldc.i4				0xa
	IL_053d:            V_12=10;                                                    //stloc				V_12
	IL_0541:            /*goto IL_000e;*/goto IL_0546;                              //br				IL_000e
	IL_0546:                                                                        //ldc.i4.4
	IL_0547:                                                                        //dup
	IL_0548:                                                                        //dup
	IL_0549:                                                                        //ldc.i4.0
	IL_054a:                                                                        //add
	IL_054b:                                                                        //bgt				IL_0547
	IL_0550:                                                                        //pop
	IL_0551:            goto IL_02b9;                                               //br				IL_02b9
	IL_0556:                                                                        //ldc.i4				0x21
	IL_055b:            V_12=33;                                                    //stloc				V_12
	IL_055f:            /*goto IL_000e;*/goto IL_0564;                              //br				IL_000e
	IL_0564:                                                                        //ldloc.s				V_9
	IL_0566:            Temp_59=V_9->Length;                                        //ldlen
	IL_0567:                                                                        //conv.i4
	IL_0568:                                                                        //ldc.i4.1
	IL_0569:            if(Temp_59<=1)goto IL_00fc;                                 //ble				IL_00fc
	IL_056e:                                                                        //ldc.i4				0xf
	IL_0573:            V_12=15;                                                    //stloc				V_12
	IL_0577:            /*goto IL_000e;*/goto IL_057c;                              //br				IL_000e
	IL_057c:            goto IL_04b0;                                               //br				IL_04b0
	IL_0581:                                                                        //ldc.i4				0x2
	IL_0586:            V_12=2;                                                     //stloc				V_12
	IL_058a:            /*goto IL_000e;*/goto IL_058f;                              //br				IL_000e
	IL_058f:                                                                        //ldloc.s				V_4
	IL_0591:            Temp_4=V_4->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0596:                                                                        //ldc.i4.0
	IL_0597:            if(Temp_4<=0)goto IL_0338;                                  //ble				IL_0338
	IL_059c:                                                                        //ldc.i4				0x18
	IL_05a1:            V_12=24;                                                    //stloc				V_12
	IL_05a5:            /*goto IL_000e;*/goto IL_05aa;                              //br				IL_000e
	IL_05aa:            goto IL_01e3;                                               //br				IL_01e3
	IL_05af:                                                                        //ldarg.0
	IL_05b0:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133"
	IL_05b5:                                                                        //ldloc				V_13
	IL_05b9:            Temp_23=a(L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05be:            Temp_24=this->M_x12(Temp_23);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_05c3:            V_2=Temp_24;                                                //stloc.2
	IL_05c4:                                                                        //ldarg.0
	IL_05c5:                                                                        //ldstr				L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133"
	IL_05ca:                                                                        //ldloc				V_13
	IL_05ce:            Temp_25=a(L"\x4025\x4727\x4429\x582B\x402D\x512F\x5F31\x5133",V_13);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05d3:            Temp_26=this->M_x12(Temp_25);                               //call				System::String^ Reflector::Application::ApplicationManager::M_x12(System::String^)
	IL_05d8:            V_6=Temp_26;                                                //stloc.s				V_6
	IL_05da:                                                                        //ldc.i4				0x24
	IL_05df:            V_12=36;                                                    //stloc				V_12
	IL_05e3:            /*goto IL_000e;*/goto IL_05e8;                              //br				IL_000e
	IL_05e8:            goto IL_0476;                                               //br				IL_0476
	IL_05ed:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x2(Reflector::ICommandBar^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::ICommandBarMenu^ Temp_4 = nullptr;
	System::Drawing::Image^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Drawing::Image^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_15 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	Reflector::ICommandBarMenu^ Temp_21 = nullptr;
	System::Drawing::Image^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Drawing::Image^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Drawing::Image^ Temp_28 = nullptr;
	System::String^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_31 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_32 = nullptr;
	System::Drawing::Image^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::String^ Temp_35 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_36 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_37 = nullptr;
	System::Drawing::Image^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::Drawing::Image^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_44 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	System::Drawing::Image^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::String^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	Reflector::ICommandBarMenu^ Temp_53 = nullptr;
	System::Drawing::Image^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_59 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_60 = nullptr;
	System::Drawing::Image^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::String^ Temp_63 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_64 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::String^ Temp_68 = nullptr;
	System::String^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::String^ Temp_71 = nullptr;
	Reflector::ICommandBarMenu^ Temp_72 = nullptr;
	System::Drawing::Image^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::String^ Temp_77 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_78 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	System::String^ Temp_81 = nullptr;
	//local variables.
	Reflector::ICommandBarMenu^ V_0 = nullptr;
	Reflector::ICommandBarMenu^ V_1 = nullptr;
	Reflector::ICommandBarMenu^ V_2 = nullptr;
	Reflector::ICommandBarMenu^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_4=12;                                                     //stloc				V_4
	IL_0009:                                                                        //ldc.i4.7
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.5
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldtoken				Root::T_x107
	IL_001a:            Temp_0=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_001f:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0024:                                                                        //castclass				Root::T_x107
	IL_0029:                                                                        //pop
	IL_002a:                                                                        //ldarg.0
	IL_002b:                                                                        //ldarg.1
	IL_002c:                                                                        //ldstr				L"\x6C29\x452B\x422D\x552F"
	IL_0031:                                                                        //ldloc				V_4
	IL_0035:            Temp_2=a(L"\x6C29\x452B\x422D\x552F",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003a:                                                                        //ldstr				L"\x0C29\x6A2B\x472D\x5C2F\x5731"
	IL_003f:                                                                        //ldloc				V_4
	IL_0043:            Temp_3=a(L"\x0C29\x6A2B\x472D\x5C2F\x5731",V_4);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0048:            Temp_4=this->M_x1(A_0,Temp_2,Temp_3);                       //call				Reflector::ICommandBarMenu^ Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::String^,System::String^)
	IL_004d:            V_0=Temp_4;                                                 //stloc.0
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //ldloc.0
	IL_0050:            Temp_5=Root::T_x106::M_x56();                               //call				System::Drawing::Image^ Root::T_x106::M_x56()
	IL_0055:                                                                        //ldstr				L"\x0C29\x632B\x5E2D\x552F\x5C31\x1A33\x1835\x1637"
	IL_005a:                                                                        //ldloc				V_4
	IL_005e:            Temp_6=a(L"\x0C29\x632B\x5E2D\x552F\x5C31\x1A33\x1835\x1637",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0063:                                                                        //ldc.i4				0x2004f
	IL_0068:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0C49\x254B\x224D\x354F"
	IL_006d:                                                                        //ldloc				V_4
	IL_0071:            Temp_7=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0C49\x254B\x224D\x354F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0076:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_0),Temp_5,Temp_6,safe_cast<System::Windows::Forms::Keys>(131151),Temp_7);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_007b:                                                                        //ldarg.0
	IL_007c:                                                                        //ldloc.0
	IL_007d:                                                                        //ldnull
	IL_007e:                                                                        //ldstr				L"\x6529\x5C2B\x4B2D\x5E2F\x1231\x7733\x1035\x5937\x5939\x543B\x5B3D\x6E3F\x6C41\x6A43"
	IL_0083:                                                                        //ldloc				V_4
	IL_0087:            Temp_8=a(L"\x6529\x5C2B\x4B2D\x5E2F\x1231\x7733\x1035\x5937\x5939\x543B\x5B3D\x6E3F\x6C41\x6A43",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_008c:                                                                        //ldc.i4.0
	IL_008d:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0949\x2D4B\x2D4D\x384F\x3751"
	IL_0092:                                                                        //ldloc				V_4
	IL_0096:            Temp_9=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0949\x2D4B\x2D4D\x384F\x3751",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009b:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_0),safe_cast<System::Drawing::Image^>(nullptr),Temp_8,safe_cast<System::Windows::Forms::Keys>(0),Temp_9);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_00a0:                                                                        //ldarg.0
	IL_00a1:                                                                        //ldloc.0
	IL_00a2:                                                                        //ldnull
	IL_00a3:                                                                        //ldstr				L"\x6529\x5C2B\x4B2D\x5E2F\x1231\x1233\x7A35\x5137\x4939\x483B\x103D\x6E3F\x6C41"
	IL_00a8:                                                                        //ldloc				V_4
	IL_00ac:            Temp_10=a(L"\x6529\x5C2B\x4B2D\x5E2F\x1231\x1233\x7A35\x5137\x4939\x483B\x103D\x6E3F\x6C41",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b1:                                                                        //ldc.i4				0x2004c
	IL_00b6:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0649\x254B\x3D4D\x244F"
	IL_00bb:                                                                        //ldloc				V_4
	IL_00bf:            Temp_11=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x2345\x2647\x0649\x254B\x3D4D\x244F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00c4:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_0),safe_cast<System::Drawing::Image^>(nullptr),Temp_10,safe_cast<System::Windows::Forms::Keys>(131148),Temp_11);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_00c9:                                                                        //ldarg.0
	IL_00ca:                                                                        //ldloc.0
	IL_00cb:            Temp_12=Root::T_x106::M_x18();                              //call				System::Drawing::Image^ Root::T_x106::M_x18()
	IL_00d0:                                                                        //ldstr				L"\x0C29\x6F2B\x422D\x5F2F\x4131\x5133"
	IL_00d5:                                                                        //ldloc				V_4
	IL_00d9:            Temp_13=a(L"\x0C29\x6F2B\x422D\x5F2F\x4131\x5133",V_4);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:                                                                        //ldc.i4.0
	IL_00df:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0141\x2843\x2945\x3B47\x2F49\x0A4B\x274D\x3C4F\x3751"
	IL_00e4:                                                                        //ldloc				V_4
	IL_00e8:            Temp_14=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0141\x2843\x2945\x3B47\x2F49\x0A4B\x274D\x3C4F\x3751",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ed:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_0),Temp_12,Temp_13,safe_cast<System::Windows::Forms::Keys>(0),Temp_14);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_00f2:                                                                        //ldloc.0
	IL_00f3:            Temp_15=safe_cast<Reflector::ICommandBar^>(V_0)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_00f8:            Temp_16=Temp_15->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_00fd:                                                                        //pop
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:                                                                        //ldloc.0
	IL_0100:                                                                        //ldnull
	IL_0101:                                                                        //ldstr				L"\x6F29\x0A2B\x562D\x592F\x4631"
	IL_0106:                                                                        //ldloc				V_4
	IL_010a:            Temp_17=a(L"\x6F29\x0A2B\x562D\x592F\x4631",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010f:                                                                        //ldc.i4.0
	IL_0110:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0741\x3C43\x2F45\x3C47"
	IL_0115:                                                                        //ldloc				V_4
	IL_0119:            Temp_18=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0741\x3C43\x2F45\x3C47",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011e:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_0),safe_cast<System::Drawing::Image^>(nullptr),Temp_17,safe_cast<System::Windows::Forms::Keys>(0),Temp_18);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0123:                                                                        //ldarg.0
	IL_0124:                                                                        //ldarg.1
	IL_0125:                                                                        //ldstr				L"\x7C29\x452B\x4B2D\x472F"
	IL_012a:                                                                        //ldloc				V_4
	IL_012e:            Temp_19=a(L"\x7C29\x452B\x4B2D\x472F",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0133:                                                                        //ldstr				L"\x0C29\x7A2B\x472D\x552F\x4531"
	IL_0138:                                                                        //ldloc				V_4
	IL_013c:            Temp_20=a(L"\x0C29\x7A2B\x472D\x552F\x4531",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0141:            Temp_21=this->M_x1(A_0,Temp_19,Temp_20);                    //call				Reflector::ICommandBarMenu^ Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::String^,System::String^)
	IL_0146:            V_1=Temp_21;                                                //stloc.1
	IL_0147:                                                                        //ldarg.0
	IL_0148:                                                                        //ldloc.1
	IL_0149:            Temp_22=Root::T_x106::M_x10();                              //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_014e:                                                                        //ldstr				L"\x0C29\x682B\x412D\x532F\x4731\x5933\x5335\x5637\x4E39\x5D3B\x4A3D\x293F\x2D41\x2A43"
	IL_0153:                                                                        //ldloc				V_4
	IL_0157:            Temp_23=a(L"\x0C29\x682B\x412D\x532F\x4731\x5933\x5335\x5637\x4E39\x5D3B\x4A3D\x293F\x2D41\x2A43",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_015c:                                                                        //ldc.i4.s				112
	IL_015e:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F"
	IL_0163:                                                                        //ldloc				V_4
	IL_0167:            Temp_24=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2549\x2F4B\x3B4D\x3D4F\x3751\x3A53\x2255\x3957\x2E59\x355B\x315D\x0E5F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016c:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_22,Temp_23,safe_cast<System::Windows::Forms::Keys>(112),Temp_24);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0171:                                                                        //ldarg.0
	IL_0172:                                                                        //ldloc.1
	IL_0173:            Temp_25=Root::T_x106::M_x4();                               //call				System::Drawing::Image^ Root::T_x106::M_x4()
	IL_0178:                                                                        //ldstr				L"\x6829\x432B\x412D\x5B2F\x1431\x5933\x5735\x4A37\x5139\x4F3B"
	IL_017d:                                                                        //ldloc				V_4
	IL_0181:            Temp_26=a(L"\x6829\x432B\x412D\x5B2F\x1431\x5933\x5735\x4A37\x5139\x4F3B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0186:                                                                        //ldc.i4.s				113
	IL_0188:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_018d:                                                                        //ldloc				V_4
	IL_0191:            Temp_27=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0196:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_25,Temp_26,safe_cast<System::Windows::Forms::Keys>(113),Temp_27);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_019b:                                                                        //ldarg.0
	IL_019c:                                                                        //ldloc.1
	IL_019d:            Temp_28=Root::T_x106::M_x7();                               //call				System::Drawing::Image^ Root::T_x106::M_x7()
	IL_01a2:                                                                        //ldstr				L"\x0C29\x7F2B\x4B2D\x512F\x4031\x5733\x5E35"
	IL_01a7:                                                                        //ldloc				V_4
	IL_01ab:            Temp_29=a(L"\x0C29\x7F2B\x4B2D\x512F\x4031\x5733\x5E35",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b0:                                                                        //ldc.i4.s				114
	IL_01b2:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1141\x2143\x2745\x3A47\x2949\x244B"
	IL_01b7:                                                                        //ldloc				V_4
	IL_01bb:            Temp_30=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1141\x2143\x2745\x3A47\x2949\x244B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c0:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_28,Temp_29,safe_cast<System::Windows::Forms::Keys>(114),Temp_30);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01c5:                                                                        //ldloc.1
	IL_01c6:            Temp_31=safe_cast<Reflector::ICommandBar^>(V_1)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_01cb:            Temp_32=Temp_31->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_01d0:                                                                        //pop
	IL_01d1:                                                                        //ldarg.0
	IL_01d2:                                                                        //ldloc.1
	IL_01d3:            Temp_33=Root::T_x106::M_x5();                               //call				System::Drawing::Image^ Root::T_x106::M_x5()
	IL_01d8:                                                                        //ldstr				L"\x0C29\x7E2B\x4B2D\x562F\x4031\x5133\x4535\x5037"
	IL_01dd:                                                                        //ldloc				V_4
	IL_01e1:            Temp_34=a(L"\x0C29\x7E2B\x4B2D\x562F\x4031\x5133\x4535\x5037",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01e6:                                                                        //ldc.i4.s				116
	IL_01e8:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1041\x2143\x2045\x3A47\x2F49\x3F4B\x264D"
	IL_01ed:                                                                        //ldloc				V_4
	IL_01f1:            Temp_35=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1041\x2143\x2045\x3A47\x2F49\x3F4B\x264D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f6:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_33,Temp_34,safe_cast<System::Windows::Forms::Keys>(116),Temp_35);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01fb:                                                                        //ldloc.1
	IL_01fc:            Temp_36=safe_cast<Reflector::ICommandBar^>(V_1)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0201:            Temp_37=Temp_36->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0206:                                                                        //pop
	IL_0207:                                                                        //ldarg.0
	IL_0208:                                                                        //ldloc.1
	IL_0209:            Temp_38=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_020e:                                                                        //ldstr				L"\x0C29\x6E2B\x4F2D\x532F\x5931"
	IL_0213:                                                                        //ldloc				V_4
	IL_0217:            Temp_39=a(L"\x0C29\x6E2B\x4F2D\x532F\x5931",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_021c:                                                                        //ldc.i4				0x40025
	IL_0221:                                                                        //ldstr				L"\x6B29\x5F2B\x5D2D\x552F\x5F31\x5633\x5A35\x4137\x7839\x4E3B\x513D\x373F\x3141\x2143\x3445\x6647\x0D49\x234B\x0C4D\x314F\x3151\x3F53"
	IL_0226:                                                                        //ldloc				V_4
	IL_022a:            Temp_40=a(L"\x6B29\x5F2B\x5D2D\x552F\x5F31\x5633\x5A35\x4137\x7839\x4E3B\x513D\x373F\x3141\x2143\x3445\x6647\x0D49\x234B\x0C4D\x314F\x3151\x3F53",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_022f:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_38,Temp_39,safe_cast<System::Windows::Forms::Keys>(262181),Temp_40);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0234:                                                                        //ldarg.0
	IL_0235:                                                                        //ldloc.1
	IL_0236:            Temp_41=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_023b:                                                                        //ldstr				L"\x0C29\x6A2B\x412D\x422F\x4531\x5533\x4435\x5C37"
	IL_0240:                                                                        //ldloc				V_4
	IL_0244:            Temp_42=a(L"\x0C29\x6A2B\x412D\x422F\x4531\x5533\x4435\x5C37",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0249:                                                                        //ldc.i4				0x40027
	IL_024e:                                                                        //ldstr				L"\x6B29\x5F2B\x5D2D\x552F\x5F31\x5633\x5A35\x4137\x7839\x4E3B\x513D\x373F\x3141\x2143\x3445\x6647\x0D49\x234B\x084D\x3F4F\x2051\x2353\x3755\x2A57\x3E59"
	IL_0253:                                                                        //ldloc				V_4
	IL_0257:            Temp_43=a(L"\x6B29\x5F2B\x5D2D\x552F\x5F31\x5633\x5A35\x4137\x7839\x4E3B\x513D\x373F\x3141\x2143\x3445\x6647\x0D49\x234B\x084D\x3F4F\x2051\x2353\x3755\x2A57\x3E59",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025c:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_41,Temp_42,safe_cast<System::Windows::Forms::Keys>(262183),Temp_43);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0261:                                                                        //ldloc.1
	IL_0262:            Temp_44=safe_cast<Reflector::ICommandBar^>(V_1)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0267:            Temp_45=Temp_44->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_026c:                                                                        //pop
	IL_026d:                                                                        //ldarg.0
	IL_026e:                                                                        //ldloc.1
	IL_026f:                                                                        //ldnull
	IL_0270:                                                                        //ldstr				L"\x0C29\x6D2B\x4A2D\x542F\x1F31\x7D33\x5835\x4B37\x1439\x123B\x103D"
	IL_0275:                                                                        //ldloc				V_4
	IL_0279:            Temp_46=a(L"\x0C29\x6D2B\x4A2D\x542F\x1F31\x7D33\x5835\x4B37\x1439\x123B\x103D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027e:                                                                        //ldc.i4.0
	IL_027f:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0341\x2043\x2245\x0147\x2449\x3F4B"
	IL_0284:                                                                        //ldloc				V_4
	IL_0288:            Temp_47=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0341\x2043\x2245\x0147\x2449\x3F4B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028d:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),safe_cast<System::Drawing::Image^>(nullptr),Temp_46,safe_cast<System::Windows::Forms::Keys>(0),Temp_47);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0292:                                                                        //ldarg.0
	IL_0293:                                                                        //ldloc.1
	IL_0294:            Temp_48=Root::T_x106::M_x14();                              //call				System::Drawing::Image^ Root::T_x106::M_x14()
	IL_0299:                                                                        //ldstr				L"\x0C29\x632B\x5E2D\x442F\x5B31\x5B33\x5835\x4B37\x1439\x123B\x103D"
	IL_029e:                                                                        //ldloc				V_4
	IL_02a2:            Temp_49=a(L"\x0C29\x632B\x5E2D\x442F\x5B31\x5B33\x5835\x4B37\x1439\x123B\x103D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a7:                                                                        //ldc.i4.0
	IL_02a8:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x3245\x2147\x2549\x224B\x3D4D"
	IL_02ad:                                                                        //ldloc				V_4
	IL_02b1:            Temp_50=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0D41\x3443\x3245\x2147\x2549\x224B\x3D4D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b6:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_1),Temp_48,Temp_49,safe_cast<System::Windows::Forms::Keys>(0),Temp_50);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_02bb:                                                                        //ldarg.0
	IL_02bc:                                                                        //ldarg.1
	IL_02bd:                                                                        //ldstr				L"\x7E29\x432B\x412D\x5C2F\x4131"
	IL_02c2:                                                                        //ldloc				V_4
	IL_02c6:            Temp_51=a(L"\x7E29\x432B\x412D\x5C2F\x4131",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02cb:                                                                        //ldstr				L"\x0C29\x782B\x412D\x5F2F\x5E31\x4733"
	IL_02d0:                                                                        //ldloc				V_4
	IL_02d4:            Temp_52=a(L"\x0C29\x782B\x412D\x5F2F\x5E31\x4733",V_4);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d9:            Temp_53=this->M_x1(A_0,Temp_51,Temp_52);                    //call				Reflector::ICommandBarMenu^ Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::String^,System::String^)
	IL_02de:            V_2=Temp_53;                                                //stloc.2
	IL_02df:                                                                        //ldarg.0
	IL_02e0:                                                                        //ldloc.2
	IL_02e1:            Temp_54=Root::T_x106::M_x13();                              //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_02e6:                                                                        //ldstr				L"\x0C29\x682B\x472D\x432F\x5331\x4733\x4535\x5D37\x5739\x5E3B\x523D\x253F\x3041"
	IL_02eb:                                                                        //ldloc				V_4
	IL_02ef:            Temp_55=a(L"\x0C29\x682B\x472D\x432F\x5331\x4733\x4535\x5D37\x5739\x5E3B\x523D\x253F\x3041",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f4:                                                                        //ldc.i4.s				32
	IL_02f6:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D"
	IL_02fb:                                                                        //ldloc				V_4
	IL_02ff:            Temp_56=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0C47\x2349\x3F4B\x2F4D\x234F\x2151\x3153\x3B55\x3A57\x3659\x395B\x2C5D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0304:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_2),Temp_54,Temp_55,safe_cast<System::Windows::Forms::Keys>(32),Temp_56);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0309:                                                                        //ldarg.0
	IL_030a:                                                                        //ldloc.2
	IL_030b:                                                                        //ldnull
	IL_030c:                                                                        //ldstr				L"\x0C29\x6D2B\x402D\x512F\x5E31\x4D33\x4C35\x5D37\x4839"
	IL_0311:                                                                        //ldloc				V_4
	IL_0315:            Temp_57=a(L"\x0C29\x6D2B\x402D\x512F\x5E31\x4D33\x4C35\x5D37\x4839",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_031a:                                                                        //ldc.i4				0x20052
	IL_031f:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455"
	IL_0324:                                                                        //ldloc				V_4
	IL_0328:            Temp_58=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2A41\x2B43\x3145\x0947\x2449\x2D4B\x224D\x294F\x2851\x3153\x2455",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_032d:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_2),safe_cast<System::Drawing::Image^>(nullptr),Temp_57,safe_cast<System::Windows::Forms::Keys>(131154),Temp_58);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0332:                                                                        //ldloc.2
	IL_0333:            Temp_59=safe_cast<Reflector::ICommandBar^>(V_2)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0338:            Temp_60=Temp_59->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_033d:                                                                        //pop
	IL_033e:                                                                        //ldarg.0
	IL_033f:                                                                        //ldloc.2
	IL_0340:            Temp_61=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0345:                                                                        //ldstr				L"\x0C29\x6F2B\x412D\x402F\x4B31"
	IL_034a:                                                                        //ldloc				V_4
	IL_034e:            Temp_62=a(L"\x0C29\x6F2B\x412D\x402F\x4B31",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0353:                                                                        //ldc.i4				0x20043
	IL_0358:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x033F\x2D41\x3443\x3F45"
	IL_035d:                                                                        //ldloc				V_4
	IL_0361:            Temp_63=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x033F\x2D41\x3443\x3F45",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0366:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_2),Temp_61,Temp_62,safe_cast<System::Windows::Forms::Keys>(131139),Temp_63);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_036b:                                                                        //ldloc.2
	IL_036c:            Temp_64=safe_cast<Reflector::ICommandBar^>(V_2)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0371:            Temp_65=Temp_64->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0376:                                                                        //pop
	IL_0377:                                                                        //ldarg.0
	IL_0378:                                                                        //ldloc.2
	IL_0379:                                                                        //ldnull
	IL_037a:                                                                        //ldstr				L"\x7929\x492B\x4F2D\x422F\x5131\x5C33\x1635\x1E37\x7D39\x533B\x513D\x273F\x2E41\x2143"
	IL_037f:                                                                        //ldloc				V_4
	IL_0383:            Temp_66=a(L"\x7929\x492B\x4F2D\x422F\x5131\x5C33\x1635\x1E37\x7D39\x533B\x513D\x273F\x2E41\x2143",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0388:                                                                        //ldc.i4				0x20047
	IL_038d:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355"
	IL_0392:                                                                        //ldloc				V_4
	IL_0396:            Temp_67=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x0B4B\x214D\x3F4F\x3551\x3853\x3355",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_039b:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_2),safe_cast<System::Drawing::Image^>(nullptr),Temp_66,safe_cast<System::Windows::Forms::Keys>(131143),Temp_67);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_03a0:                                                                        //ldarg.0
	IL_03a1:                                                                        //ldloc.2
	IL_03a2:                                                                        //ldnull
	IL_03a3:                                                                        //ldstr				L"\x7929\x492B\x4F2D\x422F\x5131\x5C33\x1635\x1E37\x7739\x6F3B\x7A3D\x0E3F"
	IL_03a8:                                                                        //ldloc				V_4
	IL_03ac:            Temp_68=a(L"\x7929\x492B\x4F2D\x422F\x5131\x5C33\x1635\x1E37\x7739\x6F3B\x7A3D\x0E3F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b1:                                                                        //ldc.i4				0x2004d
	IL_03b6:                                                                        //ldstr				L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51"
	IL_03bb:                                                                        //ldloc				V_4
	IL_03bf:            Temp_69=a(L"\x6B29\x4F2B\x5A2D\x592F\x4431\x5133\x7F35\x4C37\x5F39\x513B\x103D\x133F\x2741\x2543\x3445\x2B47\x2249\x014B\x3D4D\x344F\x3C51",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c4:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_2),safe_cast<System::Drawing::Image^>(nullptr),Temp_68,safe_cast<System::Windows::Forms::Keys>(131149),Temp_69);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_03c9:                                                                        //ldarg.0
	IL_03ca:                                                                        //ldarg.1
	IL_03cb:                                                                        //ldstr				L"\x6229\x492B\x422D\x402F"
	IL_03d0:                                                                        //ldloc				V_4
	IL_03d4:            Temp_70=a(L"\x6229\x492B\x422D\x402F",V_4);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d9:                                                                        //ldstr				L"\x0C29\x642B\x4B2D\x5C2F\x4231"
	IL_03de:                                                                        //ldloc				V_4
	IL_03e2:            Temp_71=a(L"\x0C29\x642B\x4B2D\x5C2F\x4231",V_4);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e7:            Temp_72=this->M_x1(A_0,Temp_70,Temp_71);                    //call				Reflector::ICommandBarMenu^ Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::String^,System::String^)
	IL_03ec:            V_3=Temp_72;                                                //stloc.3
	IL_03ed:                                                                        //ldarg.0
	IL_03ee:                                                                        //ldloc.3
	IL_03ef:            Temp_73=Root::T_x106::M_x2();                               //call				System::Drawing::Image^ Root::T_x106::M_x2()
	IL_03f4:                                                                        //ldstr				L"\x7929\x492B\x402D\x542F\x1231\x1233\x7035\x5D37\x5F39\x583B\x5C3D\x213F\x2141\x2F43"
	IL_03f9:                                                                        //ldloc				V_4
	IL_03fd:            Temp_74=a(L"\x7929\x492B\x402D\x542F\x1231\x1233\x7035\x5D37\x5F39\x583B\x5C3D\x213F\x2141\x2F43",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0402:                                                                        //ldc.i4.0
	IL_0403:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1141\x2143\x2845\x2C47\x0C49\x294B\x2B4D\x344F\x3051\x3553\x3555\x3357"
	IL_0408:                                                                        //ldloc				V_4
	IL_040c:            Temp_75=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x1141\x2143\x2845\x2C47\x0C49\x294B\x2B4D\x344F\x3051\x3553\x3555\x3357",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0411:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_3),Temp_73,Temp_74,safe_cast<System::Windows::Forms::Keys>(0),Temp_75);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0416:                                                                        //ldarg.0
	IL_0417:                                                                        //ldloc.3
	IL_0418:                                                                        //ldnull
	IL_0419:                                                                        //ldstr				L"\x6929\x442B\x4B2D\x532F\x1431\x5F33\x1635\x5E37\x5539\x4E3B\x1E3D\x153F\x3241\x2043\x2745\x3C47\x2F49\x3F4B"
	IL_041e:                                                                        //ldloc				V_4
	IL_0422:            Temp_76=a(L"\x6929\x442B\x4B2D\x532F\x1431\x5F33\x1635\x5E37\x5539\x4E3B\x1E3D\x153F\x3241\x2043\x2745\x3C47\x2F49\x3F4B",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0427:                                                                        //ldc.i4.0
	IL_0428:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0141\x2C43\x2345\x2B47\x2149\x0A4B\x214D\x224F\x0751\x2453\x3255\x3957\x2E59\x395B\x2D5D"
	IL_042d:                                                                        //ldloc				V_4
	IL_0431:            Temp_77=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0141\x2C43\x2345\x2B47\x2149\x0A4B\x214D\x224F\x0751\x2453\x3255\x3957\x2E59\x395B\x2D5D",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0436:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_3),safe_cast<System::Drawing::Image^>(nullptr),Temp_76,safe_cast<System::Windows::Forms::Keys>(0),Temp_77);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_043b:                                                                        //ldloc.3
	IL_043c:            Temp_78=safe_cast<Reflector::ICommandBar^>(V_3)->Items;     //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0441:            Temp_79=Temp_78->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0446:                                                                        //pop
	IL_0447:                                                                        //ldarg.0
	IL_0448:                                                                        //ldloc.3
	IL_0449:                                                                        //ldnull
	IL_044a:                                                                        //ldstr				L"\x0C29\x6D2B\x4C2D\x5F2F\x4731\x4033\x1635\x1637\x7439\x793B\x6A3D\x603F\x1041\x2143\x2045\x2447\x2F49\x2F4B\x3A4D\x3F4F\x2051\x7A53\x7855\x7657"
	IL_044f:                                                                        //ldloc				V_4
	IL_0453:            Temp_80=a(L"\x0C29\x6D2B\x4C2D\x5F2F\x4731\x4033\x1635\x1637\x7439\x793B\x6A3D\x603F\x1041\x2143\x2045\x2447\x2F49\x2F4B\x3A4D\x3F4F\x2051\x7A53\x7855\x7657",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0458:                                                                        //ldc.i4.0
	IL_0459:                                                                        //ldstr				L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0341\x2643\x2945\x3D47\x3E49"
	IL_045e:                                                                        //ldloc				V_4
	IL_0462:            Temp_81=a(L"\x6B29\x5C2B\x5E2D\x5C2F\x5B31\x5733\x5735\x4C37\x5339\x533B\x503D\x6E3F\x0341\x2643\x2945\x3D47\x3E49",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0467:            this->M_x1(safe_cast<Reflector::ICommandBar^>(V_3),safe_cast<System::Drawing::Image^>(nullptr),Temp_80,safe_cast<System::Windows::Forms::Keys>(0),Temp_81);//call				void Reflector::Application::ApplicationManager::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_046c:            return;                                                     //ret

}
inline System::String^ Reflector::Application::ApplicationManager::M_x2(System::Exception^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Diagnostics::StackTrace^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	array<System::Object^>^ Temp_7 = nullptr;
	System::Reflection::AssemblyName^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Reflection::AssemblyName^ Temp_12 = nullptr;
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
	System::Diagnostics::StackFrame^ Temp_23 = nullptr;
	System::Reflection::MethodBase^ Temp_24 = nullptr;
	System::Type^ Temp_25 = nullptr;
	System::Reflection::Assembly^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Globalization::CultureInfo^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	array<System::Object^>^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::Type^ Temp_34 = nullptr;
	System::Reflection::Assembly^ Temp_35 = nullptr;
	System::Type^ Temp_36 = nullptr;
	array<System::Object^>^ Temp_37 = nullptr;
	System::String^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	//local variables.
	System::Diagnostics::StackTrace^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Reflection::Assembly^ V_2 = nullptr;
	System::String^ V_3 = nullptr;
	array<System::Object^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x6
	IL_0005:            V_6=6;                                                      //stloc				V_6
	IL_0009:            goto IL_0068;                                               //br.s				IL_0068
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_0304;case 1:goto IL_01a1;case 2:goto IL_02f1;case 3:goto IL_01fe;case 4:goto IL_00f5;case 5:goto IL_02cf;case 6:goto IL_00d6;case 7:goto IL_00c3;case 8:goto IL_012b;case 9:goto IL_010c;case 10:goto IL_0152;case 11:goto IL_0326;case 12:goto IL_0142;case 13:goto IL_0172;case 14:goto IL_0228;case 15:goto IL_0091;case 16:goto IL_00a4;case 17:goto IL_01b4;case 18:goto IL_01dc;case 19:goto IL_0182;case 20:goto IL_01c9;};//switch				(IL_0304,IL_01a1,IL_02f1,IL_01fe,IL_00f5,IL_02cf,IL_00d6,IL_00c3,IL_012b,IL_010c,IL_0152,IL_0326,IL_0142,IL_0172,IL_0228,IL_0091,IL_00a4,IL_01b4,IL_01dc,IL_0182,IL_01c9)
	IL_0068:                                                                        //ldarg.1
	IL_0069:            Temp_0=gcnew System::Diagnostics::StackTrace(A_0);          //newobj				void System::Diagnostics::StackTrace::.ctor(System::Exception^)
	IL_006e:            V_0=Temp_0;                                                 //stloc.0
	IL_006f:                                                                        //ldloc.0
	IL_0070:            Temp_1=V_0->FrameCount;                                     //callvirt				System::Int32 System::Diagnostics::StackTrace::get_FrameCount()
	IL_0075:                                                                        //ldc.i4.1
	IL_0076:                                                                        //sub
	IL_0077:            V_1=(Temp_1 - 1);                                           //stloc.1
	IL_0078:                                                                        //ldc.i4.7
	IL_0079:                                                                        //dup
	IL_007a:                                                                        //dup
	IL_007b:                                                                        //ldc.i4.3
	IL_007c:                                                                        //add
	IL_007d:                                                                        //bgt				IL_0079
	IL_0082:                                                                        //pop
	IL_0083:                                                                        //ldc.i4				0xf
	IL_0088:            V_5=15;                                                     //stloc				V_5
	IL_008c:            /*goto IL_000b;*/goto IL_0091;                              //br				IL_000b
	IL_0091:            goto IL_01a6;                                               //br				IL_01a6
	IL_0096:                                                                        //ldc.i4				0x10
	IL_009b:            V_5=16;                                                     //stloc				V_5
	IL_009f:            /*goto IL_000b;*/goto IL_00a4;                              //br				IL_000b
	IL_00a4:                                                                        //ldloc.3
	IL_00a5:                                                                        //ldstr				L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633\x1835\x7937\x4A39\x4C3B\x523D\x293F\x2141\x2543\x3245\x2147\x2549\x224B"
	IL_00aa:                                                                        //ldloc				V_6
	IL_00ae:            Temp_22=a(L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633\x1835\x7937\x4A39\x4C3B\x523D\x293F\x2141\x2543\x3245\x2147\x2549\x224B",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:            if(V_3==Temp_22)goto IL_0130;                               //beq.s				IL_0130
	IL_00b5:                                                                        //ldc.i4				0x7
	IL_00ba:            V_5=7;                                                      //stloc				V_5
	IL_00be:            /*goto IL_000b;*/goto IL_00c3;                              //br				IL_000b
	IL_00c3:            goto IL_028f;                                               //br				IL_028f
	IL_00c8:                                                                        //ldc.i4				0x6
	IL_00cd:            V_5=6;                                                      //stloc				V_5
	IL_00d1:            /*goto IL_000b;*/goto IL_00d6;                              //br				IL_000b
	IL_00d6:                                                                        //ldloc.3
	IL_00d7:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6A31\x5933\x5A35"
	IL_00dc:                                                                        //ldloc				V_6
	IL_00e0:            Temp_4=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6A31\x5933\x5A35",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e5:            if(V_3==Temp_4)goto IL_0130;                                //beq.s				IL_0130
	IL_00e7:                                                                        //ldc.i4				0x4
	IL_00ec:            V_5=4;                                                      //stloc				V_5
	IL_00f0:            /*goto IL_000b;*/goto IL_00f5;                              //br				IL_000b
	IL_00f5:            goto IL_0174;                                               //br.s				IL_0174
	IL_00f7:                                                                        //ldloc.3
	IL_00f8:            Temp_14=System::String::IsInterned(V_3);                    //call				System::String^ System::String::IsInterned(System::String^)
	IL_00fd:            V_3=Temp_14;                                                //stloc.3
	IL_00fe:                                                                        //ldc.i4				0x9
	IL_0103:            V_5=9;                                                      //stloc				V_5
	IL_0107:            /*goto IL_000b;*/goto IL_010c;                              //br				IL_000b
	IL_010c:                                                                        //ldloc.3
	IL_010d:                                                                        //ldstr				L"\x4923\x5525\x4B27\x4529\x5E2B\x422D\x592F\x5031"
	IL_0112:                                                                        //ldloc				V_6
	IL_0116:            Temp_11=a(L"\x4923\x5525\x4B27\x4529\x5E2B\x422D\x592F\x5031",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011b:            if(V_3==Temp_11)goto IL_0130;                               //beq.s				IL_0130
	IL_011d:                                                                        //ldc.i4				0x8
	IL_0122:            V_5=8;                                                      //stloc				V_5
	IL_0126:            /*goto IL_000b;*/goto IL_012b;                              //br				IL_000b
	IL_012b:            goto IL_02f6;                                               //br				IL_02f6
	IL_0130:                                                                        //ldloc.1
	IL_0131:                                                                        //ldc.i4.1
	IL_0132:                                                                        //sub
	IL_0133:            V_1=(V_1 - 1);                                              //stloc.1
	IL_0134:                                                                        //ldc.i4				0xc
	IL_0139:            V_5=12;                                                     //stloc				V_5
	IL_013d:            /*goto IL_000b;*/goto IL_0142;                              //br				IL_000b
	IL_0142:            goto IL_01a6;                                               //br.s				IL_01a6
	IL_0144:                                                                        //ldc.i4				0xa
	IL_0149:            V_5=10;                                                     //stloc				V_5
	IL_014d:            /*goto IL_000b;*/goto IL_0152;                              //br				IL_000b
	IL_0152:                                                                        //ldloc.2
	IL_0153:            Temp_12=V_2->GetName();                                     //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_0158:            Temp_13=Temp_12->Name;                                      //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_015d:                                                                        //dup
	IL_015e:            V_3=Temp_13;                                                //stloc.3
	IL_015f:            if(V_3==nullptr)goto IL_028f;                               //brfalse				IL_028f
	IL_0164:                                                                        //ldc.i4				0xd
	IL_0169:            V_5=13;                                                     //stloc				V_5
	IL_016d:            /*goto IL_000b;*/goto IL_0172;                              //br				IL_000b
	IL_0172:            goto IL_00f7;                                               //br.s				IL_00f7
	IL_0174:                                                                        //ldc.i4				0x13
	IL_0179:            V_5=19;                                                     //stloc				V_5
	IL_017d:            /*goto IL_000b;*/goto IL_0182;                              //br				IL_000b
	IL_0182:                                                                        //ldloc.3
	IL_0183:                                                                        //ldstr				L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633"
	IL_0188:                                                                        //ldloc				V_6
	IL_018c:            Temp_28=a(L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0191:            if(V_3==Temp_28)goto IL_0130;                               //beq.s				IL_0130
	IL_0193:                                                                        //ldc.i4				0x1
	IL_0198:            V_5=1;                                                      //stloc				V_5
	IL_019c:            /*goto IL_000b;*/goto IL_01a1;                              //br				IL_000b
	IL_01a1:            goto IL_0096;                                               //br				IL_0096
	IL_01a6:                                                                        //ldc.i4				0x11
	IL_01ab:            V_5=17;                                                     //stloc				V_5
	IL_01af:            /*goto IL_000b;*/goto IL_01b4;                              //br				IL_000b
	IL_01b4:                                                                        //ldloc.1
	IL_01b5:                                                                        //ldc.i4.0
	IL_01b6:            if(V_1>=0)goto IL_0203;                                     //bge				IL_0203
	IL_01bb:                                                                        //ldc.i4				0x14
	IL_01c0:            V_5=20;                                                     //stloc				V_5
	IL_01c4:            /*goto IL_000b;*/goto IL_01c9;                              //br				IL_000b
	IL_01c9:            goto IL_032b;                                               //br				IL_032b
	IL_01ce:                                                                        //ldc.i4				0x12
	IL_01d3:            V_5=18;                                                     //stloc				V_5
	IL_01d7:            /*goto IL_000b;*/goto IL_01dc;                              //br				IL_000b
	IL_01dc:                                                                        //ldloc.3
	IL_01dd:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x7631\x4633\x5735\x4F37\x5339\x523B\x593D"
	IL_01e2:                                                                        //ldloc				V_6
	IL_01e6:            Temp_27=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x7631\x4633\x5735\x4F37\x5339\x523B\x593D",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01eb:            if(V_3==Temp_27)goto IL_0130;                               //beq				IL_0130
	IL_01f0:                                                                        //ldc.i4				0x3
	IL_01f5:            V_5=3;                                                      //stloc				V_5
	IL_01f9:            /*goto IL_000b;*/goto IL_01fe;                              //br				IL_000b
	IL_01fe:            goto IL_02c1;                                               //br				IL_02c1
	IL_0203:                                                                        //ldloc.0
	IL_0204:                                                                        //ldloc.1
	IL_0205:            Temp_23=V_0->GetFrame(V_1);                                 //callvirt				System::Diagnostics::StackFrame^ System::Diagnostics::StackTrace::GetFrame(System::Int32)
	IL_020a:            Temp_24=Temp_23->GetMethod();                               //callvirt				System::Reflection::MethodBase^ System::Diagnostics::StackFrame::GetMethod()
	IL_020f:            Temp_25=Temp_24->DeclaringType;                             //callvirt				System::Type^ System::Reflection::MemberInfo::get_DeclaringType()
	IL_0214:            Temp_26=Temp_25->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_0219:            V_2=Temp_26;                                                //stloc.2
	IL_021a:                                                                        //ldc.i4				0xe
	IL_021f:            V_5=14;                                                     //stloc				V_5
	IL_0223:            /*goto IL_000b;*/goto IL_0228;                              //br				IL_000b
	IL_0228:                                                                        //ldstr				L"\x4923\x5525\x4B27\x4529\x5E2B\x422D\x592F\x5031"
	IL_022d:                                                                        //ldloc				V_6
	IL_0231:            Temp_15=a(L"\x4923\x5525\x4B27\x4529\x5E2B\x422D\x592F\x5031",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0236:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D"
	IL_023b:                                                                        //ldloc				V_6
	IL_023f:            Temp_16=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D",V_6);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0244:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x7631\x4633\x5735\x4F37\x5339\x523B\x593D"
	IL_0249:                                                                        //ldloc				V_6
	IL_024d:            Temp_17=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x7631\x4633\x5735\x4F37\x5339\x523B\x593D",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0252:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6531\x5D33\x5835\x5C37\x5539\x4B3B\x4D3D\x6E3F\x0441\x2B43\x3445\x2547\x3949"
	IL_0257:                                                                        //ldloc				V_6
	IL_025b:            Temp_18=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6531\x5D33\x5835\x5C37\x5539\x4B3B\x4D3D\x6E3F\x0441\x2B43\x3445\x2547\x3949",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0260:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6A31\x5933\x5A35"
	IL_0265:                                                                        //ldloc				V_6
	IL_0269:            Temp_19=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6A31\x5933\x5A35",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_026e:                                                                        //ldstr				L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633"
	IL_0273:                                                                        //ldloc				V_6
	IL_0277:            Temp_20=a(L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_027c:                                                                        //ldstr				L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633\x1835\x7937\x4A39\x4C3B\x523D\x293F\x2141\x2543\x3245\x2147\x2549\x224B"
	IL_0281:                                                                        //ldloc				V_6
	IL_0285:            Temp_21=a(L"\x7623\x4325\x4E27\x4629\x492B\x4D2D\x442F\x5D31\x4633\x1835\x7937\x4A39\x4C3B\x523D\x293F\x2141\x2543\x3245\x2147\x2549\x224B",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_028a:            goto IL_0144;                                               //leave				IL_0144
	IL_028f:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0294:                                                                        //ldstr				L"\x6623\x5325\x4F27\x0A29\x7E2B\x4B2D\x402F\x5D31\x4633\x4235\x1837\x5C39\x533B\x4C3D\x603F\x6541\x3F43\x7645\x3547\x6D49\x6C4B\x2F4D\x344F\x3651\x7953\x3F55\x3657"
	IL_0299:                                                                        //ldloc				V_6
	IL_029d:            Temp_6=a(L"\x6623\x5325\x4F27\x0A29\x7E2B\x4B2D\x402F\x5D31\x4633\x4235\x1837\x5C39\x533B\x4C3D\x603F\x6541\x3F43\x7645\x3547\x6D49\x6C4B\x2F4D\x344F\x3651\x7953\x3F55\x3657",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a2:                                                                        //ldc.i4.1
	IL_02a3:            Temp_7=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_02a8:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_02aa:                                                                        //ldloc.s				V_4
	IL_02ac:                                                                        //ldc.i4.0
	IL_02ad:                                                                        //ldloc.2
	IL_02ae:            Temp_8=V_2->GetName();                                      //callvirt				System::Reflection::AssemblyName^ System::Reflection::Assembly::GetName()
	IL_02b3:            Temp_9=Temp_8->Name;                                        //callvirt				System::String^ System::Reflection::AssemblyName::get_Name()
	IL_02b8:            V_4[0]=safe_cast<System::Object^>(Temp_9);                  //stelem.ref
	IL_02b9:                                                                        //ldloc.s				V_4
	IL_02bb:            Temp_10=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_5),Temp_6,V_4);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_02c0:            return Temp_10;                                             //ret
	IL_02c1:                                                                        //ldc.i4				0x5
	IL_02c6:            V_5=5;                                                      //stloc				V_5
	IL_02ca:            /*goto IL_000b;*/goto IL_02cf;                              //br				IL_000b
	IL_02cf:                                                                        //ldloc.3
	IL_02d0:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6531\x5D33\x5835\x5C37\x5539\x4B3B\x4D3D\x6E3F\x0441\x2B43\x3445\x2547\x3949"
	IL_02d5:                                                                        //ldloc				V_6
	IL_02d9:            Temp_3=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D\x1E2F\x6531\x5D33\x5835\x5C37\x5539\x4B3B\x4D3D\x6E3F\x0441\x2B43\x3445\x2547\x3949",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02de:            if(V_3==Temp_3)goto IL_0130;                                //beq				IL_0130
	IL_02e3:                                                                        //ldc.i4				0x2
	IL_02e8:            V_5=2;                                                      //stloc				V_5
	IL_02ec:            /*goto IL_000b;*/goto IL_02f1;                              //br				IL_000b
	IL_02f1:            goto IL_00c8;                                               //br				IL_00c8
	IL_02f6:                                                                        //ldc.i4				0x0
	IL_02fb:            V_5=0;                                                      //stloc				V_5
	IL_02ff:            /*goto IL_000b;*/goto IL_0304;                              //br				IL_000b
	IL_0304:                                                                        //ldloc.3
	IL_0305:                                                                        //ldstr				L"\x7723\x5F25\x5B27\x5E29\x492B\x432D"
	IL_030a:                                                                        //ldloc				V_6
	IL_030e:            Temp_2=a(L"\x7723\x5F25\x5B27\x5E29\x492B\x432D",V_6);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0313:            if(V_3==Temp_2)goto IL_0130;                                //beq				IL_0130
	IL_0318:                                                                        //ldc.i4				0xb
	IL_031d:            V_5=11;                                                     //stloc				V_5
	IL_0321:            /*goto IL_000b;*/goto IL_0326;                              //br				IL_000b
	IL_0326:            goto IL_01ce;                                               //br				IL_01ce
	IL_032b:            Temp_29=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0330:                                                                        //ldstr				L"\x6623\x5325\x4F27\x0A29\x7E2B\x4B2D\x402F\x5D31\x4633\x4235\x1837\x5C39\x533B\x4C3D\x603F\x3941\x7443\x3B45\x6847\x3149\x7D4B\x334D"
	IL_0335:                                                                        //ldloc				V_6
	IL_0339:            Temp_30=a(L"\x6623\x5325\x4F27\x0A29\x7E2B\x4B2D\x402F\x5D31\x4633\x4235\x1837\x5C39\x533B\x4C3D\x603F\x3941\x7443\x3B45\x6847\x3149\x7D4B\x334D",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_033e:                                                                        //ldc.i4.2
	IL_033f:            Temp_31=gcnew array<System::Object^>(2);                    //newarr				System::Object
	IL_0344:            V_4=Temp_31;                                                //stloc.s				V_4
	IL_0346:                                                                        //ldloc.s				V_4
	IL_0348:                                                                        //ldc.i4.0
	IL_0349:                                                                        //ldstr				L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F"
	IL_034e:                                                                        //ldloc				V_6
	IL_0352:            Temp_32=a(L"\x6523\x5625\x5827\x4629\x452B\x4D2D\x512F\x4631\x5D33\x5935\x5637\x7439\x5D3B\x533D\x253F",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0357:            Temp_33=Root::T_x128::M_x1(Temp_32);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_035c:            V_4[0]=safe_cast<System::Object^>(Temp_33);                 //stelem.ref
	IL_035d:                                                                        //ldloc.s				V_4
	IL_035f:                                                                        //ldc.i4.1
	IL_0360:                                                                        //ldtoken				Reflector::IPackage
	IL_0365:            Temp_34=Reflector::IPackage::typeid;                        //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_036a:            Temp_35=Temp_34->Assembly;                                  //callvirt				System::Reflection::Assembly^ System::Type::get_Assembly()
	IL_036f:                                                                        //ldtoken				System::Reflection::AssemblyInformationalVersionAttribute
	IL_0374:            Temp_36=System::Reflection::AssemblyInformationalVersionAttribute::typeid;//call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0379:                                                                        //ldc.i4.0
	IL_037a:            Temp_37=Temp_35->GetCustomAttributes(Temp_36,false);        //callvirt				array<System::Object^>^ System::Reflection::Assembly::GetCustomAttributes(System::Type^,System::Boolean)
	IL_037f:                                                                        //ldc.i4.0
	IL_0380:                                                                        //ldelem.ref
	IL_0381:                                                                        //isinst				System::Reflection::AssemblyInformationalVersionAttribute
	IL_0386:            Temp_38=dynamic_cast<System::Reflection::AssemblyInformationalVersionAttribute^>(Temp_37[0])->InformationalVersion;//callvirt				System::String^ System::Reflection::AssemblyInformationalVersionAttribute::get_InformationalVersion()
	IL_038b:            V_4[1]=safe_cast<System::Object^>(Temp_38);                 //stelem.ref
	IL_038c:                                                                        //ldloc.s				V_4
	IL_038e:            Temp_39=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_29),Temp_30,V_4);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0393:            return Temp_39;                                             //ret

}
inline void Reflector::Application::ApplicationManager::M_x2(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	Root::T_x107^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0022;                                               //br.s				IL_0022
	IL_0002:                                                                        //ldc.i4.2
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.4
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_007d;case 1:goto IL_0047;case 2:goto IL_0034;};//switch				(IL_007d,IL_0047,IL_0034)
	IL_0022:                                                                        //ldarg.1
	IL_0023:                                                                        //castclass				Reflector::ICommandBarButton
	IL_0028:            V_0=safe_cast<Reflector::ICommandBarButton^>(A_0);          //stloc.0
	IL_0029:                                                                        //ldc.i4				0x2
	IL_002e:            V_3=2;                                                      //stloc				V_3
	IL_0032:            /*goto IL_0002;*/goto IL_0034;                              //br.s				IL_0002
	IL_0034:                                                                        //ldloc.0
	IL_0035:            Temp_3=safe_cast<Reflector::ICommandBarItem^>(V_0)->Value;  //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_003a:            if(Temp_3==nullptr)goto IL_007f;                            //brfalse.s				IL_007f
	IL_003c:                                                                        //ldc.i4				0x1
	IL_0041:            V_3=1;                                                      //stloc				V_3
	IL_0045:            /*goto IL_0002;*/goto IL_0047;                              //br.s				IL_0002
	IL_0047:            goto IL_0049;                                               //br.s				IL_0049
	IL_0049:                                                                        //ldarg.0
	IL_004a:                                                                        //ldtoken				Root::T_x107
	IL_004f:            Temp_0=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0054:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0059:                                                                        //castclass				Root::T_x107
	IL_005e:            V_1=safe_cast<Root::T_x107^>(Temp_1);                       //stloc.1
	IL_005f:                                                                        //ldloc.0
	IL_0060:            Temp_2=safe_cast<Reflector::ICommandBarItem^>(V_0)->Value;  //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0065:                                                                        //castclass				System::String
	IL_006a:            V_2=safe_cast<System::String^>(Temp_2);                     //stloc.2
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldloc.2
	IL_006d:            safe_cast<Root::T_x24^>(V_1)->M_x1(V_2);                    //callvirt				void Root::T_x24::M_x1(System::String^)
	IL_0072:                                                                        //ldc.i4				0x0
	IL_0077:            V_3=0;                                                      //stloc				V_3
	IL_007b:            /*goto IL_0002;*/goto IL_007d;                              //br.s				IL_0002
	IL_007d:            goto IL_007f;                                               //br.s				IL_007f
	IL_007f:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x2(System::Object^ A_0,System::Windows::Forms::DragEventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.2
	IL_0001:                                                                        //ldc.i4				0x80000003
	IL_0006:            A_1->Effect=safe_cast<System::Windows::Forms::DragDropEffects>(-2147483645);//callvirt				void System::Windows::Forms::DragEventArgs::set_Effect(System::Windows::Forms::DragDropEffects)
	IL_000b:            return;                                                     //ret

}
inline array<System::String^>^ Reflector::Application::ApplicationManager::M_x2(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	array<System::String^>^ Temp_1 = nullptr;
	System::Char Temp_2 = (System::Char)0;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Int32 Temp_6 = 0;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Char Temp_9 = (System::Char)0;
	System::Int32 Temp_10 = 0;
	array<System::String^>^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Int32 Temp_13 = 0;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Int32 Temp_16 = 0;
	System::String^ Temp_17 = nullptr;
	System::Globalization::CultureInfo^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Int32 Temp_21 = 0;
	System::String^ Temp_22 = nullptr;
	System::Globalization::CultureInfo^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	//local variables.
	System::Collections::ArrayList^ V_0 = nullptr;
	array<System::String^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::String^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::String^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	array<System::String^>^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_9=13;                                                     //stloc				V_9
	IL_0009:            goto IL_0080;                                               //br.s				IL_0080
	IL_000b:                                                                        //ldloc				V_8
	IL_000f:            switch(V_8){case 0:goto IL_00e5;case 1:goto IL_0155;case 2:goto IL_022e;case 3:goto IL_027f;case 4:goto IL_0337;case 5:goto IL_019d;case 6:goto IL_0209;case 7:goto IL_0242;case 8:goto IL_02c0;case 9:goto IL_0364;case 10:goto IL_02a4;case 11:goto IL_01b6;case 12:goto IL_031f;case 13:goto IL_0142;case 14:goto IL_012b;case 15:goto IL_01e3;case 16:goto IL_01c9;case 17:goto IL_0118;case 18:goto IL_00b0;case 19:goto IL_030c;case 20:goto IL_016e;case 21:goto IL_009d;case 22:goto IL_018a;case 23:goto IL_02d6;case 24:goto IL_00c9;case 25:goto IL_0102;case 26:goto IL_034a;};//switch				(IL_00e5,IL_0155,IL_022e,IL_027f,IL_0337,IL_019d,IL_0209,IL_0242,IL_02c0,IL_0364,IL_02a4,IL_01b6,IL_031f,IL_0142,IL_012b,IL_01e3,IL_01c9,IL_0118,IL_00b0,IL_030c,IL_016e,IL_009d,IL_018a,IL_02d6,IL_00c9,IL_0102,IL_034a)
	IL_0080:                                                                        //ldc.i4.0
	IL_0081:            Temp_0=gcnew System::Collections::ArrayList(safe_cast<System::Int32>(0));//newobj				void System::Collections::ArrayList::.ctor(System::Int32)
	IL_0086:            V_0=Temp_0;                                                 //stloc.0
	IL_0087:            Temp_1=System::Environment::GetCommandLineArgs();           //call				array<System::String^>^ System::Environment::GetCommandLineArgs()
	IL_008c:            V_1=Temp_1;                                                 //stloc.1
	IL_008d:                                                                        //ldc.i4.1
	IL_008e:            V_2=1;                                                      //stloc.2
	IL_008f:                                                                        //ldc.i4				0x15
	IL_0094:            V_8=21;                                                     //stloc				V_8
	IL_0098:            /*goto IL_000b;*/goto IL_009d;                              //br				IL_000b
	IL_009d:            goto IL_011d;                                               //br				IL_011d
	IL_00a2:                                                                        //ldc.i4				0x12
	IL_00a7:            V_8=18;                                                     //stloc				V_8
	IL_00ab:            /*goto IL_000b;*/goto IL_00b0;                              //br				IL_000b
	IL_00b0:                                                                        //ldarg.1
	IL_00b1:            Temp_20=A_0->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_00b6:            if(Temp_20!=0)goto IL_0230;                                 //brtrue				IL_0230
	IL_00bb:                                                                        //ldc.i4				0x18
	IL_00c0:            V_8=24;                                                     //stloc				V_8
	IL_00c4:            /*goto IL_000b;*/goto IL_00c9;                              //br				IL_000b
	IL_00c9:            goto IL_0173;                                               //br				IL_0173
	IL_00ce:                                                                        //ldloc.0
	IL_00cf:                                                                        //ldloc.s				V_5
	IL_00d1:            Temp_5=V_0->Add(safe_cast<System::Object^>(V_5));           //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00d6:                                                                        //pop
	IL_00d7:                                                                        //ldc.i4				0x0
	IL_00dc:            V_8=0;                                                      //stloc				V_8
	IL_00e0:            /*goto IL_000b;*/goto IL_00e5;                              //br				IL_000b
	IL_00e5:            goto IL_033c;                                               //br				IL_033c
	IL_00ea:                                                                        //ldloc.3
	IL_00eb:                                                                        //ldc.i4.s				58
	IL_00ed:            Temp_3=V_3->IndexOf(safe_cast<System::Char>((System::Char)58));//callvirt				System::Int32 System::String::IndexOf(System::Char)
	IL_00f2:            V_6=Temp_3;                                                 //stloc.s				V_6
	IL_00f4:                                                                        //ldc.i4				0x19
	IL_00f9:            V_8=25;                                                     //stloc				V_8
	IL_00fd:            /*goto IL_000b;*/goto IL_0102;                              //br				IL_000b
	IL_0102:                                                                        //ldloc.s				V_6
	IL_0104:                                                                        //ldc.i4.m1
	IL_0105:            if(V_6!=-1)goto IL_02db;                                    //bne.un				IL_02db
	IL_010a:                                                                        //ldc.i4				0x11
	IL_010f:            V_8=17;                                                     //stloc				V_8
	IL_0113:            /*goto IL_000b;*/goto IL_0118;                              //br				IL_000b
	IL_0118:            goto IL_01e8;                                               //br				IL_01e8
	IL_011d:                                                                        //ldc.i4				0xe
	IL_0122:            V_8=14;                                                     //stloc				V_8
	IL_0126:            /*goto IL_000b;*/goto IL_012b;                              //br				IL_000b
	IL_012b:                                                                        //ldloc.2
	IL_012c:                                                                        //ldloc.1
	IL_012d:            Temp_13=V_1->Length;                                        //ldlen
	IL_012e:                                                                        //conv.i4
	IL_012f:            if(V_2<Temp_13)goto IL_0284;                                //blt				IL_0284
	IL_0134:                                                                        //ldc.i4				0xd
	IL_0139:            V_8=13;                                                     //stloc				V_8
	IL_013d:            /*goto IL_000b;*/goto IL_0142;                              //br				IL_000b
	IL_0142:            goto IL_018f;                                               //br.s				IL_018f
	IL_0144:            goto IL_0147;                                               //br.s				IL_0147
	IL_0146:                                                                        //break
	IL_0147:                                                                        //ldc.i4				0x1
	IL_014c:            V_8=1;                                                      //stloc				V_8
	IL_0150:            /*goto IL_000b;*/goto IL_0155;                              //br				IL_000b
	IL_0155:                                                                        //ldloc.3
	IL_0156:                                                                        //ldc.i4.0
	IL_0157:            Temp_2=V_3[safe_cast<System::Int32>(0)];                    //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_015c:                                                                        //ldc.i4.s				45
	IL_015e:            if(Temp_2==(System::Char)45)goto IL_00ea;                   //beq.s				IL_00ea
	IL_0160:                                                                        //ldc.i4				0x14
	IL_0165:            V_8=20;                                                     //stloc				V_8
	IL_0169:            /*goto IL_000b;*/goto IL_016e;                              //br				IL_000b
	IL_016e:            goto IL_02c5;                                               //br				IL_02c5
	IL_0173:                                                                        //ldloc.0
	IL_0174:                                                                        //ldloc.s				V_5
	IL_0176:            Temp_21=V_0->Add(safe_cast<System::Object^>(V_5));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_017b:                                                                        //pop
	IL_017c:                                                                        //ldc.i4				0x16
	IL_0181:            V_8=22;                                                     //stloc				V_8
	IL_0185:            /*goto IL_000b;*/goto IL_018a;                              //br				IL_000b
	IL_018a:            goto IL_0230;                                               //br				IL_0230
	IL_018f:                                                                        //ldc.i4				0x5
	IL_0194:            V_8=5;                                                      //stloc				V_8
	IL_0198:            /*goto IL_000b;*/goto IL_019d;                              //br				IL_000b
	IL_019d:                                                                        //ldloc.0
	IL_019e:            Temp_6=V_0->Count;                                          //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_01a3:            if(Temp_6==0)goto IL_0369;                                  //brfalse				IL_0369
	IL_01a8:                                                                        //ldc.i4				0xb
	IL_01ad:            V_8=11;                                                     //stloc				V_8
	IL_01b1:            /*goto IL_000b;*/goto IL_01b6;                              //br				IL_000b
	IL_01b6:            goto IL_0247;                                               //br				IL_0247
	IL_01bb:                                                                        //ldc.i4				0x10
	IL_01c0:            V_8=16;                                                     //stloc				V_8
	IL_01c4:            /*goto IL_000b;*/goto IL_01c9;                              //br				IL_000b
	IL_01c9:                                                                        //ldloc.s				V_4
	IL_01cb:            Temp_16=V_4->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_01d0:            if(Temp_16==0)goto IL_033c;                                 //brfalse				IL_033c
	IL_01d5:                                                                        //ldc.i4				0xf
	IL_01da:            V_8=15;                                                     //stloc				V_8
	IL_01de:            /*goto IL_000b;*/goto IL_01e3;                              //br				IL_000b
	IL_01e3:            goto IL_0311;                                               //br				IL_0311
	IL_01e8:                                                                        //ldloc.3
	IL_01e9:                                                                        //ldc.i4.1
	IL_01ea:            Temp_17=V_3->Substring(safe_cast<System::Int32>(1));        //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_01ef:            Temp_18=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01f4:            Temp_19=Temp_17->ToLower(Temp_18);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_01f9:            V_4=Temp_19;                                                //stloc.s				V_4
	IL_01fb:                                                                        //ldc.i4				0x6
	IL_0200:            V_8=6;                                                      //stloc				V_8
	IL_0204:            /*goto IL_000b;*/goto IL_0209;                              //br				IL_000b
	IL_0209:                                                                        //ldloc.s				V_4
	IL_020b:                                                                        //ldstr				L"\x142A"
	IL_0210:                                                                        //ldloc				V_9
	IL_0214:            Temp_7=a(L"\x142A",V_9);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0219:            Temp_8=(V_4 == Temp_7);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_021e:            if(!Temp_8)goto IL_01bb;                                    //brfalse.s				IL_01bb
	IL_0220:                                                                        //ldc.i4				0x2
	IL_0225:            V_8=2;                                                      //stloc				V_8
	IL_0229:            /*goto IL_000b;*/goto IL_022e;                              //br				IL_000b
	IL_022e:            goto IL_0261;                                               //br.s				IL_0261
	IL_0230:                                                                        //ldloc.2
	IL_0231:                                                                        //ldc.i4.1
	IL_0232:                                                                        //add
	IL_0233:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0234:                                                                        //ldc.i4				0x7
	IL_0239:            V_8=7;                                                      //stloc				V_8
	IL_023d:            /*goto IL_000b;*/goto IL_0242;                              //br				IL_000b
	IL_0242:            goto IL_011d;                                               //br				IL_011d
	IL_0247:                                                                        //ldloc.0
	IL_0248:            Temp_10=V_0->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_024d:                                                                        //conv.ovf.u4
	IL_024e:            Temp_11=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_10));//newarr				System::String
	IL_0253:            V_7=Temp_11;                                                //stloc.s				V_7
	IL_0255:                                                                        //ldloc.0
	IL_0256:                                                                        //ldloc.s				V_7
	IL_0258:                                                                        //ldc.i4.0
	IL_0259:            V_0->CopyTo(safe_cast<System::Array^>(V_7),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_025e:                                                                        //ldloc.s				V_7
	IL_0260:            return V_7;                                                 //ret
	IL_0261:                                                                        //ldstr				L"\x432A\x482C\x432E\x4130"
	IL_0266:                                                                        //ldloc				V_9
	IL_026a:            Temp_4=a(L"\x432A\x482C\x432E\x4130",V_9);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_026f:            V_4=Temp_4;                                                 //stloc.s				V_4
	IL_0271:                                                                        //ldc.i4				0x3
	IL_0276:            V_8=3;                                                      //stloc				V_8
	IL_027a:            /*goto IL_000b;*/goto IL_027f;                              //br				IL_000b
	IL_027f:            goto IL_01bb;                                               //br				IL_01bb
	IL_0284:                                                                        //ldloc.1
	IL_0285:                                                                        //ldloc.2
	IL_0286:                                                                        //ldelem.ref
	IL_0287:            V_3=V_1[V_2];                                               //stloc.3
	IL_0288:            Temp_14=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_028d:            V_4=Temp_14;                                                //stloc.s				V_4
	IL_028f:            Temp_15=System::String::Empty;                              //ldsfld				System::String^ System::String Empty
	IL_0294:            V_5=Temp_15;                                                //stloc.s				V_5
	IL_0296:                                                                        //ldc.i4				0xa
	IL_029b:            V_8=10;                                                     //stloc				V_8
	IL_029f:            /*goto IL_000b;*/goto IL_02a4;                              //br				IL_000b
	IL_02a4:                                                                        //ldloc.3
	IL_02a5:                                                                        //ldc.i4.0
	IL_02a6:            Temp_9=V_3[safe_cast<System::Int32>(0)];                    //callvirt				System::Char System::String::get_Chars(System::Int32)
	IL_02ab:                                                                        //ldc.i4.s				47
	IL_02ad:            if(Temp_9==(System::Char)47)goto IL_00ea;                   //beq				IL_00ea
	IL_02b2:                                                                        //ldc.i4				0x8
	IL_02b7:            V_8=8;                                                      //stloc				V_8
	IL_02bb:            /*goto IL_000b;*/goto IL_02c0;                              //br				IL_000b
	IL_02c0:            goto IL_0144;                                               //br				IL_0144
	IL_02c5:                                                                        //ldloc.3
	IL_02c6:            V_5=V_3;                                                    //stloc.s				V_5
	IL_02c8:                                                                        //ldc.i4				0x17
	IL_02cd:            V_8=23;                                                     //stloc				V_8
	IL_02d1:            /*goto IL_000b;*/goto IL_02d6;                              //br				IL_000b
	IL_02d6:            goto IL_01bb;                                               //br				IL_01bb
	IL_02db:                                                                        //ldloc.3
	IL_02dc:                                                                        //ldc.i4.1
	IL_02dd:                                                                        //ldloc.s				V_6
	IL_02df:                                                                        //ldc.i4.1
	IL_02e0:                                                                        //sub
	IL_02e1:            Temp_22=V_3->Substring(safe_cast<System::Int32>(1),(V_6 - 1));//callvirt				System::String^ System::String::Substring(System::Int32,System::Int32)
	IL_02e6:            Temp_23=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_02eb:            Temp_24=Temp_22->ToLower(Temp_23);                          //callvirt				System::String^ System::String::ToLower(System::Globalization::CultureInfo^)
	IL_02f0:            V_4=Temp_24;                                                //stloc.s				V_4
	IL_02f2:                                                                        //ldloc.3
	IL_02f3:                                                                        //ldloc.s				V_6
	IL_02f5:                                                                        //ldc.i4.1
	IL_02f6:                                                                        //add
	IL_02f7:            Temp_25=V_3->Substring((V_6 + 1));                          //callvirt				System::String^ System::String::Substring(System::Int32)
	IL_02fc:            V_5=Temp_25;                                                //stloc.s				V_5
	IL_02fe:                                                                        //ldc.i4				0x13
	IL_0303:            V_8=19;                                                     //stloc				V_8
	IL_0307:            /*goto IL_000b;*/goto IL_030c;                              //br				IL_000b
	IL_030c:            goto IL_01bb;                                               //br				IL_01bb
	IL_0311:                                                                        //ldc.i4				0xc
	IL_0316:            V_8=12;                                                     //stloc				V_8
	IL_031a:            /*goto IL_000b;*/goto IL_031f;                              //br				IL_000b
	IL_031f:                                                                        //ldarg.1
	IL_0320:                                                                        //ldloc.s				V_4
	IL_0322:            Temp_12=A_0->StartsWith(V_4);                               //callvirt				System::Boolean System::String::StartsWith(System::String^)
	IL_0327:            if(!Temp_12)goto IL_033c;                                   //brfalse.s				IL_033c
	IL_0329:                                                                        //ldc.i4				0x4
	IL_032e:            V_8=4;                                                      //stloc				V_8
	IL_0332:            /*goto IL_000b;*/goto IL_0337;                              //br				IL_000b
	IL_0337:            goto IL_00ce;                                               //br				IL_00ce
	IL_033c:                                                                        //ldc.i4				0x1a
	IL_0341:            V_8=26;                                                     //stloc				V_8
	IL_0345:            /*goto IL_000b;*/goto IL_034a;                              //br				IL_000b
	IL_034a:                                                                        //ldloc.s				V_4
	IL_034c:            Temp_26=V_4->Length;                                        //callvirt				System::Int32 System::String::get_Length()
	IL_0351:            if(Temp_26!=0)goto IL_0230;                                 //brtrue				IL_0230
	IL_0356:                                                                        //ldc.i4				0x9
	IL_035b:            V_8=9;                                                      //stloc				V_8
	IL_035f:            /*goto IL_000b;*/goto IL_0364;                              //br				IL_000b
	IL_0364:            goto IL_00a2;                                               //br				IL_00a2
	IL_0369:                                                                        //ldnull
	IL_036a:            return nullptr;                                             //ret

}
inline void Reflector::Application::ApplicationManager::M_x33()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Globalization::CultureInfo^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	array<System::Object^>^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Windows::Forms::DialogResult Temp_9 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	System::Exception^ V_0 = nullptr;
	array<System::Object^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_2=13;                                                     //stloc				V_2
	IL_000501:          try{
	IL_0009:                                                                        //ldarg.0
	IL_000a:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_000f:                                                                        //ldarg.0
	IL_0010:            Temp_1=this->F_x1;                                          //ldfld				System::String^ Reflector::Application::ApplicationManager F_x1
	IL_0015:            Temp_0->M_x1(Temp_1);                                       //callvirt				void Root::T_x110::M_x1(System::String^)
	IL_001a:            goto IL_0068;                                               //leave.s				IL_0068
	                    ;}
	                    catch(System::UnauthorizedAccessException^ Ex_001A02){
	IL_001c:                                                                        //pop
	IL_001d:            goto IL_0068;                                               //leave.s				IL_0068
	                    ;}
	                    catch(System::Exception^ Ex_001D02){
	IL_001f:            V_0=Ex_001D02;                                              //stloc.0
	IL_0020:                                                                        //ldnull
	IL_0021:            Temp_2=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0026:                                                                        //ldstr				L"\x6E2A\x5F2C\x5D2E\x5E30\x4132\x1534\x4036\x5138\x523A\x513C\x5A3E\x6140\x3042\x2444\x3146\x2048\x254A\x2A4C\x6F4E\x3250\x3C52\x3B54\x3156\x3058\x3C5A\x285C\x2D5E\x0060\x1762\x0C64\x0866\x0768\x4B6A\x0B6C\x066E\x1D70\x1672\x4F74\x5776\x0278\x4B7A\x007C"
	IL_002b:                                                                        //ldloc				V_2
	IL_002f:            Temp_3=a(L"\x6E2A\x5F2C\x5D2E\x5E30\x4132\x1534\x4036\x5138\x523A\x513C\x5A3E\x6140\x3042\x2444\x3146\x2048\x254A\x2A4C\x6F4E\x3250\x3C52\x3B54\x3156\x3058\x3C5A\x285C\x2D5E\x0060\x1762\x0C64\x0866\x0768\x4B6A\x0B6C\x066E\x1D70\x1672\x4F74\x5776\x0278\x4B7A\x007C",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0034:                                                                        //ldc.i4.1
	IL_0035:            Temp_4=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_003a:            V_1=Temp_4;                                                 //stloc.1
	IL_003b:                                                                        //ldloc.1
	IL_003c:                                                                        //ldc.i4.0
	IL_003d:                                                                        //ldloc.0
	IL_003e:            Temp_5=V_0->Message;                                        //callvirt				System::String^ System::Exception::get_Message()
	IL_0043:            V_1[0]=safe_cast<System::Object^>(Temp_5);                  //stelem.ref
	IL_0044:                                                                        //ldloc.1
	IL_0045:            Temp_6=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_2),Temp_3,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_004a:                                                                        //ldstr				L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246"
	IL_004f:                                                                        //ldloc				V_2
	IL_0053:            Temp_7=a(L"\x6A2A\x5D2C\x5F2E\x5D30\x5A32\x5634\x5636\x4D38\x523A\x523C\x513E\x0F40\x2242\x2844\x2246",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0058:            Temp_8=Root::T_x128::M_x1(Temp_7);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_005d:                                                                        //ldc.i4.0
	IL_005e:                                                                        //ldc.i4.s				16
	IL_0060:            Temp_9=System::Windows::Forms::MessageBox::Show(safe_cast<System::Windows::Forms::IWin32Window^>(nullptr),Temp_6,Temp_8,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(16));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::Windows::Forms::IWin32Window^,System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0065:                                                                        //pop
	IL_0066:            goto IL_0068;                                               //leave.s				IL_0068
	                    ;}
	IL_0068:            goto IL_006b;                                               //br.s				IL_006b
	IL_006a:                                                                        //break
	IL_006b:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Root::T_x111^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Reflector::IWindowManager^ Temp_7 = nullptr;
	Reflector::IWindowCollection^ Temp_8 = nullptr;
	System::Collections::IEnumerator^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	System::Boolean Temp_12 = false;
	System::Object^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Reflector::IAssemblyBrowser^ V_1 = nullptr;
	Root::T_x111^ V_2 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_3 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ V_4 = nullptr;
	Reflector::IWindow^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_0037;                                               //br.s				IL_0037
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_01a9;case 1:goto IL_01d5;case 2:goto IL_0077;case 3:goto IL_01e6;case 4:goto IL_0090;case 5:goto IL_0263;case 6:goto IL_0174;case 7:goto IL_0189;case 8:goto IL_0241;case 9:goto IL_020b;case 10:goto IL_021c;};//switch				(IL_01a9,IL_01d5,IL_0077,IL_01e6,IL_0090,IL_0263,IL_0174,IL_0189,IL_0241,IL_020b,IL_021c)
	IL_0037:                                                                        //ldarg.0
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            this->F_x12=false;                                          //stfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0044:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0049:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_004e:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_0053:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_005a:            Temp_2=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_005f:            Temp_3=this->M_x1(Temp_2);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0064:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_0069:            V_1=safe_cast<Reflector::IAssemblyBrowser^>(Temp_3);        //stloc.1
	IL_006a:                                                                        //ldnull
	IL_006b:            V_2=safe_cast<Root::T_x111^>(nullptr);                      //stloc.2
	IL_006c:                                                                        //ldc.i4				0x2
	IL_0071:            V_8=2;                                                      //stloc				V_8
	IL_0075:            /*goto IL_0002;*/goto IL_0077;                              //br.s				IL_0002
	IL_0077:                                                                        //ldloc.1
	IL_0078:            Temp_6=V_1->ActiveItem;                                     //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_007d:            if(Temp_6==nullptr)goto IL_0221;                            //brfalse				IL_0221
	IL_0082:                                                                        //ldc.i4				0x4
	IL_0087:            V_8=4;                                                      //stloc				V_8
	IL_008b:            /*goto IL_0002;*/goto IL_0090;                              //br				IL_0002
	IL_0090:            goto IL_01ae;                                               //br				IL_01ae
	IL_009001:          try{
	IL_0095:                                                                        //ldc.i4				0x0
	IL_009a:            V_8=0;                                                      //stloc				V_8
	IL_009e:            /*goto IL_00a2;*/goto IL_00a0;                              //br.s				IL_00a2
	IL_00a0:            goto IL_00bf;                                               //br.s				IL_00bf
	IL_00a2:                                                                        //ldloc				V_8
	IL_00a6:            switch(V_8){case 0:goto IL_00a0;case 1:goto IL_00ef;case 2:goto IL_0110;case 3:goto IL_00e2;case 4:goto IL_0103;};//switch				(IL_00a0,IL_00ef,IL_0110,IL_00e2,IL_0103)
	IL_00bf:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00c1:                                                                        //ldloc.s				V_6
	IL_00c3:            Temp_13=V_6->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00c8:                                                                        //castclass				Reflector::IWindow
	IL_00cd:            V_5=safe_cast<Reflector::IWindow^>(Temp_13);                //stloc.s				V_5
	IL_00cf:                                                                        //ldloc.s				V_5
	IL_00d1:                                                                        //ldc.i4.0
	IL_00d2:            V_5->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_00d7:                                                                        //ldc.i4				0x3
	IL_00dc:            V_8=3;                                                      //stloc				V_8
	IL_00e0:            /*goto IL_00a2;*/goto IL_00e2;                              //br.s				IL_00a2
	IL_00e2:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_00e4:                                                                        //ldc.i4				0x1
	IL_00e9:            V_8=1;                                                      //stloc				V_8
	IL_00ed:            /*goto IL_00a2;*/goto IL_00ef;                              //br.s				IL_00a2
	IL_00ef:                                                                        //ldloc.s				V_6
	IL_00f1:            Temp_12=V_6->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00f6:            if(Temp_12)goto IL_00c1;                                    //brtrue.s				IL_00c1
	IL_00f8:                                                                        //ldc.i4				0x4
	IL_00fd:            V_8=4;                                                      //stloc				V_8
	IL_0101:            /*goto IL_00a2;*/goto IL_0103;                              //br.s				IL_00a2
	IL_0103:            goto IL_0105;                                               //br.s				IL_0105
	IL_0105:                                                                        //ldc.i4				0x2
	IL_010a:            V_8=2;                                                      //stloc				V_8
	IL_010e:            /*goto IL_00a2;*/goto IL_0110;                              //br.s				IL_00a2
	IL_0110:            goto IL_01eb;                                               //leave				IL_01eb
	                    ;}
	                    finally{
	IL_0115:            goto IL_012c;                                               //br.s				IL_012c
	IL_0117:                                                                        //ldloc				V_8
	IL_011b:            switch(V_8){case 0:goto IL_0163;case 1:goto IL_0140;case 2:goto IL_014f;};//switch				(IL_0163,IL_0140,IL_014f)
	IL_012c:                                                                        //ldloc.s				V_6
	IL_012e:                                                                        //isinst				System::IDisposable
	IL_0133:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_0135:                                                                        //ldc.i4				0x1
	IL_013a:            V_8=1;                                                      //stloc				V_8
	IL_013e:            /*goto IL_0117;*/goto IL_0140;                              //br.s				IL_0117
	IL_0140:                                                                        //ldloc.s				V_7
	IL_0142:            if(V_7==nullptr)goto IL_0165;                               //brfalse.s				IL_0165
	IL_0144:                                                                        //ldc.i4				0x2
	IL_0149:            V_8=2;                                                      //stloc				V_8
	IL_014d:            /*goto IL_0117;*/goto IL_014f;                              //br.s				IL_0117
	IL_014f:            goto IL_0151;                                               //br.s				IL_0151
	IL_0151:                                                                        //ldloc.s				V_7
	IL_0153:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0158:                                                                        //ldc.i4				0x0
	IL_015d:            V_8=0;                                                      //stloc				V_8
	IL_0161:            /*goto IL_0117;*/goto IL_0163;                              //br.s				IL_0117
	IL_0163:            goto IL_0165;                                               //br.s				IL_0165
	IL_0165:                                                                        //endfinally
	                    ;}
	IL_0166:                                                                        //ldc.i4				0x6
	IL_016b:            V_8=6;                                                      //stloc				V_8
	IL_016f:            /*goto IL_0002;*/goto IL_0174;                              //br				IL_0002
	IL_0174:                                                                        //ldloc.s				V_4
	IL_0176:            if(V_4==nullptr)goto IL_0221;                               //brfalse				IL_0221
	IL_017b:                                                                        //ldc.i4				0x7
	IL_0180:            V_8=7;                                                      //stloc				V_8
	IL_0184:            /*goto IL_0002;*/goto IL_0189;                              //br				IL_0002
	IL_0189:            goto IL_0249;                                               //br				IL_0249
	IL_018e:                                                                        //ldloc.1
	IL_018f:                                                                        //ldloc.2
	IL_0190:                                                                        //ldloc.0
	IL_0191:            Temp_14=V_2->M_x1(V_0);                                     //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_0196:            V_1->ActiveItem=Temp_14;                                    //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_019b:                                                                        //ldc.i4				0x0
	IL_01a0:            V_8=0;                                                      //stloc				V_8
	IL_01a4:            /*goto IL_0002;*/goto IL_01a9;                              //br				IL_0002
	IL_01a9:            goto IL_0265;                                               //br				IL_0265
	IL_01ae:                                                                        //ldloc.1
	IL_01af:            Temp_10=V_1->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_01b4:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_01b9:            V_3=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_10);//stloc.3
	IL_01ba:                                                                        //ldloc.1
	IL_01bb:            Temp_11=V_1->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_01c0:                                                                        //isinst				Reflector::CodeModel::IMemberDeclaration
	IL_01c5:            V_4=dynamic_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_11);//stloc.s				V_4
	IL_01c7:                                                                        //ldc.i4				0x1
	IL_01cc:            V_8=1;                                                      //stloc				V_8
	IL_01d0:            /*goto IL_0002;*/goto IL_01d5;                              //br				IL_0002
	IL_01d5:                                                                        //ldloc.3
	IL_01d6:            if(V_3!=nullptr)goto IL_0249;                               //brtrue.s				IL_0249
	IL_01d8:                                                                        //ldc.i4				0x3
	IL_01dd:            V_8=3;                                                      //stloc				V_8
	IL_01e1:            /*goto IL_0002;*/goto IL_01e6;                              //br				IL_0002
	IL_01e6:            goto IL_0166;                                               //br				IL_0166
	IL_01eb:                                                                        //ldarg.0
	IL_01ec:            this->M_x57();                                              //call				void Reflector::Application::ApplicationManager::M_x57()
	IL_01f1:                                                                        //ldarg.0
	IL_01f2:            this->M_x55();                                              //call				void Reflector::Application::ApplicationManager::M_x55()
	IL_01f7:                                                                        //ldarg.0
	IL_01f8:            this->M_x81();                                              //call				void Reflector::Application::ApplicationManager::M_x81()
	IL_01fd:                                                                        //ldc.i4				0x9
	IL_0202:            V_8=9;                                                      //stloc				V_8
	IL_0206:            /*goto IL_0002;*/goto IL_020b;                              //br				IL_0002
	IL_020b:                                                                        //ldloc.2
	IL_020c:            if(V_2==nullptr)goto IL_0265;                               //brfalse.s				IL_0265
	IL_020e:                                                                        //ldc.i4				0xa
	IL_0213:            V_8=10;                                                     //stloc				V_8
	IL_0217:            /*goto IL_0002;*/goto IL_021c;                              //br				IL_0002
	IL_021c:            goto IL_018e;                                               //br				IL_018e
	IL_0221:                                                                        //ldarg.0
	IL_0222:            Temp_7=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0227:            Temp_8=Temp_7->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_022c:            Temp_9=safe_cast<System::Collections::IEnumerable^>(Temp_8)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0231:            V_6=Temp_9;                                                 //stloc.s				V_6
	IL_0233:                                                                        //ldc.i4				0x8
	IL_0238:            V_8=8;                                                      //stloc				V_8
	IL_023c:            /*goto IL_0002;*/goto IL_0241;                              //br				IL_0002
	IL_0241:            goto IL_0244;                                               //br.s				IL_0244
	IL_0243:                                                                        //break
	IL_0244:            /*goto IL_0095;*/goto IL_009001;                            //br				IL_0095
	IL_0249:                                                                        //ldloc.1
	IL_024a:            Temp_4=V_1->ActiveItem;                                     //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_024f:            Temp_5=gcnew Root::T_x111(Temp_4);                          //newobj				void Root::T_x111::.ctor(System::Object^)
	IL_0254:            V_2=Temp_5;                                                 //stloc.2
	IL_0255:                                                                        //ldc.i4				0x5
	IL_025a:            V_8=5;                                                      //stloc				V_8
	IL_025e:            /*goto IL_0002;*/goto IL_0263;                              //br				IL_0002
	IL_0263:            goto IL_0221;                                               //br.s				IL_0221
	IL_0265:                                                                        //ldarg.0
	IL_0266:                                                                        //ldc.i4.1
	IL_0267:            this->F_x12=true;                                           //stfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_026c:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x4(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowCollection^ Temp_1 = nullptr;
	System::Collections::IEnumerator^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Reflector::IWindow^ V_0 = nullptr;
	System::Collections::IEnumerator^ V_1 = nullptr;
	System::IDisposable^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0009:            Temp_1=Temp_0->Windows;                                     //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_000e:            Temp_2=safe_cast<System::Collections::IEnumerable^>(Temp_1)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0013:            V_1=Temp_2;                                                 //stloc.1
	IL_0014:            /*goto IL_0016;*/goto IL_001401;                            //br.s				IL_0016
	IL_001401:          try{
	IL_0016:                                                                        //ldc.i4				0x4
	IL_001b:            V_3=4;                                                      //stloc				V_3
	IL_001f:            /*goto IL_0023;*/goto IL_0021;                              //br.s				IL_0023
	IL_0021:            goto IL_0040;                                               //br.s				IL_0040
	IL_0023:                                                                        //ldloc				V_3
	IL_0027:            switch(V_3){case 0:goto IL_0060;case 1:goto IL_008d;case 2:goto IL_0080;case 3:goto IL_006d;case 4:goto IL_0021;};//switch				(IL_0060,IL_008d,IL_0080,IL_006d,IL_0021)
	IL_0040:            goto IL_0062;                                               //br.s				IL_0062
	IL_0042:                                                                        //ldloc.1
	IL_0043:            Temp_4=V_1->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0048:                                                                        //castclass				Reflector::IWindow
	IL_004d:            V_0=safe_cast<Reflector::IWindow^>(Temp_4);                 //stloc.0
	IL_004e:                                                                        //ldloc.0
	IL_004f:                                                                        //ldc.i4.0
	IL_0050:            V_0->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0055:                                                                        //ldc.i4				0x0
	IL_005a:            V_3=0;                                                      //stloc				V_3
	IL_005e:            /*goto IL_0023;*/goto IL_0060;                              //br.s				IL_0023
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:                                                                        //ldc.i4				0x3
	IL_0067:            V_3=3;                                                      //stloc				V_3
	IL_006b:            /*goto IL_0023;*/goto IL_006d;                              //br.s				IL_0023
	IL_006d:                                                                        //ldloc.1
	IL_006e:            Temp_3=V_1->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0073:            if(Temp_3)goto IL_0042;                                     //brtrue.s				IL_0042
	IL_0075:                                                                        //ldc.i4				0x2
	IL_007a:            V_3=2;                                                      //stloc				V_3
	IL_007e:            /*goto IL_0023;*/goto IL_0080;                              //br.s				IL_0023
	IL_0080:            goto IL_0082;                                               //br.s				IL_0082
	IL_0082:                                                                        //ldc.i4				0x1
	IL_0087:            V_3=1;                                                      //stloc				V_3
	IL_008b:            /*goto IL_0023;*/goto IL_008d;                              //br.s				IL_0023
	IL_008d:            goto IL_00dc;                                               //leave.s				IL_00dc
	                    ;}
	                    finally{
	IL_008f:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_0091:                                                                        //ldloc				V_4
	IL_0095:            switch(V_4){case 0:goto IL_00c6;case 1:goto IL_00d9;case 2:goto IL_00b8;};//switch				(IL_00c6,IL_00d9,IL_00b8)
	IL_00a6:                                                                        //ldloc.1
	IL_00a7:                                                                        //isinst				System::IDisposable
	IL_00ac:            V_2=dynamic_cast<System::IDisposable^>(V_1);                //stloc.2
	IL_00ad:                                                                        //ldc.i4				0x2
	IL_00b2:            V_4=2;                                                      //stloc				V_4
	IL_00b6:            /*goto IL_0091;*/goto IL_00b8;                              //br.s				IL_0091
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:            if(V_2==nullptr)goto IL_00db;                               //brfalse.s				IL_00db
	IL_00bb:                                                                        //ldc.i4				0x0
	IL_00c0:            V_4=0;                                                      //stloc				V_4
	IL_00c4:            /*goto IL_0091;*/goto IL_00c6;                              //br.s				IL_0091
	IL_00c6:            goto IL_00c8;                                               //br.s				IL_00c8
	IL_00c8:                                                                        //ldloc.2
	IL_00c9:            /*V_2->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00ce:                                                                        //ldc.i4				0x1
	IL_00d3:            V_4=1;                                                      //stloc				V_4
	IL_00d7:            /*goto IL_0091;*/goto IL_00d9;                              //br.s				IL_0091
	IL_00d9:            goto IL_00db;                                               //br.s				IL_00db
	IL_00db:                                                                        //endfinally
	                    ;}
	IL_00dc:                                                                        //ldarg.0
	IL_00dd:            this->M_x18();                                              //call				void Reflector::Application::ApplicationManager::M_x18()
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            this->M_x56();                                              //call				void Reflector::Application::ApplicationManager::M_x56()
	IL_00e8:                                                                        //ldarg.0
	IL_00e9:            this->M_x17();                                              //call				void Reflector::Application::ApplicationManager::M_x17()
	IL_00ee:                                                                        //ldarg.0
	IL_00ef:            this->M_x57();                                              //call				void Reflector::Application::ApplicationManager::M_x57()
	IL_00f4:                                                                        //ldarg.0
	IL_00f5:            this->M_x33();                                              //call				void Reflector::Application::ApplicationManager::M_x33()
	IL_00fa:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x48()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x110^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IConfiguration^ Temp_4 = nullptr;
	System::Globalization::CultureInfo^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	System::Globalization::CultureInfo^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	array<System::String^>^ Temp_13 = nullptr;
	System::Collections::ArrayList^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	//local variables.
	Root::T_x95^ V_0 = nullptr;
	Reflector::IConfiguration^ V_1 = nullptr;
	System::Collections::ArrayList^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::String^ V_4 = nullptr;
	array<System::String^>^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_7=14;                                                     //stloc				V_7
	IL_0009:            goto IL_0030;                                               //br.s				IL_0030
	IL_000b:                                                                        //ldloc				V_6
	IL_000f:            switch(V_6){case 0:goto IL_00a2;case 1:goto IL_00f5;case 2:goto IL_010d;case 3:goto IL_00c4;case 4:goto IL_0092;case 5:goto IL_0147;case 6:goto IL_006b;};//switch				(IL_00a2,IL_00f5,IL_010d,IL_00c4,IL_0092,IL_0147,IL_006b)
	IL_0030:                                                                        //ldarg.0
	IL_0031:                                                                        //ldtoken				Root::T_x95
	IL_0036:            Temp_0=Root::T_x95::typeid;                                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_003b:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0040:                                                                        //castclass				Root::T_x95
	IL_0045:            V_0=safe_cast<Root::T_x95^>(Temp_1);                        //stloc.0
	IL_0046:                                                                        //ldarg.0
	IL_0047:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_004c:                                                                        //ldstr				L"\x6D2B\x4A2D\x542F\x7B31\x5A33\x7B35\x5937\x5439\x5D3B\x593D\x253F\x3041"
	IL_0051:                                                                        //ldloc				V_7
	IL_0055:            Temp_3=a(L"\x6D2B\x4A2D\x542F\x7B31\x5A33\x7B35\x5937\x5439\x5D3B\x593D\x253F\x3041",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005a:            Temp_4=Temp_2->M_x2(Temp_3);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_005f:            V_1=Temp_4;                                                 //stloc.1
	IL_0060:                                                                        //ldc.i4				0x6
	IL_0065:            V_6=6;                                                      //stloc				V_6
	IL_0069:            /*goto IL_000b;*/goto IL_006b;                              //br.s				IL_000b
	IL_006b:                                                                        //ldloc.1
	IL_006c:                                                                        //ldstr				L"\x1C2B"
	IL_0071:                                                                        //ldloc				V_7
	IL_0075:            Temp_15=a(L"\x1C2B",V_7);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007a:            Temp_16=V_1->HasProperty(Temp_15);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_007f:            if(!Temp_16)goto IL_0149;                                   //brfalse				IL_0149
	IL_0084:                                                                        //ldc.i4				0x4
	IL_0089:            V_6=4;                                                      //stloc				V_6
	IL_008d:            /*goto IL_000b;*/goto IL_0092;                              //br				IL_000b
	IL_0092:            goto IL_00f7;                                               //br.s				IL_00f7
	IL_0094:                                                                        //ldc.i4				0x0
	IL_0099:            V_6=0;                                                      //stloc				V_6
	IL_009d:            /*goto IL_000b;*/goto IL_00a2;                              //br				IL_000b
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:                                                                        //ldloca.s				V_3
	IL_00a5:            Temp_5=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00aa:            Temp_6=V_3.ToString(safe_cast<System::IFormatProvider^>(Temp_5));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00af:            Temp_7=V_1->HasProperty(Temp_6);                            //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_00b4:            if(Temp_7)goto IL_00c6;                                     //brtrue.s				IL_00c6
	IL_00b6:                                                                        //ldc.i4				0x3
	IL_00bb:            V_6=3;                                                      //stloc				V_6
	IL_00bf:            /*goto IL_000b;*/goto IL_00c4;                              //br				IL_000b
	IL_00c4:            goto IL_010f;                                               //br.s				IL_010f
	IL_00c6:                                                                        //ldloc.1
	IL_00c7:                                                                        //ldloca.s				V_3
	IL_00c9:            Temp_8=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_00ce:            Temp_9=V_3.ToString(safe_cast<System::IFormatProvider^>(Temp_8));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00d3:            Temp_10=V_1->GetProperty(Temp_9);                           //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_00d8:            V_4=Temp_10;                                                //stloc.s				V_4
	IL_00da:                                                                        //ldloc.2
	IL_00db:                                                                        //ldloc.s				V_4
	IL_00dd:            Temp_11=V_2->Add(safe_cast<System::Object^>(V_4));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_00e2:                                                                        //pop
	IL_00e3:                                                                        //ldloc.3
	IL_00e4:                                                                        //ldc.i4.1
	IL_00e5:                                                                        //add
	IL_00e6:            V_3=(V_3 + 1);                                              //stloc.3
	IL_00e7:                                                                        //ldc.i4				0x1
	IL_00ec:            V_6=1;                                                      //stloc				V_6
	IL_00f0:            /*goto IL_000b;*/goto IL_00f5;                              //br				IL_000b
	IL_00f5:            goto IL_0094;                                               //br.s				IL_0094
	IL_00f7:            Temp_14=gcnew System::Collections::ArrayList();             //newobj				void System::Collections::ArrayList::.ctor()
	IL_00fc:            V_2=Temp_14;                                                //stloc.2
	IL_00fd:                                                                        //ldc.i4.0
	IL_00fe:            V_3=0;                                                      //stloc.3
	IL_00ff:                                                                        //ldc.i4				0x2
	IL_0104:            V_6=2;                                                      //stloc				V_6
	IL_0108:            /*goto IL_000b;*/goto IL_010d;                              //br				IL_000b
	IL_010d:            goto IL_0094;                                               //br.s				IL_0094
	IL_010f:                                                                        //ldc.i4.0
	IL_0110:                                                                        //dup
	IL_0111:                                                                        //dup
	IL_0112:                                                                        //ldc.i4.2
	IL_0113:                                                                        //sub
	IL_0114:                                                                        //blt				IL_0110
	IL_0119:                                                                        //pop
	IL_011a:                                                                        //ldloc.2
	IL_011b:            Temp_12=V_2->Count;                                         //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_0120:                                                                        //conv.ovf.u4
	IL_0121:            Temp_13=gcnew array<System::String^>(safe_cast<System::UInt32>(Temp_12));//newarr				System::String
	IL_0126:            V_5=Temp_13;                                                //stloc.s				V_5
	IL_0128:                                                                        //ldloc.2
	IL_0129:                                                                        //ldloc.s				V_5
	IL_012b:                                                                        //ldc.i4.0
	IL_012c:            V_2->CopyTo(safe_cast<System::Array^>(V_5),safe_cast<System::Int32>(0));//callvirt				void System::Collections::ArrayList::CopyTo(System::Array^,System::Int32)
	IL_0131:                                                                        //ldloc.0
	IL_0132:                                                                        //ldloc.s				V_5
	IL_0134:            V_0->M_x1(V_5);                                             //callvirt				void Root::T_x95::M_x1(array<System::String^>^)
	IL_0139:                                                                        //ldc.i4				0x5
	IL_013e:            V_6=5;                                                      //stloc				V_6
	IL_0142:            /*goto IL_000b;*/goto IL_0147;                              //br				IL_000b
	IL_0147:            goto IL_0149;                                               //br.s				IL_0149
	IL_0149:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x49()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x75^ Temp_2 = nullptr;
	Reflector::CodeModel::IFormatter^ Temp_3 = nullptr;
	Root::T_x25^ Temp_4 = nullptr;
	Root::T_x10^ Temp_5 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_6 = nullptr;
	Root::T_x75^ Temp_7 = nullptr;
	//local variables.
	Reflector::ILanguageManager^ V_0 = nullptr;
	Reflector::CodeModel::IFormatter^ V_1 = nullptr;
	Root::T_x10^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.5
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:            goto IL_0022;                                               //br.s				IL_0022
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_006a;case 1:goto IL_0084;case 2:goto IL_005c;};//switch				(IL_006a,IL_0084,IL_005c)
	IL_0022:                                                                        //ldarg.0
	IL_0023:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_0028:            Temp_0=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_002d:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0032:                                                                        //castclass				Reflector::ILanguageManager
	IL_0037:            V_0=safe_cast<Reflector::ILanguageManager^>(Temp_1);        //stloc.0
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_2=this->F_x4;                                          //ldfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_003e:                                                                        //ldc.i4.1
	IL_003f:            Temp_3=Temp_2->M_x1(true);                                  //callvirt				Reflector::CodeModel::IFormatter^ Root::T_x75::M_x1(System::Boolean)
	IL_0044:            V_1=Temp_3;                                                 //stloc.1
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_4=this->F_x9;                                          //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_004b:            Temp_5=Temp_4->M_x15();                                     //callvirt				Root::T_x10^ Root::T_x25::M_x15()
	IL_0050:            V_2=Temp_5;                                                 //stloc.2
	IL_0051:                                                                        //ldc.i4				0x2
	IL_0056:            V_3=2;                                                      //stloc				V_3
	IL_005a:            /*goto IL_000d;*/goto IL_005c;                              //br.s				IL_000d
	IL_005c:                                                                        //ldloc.2
	IL_005d:            if(V_2==nullptr)goto IL_0086;                               //brfalse.s				IL_0086
	IL_005f:                                                                        //ldc.i4				0x0
	IL_0064:            V_3=0;                                                      //stloc				V_3
	IL_0068:            /*goto IL_000d;*/goto IL_006a;                              //br.s				IL_000d
	IL_006a:            goto IL_006c;                                               //br.s				IL_006c
	IL_006c:                                                                        //ldloc.2
	IL_006d:                                                                        //ldloc.1
	IL_006e:                                                                        //ldloc.0
	IL_006f:            Temp_6=V_0->ActiveLanguage;                                 //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageManager::get_ActiveLanguage()
	IL_0074:            V_2->M_x1(V_1,Temp_6);                                      //callvirt				void Root::T_x10::M_x1(Reflector::CodeModel::IFormatter^,Reflector::CodeModel::ILanguage^)
	IL_0079:                                                                        //ldc.i4				0x1
	IL_007e:            V_3=1;                                                      //stloc				V_3
	IL_0082:            /*goto IL_000d;*/goto IL_0084;                              //br.s				IL_000d
	IL_0084:            goto IL_0086;                                               //br.s				IL_0086
	IL_0086:                                                                        //ldarg.0
	IL_0087:            Temp_7=this->F_x4;                                          //ldfld				Root::T_x75^ Reflector::Application::ApplicationManager F_x4
	IL_008c:                                                                        //ldloc.1
	IL_008d:            Temp_7->M_x1(V_1);                                          //callvirt				void Root::T_x75::M_x1(Reflector::CodeModel::IFormatter^)
	IL_0092:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x93^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Windows::Forms::DialogResult Temp_3 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Root::T_x93^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            Temp_0=gcnew Root::T_x93();                                 //newobj				void Root::T_x93::.ctor()
	IL_0008:            V_0=Temp_0;                                                 //stloc.0
	IL_0009:                                                                        //ldloc.0
	IL_000a:                                                                        //ldarg.0
	IL_000b:                                                                        //ldtoken				Root::T_x95
	IL_0010:            Temp_1=Root::T_x95::typeid;                                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0015:            Temp_2=this->M_x1(Temp_1);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_001a:                                                                        //castclass				Root::T_x95
	IL_001f:            V_0->M_x1(safe_cast<Root::T_x95^>(Temp_2));                 //callvirt				void Root::T_x93::M_x1(Root::T_x95^)
	IL_0024:                                                                        //ldloc.0
	IL_0025:            Temp_3=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_002a:                                                                        //pop
	IL_002b:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x5(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x49();                                              //call				void Reflector::Application::ApplicationManager::M_x49()
	IL_0006:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x55()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_7 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IAssemblyCache^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_001b;                                               //br.s				IL_001b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_0097;case 1:goto IL_0071;case 2:goto IL_0055;case 3:goto IL_0062;};//switch				(IL_0097,IL_0071,IL_0055,IL_0062)
	IL_001b:                                                                        //ldc.i4.1
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //dup
	IL_001e:                                                                        //ldc.i4.4
	IL_001f:                                                                        //add
	IL_0020:                                                                        //bgt				IL_001c
	IL_0025:                                                                        //pop
	IL_0026:                                                                        //ldarg.0
	IL_0027:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_002c:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0031:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0036:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_003b:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_003c:                                                                        //ldloc.0
	IL_003d:            Temp_2=V_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0042:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0047:                                                                        //ldc.i4.1
	IL_0048:                                                                        //sub
	IL_0049:            V_1=(Temp_3 - 1);                                           //stloc.1
	IL_004a:                                                                        //ldc.i4				0x2
	IL_004f:            V_3=2;                                                      //stloc				V_3
	IL_0053:            /*goto IL_0002;*/goto IL_0055;                              //br.s				IL_0002
	IL_0055:            goto IL_0057;                                               //br.s				IL_0057
	IL_0057:                                                                        //ldc.i4				0x3
	IL_005c:            V_3=3;                                                      //stloc				V_3
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldloc.1
	IL_0063:                                                                        //ldc.i4.0
	IL_0064:            if(V_1>=0)goto IL_0073;                                     //bge.s				IL_0073
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_3=1;                                                      //stloc				V_3
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_0099;                                               //br.s				IL_0099
	IL_0073:                                                                        //ldloc.0
	IL_0074:                                                                        //ldloc.0
	IL_0075:            Temp_7=V_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_007a:                                                                        //ldloc.1
	IL_007b:            Temp_8=Temp_7[V_1];                                         //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0080:            V_0->Unload(Temp_8);                                        //callvirt				void Reflector::CodeModel::IAssemblyManager::Unload(Reflector::CodeModel::IAssembly^)
	IL_0085:                                                                        //ldloc.1
	IL_0086:                                                                        //ldc.i4.1
	IL_0087:                                                                        //sub
	IL_0088:            V_1=(V_1 - 1);                                              //stloc.1
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_3=0;                                                      //stloc				V_3
	IL_0092:            /*goto IL_0002;*/goto IL_0097;                              //br				IL_0002
	IL_0097:            goto IL_0057;                                               //br.s				IL_0057
	IL_0099:                                                                        //ldarg.0
	IL_009a:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyCache
	IL_009f:            Temp_4=Reflector::CodeModel::IAssemblyCache::typeid;        //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a4:            Temp_5=this->M_x1(Temp_4);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00a9:                                                                        //castclass				Reflector::CodeModel::IAssemblyCache
	IL_00ae:            V_2=safe_cast<Reflector::CodeModel::IAssemblyCache^>(Temp_5);//stloc.2
	IL_00af:                                                                        //ldloc.2
	IL_00b0:            Temp_6=V_2->Directories;                                    //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_00b5:            Temp_6->Clear();                                            //callvirt				void Reflector::CodeModel::IStringCollection::Clear()
	IL_00ba:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x56()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x110^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::IConfiguration^ Temp_2 = nullptr;
	System::Type^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	Root::T_x56^ Temp_5 = nullptr;
	System::Int32 Temp_6 = 0;
	System::Globalization::CultureInfo^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	Root::T_x56^ Temp_9 = nullptr;
	Root::T_x90^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	//local variables.
	Reflector::IConfiguration^ V_0 = nullptr;
	Root::T_x95^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_4=12;                                                     //stloc				V_4
	IL_0009:            goto IL_0024;                                               //br.s				IL_0024
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_0067;case 1:goto IL_0074;case 2:goto IL_00ca;case 3:goto IL_0093;};//switch				(IL_0067,IL_0074,IL_00ca,IL_0093)
	IL_0024:                                                                        //ldarg.0
	IL_0025:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_002a:                                                                        //ldstr				L"\x6B29\x482B\x4A2D\x792F\x5C31\x7933\x5735\x5637\x5B39\x5B3B\x5B3D\x323F"
	IL_002f:                                                                        //ldloc				V_4
	IL_0033:            Temp_1=a(L"\x6B29\x482B\x4A2D\x792F\x5C31\x7933\x5735\x5637\x5B39\x5B3B\x5B3D\x323F",V_4);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0038:            Temp_2=Temp_0->M_x2(Temp_1);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_003d:            V_0=Temp_2;                                                 //stloc.0
	IL_003e:                                                                        //ldloc.0
	IL_003f:            V_0->Clear();                                               //callvirt				void Reflector::IConfiguration::Clear()
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldtoken				Root::T_x95
	IL_004a:            Temp_3=Root::T_x95::typeid;                                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004f:            Temp_4=this->M_x1(Temp_3);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0054:                                                                        //castclass				Root::T_x95
	IL_0059:            V_1=safe_cast<Root::T_x95^>(Temp_4);                        //stloc.1
	IL_005a:                                                                        //ldc.i4.0
	IL_005b:            V_2=0;                                                      //stloc.2
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_3=0;                                                      //stloc				V_3
	IL_0065:            /*goto IL_000b;*/goto IL_0067;                              //br.s				IL_000b
	IL_0067:            goto IL_0069;                                               //br.s				IL_0069
	IL_0069:                                                                        //ldc.i4				0x1
	IL_006e:            V_3=1;                                                      //stloc				V_3
	IL_0072:            /*goto IL_000b;*/goto IL_0074;                              //br.s				IL_000b
	IL_0074:                                                                        //ldloc.2
	IL_0075:                                                                        //ldloc.1
	IL_0076:            Temp_5=V_1->M_x1();                                         //callvirt				Root::T_x56^ Root::T_x95::M_x1()
	IL_007b:            Temp_6=safe_cast<System::Collections::ICollection^>(Temp_5)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0080:            if(V_2<Temp_6)goto IL_0095;                                 //blt.s				IL_0095
	IL_0082:            goto IL_0085;                                               //br.s				IL_0085
	IL_0084:                                                                        //break
	IL_0085:                                                                        //ldc.i4				0x3
	IL_008a:            V_3=3;                                                      //stloc				V_3
	IL_008e:            /*goto IL_000b;*/goto IL_0093;                              //br				IL_000b
	IL_0093:            goto IL_00cc;                                               //br.s				IL_00cc
	IL_0095:                                                                        //ldloc.0
	IL_0096:                                                                        //ldloca.s				V_2
	IL_0098:            Temp_7=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_009d:            Temp_8=V_2.ToString(safe_cast<System::IFormatProvider^>(Temp_7));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_00a2:                                                                        //ldloc.1
	IL_00a3:            Temp_9=V_1->M_x1();                                         //callvirt				Root::T_x56^ Root::T_x95::M_x1()
	IL_00a8:                                                                        //ldloc.2
	IL_00a9:            Temp_10=Temp_9->M_x1(V_2);                                  //callvirt				Root::T_x90^ Root::T_x56::M_x1(System::Int32)
	IL_00ae:            Temp_11=Temp_10->M_x2();                                    //callvirt				System::String^ Root::T_x90::M_x2()
	IL_00b3:            V_0->SetProperty(Temp_8,Temp_11);                           //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_00b8:                                                                        //ldloc.2
	IL_00b9:                                                                        //ldc.i4.1
	IL_00ba:                                                                        //add
	IL_00bb:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00bc:                                                                        //ldc.i4				0x2
	IL_00c1:            V_3=2;                                                      //stloc				V_3
	IL_00c5:            /*goto IL_000b;*/goto IL_00ca;                              //br				IL_000b
	IL_00ca:            goto IL_0069;                                               //br.s				IL_0069
	IL_00cc:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x57()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x99^ Temp_2 = nullptr;
	Root::T_x110^ Temp_3 = nullptr;
	Root::T_x98^ Temp_4 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_5 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Globalization::CultureInfo^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	Root::T_x110^ Temp_12 = nullptr;
	System::Type^ Temp_13 = nullptr;
	System::Object^ Temp_14 = nullptr;
	Root::T_x110^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	Reflector::IConfiguration^ Temp_17 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_18 = nullptr;
	System::Int32 Temp_19 = 0;
	Root::T_x98^ Temp_20 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_21 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_22 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_23 = nullptr;
	System::String^ Temp_24 = nullptr;
	System::Int32 Temp_25 = 0;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Root::T_x99^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IAssemblyCache^ V_3 = nullptr;
	Reflector::IConfiguration^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_7=19;                                                     //stloc				V_7
	IL_0009:            goto IL_0034;                                               //br.s				IL_0034
	IL_000b:                                                                        //ldloc				V_6
	IL_000f:            switch(V_6){case 0:goto IL_0175;case 1:goto IL_0079;case 2:goto IL_0155;case 3:goto IL_00b2;case 4:goto IL_01a4;case 5:goto IL_010c;case 6:goto IL_0145;case 7:goto IL_0185;};//switch				(IL_0175,IL_0079,IL_0155,IL_00b2,IL_01a4,IL_010c,IL_0145,IL_0185)
	IL_0034:                                                                        //ldarg.0
	IL_0035:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_003a:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_003f:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0044:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_0049:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_004a:            Temp_2=gcnew Root::T_x99();                                 //newobj				void Root::T_x99::.ctor()
	IL_004f:            V_1=Temp_2;                                                 //stloc.1
	IL_0050:                                                                        //ldloc.1
	IL_0051:                                                                        //ldarg.0
	IL_0052:            Temp_3=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0057:            V_1->M_x2(safe_cast<Reflector::IConfigurationManager^>(Temp_3));//callvirt				void Root::T_x99::M_x2(Reflector::IConfigurationManager^)
	IL_005c:                                                                        //ldloc.1
	IL_005d:            Temp_4=V_1->M_x13();                                        //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0062:            Temp_5=Temp_4->M_x1();                                      //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_0067:            Temp_5->Clear();                                            //callvirt				void System::Collections::Specialized::StringCollection::Clear()
	IL_006c:                                                                        //ldc.i4.0
	IL_006d:            V_2=0;                                                      //stloc.2
	IL_006e:                                                                        //ldc.i4				0x1
	IL_0073:            V_6=1;                                                      //stloc				V_6
	IL_0077:            /*goto IL_000b;*/goto IL_0079;                              //br.s				IL_000b
	IL_0079:            goto IL_0177;                                               //br				IL_0177
	IL_007e:                                                                        //ldloc.s				V_4
	IL_0080:                                                                        //ldloca.s				V_5
	IL_0082:            Temp_8=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0087:            Temp_9=V_5.ToString(safe_cast<System::IFormatProvider^>(Temp_8));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_008c:                                                                        //ldloc.3
	IL_008d:            Temp_10=V_3->Directories;                                   //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_0092:                                                                        //ldloc.s				V_5
	IL_0094:            Temp_11=Temp_10[V_5];                                       //callvirt				System::String^ Reflector::CodeModel::IStringCollection::get_Item(System::Int32)
	IL_0099:            V_4->SetProperty(Temp_9,Temp_11);                           //callvirt				void Reflector::IConfiguration::SetProperty(System::String^,System::String^)
	IL_009e:                                                                        //ldloc.s				V_5
	IL_00a0:                                                                        //ldc.i4.1
	IL_00a1:                                                                        //add
	IL_00a2:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_00a4:                                                                        //ldc.i4				0x3
	IL_00a9:            V_6=3;                                                      //stloc				V_6
	IL_00ad:            /*goto IL_000b;*/goto IL_00b2;                              //br				IL_000b
	IL_00b2:            goto IL_0147;                                               //br				IL_0147
	IL_00b7:                                                                        //ldloc.1
	IL_00b8:                                                                        //ldarg.0
	IL_00b9:            Temp_12=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_00be:            V_1->M_x1(safe_cast<Reflector::IConfigurationManager^>(Temp_12));//callvirt				void Root::T_x99::M_x1(Reflector::IConfigurationManager^)
	IL_00c3:                                                                        //ldarg.0
	IL_00c4:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyCache
	IL_00c9:            Temp_13=Reflector::CodeModel::IAssemblyCache::typeid;       //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00ce:            Temp_14=this->M_x1(Temp_13);                                //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00d3:                                                                        //castclass				Reflector::CodeModel::IAssemblyCache
	IL_00d8:            V_3=safe_cast<Reflector::CodeModel::IAssemblyCache^>(Temp_14);//stloc.3
	IL_00d9:                                                                        //ldarg.0
	IL_00da:            Temp_15=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_00df:                                                                        //ldstr				L"\x7030\x4032\x4634\x5236\x5438\x593A\x513C\x463E\x0240\x2242\x2644\x2F46\x2C48"
	IL_00e4:                                                                        //ldloc				V_7
	IL_00e8:            Temp_16=a(L"\x7030\x4032\x4634\x5236\x5438\x593A\x513C\x463E\x0240\x2242\x2644\x2F46\x2C48",V_7);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ed:            Temp_17=Temp_15->M_x2(Temp_16);                             //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_00f2:            V_4=Temp_17;                                                //stloc.s				V_4
	IL_00f4:                                                                        //ldloc.s				V_4
	IL_00f6:            V_4->Clear();                                               //callvirt				void Reflector::IConfiguration::Clear()
	IL_00fb:                                                                        //ldc.i4.0
	IL_00fc:            V_5=0;                                                      //stloc.s				V_5
	IL_00fe:                                                                        //ldc.i4				0x5
	IL_0103:            V_6=5;                                                      //stloc				V_6
	IL_0107:            /*goto IL_000b;*/goto IL_010c;                              //br				IL_000b
	IL_010c:            goto IL_0147;                                               //br.s				IL_0147
	IL_010e:                                                                        //ldloc.1
	IL_010f:            Temp_20=V_1->M_x13();                                       //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0114:            Temp_21=Temp_20->M_x1();                                    //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_0119:                                                                        //ldloc.0
	IL_011a:            Temp_22=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_011f:                                                                        //ldloc.2
	IL_0120:            Temp_23=Temp_22[V_2];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_0125:            Temp_24=safe_cast<Reflector::CodeModel::IAssemblyLocation^>(Temp_23)->Location;//callvirt				System::String^ Reflector::CodeModel::IAssemblyLocation::get_Location()
	IL_012a:            Temp_25=Temp_21->Add(Temp_24);                              //callvirt				System::Int32 System::Collections::Specialized::StringCollection::Add(System::String^)
	IL_012f:                                                                        //pop
	IL_0130:                                                                        //ldloc.2
	IL_0131:                                                                        //ldc.i4.1
	IL_0132:                                                                        //add
	IL_0133:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0134:            goto IL_0137;                                               //br.s				IL_0137
	IL_0136:                                                                        //break
	IL_0137:                                                                        //ldc.i4				0x6
	IL_013c:            V_6=6;                                                      //stloc				V_6
	IL_0140:            /*goto IL_000b;*/goto IL_0145;                              //br				IL_000b
	IL_0145:            goto IL_0177;                                               //br.s				IL_0177
	IL_0147:                                                                        //ldc.i4				0x2
	IL_014c:            V_6=2;                                                      //stloc				V_6
	IL_0150:            /*goto IL_000b;*/goto IL_0155;                              //br				IL_000b
	IL_0155:                                                                        //ldloc.s				V_5
	IL_0157:                                                                        //ldloc.3
	IL_0158:            Temp_6=V_3->Directories;                                    //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_015d:            Temp_7=safe_cast<System::Collections::ICollection^>(Temp_6)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0162:            if(V_5<Temp_7)goto IL_007e;                                 //blt				IL_007e
	IL_0167:                                                                        //ldc.i4				0x0
	IL_016c:            V_6=0;                                                      //stloc				V_6
	IL_0170:            /*goto IL_000b;*/goto IL_0175;                              //br				IL_000b
	IL_0175:            goto IL_01a9;                                               //br.s				IL_01a9
	IL_0177:                                                                        //ldc.i4				0x7
	IL_017c:            V_6=7;                                                      //stloc				V_6
	IL_0180:            /*goto IL_000b;*/goto IL_0185;                              //br				IL_000b
	IL_0185:                                                                        //ldloc.2
	IL_0186:                                                                        //ldloc.0
	IL_0187:            Temp_18=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_018c:            Temp_19=safe_cast<System::Collections::ICollection^>(Temp_18)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0191:            if(V_2<Temp_19)goto IL_010e;                                //blt				IL_010e
	IL_0196:                                                                        //ldc.i4				0x4
	IL_019b:            V_6=4;                                                      //stloc				V_6
	IL_019f:            /*goto IL_000b;*/goto IL_01a4;                              //br				IL_000b
	IL_01a4:            goto IL_00b7;                                               //br				IL_00b7
	IL_01a9:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x6()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x69^ Temp_2 = nullptr;
	array<System::String^>^ Temp_3 = nullptr;
	System::Windows::Forms::DialogResult Temp_4 = (System::Windows::Forms::DialogResult)0;
	System::Int32 Temp_5 = 0;
	System::Type^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_8 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyCache^ V_0 = nullptr;
	Root::T_x69^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ V_3 = nullptr;
	array<System::String^>^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_6
	IL_0006:            switch(V_6){case 0:goto IL_00e2;case 1:goto IL_0062;case 2:goto IL_004b;case 3:goto IL_00bc;case 4:goto IL_0082;case 5:goto IL_006f;};//switch				(IL_00e2,IL_0062,IL_004b,IL_00bc,IL_0082,IL_006f)
	IL_0023:                                                                        //ldarg.0
	IL_0024:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyCache
	IL_0029:            Temp_0=Reflector::CodeModel::IAssemblyCache::typeid;        //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_002e:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0033:                                                                        //castclass				Reflector::CodeModel::IAssemblyCache
	IL_0038:            V_0=safe_cast<Reflector::CodeModel::IAssemblyCache^>(Temp_1);//stloc.0
	IL_0039:                                                                        //ldloc.0
	IL_003a:            Temp_2=gcnew Root::T_x69(V_0);                              //newobj				void Root::T_x69::.ctor(Reflector::CodeModel::IAssemblyCache^)
	IL_003f:            V_1=Temp_2;                                                 //stloc.1
	IL_0040:                                                                        //ldc.i4				0x2
	IL_0045:            V_6=2;                                                      //stloc				V_6
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:                                                                        //ldloc.1
	IL_004c:            Temp_4=V_1->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0051:                                                                        //ldc.i4.1
	IL_0052:            if(safe_cast<System::Int32>(Temp_4)!=1)goto IL_00e4;        //bne.un				IL_00e4
	IL_0057:                                                                        //ldc.i4				0x1
	IL_005c:            V_6=1;                                                      //stloc				V_6
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:            goto IL_00c9;                                               //br.s				IL_00c9
	IL_0064:                                                                        //ldc.i4				0x5
	IL_0069:            V_6=5;                                                      //stloc				V_6
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:                                                                        //ldloc.s				V_5
	IL_0071:                                                                        //ldloc.s				V_4
	IL_0073:            Temp_5=V_4->Length;                                         //ldlen
	IL_0074:                                                                        //conv.i4
	IL_0075:            if(V_5<Temp_5)goto IL_0084;                                 //blt.s				IL_0084
	IL_0077:                                                                        //ldc.i4				0x4
	IL_007c:            V_6=4;                                                      //stloc				V_6
	IL_0080:            /*goto IL_0002;*/goto IL_0082;                              //br.s				IL_0002
	IL_0082:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_0084:                                                                        //ldloc.s				V_4
	IL_0086:                                                                        //ldloc.s				V_5
	IL_0088:                                                                        //ldelem.ref
	IL_0089:            V_2=V_4[V_5];                                               //stloc.2
	IL_008a:                                                                        //ldarg.0
	IL_008b:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0090:            Temp_6=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0095:            Temp_7=this->M_x1(Temp_6);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_009a:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_009f:            V_3=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_7);//stloc.3
	IL_00a0:                                                                        //ldloc.3
	IL_00a1:                                                                        //ldloc.2
	IL_00a2:            Temp_8=V_3->LoadFile(V_2);                                  //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_00a7:                                                                        //pop
	IL_00a8:                                                                        //ldloc.s				V_5
	IL_00aa:                                                                        //ldc.i4.1
	IL_00ab:                                                                        //add
	IL_00ac:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_00ae:                                                                        //ldc.i4				0x3
	IL_00b3:            V_6=3;                                                      //stloc				V_6
	IL_00b7:            /*goto IL_0002;*/goto IL_00bc;                              //br				IL_0002
	IL_00bc:                                                                        //ldc.i4.5
	IL_00bd:                                                                        //dup
	IL_00be:                                                                        //dup
	IL_00bf:                                                                        //ldc.i4.3
	IL_00c0:                                                                        //sub
	IL_00c1:                                                                        //blt				IL_00bd
	IL_00c6:                                                                        //pop
	IL_00c7:            goto IL_0064;                                               //br.s				IL_0064
	IL_00c9:                                                                        //ldloc.1
	IL_00ca:            Temp_3=V_1->M_x8();                                         //callvirt				array<System::String^>^ Root::T_x69::M_x8()
	IL_00cf:            V_4=Temp_3;                                                 //stloc.s				V_4
	IL_00d1:                                                                        //ldc.i4.0
	IL_00d2:            V_5=0;                                                      //stloc.s				V_5
	IL_00d4:                                                                        //ldc.i4				0x0
	IL_00d9:            V_6=0;                                                      //stloc				V_6
	IL_00dd:            /*goto IL_0002;*/goto IL_00e2;                              //br				IL_0002
	IL_00e2:            goto IL_0064;                                               //br.s				IL_0064
	IL_00e4:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x82^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Object^ Temp_4 = nullptr;
	System::Windows::Forms::DialogResult Temp_5 = (System::Windows::Forms::DialogResult)0;
	System::Collections::IEnumerable^ Temp_6 = nullptr;
	System::Collections::IEnumerator^ Temp_7 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Root::T_x82^ V_1 = nullptr;
	Reflector::CodeModel::IAssembly^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_5
	IL_0006:            switch(V_5){case 0:goto IL_0149;case 1:goto IL_004a;case 2:goto IL_0061;};//switch				(IL_0149,IL_004a,IL_0061)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_001d:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0022:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0027:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_002c:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_002d:                                                                        //ldloc.0
	IL_002e:            Temp_2=gcnew Root::T_x82(V_0);                              //newobj				void Root::T_x82::.ctor(Reflector::CodeModel::IAssemblyManager^)
	IL_0033:            V_1=Temp_2;                                                 //stloc.1
	IL_0034:                                                                        //ldc.i4.6
	IL_0035:                                                                        //dup
	IL_0036:                                                                        //dup
	IL_0037:                                                                        //ldc.i4.5
	IL_0038:                                                                        //sub
	IL_0039:                                                                        //blt				IL_0035
	IL_003e:                                                                        //pop
	IL_003f:                                                                        //ldc.i4				0x1
	IL_0044:            V_5=1;                                                      //stloc				V_5
	IL_0048:            /*goto IL_0002;*/goto IL_004a;                              //br.s				IL_0002
	IL_004a:                                                                        //ldloc.1
	IL_004b:            Temp_5=V_1->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0050:                                                                        //ldc.i4.1
	IL_0051:            if(safe_cast<System::Int32>(Temp_5)!=1)goto IL_014e;        //bne.un				IL_014e
	IL_0056:                                                                        //ldc.i4				0x2
	IL_005b:            V_5=2;                                                      //stloc				V_5
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_012f;                                               //br				IL_012f
	IL_006101:          try{
	IL_0066:                                                                        //ldc.i4				0x1
	IL_006b:            V_5=1;                                                      //stloc				V_5
	IL_006f:            /*goto IL_0073;*/goto IL_0071;                              //br.s				IL_0073
	IL_0071:            goto IL_0090;                                               //br.s				IL_0090
	IL_0073:                                                                        //ldloc				V_5
	IL_0077:            switch(V_5){case 0:goto IL_00dd;case 1:goto IL_0071;case 2:goto IL_009d;case 3:goto IL_00b0;case 4:goto IL_00d0;};//switch				(IL_00dd,IL_0071,IL_009d,IL_00b0,IL_00d0)
	IL_0090:            goto IL_0092;                                               //br.s				IL_0092
	IL_0092:                                                                        //ldc.i4				0x2
	IL_0097:            V_5=2;                                                      //stloc				V_5
	IL_009b:            /*goto IL_0073;*/goto IL_009d;                              //br.s				IL_0073
	IL_009d:                                                                        //ldloc.3
	IL_009e:            Temp_3=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a3:            if(Temp_3)goto IL_00b2;                                     //brtrue.s				IL_00b2
	IL_00a5:                                                                        //ldc.i4				0x3
	IL_00aa:            V_5=3;                                                      //stloc				V_5
	IL_00ae:            /*goto IL_0073;*/goto IL_00b0;                              //br.s				IL_0073
	IL_00b0:            goto IL_00d2;                                               //br.s				IL_00d2
	IL_00b2:                                                                        //ldloc.3
	IL_00b3:            Temp_4=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_00b8:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_00bd:            V_2=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_4);    //stloc.2
	IL_00be:                                                                        //ldloc.0
	IL_00bf:                                                                        //ldloc.2
	IL_00c0:            V_0->Unload(V_2);                                           //callvirt				void Reflector::CodeModel::IAssemblyManager::Unload(Reflector::CodeModel::IAssembly^)
	IL_00c5:                                                                        //ldc.i4				0x4
	IL_00ca:            V_5=4;                                                      //stloc				V_5
	IL_00ce:            /*goto IL_0073;*/goto IL_00d0;                              //br.s				IL_0073
	IL_00d0:            goto IL_0092;                                               //br.s				IL_0092
	IL_00d2:                                                                        //ldc.i4				0x0
	IL_00d7:            V_5=0;                                                      //stloc				V_5
	IL_00db:            /*goto IL_0073;*/goto IL_00dd;                              //br.s				IL_0073
	IL_00dd:            goto IL_014e;                                               //leave.s				IL_014e
	                    ;}
	                    finally{
	IL_00df:            goto IL_00f6;                                               //br.s				IL_00f6
	IL_00e1:                                                                        //ldloc				V_5
	IL_00e5:            switch(V_5){case 0:goto IL_0118;case 1:goto IL_012c;case 2:goto IL_0109;};//switch				(IL_0118,IL_012c,IL_0109)
	IL_00f6:                                                                        //ldloc.3
	IL_00f7:                                                                        //isinst				System::IDisposable
	IL_00fc:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00fe:                                                                        //ldc.i4				0x2
	IL_0103:            V_5=2;                                                      //stloc				V_5
	IL_0107:            /*goto IL_00e1;*/goto IL_0109;                              //br.s				IL_00e1
	IL_0109:                                                                        //ldloc.s				V_4
	IL_010b:            if(V_4==nullptr)goto IL_012e;                               //brfalse.s				IL_012e
	IL_010d:                                                                        //ldc.i4				0x0
	IL_0112:            V_5=0;                                                      //stloc				V_5
	IL_0116:            /*goto IL_00e1;*/goto IL_0118;                              //br.s				IL_00e1
	IL_0118:            goto IL_011a;                                               //br.s				IL_011a
	IL_011a:                                                                        //ldloc.s				V_4
	IL_011c:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0121:                                                                        //ldc.i4				0x1
	IL_0126:            V_5=1;                                                      //stloc				V_5
	IL_012a:            /*goto IL_00e1;*/goto IL_012c;                              //br.s				IL_00e1
	IL_012c:            goto IL_012e;                                               //br.s				IL_012e
	IL_012e:                                                                        //endfinally
	                    ;}
	IL_012f:                                                                        //ldloc.1
	IL_0130:            Temp_6=V_1->M_x2();                                         //callvirt				System::Collections::IEnumerable^ Root::T_x82::M_x2()
	IL_0135:            Temp_7=Temp_6->GetEnumerator();                             //callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_013a:            V_3=Temp_7;                                                 //stloc.3
	IL_013b:                                                                        //ldc.i4				0x0
	IL_0140:            V_5=0;                                                      //stloc				V_5
	IL_0144:            /*goto IL_0002;*/goto IL_0149;                              //br				IL_0002
	IL_0149:            /*goto IL_0066;*/goto IL_006101;                            //br				IL_0066
	IL_014e:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x57^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::Cursor^ Temp_3 = nullptr;
	System::Windows::Forms::Cursor^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Windows::Forms::DialogResult Temp_9 = (System::Windows::Forms::DialogResult)0;
	//local variables.
	Root::T_x57^ V_0 = nullptr;
	System::Windows::Forms::Cursor^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_3=11;                                                     //stloc				V_3
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_00b1;case 1:goto IL_0069;case 2:goto IL_004a;};//switch				(IL_00b1,IL_0069,IL_004a)
	IL_0020:            Temp_0=gcnew Root::T_x57();                                 //newobj				void Root::T_x57::.ctor()
	IL_0025:            V_0=Temp_0;                                                 //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldstr				L"\x6C28\x462A\x4C2C\x462E\x5D30"
	IL_002c:                                                                        //ldloc				V_3
	IL_0030:            Temp_1=a(L"\x6C28\x462A\x4C2C\x462E\x5D30",V_3);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0035:            Temp_2=Root::T_x128::M_x1(Temp_1);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_003a:            V_0->M_x2(Temp_2);                                          //callvirt				void Root::T_x57::M_x2(System::String^)
	IL_003f:                                                                        //ldc.i4				0x2
	IL_0044:            V_2=2;                                                      //stloc				V_2
	IL_0048:            /*goto IL_000b;*/goto IL_004a;                              //br.s				IL_000b
	IL_004a:                                                                        //ldloc.0
	IL_004b:            Temp_9=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_0050:                                                                        //ldc.i4.1
	IL_0051:            if(safe_cast<System::Int32>(Temp_9)!=1)goto IL_00b3;        //bne.un.s				IL_00b3
	IL_0053:                                                                        //ldc.i4.3
	IL_0054:                                                                        //dup
	IL_0055:                                                                        //dup
	IL_0056:                                                                        //ldc.i4.0
	IL_0057:                                                                        //sub
	IL_0058:                                                                        //blt				IL_0054
	IL_005d:                                                                        //pop
	IL_005e:                                                                        //ldc.i4				0x1
	IL_0063:            V_2=1;                                                      //stloc				V_2
	IL_0067:            /*goto IL_000b;*/goto IL_0069;                              //br.s				IL_000b
	IL_0069:            goto IL_006b;                                               //br.s				IL_006b
	IL_006b:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0070:            Temp_3=System::Windows::Forms::Cursor::Current;             //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursor::get_Current()
	IL_0075:            V_1=Temp_3;                                                 //stloc.1
	IL_0076:            Temp_4=System::Windows::Forms::Cursors::WaitCursor;         //call				System::Windows::Forms::Cursor^ System::Windows::Forms::Cursors::get_WaitCursor()
	IL_007b:            System::Windows::Forms::Cursor::Current=Temp_4;             //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_0080:                                                                        //ldloc.0
	IL_0081:            Temp_5=V_0->M_x13();                                        //callvirt				System::String^ Root::T_x57::M_x13()
	IL_0086:                                                                        //ldloc.0
	IL_0087:            Temp_6=V_0->M_x12();                                        //callvirt				System::String^ Root::T_x57::M_x12()
	IL_008c:                                                                        //ldloc.0
	IL_008d:            Temp_7=V_0->M_x2();                                         //callvirt				System::String^ Root::T_x57::M_x2()
	IL_0092:                                                                        //ldloc.0
	IL_0093:            Temp_8=V_0->M_x1();                                         //callvirt				System::String^ Root::T_x57::M_x1()
	IL_0098:            Root::T_x113::M_x1(Temp_5,Temp_6,Temp_7,Temp_8);            //call				void Root::T_x113::M_x1(System::String^,System::String^,System::String^,System::String^)
	IL_009d:                                                                        //ldloc.1
	IL_009e:            System::Windows::Forms::Cursor::Current=V_1;                //call				void System::Windows::Forms::Cursor::set_Current(System::Windows::Forms::Cursor^)
	IL_00a3:                                                                        //ldc.i4				0x0
	IL_00a8:            V_2=0;                                                      //stloc				V_2
	IL_00ac:            /*goto IL_000b;*/goto IL_00b1;                              //br				IL_000b
	IL_00b1:            goto IL_00b3;                                               //br.s				IL_00b3
	IL_00b3:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x8(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x9;                                          //ldfld				Root::T_x25^ Reflector::Application::ApplicationManager F_x9
	IL_0006:            Temp_0->M_x13();                                            //callvirt				void Root::T_x25::M_x13()
	IL_000b:            return;                                                     //ret

}
inline System::Boolean Reflector::Application::ApplicationManager::M_x8(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x8
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::Hashtable^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Collections::Hashtable^ Temp_3 = nullptr;
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
	System::Type^ Temp_17 = nullptr;
	System::Object^ Temp_18 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	System::Boolean Temp_21 = false;
	System::Collections::Hashtable^ Temp_22 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	System::Object^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x5
	IL_000e:            V_2=5;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0213;case 1:goto IL_02b2;case 2:goto IL_0090;case 3:goto IL_005e;case 4:goto IL_024e;case 5:goto IL_0014;case 6:goto IL_02d1;case 7:goto IL_006d;case 8:goto IL_029c;case 9:goto IL_007d;};//switch				(IL_0213,IL_02b2,IL_0090,IL_005e,IL_024e,IL_0014,IL_02d1,IL_006d,IL_029c,IL_007d)
	IL_0047:                                                                        //volatile.
	IL_0049:            Temp_22=Root::T_x188::F_x15;                                //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x15
	IL_004e:            if(Temp_22!=nullptr)goto IL_0072;                           //brtrue				IL_0072
	IL_0053:                                                                        //ldc.i4				0x3
	IL_0058:            V_2=3;                                                      //stloc				V_2
	IL_005c:            /*goto IL_0016;*/goto IL_005e;                              //br.s				IL_0016
	IL_005e:            goto IL_009c;                                               //br.s				IL_009c
	IL_0060:                                                                        //ldc.i4.1
	IL_0061:            return true;                                                //ret
	IL_0062:                                                                        //ldc.i4				0x7
	IL_0067:            V_2=7;                                                      //stloc				V_2
	IL_006b:            /*goto IL_0016;*/goto IL_006d;                              //br.s				IL_0016
	IL_006d:            goto IL_02d6;                                               //br				IL_02d6
	IL_0072:                                                                        //ldc.i4				0x9
	IL_0077:            V_2=9;                                                      //stloc				V_2
	IL_007b:            /*goto IL_0016;*/goto IL_007d;                              //br.s				IL_0016
	IL_007d:                                                                        //ldarg.1
	IL_007e:                                                                        //dup
	IL_007f:            V_1=safe_cast<System::Object^>(A_0);                        //stloc.1
	IL_0080:            if(A_0==nullptr)goto IL_02d6;                               //brfalse				IL_02d6
	IL_0085:                                                                        //ldc.i4				0x2
	IL_008a:            V_2=2;                                                      //stloc				V_2
	IL_008e:            /*goto IL_0016;*/goto IL_0090;                              //br.s				IL_0016
	IL_0090:            goto IL_02a4;                                               //br				IL_02a4
	IL_0095:                                                                        //ldarg.0
	IL_0096:            Temp_21=this->F_x12;                                        //ldfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_009b:            return Temp_21;                                             //ret
	IL_009c:                                                                        //ldc.i4.s				26
	IL_009e:                                                                        //ldc.r4				0.5
	IL_00a3:            Temp_3=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(26),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_00a8:                                                                        //dup
	IL_00a9:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x793E\x2840\x2F42\x2044"
	IL_00ae:                                                                        //ldloc				V_3
	IL_00b2:            Temp_4=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x793E\x2840\x2F42\x2044",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b7:                                                                        //ldc.i4.0
	IL_00b8:                                                                        //box				System::Int32
	IL_00bd:            Temp_3->Add(safe_cast<System::Object^>(Temp_4),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_00c2:                                                                        //dup
	IL_00c3:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x7C3E\x2040\x2042\x2D44\x2246"
	IL_00c8:                                                                        //ldloc				V_3
	IL_00cc:            Temp_5=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x7C3E\x2040\x2042\x2D44\x2246",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d1:                                                                        //ldc.i4.1
	IL_00d2:                                                                        //box				System::Int32
	IL_00d7:            Temp_3->Add(safe_cast<System::Object^>(Temp_5),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_00dc:                                                                        //dup
	IL_00dd:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x733E\x2840\x3042\x3144"
	IL_00e2:                                                                        //ldloc				V_3
	IL_00e6:            Temp_6=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x5E3A\x533C\x733E\x2840\x3042\x3144",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00eb:                                                                        //ldc.i4.2
	IL_00ec:                                                                        //box				System::Int32
	IL_00f1:            Temp_3->Add(safe_cast<System::Object^>(Temp_6),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_00f6:                                                                        //dup
	IL_00f7:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7236\x4138\x523A\x493C"
	IL_00fc:                                                                        //ldloc				V_3
	IL_0100:            Temp_7=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7236\x4138\x523A\x493C",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0105:                                                                        //ldc.i4.3
	IL_0106:                                                                        //box				System::Int32
	IL_010b:            Temp_3->Add(safe_cast<System::Object^>(Temp_7),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0110:                                                                        //dup
	IL_0111:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7536\x5638\x543A\x563C\x523E\x2040\x3142\x2E44"
	IL_0116:                                                                        //ldloc				V_3
	IL_011a:            Temp_8=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7536\x5638\x543A\x563C\x523E\x2040\x3142\x2E44",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011f:                                                                        //ldc.i4.4
	IL_0120:                                                                        //box				System::Int32
	IL_0125:            Temp_3->Add(safe_cast<System::Object^>(Temp_8),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_012a:                                                                        //dup
	IL_012b:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6436\x5C38\x5A3A\x4F3C\x5C3E\x2940"
	IL_0130:                                                                        //ldloc				V_3
	IL_0134:            Temp_9=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6436\x5C38\x5A3A\x4F3C\x5C3E\x2940",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0139:                                                                        //ldc.i4.5
	IL_013a:                                                                        //box				System::Int32
	IL_013f:            Temp_3->Add(safe_cast<System::Object^>(Temp_9),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0144:                                                                        //dup
	IL_0145:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7636\x5D38\x5F3A\x743C\x513E\x3240"
	IL_014a:                                                                        //ldloc				V_3
	IL_014e:            Temp_10=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7636\x5D38\x5F3A\x743C\x513E\x3240",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0153:                                                                        //ldc.i4.6
	IL_0154:                                                                        //box				System::Int32
	IL_0159:            Temp_3->Add(safe_cast<System::Object^>(Temp_10),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_015e:                                                                        //dup
	IL_015f:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x4F3A\x543C\x503E\x2F40\x3042"
	IL_0164:                                                                        //ldloc				V_3
	IL_0168:            Temp_11=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7836\x4938\x4F3A\x543C\x503E\x2F40\x3042",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_016d:                                                                        //ldc.i4.7
	IL_016e:                                                                        //box				System::Int32
	IL_0173:            Temp_3->Add(safe_cast<System::Object^>(Temp_11),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0178:                                                                        //dup
	IL_0179:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6436\x5C38\x553A\x593C\x793E\x2440\x2642\x2144\x2546\x2848\x284A\x264C"
	IL_017e:                                                                        //ldloc				V_3
	IL_0182:            Temp_12=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6436\x5C38\x553A\x593C\x793E\x2440\x2642\x2144\x2546\x2848\x284A\x264C",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0187:                                                                        //ldc.i4.8
	IL_0188:                                                                        //box				System::Int32
	IL_018d:            Temp_3->Add(safe_cast<System::Object^>(Temp_12),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_0192:                                                                        //dup
	IL_0193:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7436\x5138\x5E3A\x5E3C\x543E\x0740\x2C42\x3744\x1246\x3948\x2F4A\x2C4C\x3B4E\x3450\x2052"
	IL_0198:                                                                        //ldloc				V_3
	IL_019c:            Temp_13=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7436\x5138\x5E3A\x5E3C\x543E\x0740\x2C42\x3744\x1246\x3948\x2F4A\x2C4C\x3B4E\x3450\x2052",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a1:                                                                        //ldc.i4.s				9
	IL_01a3:                                                                        //box				System::Int32
	IL_01a8:            Temp_3->Add(safe_cast<System::Object^>(Temp_13),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01ad:                                                                        //dup
	IL_01ae:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7636\x5B38\x543A\x483C\x4B3E"
	IL_01b3:                                                                        //ldloc				V_3
	IL_01b7:            Temp_14=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7636\x5B38\x543A\x483C\x4B3E",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01bc:                                                                        //ldc.i4.s				10
	IL_01be:                                                                        //box				System::Int32
	IL_01c3:            Temp_3->Add(safe_cast<System::Object^>(Temp_14),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01c8:                                                                        //dup
	IL_01c9:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7436\x5538\x543A\x4E3C\x5A3E\x0740\x2A42\x2944\x2246"
	IL_01ce:                                                                        //ldloc				V_3
	IL_01d2:            Temp_15=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x7436\x5538\x543A\x4E3C\x5A3E\x0740\x2A42\x2944\x2246",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d7:                                                                        //ldc.i4.s				11
	IL_01d9:                                                                        //box				System::Int32
	IL_01de:            Temp_3->Add(safe_cast<System::Object^>(Temp_15),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01e3:                                                                        //dup
	IL_01e4:                                                                        //ldstr				L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6536\x5C38\x5D3A\x4F3C\x5A3E\x3240\x2B42"
	IL_01e9:                                                                        //ldloc				V_3
	IL_01ed:            Temp_16=a(L"\x5E1E\x5120\x5322\x4924\x4E26\x4A28\x4A2A\x592C\x462E\x5E30\x5D32\x1B34\x6536\x5C38\x5D3A\x4F3C\x5A3E\x3240\x2B42",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f2:                                                                        //ldc.i4.s				12
	IL_01f4:                                                                        //box				System::Int32
	IL_01f9:            Temp_3->Add(safe_cast<System::Object^>(Temp_16),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_01fe:                                                                        //volatile.
	IL_0200:            Root::T_x188::F_x15=Temp_3;                                 //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x15
	IL_0205:                                                                        //ldc.i4				0x0
	IL_020a:            V_2=0;                                                      //stloc				V_2
	IL_020e:            /*goto IL_0016;*/goto IL_0213;                              //br				IL_0016
	IL_0213:            goto IL_0072;                                               //br				IL_0072
	IL_0218:                                                                        //ldarg.0
	IL_0219:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_021e:            Temp_17=Reflector::CodeModel::IAssemblyManager::typeid;     //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0223:            Temp_18=this->M_x1(Temp_17);                                //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0228:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_022d:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_18);//stloc.0
	IL_022e:                                                                        //ldloc.0
	IL_022f:            Temp_19=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0234:            Temp_20=safe_cast<System::Collections::ICollection^>(Temp_19)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0239:                                                                        //ldc.i4.0
	IL_023a:                                                                        //ceq
	IL_023c:                                                                        //ldc.i4.0
	IL_023d:                                                                        //ceq
	IL_023f:            return ((Temp_20 == 0) == false);                           //ret
	IL_0240:                                                                        //ldc.i4				0x4
	IL_0245:            V_2=4;                                                      //stloc				V_2
	IL_0249:            /*goto IL_0016;*/goto IL_024e;                              //br				IL_0016
	IL_024e:                                                                        //ldloc.1
	IL_024f:                                                                        //unbox				System::Int32
	IL_0254:                                                                        //ldind.i4
	IL_0255:            switch(safe_cast<System::Int32>(V_1)){case 0:goto IL_0060;case 1:goto IL_0060;case 2:goto IL_0060;case 3:goto IL_0060;case 4:goto IL_0060;case 5:goto IL_0060;case 6:goto IL_0060;case 7:goto IL_0060;case 8:goto IL_0060;case 9:goto IL_0060;case 10:goto IL_0060;case 11:goto IL_0218;case 12:goto IL_0095;};//switch				(IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0060,IL_0218,IL_0095)
	IL_028e:                                                                        //ldc.i4				0x8
	IL_0293:            V_2=8;                                                      //stloc				V_2
	IL_0297:            /*goto IL_0016;*/goto IL_029c;                              //br				IL_0016
	IL_029c:            goto IL_029f;                                               //br.s				IL_029f
	IL_029e:                                                                        //break
	IL_029f:            goto IL_0062;                                               //br				IL_0062
	IL_02a4:                                                                        //ldc.i4				0x1
	IL_02a9:            V_2=1;                                                      //stloc				V_2
	IL_02ad:            /*goto IL_0016;*/goto IL_02b2;                              //br				IL_0016
	IL_02b2:                                                                        //volatile.
	IL_02b4:            Temp_0=Root::T_x188::F_x15;                                 //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x15
	IL_02b9:            Temp_2=V_1;                                                 //ldloc.1
	IL_02ba:            Temp_1=Temp_0[Temp_2];                                      //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_02bf:                                                                        //dup
	IL_02c0:            V_1=Temp_1;                                                 //stloc.1
	IL_02c1:            if(V_1==nullptr)goto IL_02d6;                               //brfalse.s				IL_02d6
	IL_02c3:                                                                        //ldc.i4				0x6
	IL_02c8:            V_2=6;                                                      //stloc				V_2
	IL_02cc:            /*goto IL_0016;*/goto IL_02d1;                              //br				IL_0016
	IL_02d1:            goto IL_0240;                                               //br				IL_0240
	IL_02d6:                                                                        //ldc.i4.0
	IL_02d7:            return false;                                               //ret

}
inline void Reflector::Application::ApplicationManager::M_x81()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Root::T_x110^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	Reflector::IConfiguration^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_7 = nullptr;
	Root::T_x98^ Temp_8 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_9 = nullptr;
	System::Int32 Temp_10 = 0;
	Root::T_x99^ Temp_11 = nullptr;
	Root::T_x71^ Temp_12 = nullptr;
	System::Collections::ArrayList^ Temp_13 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_14 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	Root::T_x99^ Temp_18 = nullptr;
	Root::T_x110^ Temp_19 = nullptr;
	Root::T_x98^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	System::Globalization::CultureInfo^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	System::Boolean Temp_24 = false;
	System::Globalization::CultureInfo^ Temp_25 = nullptr;
	System::String^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::Int32 Temp_28 = 0;
	Root::T_x98^ Temp_29 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_30 = nullptr;
	System::Int32 Temp_31 = 0;
	Root::T_x98^ Temp_32 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_35 = nullptr;
	Root::T_x98^ Temp_36 = nullptr;
	System::Int32 Temp_37 = 0;
	System::String^ Temp_38 = nullptr;
	System::Boolean Temp_39 = false;
	Reflector::Application::ApplicationManager::T_x2^ Temp_40 = nullptr;
	Root::T_x110^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	Reflector::IConfiguration^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::Boolean Temp_47 = false;
	System::String^ Temp_48 = nullptr;
	System::Boolean Temp_49 = false;
	array<System::String^>^ Temp_50 = nullptr;
	System::String^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::Type^ Temp_54 = nullptr;
	System::Object^ Temp_55 = nullptr;
	Reflector::CodeModel::IStringCollection^ Temp_56 = nullptr;
	Root::T_x110^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	Reflector::IConfiguration^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::Boolean Temp_63 = false;
	System::Windows::Forms::DialogResult Temp_64 = (System::Windows::Forms::DialogResult)0;
	Root::T_x98^ Temp_65 = nullptr;
	System::Collections::Specialized::StringCollection^ Temp_66 = nullptr;
	System::Collections::Specialized::StringEnumerator^ Temp_67 = nullptr;
	Root::T_x99^ Temp_68 = nullptr;
	System::Globalization::CultureInfo^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	array<System::Object^>^ Temp_71 = nullptr;
	Root::T_x98^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::Int32 Temp_74 = 0;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::String^ Temp_77 = nullptr;
	Root::T_x98^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_80 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_81 = nullptr;
	System::Int32 Temp_82 = 0;
	array<System::Object^>^ Temp_83 = nullptr;
	System::String^ Temp_84 = nullptr;
	System::Globalization::CultureInfo^ Temp_85 = nullptr;
	Root::T_x71^ Temp_86 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_87 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_88 = nullptr;
	Reflector::CodeModel::IAssemblyComparer^ Temp_89 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_90 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_91 = nullptr;
	System::Int32 Temp_92 = 0;
	array<System::Object^>^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::Globalization::CultureInfo^ Temp_95 = nullptr;
	Root::T_x71^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::Int32 Temp_98 = 0;
	array<System::Object^>^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::Globalization::CultureInfo^ Temp_101 = nullptr;
	Root::T_x71^ Temp_102 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_103 = nullptr;
	System::Int32 Temp_104 = 0;
	array<System::Object^>^ Temp_105 = nullptr;
	System::String^ Temp_106 = nullptr;
	System::Globalization::CultureInfo^ Temp_107 = nullptr;
	Root::T_x71^ Temp_108 = nullptr;
	System::Boolean Temp_109 = false;
	Reflector::CodeModel::IAssemblyManager^ Temp_110 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ Temp_111 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	Reflector::IConfiguration^ V_1 = nullptr;
	Reflector::IConfiguration^ V_2 = nullptr;
	array<System::String^>^ V_3 = nullptr;
	Reflector::CodeModel::IAssemblyCache^ V_4 = nullptr;
	Reflector::IConfiguration^ V_5 = nullptr;
	System::Boolean V_6 = false;
	System::Collections::ArrayList^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::String^ V_9 = nullptr;
	Root::T_x99^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	System::String^ V_12 = nullptr;
	Root::T_x99^ V_13 = nullptr;
	Root::T_x71^ V_14 = nullptr;
	System::String^ V_15 = nullptr;
	Reflector::CodeModel::IAssemblyComparer^ V_16 = nullptr;
	array<System::String^>^ V_17 = nullptr;
	array<System::Object^>^ V_18 = nullptr;
	System::Collections::Specialized::StringEnumerator^ V_19 = nullptr;
	System::Int32 V_20 = 0;
	System::Int32 V_21 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_21=1;                                                     //stloc				V_21
	IL_0009:            goto IL_0088;                                               //br.s				IL_0088
	IL_000b:                                                                        //ldloc				V_20
	IL_000f:            switch(V_20){case 0:goto IL_02bb;case 1:goto IL_05ee;case 2:goto IL_017a;case 3:goto IL_011b;case 4:goto IL_05b1;case 5:goto IL_04b9;case 6:goto IL_0108;case 7:goto IL_019c;case 8:goto IL_02d5;case 9:goto IL_0589;case 10:goto IL_01af;case 11:goto IL_041f;case 12:goto IL_045b;case 13:goto IL_0302;case 14:goto IL_04de;case 15:goto IL_0474;case 16:goto IL_0279;case 17:goto IL_00ce;case 18:goto IL_0295;case 19:goto IL_0445;case 20:goto IL_0365;case 21:goto IL_03f4;case 22:goto IL_0141;case 23:goto IL_04a4;case 24:goto IL_048e;case 25:goto IL_040f;case 26:goto IL_01d5;case 27:goto IL_020b;case 28:goto IL_02a8;};//switch				(IL_02bb,IL_05ee,IL_017a,IL_011b,IL_05b1,IL_04b9,IL_0108,IL_019c,IL_02d5,IL_0589,IL_01af,IL_041f,IL_045b,IL_0302,IL_04de,IL_0474,IL_0279,IL_00ce,IL_0295,IL_0445,IL_0365,IL_03f4,IL_0141,IL_04a4,IL_048e,IL_040f,IL_01d5,IL_020b,IL_02a8)
	IL_0088:            goto IL_008b;                                               //br.s				IL_008b
	IL_008a:                                                                        //break
	IL_008b:            System::GC::Collect();                                      //call				void System::GC::Collect()
	IL_0090:                                                                        //ldarg.0
	IL_0091:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0096:            Temp_0=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_009b:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00a0:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_00a5:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_1);//stloc.0
	IL_00a6:                                                                        //ldarg.0
	IL_00a7:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_00ac:                                                                        //ldstr				L"\x5E1E\x5220\x5022\x4024\x4A26\x4B28\x472A\x542C\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A"
	IL_00b1:                                                                        //ldloc				V_21
	IL_00b5:            Temp_3=a(L"\x5E1E\x5220\x5022\x4024\x4A26\x4B28\x472A\x542C\x6D2E\x4330\x5C32\x4234\x4436\x5C38\x493A",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00ba:            Temp_4=Temp_2->M_x2(Temp_3);                                //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_00bf:            V_1=Temp_4;                                                 //stloc.1
	IL_00c0:                                                                        //ldc.i4				0x11
	IL_00c5:            V_20=17;                                                    //stloc				V_20
	IL_00c9:            /*goto IL_000b;*/goto IL_00ce;                              //br				IL_000b
	IL_00ce:                                                                        //ldloc.0
	IL_00cf:                                                                        //ldloc.1
	IL_00d0:                                                                        //ldstr				L"\x4C1E\x4820\x4722\x4024\x6526\x5028\x782A\x442C\x4B2E\x5430\x6532\x5034\x4536\x4A38\x523A\x523C\x513E\x2840\x2D42\x2244"
	IL_00d5:                                                                        //ldloc				V_21
	IL_00d9:            Temp_38=a(L"\x4C1E\x4820\x4722\x4024\x6526\x5028\x782A\x442C\x4B2E\x5430\x6532\x5034\x4536\x4A38\x523A\x523C\x513E\x2840\x2D42\x2244",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            Temp_39=V_1->HasProperty(Temp_38);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_00e3:            Temp_81=V_0;if(!Temp_39)goto IL_01da;                       //brfalse				IL_01da
	IL_00e8:            Temp_87=Temp_81;goto IL_0307;                               //br				IL_0307
	IL_00ed:                                                                        //ldc.i4.0
	IL_00ee:            V_6=false;                                                  //stloc.s				V_6
	IL_00f0:            Temp_13=gcnew System::Collections::ArrayList();             //newobj				void System::Collections::ArrayList::.ctor()
	IL_00f5:            V_7=Temp_13;                                                //stloc.s				V_7
	IL_00f7:                                                                        //ldc.i4.0
	IL_00f8:            V_8=0;                                                      //stloc.s				V_8
	IL_00fa:                                                                        //ldc.i4				0x6
	IL_00ff:            V_20=6;                                                     //stloc				V_20
	IL_0103:            /*goto IL_000b;*/goto IL_0108;                              //br				IL_000b
	IL_0108:            goto IL_01a1;                                               //br				IL_01a1
	IL_010d:                                                                        //ldc.i4				0x3
	IL_0112:            V_20=3;                                                     //stloc				V_20
	IL_0116:            /*goto IL_000b;*/goto IL_011b;                              //br				IL_000b
	IL_011b:            goto IL_05f3;                                               //br				IL_05f3
	IL_0120:                                                                        //ldloc.s				V_13
	IL_0122:            Temp_65=V_13->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0127:            Temp_66=Temp_65->M_x1();                                    //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_012c:            Temp_67=Temp_66->GetEnumerator();                           //callvirt				System::Collections::Specialized::StringEnumerator^ System::Collections::Specialized::StringCollection::GetEnumerator()
	IL_0131:            V_19=Temp_67;                                               //stloc.s				V_19
	IL_0133:                                                                        //ldc.i4				0x16
	IL_0138:            V_20=22;                                                    //stloc				V_20
	IL_013c:            /*goto IL_000b;*/goto IL_0141;                              //br				IL_000b
	IL_0141:            goto IL_02ad;                                               //br				IL_02ad
	IL_0146:            Temp_18=gcnew Root::T_x99();                                //newobj				void Root::T_x99::.ctor()
	IL_014b:            V_10=Temp_18;                                               //stloc.s				V_10
	IL_014d:                                                                        //ldloc.s				V_10
	IL_014f:                                                                        //ldarg.0
	IL_0150:            Temp_19=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0155:            V_10->M_x2(safe_cast<Reflector::IConfigurationManager^>(Temp_19));//callvirt				void Root::T_x99::M_x2(Reflector::IConfigurationManager^)
	IL_015a:                                                                        //ldarg.0
	IL_015b:                                                                        //ldloc.s				V_10
	IL_015d:            Temp_20=V_10->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0162:            Temp_21=Temp_20->M_x2();                                    //callvirt				System::String^ Root::T_x98::M_x2()
	IL_0167:            this->M_x1(Temp_21);                                        //call				void Reflector::Application::ApplicationManager::M_x1(System::String^)
	IL_016c:                                                                        //ldc.i4				0x2
	IL_0171:            V_20=2;                                                     //stloc				V_20
	IL_0175:            /*goto IL_000b;*/goto IL_017a;                              //br				IL_000b
	IL_017a:                                                                        //ldloc.s				V_10
	IL_017c:            Temp_8=V_10->M_x13();                                       //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0181:            Temp_9=Temp_8->M_x1();                                      //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_0186:            Temp_10=Temp_9->Count;                                      //callvirt				System::Int32 System::Collections::Specialized::StringCollection::get_Count()
	IL_018b:                                                                        //ldc.i4.0
	IL_018c:            if(Temp_10<=0)goto IL_01ef;                                 //ble.s				IL_01ef
	IL_018e:                                                                        //ldc.i4				0x7
	IL_0193:            V_20=7;                                                     //stloc				V_20
	IL_0197:            /*goto IL_000b;*/goto IL_019c;                              //br				IL_000b
	IL_019c:            goto IL_044a;                                               //br				IL_044a
	IL_01a1:                                                                        //ldc.i4				0xa
	IL_01a6:            V_20=10;                                                    //stloc				V_20
	IL_01aa:            /*goto IL_000b;*/goto IL_01af;                              //br				IL_000b
	IL_01af:                                                                        //ldloc.s				V_5
	IL_01b1:                                                                        //ldloca.s				V_8
	IL_01b3:            Temp_22=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01b8:            Temp_23=V_8.ToString(safe_cast<System::IFormatProvider^>(Temp_22));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_01bd:            Temp_24=V_5->HasProperty(Temp_23);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_01c2:            if(Temp_24)goto IL_0246;                                    //brtrue				IL_0246
	IL_01c7:                                                                        //ldc.i4				0x1a
	IL_01cc:            V_20=26;                                                    //stloc				V_20
	IL_01d0:            /*goto IL_000b;*/goto IL_01d5;                              //br				IL_000b
	IL_01d5:            goto IL_0496;                                               //br				IL_0496
	IL_01da:            /*warning ! semantic stack doesn't empty at joint !;*/      //ldloc.0
	IL_01db:            Temp_40=gcnew Reflector::Application::ApplicationManager::T_x2();//newobj				void Reflector::Application::ApplicationManager::T_x2::.ctor()
	IL_01e0:                                                                        //dup
	IL_01e1:            V_16=safe_cast<Reflector::CodeModel::IAssemblyComparer^>(Temp_40);//stloc.s				V_16
	IL_01e3:            V_0->Comparer=safe_cast<Reflector::CodeModel::IAssemblyComparer^>(Temp_40);//callvirt				void Reflector::CodeModel::IAssemblyManager::set_Comparer(Reflector::CodeModel::IAssemblyComparer^)
	IL_01e8:                                                                        //ldloc.s				V_16
	IL_01ea:            Temp_90=Temp_81;Temp_89=V_16;goto IL_0338;                  //br				IL_0338
	IL_01ef:            Temp_11=Root::T_x99::M_x1();                                //call				Root::T_x99^ Root::T_x99::M_x1()
	IL_01f4:            V_13=Temp_11;                                               //stloc.s				V_13
	IL_01f6:            Temp_12=gcnew Root::T_x71();                                //newobj				void Root::T_x71::.ctor()
	IL_01fb:            V_14=Temp_12;                                               //stloc.s				V_14
	IL_01fd:                                                                        //ldc.i4				0x1b
	IL_0202:            V_20=27;                                                    //stloc				V_20
	IL_0206:            /*goto IL_000b;*/goto IL_020b;                              //br				IL_000b
	IL_020b:                                                                        //ldloc.s				V_14
	IL_020d:            Temp_69=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0212:                                                                        //ldstr				L"\x4C1E\x5520\x4222\x5724\x5326\x0928\x0C2A\x562C\x1F2E\x4C30\x1432\x1534\x7636\x4A38\x483A\x583C\x523E\x2340\x2F42\x3C44\x6746\x0548\x224A\x3E4C\x3B4E"
	IL_0217:                                                                        //ldloc				V_21
	IL_021b:            Temp_70=a(L"\x4C1E\x5520\x4222\x5724\x5326\x0928\x0C2A\x562C\x1F2E\x4C30\x1432\x1534\x7636\x4A38\x483A\x583C\x523E\x2340\x2F42\x3C44\x6746\x0548\x224A\x3E4C\x3B4E",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0220:                                                                        //ldc.i4.1
	IL_0221:            Temp_71=gcnew array<System::Object^>(1);                    //newarr				System::Object
	IL_0226:            V_18=Temp_71;                                               //stloc.s				V_18
	IL_0228:                                                                        //ldloc.s				V_18
	IL_022a:                                                                        //ldc.i4.0
	IL_022b:                                                                        //ldloc.s				V_10
	IL_022d:            Temp_72=V_10->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0232:            Temp_73=Temp_72->M_x2();                                    //callvirt				System::String^ Root::T_x98::M_x2()
	IL_0237:            Temp_74=Temp_73->Length;                                    //callvirt				System::Int32 System::String::get_Length()
	IL_023c:            Temp_108=V_14;Temp_107=Temp_69;Temp_106=Temp_70;Temp_105=V_18;Temp_104=0;if(Temp_74==0)goto IL_04e3;//brfalse				IL_04e3
	IL_0241:            Temp_96=Temp_108;Temp_95=Temp_107;Temp_94=Temp_106;Temp_93=Temp_105;Temp_92=Temp_104;goto IL_03ad;//br				IL_03ad
	IL_0246:                                                                        //ldloc.s				V_5
	IL_0248:                                                                        //ldloca.s				V_8
	IL_024a:            Temp_25=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_024f:            Temp_26=V_8.ToString(safe_cast<System::IFormatProvider^>(Temp_25));//call				System::String^ System::Int32::ToString(System::IFormatProvider^)
	IL_0254:            Temp_27=V_5->GetProperty(Temp_26);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0259:            V_9=Temp_27;                                                //stloc.s				V_9
	IL_025b:                                                                        //ldloc.s				V_7
	IL_025d:                                                                        //ldloc.s				V_9
	IL_025f:            Temp_28=V_7->Add(safe_cast<System::Object^>(V_9));          //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0264:                                                                        //pop
	IL_0265:                                                                        //ldloc.s				V_8
	IL_0267:                                                                        //ldc.i4.1
	IL_0268:                                                                        //add
	IL_0269:            V_8=(V_8 + 1);                                              //stloc.s				V_8
	IL_026b:                                                                        //ldc.i4				0x10
	IL_0270:            V_20=16;                                                    //stloc				V_20
	IL_0274:            /*goto IL_000b;*/goto IL_0279;                              //br				IL_000b
	IL_0279:                                                                        //ldloc.3
	IL_027a:                                                                        //ldloc.s				V_9
	IL_027c:            Temp_37=System::Array::IndexOf(safe_cast<System::Array^>(V_3),safe_cast<System::Object^>(V_9));//call				System::Int32 System::Array::IndexOf(System::Array^,System::Object^)
	IL_0281:                                                                        //ldc.i4.m1
	IL_0282:            if(Temp_37!=-1)goto IL_01a1;                                //bne.un				IL_01a1
	IL_0287:                                                                        //ldc.i4				0x12
	IL_028c:            V_20=18;                                                    //stloc				V_20
	IL_0290:            /*goto IL_000b;*/goto IL_0295;                              //br				IL_000b
	IL_0295:            goto IL_0297;                                               //br.s				IL_0297
	IL_0297:                                                                        //ldc.i4.1
	IL_0298:            V_6=true;                                                   //stloc.s				V_6
	IL_029a:                                                                        //ldc.i4				0x1c
	IL_029f:            V_20=28;                                                    //stloc				V_20
	IL_02a3:            /*goto IL_000b;*/goto IL_02a8;                              //br				IL_000b
	IL_02a8:            goto IL_01a1;                                               //br				IL_01a1
	IL_02ad:                                                                        //ldc.i4				0x0
	IL_02b2:            V_20=0;                                                     //stloc				V_20
	IL_02b6:            /*goto IL_000b;*/goto IL_02bb;                              //br				IL_000b
	IL_02bb:                                                                        //ldloc.s				V_19
	IL_02bd:            Temp_5=V_19->MoveNext();                                    //callvirt				System::Boolean System::Collections::Specialized::StringEnumerator::MoveNext()
	IL_02c2:            if(Temp_5)goto IL_04be;                                     //brtrue				IL_04be
	IL_02c7:                                                                        //ldc.i4				0x8
	IL_02cc:            V_20=8;                                                     //stloc				V_20
	IL_02d0:            /*goto IL_000b;*/goto IL_02d5;                              //br				IL_000b
	IL_02d5:            goto IL_05f3;                                               //br				IL_05f3
	IL_02da:                                                                        //ldloc.s				V_4
	IL_02dc:            Temp_14=V_4->Directories;                                   //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_02e1:            Temp_14->Clear();                                           //callvirt				void Reflector::CodeModel::IStringCollection::Clear()
	IL_02e6:                                                                        //ldloc.s				V_4
	IL_02e8:            Temp_15=V_4->Directories;                                   //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_02ed:                                                                        //ldloc.s				V_7
	IL_02ef:            Temp_15->AddRange(safe_cast<System::Collections::ICollection^>(V_7));//callvirt				void Reflector::CodeModel::IStringCollection::AddRange(System::Collections::ICollection^)
	IL_02f4:                                                                        //ldc.i4				0xd
	IL_02f9:            V_20=13;                                                    //stloc				V_20
	IL_02fd:            /*goto IL_000b;*/goto IL_0302;                              //br				IL_000b
	IL_0302:            goto IL_0146;                                               //br				IL_0146
	IL_0307:                                                                        //ldloc.1
	IL_0308:                                                                        //ldstr				L"\x4C1E\x4820\x4722\x4024\x6526\x5028\x782A\x442C\x4B2E\x5430\x6532\x5034\x4536\x4A38\x523A\x523C\x513E\x2840\x2D42\x2244"
	IL_030d:                                                                        //ldloc				V_21
	IL_0311:            Temp_44=a(L"\x4C1E\x4820\x4722\x4024\x6526\x5028\x782A\x442C\x4B2E\x5430\x6532\x5034\x4536\x4A38\x523A\x523C\x513E\x2840\x2D42\x2244",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0316:            Temp_45=V_1->GetProperty(Temp_44);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_031b:                                                                        //ldstr				L"\x6B1E\x5320\x5622\x4024"
	IL_0320:                                                                        //ldloc				V_21
	IL_0324:            Temp_46=a(L"\x6B1E\x5320\x5622\x4024",V_21);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0329:            Temp_47=(Temp_45 == Temp_46);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_032e:            Temp_111=Temp_87;if(Temp_47)goto IL_05b6;                   //brtrue				IL_05b6
	IL_0333:            Temp_81=Temp_111;goto IL_01da;                              //br				IL_01da
	IL_0338:            Temp_90->Comparer=Temp_89;/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IAssemblyManager::set_Comparer(Reflector::CodeModel::IAssemblyComparer^)
	IL_033d:                                                                        //ldarg.0
	IL_033e:            Temp_41=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0343:                                                                        //ldstr				L"\x531E\x4020\x4D22\x4224\x5226\x4828\x4C2A\x482C\x782E\x4330\x5A32\x4134\x5236\x4B38"
	IL_0348:                                                                        //ldloc				V_21
	IL_034c:            Temp_42=a(L"\x531E\x4020\x4D22\x4224\x5226\x4828\x4C2A\x482C\x782E\x4330\x5A32\x4134\x5236\x4B38",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0351:            Temp_43=Temp_41->M_x2(Temp_42);                             //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0356:            V_2=Temp_43;                                                //stloc.2
	IL_0357:                                                                        //ldc.i4				0x14
	IL_035c:            V_20=20;                                                    //stloc				V_20
	IL_0360:            /*goto IL_000b;*/goto IL_0365;                              //br				IL_000b
	IL_0365:                                                                        //ldloc.0
	IL_0366:                                                                        //ldloc.2
	IL_0367:                                                                        //ldstr				L"\x4C1E\x4920\x4C22\x5224\x7426\x5028\x462A\x4F2C\x402E\x5D30\x4032"
	IL_036c:                                                                        //ldloc				V_21
	IL_0370:            Temp_48=a(L"\x4C1E\x4920\x4C22\x5224\x7426\x5028\x462A\x4F2C\x402E\x5D30\x4032",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0375:            Temp_49=V_2->HasProperty(Temp_48);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_037a:            Temp_103=V_0;if(!Temp_49)goto IL_0493;                      //brfalse				IL_0493
	IL_037f:            goto IL_0381;                                               //br.s				IL_0381
	IL_0381:                                                                        //ldloc.2
	IL_0382:                                                                        //ldstr				L"\x4C1E\x4920\x4C22\x5224\x7426\x5028\x462A\x4F2C\x402E\x5D30\x4032"
	IL_0387:                                                                        //ldloc				V_21
	IL_038b:            Temp_60=a(L"\x4C1E\x4920\x4C22\x5224\x7426\x5028\x462A\x4F2C\x402E\x5D30\x4032",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0390:            Temp_61=V_2->GetProperty(Temp_60);                          //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0395:                                                                        //ldstr				L"\x6B1E\x5320\x5622\x4024"
	IL_039a:                                                                        //ldloc				V_21
	IL_039e:            Temp_62=a(L"\x6B1E\x5320\x5622\x4024",V_21);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a3:            Temp_63=(Temp_61 == Temp_62);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_03a8:            Temp_110=Temp_103;Temp_109=Temp_63;goto IL_04f6;            //br				IL_04f6
	IL_03ad:                                                                        //ldloc.s				V_10
	IL_03af:            Temp_78=V_10->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_03b4:            Temp_79=Temp_78->M_x2();                                    //callvirt				System::String^ Root::T_x98::M_x2()
	IL_03b9:            Temp_102=Temp_96;Temp_101=Temp_95;Temp_100=Temp_94;Temp_99=Temp_93;Temp_98=Temp_92;Temp_97=Temp_79;goto IL_03bb;//br.s				IL_03bb
	IL_03bb:            Temp_99=Temp_105;Temp_98=Temp_104;Temp_97=Temp_75;Temp_99[Temp_98]=safe_cast<System::Object^>(Temp_97);/*warning ! semantic stack doesn't empty at joint !;*///stelem.ref
	IL_03bc:                                                                        //ldloc.s				V_18
	IL_03be:            Temp_101=Temp_107;Temp_100=Temp_106;Temp_76=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_101),Temp_100,V_18);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_03c3:            Temp_102=Temp_108;Temp_102->Text=Temp_76;                   //callvirt				void System::Windows::Forms::Control::set_Text(System::String^)
	IL_03c8:                                                                        //ldloc.s				V_14
	IL_03ca:                                                                        //ldstr				L"\x4F1E\x4820\x4022\x4E24\x0726\x4828\x0B2A\x5E2C\x4A2E\x4530\x1332\x5A34\x5136\x1938\x5A3A\x4E3C\x4C3E\x2440\x2E42\x2744\x2B46\x2048\x2E4A\x3E4C\x6F4E\x2550\x3C52\x7554\x2756\x3658\x2B5A\x285C\x335E\x0060\x1762\x0064\x4766\x1D68\x036A\x086C\x4F6E\x1470\x1E72\x0574\x0376\x0078\x5B7A\x1C7C\x0C7E\xF280\xE682\xE884\xE586\xE588\xF28A\xAD8C\xE38E\xF890\xE092\xE194\xAD96"
	IL_03cf:                                                                        //ldloc				V_21
	IL_03d3:            Temp_77=a(L"\x4F1E\x4820\x4022\x4E24\x0726\x4828\x0B2A\x5E2C\x4A2E\x4530\x1332\x5A34\x5136\x1938\x5A3A\x4E3C\x4C3E\x2440\x2E42\x2744\x2B46\x2048\x2E4A\x3E4C\x6F4E\x2550\x3C52\x7554\x2756\x3658\x2B5A\x285C\x335E\x0060\x1762\x0064\x4766\x1D68\x036A\x086C\x4F6E\x1470\x1E72\x0574\x0376\x0078\x5B7A\x1C7C\x0C7E\xF280\xE682\xE884\xE586\xE588\xF28A\xAD8C\xE38E\xF890\xE092\xE194\xAD96",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d8:            V_14->M_x12(Temp_77);                                       //callvirt				void Root::T_x71::M_x12(System::String^)
	IL_03dd:                                                                        //ldloc.s				V_14
	IL_03df:                                                                        //ldloc.s				V_13
	IL_03e1:            V_14->M_x1(V_13);                                           //callvirt				void Root::T_x71::M_x1(Root::T_x99^)
	IL_03e6:                                                                        //ldc.i4				0x15
	IL_03eb:            V_20=21;                                                    //stloc				V_20
	IL_03ef:            /*goto IL_000b;*/goto IL_03f4;                              //br				IL_000b
	IL_03f4:                                                                        //ldloc.s				V_14
	IL_03f6:            Temp_64=V_14->ShowDialog();                                 //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_03fb:                                                                        //ldc.i4.1
	IL_03fc:            if(safe_cast<System::Int32>(Temp_64)!=1)goto IL_05f3;       //bne.un				IL_05f3
	IL_0401:                                                                        //ldc.i4				0x19
	IL_0406:            V_20=25;                                                    //stloc				V_20
	IL_040a:            /*goto IL_000b;*/goto IL_040f;                              //br				IL_000b
	IL_040f:            goto IL_045d;                                               //br.s				IL_045d
	IL_0411:                                                                        //ldc.i4				0xb
	IL_0416:            V_20=11;                                                    //stloc				V_20
	IL_041a:            /*goto IL_000b;*/goto IL_041f;                              //br				IL_000b
	IL_041f:                                                                        //ldloc.s				V_11
	IL_0421:                                                                        //ldloc.s				V_10
	IL_0423:            Temp_29=V_10->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_0428:            Temp_30=Temp_29->M_x1();                                    //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_042d:            Temp_31=Temp_30->Count;                                     //callvirt				System::Int32 System::Collections::Specialized::StringCollection::get_Count()
	IL_0432:            if(V_11<Temp_31)goto IL_05bc;                               //blt				IL_05bc
	IL_0437:                                                                        //ldc.i4				0x13
	IL_043c:            V_20=19;                                                    //stloc				V_20
	IL_0440:            /*goto IL_000b;*/goto IL_0445;                              //br				IL_000b
	IL_0445:            goto IL_010d;                                               //br				IL_010d
	IL_044a:                                                                        //ldc.i4.0
	IL_044b:            V_11=0;                                                     //stloc.s				V_11
	IL_044d:                                                                        //ldc.i4				0xc
	IL_0452:            V_20=12;                                                    //stloc				V_20
	IL_0456:            /*goto IL_000b;*/goto IL_045b;                              //br				IL_000b
	IL_045b:            goto IL_0411;                                               //br.s				IL_0411
	IL_045d:                                                                        //ldloc.s				V_14
	IL_045f:            Temp_68=V_14->M_x5();                                       //callvirt				Root::T_x99^ Root::T_x71::M_x5()
	IL_0464:            V_13=Temp_68;                                               //stloc.s				V_13
	IL_0466:                                                                        //ldc.i4				0xf
	IL_046b:            V_20=15;                                                    //stloc				V_20
	IL_046f:            /*goto IL_000b;*/goto IL_0474;                              //br				IL_000b
	IL_0474:                                                                        //ldloc.s				V_13
	IL_0476:            Temp_36=V_13->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_047b:            if(Temp_36==nullptr)goto IL_05f3;                           //brfalse				IL_05f3
	IL_0480:                                                                        //ldc.i4				0x18
	IL_0485:            V_20=24;                                                    //stloc				V_20
	IL_0489:            /*goto IL_000b;*/goto IL_048e;                              //br				IL_000b
	IL_048e:            goto IL_0120;                                               //br				IL_0120
	IL_0493:                                                                        //ldc.i4.0
	IL_0494:            Temp_110=Temp_103;Temp_109=false;goto IL_04f6;              //br.s				IL_04f6
	IL_0496:                                                                        //ldc.i4				0x17
	IL_049b:            V_20=23;                                                    //stloc				V_20
	IL_049f:            /*goto IL_000b;*/goto IL_04a4;                              //br				IL_000b
	IL_04a4:                                                                        //ldloc.s				V_6
	IL_04a6:            if(!V_6)goto IL_0146;                                       //brfalse				IL_0146
	IL_04ab:                                                                        //ldc.i4				0x5
	IL_04b0:            V_20=5;                                                     //stloc				V_20
	IL_04b4:            /*goto IL_000b;*/goto IL_04b9;                              //br				IL_000b
	IL_04b9:            goto IL_02da;                                               //br				IL_02da
	IL_04be:                                                                        //ldloc.s				V_19
	IL_04c0:            Temp_6=V_19->Current;                                       //callvirt				System::String^ System::Collections::Specialized::StringEnumerator::get_Current()
	IL_04c5:            V_15=Temp_6;                                                //stloc.s				V_15
	IL_04c7:                                                                        //ldloc.0
	IL_04c8:                                                                        //ldloc.s				V_15
	IL_04ca:            Temp_7=V_0->LoadFile(V_15);                                 //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_04cf:                                                                        //pop
	IL_04d0:                                                                        //ldc.i4				0xe
	IL_04d5:            V_20=14;                                                    //stloc				V_20
	IL_04d9:            /*goto IL_000b;*/goto IL_04de;                              //br				IL_000b
	IL_04de:            goto IL_02ad;                                               //br				IL_02ad
	IL_04e3:                                                                        //ldstr				L"\x5B1E\x4420\x4522\x4424\x5226\x4528\x5F2A"
	IL_04e8:                                                                        //ldloc				V_21
	IL_04ec:            Temp_75=a(L"\x5B1E\x4420\x4522\x4424\x5226\x4528\x5F2A",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04f1:            goto IL_03bb;                                               //br				IL_03bb
	IL_04f6:            Temp_110->Symbols=safe_cast<System::Boolean>(Temp_109);/*warning ! semantic stack doesn't empty at joint !;*///callvirt				void Reflector::CodeModel::IAssemblyManager::set_Symbols(System::Boolean)
	IL_04fb:                                                                        //ldc.i4.3
	IL_04fc:            Temp_50=gcnew array<System::String^>(3);                    //newarr				System::String
	IL_0501:            V_17=Temp_50;                                               //stloc.s				V_17
	IL_0503:                                                                        //ldloc.s				V_17
	IL_0505:                                                                        //ldc.i4.0
	IL_0506:                                                                        //ldstr				L"\x3A1E\x7220\x5A22\x5624\x5326\x4C28\x462A\x7F2C\x402E\x5E30\x4732\x1034\x6B36\x7438\x523A\x5E3C\x4D3E\x2E40\x3042\x2A44\x2146\x3D48\x654A\x234C\x2A4E\x2550"
	IL_050b:                                                                        //ldloc				V_21
	IL_050f:            Temp_51=a(L"\x3A1E\x7220\x5A22\x5624\x5326\x4C28\x462A\x7F2C\x402E\x5E30\x4732\x1034\x6B36\x7438\x523A\x5E3C\x4D3E\x2E40\x3042\x2A44\x2146\x3D48\x654A\x234C\x2A4E\x2550",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0514:            V_17[0]=Temp_51;                                            //stelem.ref
	IL_0515:                                                                        //ldloc.s				V_17
	IL_0517:                                                                        //ldc.i4.1
	IL_0518:                                                                        //ldstr				L"\x3A1E\x7120\x5122\x4A24\x4026\x5B28\x4A2A\x402C\x692E\x5830\x5F32\x5034\x4436\x1C38\x673A\x703C\x563E\x2240\x3142\x2A44\x3446\x2648\x2D4A\x394C\x614E\x3F50\x3652\x2154"
	IL_051d:                                                                        //ldloc				V_21
	IL_0521:            Temp_52=a(L"\x3A1E\x7120\x5122\x4A24\x4026\x5B28\x4A2A\x402C\x692E\x5830\x5F32\x5034\x4436\x1C38\x673A\x703C\x563E\x2240\x3142\x2A44\x3446\x2648\x2D4A\x394C\x614E\x3F50\x3652\x2154",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0526:            V_17[1]=Temp_52;                                            //stelem.ref
	IL_0527:                                                                        //ldloc.s				V_17
	IL_0529:                                                                        //ldc.i4.2
	IL_052a:                                                                        //ldstr				L"\x3A1E\x7120\x5122\x4A24\x4026\x5B28\x4A2A\x402C\x692E\x5830\x5F32\x5034\x4436\x1C38\x673A\x6F3C\x5A3E\x2740\x2642\x3744\x2246\x2748\x284A\x284C\x6F4E\x1050\x2052\x2654\x3256\x3458\x395A\x315C\x365E\x0460\x1062"
	IL_052f:                                                                        //ldloc				V_21
	IL_0533:            Temp_53=a(L"\x3A1E\x7120\x5122\x4A24\x4026\x5B28\x4A2A\x402C\x692E\x5830\x5F32\x5034\x4436\x1C38\x673A\x6F3C\x5A3E\x2740\x2642\x3744\x2246\x2748\x284A\x284C\x6F4E\x1050\x2052\x2654\x3256\x3458\x395A\x315C\x365E\x0460\x1062",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0538:            V_17[2]=Temp_53;                                            //stelem.ref
	IL_0539:                                                                        //ldloc.s				V_17
	IL_053b:            V_3=V_17;                                                   //stloc.3
	IL_053c:                                                                        //ldarg.0
	IL_053d:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyCache
	IL_0542:            Temp_54=Reflector::CodeModel::IAssemblyCache::typeid;       //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0547:            Temp_55=this->M_x1(Temp_54);                                //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_054c:                                                                        //castclass				Reflector::CodeModel::IAssemblyCache
	IL_0551:            V_4=safe_cast<Reflector::CodeModel::IAssemblyCache^>(Temp_55);//stloc.s				V_4
	IL_0553:                                                                        //ldloc.s				V_4
	IL_0555:            Temp_56=V_4->Directories;                                   //callvirt				Reflector::CodeModel::IStringCollection^ Reflector::CodeModel::IAssemblyCache::get_Directories()
	IL_055a:                                                                        //ldloc.3
	IL_055b:            Temp_56->AddRange(safe_cast<System::Collections::ICollection^>(V_3));//callvirt				void Reflector::CodeModel::IStringCollection::AddRange(System::Collections::ICollection^)
	IL_0560:                                                                        //ldarg.0
	IL_0561:            Temp_57=this->F_x8;                                         //ldfld				Root::T_x110^ Reflector::Application::ApplicationManager F_x8
	IL_0566:                                                                        //ldstr				L"\x5E1E\x5220\x5022\x4024\x4A26\x4B28\x472A\x542C\x6C2E\x5030\x5032\x5D34\x5236"
	IL_056b:                                                                        //ldloc				V_21
	IL_056f:            Temp_58=a(L"\x5E1E\x5220\x5022\x4024\x4A26\x4B28\x472A\x542C\x6C2E\x5030\x5032\x5D34\x5236",V_21);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0574:            Temp_59=Temp_57->M_x2(Temp_58);                             //callvirt				Reflector::IConfiguration^ Root::T_x110::M_x2(System::String^)
	IL_0579:            V_5=Temp_59;                                                //stloc.s				V_5
	IL_057b:                                                                        //ldc.i4				0x9
	IL_0580:            V_20=9;                                                     //stloc				V_20
	IL_0584:            /*goto IL_000b;*/goto IL_0589;                              //br				IL_000b
	IL_0589:                                                                        //ldloc.s				V_5
	IL_058b:                                                                        //ldstr				L"\x2F1E"
	IL_0590:                                                                        //ldloc				V_21
	IL_0594:            Temp_16=a(L"\x2F1E",V_21);                                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0599:            Temp_17=V_5->HasProperty(Temp_16);                          //callvirt				System::Boolean Reflector::IConfiguration::HasProperty(System::String^)
	IL_059e:            if(!Temp_17)goto IL_0146;                                   //brfalse				IL_0146
	IL_05a3:                                                                        //ldc.i4				0x4
	IL_05a8:            V_20=4;                                                     //stloc				V_20
	IL_05ac:            /*goto IL_000b;*/goto IL_05b1;                              //br				IL_000b
	IL_05b1:            goto IL_00ed;                                               //br				IL_00ed
	IL_05b6:                                                                        //ldnull
	IL_05b7:            Temp_90=Temp_111;Temp_89=nullptr;goto IL_0338;              //br				IL_0338
	IL_05bc:                                                                        //ldloc.s				V_10
	IL_05be:            Temp_32=V_10->M_x13();                                      //callvirt				Root::T_x98^ Root::T_x99::M_x13()
	IL_05c3:            Temp_33=Temp_32->M_x1();                                    //callvirt				System::Collections::Specialized::StringCollection^ Root::T_x98::M_x1()
	IL_05c8:                                                                        //ldloc.s				V_11
	IL_05ca:            Temp_34=Temp_33[V_11];                                      //callvirt				System::String^ System::Collections::Specialized::StringCollection::get_Item(System::Int32)
	IL_05cf:            V_12=Temp_34;                                               //stloc.s				V_12
	IL_05d1:                                                                        //ldloc.0
	IL_05d2:                                                                        //ldloc.s				V_12
	IL_05d4:            Temp_35=V_0->LoadFile(V_12);                                //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_05d9:                                                                        //pop
	IL_05da:                                                                        //ldloc.s				V_11
	IL_05dc:                                                                        //ldc.i4.1
	IL_05dd:                                                                        //add
	IL_05de:            V_11=(V_11 + 1);                                            //stloc.s				V_11
	IL_05e0:                                                                        //ldc.i4				0x1
	IL_05e5:            V_20=1;                                                     //stloc				V_20
	IL_05e9:            /*goto IL_000b;*/goto IL_05ee;                              //br				IL_000b
	IL_05ee:            goto IL_0411;                                               //br				IL_0411
	IL_05f3:            System::GC::Collect();                                      //call				void System::GC::Collect()
	IL_05f8:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x9()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Type^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Type^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Type^ Temp_8 = nullptr;
	System::Object^ Temp_9 = nullptr;
	Root::T_x77^ Temp_10 = nullptr;
	System::Object^ Temp_11 = nullptr;
	Root::T_x111^ Temp_12 = nullptr;
	System::Object^ Temp_13 = nullptr;
	Reflector::IWindowManager^ Temp_14 = nullptr;
	Reflector::IWindowCollection^ Temp_15 = nullptr;
	System::Collections::IEnumerator^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::Object^ Temp_18 = nullptr;
	System::Windows::Forms::DialogResult Temp_19 = (System::Windows::Forms::DialogResult)0;
	System::Object^ Temp_20 = nullptr;
	System::Object^ Temp_21 = nullptr;
	System::Object^ Temp_22 = nullptr;
	//local variables.
	Reflector::IConfigurationManager^ V_0 = nullptr;
	Reflector::ILanguageManager^ V_1 = nullptr;
	Reflector::CodeModel::IAssemblyManager^ V_2 = nullptr;
	Reflector::IAssemblyBrowser^ V_3 = nullptr;
	Root::T_x77^ V_4 = nullptr;
	Root::T_x111^ V_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_6 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ V_7 = nullptr;
	Reflector::IWindow^ V_8 = nullptr;
	System::Collections::IEnumerator^ V_9 = nullptr;
	System::IDisposable^ V_10 = nullptr;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_0043;                                               //br.s				IL_0043
	IL_0002:                                                                        //ldloc				V_11
	IL_0006:            switch(V_11){case 0:goto IL_02f5;case 1:goto IL_027b;case 2:goto IL_02b6;case 3:goto IL_02e3;case 4:goto IL_0240;case 5:goto IL_0118;case 6:goto IL_022b;case 7:goto IL_0323;case 8:goto IL_00ea;case 9:goto IL_00cf;case 10:goto IL_0291;case 11:goto IL_012d;case 12:goto IL_02d3;case 13:goto IL_0261;};//switch				(IL_02f5,IL_027b,IL_02b6,IL_02e3,IL_0240,IL_0118,IL_022b,IL_0323,IL_00ea,IL_00cf,IL_0291,IL_012d,IL_02d3,IL_0261)
	IL_0043:                                                                        //ldarg.0
	IL_0044:                                                                        //ldtoken				Reflector::IConfigurationManager
	IL_0049:            Temp_0=Reflector::IConfigurationManager::typeid;            //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004e:            Temp_1=this->M_x1(Temp_0);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0053:                                                                        //castclass				Reflector::IConfigurationManager
	IL_0058:            V_0=safe_cast<Reflector::IConfigurationManager^>(Temp_1);   //stloc.0
	IL_0059:                                                                        //ldarg.0
	IL_005a:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_005f:            Temp_2=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0064:            Temp_3=this->M_x1(Temp_2);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0069:                                                                        //castclass				Reflector::ILanguageManager
	IL_006e:            V_1=safe_cast<Reflector::ILanguageManager^>(Temp_3);        //stloc.1
	IL_006f:                                                                        //ldarg.0
	IL_0070:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_0075:            Temp_4=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_007a:            Temp_5=this->M_x1(Temp_4);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_007f:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_0084:            V_2=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_5);//stloc.2
	IL_0085:                                                                        //ldarg.0
	IL_0086:                                                                        //ldtoken				Reflector::IAssemblyBrowser
	IL_008b:            Temp_6=Reflector::IAssemblyBrowser::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0090:            Temp_7=this->M_x1(Temp_6);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_0095:                                                                        //castclass				Reflector::IAssemblyBrowser
	IL_009a:            V_3=safe_cast<Reflector::IAssemblyBrowser^>(Temp_7);        //stloc.3
	IL_009b:                                                                        //ldarg.0
	IL_009c:                                                                        //ldtoken				Reflector::IWindowManager
	IL_00a1:            Temp_8=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a6:            Temp_9=this->M_x1(Temp_8);                                  //call				System::Object^ Reflector::Application::ApplicationManager::M_x1(System::Type^)
	IL_00ab:                                                                        //castclass				Reflector::IWindowManager
	IL_00b0:                                                                        //pop
	IL_00b1:            Temp_10=gcnew Root::T_x77();                                //newobj				void Root::T_x77::.ctor()
	IL_00b6:            V_4=Temp_10;                                                //stloc.s				V_4
	IL_00b8:                                                                        //ldloc.s				V_4
	IL_00ba:                                                                        //ldloc.0
	IL_00bb:                                                                        //ldloc.1
	IL_00bc:            V_4->M_x2(V_0,V_1);                                         //callvirt				void Root::T_x77::M_x2(Reflector::IConfigurationManager^,Reflector::ILanguageManager^)
	IL_00c1:                                                                        //ldc.i4				0x9
	IL_00c6:            V_11=9;                                                     //stloc				V_11
	IL_00ca:            /*goto IL_0002;*/goto IL_00cf;                              //br				IL_0002
	IL_00cf:                                                                        //ldloc.s				V_4
	IL_00d1:            Temp_19=V_4->ShowDialog();                                  //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_00d6:                                                                        //ldc.i4.1
	IL_00d7:            if(safe_cast<System::Int32>(Temp_19)!=1)goto IL_0328;       //bne.un				IL_0328
	IL_00dc:                                                                        //ldc.i4				0x8
	IL_00e1:            V_11=8;                                                     //stloc				V_11
	IL_00e5:            /*goto IL_0002;*/goto IL_00ea;                              //br				IL_0002
	IL_00ea:            goto IL_0263;                                               //br				IL_0263
	IL_00ef:                                                                        //ldloc.s				V_4
	IL_00f1:                                                                        //ldloc.0
	IL_00f2:                                                                        //ldloc.1
	IL_00f3:            V_4->M_x1(V_0,V_1);                                         //callvirt				void Root::T_x77::M_x1(Reflector::IConfigurationManager^,Reflector::ILanguageManager^)
	IL_00f8:                                                                        //ldarg.0
	IL_00f9:            this->M_x2();                                               //call				void Reflector::Application::ApplicationManager::M_x2()
	IL_00fe:                                                                        //ldarg.0
	IL_00ff:            this->M_x1();                                               //call				void Reflector::Application::ApplicationManager::M_x1()
	IL_0104:                                                                        //ldarg.0
	IL_0105:            this->M_x81();                                              //call				void Reflector::Application::ApplicationManager::M_x81()
	IL_010a:                                                                        //ldc.i4				0x5
	IL_010f:            V_11=5;                                                     //stloc				V_11
	IL_0113:            /*goto IL_0002;*/goto IL_0118;                              //br				IL_0002
	IL_0118:                                                                        //ldloc.s				V_5
	IL_011a:            if(V_5==nullptr)goto IL_0296;                               //brfalse				IL_0296
	IL_011f:                                                                        //ldc.i4				0xb
	IL_0124:            V_11=11;                                                    //stloc				V_11
	IL_0128:            /*goto IL_0002;*/goto IL_012d;                              //br				IL_0002
	IL_012d:            goto IL_0245;                                               //br				IL_0245
	IL_012D01:          try{
	IL_0132:                                                                        //ldc.i4				0x1
	IL_0137:            V_11=1;                                                     //stloc				V_11
	IL_013b:            /*goto IL_013f;*/goto IL_013d;                              //br.s				IL_013f
	IL_013d:            goto IL_015c;                                               //br.s				IL_015c
	IL_013f:                                                                        //ldloc				V_11
	IL_0143:            switch(V_11){case 0:goto IL_01ad;case 1:goto IL_013d;case 2:goto IL_017d;case 3:goto IL_01a0;case 4:goto IL_0169;};//switch				(IL_01ad,IL_013d,IL_017d,IL_01a0,IL_0169)
	IL_015c:            goto IL_015e;                                               //br.s				IL_015e
	IL_015e:                                                                        //ldc.i4				0x4
	IL_0163:            V_11=4;                                                     //stloc				V_11
	IL_0167:            /*goto IL_013f;*/goto IL_0169;                              //br.s				IL_013f
	IL_0169:                                                                        //ldloc.s				V_9
	IL_016b:            Temp_17=V_9->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0170:            if(Temp_17)goto IL_017f;                                    //brtrue.s				IL_017f
	IL_0172:                                                                        //ldc.i4				0x2
	IL_0177:            V_11=2;                                                     //stloc				V_11
	IL_017b:            /*goto IL_013f;*/goto IL_017d;                              //br.s				IL_013f
	IL_017d:            goto IL_01a2;                                               //br.s				IL_01a2
	IL_017f:                                                                        //ldloc.s				V_9
	IL_0181:            Temp_18=V_9->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0186:                                                                        //castclass				Reflector::IWindow
	IL_018b:            V_8=safe_cast<Reflector::IWindow^>(Temp_18);                //stloc.s				V_8
	IL_018d:                                                                        //ldloc.s				V_8
	IL_018f:                                                                        //ldc.i4.0
	IL_0190:            V_8->Visible=false;                                         //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_0195:                                                                        //ldc.i4				0x3
	IL_019a:            V_11=3;                                                     //stloc				V_11
	IL_019e:            /*goto IL_013f;*/goto IL_01a0;                              //br.s				IL_013f
	IL_01a0:            goto IL_015e;                                               //br.s				IL_015e
	IL_01a2:                                                                        //ldc.i4				0x0
	IL_01a7:            V_11=0;                                                     //stloc				V_11
	IL_01ab:            /*goto IL_013f;*/goto IL_01ad;                              //br.s				IL_013f
	IL_01ad:            goto IL_00ef;                                               //leave				IL_00ef
	                    ;}
	                    finally{
	IL_01b2:            goto IL_01c9;                                               //br.s				IL_01c9
	IL_01b4:                                                                        //ldloc				V_11
	IL_01b8:            switch(V_11){case 0:goto IL_0200;case 1:goto IL_01ec;case 2:goto IL_01dd;};//switch				(IL_0200,IL_01ec,IL_01dd)
	IL_01c9:                                                                        //ldloc.s				V_9
	IL_01cb:                                                                        //isinst				System::IDisposable
	IL_01d0:            V_10=dynamic_cast<System::IDisposable^>(V_9);               //stloc.s				V_10
	IL_01d2:                                                                        //ldc.i4				0x2
	IL_01d7:            V_11=2;                                                     //stloc				V_11
	IL_01db:            /*goto IL_01b4;*/goto IL_01dd;                              //br.s				IL_01b4
	IL_01dd:                                                                        //ldloc.s				V_10
	IL_01df:            if(V_10==nullptr)goto IL_0202;                              //brfalse.s				IL_0202
	IL_01e1:                                                                        //ldc.i4				0x1
	IL_01e6:            V_11=1;                                                     //stloc				V_11
	IL_01ea:            /*goto IL_01b4;*/goto IL_01ec;                              //br.s				IL_01b4
	IL_01ec:            goto IL_01ee;                                               //br.s				IL_01ee
	IL_01ee:                                                                        //ldloc.s				V_10
	IL_01f0:            /*V_10->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_01f5:                                                                        //ldc.i4				0x0
	IL_01fa:            V_11=0;                                                     //stloc				V_11
	IL_01fe:            /*goto IL_01b4;*/goto IL_0200;                              //br.s				IL_01b4
	IL_0200:            goto IL_0202;                                               //br.s				IL_0202
	IL_0202:                                                                        //endfinally
	                    ;}
	IL_0203:                                                                        //ldloc.3
	IL_0204:            Temp_20=V_3->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_0209:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_020e:            V_6=dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_20);//stloc.s				V_6
	IL_0210:                                                                        //ldloc.3
	IL_0211:            Temp_21=V_3->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_0216:                                                                        //isinst				Reflector::CodeModel::IMemberDeclaration
	IL_021b:            V_7=dynamic_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_21);//stloc.s				V_7
	IL_021d:                                                                        //ldc.i4				0x6
	IL_0222:            V_11=6;                                                     //stloc				V_11
	IL_0226:            /*goto IL_0002;*/goto IL_022b;                              //br				IL_0002
	IL_022b:                                                                        //ldloc.s				V_6
	IL_022d:            if(V_6!=nullptr)goto IL_02b8;                               //brtrue				IL_02b8
	IL_0232:                                                                        //ldc.i4				0x4
	IL_0237:            V_11=4;                                                     //stloc				V_11
	IL_023b:            /*goto IL_0002;*/goto IL_0240;                              //br				IL_0002
	IL_0240:            goto IL_02d5;                                               //br				IL_02d5
	IL_0245:                                                                        //ldloc.3
	IL_0246:                                                                        //ldloc.s				V_5
	IL_0248:                                                                        //ldloc.2
	IL_0249:            Temp_22=V_5->M_x1(V_2);                                     //callvirt				System::Object^ Root::T_x111::M_x1(Reflector::CodeModel::IAssemblyManager^)
	IL_024e:            V_3->ActiveItem=Temp_22;                                    //callvirt				void Reflector::IAssemblyBrowser::set_ActiveItem(System::Object^)
	IL_0253:                                                                        //ldc.i4				0xd
	IL_0258:            V_11=13;                                                    //stloc				V_11
	IL_025c:            /*goto IL_0002;*/goto IL_0261;                              //br				IL_0002
	IL_0261:            goto IL_0296;                                               //br.s				IL_0296
	IL_0263:                                                                        //ldarg.0
	IL_0264:                                                                        //ldc.i4.0
	IL_0265:            this->F_x12=false;                                          //stfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_026a:                                                                        //ldnull
	IL_026b:            V_5=safe_cast<Root::T_x111^>(nullptr);                      //stloc.s				V_5
	IL_026d:                                                                        //ldc.i4				0x1
	IL_0272:            V_11=1;                                                     //stloc				V_11
	IL_0276:            /*goto IL_0002;*/goto IL_027b;                              //br				IL_0002
	IL_027b:                                                                        //ldloc.3
	IL_027c:            Temp_13=V_3->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_0281:            if(Temp_13==nullptr)goto IL_02f7;                           //brfalse.s				IL_02f7
	IL_0283:                                                                        //ldc.i4				0xa
	IL_0288:            V_11=10;                                                    //stloc				V_11
	IL_028c:            /*goto IL_0002;*/goto IL_0291;                              //br				IL_0002
	IL_0291:            goto IL_0203;                                               //br				IL_0203
	IL_0296:                                                                        //ldarg.0
	IL_0297:                                                                        //ldc.i4.1
	IL_0298:            this->F_x12=true;                                           //stfld				System::Boolean Reflector::Application::ApplicationManager F_x12
	IL_029d:                                                                        //ldc.i4.0
	IL_029e:                                                                        //dup
	IL_029f:                                                                        //dup
	IL_02a0:                                                                        //ldc.i4.5
	IL_02a1:                                                                        //add
	IL_02a2:                                                                        //bgt				IL_029e
	IL_02a7:                                                                        //pop
	IL_02a8:                                                                        //ldc.i4				0x2
	IL_02ad:            V_11=2;                                                     //stloc				V_11
	IL_02b1:            /*goto IL_0002;*/goto IL_02b6;                              //br				IL_0002
	IL_02b6:            goto IL_0328;                                               //br.s				IL_0328
	IL_02b8:                                                                        //ldloc.3
	IL_02b9:            Temp_11=V_3->ActiveItem;                                    //callvirt				System::Object^ Reflector::IAssemblyBrowser::get_ActiveItem()
	IL_02be:            Temp_12=gcnew Root::T_x111(Temp_11);                        //newobj				void Root::T_x111::.ctor(System::Object^)
	IL_02c3:            V_5=Temp_12;                                                //stloc.s				V_5
	IL_02c5:                                                                        //ldc.i4				0xc
	IL_02ca:            V_11=12;                                                    //stloc				V_11
	IL_02ce:            /*goto IL_0002;*/goto IL_02d3;                              //br				IL_0002
	IL_02d3:            goto IL_02f7;                                               //br.s				IL_02f7
	IL_02d5:                                                                        //ldc.i4				0x3
	IL_02da:            V_11=3;                                                     //stloc				V_11
	IL_02de:            /*goto IL_0002;*/goto IL_02e3;                              //br				IL_0002
	IL_02e3:                                                                        //ldloc.s				V_7
	IL_02e5:            if(V_7==nullptr)goto IL_02f7;                               //brfalse.s				IL_02f7
	IL_02e7:                                                                        //ldc.i4				0x0
	IL_02ec:            V_11=0;                                                     //stloc				V_11
	IL_02f0:            /*goto IL_0002;*/goto IL_02f5;                              //br				IL_0002
	IL_02f5:            goto IL_02b8;                                               //br.s				IL_02b8
	IL_02f7:                                                                        //ldarg.0
	IL_02f8:            this->M_x57();                                              //call				void Reflector::Application::ApplicationManager::M_x57()
	IL_02fd:                                                                        //ldarg.0
	IL_02fe:            this->M_x55();                                              //call				void Reflector::Application::ApplicationManager::M_x55()
	IL_0303:                                                                        //ldarg.0
	IL_0304:            Temp_14=this->F_x13;                                        //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0309:            Temp_15=Temp_14->Windows;                                   //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_030e:            Temp_16=safe_cast<System::Collections::IEnumerable^>(Temp_15)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0313:            V_9=Temp_16;                                                //stloc.s				V_9
	IL_0315:                                                                        //ldc.i4				0x7
	IL_031a:            V_11=7;                                                     //stloc				V_11
	IL_031e:            /*goto IL_0002;*/goto IL_0323;                              //br				IL_0002
	IL_0323:            /*goto IL_0132;*/goto IL_012D01;                            //br				IL_0132
	IL_0328:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::M_x9(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            this->M_x49();                                              //call				void Reflector::Application::ApplicationManager::M_x49()
	IL_0006:            return;                                                     //ret

}
inline void Reflector::Application::ApplicationManager::Run()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IWindowManager^ Temp_0 = nullptr;
	Reflector::IWindowManager^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0006:            if(Temp_0==nullptr)goto IL_001c;                            //brfalse.s				IL_001c
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x13;                                         //ldfld				Reflector::IWindowManager^ Reflector::Application::ApplicationManager F_x13
	IL_0010:                                                                        //castclass				System::Windows::Forms::Form
	IL_0015:            System::Windows::Forms::Application::Run(safe_cast<System::Windows::Forms::Form^>(Temp_1));//call				void System::Windows::Forms::Application::Run(System::Windows::Forms::Form^)
	IL_001a:            goto IL_001c;                                               //br.s				IL_001c
	IL_001c:            return;                                                     //ret

}
inline Reflector::Application::ApplicationManager::T_x1::T_x1(System::ComponentModel::ISynchronizeInvoke^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::CodeModel::IAssemblyCache^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:                                                                        //ldarg.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            this->F_x1=A_0;                                             //stfld				System::ComponentModel::ISynchronizeInvoke^ Reflector::Application::ApplicationManager::T_x1 F_x1
	IL_000d:                                                                        //ldarg.0
	IL_000e:                                                                        //ldarg.3
	IL_000f:            this->F_x2=A_2;                                             //stfld				Reflector::CodeModel::IAssemblyCache^ Reflector::Application::ApplicationManager::T_x1 F_x2
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.2
	IL_0016:            this->F_x12=A_1;                                            //stfld				Reflector::CodeModel::IAssemblyManager^ Reflector::Application::ApplicationManager::T_x1 F_x12
	IL_001b:            return;                                                     //ret

}
inline Reflector::CodeModel::IAssembly^ Reflector::Application::ApplicationManager::T_x1::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x70^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Reflector::CodeModel::IAssemblyCache^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Windows::Forms::DialogResult Temp_4 = (System::Windows::Forms::DialogResult)0;
	Reflector::CodeModel::IAssemblyManager^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_7 = nullptr;
	//local variables.
	Root::T_x70^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	//method body ------- 
	IL_0000:            Temp_0=gcnew Root::T_x70();                                 //newobj				void Root::T_x70::.ctor()
	IL_0005:            V_0=Temp_0;                                                 //stloc.0
	IL_0006:                                                                        //ldloc.0
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=A_0->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_000d:            V_0->M_x1(Temp_1);                                          //callvirt				void Root::T_x70::M_x1(System::String^)
	IL_0012:                                                                        //ldloc.0
	IL_0013:                                                                        //ldarg.0
	IL_0014:            Temp_2=this->F_x2;                                          //ldfld				Reflector::CodeModel::IAssemblyCache^ Reflector::Application::ApplicationManager::T_x1 F_x2
	IL_0019:                                                                        //ldarg.1
	IL_001a:                                                                        //ldarg.2
	IL_001b:            Temp_3=Temp_2->QueryLocation(A_0,A_1);                      //callvirt				System::String^ Reflector::CodeModel::IAssemblyCache::QueryLocation(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_0020:            V_0->M_x2(Temp_3);                                          //callvirt				void Root::T_x70::M_x2(System::String^)
	IL_0025:                                                                        //ldloc.0
	IL_0026:            Temp_4=V_0->ShowDialog();                                   //callvirt				System::Windows::Forms::DialogResult System::Windows::Forms::Form::ShowDialog()
	IL_002b:                                                                        //ldc.i4.1
	IL_002c:            if(safe_cast<System::Int32>(Temp_4)!=1)goto IL_0044;        //bne.un.s				IL_0044
	IL_002e:            goto IL_0030;                                               //br.s				IL_0030
	IL_0030:                                                                        //ldarg.0
	IL_0031:            Temp_5=this->F_x12;                                         //ldfld				Reflector::CodeModel::IAssemblyManager^ Reflector::Application::ApplicationManager::T_x1 F_x12
	IL_0036:                                                                        //ldloc.0
	IL_0037:            Temp_6=V_0->M_x1();                                         //callvirt				System::String^ Root::T_x70::M_x1()
	IL_003c:            Temp_7=Temp_5->LoadFile(Temp_6);                            //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyManager::LoadFile(System::String^)
	IL_0041:            V_1=Temp_7;                                                 //stloc.1
	IL_0042:                                                                        //ldloc.1
	IL_0043:            return V_1;                                                 //ret
	IL_0044:                                                                        //ldc.i4.4
	IL_0045:                                                                        //dup
	IL_0046:                                                                        //dup
	IL_0047:                                                                        //ldc.i4.2
	IL_0048:                                                                        //sub
	IL_0049:                                                                        //blt				IL_0045
	IL_004e:                                                                        //pop
	IL_004f:                                                                        //ldnull
	IL_0050:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::IAssembly^ Reflector::Application::ApplicationManager::T_x1::M_x2(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1)
//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::ComponentModel::ISynchronizeInvoke^ Temp_0 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_1 = nullptr;
	System::ComponentModel::ISynchronizeInvoke^ Temp_2 = nullptr;
	Reflector::Application::ApplicationManager::T_x1::T_x1_0^ Temp_3 = nullptr;
	array<System::Object^>^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	//local variables.
	array<System::Object^>^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::ComponentModel::ISynchronizeInvoke^ Reflector::Application::ApplicationManager::T_x1 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_003a;                            //brfalse.s				IL_003a
	IL_0008:            goto IL_000b;                                               //br.s				IL_000b
	IL_000a:                                                                        //break
	IL_000b:            goto IL_000d;                                               //br.s				IL_000d
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_2=this->F_x1;                                          //ldfld				System::ComponentModel::ISynchronizeInvoke^ Reflector::Application::ApplicationManager::T_x1 F_x1
	IL_0013:                                                                        //ldarg.0
	IL_0014:                                                                        //ldftn				Reflector::CodeModel::IAssembly^ Reflector::Application::ApplicationManager::T_x1::M_x1(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_001a:            Temp_3=gcnew Reflector::Application::ApplicationManager::T_x1::T_x1_0(this,&Reflector::Application::ApplicationManager::T_x1::M_x1);//newobj				void Reflector::Application::ApplicationManager::T_x1::T_x1_0::.ctor(System::Object^,System::IntPtr)
	IL_001f:                                                                        //ldc.i4.2
	IL_0020:            Temp_4=gcnew array<System::Object^>(2);                     //newarr				System::Object
	IL_0025:            V_0=Temp_4;                                                 //stloc.0
	IL_0026:                                                                        //ldloc.0
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:                                                                        //ldarg.1
	IL_0029:            V_0[0]=safe_cast<System::Object^>(A_0);                     //stelem.ref
	IL_002a:                                                                        //ldloc.0
	IL_002b:                                                                        //ldc.i4.1
	IL_002c:                                                                        //ldarg.2
	IL_002d:            V_0[1]=safe_cast<System::Object^>(A_1);                     //stelem.ref
	IL_002e:                                                                        //ldloc.0
	IL_002f:            Temp_5=Temp_2->Invoke(safe_cast<System::Delegate^>(Temp_3),V_0);//callvirt				System::Object^ System::ComponentModel::ISynchronizeInvoke::Invoke(System::Delegate^,array<System::Object^>^)
	IL_0034:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0039:            return safe_cast<Reflector::CodeModel::IAssembly^>(Temp_5); //ret
	IL_003a:                                                                        //ldarg.0
	IL_003b:                                                                        //ldarg.1
	IL_003c:                                                                        //ldarg.2
	IL_003d:            Temp_1=this->M_x1(A_0,A_1);                                 //call				Reflector::CodeModel::IAssembly^ Reflector::Application::ApplicationManager::T_x1::M_x1(Reflector::CodeModel::IAssemblyReference^,System::String^)
	IL_0042:            return Temp_1;                                              //ret

}
inline Reflector::Application::ApplicationManager::T_x2::T_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline System::Boolean Reflector::Application::ApplicationManager::T_x2::M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1)
//Reflector::CodeModel::IAssemblyComparer^::Equals by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_0=0;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_000b;case 1:goto IL_009f;case 2:goto IL_007e;case 3:goto IL_0053;case 4:goto IL_0044;case 5:goto IL_0071;};//switch				(IL_000b,IL_009f,IL_007e,IL_0053,IL_0044,IL_0071)
	IL_002e:                                                                        //ldarg.1
	IL_002f:            Temp_6=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0034:            if(Temp_6==nullptr)goto IL_00a1;                            //brfalse.s				IL_00a1
	IL_0036:            goto IL_0039;                                               //br.s				IL_0039
	IL_0038:                                                                        //break
	IL_0039:                                                                        //ldc.i4				0x4
	IL_003e:            V_0=4;                                                      //stloc				V_0
	IL_0042:            /*goto IL_000d;*/goto IL_0044;                              //br.s				IL_000d
	IL_0044:            goto IL_0073;                                               //br.s				IL_0073
	IL_0046:                                                                        //ldc.i4.1
	IL_0047:            return true;                                                //ret
	IL_0048:                                                                        //ldc.i4				0x3
	IL_004d:            V_0=3;                                                      //stloc				V_0
	IL_0051:            /*goto IL_000d;*/goto IL_0053;                              //br.s				IL_000d
	IL_0053:                                                                        //ldarg.1
	IL_0054:            Temp_3=A_0->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_0059:                                                                        //ldarg.2
	IL_005a:            Temp_4=A_1->Culture;                                        //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Culture()
	IL_005f:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0064:            if(!Temp_5)goto IL_00a1;                                    //brfalse.s				IL_00a1
	IL_0066:                                                                        //ldc.i4				0x5
	IL_006b:            V_0=5;                                                      //stloc				V_0
	IL_006f:            /*goto IL_000d;*/goto IL_0071;                              //br.s				IL_000d
	IL_0071:            goto IL_0046;                                               //br.s				IL_0046
	IL_0073:                                                                        //ldc.i4				0x2
	IL_0078:            V_0=2;                                                      //stloc				V_0
	IL_007c:            /*goto IL_000d;*/goto IL_007e;                              //br.s				IL_000d
	IL_007e:                                                                        //ldarg.1
	IL_007f:            Temp_0=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0084:                                                                        //ldarg.2
	IL_0085:            Temp_1=A_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_008a:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_008f:            if(!Temp_2)goto IL_00a1;                                    //brfalse.s				IL_00a1
	IL_0091:                                                                        //ldc.i4				0x1
	IL_0096:            V_0=1;                                                      //stloc				V_0
	IL_009a:            /*goto IL_000d;*/goto IL_009f;                              //br				IL_000d
	IL_009f:            goto IL_0048;                                               //br.s				IL_0048
	IL_00a1:                                                                        //ldc.i4.0
	IL_00a2:            return false;                                               //ret

}
