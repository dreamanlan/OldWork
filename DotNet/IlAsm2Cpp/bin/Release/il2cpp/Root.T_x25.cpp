#include "global_xref.h"

inline Root::T_x25::T_x25(System::IServiceProvider^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Collections::ArrayList^ Temp_0 = nullptr;
	System::Windows::Forms::ImageList^ Temp_1 = nullptr;
	System::Windows::Forms::ImageList^ Temp_2 = nullptr;
	System::Windows::Forms::ImageList::ImageCollection^ Temp_3 = nullptr;
	System::Drawing::Image^ Temp_4 = nullptr;
	System::Int32 Temp_5 = 0;
	System::Windows::Forms::ImageList^ Temp_6 = nullptr;
	System::Windows::Forms::ImageList^ Temp_7 = nullptr;
	System::Drawing::Color Temp_8;
	System::Type^ Temp_9 = nullptr;
	System::Object^ Temp_10 = nullptr;
	System::Type^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	Reflector::ICommandBarCollection^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Reflector::ICommandBar^ Temp_15 = nullptr;
	System::Drawing::Image^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Drawing::Image^ Temp_19 = nullptr;
	System::String^ Temp_20 = nullptr;
	System::String^ Temp_21 = nullptr;
	Reflector::ICommandBarCollection^ Temp_22 = nullptr;
	System::String^ Temp_23 = nullptr;
	Reflector::ICommandBar^ Temp_24 = nullptr;
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
	System::String^ Temp_41 = nullptr;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Drawing::Image^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::String^ Temp_47 = nullptr;
	Reflector::ICommandBarCollection^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	Reflector::ICommandBar^ Temp_50 = nullptr;
	System::Drawing::Image^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	System::Drawing::Image^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::String^ Temp_56 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_57 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_58 = nullptr;
	System::Drawing::Image^ Temp_59 = nullptr;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_62 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::String^ Temp_65 = nullptr;
	Reflector::ICommandBarCollection^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	Reflector::ICommandBar^ Temp_68 = nullptr;
	System::Drawing::Image^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::String^ Temp_71 = nullptr;
	System::Drawing::Image^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_75 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_76 = nullptr;
	System::Drawing::Image^ Temp_77 = nullptr;
	System::String^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_80 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_81 = nullptr;
	System::Drawing::Image^ Temp_82 = nullptr;
	System::String^ Temp_83 = nullptr;
	System::String^ Temp_84 = nullptr;
	System::String^ Temp_85 = nullptr;
	System::String^ Temp_86 = nullptr;
	Reflector::ICommandBarCollection^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	Reflector::ICommandBar^ Temp_89 = nullptr;
	System::Drawing::Image^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::String^ Temp_92 = nullptr;
	System::Drawing::Image^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::String^ Temp_95 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_96 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_97 = nullptr;
	System::Drawing::Image^ Temp_98 = nullptr;
	System::String^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	Reflector::ICommandBarCollection^ Temp_101 = nullptr;
	System::String^ Temp_102 = nullptr;
	Reflector::ICommandBar^ Temp_103 = nullptr;
	System::Drawing::Image^ Temp_104 = nullptr;
	System::String^ Temp_105 = nullptr;
	System::String^ Temp_106 = nullptr;
	System::Drawing::Image^ Temp_107 = nullptr;
	System::String^ Temp_108 = nullptr;
	System::String^ Temp_109 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_110 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_111 = nullptr;
	System::Drawing::Image^ Temp_112 = nullptr;
	System::String^ Temp_113 = nullptr;
	System::String^ Temp_114 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_115 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_116 = nullptr;
	System::String^ Temp_117 = nullptr;
	System::String^ Temp_118 = nullptr;
	System::Drawing::Image^ Temp_119 = nullptr;
	System::String^ Temp_120 = nullptr;
	System::String^ Temp_121 = nullptr;
	Reflector::ICommandBarCollection^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	Reflector::ICommandBar^ Temp_124 = nullptr;
	System::Drawing::Image^ Temp_125 = nullptr;
	System::String^ Temp_126 = nullptr;
	System::String^ Temp_127 = nullptr;
	System::Drawing::Image^ Temp_128 = nullptr;
	System::String^ Temp_129 = nullptr;
	System::String^ Temp_130 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_131 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_132 = nullptr;
	System::Drawing::Image^ Temp_133 = nullptr;
	System::String^ Temp_134 = nullptr;
	System::String^ Temp_135 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_136 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_137 = nullptr;
	System::Drawing::Image^ Temp_138 = nullptr;
	System::String^ Temp_139 = nullptr;
	System::String^ Temp_140 = nullptr;
	System::String^ Temp_141 = nullptr;
	System::String^ Temp_142 = nullptr;
	System::String^ Temp_143 = nullptr;
	System::String^ Temp_144 = nullptr;
	Reflector::ICommandBarCollection^ Temp_145 = nullptr;
	System::String^ Temp_146 = nullptr;
	Reflector::ICommandBar^ Temp_147 = nullptr;
	System::Drawing::Image^ Temp_148 = nullptr;
	System::String^ Temp_149 = nullptr;
	System::String^ Temp_150 = nullptr;
	System::Drawing::Image^ Temp_151 = nullptr;
	System::String^ Temp_152 = nullptr;
	System::String^ Temp_153 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_154 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_155 = nullptr;
	System::Drawing::Image^ Temp_156 = nullptr;
	System::String^ Temp_157 = nullptr;
	System::String^ Temp_158 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_159 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_160 = nullptr;
	System::Drawing::Image^ Temp_161 = nullptr;
	System::String^ Temp_162 = nullptr;
	System::String^ Temp_163 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_164 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_165 = nullptr;
	System::Drawing::Image^ Temp_166 = nullptr;
	System::String^ Temp_167 = nullptr;
	System::String^ Temp_168 = nullptr;
	System::Drawing::Image^ Temp_169 = nullptr;
	System::String^ Temp_170 = nullptr;
	System::String^ Temp_171 = nullptr;
	System::String^ Temp_172 = nullptr;
	System::String^ Temp_173 = nullptr;
	System::String^ Temp_174 = nullptr;
	System::String^ Temp_175 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_176 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_177 = nullptr;
	System::String^ Temp_178 = nullptr;
	System::String^ Temp_179 = nullptr;
	System::String^ Temp_180 = nullptr;
	System::String^ Temp_181 = nullptr;
	Reflector::ICommandBarCollection^ Temp_182 = nullptr;
	System::String^ Temp_183 = nullptr;
	Reflector::ICommandBar^ Temp_184 = nullptr;
	System::Drawing::Image^ Temp_185 = nullptr;
	System::String^ Temp_186 = nullptr;
	System::String^ Temp_187 = nullptr;
	System::Drawing::Image^ Temp_188 = nullptr;
	System::String^ Temp_189 = nullptr;
	System::String^ Temp_190 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_191 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_192 = nullptr;
	System::Drawing::Image^ Temp_193 = nullptr;
	System::String^ Temp_194 = nullptr;
	System::String^ Temp_195 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_196 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_197 = nullptr;
	System::String^ Temp_198 = nullptr;
	System::String^ Temp_199 = nullptr;
	Reflector::ICommandBarCollection^ Temp_200 = nullptr;
	System::String^ Temp_201 = nullptr;
	Reflector::ICommandBar^ Temp_202 = nullptr;
	System::Drawing::Image^ Temp_203 = nullptr;
	System::String^ Temp_204 = nullptr;
	System::String^ Temp_205 = nullptr;
	System::Drawing::Image^ Temp_206 = nullptr;
	System::String^ Temp_207 = nullptr;
	System::String^ Temp_208 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_209 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_210 = nullptr;
	System::Drawing::Image^ Temp_211 = nullptr;
	System::String^ Temp_212 = nullptr;
	System::String^ Temp_213 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_214 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_215 = nullptr;
	System::Drawing::Image^ Temp_216 = nullptr;
	System::String^ Temp_217 = nullptr;
	System::String^ Temp_218 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_219 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_220 = nullptr;
	System::Drawing::Image^ Temp_221 = nullptr;
	System::String^ Temp_222 = nullptr;
	System::String^ Temp_223 = nullptr;
	System::Drawing::Image^ Temp_224 = nullptr;
	System::String^ Temp_225 = nullptr;
	System::String^ Temp_226 = nullptr;
	System::String^ Temp_227 = nullptr;
	System::String^ Temp_228 = nullptr;
	System::String^ Temp_229 = nullptr;
	System::String^ Temp_230 = nullptr;
	Reflector::ICommandBarCollection^ Temp_231 = nullptr;
	System::String^ Temp_232 = nullptr;
	Reflector::ICommandBar^ Temp_233 = nullptr;
	System::Drawing::Image^ Temp_234 = nullptr;
	System::String^ Temp_235 = nullptr;
	System::String^ Temp_236 = nullptr;
	System::Drawing::Image^ Temp_237 = nullptr;
	System::String^ Temp_238 = nullptr;
	System::String^ Temp_239 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_240 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_241 = nullptr;
	System::Drawing::Image^ Temp_242 = nullptr;
	System::String^ Temp_243 = nullptr;
	System::String^ Temp_244 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_245 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_246 = nullptr;
	System::String^ Temp_247 = nullptr;
	System::String^ Temp_248 = nullptr;
	Reflector::ICommandBarCollection^ Temp_249 = nullptr;
	System::String^ Temp_250 = nullptr;
	Reflector::ICommandBar^ Temp_251 = nullptr;
	System::Drawing::Image^ Temp_252 = nullptr;
	System::String^ Temp_253 = nullptr;
	System::String^ Temp_254 = nullptr;
	System::Drawing::Image^ Temp_255 = nullptr;
	System::String^ Temp_256 = nullptr;
	System::String^ Temp_257 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_258 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_259 = nullptr;
	System::Drawing::Image^ Temp_260 = nullptr;
	System::String^ Temp_261 = nullptr;
	System::String^ Temp_262 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_263 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_264 = nullptr;
	System::Drawing::Image^ Temp_265 = nullptr;
	System::String^ Temp_266 = nullptr;
	System::String^ Temp_267 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_268 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_269 = nullptr;
	System::Drawing::Image^ Temp_270 = nullptr;
	System::String^ Temp_271 = nullptr;
	System::String^ Temp_272 = nullptr;
	System::Drawing::Image^ Temp_273 = nullptr;
	System::String^ Temp_274 = nullptr;
	System::String^ Temp_275 = nullptr;
	System::String^ Temp_276 = nullptr;
	System::String^ Temp_277 = nullptr;
	System::String^ Temp_278 = nullptr;
	System::String^ Temp_279 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_280 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_281 = nullptr;
	System::String^ Temp_282 = nullptr;
	System::String^ Temp_283 = nullptr;
	Reflector::ICommandBarCollection^ Temp_284 = nullptr;
	System::String^ Temp_285 = nullptr;
	Reflector::ICommandBar^ Temp_286 = nullptr;
	System::Drawing::Image^ Temp_287 = nullptr;
	System::String^ Temp_288 = nullptr;
	System::String^ Temp_289 = nullptr;
	System::Drawing::Image^ Temp_290 = nullptr;
	System::String^ Temp_291 = nullptr;
	System::String^ Temp_292 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_293 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_294 = nullptr;
	System::Drawing::Image^ Temp_295 = nullptr;
	System::String^ Temp_296 = nullptr;
	System::String^ Temp_297 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_298 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_299 = nullptr;
	System::Drawing::Image^ Temp_300 = nullptr;
	System::String^ Temp_301 = nullptr;
	System::String^ Temp_302 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_303 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_304 = nullptr;
	System::Drawing::Image^ Temp_305 = nullptr;
	System::String^ Temp_306 = nullptr;
	System::String^ Temp_307 = nullptr;
	System::Drawing::Image^ Temp_308 = nullptr;
	System::String^ Temp_309 = nullptr;
	System::String^ Temp_310 = nullptr;
	System::String^ Temp_311 = nullptr;
	System::String^ Temp_312 = nullptr;
	System::String^ Temp_313 = nullptr;
	System::String^ Temp_314 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_315 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_316 = nullptr;
	System::String^ Temp_317 = nullptr;
	System::String^ Temp_318 = nullptr;
	Reflector::ICommandBarCollection^ Temp_319 = nullptr;
	System::String^ Temp_320 = nullptr;
	Reflector::ICommandBar^ Temp_321 = nullptr;
	System::Drawing::Image^ Temp_322 = nullptr;
	System::String^ Temp_323 = nullptr;
	System::String^ Temp_324 = nullptr;
	System::Drawing::Image^ Temp_325 = nullptr;
	System::String^ Temp_326 = nullptr;
	System::String^ Temp_327 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_328 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_329 = nullptr;
	System::Drawing::Image^ Temp_330 = nullptr;
	System::String^ Temp_331 = nullptr;
	System::String^ Temp_332 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_333 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_334 = nullptr;
	System::Drawing::Image^ Temp_335 = nullptr;
	System::String^ Temp_336 = nullptr;
	System::String^ Temp_337 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_338 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_339 = nullptr;
	System::Drawing::Image^ Temp_340 = nullptr;
	System::String^ Temp_341 = nullptr;
	System::String^ Temp_342 = nullptr;
	System::Drawing::Image^ Temp_343 = nullptr;
	System::String^ Temp_344 = nullptr;
	System::String^ Temp_345 = nullptr;
	System::String^ Temp_346 = nullptr;
	System::String^ Temp_347 = nullptr;
	System::String^ Temp_348 = nullptr;
	System::String^ Temp_349 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_350 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_351 = nullptr;
	System::String^ Temp_352 = nullptr;
	System::String^ Temp_353 = nullptr;
	Reflector::ICommandBarCollection^ Temp_354 = nullptr;
	System::String^ Temp_355 = nullptr;
	Reflector::ICommandBar^ Temp_356 = nullptr;
	System::Drawing::Image^ Temp_357 = nullptr;
	System::String^ Temp_358 = nullptr;
	System::String^ Temp_359 = nullptr;
	System::Drawing::Image^ Temp_360 = nullptr;
	System::String^ Temp_361 = nullptr;
	System::String^ Temp_362 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_363 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_364 = nullptr;
	System::Drawing::Image^ Temp_365 = nullptr;
	System::String^ Temp_366 = nullptr;
	System::String^ Temp_367 = nullptr;
	Reflector::ICommandBarCollection^ Temp_368 = nullptr;
	System::String^ Temp_369 = nullptr;
	Reflector::ICommandBar^ Temp_370 = nullptr;
	System::Drawing::Image^ Temp_371 = nullptr;
	System::String^ Temp_372 = nullptr;
	System::String^ Temp_373 = nullptr;
	System::Drawing::Image^ Temp_374 = nullptr;
	System::String^ Temp_375 = nullptr;
	System::String^ Temp_376 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_377 = nullptr;
	Reflector::ICommandBarSeparator^ Temp_378 = nullptr;
	System::Drawing::Image^ Temp_379 = nullptr;
	System::String^ Temp_380 = nullptr;
	System::String^ Temp_381 = nullptr;
	System::String^ Temp_382 = nullptr;
	System::ArgumentNullException^ Temp_383 = nullptr;
	//local variables.
	Root::T_x107^ V_0 = nullptr;
	Reflector::ICommandBarManager^ V_1 = nullptr;
	Reflector::ICommandBar^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x2
	IL_0005:            V_3=2;                                                      //stloc				V_3
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldnull
	IL_000b:            this->F_x8=safe_cast<Root::T_x25::T_x1^>(nullptr);          //stfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldc.i4.1
	IL_0012:            this->F_x5=true;                                            //stfld				System::Boolean Root::T_x25 F_x5
	IL_0017:                                                                        //ldarg.0
	IL_0018:            Temp_0=gcnew System::Collections::ArrayList();              //newobj				void System::Collections::ArrayList::.ctor()
	IL_001d:            this->F_x9=Temp_0;                                          //stfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_0022:                                                                        //ldarg.0
	IL_0023:            /*System::Windows::Forms::TreeView();*/                     //call				void System::Windows::Forms::TreeView::.ctor()
	IL_0028:                                                                        //ldarg.1
	IL_0029:            if(A_0!=nullptr)goto IL_0041;                               //brtrue.s				IL_0041
	IL_002b:            goto IL_002d;                                               //br.s				IL_002d
	IL_002d:                                                                        //ldstr				L"\x531F\x4721\x5623\x5025\x4127\x4929\x492B\x7E2D\x422F\x5D31\x4233\x5F35\x5C37\x5F39\x4E3B"
	IL_0032:                                                                        //ldloc				V_3
	IL_0036:            Temp_382=a(L"\x531F\x4721\x5623\x5025\x4127\x4929\x492B\x7E2D\x422F\x5D31\x4233\x5F35\x5C37\x5F39\x4E3B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_003b:            Temp_383=gcnew System::ArgumentNullException(Temp_382);     //newobj				void System::ArgumentNullException::.ctor(System::String^)
	IL_0040:            throw Temp_383;                                             //throw
	IL_0041:                                                                        //ldarg.0
	IL_0042:                                                                        //ldarg.1
	IL_0043:            this->F_x12=A_0;                                            //stfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_0048:                                                                        //ldarg.0
	IL_0049:                                                                        //ldnull
	IL_004a:            this->F_x13=safe_cast<Root::T_x10^>(nullptr);               //stfld				Root::T_x10^ Root::T_x25 F_x13
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //ldc.i4.1
	IL_0051:            this->AllowDrop=true;                                       //callvirt				void System::Windows::Forms::Control::set_AllowDrop(System::Boolean)
	IL_0056:                                                                        //ldarg.0
	IL_0057:                                                                        //ldc.i4.1
	IL_0058:            this->HotTracking=true;                                     //call				void System::Windows::Forms::TreeView::set_HotTracking(System::Boolean)
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //ldc.i4.0
	IL_005f:            this->HideSelection=false;                                  //call				void System::Windows::Forms::TreeView::set_HideSelection(System::Boolean)
	IL_0064:                                                                        //ldarg.0
	IL_0065:                                                                        //ldc.i4.0
	IL_0066:            this->ShowLines=false;                                      //call				void System::Windows::Forms::TreeView::set_ShowLines(System::Boolean)
	IL_006b:                                                                        //ldarg.0
	IL_006c:            Temp_1=gcnew System::Windows::Forms::ImageList();           //newobj				void System::Windows::Forms::ImageList::.ctor()
	IL_0071:            this->ImageList=Temp_1;                                     //call				void System::Windows::Forms::TreeView::set_ImageList(System::Windows::Forms::ImageList^)
	IL_0076:                                                                        //ldarg.0
	IL_0077:            Temp_2=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_007c:            Temp_3=Temp_2->Images;                                      //callvirt				System::Windows::Forms::ImageList::ImageCollection^ System::Windows::Forms::ImageList::get_Images()
	IL_0081:            Temp_4=Root::T_x117::M_x1();                                //call				System::Drawing::Image^ Root::T_x117::M_x1()
	IL_0086:            Temp_5=Temp_3->AddStrip(Temp_4);                            //callvirt				System::Int32 System::Windows::Forms::ImageList::ImageCollection::AddStrip(System::Drawing::Image^)
	IL_008b:                                                                        //pop
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_6=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_0092:                                                                        //ldc.i4.s				32
	IL_0094:            Temp_6->ColorDepth=safe_cast<System::Windows::Forms::ColorDepth>(32);//callvirt				void System::Windows::Forms::ImageList::set_ColorDepth(System::Windows::Forms::ColorDepth)
	IL_0099:                                                                        //ldarg.0
	IL_009a:            Temp_7=this->ImageList;                                     //call				System::Windows::Forms::ImageList^ System::Windows::Forms::TreeView::get_ImageList()
	IL_009f:                                                                        //ldc.i4				0xff
	IL_00a4:                                                                        //ldc.i4.0
	IL_00a5:                                                                        //ldc.i4				0x80
	IL_00aa:                                                                        //ldc.i4.0
	IL_00ab:            Temp_8=System::Drawing::Color::FromArgb(safe_cast<System::Int32>(255),safe_cast<System::Int32>(0),safe_cast<System::Int32>(128),safe_cast<System::Int32>(0));//call				System::Drawing::Color System::Drawing::Color::FromArgb(System::Int32,System::Int32,System::Int32,System::Int32)
	IL_00b0:            Temp_7->TransparentColor=Temp_8;                            //callvirt				void System::Windows::Forms::ImageList::set_TransparentColor(System::Drawing::Color)
	IL_00b5:                                                                        //ldarg.1
	IL_00b6:                                                                        //ldtoken				Root::T_x107
	IL_00bb:            Temp_9=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00c0:            Temp_10=A_0->GetService(Temp_9);                            //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_00c5:                                                                        //castclass				Root::T_x107
	IL_00ca:            V_0=safe_cast<Root::T_x107^>(Temp_10);                      //stloc.0
	IL_00cb:                                                                        //ldloc.0
	IL_00cc:                                                                        //ldarg.0
	IL_00cd:            V_0->M_x1(safe_cast<Root::T_x24^>(this));                   //callvirt				void Root::T_x107::M_x1(Root::T_x24^)
	IL_00d2:                                                                        //ldarg.1
	IL_00d3:                                                                        //ldtoken				Reflector::ICommandBarManager
	IL_00d8:            Temp_11=Reflector::ICommandBarManager::typeid;              //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00dd:            Temp_12=A_0->GetService(Temp_11);                           //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_00e2:                                                                        //castclass				Reflector::ICommandBarManager
	IL_00e7:            V_1=safe_cast<Reflector::ICommandBarManager^>(Temp_12);     //stloc.1
	IL_00e8:                                                                        //ldnull
	IL_00e9:            V_2=safe_cast<Reflector::ICommandBar^>(nullptr);            //stloc.2
	IL_00ea:                                                                        //ldloc.1
	IL_00eb:            Temp_13=V_1->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_00f0:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x742F\x5731\x5233\x5735\x4D37\x5639\x483B"
	IL_00f5:                                                                        //ldloc				V_3
	IL_00f9:            Temp_14=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x742F\x5731\x5233\x5735\x4D37\x5639\x483B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00fe:            Temp_15=Temp_13->AddContextMenu(Temp_14);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0103:            V_2=Temp_15;                                                //stloc.2
	IL_0104:                                                                        //ldarg.0
	IL_0105:                                                                        //ldloc.2
	IL_0106:            Temp_16=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_010b:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0110:                                                                        //ldloc				V_3
	IL_0114:            Temp_17=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0119:                                                                        //ldc.i4				0x40025
	IL_011e:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0123:                                                                        //ldloc				V_3
	IL_0127:            Temp_18=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012c:            this->M_x1(V_2,Temp_16,Temp_17,safe_cast<System::Windows::Forms::Keys>(262181),Temp_18);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0131:                                                                        //ldarg.0
	IL_0132:                                                                        //ldloc.2
	IL_0133:            Temp_19=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0138:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_013d:                                                                        //ldloc				V_3
	IL_0141:            Temp_20=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0146:                                                                        //ldc.i4				0x40027
	IL_014b:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0150:                                                                        //ldloc				V_3
	IL_0154:            Temp_21=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0159:            this->M_x1(V_2,Temp_19,Temp_20,safe_cast<System::Windows::Forms::Keys>(262183),Temp_21);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_015e:                                                                        //ldarg.0
	IL_015f:                                                                        //ldloc.2
	IL_0160:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0165:            this->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_2);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_016a:                                                                        //ldloc.1
	IL_016b:            Temp_22=V_1->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0170:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x712F\x4131\x4733\x5335\x5537\x5839\x503B\x473D"
	IL_0175:                                                                        //ldloc				V_3
	IL_0179:            Temp_23=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x712F\x4131\x4733\x5335\x5537\x5839\x503B\x473D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017e:            Temp_24=Temp_22->AddContextMenu(Temp_23);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0183:            V_2=Temp_24;                                                //stloc.2
	IL_0184:                                                                        //ldarg.0
	IL_0185:                                                                        //ldloc.2
	IL_0186:            Temp_25=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_018b:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0190:                                                                        //ldloc				V_3
	IL_0194:            Temp_26=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0199:                                                                        //ldc.i4				0x40025
	IL_019e:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_01a3:                                                                        //ldloc				V_3
	IL_01a7:            Temp_27=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ac:            this->M_x1(V_2,Temp_25,Temp_26,safe_cast<System::Windows::Forms::Keys>(262181),Temp_27);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01b1:                                                                        //ldarg.0
	IL_01b2:                                                                        //ldloc.2
	IL_01b3:            Temp_28=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_01b8:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_01bd:                                                                        //ldloc				V_3
	IL_01c1:            Temp_29=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c6:                                                                        //ldc.i4				0x40027
	IL_01cb:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_01d0:                                                                        //ldloc				V_3
	IL_01d4:            Temp_30=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01d9:            this->M_x1(V_2,Temp_28,Temp_29,safe_cast<System::Windows::Forms::Keys>(262183),Temp_30);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_01de:                                                                        //ldloc.2
	IL_01df:            Temp_31=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_01e4:            Temp_32=Temp_31->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_01e9:                                                                        //pop
	IL_01ea:                                                                        //ldarg.0
	IL_01eb:                                                                        //ldloc.2
	IL_01ec:            Temp_33=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_01f1:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_01f6:                                                                        //ldloc				V_3
	IL_01fa:            Temp_34=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01ff:                                                                        //ldc.i4				0x20043
	IL_0204:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0209:                                                                        //ldloc				V_3
	IL_020d:            Temp_35=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0212:            this->M_x1(V_2,Temp_33,Temp_34,safe_cast<System::Windows::Forms::Keys>(131139),Temp_35);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0217:                                                                        //ldloc.2
	IL_0218:            Temp_36=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_021d:            Temp_37=Temp_36->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0222:                                                                        //pop
	IL_0223:                                                                        //ldarg.0
	IL_0224:                                                                        //ldloc.2
	IL_0225:            Temp_38=Root::T_x106::M_x13();                              //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_022a:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_022f:                                                                        //ldloc				V_3
	IL_0233:            Temp_39=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0238:                                                                        //ldc.i4.0
	IL_0239:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_023e:                                                                        //ldloc				V_3
	IL_0242:            Temp_40=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0247:            this->M_x1(V_2,Temp_38,Temp_39,safe_cast<System::Windows::Forms::Keys>(0),Temp_40);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_024c:                                                                        //ldarg.0
	IL_024d:                                                                        //ldloc.2
	IL_024e:                                                                        //ldnull
	IL_024f:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_0254:                                                                        //ldloc				V_3
	IL_0258:            Temp_41=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025d:                                                                        //ldc.i4				0x20052
	IL_0262:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_0267:                                                                        //ldloc				V_3
	IL_026b:            Temp_42=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0270:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_41,safe_cast<System::Windows::Forms::Keys>(131154),Temp_42);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0275:                                                                        //ldarg.0
	IL_0276:                                                                        //ldloc.2
	IL_0277:                                                                        //ldnull
	IL_0278:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x6B2D\x5E2F\x4631\x4633\x4F35\x1837\x6A39\x533B\x573D\x2E3F\x3641"
	IL_027d:                                                                        //ldloc				V_3
	IL_0281:            Temp_43=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x6B2D\x5E2F\x4631\x4633\x4F35\x1837\x6A39\x533B\x573D\x2E3F\x3641",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0286:                                                                        //ldc.i4.0
	IL_0287:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7B3D\x2E3F\x3641\x3643\x3F45\x1847\x2549\x254B\x204D\x244F"
	IL_028c:                                                                        //ldloc				V_3
	IL_0290:            Temp_44=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7B3D\x2E3F\x3641\x3643\x3F45\x1847\x2549\x254B\x204D\x244F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0295:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_43,safe_cast<System::Windows::Forms::Keys>(0),Temp_44);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_029a:                                                                        //ldarg.0
	IL_029b:                                                                        //ldloc.2
	IL_029c:            Temp_45=Root::T_x106::M_x18();                              //call				System::Drawing::Image^ Root::T_x106::M_x18()
	IL_02a1:                                                                        //ldstr				L"\x631F\x0421\x4823\x4925\x5B27\x4F29"
	IL_02a6:                                                                        //ldloc				V_3
	IL_02aa:            Temp_46=a(L"\x631F\x0421\x4823\x4925\x5B27\x4F29",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02af:                                                                        //ldc.i4				0x20073
	IL_02b4:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5437\x5539\x4F3B\x5B3D"
	IL_02b9:                                                                        //ldloc				V_3
	IL_02bd:            Temp_47=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5437\x5539\x4F3B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02c2:            this->M_x1(V_2,Temp_45,Temp_46,safe_cast<System::Windows::Forms::Keys>(131187),Temp_47);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_02c7:                                                                        //ldloc.1
	IL_02c8:            Temp_48=V_1->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_02cd:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x712F\x4131\x4733\x5335\x5537\x5839\x503B\x473D\x123F\x2741\x2243\x2345\x3A47\x2F49\x224B\x2D4D\x354F"
	IL_02d2:                                                                        //ldloc				V_3
	IL_02d6:            Temp_49=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x712F\x4131\x4733\x5335\x5537\x5839\x503B\x473D\x123F\x2741\x2243\x2345\x3A47\x2F49\x224B\x2D4D\x354F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02db:            Temp_50=Temp_48->AddContextMenu(Temp_49);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_02e0:            V_2=Temp_50;                                                //stloc.2
	IL_02e1:                                                                        //ldarg.0
	IL_02e2:                                                                        //ldloc.2
	IL_02e3:            Temp_51=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_02e8:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_02ed:                                                                        //ldloc				V_3
	IL_02f1:            Temp_52=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02f6:                                                                        //ldc.i4				0x40025
	IL_02fb:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0300:                                                                        //ldloc				V_3
	IL_0304:            Temp_53=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0309:            this->M_x1(V_2,Temp_51,Temp_52,safe_cast<System::Windows::Forms::Keys>(262181),Temp_53);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_030e:                                                                        //ldarg.0
	IL_030f:                                                                        //ldloc.2
	IL_0310:            Temp_54=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0315:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_031a:                                                                        //ldloc				V_3
	IL_031e:            Temp_55=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0323:                                                                        //ldc.i4				0x40027
	IL_0328:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_032d:                                                                        //ldloc				V_3
	IL_0331:            Temp_56=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0336:            this->M_x1(V_2,Temp_54,Temp_55,safe_cast<System::Windows::Forms::Keys>(262183),Temp_56);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_033b:                                                                        //ldloc.2
	IL_033c:            Temp_57=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0341:            Temp_58=Temp_57->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0346:                                                                        //pop
	IL_0347:                                                                        //ldarg.0
	IL_0348:                                                                        //ldloc.2
	IL_0349:            Temp_59=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_034e:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0353:                                                                        //ldloc				V_3
	IL_0357:            Temp_60=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_035c:                                                                        //ldc.i4				0x20043
	IL_0361:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0366:                                                                        //ldloc				V_3
	IL_036a:            Temp_61=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_036f:            this->M_x1(V_2,Temp_59,Temp_60,safe_cast<System::Windows::Forms::Keys>(131139),Temp_61);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0374:                                                                        //ldloc.2
	IL_0375:            Temp_62=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_037a:            Temp_63=Temp_62->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_037f:                                                                        //pop
	IL_0380:                                                                        //ldarg.0
	IL_0381:                                                                        //ldloc.2
	IL_0382:                                                                        //ldnull
	IL_0383:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x6F2D\x432F\x4131\x5133\x5B35\x5A37\x5639\x453B"
	IL_0388:                                                                        //ldloc				V_3
	IL_038c:            Temp_64=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x6F2D\x432F\x4131\x5133\x5B35\x5A37\x5639\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0391:                                                                        //ldc.i4.0
	IL_0392:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7F3D\x333F\x3141\x2143\x2B45\x2A47\x2649\x354B"
	IL_0397:                                                                        //ldloc				V_3
	IL_039b:            Temp_65=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7F3D\x333F\x3141\x2143\x2B45\x2A47\x2649\x354B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a0:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_64,safe_cast<System::Windows::Forms::Keys>(0),Temp_65);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_03a5:                                                                        //ldloc.1
	IL_03a6:            Temp_66=V_1->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_03ab:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5D31\x5033\x4335\x5437\x5F39"
	IL_03b0:                                                                        //ldloc				V_3
	IL_03b4:            Temp_67=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5D31\x5033\x4335\x5437\x5F39",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b9:            Temp_68=Temp_66->AddContextMenu(Temp_67);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_03be:            V_2=Temp_68;                                                //stloc.2
	IL_03bf:                                                                        //ldarg.0
	IL_03c0:                                                                        //ldloc.2
	IL_03c1:            Temp_69=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_03c6:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_03cb:                                                                        //ldloc				V_3
	IL_03cf:            Temp_70=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d4:                                                                        //ldc.i4				0x40025
	IL_03d9:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_03de:                                                                        //ldloc				V_3
	IL_03e2:            Temp_71=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03e7:            this->M_x1(V_2,Temp_69,Temp_70,safe_cast<System::Windows::Forms::Keys>(262181),Temp_71);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_03ec:                                                                        //ldarg.0
	IL_03ed:                                                                        //ldloc.2
	IL_03ee:            Temp_72=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_03f3:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_03f8:                                                                        //ldloc				V_3
	IL_03fc:            Temp_73=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0401:                                                                        //ldc.i4				0x40027
	IL_0406:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_040b:                                                                        //ldloc				V_3
	IL_040f:            Temp_74=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0414:            this->M_x1(V_2,Temp_72,Temp_73,safe_cast<System::Windows::Forms::Keys>(262183),Temp_74);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0419:                                                                        //ldloc.2
	IL_041a:            Temp_75=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_041f:            Temp_76=Temp_75->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0424:                                                                        //pop
	IL_0425:                                                                        //ldarg.0
	IL_0426:                                                                        //ldloc.2
	IL_0427:            Temp_77=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_042c:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0431:                                                                        //ldloc				V_3
	IL_0435:            Temp_78=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_043a:                                                                        //ldc.i4				0x20043
	IL_043f:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0444:                                                                        //ldloc				V_3
	IL_0448:            Temp_79=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_044d:            this->M_x1(V_2,Temp_77,Temp_78,safe_cast<System::Windows::Forms::Keys>(131139),Temp_79);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0452:                                                                        //ldloc.2
	IL_0453:            Temp_80=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0458:            Temp_81=Temp_80->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_045d:                                                                        //pop
	IL_045e:                                                                        //ldarg.0
	IL_045f:                                                                        //ldloc.2
	IL_0460:            Temp_82=Root::T_x106::M_x13();                              //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_0465:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_046a:                                                                        //ldloc				V_3
	IL_046e:            Temp_83=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0473:                                                                        //ldc.i4.0
	IL_0474:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0479:                                                                        //ldloc				V_3
	IL_047d:            Temp_84=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0482:            this->M_x1(V_2,Temp_82,Temp_83,safe_cast<System::Windows::Forms::Keys>(0),Temp_84);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0487:                                                                        //ldarg.0
	IL_0488:                                                                        //ldloc.2
	IL_0489:                                                                        //ldnull
	IL_048a:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_048f:                                                                        //ldloc				V_3
	IL_0493:            Temp_85=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0498:                                                                        //ldc.i4				0x20052
	IL_049d:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_04a2:                                                                        //ldloc				V_3
	IL_04a6:            Temp_86=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ab:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_85,safe_cast<System::Windows::Forms::Keys>(131154),Temp_86);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_04b0:                                                                        //ldloc.1
	IL_04b1:            Temp_87=V_1->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_04b6:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5D31\x5033\x4335\x5437\x5F39\x6E3B\x5B3D\x263F\x2741\x3643\x2345\x2647\x2949\x294B"
	IL_04bb:                                                                        //ldloc				V_3
	IL_04bf:            Temp_88=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5D31\x5033\x4335\x5437\x5F39\x6E3B\x5B3D\x263F\x2741\x3643\x2345\x2647\x2949\x294B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04c4:            Temp_89=Temp_87->AddContextMenu(Temp_88);                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_04c9:            V_2=Temp_89;                                                //stloc.2
	IL_04ca:                                                                        //ldarg.0
	IL_04cb:                                                                        //ldloc.2
	IL_04cc:            Temp_90=Root::T_x106::M_x11();                              //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_04d1:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_04d6:                                                                        //ldloc				V_3
	IL_04da:            Temp_91=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04df:                                                                        //ldc.i4				0x40025
	IL_04e4:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_04e9:                                                                        //ldloc				V_3
	IL_04ed:            Temp_92=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04f2:            this->M_x1(V_2,Temp_90,Temp_91,safe_cast<System::Windows::Forms::Keys>(262181),Temp_92);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_04f7:                                                                        //ldarg.0
	IL_04f8:                                                                        //ldloc.2
	IL_04f9:            Temp_93=Root::T_x106::M_x15();                              //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_04fe:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_0503:                                                                        //ldloc				V_3
	IL_0507:            Temp_94=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_050c:                                                                        //ldc.i4				0x40027
	IL_0511:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0516:                                                                        //ldloc				V_3
	IL_051a:            Temp_95=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_051f:            this->M_x1(V_2,Temp_93,Temp_94,safe_cast<System::Windows::Forms::Keys>(262183),Temp_95);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0524:                                                                        //ldloc.2
	IL_0525:            Temp_96=V_2->Items;                                         //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_052a:            Temp_97=Temp_96->AddSeparator();                            //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_052f:                                                                        //pop
	IL_0530:                                                                        //ldarg.0
	IL_0531:                                                                        //ldloc.2
	IL_0532:            Temp_98=Root::T_x106::M_x19();                              //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0537:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_053c:                                                                        //ldloc				V_3
	IL_0540:            Temp_99=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0545:                                                                        //ldc.i4				0x20043
	IL_054a:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_054f:                                                                        //ldloc				V_3
	IL_0553:            Temp_100=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0558:            this->M_x1(V_2,Temp_98,Temp_99,safe_cast<System::Windows::Forms::Keys>(131139),Temp_100);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_055d:                                                                        //ldloc.1
	IL_055e:            Temp_101=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0563:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x622F\x5731\x4733\x5935\x4D37\x4839\x5F3B\x5B3D"
	IL_0568:                                                                        //ldloc				V_3
	IL_056c:            Temp_102=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x622F\x5731\x4733\x5935\x4D37\x4839\x5F3B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0571:            Temp_103=Temp_101->AddContextMenu(Temp_102);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0576:            V_2=Temp_103;                                               //stloc.2
	IL_0577:                                                                        //ldarg.0
	IL_0578:                                                                        //ldloc.2
	IL_0579:            Temp_104=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_057e:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0583:                                                                        //ldloc				V_3
	IL_0587:            Temp_105=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_058c:                                                                        //ldc.i4				0x40025
	IL_0591:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0596:                                                                        //ldloc				V_3
	IL_059a:            Temp_106=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_059f:            this->M_x1(V_2,Temp_104,Temp_105,safe_cast<System::Windows::Forms::Keys>(262181),Temp_106);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_05a4:                                                                        //ldarg.0
	IL_05a5:                                                                        //ldloc.2
	IL_05a6:            Temp_107=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_05ab:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_05b0:                                                                        //ldloc				V_3
	IL_05b4:            Temp_108=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b9:                                                                        //ldc.i4				0x40027
	IL_05be:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_05c3:                                                                        //ldloc				V_3
	IL_05c7:            Temp_109=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05cc:            this->M_x1(V_2,Temp_107,Temp_108,safe_cast<System::Windows::Forms::Keys>(262183),Temp_109);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_05d1:                                                                        //ldloc.2
	IL_05d2:            Temp_110=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_05d7:            Temp_111=Temp_110->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_05dc:                                                                        //pop
	IL_05dd:                                                                        //ldarg.0
	IL_05de:                                                                        //ldloc.2
	IL_05df:            Temp_112=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_05e4:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_05e9:                                                                        //ldloc				V_3
	IL_05ed:            Temp_113=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05f2:                                                                        //ldc.i4				0x20043
	IL_05f7:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_05fc:                                                                        //ldloc				V_3
	IL_0600:            Temp_114=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0605:            this->M_x1(V_2,Temp_112,Temp_113,safe_cast<System::Windows::Forms::Keys>(131139),Temp_114);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_060a:                                                                        //ldloc.2
	IL_060b:            Temp_115=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0610:            Temp_116=Temp_115->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0615:                                                                        //pop
	IL_0616:                                                                        //ldarg.0
	IL_0617:                                                                        //ldloc.2
	IL_0618:                                                                        //ldnull
	IL_0619:                                                                        //ldstr				L"\x061F\x7421\x4D23\x4325\x5F27\x0A29\x7E2B\x4B2D\x432F\x5D31\x4133\x4435\x5B37\x5F39"
	IL_061e:                                                                        //ldloc				V_3
	IL_0622:            Temp_117=a(L"\x061F\x7421\x4D23\x4325\x5F27\x0A29\x7E2B\x4B2D\x432F\x5D31\x4133\x4435\x5B37\x5F39",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0627:                                                                        //ldc.i4.0
	IL_0628:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6035\x5137\x5F39\x4B3B\x6C3D\x253F\x3141\x2B43\x3345\x3A47\x2949\x294B"
	IL_062d:                                                                        //ldloc				V_3
	IL_0631:            Temp_118=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6035\x5137\x5F39\x4B3B\x6C3D\x253F\x3141\x2B43\x3345\x3A47\x2949\x294B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0636:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_117,safe_cast<System::Windows::Forms::Keys>(0),Temp_118);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_063b:                                                                        //ldarg.0
	IL_063c:                                                                        //ldloc.2
	IL_063d:            Temp_119=Root::T_x106::M_x17();                             //call				System::Drawing::Image^ Root::T_x106::M_x17()
	IL_0642:                                                                        //ldstr				L"\x731F\x4321\x5223\x4325\x0827\x0C29\x6D2B\x5D2D\x1E2F\x1C31\x1A33"
	IL_0647:                                                                        //ldloc				V_3
	IL_064b:            Temp_120=a(L"\x731F\x4321\x5223\x4325\x0827\x0C29\x6D2B\x5D2D\x1E2F\x1C31\x1A33",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0650:                                                                        //ldc.i4.s				123
	IL_0652:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5937\x4C39\x593B\x6C3D\x253F\x3141\x2B43\x3345\x3A47\x2949\x294B"
	IL_0657:                                                                        //ldloc				V_3
	IL_065b:            Temp_121=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5937\x4C39\x593B\x6C3D\x253F\x3141\x2B43\x3345\x3A47\x2949\x294B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0660:            this->M_x1(V_2,Temp_119,Temp_120,safe_cast<System::Windows::Forms::Keys>(123),Temp_121);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0665:                                                                        //ldloc.1
	IL_0666:            Temp_122=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_066b:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7E2F\x5331\x5933\x5335\x4B37\x4A39\x5D3B\x5D3D\x253F"
	IL_0670:                                                                        //ldloc				V_3
	IL_0674:            Temp_123=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7E2F\x5331\x5933\x5335\x4B37\x4A39\x5D3B\x5D3D\x253F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0679:            Temp_124=Temp_122->AddContextMenu(Temp_123);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_067e:            V_2=Temp_124;                                               //stloc.2
	IL_067f:                                                                        //ldarg.0
	IL_0680:                                                                        //ldloc.2
	IL_0681:            Temp_125=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0686:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_068b:                                                                        //ldloc				V_3
	IL_068f:            Temp_126=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0694:                                                                        //ldc.i4				0x40025
	IL_0699:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_069e:                                                                        //ldloc				V_3
	IL_06a2:            Temp_127=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06a7:            this->M_x1(V_2,Temp_125,Temp_126,safe_cast<System::Windows::Forms::Keys>(262181),Temp_127);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_06ac:                                                                        //ldarg.0
	IL_06ad:                                                                        //ldloc.2
	IL_06ae:            Temp_128=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_06b3:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_06b8:                                                                        //ldloc				V_3
	IL_06bc:            Temp_129=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06c1:                                                                        //ldc.i4				0x40027
	IL_06c6:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_06cb:                                                                        //ldloc				V_3
	IL_06cf:            Temp_130=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06d4:            this->M_x1(V_2,Temp_128,Temp_129,safe_cast<System::Windows::Forms::Keys>(262183),Temp_130);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_06d9:                                                                        //ldloc.2
	IL_06da:            Temp_131=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_06df:            Temp_132=Temp_131->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_06e4:                                                                        //pop
	IL_06e5:                                                                        //ldarg.0
	IL_06e6:                                                                        //ldloc.2
	IL_06e7:            Temp_133=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_06ec:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_06f1:                                                                        //ldloc				V_3
	IL_06f5:            Temp_134=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06fa:                                                                        //ldc.i4				0x20043
	IL_06ff:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0704:                                                                        //ldloc				V_3
	IL_0708:            Temp_135=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_070d:            this->M_x1(V_2,Temp_133,Temp_134,safe_cast<System::Windows::Forms::Keys>(131139),Temp_135);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0712:                                                                        //ldloc.2
	IL_0713:            Temp_136=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0718:            Temp_137=Temp_136->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_071d:                                                                        //pop
	IL_071e:                                                                        //ldarg.0
	IL_071f:                                                                        //ldloc.2
	IL_0720:            Temp_138=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_0725:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_072a:                                                                        //ldloc				V_3
	IL_072e:            Temp_139=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0733:                                                                        //ldc.i4.0
	IL_0734:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0739:                                                                        //ldloc				V_3
	IL_073d:            Temp_140=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0742:            this->M_x1(V_2,Temp_138,Temp_139,safe_cast<System::Windows::Forms::Keys>(0),Temp_140);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0747:                                                                        //ldarg.0
	IL_0748:                                                                        //ldloc.2
	IL_0749:                                                                        //ldnull
	IL_074a:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_074f:                                                                        //ldloc				V_3
	IL_0753:            Temp_141=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0758:                                                                        //ldc.i4				0x20052
	IL_075d:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_0762:                                                                        //ldloc				V_3
	IL_0766:            Temp_142=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_076b:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_141,safe_cast<System::Windows::Forms::Keys>(131154),Temp_142);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0770:                                                                        //ldarg.0
	IL_0771:                                                                        //ldloc.2
	IL_0772:                                                                        //ldnull
	IL_0773:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_0778:                                                                        //ldloc				V_3
	IL_077c:            Temp_143=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0781:                                                                        //ldc.i4				0x2004d
	IL_0786:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_078b:                                                                        //ldloc				V_3
	IL_078f:            Temp_144=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0794:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_143,safe_cast<System::Windows::Forms::Keys>(131149),Temp_144);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0799:                                                                        //ldloc.1
	IL_079a:            Temp_145=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_079f:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x642F\x4B31\x4433\x5335\x7C37\x5F39\x5F3B\x523D\x213F\x3041\x2543\x3245\x2147\x2549\x224B"
	IL_07a4:                                                                        //ldloc				V_3
	IL_07a8:            Temp_146=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x642F\x4B31\x4433\x5335\x7C37\x5F39\x5F3B\x523D\x213F\x3041\x2543\x3245\x2147\x2549\x224B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07ad:            Temp_147=Temp_145->AddContextMenu(Temp_146);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_07b2:            V_2=Temp_147;                                               //stloc.2
	IL_07b3:                                                                        //ldarg.0
	IL_07b4:                                                                        //ldloc.2
	IL_07b5:            Temp_148=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_07ba:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_07bf:                                                                        //ldloc				V_3
	IL_07c3:            Temp_149=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07c8:                                                                        //ldc.i4				0x40025
	IL_07cd:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_07d2:                                                                        //ldloc				V_3
	IL_07d6:            Temp_150=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07db:            this->M_x1(V_2,Temp_148,Temp_149,safe_cast<System::Windows::Forms::Keys>(262181),Temp_150);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_07e0:                                                                        //ldarg.0
	IL_07e1:                                                                        //ldloc.2
	IL_07e2:            Temp_151=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_07e7:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_07ec:                                                                        //ldloc				V_3
	IL_07f0:            Temp_152=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07f5:                                                                        //ldc.i4				0x40027
	IL_07fa:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_07ff:                                                                        //ldloc				V_3
	IL_0803:            Temp_153=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0808:            this->M_x1(V_2,Temp_151,Temp_152,safe_cast<System::Windows::Forms::Keys>(262183),Temp_153);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_080d:                                                                        //ldloc.2
	IL_080e:            Temp_154=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0813:            Temp_155=Temp_154->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0818:                                                                        //pop
	IL_0819:                                                                        //ldarg.0
	IL_081a:                                                                        //ldloc.2
	IL_081b:            Temp_156=Root::T_x106::M_x9();                              //call				System::Drawing::Image^ Root::T_x106::M_x9()
	IL_0820:                                                                        //ldstr				L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D"
	IL_0825:                                                                        //ldloc				V_3
	IL_0829:            Temp_157=a(L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_082e:                                                                        //ldc.i4				0x2004b
	IL_0833:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_0838:                                                                        //ldloc				V_3
	IL_083c:            Temp_158=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0841:            this->M_x1(V_2,Temp_156,Temp_157,safe_cast<System::Windows::Forms::Keys>(131147),Temp_158);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0846:                                                                        //ldloc.2
	IL_0847:            Temp_159=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_084c:            Temp_160=Temp_159->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0851:                                                                        //pop
	IL_0852:                                                                        //ldarg.0
	IL_0853:                                                                        //ldloc.2
	IL_0854:            Temp_161=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0859:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_085e:                                                                        //ldloc				V_3
	IL_0862:            Temp_162=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0867:                                                                        //ldc.i4				0x20043
	IL_086c:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0871:                                                                        //ldloc				V_3
	IL_0875:            Temp_163=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_087a:            this->M_x1(V_2,Temp_161,Temp_162,safe_cast<System::Windows::Forms::Keys>(131139),Temp_163);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_087f:                                                                        //ldloc.2
	IL_0880:            Temp_164=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0885:            Temp_165=Temp_164->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_088a:                                                                        //pop
	IL_088b:                                                                        //ldarg.0
	IL_088c:                                                                        //ldloc.2
	IL_088d:            Temp_166=Root::T_x106::M_x10();                             //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_0892:                                                                        //ldstr				L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439"
	IL_0897:                                                                        //ldloc				V_3
	IL_089b:            Temp_167=a(L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08a0:                                                                        //ldc.i4.s				112
	IL_08a2:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855"
	IL_08a7:                                                                        //ldloc				V_3
	IL_08ab:            Temp_168=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08b0:            this->M_x1(V_2,Temp_166,Temp_167,safe_cast<System::Windows::Forms::Keys>(112),Temp_168);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_08b5:                                                                        //ldarg.0
	IL_08b6:                                                                        //ldloc.2
	IL_08b7:            Temp_169=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_08bc:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_08c1:                                                                        //ldloc				V_3
	IL_08c5:            Temp_170=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08ca:                                                                        //ldc.i4.0
	IL_08cb:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_08d0:                                                                        //ldloc				V_3
	IL_08d4:            Temp_171=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08d9:            this->M_x1(V_2,Temp_169,Temp_170,safe_cast<System::Windows::Forms::Keys>(0),Temp_171);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_08de:                                                                        //ldarg.0
	IL_08df:                                                                        //ldloc.2
	IL_08e0:                                                                        //ldnull
	IL_08e1:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_08e6:                                                                        //ldloc				V_3
	IL_08ea:            Temp_172=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08ef:                                                                        //ldc.i4				0x20052
	IL_08f4:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_08f9:                                                                        //ldloc				V_3
	IL_08fd:            Temp_173=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0902:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_172,safe_cast<System::Windows::Forms::Keys>(131154),Temp_173);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0907:                                                                        //ldarg.0
	IL_0908:                                                                        //ldloc.2
	IL_0909:                                                                        //ldnull
	IL_090a:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_090f:                                                                        //ldloc				V_3
	IL_0913:            Temp_174=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0918:                                                                        //ldc.i4				0x2004d
	IL_091d:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_0922:                                                                        //ldloc				V_3
	IL_0926:            Temp_175=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_092b:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_174,safe_cast<System::Windows::Forms::Keys>(131149),Temp_175);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0930:                                                                        //ldloc.2
	IL_0931:            Temp_176=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0936:            Temp_177=Temp_176->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_093b:                                                                        //pop
	IL_093c:                                                                        //ldarg.0
	IL_093d:                                                                        //ldloc.2
	IL_093e:                                                                        //ldnull
	IL_093f:                                                                        //ldstr				L"\x731F\x4A21\x4B23\x5125\x0827\x0C29\x652B\x402D\x582F\x5731\x4633\x5F35\x4C37\x5F39\x583B\x1E3D\x0D3F\x2741\x2943\x2445\x2D47\x3849\x3F4B"
	IL_0944:                                                                        //ldloc				V_3
	IL_0948:            Temp_178=a(L"\x731F\x4A21\x4B23\x5125\x0827\x0C29\x652B\x402D\x582F\x5731\x4633\x5F35\x4C37\x5F39\x583B\x1E3D\x0D3F\x2741\x2943\x2445\x2D47\x3849\x3F4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_094d:                                                                        //ldc.i4				0x20049
	IL_0952:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x773D\x2E3F\x2A41\x2143\x3445\x2147\x3E49\x294B\x2A4D\x1D4F\x3751\x3953\x3455\x3D57\x2859\x2F5B"
	IL_0957:                                                                        //ldloc				V_3
	IL_095b:            Temp_179=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x773D\x2E3F\x2A41\x2143\x3445\x2147\x3E49\x294B\x2A4D\x1D4F\x3751\x3953\x3455\x3D57\x2859\x2F5B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0960:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_178,safe_cast<System::Windows::Forms::Keys>(131145),Temp_179);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0965:                                                                        //ldarg.0
	IL_0966:                                                                        //ldloc.2
	IL_0967:                                                                        //ldnull
	IL_0968:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x6E2B\x4F2D\x432F\x5731\x1433\x1035\x6C37\x4339\x4C3B\x5B3D"
	IL_096d:                                                                        //ldloc				V_3
	IL_0971:            Temp_180=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x6E2B\x4F2D\x432F\x5731\x1433\x1035\x6C37\x4339\x4C3B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0976:                                                                        //ldc.i4				0x20054
	IL_097b:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7C3D\x213F\x3141\x2143\x1245\x3147\x3A49\x294B"
	IL_0980:                                                                        //ldloc				V_3
	IL_0984:            Temp_181=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7C3D\x213F\x3141\x2143\x1245\x3147\x3A49\x294B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0989:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_180,safe_cast<System::Windows::Forms::Keys>(131156),Temp_181);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_098e:                                                                        //ldloc.1
	IL_098f:            Temp_182=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0994:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x642F\x4B31\x4433\x5335\x6A37\x5F39\x5A3B\x5B3D\x323F\x2741\x2A43\x2545\x2D47"
	IL_0999:                                                                        //ldloc				V_3
	IL_099d:            Temp_183=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x642F\x4B31\x4433\x5335\x6A37\x5F39\x5A3B\x5B3D\x323F\x2741\x2A43\x2545\x2D47",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09a2:            Temp_184=Temp_182->AddContextMenu(Temp_183);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_09a7:            V_2=Temp_184;                                               //stloc.2
	IL_09a8:                                                                        //ldarg.0
	IL_09a9:                                                                        //ldloc.2
	IL_09aa:            Temp_185=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_09af:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_09b4:                                                                        //ldloc				V_3
	IL_09b8:            Temp_186=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09bd:                                                                        //ldc.i4				0x40025
	IL_09c2:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_09c7:                                                                        //ldloc				V_3
	IL_09cb:            Temp_187=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09d0:            this->M_x1(V_2,Temp_185,Temp_186,safe_cast<System::Windows::Forms::Keys>(262181),Temp_187);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_09d5:                                                                        //ldarg.0
	IL_09d6:                                                                        //ldloc.2
	IL_09d7:            Temp_188=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_09dc:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_09e1:                                                                        //ldloc				V_3
	IL_09e5:            Temp_189=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09ea:                                                                        //ldc.i4				0x40027
	IL_09ef:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_09f4:                                                                        //ldloc				V_3
	IL_09f8:            Temp_190=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09fd:            this->M_x1(V_2,Temp_188,Temp_189,safe_cast<System::Windows::Forms::Keys>(262183),Temp_190);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0a02:                                                                        //ldloc.2
	IL_0a03:            Temp_191=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0a08:            Temp_192=Temp_191->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0a0d:                                                                        //pop
	IL_0a0e:                                                                        //ldarg.0
	IL_0a0f:                                                                        //ldloc.2
	IL_0a10:            Temp_193=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0a15:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0a1a:                                                                        //ldloc				V_3
	IL_0a1e:            Temp_194=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a23:                                                                        //ldc.i4				0x20043
	IL_0a28:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0a2d:                                                                        //ldloc				V_3
	IL_0a31:            Temp_195=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a36:            this->M_x1(V_2,Temp_193,Temp_194,safe_cast<System::Windows::Forms::Keys>(131139),Temp_195);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0a3b:                                                                        //ldloc.2
	IL_0a3c:            Temp_196=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0a41:            Temp_197=Temp_196->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0a46:                                                                        //pop
	IL_0a47:                                                                        //ldarg.0
	IL_0a48:                                                                        //ldloc.2
	IL_0a49:                                                                        //ldnull
	IL_0a4a:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x7A2D\x492F\x4231\x5133\x1635\x7C37\x5F39\x5F3B\x523D\x213F\x3041\x2543\x3245\x2147\x2549\x224B"
	IL_0a4f:                                                                        //ldloc				V_3
	IL_0a53:            Temp_198=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x7A2D\x492F\x4231\x5133\x1635\x7C37\x5F39\x5F3B\x523D\x213F\x3041\x2543\x3245\x2147\x2549\x224B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a58:                                                                        //ldc.i4				0x20054
	IL_0a5d:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x6A3D\x393F\x3241\x2143\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459"
	IL_0a62:                                                                        //ldloc				V_3
	IL_0a66:            Temp_199=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x6A3D\x393F\x3241\x2143\x0245\x2D47\x2949\x204B\x2F4D\x224F\x3351\x2053\x3F55\x3757\x3459",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a6b:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_198,safe_cast<System::Windows::Forms::Keys>(131156),Temp_199);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0a70:                                                                        //ldloc.1
	IL_0a71:            Temp_200=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0a76:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5731\x4033\x5E35\x5737\x5E39\x783B\x5B3D\x233F\x2E41\x2543\x3445\x2947\x3E49\x254B\x214D\x3E4F"
	IL_0a7b:                                                                        //ldloc				V_3
	IL_0a7f:            Temp_201=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5731\x4033\x5E35\x5737\x5E39\x783B\x5B3D\x233F\x2E41\x2543\x3445\x2947\x3E49\x254B\x214D\x3E4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a84:            Temp_202=Temp_200->AddContextMenu(Temp_201);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0a89:            V_2=Temp_202;                                               //stloc.2
	IL_0a8a:                                                                        //ldarg.0
	IL_0a8b:                                                                        //ldloc.2
	IL_0a8c:            Temp_203=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0a91:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0a96:                                                                        //ldloc				V_3
	IL_0a9a:            Temp_204=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a9f:                                                                        //ldc.i4				0x40025
	IL_0aa4:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0aa9:                                                                        //ldloc				V_3
	IL_0aad:            Temp_205=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ab2:            this->M_x1(V_2,Temp_203,Temp_204,safe_cast<System::Windows::Forms::Keys>(262181),Temp_205);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0ab7:                                                                        //ldarg.0
	IL_0ab8:                                                                        //ldloc.2
	IL_0ab9:            Temp_206=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0abe:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_0ac3:                                                                        //ldloc				V_3
	IL_0ac7:            Temp_207=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0acc:                                                                        //ldc.i4				0x40027
	IL_0ad1:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0ad6:                                                                        //ldloc				V_3
	IL_0ada:            Temp_208=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0adf:            this->M_x1(V_2,Temp_206,Temp_207,safe_cast<System::Windows::Forms::Keys>(262183),Temp_208);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0ae4:                                                                        //ldloc.2
	IL_0ae5:            Temp_209=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0aea:            Temp_210=Temp_209->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0aef:                                                                        //pop
	IL_0af0:                                                                        //ldarg.0
	IL_0af1:                                                                        //ldloc.2
	IL_0af2:            Temp_211=Root::T_x106::M_x9();                              //call				System::Drawing::Image^ Root::T_x106::M_x9()
	IL_0af7:                                                                        //ldstr				L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D"
	IL_0afc:                                                                        //ldloc				V_3
	IL_0b00:            Temp_212=a(L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b05:                                                                        //ldc.i4				0x2004b
	IL_0b0a:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_0b0f:                                                                        //ldloc				V_3
	IL_0b13:            Temp_213=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b18:            this->M_x1(V_2,Temp_211,Temp_212,safe_cast<System::Windows::Forms::Keys>(131147),Temp_213);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0b1d:                                                                        //ldloc.2
	IL_0b1e:            Temp_214=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0b23:            Temp_215=Temp_214->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0b28:                                                                        //pop
	IL_0b29:                                                                        //ldarg.0
	IL_0b2a:                                                                        //ldloc.2
	IL_0b2b:            Temp_216=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0b30:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0b35:                                                                        //ldloc				V_3
	IL_0b39:            Temp_217=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b3e:                                                                        //ldc.i4				0x20043
	IL_0b43:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0b48:                                                                        //ldloc				V_3
	IL_0b4c:            Temp_218=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b51:            this->M_x1(V_2,Temp_216,Temp_217,safe_cast<System::Windows::Forms::Keys>(131139),Temp_218);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0b56:                                                                        //ldloc.2
	IL_0b57:            Temp_219=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0b5c:            Temp_220=Temp_219->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0b61:                                                                        //pop
	IL_0b62:                                                                        //ldarg.0
	IL_0b63:                                                                        //ldloc.2
	IL_0b64:            Temp_221=Root::T_x106::M_x10();                             //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_0b69:                                                                        //ldstr				L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439"
	IL_0b6e:                                                                        //ldloc				V_3
	IL_0b72:            Temp_222=a(L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b77:                                                                        //ldc.i4.s				112
	IL_0b79:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855"
	IL_0b7e:                                                                        //ldloc				V_3
	IL_0b82:            Temp_223=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b87:            this->M_x1(V_2,Temp_221,Temp_222,safe_cast<System::Windows::Forms::Keys>(112),Temp_223);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0b8c:                                                                        //ldarg.0
	IL_0b8d:                                                                        //ldloc.2
	IL_0b8e:            Temp_224=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_0b93:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_0b98:                                                                        //ldloc				V_3
	IL_0b9c:            Temp_225=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ba1:                                                                        //ldc.i4.0
	IL_0ba2:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0ba7:                                                                        //ldloc				V_3
	IL_0bab:            Temp_226=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bb0:            this->M_x1(V_2,Temp_224,Temp_225,safe_cast<System::Windows::Forms::Keys>(0),Temp_226);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0bb5:                                                                        //ldarg.0
	IL_0bb6:                                                                        //ldloc.2
	IL_0bb7:                                                                        //ldnull
	IL_0bb8:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_0bbd:                                                                        //ldloc				V_3
	IL_0bc1:            Temp_227=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bc6:                                                                        //ldc.i4				0x20052
	IL_0bcb:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_0bd0:                                                                        //ldloc				V_3
	IL_0bd4:            Temp_228=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bd9:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_227,safe_cast<System::Windows::Forms::Keys>(131154),Temp_228);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0bde:                                                                        //ldarg.0
	IL_0bdf:                                                                        //ldloc.2
	IL_0be0:                                                                        //ldnull
	IL_0be1:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_0be6:                                                                        //ldloc				V_3
	IL_0bea:            Temp_229=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bef:                                                                        //ldc.i4				0x2004d
	IL_0bf4:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_0bf9:                                                                        //ldloc				V_3
	IL_0bfd:            Temp_230=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c02:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_229,safe_cast<System::Windows::Forms::Keys>(131149),Temp_230);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0c07:                                                                        //ldloc.1
	IL_0c08:            Temp_231=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0c0d:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5731\x4033\x5E35\x5737\x5E39\x6E3B\x5B3D\x263F\x2741\x3643\x2345\x2647\x2949\x294B"
	IL_0c12:                                                                        //ldloc				V_3
	IL_0c16:            Temp_232=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x7D2F\x5731\x4033\x5E35\x5737\x5E39\x6E3B\x5B3D\x263F\x2741\x3643\x2345\x2647\x2949\x294B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c1b:            Temp_233=Temp_231->AddContextMenu(Temp_232);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0c20:            V_2=Temp_233;                                               //stloc.2
	IL_0c21:                                                                        //ldarg.0
	IL_0c22:                                                                        //ldloc.2
	IL_0c23:            Temp_234=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0c28:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0c2d:                                                                        //ldloc				V_3
	IL_0c31:            Temp_235=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c36:                                                                        //ldc.i4				0x40025
	IL_0c3b:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0c40:                                                                        //ldloc				V_3
	IL_0c44:            Temp_236=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c49:            this->M_x1(V_2,Temp_234,Temp_235,safe_cast<System::Windows::Forms::Keys>(262181),Temp_236);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0c4e:                                                                        //ldarg.0
	IL_0c4f:                                                                        //ldloc.2
	IL_0c50:            Temp_237=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0c55:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_0c5a:                                                                        //ldloc				V_3
	IL_0c5e:            Temp_238=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c63:                                                                        //ldc.i4				0x40027
	IL_0c68:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0c6d:                                                                        //ldloc				V_3
	IL_0c71:            Temp_239=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c76:            this->M_x1(V_2,Temp_237,Temp_238,safe_cast<System::Windows::Forms::Keys>(262183),Temp_239);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0c7b:                                                                        //ldloc.2
	IL_0c7c:            Temp_240=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0c81:            Temp_241=Temp_240->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0c86:                                                                        //pop
	IL_0c87:                                                                        //ldarg.0
	IL_0c88:                                                                        //ldloc.2
	IL_0c89:            Temp_242=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0c8e:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0c93:                                                                        //ldloc				V_3
	IL_0c97:            Temp_243=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c9c:                                                                        //ldc.i4				0x20043
	IL_0ca1:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0ca6:                                                                        //ldloc				V_3
	IL_0caa:            Temp_244=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0caf:            this->M_x1(V_2,Temp_242,Temp_243,safe_cast<System::Windows::Forms::Keys>(131139),Temp_244);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0cb4:                                                                        //ldloc.2
	IL_0cb5:            Temp_245=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0cba:            Temp_246=Temp_245->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0cbf:                                                                        //pop
	IL_0cc0:                                                                        //ldarg.0
	IL_0cc1:                                                                        //ldloc.2
	IL_0cc2:                                                                        //ldnull
	IL_0cc3:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x632D\x552F\x4631\x5C33\x5935\x5C37\x1A39\x783B\x5B3D\x233F\x2E41\x2543\x3445\x2947\x3E49\x254B\x214D\x3E4F"
	IL_0cc8:                                                                        //ldloc				V_3
	IL_0ccc:            Temp_247=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x0A2B\x632D\x552F\x4631\x5C33\x5935\x5C37\x1A39\x783B\x5B3D\x233F\x2E41\x2543\x3445\x2947\x3E49\x254B\x214D\x3E4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cd1:                                                                        //ldc.i4.0
	IL_0cd2:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x733D\x253F\x3641\x2C43\x2945\x2C47\x0E49\x294B\x2D4D\x3C4F\x3351\x2653\x3755\x2C57\x3359\x335B\x305D"
	IL_0cd7:                                                                        //ldloc				V_3
	IL_0cdb:            Temp_248=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x733D\x253F\x3641\x2C43\x2945\x2C47\x0E49\x294B\x2D4D\x3C4F\x3351\x2653\x3755\x2C57\x3359\x335B\x305D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ce0:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_247,safe_cast<System::Windows::Forms::Keys>(0),Temp_248);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0ce5:                                                                        //ldloc.1
	IL_0ce6:            Temp_249=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0ceb:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x762F\x5B31\x5133\x5A35\x5C37\x7E39\x593B\x5D3D\x2C3F\x2341\x3643\x2745\x3C47\x2349\x234B\x204D"
	IL_0cf0:                                                                        //ldloc				V_3
	IL_0cf4:            Temp_250=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x762F\x5B31\x5133\x5A35\x5C37\x7E39\x593B\x5D3D\x2C3F\x2341\x3643\x2745\x3C47\x2349\x234B\x204D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cf9:            Temp_251=Temp_249->AddContextMenu(Temp_250);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0cfe:            V_2=Temp_251;                                               //stloc.2
	IL_0cff:                                                                        //ldarg.0
	IL_0d00:                                                                        //ldloc.2
	IL_0d01:            Temp_252=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0d06:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0d0b:                                                                        //ldloc				V_3
	IL_0d0f:            Temp_253=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d14:                                                                        //ldc.i4				0x40025
	IL_0d19:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0d1e:                                                                        //ldloc				V_3
	IL_0d22:            Temp_254=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d27:            this->M_x1(V_2,Temp_252,Temp_253,safe_cast<System::Windows::Forms::Keys>(262181),Temp_254);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0d2c:                                                                        //ldarg.0
	IL_0d2d:                                                                        //ldloc.2
	IL_0d2e:            Temp_255=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0d33:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_0d38:                                                                        //ldloc				V_3
	IL_0d3c:            Temp_256=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d41:                                                                        //ldc.i4				0x40027
	IL_0d46:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0d4b:                                                                        //ldloc				V_3
	IL_0d4f:            Temp_257=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d54:            this->M_x1(V_2,Temp_255,Temp_256,safe_cast<System::Windows::Forms::Keys>(262183),Temp_257);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0d59:                                                                        //ldloc.2
	IL_0d5a:            Temp_258=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0d5f:            Temp_259=Temp_258->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0d64:                                                                        //pop
	IL_0d65:                                                                        //ldarg.0
	IL_0d66:                                                                        //ldloc.2
	IL_0d67:            Temp_260=Root::T_x106::M_x9();                              //call				System::Drawing::Image^ Root::T_x106::M_x9()
	IL_0d6c:                                                                        //ldstr				L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D"
	IL_0d71:                                                                        //ldloc				V_3
	IL_0d75:            Temp_261=a(L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d7a:                                                                        //ldc.i4				0x2004b
	IL_0d7f:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_0d84:                                                                        //ldloc				V_3
	IL_0d88:            Temp_262=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d8d:            this->M_x1(V_2,Temp_260,Temp_261,safe_cast<System::Windows::Forms::Keys>(131147),Temp_262);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0d92:                                                                        //ldloc.2
	IL_0d93:            Temp_263=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0d98:            Temp_264=Temp_263->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0d9d:                                                                        //pop
	IL_0d9e:                                                                        //ldarg.0
	IL_0d9f:                                                                        //ldloc.2
	IL_0da0:            Temp_265=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0da5:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0daa:                                                                        //ldloc				V_3
	IL_0dae:            Temp_266=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0db3:                                                                        //ldc.i4				0x20043
	IL_0db8:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0dbd:                                                                        //ldloc				V_3
	IL_0dc1:            Temp_267=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dc6:            this->M_x1(V_2,Temp_265,Temp_266,safe_cast<System::Windows::Forms::Keys>(131139),Temp_267);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0dcb:                                                                        //ldloc.2
	IL_0dcc:            Temp_268=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0dd1:            Temp_269=Temp_268->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0dd6:                                                                        //pop
	IL_0dd7:                                                                        //ldarg.0
	IL_0dd8:                                                                        //ldloc.2
	IL_0dd9:            Temp_270=Root::T_x106::M_x10();                             //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_0dde:                                                                        //ldstr				L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439"
	IL_0de3:                                                                        //ldloc				V_3
	IL_0de7:            Temp_271=a(L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dec:                                                                        //ldc.i4.s				112
	IL_0dee:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855"
	IL_0df3:                                                                        //ldloc				V_3
	IL_0df7:            Temp_272=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dfc:            this->M_x1(V_2,Temp_270,Temp_271,safe_cast<System::Windows::Forms::Keys>(112),Temp_272);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0e01:                                                                        //ldarg.0
	IL_0e02:                                                                        //ldloc.2
	IL_0e03:            Temp_273=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_0e08:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_0e0d:                                                                        //ldloc				V_3
	IL_0e11:            Temp_274=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e16:                                                                        //ldc.i4.0
	IL_0e17:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0e1c:                                                                        //ldloc				V_3
	IL_0e20:            Temp_275=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e25:            this->M_x1(V_2,Temp_273,Temp_274,safe_cast<System::Windows::Forms::Keys>(0),Temp_275);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0e2a:                                                                        //ldarg.0
	IL_0e2b:                                                                        //ldloc.2
	IL_0e2c:                                                                        //ldnull
	IL_0e2d:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_0e32:                                                                        //ldloc				V_3
	IL_0e36:            Temp_276=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e3b:                                                                        //ldc.i4				0x20052
	IL_0e40:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_0e45:                                                                        //ldloc				V_3
	IL_0e49:            Temp_277=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e4e:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_276,safe_cast<System::Windows::Forms::Keys>(131154),Temp_277);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0e53:                                                                        //ldarg.0
	IL_0e54:                                                                        //ldloc.2
	IL_0e55:                                                                        //ldnull
	IL_0e56:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_0e5b:                                                                        //ldloc				V_3
	IL_0e5f:            Temp_278=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e64:                                                                        //ldc.i4				0x2004d
	IL_0e69:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_0e6e:                                                                        //ldloc				V_3
	IL_0e72:            Temp_279=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e77:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_278,safe_cast<System::Windows::Forms::Keys>(131149),Temp_279);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0e7c:                                                                        //ldloc.2
	IL_0e7d:            Temp_280=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0e82:            Temp_281=Temp_280->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0e87:                                                                        //pop
	IL_0e88:                                                                        //ldarg.0
	IL_0e89:                                                                        //ldloc.2
	IL_0e8a:                                                                        //ldnull
	IL_0e8b:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x6A2B\x472D\x552F\x5E31\x5033\x1635\x1E37\x6E39\x453B\x4E3D\x253F"
	IL_0e90:                                                                        //ldloc				V_3
	IL_0e94:            Temp_282=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x6A2B\x472D\x552F\x5E31\x5033\x1635\x1E37\x6E39\x453B\x4E3D\x253F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e99:                                                                        //ldc.i4				0x20054
	IL_0e9e:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x783D\x293F\x2741\x2843\x2245\x1C47\x3349\x3C4B\x2B4D"
	IL_0ea3:                                                                        //ldloc				V_3
	IL_0ea7:            Temp_283=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x783D\x293F\x2741\x2843\x2245\x1C47\x3349\x3C4B\x2B4D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0eac:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_282,safe_cast<System::Windows::Forms::Keys>(131156),Temp_283);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0eb1:                                                                        //ldloc.1
	IL_0eb2:            Temp_284=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_0eb7:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x602F\x4031\x5B33\x4635\x5D37\x4839\x483B\x473D\x043F\x2741\x2743\x2A45\x2947\x3849\x2D4B\x3A4D\x394F\x3D51\x3A53"
	IL_0ebc:                                                                        //ldloc				V_3
	IL_0ec0:            Temp_285=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x602F\x4031\x5B33\x4635\x5D37\x4839\x483B\x473D\x043F\x2741\x2743\x2A45\x2947\x3849\x2D4B\x3A4D\x394F\x3D51\x3A53",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ec5:            Temp_286=Temp_284->AddContextMenu(Temp_285);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_0eca:            V_2=Temp_286;                                               //stloc.2
	IL_0ecb:                                                                        //ldarg.0
	IL_0ecc:                                                                        //ldloc.2
	IL_0ecd:            Temp_287=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_0ed2:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_0ed7:                                                                        //ldloc				V_3
	IL_0edb:            Temp_288=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ee0:                                                                        //ldc.i4				0x40025
	IL_0ee5:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_0eea:                                                                        //ldloc				V_3
	IL_0eee:            Temp_289=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ef3:            this->M_x1(V_2,Temp_287,Temp_288,safe_cast<System::Windows::Forms::Keys>(262181),Temp_289);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0ef8:                                                                        //ldarg.0
	IL_0ef9:                                                                        //ldloc.2
	IL_0efa:            Temp_290=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_0eff:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_0f04:                                                                        //ldloc				V_3
	IL_0f08:            Temp_291=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f0d:                                                                        //ldc.i4				0x40027
	IL_0f12:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_0f17:                                                                        //ldloc				V_3
	IL_0f1b:            Temp_292=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f20:            this->M_x1(V_2,Temp_290,Temp_291,safe_cast<System::Windows::Forms::Keys>(262183),Temp_292);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0f25:                                                                        //ldloc.2
	IL_0f26:            Temp_293=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0f2b:            Temp_294=Temp_293->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0f30:                                                                        //pop
	IL_0f31:                                                                        //ldarg.0
	IL_0f32:                                                                        //ldloc.2
	IL_0f33:            Temp_295=Root::T_x106::M_x9();                              //call				System::Drawing::Image^ Root::T_x106::M_x9()
	IL_0f38:                                                                        //ldstr				L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D"
	IL_0f3d:                                                                        //ldloc				V_3
	IL_0f41:            Temp_296=a(L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f46:                                                                        //ldc.i4				0x2004b
	IL_0f4b:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_0f50:                                                                        //ldloc				V_3
	IL_0f54:            Temp_297=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f59:            this->M_x1(V_2,Temp_295,Temp_296,safe_cast<System::Windows::Forms::Keys>(131147),Temp_297);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0f5e:                                                                        //ldloc.2
	IL_0f5f:            Temp_298=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0f64:            Temp_299=Temp_298->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0f69:                                                                        //pop
	IL_0f6a:                                                                        //ldarg.0
	IL_0f6b:                                                                        //ldloc.2
	IL_0f6c:            Temp_300=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_0f71:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_0f76:                                                                        //ldloc				V_3
	IL_0f7a:            Temp_301=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f7f:                                                                        //ldc.i4				0x20043
	IL_0f84:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_0f89:                                                                        //ldloc				V_3
	IL_0f8d:            Temp_302=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f92:            this->M_x1(V_2,Temp_300,Temp_301,safe_cast<System::Windows::Forms::Keys>(131139),Temp_302);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0f97:                                                                        //ldloc.2
	IL_0f98:            Temp_303=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0f9d:            Temp_304=Temp_303->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_0fa2:                                                                        //pop
	IL_0fa3:                                                                        //ldarg.0
	IL_0fa4:                                                                        //ldloc.2
	IL_0fa5:            Temp_305=Root::T_x106::M_x10();                             //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_0faa:                                                                        //ldstr				L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439"
	IL_0faf:                                                                        //ldloc				V_3
	IL_0fb3:            Temp_306=a(L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fb8:                                                                        //ldc.i4.s				112
	IL_0fba:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855"
	IL_0fbf:                                                                        //ldloc				V_3
	IL_0fc3:            Temp_307=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fc8:            this->M_x1(V_2,Temp_305,Temp_306,safe_cast<System::Windows::Forms::Keys>(112),Temp_307);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0fcd:                                                                        //ldarg.0
	IL_0fce:                                                                        //ldloc.2
	IL_0fcf:            Temp_308=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_0fd4:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_0fd9:                                                                        //ldloc				V_3
	IL_0fdd:            Temp_309=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fe2:                                                                        //ldc.i4.0
	IL_0fe3:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_0fe8:                                                                        //ldloc				V_3
	IL_0fec:            Temp_310=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ff1:            this->M_x1(V_2,Temp_308,Temp_309,safe_cast<System::Windows::Forms::Keys>(0),Temp_310);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_0ff6:                                                                        //ldarg.0
	IL_0ff7:                                                                        //ldloc.2
	IL_0ff8:                                                                        //ldnull
	IL_0ff9:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_0ffe:                                                                        //ldloc				V_3
	IL_1002:            Temp_311=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1007:                                                                        //ldc.i4				0x20052
	IL_100c:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_1011:                                                                        //ldloc				V_3
	IL_1015:            Temp_312=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_101a:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_311,safe_cast<System::Windows::Forms::Keys>(131154),Temp_312);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_101f:                                                                        //ldarg.0
	IL_1020:                                                                        //ldloc.2
	IL_1021:                                                                        //ldnull
	IL_1022:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_1027:                                                                        //ldloc				V_3
	IL_102b:            Temp_313=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1030:                                                                        //ldc.i4				0x2004d
	IL_1035:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_103a:                                                                        //ldloc				V_3
	IL_103e:            Temp_314=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1043:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_313,safe_cast<System::Windows::Forms::Keys>(131149),Temp_314);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1048:                                                                        //ldloc.2
	IL_1049:            Temp_315=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_104e:            Temp_316=Temp_315->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_1053:                                                                        //pop
	IL_1054:                                                                        //ldarg.0
	IL_1055:                                                                        //ldloc.2
	IL_1056:                                                                        //ldnull
	IL_1057:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x7C2B\x5C2D\x5F2F\x4231\x5133\x4435\x4C37\x4339\x1C3B\x183D\x143F\x3B41\x3443\x2345"
	IL_105c:                                                                        //ldloc				V_3
	IL_1060:            Temp_317=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x7C2B\x5C2D\x5F2F\x4231\x5133\x4435\x4C37\x4339\x1C3B\x183D\x143F\x3B41\x3443\x2345",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1065:                                                                        //ldc.i4				0x20054
	IL_106a:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x6E3D\x323F\x2D41\x3443\x2345\x3A47\x3E49\x354B\x1A4D\x294F\x2251\x3153"
	IL_106f:                                                                        //ldloc				V_3
	IL_1073:            Temp_318=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x6E3D\x323F\x2D41\x3443\x2345\x3A47\x3E49\x354B\x1A4D\x294F\x2251\x3153",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1078:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_317,safe_cast<System::Windows::Forms::Keys>(131156),Temp_318);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_107d:                                                                        //ldloc.1
	IL_107e:            Temp_319=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_1083:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x752F\x4431\x5133\x5835\x4C37\x7E39\x593B\x5D3D\x2C3F\x2341\x3643\x2745\x3C47\x2349\x234B\x204D"
	IL_1088:                                                                        //ldloc				V_3
	IL_108c:            Temp_320=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x752F\x4431\x5133\x5835\x4C37\x7E39\x593B\x5D3D\x2C3F\x2341\x3643\x2745\x3C47\x2349\x234B\x204D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1091:            Temp_321=Temp_319->AddContextMenu(Temp_320);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_1096:            V_2=Temp_321;                                               //stloc.2
	IL_1097:                                                                        //ldarg.0
	IL_1098:                                                                        //ldloc.2
	IL_1099:            Temp_322=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_109e:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_10a3:                                                                        //ldloc				V_3
	IL_10a7:            Temp_323=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10ac:                                                                        //ldc.i4				0x40025
	IL_10b1:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_10b6:                                                                        //ldloc				V_3
	IL_10ba:            Temp_324=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10bf:            this->M_x1(V_2,Temp_322,Temp_323,safe_cast<System::Windows::Forms::Keys>(262181),Temp_324);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_10c4:                                                                        //ldarg.0
	IL_10c5:                                                                        //ldloc.2
	IL_10c6:            Temp_325=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_10cb:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_10d0:                                                                        //ldloc				V_3
	IL_10d4:            Temp_326=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10d9:                                                                        //ldc.i4				0x40027
	IL_10de:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_10e3:                                                                        //ldloc				V_3
	IL_10e7:            Temp_327=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10ec:            this->M_x1(V_2,Temp_325,Temp_326,safe_cast<System::Windows::Forms::Keys>(262183),Temp_327);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_10f1:                                                                        //ldloc.2
	IL_10f2:            Temp_328=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_10f7:            Temp_329=Temp_328->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_10fc:                                                                        //pop
	IL_10fd:                                                                        //ldarg.0
	IL_10fe:                                                                        //ldloc.2
	IL_10ff:            Temp_330=Root::T_x106::M_x9();                              //call				System::Drawing::Image^ Root::T_x106::M_x9()
	IL_1104:                                                                        //ldstr				L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D"
	IL_1109:                                                                        //ldloc				V_3
	IL_110d:            Temp_331=a(L"\x741F\x4D21\x4323\x4125\x4427\x4F29\x0C2B\x6C2D\x5F2F\x5D31\x5F33\x5B35\x5937\x4839\x1A3B\x553D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1112:                                                                        //ldc.i4				0x2004b
	IL_1117:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F"
	IL_111c:                                                                        //ldloc				V_3
	IL_1120:            Temp_332=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6235\x5737\x5D39\x5B3B\x523D\x253F\x0041\x2B43\x2945\x2347\x2749\x2D4B\x3C4D\x3B4F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1125:            this->M_x1(V_2,Temp_330,Temp_331,safe_cast<System::Windows::Forms::Keys>(131147),Temp_332);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_112a:                                                                        //ldloc.2
	IL_112b:            Temp_333=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_1130:            Temp_334=Temp_333->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_1135:                                                                        //pop
	IL_1136:                                                                        //ldarg.0
	IL_1137:                                                                        //ldloc.2
	IL_1138:            Temp_335=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_113d:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_1142:                                                                        //ldloc				V_3
	IL_1146:            Temp_336=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_114b:                                                                        //ldc.i4				0x20043
	IL_1150:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_1155:                                                                        //ldloc				V_3
	IL_1159:            Temp_337=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_115e:            this->M_x1(V_2,Temp_335,Temp_336,safe_cast<System::Windows::Forms::Keys>(131139),Temp_337);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1163:                                                                        //ldloc.2
	IL_1164:            Temp_338=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_1169:            Temp_339=Temp_338->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_116e:                                                                        //pop
	IL_116f:                                                                        //ldarg.0
	IL_1170:                                                                        //ldloc.2
	IL_1171:            Temp_340=Root::T_x106::M_x10();                             //call				System::Drawing::Image^ Root::T_x106::M_x10()
	IL_1176:                                                                        //ldstr				L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439"
	IL_117b:                                                                        //ldloc				V_3
	IL_117f:            Temp_341=a(L"\x061F\x6621\x4B23\x4525\x5D27\x4729\x492B\x402D\x442F\x5331\x4033\x5F35\x5737\x5439",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1184:                                                                        //ldc.i4.s				112
	IL_1186:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855"
	IL_118b:                                                                        //ldloc				V_3
	IL_118f:            Temp_342=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x2F3F\x2141\x3143\x2B45\x2D47\x2449\x384B\x2F4D\x244F\x3B51\x3B53\x3855",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1194:            this->M_x1(V_2,Temp_340,Temp_341,safe_cast<System::Windows::Forms::Keys>(112),Temp_342);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1199:                                                                        //ldarg.0
	IL_119a:                                                                        //ldloc.2
	IL_119b:            Temp_343=Root::T_x106::M_x13();                             //call				System::Drawing::Image^ Root::T_x106::M_x13()
	IL_11a0:                                                                        //ldstr				L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37"
	IL_11a5:                                                                        //ldloc				V_3
	IL_11a9:            Temp_344=a(L"\x061F\x6621\x4D23\x5525\x4927\x5929\x5F2B\x4B2D\x5D2F\x5031\x5833\x5335\x4A37",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11ae:                                                                        //ldc.i4.0
	IL_11af:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653"
	IL_11b4:                                                                        //ldloc				V_3
	IL_11b8:            Temp_345=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7A3D\x293F\x3141\x2543\x3545\x3B47\x2F49\x214B\x2C4D\x3C4F\x3751\x2653",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11bd:            this->M_x1(V_2,Temp_343,Temp_344,safe_cast<System::Windows::Forms::Keys>(0),Temp_345);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_11c2:                                                                        //ldarg.0
	IL_11c3:                                                                        //ldloc.2
	IL_11c4:                                                                        //ldnull
	IL_11c5:                                                                        //ldstr				L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F"
	IL_11ca:                                                                        //ldloc				V_3
	IL_11ce:            Temp_346=a(L"\x061F\x6321\x4A23\x4725\x4427\x5329\x562B\x4B2D\x422F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11d3:                                                                        //ldc.i4				0x20052
	IL_11d8:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B"
	IL_11dd:                                                                        //ldloc				V_3
	IL_11e1:            Temp_347=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5037\x5539\x4B3B\x7F3D\x2E3F\x2341\x2843\x3F45\x3247\x2F49\x3E4B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11e6:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_346,safe_cast<System::Windows::Forms::Keys>(131154),Temp_347);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_11eb:                                                                        //ldarg.0
	IL_11ec:                                                                        //ldloc.2
	IL_11ed:                                                                        //ldnull
	IL_11ee:                                                                        //ldstr				L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835"
	IL_11f3:                                                                        //ldloc				V_3
	IL_11f7:            Temp_348=a(L"\x731F\x4721\x4523\x5425\x4B27\x4229\x0C2B\x082D\x7D2F\x6131\x7033\x7835",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11fc:                                                                        //ldc.i4				0x2004d
	IL_1201:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647"
	IL_1206:                                                                        //ldloc				V_3
	IL_120a:            Temp_349=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x6535\x5D37\x5B39\x4E3B\x5D3D\x283F\x0F41\x3743\x2245\x2647",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_120f:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_348,safe_cast<System::Windows::Forms::Keys>(131149),Temp_349);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1214:                                                                        //ldloc.2
	IL_1215:            Temp_350=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_121a:            Temp_351=Temp_350->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_121f:                                                                        //pop
	IL_1220:                                                                        //ldarg.0
	IL_1221:                                                                        //ldloc.2
	IL_1222:                                                                        //ldnull
	IL_1223:                                                                        //ldstr				L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x692B\x582D\x552F\x5C31\x4033\x1635\x1E37\x6E39\x453B\x4E3D\x253F"
	IL_1228:                                                                        //ldloc				V_3
	IL_122c:            Temp_352=a(L"\x671F\x4D21\x0423\x7225\x4727\x0A29\x692B\x582D\x552F\x5C31\x4033\x1635\x1E37\x6E39\x453B\x4E3D\x253F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1231:                                                                        //ldc.i4				0x20054
	IL_1236:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7B3D\x363F\x2741\x2A43\x3245\x1C47\x3349\x3C4B\x2B4D"
	IL_123b:                                                                        //ldloc				V_3
	IL_123f:            Temp_353=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7135\x5737\x6E39\x533B\x7B3D\x363F\x2741\x2A43\x3245\x1C47\x3349\x3C4B\x2B4D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1244:            this->M_x1(V_2,safe_cast<System::Drawing::Image^>(nullptr),Temp_352,safe_cast<System::Windows::Forms::Keys>(131156),Temp_353);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1249:                                                                        //ldloc.1
	IL_124a:            Temp_354=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_124f:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x722F\x5331\x4733\x5335\x6C37\x4339\x4C3B\x5B3D"
	IL_1254:                                                                        //ldloc				V_3
	IL_1258:            Temp_355=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x722F\x5331\x4733\x5335\x6C37\x4339\x4C3B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_125d:            Temp_356=Temp_354->AddContextMenu(Temp_355);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_1262:            V_2=Temp_356;                                               //stloc.2
	IL_1263:                                                                        //ldarg.0
	IL_1264:                                                                        //ldloc.2
	IL_1265:            Temp_357=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_126a:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_126f:                                                                        //ldloc				V_3
	IL_1273:            Temp_358=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1278:                                                                        //ldc.i4				0x40025
	IL_127d:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_1282:                                                                        //ldloc				V_3
	IL_1286:            Temp_359=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_128b:            this->M_x1(V_2,Temp_357,Temp_358,safe_cast<System::Windows::Forms::Keys>(262181),Temp_359);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_1290:                                                                        //ldarg.0
	IL_1291:                                                                        //ldloc.2
	IL_1292:            Temp_360=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_1297:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_129c:                                                                        //ldloc				V_3
	IL_12a0:            Temp_361=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12a5:                                                                        //ldc.i4				0x40027
	IL_12aa:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_12af:                                                                        //ldloc				V_3
	IL_12b3:            Temp_362=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12b8:            this->M_x1(V_2,Temp_360,Temp_361,safe_cast<System::Windows::Forms::Keys>(262183),Temp_362);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_12bd:                                                                        //ldloc.2
	IL_12be:            Temp_363=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_12c3:            Temp_364=Temp_363->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_12c8:                                                                        //pop
	IL_12c9:                                                                        //ldarg.0
	IL_12ca:                                                                        //ldloc.2
	IL_12cb:            Temp_365=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_12d0:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_12d5:                                                                        //ldloc				V_3
	IL_12d9:            Temp_366=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12de:                                                                        //ldc.i4				0x20043
	IL_12e3:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_12e8:                                                                        //ldloc				V_3
	IL_12ec:            Temp_367=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12f1:            this->M_x1(V_2,Temp_365,Temp_366,safe_cast<System::Windows::Forms::Keys>(131139),Temp_367);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_12f6:                                                                        //ldloc.1
	IL_12f7:            Temp_368=V_1->CommandBars;                                  //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_12fc:                                                                        //ldstr				L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x742F\x5731\x4633\x5F35\x4E37\x5F39\x583B\x6A3D\x393F\x3241\x2143"
	IL_1301:                                                                        //ldloc				V_3
	IL_1305:            Temp_369=a(L"\x621F\x5021\x4B23\x5125\x5B27\x4F29\x5E2B\x002D\x742F\x5731\x4633\x5F35\x4E37\x5F39\x583B\x6A3D\x393F\x3241\x2143",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_130a:            Temp_370=Temp_368->AddContextMenu(Temp_369);                //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::AddContextMenu(System::String^)
	IL_130f:            V_2=Temp_370;                                               //stloc.2
	IL_1310:                                                                        //ldarg.0
	IL_1311:                                                                        //ldloc.2
	IL_1312:            Temp_371=Root::T_x106::M_x11();                             //call				System::Drawing::Image^ Root::T_x106::M_x11()
	IL_1317:                                                                        //ldstr				L"\x061F\x6021\x4523\x4525\x4327"
	IL_131c:                                                                        //ldloc				V_3
	IL_1320:            Temp_372=a(L"\x061F\x6021\x4523\x4525\x4327",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1325:                                                                        //ldc.i4				0x40025
	IL_132a:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149"
	IL_132f:                                                                        //ldloc				V_3
	IL_1333:            Temp_373=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0643\x2745\x2B47\x2149",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1338:            this->M_x1(V_2,Temp_371,Temp_372,safe_cast<System::Windows::Forms::Keys>(262181),Temp_373);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_133d:                                                                        //ldarg.0
	IL_133e:                                                                        //ldloc.2
	IL_133f:            Temp_374=Root::T_x106::M_x15();                             //call				System::Drawing::Image^ Root::T_x106::M_x15()
	IL_1344:                                                                        //ldstr				L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D"
	IL_1349:                                                                        //ldloc				V_3
	IL_134d:            Temp_375=a(L"\x061F\x6421\x4B23\x5425\x5F27\x4B29\x5E2B\x4A2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1352:                                                                        //ldc.i4				0x40027
	IL_1357:                                                                        //ldstr				L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F"
	IL_135c:                                                                        //ldloc				V_3
	IL_1360:            Temp_376=a(L"\x611F\x5121\x5723\x4325\x4527\x4829\x402B\x572D\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x073F\x2D41\x0243\x2945\x3A47\x3D49\x2D4B\x3C4D\x344F",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1365:            this->M_x1(V_2,Temp_374,Temp_375,safe_cast<System::Windows::Forms::Keys>(262183),Temp_376);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_136a:                                                                        //ldloc.2
	IL_136b:            Temp_377=V_2->Items;                                        //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_1370:            Temp_378=Temp_377->AddSeparator();                          //callvirt				Reflector::ICommandBarSeparator^ Reflector::ICommandBarItemCollection::AddSeparator()
	IL_1375:                                                                        //pop
	IL_1376:                                                                        //ldarg.0
	IL_1377:                                                                        //ldloc.2
	IL_1378:            Temp_379=Root::T_x106::M_x19();                             //call				System::Drawing::Image^ Root::T_x106::M_x19()
	IL_137d:                                                                        //ldstr				L"\x061F\x6121\x4B23\x5625\x5127"
	IL_1382:                                                                        //ldloc				V_3
	IL_1386:            Temp_380=a(L"\x061F\x6121\x4B23\x5625\x5127",V_3);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_138b:                                                                        //ldc.i4				0x20043
	IL_1390:                                                                        //ldstr				L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B"
	IL_1395:                                                                        //ldloc				V_3
	IL_1399:            Temp_381=a(L"\x611F\x4121\x5023\x4F25\x5E27\x4F29\x652B\x5A2D\x552F\x5F31\x1A33\x7535\x5737\x4A39\x453B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_139e:            this->M_x1(V_2,Temp_379,Temp_380,safe_cast<System::Windows::Forms::Keys>(131139),Temp_381);//call				void Root::T_x25::M_x1(Reflector::ICommandBar^,System::Drawing::Image^,System::String^,System::Windows::Forms::Keys,System::String^)
	IL_13a3:            return;                                                     //ret

}
inline void Root::T_x25::M_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IServiceProvider^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Collections::ArrayList^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Collections::ArrayList^ Temp_5 = nullptr;
	System::Object^ Temp_6 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_7 = nullptr;
	System::Collections::IEnumerator^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_11 = nullptr;
	System::Collections::IEnumerator^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::Object^ Temp_14 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_15 = nullptr;
	System::Collections::IEnumerator^ Temp_16 = nullptr;
	Root::T_x19^ Temp_17 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_18 = nullptr;
	System::Collections::IEnumerator^ Temp_19 = nullptr;
	System::Collections::ArrayList^ Temp_20 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_21 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Boolean Temp_24 = false;
	System::Object^ Temp_25 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_26 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_27 = nullptr;
	Root::T_x19^ Temp_28 = nullptr;
	Reflector::CodeModel::IModuleCollection^ Temp_29 = nullptr;
	System::Collections::IEnumerator^ Temp_30 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_31 = nullptr;
	System::String^ Temp_32 = nullptr;
	Reflector::CodeModel::INamespace^ Temp_33 = nullptr;
	System::Boolean Temp_34 = false;
	System::Object^ Temp_35 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_36 = nullptr;
	System::Int32 Temp_37 = 0;
	System::Boolean Temp_38 = false;
	System::Object^ Temp_39 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_40 = nullptr;
	System::Collections::IEnumerator^ Temp_41 = nullptr;
	System::Boolean Temp_42 = false;
	System::Object^ Temp_43 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_44 = nullptr;
	System::Int32 Temp_45 = 0;
	Reflector::CodeModel::IAssemblyCollection^ Temp_46 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_47 = nullptr;
	System::Collections::ArrayList^ Temp_48 = nullptr;
	System::Collections::IEnumerator^ Temp_49 = nullptr;
	System::Boolean Temp_50 = false;
	System::Object^ Temp_51 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_52 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_53 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_54 = nullptr;
	System::Int32 Temp_55 = 0;
	System::Collections::ArrayList^ Temp_56 = nullptr;
	System::Int32 Temp_57 = 0;
	System::Collections::IEnumerator^ Temp_58 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_59 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::String^ Temp_62 = nullptr;
	System::Int32 Temp_63 = 0;
	System::Boolean Temp_64 = false;
	System::Object^ Temp_65 = nullptr;
	System::String^ Temp_66 = nullptr;
	Root::T_x41^ Temp_67 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_68 = nullptr;
	System::Int32 Temp_69 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_70 = nullptr;
	Root::T_x41^ Temp_71 = nullptr;
	Reflector::CodeModel::ITypeDeclarationCollection^ Temp_72 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_73 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_74 = nullptr;
	System::Int32 Temp_75 = 0;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Reflector::CodeModel::IAssembly^ V_2 = nullptr;
	System::Boolean V_3 = false;
	Reflector::CodeModel::IAssembly^ V_4 = nullptr;
	Root::T_x19^ V_5 = nullptr;
	Reflector::CodeModel::IModule^ V_6 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	Root::T_x41^ V_9 = nullptr;
	Reflector::CodeModel::INamespace^ V_10 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	Reflector::CodeModel::IAssembly^ V_13 = nullptr;
	System::Boolean V_14 = false;
	Reflector::CodeModel::IAssembly^ V_15 = nullptr;
	Root::T_x19^ V_16 = nullptr;
	Reflector::CodeModel::IModule^ V_17 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_18 = nullptr;
	Reflector::CodeModel::INamespace^ V_19 = nullptr;
	Root::T_x41^ V_20 = nullptr;
	System::Int32 V_21 = 0;
	System::Collections::IEnumerator^ V_22 = nullptr;
	System::IDisposable^ V_23 = nullptr;
	System::Collections::IEnumerator^ V_24 = nullptr;
	System::Int32 V_25 = 0;
	//method body ------- 
	IL_0000:            goto IL_0096;                                               //br				IL_0096
	IL_0005:                                                                        //ldloc				V_25
	IL_0009:            switch(V_25){case 0:goto IL_0a2e;case 1:goto IL_03e2;case 2:goto IL_0b59;case 3:goto IL_0ba8;case 4:goto IL_079a;case 5:goto IL_0452;case 6:goto IL_01e4;case 7:goto IL_09fa;case 8:goto IL_09b1;case 9:goto IL_0435;case 10:goto IL_0479;case 11:goto IL_099e;case 12:goto IL_0a1b;case 13:goto IL_0780;case 14:goto IL_09e7;case 15:goto IL_0bd8;case 16:goto IL_09c6;case 17:goto IL_0d0a;case 18:goto IL_0b47;case 19:goto IL_0bc1;case 20:goto IL_048e;case 21:goto IL_00cd;case 22:goto IL_0414;case 23:goto IL_0b94;case 24:goto IL_0d20;case 25:goto IL_0d57;case 26:goto IL_0ce1;case 27:goto IL_0b81;case 28:goto IL_0760;case 29:goto IL_07ce;case 30:goto IL_0a43;case 31:goto IL_0d3e;case 32:goto IL_0cf4;case 33:goto IL_020c;};//switch				(IL_0a2e,IL_03e2,IL_0b59,IL_0ba8,IL_079a,IL_0452,IL_01e4,IL_09fa,IL_09b1,IL_0435,IL_0479,IL_099e,IL_0a1b,IL_0780,IL_09e7,IL_0bd8,IL_09c6,IL_0d0a,IL_0b47,IL_0bc1,IL_048e,IL_00cd,IL_0414,IL_0b94,IL_0d20,IL_0d57,IL_0ce1,IL_0b81,IL_0760,IL_07ce,IL_0a43,IL_0d3e,IL_0cf4,IL_020c)
	IL_0096:                                                                        //ldarg.0
	IL_0097:            Temp_0=this->F_x12;                                         //ldfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_009c:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_00a1:            Temp_1=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_00a6:            Temp_2=Temp_0->GetService(Temp_1);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_00ab:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_00b0:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_2);//stloc.0
	IL_00b1:                                                                        //ldarg.0
	IL_00b2:            Temp_3=this->F_x9;                                          //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_00b7:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Collections::ArrayList::get_Count()
	IL_00bc:                                                                        //ldc.i4.1
	IL_00bd:                                                                        //sub
	IL_00be:            V_1=(Temp_4 - 1);                                           //stloc.1
	IL_00bf:                                                                        //ldc.i4				0x15
	IL_00c4:            V_25=21;                                                    //stloc				V_25
	IL_00c8:            /*goto IL_0005;*/goto IL_00cd;                              //br				IL_0005
	IL_00cd:            goto IL_0a20;                                               //br				IL_0a20
	IL_00CD01:          try{
	IL_00d2:                                                                        //ldc.i4				0x1
	IL_00d7:            V_25=1;                                                     //stloc				V_25
	IL_00db:            /*goto IL_00df;*/goto IL_00dd;                              //br.s				IL_00df
	IL_00dd:            goto IL_0104;                                               //br.s				IL_0104
	IL_00df:                                                                        //ldloc				V_25
	IL_00e3:            switch(V_25){case 0:goto IL_0125;case 1:goto IL_00dd;case 2:goto IL_0151;case 3:goto IL_0174;case 4:goto IL_0111;case 5:goto IL_0164;case 6:goto IL_0140;};//switch				(IL_0125,IL_00dd,IL_0151,IL_0174,IL_0111,IL_0164,IL_0140)
	IL_0104:            goto IL_0106;                                               //br.s				IL_0106
	IL_0106:                                                                        //ldc.i4				0x4
	IL_010b:            V_25=4;                                                     //stloc				V_25
	IL_010f:            /*goto IL_00df;*/goto IL_0111;                              //br.s				IL_00df
	IL_0111:                                                                        //ldloc.s				V_22
	IL_0113:            Temp_34=V_22->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0118:            if(Temp_34)goto IL_0127;                                    //brtrue.s				IL_0127
	IL_011a:                                                                        //ldc.i4				0x0
	IL_011f:            V_25=0;                                                     //stloc				V_25
	IL_0123:            /*goto IL_00df;*/goto IL_0125;                              //br.s				IL_00df
	IL_0125:            goto IL_0166;                                               //br.s				IL_0166
	IL_0127:                                                                        //ldloc.s				V_22
	IL_0129:            Temp_35=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_012e:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0133:            V_15=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_35);  //stloc.s				V_15
	IL_0135:                                                                        //ldc.i4				0x6
	IL_013a:            V_25=6;                                                     //stloc				V_25
	IL_013e:            /*goto IL_00df;*/goto IL_0140;                              //br.s				IL_00df
	IL_0140:                                                                        //ldloc.s				V_13
	IL_0142:                                                                        //ldloc.s				V_15
	IL_0144:            if(V_13!=V_15)goto IL_0106;                                 //bne.un.s				IL_0106
	IL_0146:                                                                        //ldc.i4				0x2
	IL_014b:            V_25=2;                                                     //stloc				V_25
	IL_014f:            /*goto IL_00df;*/goto IL_0151;                              //br.s				IL_00df
	IL_0151:            goto IL_0153;                                               //br.s				IL_0153
	IL_0153:                                                                        //ldc.i4.0
	IL_0154:            V_14=false;                                                 //stloc.s				V_14
	IL_0156:                                                                        //ldc.i4				0x5
	IL_015b:            V_25=5;                                                     //stloc				V_25
	IL_015f:            /*goto IL_00df;*/goto IL_0164;                              //br				IL_00df
	IL_0164:            goto IL_0106;                                               //br.s				IL_0106
	IL_0166:                                                                        //ldc.i4				0x3
	IL_016b:            V_25=3;                                                     //stloc				V_25
	IL_016f:            /*goto IL_00df;*/goto IL_0174;                              //br				IL_00df
	IL_0174:            goto IL_09a3;                                               //leave				IL_09a3
	                    ;}
	                    finally{
	IL_0179:            goto IL_0190;                                               //br.s				IL_0190
	IL_017b:                                                                        //ldloc				V_25
	IL_017f:            switch(V_25){case 0:goto IL_01b3;case 1:goto IL_01c7;case 2:goto IL_01a4;};//switch				(IL_01b3,IL_01c7,IL_01a4)
	IL_0190:                                                                        //ldloc.s				V_22
	IL_0192:                                                                        //isinst				System::IDisposable
	IL_0197:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_0199:                                                                        //ldc.i4				0x2
	IL_019e:            V_25=2;                                                     //stloc				V_25
	IL_01a2:            /*goto IL_017b;*/goto IL_01a4;                              //br.s				IL_017b
	IL_01a4:                                                                        //ldloc.s				V_23
	IL_01a6:            if(V_23==nullptr)goto IL_01c9;                              //brfalse.s				IL_01c9
	IL_01a8:                                                                        //ldc.i4				0x0
	IL_01ad:            V_25=0;                                                     //stloc				V_25
	IL_01b1:            /*goto IL_017b;*/goto IL_01b3;                              //br.s				IL_017b
	IL_01b3:            goto IL_01b5;                                               //br.s				IL_01b5
	IL_01b5:                                                                        //ldloc.s				V_23
	IL_01b7:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_01bc:                                                                        //ldc.i4				0x1
	IL_01c1:            V_25=1;                                                     //stloc				V_25
	IL_01c5:            /*goto IL_017b;*/goto IL_01c7;                              //br.s				IL_017b
	IL_01c7:            goto IL_01c9;                                               //br.s				IL_01c9
	IL_01c9:                                                                        //endfinally
	                    ;}
	IL_01ca:                                                                        //ldarg.0
	IL_01cb:            Temp_20=this->F_x9;                                         //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_01d0:                                                                        //ldloc.1
	IL_01d1:            Temp_20->RemoveAt(V_1);                                     //callvirt				void System::Collections::ArrayList::RemoveAt(System::Int32)
	IL_01d6:                                                                        //ldc.i4				0x6
	IL_01db:            V_25=6;                                                     //stloc				V_25
	IL_01df:            /*goto IL_0005;*/goto IL_01e4;                              //br				IL_0005
	IL_01e4:            goto IL_0bc6;                                               //br				IL_0bc6
	IL_01e9:                                                                        //ldarg.0
	IL_01ea:            this->BeginUpdate();                                        //call				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_01ef:                                                                        //ldarg.0
	IL_01f0:            Temp_54=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_01f5:            Temp_55=Temp_54->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_01fa:                                                                        //ldc.i4.1
	IL_01fb:                                                                        //sub
	IL_01fc:            V_8=(Temp_55 - 1);                                          //stloc.s				V_8
	IL_01fe:                                                                        //ldc.i4				0x21
	IL_0203:            V_25=33;                                                    //stloc				V_25
	IL_0207:            /*goto IL_0005;*/goto IL_020c;                              //br				IL_0005
	IL_020c:            goto IL_0ce6;                                               //br				IL_0ce6
	IL_020C01:          try{
	IL_0211:                                                                        //ldc.i4				0x2
	IL_0216:            V_25=2;                                                     //stloc				V_25
	IL_021a:            /*goto IL_021e;*/goto IL_021c;                              //br.s				IL_021e
	IL_021c:            goto IL_023b;                                               //br.s				IL_023b
	IL_021e:                                                                        //ldloc				V_25
	IL_0222:            switch(V_25){case 0:goto IL_025c;case 1:goto IL_0248;case 2:goto IL_021c;case 3:goto IL_036a;case 4:goto IL_0288;};//switch				(IL_025c,IL_0248,IL_021c,IL_036a,IL_0288)
	IL_023b:            goto IL_023d;                                               //br.s				IL_023d
	IL_023d:                                                                        //ldc.i4				0x1
	IL_0242:            V_25=1;                                                     //stloc				V_25
	IL_0246:            /*goto IL_021e;*/goto IL_0248;                              //br.s				IL_021e
	IL_0248:                                                                        //ldloc.s				V_22
	IL_024a:            Temp_38=V_22->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_024f:            if(Temp_38)goto IL_0261;                                    //brtrue.s				IL_0261
	IL_0251:                                                                        //ldc.i4				0x0
	IL_0256:            V_25=0;                                                     //stloc				V_25
	IL_025a:            /*goto IL_021e;*/goto IL_025c;                              //br.s				IL_021e
	IL_025c:            goto IL_035c;                                               //br				IL_035c
	IL_0261:                                                                        //ldloc.s				V_22
	IL_0263:            Temp_39=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0268:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_026d:            V_17=safe_cast<Reflector::CodeModel::IModule^>(Temp_39);    //stloc.s				V_17
	IL_026f:                                                                        //ldloc.s				V_17
	IL_0271:            Temp_40=V_17->Types;                                        //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_0276:            Temp_41=safe_cast<System::Collections::IEnumerable^>(Temp_40)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_027b:            V_24=Temp_41;                                               //stloc.s				V_24
	IL_027d:                                                                        //ldc.i4				0x4
	IL_0282:            V_25=4;                                                     //stloc				V_25
	IL_0286:            /*goto IL_021e;*/goto IL_0288;                              //br.s				IL_021e
	IL_0288:            /*goto IL_028a;*/goto IL_028801;                            //br.s				IL_028a
	IL_028801:          try{
	IL_028a:                                                                        //ldc.i4				0x2
	IL_028f:            V_25=2;                                                     //stloc				V_25
	IL_0293:            /*goto IL_0297;*/goto IL_0295;                              //br.s				IL_0297
	IL_0295:            goto IL_02b4;                                               //br.s				IL_02b4
	IL_0297:                                                                        //ldloc				V_25
	IL_029b:            switch(V_25){case 0:goto IL_02d8;case 1:goto IL_02e5;case 2:goto IL_0295;case 3:goto IL_0306;case 4:goto IL_02f9;};//switch				(IL_02d8,IL_02e5,IL_0295,IL_0306,IL_02f9)
	IL_02b4:            goto IL_02da;                                               //br.s				IL_02da
	IL_02b6:                                                                        //ldloc.s				V_24
	IL_02b8:            Temp_43=V_24->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_02bd:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_02c2:            V_18=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_43);//stloc.s				V_18
	IL_02c4:                                                                        //ldloc.s				V_16
	IL_02c6:                                                                        //ldloc.s				V_18
	IL_02c8:            V_16->M_x1(V_18);                                           //callvirt				void Root::T_x19::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_02cd:                                                                        //ldc.i4				0x0
	IL_02d2:            V_25=0;                                                     //stloc				V_25
	IL_02d6:            /*goto IL_0297;*/goto IL_02d8;                              //br.s				IL_0297
	IL_02d8:            goto IL_02da;                                               //br.s				IL_02da
	IL_02da:                                                                        //ldc.i4				0x1
	IL_02df:            V_25=1;                                                     //stloc				V_25
	IL_02e3:            /*goto IL_0297;*/goto IL_02e5;                              //br.s				IL_0297
	IL_02e5:                                                                        //ldloc.s				V_24
	IL_02e7:            Temp_42=V_24->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_02ec:            if(Temp_42)goto IL_02b6;                                    //brtrue.s				IL_02b6
	IL_02ee:                                                                        //ldc.i4				0x4
	IL_02f3:            V_25=4;                                                     //stloc				V_25
	IL_02f7:            /*goto IL_0297;*/goto IL_02f9;                              //br.s				IL_0297
	IL_02f9:            goto IL_02fb;                                               //br.s				IL_02fb
	IL_02fb:                                                                        //ldc.i4				0x3
	IL_0300:            V_25=3;                                                     //stloc				V_25
	IL_0304:            /*goto IL_0297;*/goto IL_0306;                              //br.s				IL_0297
	IL_0306:            goto IL_023d;                                               //leave				IL_023d
	                    ;}
	                    finally{
	IL_030b:            goto IL_0322;                                               //br.s				IL_0322
	IL_030d:                                                                        //ldloc				V_25
	IL_0311:            switch(V_25){case 0:goto IL_0336;case 1:goto IL_0345;case 2:goto IL_0359;};//switch				(IL_0336,IL_0345,IL_0359)
	IL_0322:                                                                        //ldloc.s				V_24
	IL_0324:                                                                        //isinst				System::IDisposable
	IL_0329:            V_23=dynamic_cast<System::IDisposable^>(V_24);              //stloc.s				V_23
	IL_032b:                                                                        //ldc.i4				0x0
	IL_0330:            V_25=0;                                                     //stloc				V_25
	IL_0334:            /*goto IL_030d;*/goto IL_0336;                              //br.s				IL_030d
	IL_0336:                                                                        //ldloc.s				V_23
	IL_0338:            if(V_23==nullptr)goto IL_035b;                              //brfalse.s				IL_035b
	IL_033a:                                                                        //ldc.i4				0x1
	IL_033f:            V_25=1;                                                     //stloc				V_25
	IL_0343:            /*goto IL_030d;*/goto IL_0345;                              //br.s				IL_030d
	IL_0345:            goto IL_0347;                                               //br.s				IL_0347
	IL_0347:                                                                        //ldloc.s				V_23
	IL_0349:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_034e:                                                                        //ldc.i4				0x2
	IL_0353:            V_25=2;                                                     //stloc				V_25
	IL_0357:            /*goto IL_030d;*/goto IL_0359;                              //br.s				IL_030d
	IL_0359:            goto IL_035b;                                               //br.s				IL_035b
	IL_035b:                                                                        //endfinally
	                    ;}
	IL_035c:                                                                        //ldc.i4				0x3
	IL_0361:            V_25=3;                                                     //stloc				V_25
	IL_0365:            /*goto IL_021e;*/goto IL_036a;                              //br				IL_021e
	IL_036a:            goto IL_0493;                                               //leave				IL_0493
	                    ;}
	                    finally{
	IL_036f:            goto IL_0386;                                               //br.s				IL_0386
	IL_0371:                                                                        //ldloc				V_25
	IL_0375:            switch(V_25){case 0:goto IL_03a9;case 1:goto IL_039a;case 2:goto IL_03bd;};//switch				(IL_03a9,IL_039a,IL_03bd)
	IL_0386:                                                                        //ldloc.s				V_22
	IL_0388:                                                                        //isinst				System::IDisposable
	IL_038d:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_038f:                                                                        //ldc.i4				0x1
	IL_0394:            V_25=1;                                                     //stloc				V_25
	IL_0398:            /*goto IL_0371;*/goto IL_039a;                              //br.s				IL_0371
	IL_039a:                                                                        //ldloc.s				V_23
	IL_039c:            if(V_23==nullptr)goto IL_03bf;                              //brfalse.s				IL_03bf
	IL_039e:                                                                        //ldc.i4				0x0
	IL_03a3:            V_25=0;                                                     //stloc				V_25
	IL_03a7:            /*goto IL_0371;*/goto IL_03a9;                              //br.s				IL_0371
	IL_03a9:            goto IL_03ab;                                               //br.s				IL_03ab
	IL_03ab:                                                                        //ldloc.s				V_23
	IL_03ad:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_03b2:                                                                        //ldc.i4				0x2
	IL_03b7:            V_25=2;                                                     //stloc				V_25
	IL_03bb:            /*goto IL_0371;*/goto IL_03bd;                              //br.s				IL_0371
	IL_03bd:            goto IL_03bf;                                               //br.s				IL_03bf
	IL_03bf:                                                                        //endfinally
	                    ;}
	IL_03c0:            Temp_17=gcnew Root::T_x19();                                //newobj				void Root::T_x19::.ctor()
	IL_03c5:            V_5=Temp_17;                                                //stloc.s				V_5
	IL_03c7:                                                                        //ldloc.2
	IL_03c8:            Temp_18=V_2->Modules;                                       //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_03cd:            Temp_19=safe_cast<System::Collections::IEnumerable^>(Temp_18)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_03d2:            V_22=Temp_19;                                               //stloc.s				V_22
	IL_03d4:                                                                        //ldc.i4				0x1
	IL_03d9:            V_25=1;                                                     //stloc				V_25
	IL_03dd:            /*goto IL_0005;*/goto IL_03e2;                              //br				IL_0005
	IL_03e2:            /*goto IL_07d3;*/goto IL_07CE01;                            //br				IL_07d3
	IL_03e7:                                                                        //ldloc.0
	IL_03e8:            Temp_46=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_03ed:                                                                        //ldloc.s				V_12
	IL_03ef:            Temp_47=Temp_46[V_12];                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_03f4:            V_13=Temp_47;                                               //stloc.s				V_13
	IL_03f6:                                                                        //ldc.i4.1
	IL_03f7:            V_14=true;                                                  //stloc.s				V_14
	IL_03f9:                                                                        //ldarg.0
	IL_03fa:            Temp_48=this->F_x9;                                         //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_03ff:            Temp_49=Temp_48->GetEnumerator();                           //callvirt				System::Collections::IEnumerator^ System::Collections::ArrayList::GetEnumerator()
	IL_0404:            V_22=Temp_49;                                               //stloc.s				V_22
	IL_0406:                                                                        //ldc.i4				0x16
	IL_040b:            V_25=22;                                                    //stloc				V_25
	IL_040f:            /*goto IL_0005;*/goto IL_0414;                              //br				IL_0005
	IL_0414:            /*goto IL_00d2;*/goto IL_00CD01;                            //br				IL_00d2
	IL_0419:                                                                        //ldarg.0
	IL_041a:            Temp_56=this->F_x9;                                         //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_041f:                                                                        //ldloc.s				V_13
	IL_0421:            Temp_57=Temp_56->Add(safe_cast<System::Object^>(V_13));     //callvirt				System::Int32 System::Collections::ArrayList::Add(System::Object^)
	IL_0426:                                                                        //pop
	IL_0427:                                                                        //ldc.i4				0x9
	IL_042c:            V_25=9;                                                     //stloc				V_25
	IL_0430:            /*goto IL_0005;*/goto IL_0435;                              //br				IL_0005
	IL_0435:            goto IL_0d43;                                               //br				IL_0d43
	IL_043a:                                                                        //ldarg.0
	IL_043b:                                                                        //ldnull
	IL_043c:            this->M_x1(safe_cast<Root::T_x10^>(nullptr));               //call				void Root::T_x25::M_x1(Root::T_x10^)
	IL_0441:            goto IL_0444;                                               //br.s				IL_0444
	IL_0443:                                                                        //break
	IL_0444:                                                                        //ldc.i4				0x5
	IL_0449:            V_25=5;                                                     //stloc				V_25
	IL_044d:            /*goto IL_0005;*/goto IL_0452;                              //br				IL_0005
	IL_0452:            goto IL_01ca;                                               //br				IL_01ca
	IL_0457:                                                                        //ldarg.0
	IL_0458:            Temp_52=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_045d:                                                                        //ldloc.s				V_8
	IL_045f:            Temp_53=Temp_52[V_8];                                       //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_0464:                                                                        //isinst				Root::T_x41
	IL_0469:            V_9=dynamic_cast<Root::T_x41^>(Temp_53);                    //stloc.s				V_9
	IL_046b:                                                                        //ldc.i4				0xa
	IL_0470:            V_25=10;                                                    //stloc				V_25
	IL_0474:            /*goto IL_0005;*/goto IL_0479;                              //br				IL_0005
	IL_0479:                                                                        //ldloc.s				V_9
	IL_047b:            if(V_9==nullptr)goto IL_0bad;                               //brfalse				IL_0bad
	IL_0480:                                                                        //ldc.i4				0x14
	IL_0485:            V_25=20;                                                    //stloc				V_25
	IL_0489:            /*goto IL_0005;*/goto IL_048e;                              //br				IL_0005
	IL_048e:            goto IL_0b24;                                               //br				IL_0b24
	IL_048E01:          try{
	IL_0493:                                                                        //ldarg.0
	IL_0494:            this->BeginUpdate();                                        //call				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_0499:                                                                        //ldloc.s				V_16
	IL_049b:            Temp_58=V_16->M_x1();                                       //callvirt				System::Collections::IEnumerator^ Root::T_x19::M_x1()
	IL_04a0:            V_22=Temp_58;                                               //stloc.s				V_22
	IL_04a2:            /*goto IL_04a4;*/goto IL_04A201;                            //br.s				IL_04a4
	IL_04A201:          try{
	IL_04a4:                                                                        //ldc.i4				0x12
	IL_04a9:            V_25=18;                                                    //stloc				V_25
	IL_04ad:            /*goto IL_04b1;*/goto IL_04af;                              //br.s				IL_04b1
	IL_04af:            goto IL_0506;                                               //br.s				IL_0506
	IL_04b1:                                                                        //ldloc				V_25
	IL_04b5:            switch(V_25){case 0:goto IL_066e;case 1:goto IL_05a8;case 2:goto IL_06c9;case 3:goto IL_06e3;case 4:goto IL_0578;case 5:goto IL_058b;case 6:goto IL_069d;case 7:goto IL_0625;case 8:goto IL_06b6;case 9:goto IL_0610;case 10:goto IL_05ca;case 11:goto IL_0524;case 12:goto IL_05e0;case 13:goto IL_065e;case 14:goto IL_0646;case 15:goto IL_06f3;case 16:goto IL_054a;case 17:goto IL_055a;case 18:goto IL_04af;};//switch				(IL_066e,IL_05a8,IL_06c9,IL_06e3,IL_0578,IL_058b,IL_069d,IL_0625,IL_06b6,IL_0610,IL_05ca,IL_0524,IL_05e0,IL_065e,IL_0646,IL_06f3,IL_054a,IL_055a,IL_04af)
	IL_0506:            goto IL_06bb;                                               //br				IL_06bb
	IL_050b:                                                                        //ldloc.s				V_20
	IL_050d:                                                                        //ldloc.s				V_19
	IL_050f:            Temp_72=V_19->Types;                                        //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0514:            V_20->M_x1(Temp_72);                                        //callvirt				void Root::T_x41::M_x1(Reflector::CodeModel::ITypeDeclarationCollection^)
	IL_0519:                                                                        //ldc.i4				0xb
	IL_051e:            V_25=11;                                                    //stloc				V_25
	IL_0522:            /*goto IL_04b1;*/goto IL_0524;                              //br.s				IL_04b1
	IL_0524:            goto IL_06bb;                                               //br				IL_06bb
	IL_0529:            Temp_71=gcnew Root::T_x41();                                //newobj				void Root::T_x41::.ctor()
	IL_052e:            V_20=Temp_71;                                               //stloc.s				V_20
	IL_0530:                                                                        //ldloc.s				V_20
	IL_0532:                                                                        //ldloc.s				V_19
	IL_0534:            V_20->M_x1(V_19);                                           //callvirt				void Root::T_x41::M_x1(Reflector::CodeModel::INamespace^)
	IL_0539:                                                                        //ldc.i4.0
	IL_053a:            V_21=0;                                                     //stloc.s				V_21
	IL_053c:                                                                        //ldc.i4				0x10
	IL_0541:            V_25=16;                                                    //stloc				V_25
	IL_0545:            /*goto IL_04b1;*/goto IL_054a;                              //br				IL_04b1
	IL_054a:            goto IL_057d;                                               //br.s				IL_057d
	IL_054c:                                                                        //ldc.i4				0x11
	IL_0551:            V_25=17;                                                    //stloc				V_25
	IL_0555:            /*goto IL_04b1;*/goto IL_055a;                              //br				IL_04b1
	IL_055a:                                                                        //ldarg.0
	IL_055b:            Temp_74=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0560:            Temp_75=Temp_74->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0565:            if(Temp_75!=0)goto IL_062a;                                 //brtrue				IL_062a
	IL_056a:                                                                        //ldc.i4				0x4
	IL_056f:            V_25=4;                                                     //stloc				V_25
	IL_0573:            /*goto IL_04b1;*/goto IL_0578;                              //br				IL_04b1
	IL_0578:            goto IL_0648;                                               //br				IL_0648
	IL_057d:                                                                        //ldc.i4				0x5
	IL_0582:            V_25=5;                                                     //stloc				V_25
	IL_0586:            /*goto IL_04b1;*/goto IL_058b;                              //br				IL_04b1
	IL_058b:                                                                        //ldloc.s				V_21
	IL_058d:                                                                        //ldarg.0
	IL_058e:            Temp_68=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0593:            Temp_69=Temp_68->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0598:            if(V_21>=Temp_69)goto IL_05ad;                              //bge.s				IL_05ad
	IL_059a:                                                                        //ldc.i4				0x1
	IL_059f:            V_25=1;                                                     //stloc				V_25
	IL_05a3:            /*goto IL_04b1;*/goto IL_05a8;                              //br				IL_04b1
	IL_05a8:            goto IL_0660;                                               //br				IL_0660
	IL_05ad:                                                                        //ldarg.0
	IL_05ae:            Temp_70=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_05b3:                                                                        //ldloc.s				V_21
	IL_05b5:                                                                        //ldloc.s				V_20
	IL_05b7:            Temp_70->Insert(V_21,safe_cast<System::Windows::Forms::TreeNode^>(V_20));//callvirt				void System::Windows::Forms::TreeNodeCollection::Insert(System::Int32,System::Windows::Forms::TreeNode^)
	IL_05bc:                                                                        //ldc.i4				0xa
	IL_05c1:            V_25=10;                                                    //stloc				V_25
	IL_05c5:            /*goto IL_04b1;*/goto IL_05ca;                              //br				IL_04b1
	IL_05ca:                                                                        //ldarg.0
	IL_05cb:            Temp_73=this->SelectedNode;                                 //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_05d0:            if(Temp_73==nullptr)goto IL_0648;                           //brfalse.s				IL_0648
	IL_05d2:                                                                        //ldc.i4				0xc
	IL_05d7:            V_25=12;                                                    //stloc				V_25
	IL_05db:            /*goto IL_04b1;*/goto IL_05e0;                              //br				IL_04b1
	IL_05e0:            goto IL_054c;                                               //br				IL_054c
	IL_05e5:                                                                        //ldloc.s				V_22
	IL_05e7:            Temp_65=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_05ec:                                                                        //castclass				Reflector::CodeModel::INamespace
	IL_05f1:            V_19=safe_cast<Reflector::CodeModel::INamespace^>(Temp_65); //stloc.s				V_19
	IL_05f3:                                                                        //ldarg.0
	IL_05f4:                                                                        //ldloc.s				V_19
	IL_05f6:            Temp_66=V_19->Name;                                         //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_05fb:            Temp_67=this->M_x1(Temp_66);                                //call				Root::T_x41^ Root::T_x25::M_x1(System::String^)
	IL_0600:            V_20=Temp_67;                                               //stloc.s				V_20
	IL_0602:                                                                        //ldc.i4				0x9
	IL_0607:            V_25=9;                                                     //stloc				V_25
	IL_060b:            /*goto IL_04b1;*/goto IL_0610;                              //br				IL_04b1
	IL_0610:                                                                        //ldloc.s				V_20
	IL_0612:            if(V_20!=nullptr)goto IL_050b;                              //brtrue				IL_050b
	IL_0617:                                                                        //ldc.i4				0x7
	IL_061c:            V_25=7;                                                     //stloc				V_25
	IL_0620:            /*goto IL_04b1;*/goto IL_0625;                              //br				IL_04b1
	IL_0625:            goto IL_0529;                                               //br				IL_0529
	IL_062a:                                                                        //ldloc.s				V_20
	IL_062c:            V_20->Collapse();                                           //callvirt				void System::Windows::Forms::TreeNode::Collapse()
	IL_0631:                                                                        //ldloc.s				V_20
	IL_0633:            V_20->M_x10();                                              //callvirt				void Root::T_x10::M_x10()
	IL_0638:                                                                        //ldc.i4				0xe
	IL_063d:            V_25=14;                                                    //stloc				V_25
	IL_0641:            /*goto IL_04b1;*/goto IL_0646;                              //br				IL_04b1
	IL_0646:            goto IL_06bb;                                               //br.s				IL_06bb
	IL_0648:                                                                        //ldarg.0
	IL_0649:                                                                        //ldloc.s				V_20
	IL_064b:            this->SelectedNode=safe_cast<System::Windows::Forms::TreeNode^>(V_20);//call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_0650:                                                                        //ldc.i4				0xd
	IL_0655:            V_25=13;                                                    //stloc				V_25
	IL_0659:            /*goto IL_04b1;*/goto IL_065e;                              //br				IL_04b1
	IL_065e:            goto IL_062a;                                               //br.s				IL_062a
	IL_0660:                                                                        //ldc.i4				0x0
	IL_0665:            V_25=0;                                                     //stloc				V_25
	IL_0669:            /*goto IL_04b1;*/goto IL_066e;                              //br				IL_04b1
	IL_066e:                                                                        //ldarg.0
	IL_066f:            Temp_59=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0674:                                                                        //ldloc.s				V_21
	IL_0676:            Temp_60=Temp_59[V_21];                                      //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_067b:            Temp_61=Temp_60->Text;                                      //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_0680:                                                                        //ldloc.s				V_20
	IL_0682:            Temp_62=V_20->Text;                                         //callvirt				System::String^ System::Windows::Forms::TreeNode::get_Text()
	IL_0687:            Temp_63=Temp_61->CompareTo(Temp_62);                        //callvirt				System::Int32 System::String::CompareTo(System::String^)
	IL_068c:                                                                        //ldc.i4.0
	IL_068d:            if(Temp_63<0)goto IL_06a2;                                  //blt.s				IL_06a2
	IL_068f:                                                                        //ldc.i4				0x6
	IL_0694:            V_25=6;                                                     //stloc				V_25
	IL_0698:            /*goto IL_04b1;*/goto IL_069d;                              //br				IL_04b1
	IL_069d:            goto IL_05ad;                                               //br				IL_05ad
	IL_06a2:                                                                        //ldloc.s				V_21
	IL_06a4:                                                                        //ldc.i4.1
	IL_06a5:                                                                        //add
	IL_06a6:            V_21=(V_21 + 1);                                            //stloc.s				V_21
	IL_06a8:                                                                        //ldc.i4				0x8
	IL_06ad:            V_25=8;                                                     //stloc				V_25
	IL_06b1:            /*goto IL_04b1;*/goto IL_06b6;                              //br				IL_04b1
	IL_06b6:            goto IL_057d;                                               //br				IL_057d
	IL_06bb:                                                                        //ldc.i4				0x2
	IL_06c0:            V_25=2;                                                     //stloc				V_25
	IL_06c4:            /*goto IL_04b1;*/goto IL_06c9;                              //br				IL_04b1
	IL_06c9:                                                                        //ldloc.s				V_22
	IL_06cb:            Temp_64=V_22->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_06d0:            if(Temp_64)goto IL_05e5;                                    //brtrue				IL_05e5
	IL_06d5:                                                                        //ldc.i4				0x3
	IL_06da:            V_25=3;                                                     //stloc				V_25
	IL_06de:            /*goto IL_04b1;*/goto IL_06e3;                              //br				IL_04b1
	IL_06e3:            goto IL_06e5;                                               //br.s				IL_06e5
	IL_06e5:                                                                        //ldc.i4				0xf
	IL_06ea:            V_25=15;                                                    //stloc				V_25
	IL_06ee:            /*goto IL_04b1;*/goto IL_06f3;                              //br				IL_04b1
	IL_06f3:            goto IL_0746;                                               //leave.s				IL_0746
	                    ;}
	                    finally{
	IL_06f5:            goto IL_070c;                                               //br.s				IL_070c
	IL_06f7:                                                                        //ldloc				V_25
	IL_06fb:            switch(V_25){case 0:goto IL_0743;case 1:goto IL_0720;case 2:goto IL_072f;};//switch				(IL_0743,IL_0720,IL_072f)
	IL_070c:                                                                        //ldloc.s				V_22
	IL_070e:                                                                        //isinst				System::IDisposable
	IL_0713:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_0715:                                                                        //ldc.i4				0x1
	IL_071a:            V_25=1;                                                     //stloc				V_25
	IL_071e:            /*goto IL_06f7;*/goto IL_0720;                              //br.s				IL_06f7
	IL_0720:                                                                        //ldloc.s				V_23
	IL_0722:            if(V_23==nullptr)goto IL_0745;                              //brfalse.s				IL_0745
	IL_0724:                                                                        //ldc.i4				0x2
	IL_0729:            V_25=2;                                                     //stloc				V_25
	IL_072d:            /*goto IL_06f7;*/goto IL_072f;                              //br.s				IL_06f7
	IL_072f:            goto IL_0731;                                               //br.s				IL_0731
	IL_0731:                                                                        //ldloc.s				V_23
	IL_0733:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0738:                                                                        //ldc.i4				0x0
	IL_073d:            V_25=0;                                                     //stloc				V_25
	IL_0741:            /*goto IL_06f7;*/goto IL_0743;                              //br.s				IL_06f7
	IL_0743:            goto IL_0745;                                               //br.s				IL_0745
	IL_0745:                                                                        //endfinally
	                    ;}
	IL_0746:            goto IL_0419;                                               //leave				IL_0419
	                    ;}
	                    finally{
	IL_074b:                                                                        //ldarg.0
	IL_074c:            this->EndUpdate();                                          //call				void System::Windows::Forms::TreeView::EndUpdate()
	IL_0751:                                                                        //endfinally
	                    ;}
	IL_0752:                                                                        //ldc.i4				0x1c
	IL_0757:            V_25=28;                                                    //stloc				V_25
	IL_075b:            /*goto IL_0005;*/goto IL_0760;                              //br				IL_0005
	IL_0760:                                                                        //ldloc.s				V_12
	IL_0762:                                                                        //ldloc.0
	IL_0763:            Temp_44=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0768:            Temp_45=safe_cast<System::Collections::ICollection^>(Temp_44)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_076d:            if(V_12<Temp_45)goto IL_03e7;                               //blt				IL_03e7
	IL_0772:                                                                        //ldc.i4				0xd
	IL_0777:            V_25=13;                                                    //stloc				V_25
	IL_077b:            /*goto IL_0005;*/goto IL_0780;                              //br				IL_0005
	IL_0780:            goto IL_0d5c;                                               //br				IL_0d5c
	IL_0785:                                                                        //ldloc.s				V_9
	IL_0787:            V_9->Remove();                                              //callvirt				void System::Windows::Forms::TreeNode::Remove()
	IL_078c:                                                                        //ldc.i4				0x4
	IL_0791:            V_25=4;                                                     //stloc				V_25
	IL_0795:            /*goto IL_0005;*/goto IL_079a;                              //br				IL_0005
	IL_079a:            goto IL_0bad;                                               //br				IL_0bad
	IL_079f:                                                                        //ldarg.0
	IL_07a0:            Temp_5=this->F_x9;                                          //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_07a5:                                                                        //ldloc.1
	IL_07a6:            Temp_6=Temp_5[V_1];                                         //callvirt				System::Object^ System::Collections::ArrayList::get_Item(System::Int32)
	IL_07ab:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_07b0:            V_2=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_6);    //stloc.2
	IL_07b1:                                                                        //ldc.i4.1
	IL_07b2:            V_3=true;                                                   //stloc.3
	IL_07b3:                                                                        //ldloc.0
	IL_07b4:            Temp_7=V_0->Assemblies;                                     //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_07b9:            Temp_8=safe_cast<System::Collections::IEnumerable^>(Temp_7)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_07be:            V_22=Temp_8;                                                //stloc.s				V_22
	IL_07c0:                                                                        //ldc.i4				0x1d
	IL_07c5:            V_25=29;                                                    //stloc				V_25
	IL_07c9:            /*goto IL_0005;*/goto IL_07ce;                              //br				IL_0005
	IL_07ce:            /*goto IL_0bdd;*/goto IL_0BD801;                            //br				IL_0bdd
	IL_07CE01:          try{
	IL_07d3:                                                                        //ldc.i4				0x4
	IL_07d8:            V_25=4;                                                     //stloc				V_25
	IL_07dc:            /*goto IL_07e0;*/goto IL_07de;                              //br.s				IL_07e0
	IL_07de:            goto IL_07fd;                                               //br.s				IL_07fd
	IL_07e0:                                                                        //ldloc				V_25
	IL_07e4:            switch(V_25){case 0:goto IL_092c;case 1:goto IL_080a;case 2:goto IL_084a;case 3:goto IL_081e;case 4:goto IL_07de;};//switch				(IL_092c,IL_080a,IL_084a,IL_081e,IL_07de)
	IL_07fd:            goto IL_07ff;                                               //br.s				IL_07ff
	IL_07ff:                                                                        //ldc.i4				0x1
	IL_0804:            V_25=1;                                                     //stloc				V_25
	IL_0808:            /*goto IL_07e0;*/goto IL_080a;                              //br.s				IL_07e0
	IL_080a:                                                                        //ldloc.s				V_22
	IL_080c:            Temp_9=V_22->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0811:            if(Temp_9)goto IL_0823;                                     //brtrue.s				IL_0823
	IL_0813:                                                                        //ldc.i4				0x3
	IL_0818:            V_25=3;                                                     //stloc				V_25
	IL_081c:            /*goto IL_07e0;*/goto IL_081e;                              //br.s				IL_07e0
	IL_081e:            goto IL_091e;                                               //br				IL_091e
	IL_0823:                                                                        //ldloc.s				V_22
	IL_0825:            Temp_10=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_082a:                                                                        //castclass				Reflector::CodeModel::IModule
	IL_082f:            V_6=safe_cast<Reflector::CodeModel::IModule^>(Temp_10);     //stloc.s				V_6
	IL_0831:                                                                        //ldloc.s				V_6
	IL_0833:            Temp_11=V_6->Types;                                         //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::IModule::get_Types()
	IL_0838:            Temp_12=safe_cast<System::Collections::IEnumerable^>(Temp_11)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_083d:            V_24=Temp_12;                                               //stloc.s				V_24
	IL_083f:                                                                        //ldc.i4				0x2
	IL_0844:            V_25=2;                                                     //stloc				V_25
	IL_0848:            /*goto IL_07e0;*/goto IL_084a;                              //br.s				IL_07e0
	IL_084a:            /*goto IL_084c;*/goto IL_084A01;                            //br.s				IL_084c
	IL_084A01:          try{
	IL_084c:                                                                        //ldc.i4				0x3
	IL_0851:            V_25=3;                                                     //stloc				V_25
	IL_0855:            /*goto IL_0859;*/goto IL_0857;                              //br.s				IL_0859
	IL_0857:            goto IL_0876;                                               //br.s				IL_0876
	IL_0859:                                                                        //ldloc				V_25
	IL_085d:            switch(V_25){case 0:goto IL_0897;case 1:goto IL_0883;case 2:goto IL_08bb;case 3:goto IL_0857;case 4:goto IL_08c8;};//switch				(IL_0897,IL_0883,IL_08bb,IL_0857,IL_08c8)
	IL_0876:            goto IL_0878;                                               //br.s				IL_0878
	IL_0878:                                                                        //ldc.i4				0x1
	IL_087d:            V_25=1;                                                     //stloc				V_25
	IL_0881:            /*goto IL_0859;*/goto IL_0883;                              //br.s				IL_0859
	IL_0883:                                                                        //ldloc.s				V_24
	IL_0885:            Temp_13=V_24->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_088a:            if(Temp_13)goto IL_0899;                                    //brtrue.s				IL_0899
	IL_088c:                                                                        //ldc.i4				0x0
	IL_0891:            V_25=0;                                                     //stloc				V_25
	IL_0895:            /*goto IL_0859;*/goto IL_0897;                              //br.s				IL_0859
	IL_0897:            goto IL_08bd;                                               //br.s				IL_08bd
	IL_0899:                                                                        //ldloc.s				V_24
	IL_089b:            Temp_14=V_24->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_08a0:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_08a5:            V_7=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_14);//stloc.s				V_7
	IL_08a7:                                                                        //ldloc.s				V_5
	IL_08a9:                                                                        //ldloc.s				V_7
	IL_08ab:            V_5->M_x1(V_7);                                             //callvirt				void Root::T_x19::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_08b0:                                                                        //ldc.i4				0x2
	IL_08b5:            V_25=2;                                                     //stloc				V_25
	IL_08b9:            /*goto IL_0859;*/goto IL_08bb;                              //br.s				IL_0859
	IL_08bb:            goto IL_0878;                                               //br.s				IL_0878
	IL_08bd:                                                                        //ldc.i4				0x4
	IL_08c2:            V_25=4;                                                     //stloc				V_25
	IL_08c6:            /*goto IL_0859;*/goto IL_08c8;                              //br.s				IL_0859
	IL_08c8:            goto IL_07ff;                                               //leave				IL_07ff
	                    ;}
	                    finally{
	IL_08cd:            goto IL_08e4;                                               //br.s				IL_08e4
	IL_08cf:                                                                        //ldloc				V_25
	IL_08d3:            switch(V_25){case 0:goto IL_0907;case 1:goto IL_08f8;case 2:goto IL_091b;};//switch				(IL_0907,IL_08f8,IL_091b)
	IL_08e4:                                                                        //ldloc.s				V_24
	IL_08e6:                                                                        //isinst				System::IDisposable
	IL_08eb:            V_23=dynamic_cast<System::IDisposable^>(V_24);              //stloc.s				V_23
	IL_08ed:                                                                        //ldc.i4				0x1
	IL_08f2:            V_25=1;                                                     //stloc				V_25
	IL_08f6:            /*goto IL_08cf;*/goto IL_08f8;                              //br.s				IL_08cf
	IL_08f8:                                                                        //ldloc.s				V_23
	IL_08fa:            if(V_23==nullptr)goto IL_091d;                              //brfalse.s				IL_091d
	IL_08fc:                                                                        //ldc.i4				0x0
	IL_0901:            V_25=0;                                                     //stloc				V_25
	IL_0905:            /*goto IL_08cf;*/goto IL_0907;                              //br.s				IL_08cf
	IL_0907:            goto IL_0909;                                               //br.s				IL_0909
	IL_0909:                                                                        //ldloc.s				V_23
	IL_090b:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0910:                                                                        //ldc.i4				0x2
	IL_0915:            V_25=2;                                                     //stloc				V_25
	IL_0919:            /*goto IL_08cf;*/goto IL_091b;                              //br.s				IL_08cf
	IL_091b:            goto IL_091d;                                               //br.s				IL_091d
	IL_091d:                                                                        //endfinally
	                    ;}
	IL_091e:                                                                        //ldc.i4				0x0
	IL_0923:            V_25=0;                                                     //stloc				V_25
	IL_0927:            /*goto IL_07e0;*/goto IL_092c;                              //br				IL_07e0
	IL_092c:            goto IL_01e9;                                               //leave				IL_01e9
	                    ;}
	                    finally{
	IL_0931:            goto IL_0948;                                               //br.s				IL_0948
	IL_0933:                                                                        //ldloc				V_25
	IL_0937:            switch(V_25){case 0:goto IL_095c;case 1:goto IL_096b;case 2:goto IL_097f;};//switch				(IL_095c,IL_096b,IL_097f)
	IL_0948:                                                                        //ldloc.s				V_22
	IL_094a:                                                                        //isinst				System::IDisposable
	IL_094f:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_0951:                                                                        //ldc.i4				0x0
	IL_0956:            V_25=0;                                                     //stloc				V_25
	IL_095a:            /*goto IL_0933;*/goto IL_095c;                              //br.s				IL_0933
	IL_095c:                                                                        //ldloc.s				V_23
	IL_095e:            if(V_23==nullptr)goto IL_0981;                              //brfalse.s				IL_0981
	IL_0960:                                                                        //ldc.i4				0x1
	IL_0965:            V_25=1;                                                     //stloc				V_25
	IL_0969:            /*goto IL_0933;*/goto IL_096b;                              //br.s				IL_0933
	IL_096b:            goto IL_096d;                                               //br.s				IL_096d
	IL_096d:                                                                        //ldloc.s				V_23
	IL_096f:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0974:                                                                        //ldc.i4				0x2
	IL_0979:            V_25=2;                                                     //stloc				V_25
	IL_097d:            /*goto IL_0933;*/goto IL_097f;                              //br.s				IL_0933
	IL_097f:            goto IL_0981;                                               //br.s				IL_0981
	IL_0981:                                                                        //endfinally
	                    ;}
	IL_0982:                                                                        //ldloc.s				V_10
	IL_0984:            Temp_15=V_10->Types;                                        //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0989:            Temp_16=safe_cast<System::Collections::IEnumerable^>(Temp_15)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_098e:            V_22=Temp_16;                                               //stloc.s				V_22
	IL_0990:                                                                        //ldc.i4				0xb
	IL_0995:            V_25=11;                                                    //stloc				V_25
	IL_0999:            /*goto IL_0005;*/goto IL_099e;                              //br				IL_0005
	IL_099e:            /*goto IL_0a48;*/goto IL_0A4301;                            //br				IL_0a48
	IL_09a3:                                                                        //ldc.i4				0x8
	IL_09a8:            V_25=8;                                                     //stloc				V_25
	IL_09ac:            /*goto IL_0005;*/goto IL_09b1;                              //br				IL_0005
	IL_09b1:                                                                        //ldloc.s				V_14
	IL_09b3:            if(!V_14)goto IL_0d43;                                      //brfalse				IL_0d43
	IL_09b8:                                                                        //ldc.i4				0x10
	IL_09bd:            V_25=16;                                                    //stloc				V_25
	IL_09c1:            /*goto IL_0005;*/goto IL_09c6;                              //br				IL_0005
	IL_09c6:            goto IL_0b5e;                                               //br				IL_0b5e
	IL_09cb:                                                                        //ldloc.s				V_9
	IL_09cd:            V_9->Collapse();                                            //callvirt				void System::Windows::Forms::TreeNode::Collapse()
	IL_09d2:                                                                        //ldloc.s				V_9
	IL_09d4:            V_9->M_x10();                                               //callvirt				void Root::T_x10::M_x10()
	IL_09d9:                                                                        //ldc.i4				0xe
	IL_09de:            V_25=14;                                                    //stloc				V_25
	IL_09e2:            /*goto IL_0005;*/goto IL_09e7;                              //br				IL_0005
	IL_09e7:            goto IL_0bad;                                               //br				IL_0bad
	IL_09ec:                                                                        //ldc.i4				0x7
	IL_09f1:            V_25=7;                                                     //stloc				V_25
	IL_09f5:            /*goto IL_0005;*/goto IL_09fa;                              //br				IL_0005
	IL_09fa:                                                                        //ldloc.s				V_9
	IL_09fc:            Temp_21=V_9->M_x1();                                        //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0a01:            Temp_22=Temp_21->Types;                                     //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0a06:            Temp_23=safe_cast<System::Collections::ICollection^>(Temp_22)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0a0b:            if(Temp_23!=0)goto IL_09cb;                                 //brtrue.s				IL_09cb
	IL_0a0d:                                                                        //ldc.i4				0xc
	IL_0a12:            V_25=12;                                                    //stloc				V_25
	IL_0a16:            /*goto IL_0005;*/goto IL_0a1b;                              //br				IL_0005
	IL_0a1b:            goto IL_0785;                                               //br				IL_0785
	IL_0a20:                                                                        //ldc.i4				0x0
	IL_0a25:            V_25=0;                                                     //stloc				V_25
	IL_0a29:            /*goto IL_0005;*/goto IL_0a2e;                              //br				IL_0005
	IL_0a2e:                                                                        //ldloc.1
	IL_0a2f:                                                                        //ldc.i4.0
	IL_0a30:            if(V_1>=0)goto IL_079f;                                     //bge				IL_079f
	IL_0a35:                                                                        //ldc.i4				0x1e
	IL_0a3a:            V_25=30;                                                    //stloc				V_25
	IL_0a3e:            /*goto IL_0005;*/goto IL_0a43;                              //br				IL_0005
	IL_0a43:            goto IL_0cd0;                                               //br				IL_0cd0
	IL_0A4301:          try{
	IL_0a48:                                                                        //ldc.i4				0x0
	IL_0a4d:            V_25=0;                                                     //stloc				V_25
	IL_0a51:            /*goto IL_0a55;*/goto IL_0a53;                              //br.s				IL_0a55
	IL_0a53:            goto IL_0a72;                                               //br.s				IL_0a72
	IL_0a55:                                                                        //ldloc				V_25
	IL_0a59:            switch(V_25){case 0:goto IL_0a53;case 1:goto IL_0ac1;case 2:goto IL_0ace;case 3:goto IL_0a7f;case 4:goto IL_0a93;};//switch				(IL_0a53,IL_0ac1,IL_0ace,IL_0a7f,IL_0a93)
	IL_0a72:            goto IL_0a74;                                               //br.s				IL_0a74
	IL_0a74:                                                                        //ldc.i4				0x3
	IL_0a79:            V_25=3;                                                     //stloc				V_25
	IL_0a7d:            /*goto IL_0a55;*/goto IL_0a7f;                              //br.s				IL_0a55
	IL_0a7f:                                                                        //ldloc.s				V_22
	IL_0a81:            Temp_24=V_22->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0a86:            if(Temp_24)goto IL_0a95;                                    //brtrue.s				IL_0a95
	IL_0a88:                                                                        //ldc.i4				0x4
	IL_0a8d:            V_25=4;                                                     //stloc				V_25
	IL_0a91:            /*goto IL_0a55;*/goto IL_0a93;                              //br.s				IL_0a55
	IL_0a93:            goto IL_0ac3;                                               //br.s				IL_0ac3
	IL_0a95:                                                                        //ldloc.s				V_22
	IL_0a97:            Temp_25=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0a9c:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_0aa1:            V_11=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(Temp_25);//stloc.s				V_11
	IL_0aa3:                                                                        //ldloc.s				V_9
	IL_0aa5:            Temp_26=V_9->M_x1();                                        //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0aaa:            Temp_27=Temp_26->Types;                                     //callvirt				Reflector::CodeModel::ITypeDeclarationCollection^ Reflector::CodeModel::INamespace::get_Types()
	IL_0aaf:                                                                        //ldloc.s				V_11
	IL_0ab1:            Temp_27->Remove(V_11);                                      //callvirt				void Reflector::CodeModel::ITypeDeclarationCollection::Remove(Reflector::CodeModel::ITypeDeclaration^)
	IL_0ab6:                                                                        //ldc.i4				0x1
	IL_0abb:            V_25=1;                                                     //stloc				V_25
	IL_0abf:            /*goto IL_0a55;*/goto IL_0ac1;                              //br.s				IL_0a55
	IL_0ac1:            goto IL_0a74;                                               //br.s				IL_0a74
	IL_0ac3:                                                                        //ldc.i4				0x2
	IL_0ac8:            V_25=2;                                                     //stloc				V_25
	IL_0acc:            /*goto IL_0a55;*/goto IL_0ace;                              //br.s				IL_0a55
	IL_0ace:            goto IL_09ec;                                               //leave				IL_09ec
	                    ;}
	                    finally{
	IL_0ad3:            goto IL_0aea;                                               //br.s				IL_0aea
	IL_0ad5:                                                                        //ldloc				V_25
	IL_0ad9:            switch(V_25){case 0:goto IL_0b0d;case 1:goto IL_0b21;case 2:goto IL_0afe;};//switch				(IL_0b0d,IL_0b21,IL_0afe)
	IL_0aea:                                                                        //ldloc.s				V_22
	IL_0aec:                                                                        //isinst				System::IDisposable
	IL_0af1:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_0af3:                                                                        //ldc.i4				0x2
	IL_0af8:            V_25=2;                                                     //stloc				V_25
	IL_0afc:            /*goto IL_0ad5;*/goto IL_0afe;                              //br.s				IL_0ad5
	IL_0afe:                                                                        //ldloc.s				V_23
	IL_0b00:            if(V_23==nullptr)goto IL_0b23;                              //brfalse.s				IL_0b23
	IL_0b02:                                                                        //ldc.i4				0x0
	IL_0b07:            V_25=0;                                                     //stloc				V_25
	IL_0b0b:            /*goto IL_0ad5;*/goto IL_0b0d;                              //br.s				IL_0ad5
	IL_0b0d:            goto IL_0b0f;                                               //br.s				IL_0b0f
	IL_0b0f:                                                                        //ldloc.s				V_23
	IL_0b11:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0b16:                                                                        //ldc.i4				0x1
	IL_0b1b:            V_25=1;                                                     //stloc				V_25
	IL_0b1f:            /*goto IL_0ad5;*/goto IL_0b21;                              //br.s				IL_0ad5
	IL_0b21:            goto IL_0b23;                                               //br.s				IL_0b23
	IL_0b23:                                                                        //endfinally
	                    ;}
	IL_0b24:                                                                        //ldloc.s				V_5
	IL_0b26:                                                                        //ldloc.s				V_9
	IL_0b28:            Temp_31=V_9->M_x1();                                        //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_0b2d:            Temp_32=Temp_31->Name;                                      //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_0b32:            Temp_33=V_5->M_x1(Temp_32);                                 //callvirt				Reflector::CodeModel::INamespace^ Root::T_x19::M_x1(System::String^)
	IL_0b37:            V_10=Temp_33;                                               //stloc.s				V_10
	IL_0b39:                                                                        //ldc.i4				0x12
	IL_0b3e:            V_25=18;                                                    //stloc				V_25
	IL_0b42:            /*goto IL_0005;*/goto IL_0b47;                              //br				IL_0005
	IL_0b47:                                                                        //ldloc.s				V_10
	IL_0b49:            if(V_10==nullptr)goto IL_0bad;                              //brfalse.s				IL_0bad
	IL_0b4b:                                                                        //ldc.i4				0x2
	IL_0b50:            V_25=2;                                                     //stloc				V_25
	IL_0b54:            /*goto IL_0005;*/goto IL_0b59;                              //br				IL_0005
	IL_0b59:            goto IL_0982;                                               //br				IL_0982
	IL_0b5e:            Temp_28=gcnew Root::T_x19();                                //newobj				void Root::T_x19::.ctor()
	IL_0b63:            V_16=Temp_28;                                               //stloc.s				V_16
	IL_0b65:                                                                        //ldloc.s				V_13
	IL_0b67:            Temp_29=V_13->Modules;                                      //callvirt				Reflector::CodeModel::IModuleCollection^ Reflector::CodeModel::IAssembly::get_Modules()
	IL_0b6c:            Temp_30=safe_cast<System::Collections::IEnumerable^>(Temp_29)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0b71:            V_22=Temp_30;                                               //stloc.s				V_22
	IL_0b73:                                                                        //ldc.i4				0x1b
	IL_0b78:            V_25=27;                                                    //stloc				V_25
	IL_0b7c:            /*goto IL_0005;*/goto IL_0b81;                              //br				IL_0005
	IL_0b81:            /*goto IL_0211;*/goto IL_020C01;                            //br				IL_0211
	IL_0b86:                                                                        //ldc.i4				0x17
	IL_0b8b:            V_25=23;                                                    //stloc				V_25
	IL_0b8f:            /*goto IL_0005;*/goto IL_0b94;                              //br				IL_0005
	IL_0b94:                                                                        //ldloc.3
	IL_0b95:            if(!V_3)goto IL_0bc6;                                       //brfalse				IL_0bc6
	IL_0b9a:                                                                        //ldc.i4				0x3
	IL_0b9f:            V_25=3;                                                     //stloc				V_25
	IL_0ba3:            /*goto IL_0005;*/goto IL_0ba8;                              //br				IL_0005
	IL_0ba8:            goto IL_03c0;                                               //br				IL_03c0
	IL_0bad:                                                                        //ldloc.s				V_8
	IL_0baf:                                                                        //ldc.i4.1
	IL_0bb0:                                                                        //sub
	IL_0bb1:            V_8=(V_8 - 1);                                              //stloc.s				V_8
	IL_0bb3:                                                                        //ldc.i4				0x13
	IL_0bb8:            V_25=19;                                                    //stloc				V_25
	IL_0bbc:            /*goto IL_0005;*/goto IL_0bc1;                              //br				IL_0005
	IL_0bc1:            goto IL_0ce6;                                               //br				IL_0ce6
	IL_0bc6:                                                                        //ldloc.1
	IL_0bc7:                                                                        //ldc.i4.1
	IL_0bc8:                                                                        //sub
	IL_0bc9:            V_1=(V_1 - 1);                                              //stloc.1
	IL_0bca:                                                                        //ldc.i4				0xf
	IL_0bcf:            V_25=15;                                                    //stloc				V_25
	IL_0bd3:            /*goto IL_0005;*/goto IL_0bd8;                              //br				IL_0005
	IL_0bd8:            goto IL_0a20;                                               //br				IL_0a20
	IL_0BD801:          try{
	IL_0bdd:                                                                        //ldc.i4				0x1
	IL_0be2:            V_25=1;                                                     //stloc				V_25
	IL_0be6:            /*goto IL_0bea;*/goto IL_0be8;                              //br.s				IL_0bea
	IL_0be8:            goto IL_0c0f;                                               //br.s				IL_0c0f
	IL_0bea:                                                                        //ldloc				V_25
	IL_0bee:            switch(V_25){case 0:goto IL_0c6a;case 1:goto IL_0be8;case 2:goto IL_0c56;case 3:goto IL_0c3a;case 4:goto IL_0c2a;case 5:goto IL_0c7a;case 6:goto IL_0c49;};//switch				(IL_0c6a,IL_0be8,IL_0c56,IL_0c3a,IL_0c2a,IL_0c7a,IL_0c49)
	IL_0c0f:            goto IL_0c4b;                                               //br.s				IL_0c4b
	IL_0c11:                                                                        //ldloc.s				V_22
	IL_0c13:            Temp_51=V_22->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0c18:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0c1d:            V_4=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_51);   //stloc.s				V_4
	IL_0c1f:                                                                        //ldc.i4				0x4
	IL_0c24:            V_25=4;                                                     //stloc				V_25
	IL_0c28:            /*goto IL_0bea;*/goto IL_0c2a;                              //br.s				IL_0bea
	IL_0c2a:                                                                        //ldloc.2
	IL_0c2b:                                                                        //ldloc.s				V_4
	IL_0c2d:            if(V_2!=V_4)goto IL_0c4b;                                   //bne.un.s				IL_0c4b
	IL_0c2f:                                                                        //ldc.i4				0x3
	IL_0c34:            V_25=3;                                                     //stloc				V_25
	IL_0c38:            /*goto IL_0bea;*/goto IL_0c3a;                              //br.s				IL_0bea
	IL_0c3a:            goto IL_0c3c;                                               //br.s				IL_0c3c
	IL_0c3c:                                                                        //ldc.i4.0
	IL_0c3d:            V_3=false;                                                  //stloc.3
	IL_0c3e:                                                                        //ldc.i4				0x6
	IL_0c43:            V_25=6;                                                     //stloc				V_25
	IL_0c47:            /*goto IL_0bea;*/goto IL_0c49;                              //br.s				IL_0bea
	IL_0c49:            goto IL_0c4b;                                               //br.s				IL_0c4b
	IL_0c4b:                                                                        //ldc.i4				0x2
	IL_0c50:            V_25=2;                                                     //stloc				V_25
	IL_0c54:            /*goto IL_0bea;*/goto IL_0c56;                              //br.s				IL_0bea
	IL_0c56:                                                                        //ldloc.s				V_22
	IL_0c58:            Temp_50=V_22->MoveNext();                                   //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0c5d:            if(Temp_50)goto IL_0c11;                                    //brtrue.s				IL_0c11
	IL_0c5f:                                                                        //ldc.i4				0x0
	IL_0c64:            V_25=0;                                                     //stloc				V_25
	IL_0c68:            /*goto IL_0bea;*/goto IL_0c6a;                              //br.s				IL_0bea
	IL_0c6a:            goto IL_0c6c;                                               //br.s				IL_0c6c
	IL_0c6c:                                                                        //ldc.i4				0x5
	IL_0c71:            V_25=5;                                                     //stloc				V_25
	IL_0c75:            /*goto IL_0bea;*/goto IL_0c7a;                              //br				IL_0bea
	IL_0c7a:            goto IL_0b86;                                               //leave				IL_0b86
	                    ;}
	                    finally{
	IL_0c7f:            goto IL_0c96;                                               //br.s				IL_0c96
	IL_0c81:                                                                        //ldloc				V_25
	IL_0c85:            switch(V_25){case 0:goto IL_0cb9;case 1:goto IL_0caa;case 2:goto IL_0ccd;};//switch				(IL_0cb9,IL_0caa,IL_0ccd)
	IL_0c96:                                                                        //ldloc.s				V_22
	IL_0c98:                                                                        //isinst				System::IDisposable
	IL_0c9d:            V_23=dynamic_cast<System::IDisposable^>(V_22);              //stloc.s				V_23
	IL_0c9f:                                                                        //ldc.i4				0x1
	IL_0ca4:            V_25=1;                                                     //stloc				V_25
	IL_0ca8:            /*goto IL_0c81;*/goto IL_0caa;                              //br.s				IL_0c81
	IL_0caa:                                                                        //ldloc.s				V_23
	IL_0cac:            if(V_23==nullptr)goto IL_0ccf;                              //brfalse.s				IL_0ccf
	IL_0cae:                                                                        //ldc.i4				0x0
	IL_0cb3:            V_25=0;                                                     //stloc				V_25
	IL_0cb7:            /*goto IL_0c81;*/goto IL_0cb9;                              //br.s				IL_0c81
	IL_0cb9:            goto IL_0cbb;                                               //br.s				IL_0cbb
	IL_0cbb:                                                                        //ldloc.s				V_23
	IL_0cbd:            /*V_23->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0cc2:                                                                        //ldc.i4				0x2
	IL_0cc7:            V_25=2;                                                     //stloc				V_25
	IL_0ccb:            /*goto IL_0c81;*/goto IL_0ccd;                              //br.s				IL_0c81
	IL_0ccd:            goto IL_0ccf;                                               //br.s				IL_0ccf
	IL_0ccf:                                                                        //endfinally
	                    ;}
	IL_0cd0:                                                                        //ldc.i4.0
	IL_0cd1:            V_12=0;                                                     //stloc.s				V_12
	IL_0cd3:                                                                        //ldc.i4				0x1a
	IL_0cd8:            V_25=26;                                                    //stloc				V_25
	IL_0cdc:            /*goto IL_0005;*/goto IL_0ce1;                              //br				IL_0005
	IL_0ce1:            goto IL_0752;                                               //br				IL_0752
	IL_0ce6:                                                                        //ldc.i4				0x20
	IL_0ceb:            V_25=32;                                                    //stloc				V_25
	IL_0cef:            /*goto IL_0005;*/goto IL_0cf4;                              //br				IL_0005
	IL_0cf4:                                                                        //ldloc.s				V_8
	IL_0cf6:                                                                        //ldc.i4.0
	IL_0cf7:            if(V_8>=0)goto IL_0457;                                     //bge				IL_0457
	IL_0cfc:                                                                        //ldc.i4				0x11
	IL_0d01:            V_25=17;                                                    //stloc				V_25
	IL_0d05:            /*goto IL_0005;*/goto IL_0d0a;                              //br				IL_0005
	IL_0d0a:            goto IL_0d0c;                                               //br.s				IL_0d0c
	IL_0d0c:                                                                        //ldarg.0
	IL_0d0d:            this->EndUpdate();                                          //call				void System::Windows::Forms::TreeView::EndUpdate()
	IL_0d12:                                                                        //ldc.i4				0x18
	IL_0d17:            V_25=24;                                                    //stloc				V_25
	IL_0d1b:            /*goto IL_0005;*/goto IL_0d20;                              //br				IL_0005
	IL_0d20:                                                                        //ldarg.0
	IL_0d21:            Temp_36=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0d26:            Temp_37=Temp_36->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0d2b:            if(Temp_37!=0)goto IL_01ca;                                 //brtrue				IL_01ca
	IL_0d30:                                                                        //ldc.i4				0x1f
	IL_0d35:            V_25=31;                                                    //stloc				V_25
	IL_0d39:            /*goto IL_0005;*/goto IL_0d3e;                              //br				IL_0005
	IL_0d3e:            goto IL_043a;                                               //br				IL_043a
	IL_0d43:                                                                        //ldloc.s				V_12
	IL_0d45:                                                                        //ldc.i4.1
	IL_0d46:                                                                        //add
	IL_0d47:            V_12=(V_12 + 1);                                            //stloc.s				V_12
	IL_0d49:                                                                        //ldc.i4				0x19
	IL_0d4e:            V_25=25;                                                    //stloc				V_25
	IL_0d52:            /*goto IL_0005;*/goto IL_0d57;                              //br				IL_0005
	IL_0d57:            goto IL_0752;                                               //br				IL_0752
	IL_0d5c:            return;                                                     //ret

}
inline Root::T_x26^ Root::T_x25::M_x1(Reflector::CodeModel::IAssembly^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x26^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0049;case 1:goto IL_007b;case 2:goto IL_00d1;case 3:goto IL_00b7;case 4:goto IL_00a7;case 5:goto IL_008b;case 6:goto IL_0038;case 7:goto IL_006d;};//switch				(IL_0049,IL_007b,IL_00d1,IL_00b7,IL_00a7,IL_008b,IL_0038,IL_006d)
	IL_002b:                                                                        //ldc.i4.0
	IL_002c:            V_0=0;                                                      //stloc.0
	IL_002d:                                                                        //ldc.i4				0x6
	IL_0032:            V_2=6;                                                      //stloc				V_2
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:            goto IL_007d;                                               //br.s				IL_007d
	IL_003a:                                                                        //ldloc.0
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:                                                                        //add
	IL_003d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_2=0;                                                      //stloc				V_2
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_007d;                                               //br.s				IL_007d
	IL_004b:                                                                        //ldloc.1
	IL_004c:            return V_1;                                                 //ret
	IL_004d:            goto IL_0050;                                               //br.s				IL_0050
	IL_004f:                                                                        //break
	IL_0050:                                                                        //ldarg.0
	IL_0051:            Temp_3=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0056:                                                                        //ldloc.0
	IL_0057:            Temp_4=Temp_3[V_0];                                         //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_005c:                                                                        //isinst				Root::T_x26
	IL_0061:            V_1=dynamic_cast<Root::T_x26^>(Temp_4);                     //stloc.1
	IL_0062:                                                                        //ldc.i4				0x7
	IL_0067:            V_2=7;                                                      //stloc				V_2
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:                                                                        //ldloc.1
	IL_006e:            if(V_1==nullptr)goto IL_003a;                               //brfalse.s				IL_003a
	IL_0070:                                                                        //ldc.i4				0x1
	IL_0075:            V_2=1;                                                      //stloc				V_2
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_007d:                                                                        //ldc.i4				0x5
	IL_0082:            V_2=5;                                                      //stloc				V_2
	IL_0086:            /*goto IL_0002;*/goto IL_008b;                              //br				IL_0002
	IL_008b:                                                                        //ldloc.0
	IL_008c:                                                                        //ldarg.0
	IL_008d:            Temp_1=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0092:            Temp_2=Temp_1->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0097:            if(V_0<Temp_2)goto IL_004d;                                 //blt.s				IL_004d
	IL_0099:                                                                        //ldc.i4				0x4
	IL_009e:            V_2=4;                                                      //stloc				V_2
	IL_00a2:            /*goto IL_0002;*/goto IL_00a7;                              //br				IL_0002
	IL_00a7:            goto IL_00d6;                                               //br.s				IL_00d6
	IL_00a9:                                                                        //ldc.i4				0x3
	IL_00ae:            V_2=3;                                                      //stloc				V_2
	IL_00b2:            /*goto IL_0002;*/goto IL_00b7;                              //br				IL_0002
	IL_00b7:                                                                        //ldarg.1
	IL_00b8:                                                                        //ldloc.1
	IL_00b9:            Temp_0=V_1->M_x4();                                         //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_00be:            if(A_0!=Temp_0)goto IL_003a;                                //bne.un				IL_003a
	IL_00c3:                                                                        //ldc.i4				0x2
	IL_00c8:            V_2=2;                                                      //stloc				V_2
	IL_00cc:            /*goto IL_0002;*/goto IL_00d1;                              //br				IL_0002
	IL_00d1:            goto IL_004b;                                               //br				IL_004b
	IL_00d6:                                                                        //ldnull
	IL_00d7:            return nullptr;                                             //ret

}
inline Root::T_x39^ Root::T_x25::M_x1(Reflector::CodeModel::IModule^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IAssembly^ Temp_0 = nullptr;
	Root::T_x26^ Temp_1 = nullptr;
	Root::T_x39^ Temp_2 = nullptr;
	//local variables.
	Root::T_x26^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            Temp_0=A_0->Assembly;                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_0007:            Temp_1=this->M_x1(Temp_0);                                  //call				Root::T_x26^ Root::T_x25::M_x1(Reflector::CodeModel::IAssembly^)
	IL_000c:            V_0=Temp_1;                                                 //stloc.0
	IL_000d:                                                                        //ldloc.0
	IL_000e:            if(V_0==nullptr)goto IL_001a;                               //brfalse.s				IL_001a
	IL_0010:            goto IL_0012;                                               //br.s				IL_0012
	IL_0012:                                                                        //ldloc.0
	IL_0013:                                                                        //ldarg.1
	IL_0014:            Temp_2=V_0->M_x1(A_0);                                      //callvirt				Root::T_x39^ Root::T_x26::M_x1(Reflector::CodeModel::IModule^)
	IL_0019:            return Temp_2;                                              //ret
	IL_001a:                                                                        //ldc.i4.0
	IL_001b:                                                                        //dup
	IL_001c:                                                                        //dup
	IL_001d:                                                                        //ldc.i4.0
	IL_001e:                                                                        //add
	IL_001f:                                                                        //bgt				IL_001b
	IL_0024:                                                                        //pop
	IL_0025:                                                                        //ldnull
	IL_0026:            return nullptr;                                             //ret

}
inline Root::T_x45^ Root::T_x25::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	Root::T_x41^ Temp_2 = nullptr;
	Root::T_x45^ Temp_3 = nullptr;
	Reflector::IConfiguration^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::Object^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Root::T_x41^ Temp_11 = nullptr;
	Root::T_x45^ Temp_12 = nullptr;
	Root::T_x45^ Temp_13 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_14 = nullptr;
	Root::T_x45^ Temp_15 = nullptr;
	Root::T_x39^ Temp_16 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Root::T_x45^ V_1 = nullptr;
	Root::T_x41^ V_2 = nullptr;
	Reflector::CodeModel::IModule^ V_3 = nullptr;
	Root::T_x39^ V_4 = nullptr;
	Root::T_x41^ V_5 = nullptr;
	Root::T_x45^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_8=16;                                                     //stloc				V_8
	IL_0009:            goto IL_004c;                                               //br.s				IL_004c
	IL_000b:                                                                        //ldloc				V_7
	IL_000f:            switch(V_7){case 0:goto IL_01de;case 1:goto IL_00e5;case 2:goto IL_0090;case 3:goto IL_0116;case 4:goto IL_0171;case 5:goto IL_019f;case 6:goto IL_0144;case 7:goto IL_0102;case 8:goto IL_0182;case 9:goto IL_0074;case 10:goto IL_00d0;case 11:goto IL_0063;case 12:goto IL_00a7;case 13:goto IL_012f;};//switch				(IL_01de,IL_00e5,IL_0090,IL_0116,IL_0171,IL_019f,IL_0144,IL_0102,IL_0182,IL_0074,IL_00d0,IL_0063,IL_00a7,IL_012f)
	IL_004c:                                                                        //ldarg.1
	IL_004d:            Temp_0=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0052:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0057:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_0058:                                                                        //ldc.i4				0xb
	IL_005d:            V_7=11;                                                     //stloc				V_7
	IL_0061:            /*goto IL_000b;*/goto IL_0063;                              //br.s				IL_000b
	IL_0063:                                                                        //ldloc.0
	IL_0064:            if(V_0==nullptr)goto IL_0191;                               //brfalse				IL_0191
	IL_0069:                                                                        //ldc.i4				0x9
	IL_006e:            V_7=9;                                                      //stloc				V_7
	IL_0072:            /*goto IL_000b;*/goto IL_0074;                              //br.s				IL_000b
	IL_0074:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_0076:                                                                        //ldarg.1
	IL_0077:            Temp_9=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_007c:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_0081:            V_3=dynamic_cast<Reflector::CodeModel::IModule^>(Temp_9);   //stloc.3
	IL_0082:                                                                        //ldc.i4				0x2
	IL_0087:            V_7=2;                                                      //stloc				V_7
	IL_008b:            /*goto IL_000b;*/goto IL_0090;                              //br				IL_000b
	IL_0090:            goto IL_0093;                                               //br.s				IL_0093
	IL_0092:                                                                        //break
	IL_0093:                                                                        //ldloc.3
	IL_0094:            if(V_3==nullptr)goto IL_01e3;                               //brfalse				IL_01e3
	IL_0099:                                                                        //ldc.i4				0xc
	IL_009e:            V_7=12;                                                     //stloc				V_7
	IL_00a2:            /*goto IL_000b;*/goto IL_00a7;                              //br				IL_000b
	IL_00a7:            goto IL_0118;                                               //br.s				IL_0118
	IL_00a9:                                                                        //ldloc.2
	IL_00aa:                                                                        //ldarg.1
	IL_00ab:            Temp_13=V_2->M_x1(A_0);                                     //callvirt				Root::T_x45^ Root::T_x41::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00b0:            return Temp_13;                                             //ret
	IL_00b1:                                                                        //ldnull
	IL_00b2:            return nullptr;                                             //ret
	IL_00b3:                                                                        //ldloc.s				V_4
	IL_00b5:                                                                        //ldarg.1
	IL_00b6:            Temp_10=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00bb:            Temp_11=V_4->M_x1(Temp_10);                                 //callvirt				Root::T_x41^ Root::T_x39::M_x1(System::String^)
	IL_00c0:            V_5=Temp_11;                                                //stloc.s				V_5
	IL_00c2:                                                                        //ldc.i4				0xa
	IL_00c7:            V_7=10;                                                     //stloc				V_7
	IL_00cb:            /*goto IL_000b;*/goto IL_00d0;                              //br				IL_000b
	IL_00d0:                                                                        //ldloc.s				V_5
	IL_00d2:            if(V_5==nullptr)goto IL_01e3;                               //brfalse				IL_01e3
	IL_00d7:                                                                        //ldc.i4				0x1
	IL_00dc:            V_7=1;                                                      //stloc				V_7
	IL_00e0:            /*goto IL_000b;*/goto IL_00e5;                              //br				IL_000b
	IL_00e5:            goto IL_0149;                                               //br.s				IL_0149
	IL_00e7:                                                                        //ldarg.0
	IL_00e8:                                                                        //ldloc.0
	IL_00e9:            Temp_14=V_0->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00ee:            Temp_15=this->M_x1(Temp_14);                                //call				Root::T_x45^ Root::T_x25::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_00f3:            V_1=Temp_15;                                                //stloc.1
	IL_00f4:                                                                        //ldc.i4				0x7
	IL_00f9:            V_7=7;                                                      //stloc				V_7
	IL_00fd:            /*goto IL_000b;*/goto IL_0102;                              //br				IL_000b
	IL_0102:                                                                        //ldloc.1
	IL_0103:            if(V_1!=nullptr)goto IL_0187;                               //brtrue				IL_0187
	IL_0108:                                                                        //ldc.i4				0x3
	IL_010d:            V_7=3;                                                      //stloc				V_7
	IL_0111:            /*goto IL_000b;*/goto IL_0116;                              //br				IL_000b
	IL_0116:            goto IL_00b1;                                               //br.s				IL_00b1
	IL_0118:                                                                        //ldarg.0
	IL_0119:                                                                        //ldloc.3
	IL_011a:            Temp_16=this->M_x1(V_3);                                    //call				Root::T_x39^ Root::T_x25::M_x1(Reflector::CodeModel::IModule^)
	IL_011f:            V_4=Temp_16;                                                //stloc.s				V_4
	IL_0121:                                                                        //ldc.i4				0xd
	IL_0126:            V_7=13;                                                     //stloc				V_7
	IL_012a:            /*goto IL_000b;*/goto IL_012f;                              //br				IL_000b
	IL_012f:                                                                        //ldloc.s				V_4
	IL_0131:            if(V_4==nullptr)goto IL_01e3;                               //brfalse				IL_01e3
	IL_0136:                                                                        //ldc.i4				0x6
	IL_013b:            V_7=6;                                                      //stloc				V_7
	IL_013f:            /*goto IL_000b;*/goto IL_0144;                              //br				IL_000b
	IL_0144:            goto IL_00b3;                                               //br				IL_00b3
	IL_0149:                                                                        //ldloc.s				V_5
	IL_014b:                                                                        //ldarg.1
	IL_014c:            Temp_3=V_5->M_x1(A_0);                                      //callvirt				Root::T_x45^ Root::T_x41::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_0151:            V_6=Temp_3;                                                 //stloc.s				V_6
	IL_0153:                                                                        //ldloc.s				V_6
	IL_0155:            return V_6;                                                 //ret
	IL_0156:                                                                        //ldarg.0
	IL_0157:                                                                        //ldarg.1
	IL_0158:            Temp_1=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Namespace;//callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_015d:            Temp_2=this->M_x1(Temp_1);                                  //call				Root::T_x41^ Root::T_x25::M_x1(System::String^)
	IL_0162:            V_2=Temp_2;                                                 //stloc.2
	IL_0163:                                                                        //ldc.i4				0x4
	IL_0168:            V_7=4;                                                      //stloc				V_7
	IL_016c:            /*goto IL_000b;*/goto IL_0171;                              //br				IL_000b
	IL_0171:                                                                        //ldloc.2
	IL_0172:            if(V_2==nullptr)goto IL_018f;                               //brfalse.s				IL_018f
	IL_0174:                                                                        //ldc.i4				0x8
	IL_0179:            V_7=8;                                                      //stloc				V_7
	IL_017d:            /*goto IL_000b;*/goto IL_0182;                              //br				IL_000b
	IL_0182:            goto IL_00a9;                                               //br				IL_00a9
	IL_0187:                                                                        //ldloc.1
	IL_0188:                                                                        //ldarg.1
	IL_0189:            Temp_12=V_1->M_x2(A_0);                                     //callvirt				Root::T_x45^ Root::T_x45::M_x2(Reflector::CodeModel::ITypeDeclaration^)
	IL_018e:            return Temp_12;                                             //ret
	IL_018f:                                                                        //ldnull
	IL_0190:            return nullptr;                                             //ret
	IL_0191:                                                                        //ldc.i4				0x5
	IL_0196:            V_7=5;                                                      //stloc				V_7
	IL_019a:            /*goto IL_000b;*/goto IL_019f;                              //br				IL_000b
	IL_019f:                                                                        //ldarg.0
	IL_01a0:            Temp_4=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x25 F_x2
	IL_01a5:                                                                        //ldstr				L"\x682D\x5C2F\x5331\x4033\x4235\x5D37\x5439\x723B\x5F3D\x2D3F\x2741\x3743\x3645\x2947\x2949\x294B\x3D4D"
	IL_01aa:                                                                        //ldloc				V_8
	IL_01ae:            Temp_5=a(L"\x682D\x5C2F\x5331\x4033\x4235\x5D37\x5439\x723B\x5F3D\x2D3F\x2741\x3743\x3645\x2947\x2949\x294B\x3D4D",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b3:            Temp_6=Temp_4->GetProperty(Temp_5);                         //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_01b8:                                                                        //ldstr				L"\x5A2D\x422F\x4731\x5133"
	IL_01bd:                                                                        //ldloc				V_8
	IL_01c1:            Temp_7=a(L"\x5A2D\x422F\x4731\x5133",V_8);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01c6:            Temp_8=(Temp_6 == Temp_7);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01cb:            if(!Temp_8)goto IL_0076;                                    //brfalse				IL_0076
	IL_01d0:                                                                        //ldc.i4				0x0
	IL_01d5:            V_7=0;                                                      //stloc				V_7
	IL_01d9:            /*goto IL_000b;*/goto IL_01de;                              //br				IL_000b
	IL_01de:            goto IL_0156;                                               //br				IL_0156
	IL_01e3:                                                                        //ldnull
	IL_01e4:            return nullptr;                                             //ret

}
inline void Root::T_x25::M_x1(Reflector::ICommandBar^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IServiceProvider^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	Reflector::ICommandBarItemCollection^ Temp_3 = nullptr;
	System::Collections::IEnumerator^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	//local variables.
	Root::T_x107^ V_0 = nullptr;
	Reflector::ICommandBarItem^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x4();                                        //call				System::IServiceProvider^ Root::T_x25::M_x4()
	IL_0006:                                                                        //ldtoken				Root::T_x107
	IL_000b:            Temp_1=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0010:            Temp_2=Temp_0->GetService(Temp_1);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0015:                                                                        //castclass				Root::T_x107
	IL_001a:            V_0=safe_cast<Root::T_x107^>(Temp_2);                       //stloc.0
	IL_001b:                                                                        //ldarg.1
	IL_001c:            Temp_3=A_0->Items;                                          //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0021:            Temp_4=safe_cast<System::Collections::IEnumerable^>(Temp_3)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0026:            V_3=Temp_4;                                                 //stloc.3
	IL_0027:            /*goto IL_0029;*/goto IL_002701;                            //br.s				IL_0029
	IL_002701:          try{
	IL_0029:                                                                        //ldc.i4				0x4
	IL_002e:            V_5=4;                                                      //stloc				V_5
	IL_0032:            /*goto IL_0036;*/goto IL_0034;                              //br.s				IL_0036
	IL_0034:            goto IL_0063;                                               //br.s				IL_0063
	IL_0036:                                                                        //ldloc				V_5
	IL_003a:            switch(V_5){case 0:goto IL_00c2;case 1:goto IL_0116;case 2:goto IL_009c;case 3:goto IL_00dd;case 4:goto IL_0034;case 5:goto IL_00b2;case 6:goto IL_0106;case 7:goto IL_008f;case 8:goto IL_007c;};//switch				(IL_00c2,IL_0116,IL_009c,IL_00dd,IL_0034,IL_00b2,IL_0106,IL_008f,IL_007c)
	IL_0063:            goto IL_0091;                                               //br.s				IL_0091
	IL_0065:                                                                        //ldloc.3
	IL_0066:            Temp_7=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006b:                                                                        //castclass				Reflector::ICommandBarItem
	IL_0070:            V_1=safe_cast<Reflector::ICommandBarItem^>(Temp_7);         //stloc.1
	IL_0071:                                                                        //ldc.i4				0x8
	IL_0076:            V_5=8;                                                      //stloc				V_5
	IL_007a:            /*goto IL_0036;*/goto IL_007c;                              //br.s				IL_0036
	IL_007c:                                                                        //ldloc.1
	IL_007d:            Temp_10=V_1->Value;                                         //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0082:            if(Temp_10==nullptr)goto IL_0091;                           //brfalse.s				IL_0091
	IL_0084:                                                                        //ldc.i4				0x7
	IL_0089:            V_5=7;                                                      //stloc				V_5
	IL_008d:            /*goto IL_0036;*/goto IL_008f;                              //br.s				IL_0036
	IL_008f:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_0091:                                                                        //ldc.i4				0x2
	IL_0096:            V_5=2;                                                      //stloc				V_5
	IL_009a:            /*goto IL_0036;*/goto IL_009c;                              //br.s				IL_0036
	IL_009c:                                                                        //ldloc.3
	IL_009d:            Temp_6=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00a2:            if(Temp_6)goto IL_0065;                                     //brtrue.s				IL_0065
	IL_00a4:            goto IL_00a7;                                               //br.s				IL_00a7
	IL_00a6:                                                                        //break
	IL_00a7:                                                                        //ldc.i4				0x5
	IL_00ac:            V_5=5;                                                      //stloc				V_5
	IL_00b0:            /*goto IL_0036;*/goto IL_00b2;                              //br.s				IL_0036
	IL_00b2:            goto IL_0108;                                               //br.s				IL_0108
	IL_00b4:                                                                        //ldc.i4				0x0
	IL_00b9:            V_5=0;                                                      //stloc				V_5
	IL_00bd:            /*goto IL_0036;*/goto IL_00c2;                              //br				IL_0036
	IL_00c2:                                                                        //ldloc.1
	IL_00c3:            Temp_5=V_1->Value;                                          //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_00c8:                                                                        //isinst				System::String
	IL_00cd:            if(dynamic_cast<System::String^>(Temp_5)==nullptr)goto IL_0091;//brfalse.s				IL_0091
	IL_00cf:                                                                        //ldc.i4				0x3
	IL_00d4:            V_5=3;                                                      //stloc				V_5
	IL_00d8:            /*goto IL_0036;*/goto IL_00dd;                              //br				IL_0036
	IL_00dd:            goto IL_00df;                                               //br.s				IL_00df
	IL_00df:                                                                        //ldloc.1
	IL_00e0:            Temp_8=V_1->Value;                                          //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_00e5:                                                                        //castclass				System::String
	IL_00ea:            V_2=safe_cast<System::String^>(Temp_8);                     //stloc.2
	IL_00eb:                                                                        //ldloc.1
	IL_00ec:                                                                        //ldloc.0
	IL_00ed:                                                                        //ldloc.2
	IL_00ee:            Temp_9=safe_cast<Root::T_x24^>(V_0)->M_x2(V_2);             //callvirt				System::Boolean Root::T_x24::M_x2(System::String^)
	IL_00f3:            V_1->Enabled=Temp_9;                                        //callvirt				void Reflector::ICommandBarItem::set_Enabled(System::Boolean)
	IL_00f8:                                                                        //ldc.i4				0x6
	IL_00fd:            V_5=6;                                                      //stloc				V_5
	IL_0101:            /*goto IL_0036;*/goto IL_0106;                              //br				IL_0036
	IL_0106:            goto IL_0091;                                               //br.s				IL_0091
	IL_0108:                                                                        //ldc.i4				0x1
	IL_010d:            V_5=1;                                                      //stloc				V_5
	IL_0111:            /*goto IL_0036;*/goto IL_0116;                              //br				IL_0036
	IL_0116:            goto IL_0168;                                               //leave.s				IL_0168
	                    ;}
	                    finally{
	IL_0118:            goto IL_012f;                                               //br.s				IL_012f
	IL_011a:                                                                        //ldloc				V_6
	IL_011e:            switch(V_6){case 0:goto IL_0142;case 1:goto IL_0165;case 2:goto IL_0151;};//switch				(IL_0142,IL_0165,IL_0151)
	IL_012f:                                                                        //ldloc.3
	IL_0130:                                                                        //isinst				System::IDisposable
	IL_0135:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_0137:                                                                        //ldc.i4				0x0
	IL_013c:            V_6=0;                                                      //stloc				V_6
	IL_0140:            /*goto IL_011a;*/goto IL_0142;                              //br.s				IL_011a
	IL_0142:                                                                        //ldloc.s				V_4
	IL_0144:            if(V_4==nullptr)goto IL_0167;                               //brfalse.s				IL_0167
	IL_0146:                                                                        //ldc.i4				0x2
	IL_014b:            V_6=2;                                                      //stloc				V_6
	IL_014f:            /*goto IL_011a;*/goto IL_0151;                              //br.s				IL_011a
	IL_0151:            goto IL_0153;                                               //br.s				IL_0153
	IL_0153:                                                                        //ldloc.s				V_4
	IL_0155:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_015a:                                                                        //ldc.i4				0x1
	IL_015f:            V_6=1;                                                      //stloc				V_6
	IL_0163:            /*goto IL_011a;*/goto IL_0165;                              //br.s				IL_011a
	IL_0165:            goto IL_0167;                                               //br.s				IL_0167
	IL_0167:                                                                        //endfinally
	                    ;}
	IL_0168:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(Reflector::ICommandBar^ A_0,System::Drawing::Image^ A_1,System::String^ A_2,System::Windows::Forms::Keys A_3,System::String^ A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::ICommandBarItemCollection^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	Reflector::ICommandBarButton^ Temp_2 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.1
	IL_0004:            Temp_0=A_0->Items;                                          //callvirt				Reflector::ICommandBarItemCollection^ Reflector::ICommandBar::get_Items()
	IL_0009:                                                                        //ldarg.3
	IL_000a:                                                                        //ldarg.2
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldftn				void Root::T_x25::M_x1(System::Object^,System::EventArgs^)
	IL_0012:            Temp_1=gcnew System::EventHandler(this,&Root::T_x25::M_x1); //newobj				void System::EventHandler::.ctor(System::Object^,System::IntPtr)
	IL_0017:                                                                        //ldarg.s				A_3
	IL_0019:            Temp_2=Temp_0->AddButton(A_2,A_1,Temp_1,A_3);               //callvirt				Reflector::ICommandBarButton^ Reflector::ICommandBarItemCollection::AddButton(System::String^,System::Drawing::Image^,System::EventHandler^,System::Windows::Forms::Keys)
	IL_001e:            V_0=Temp_2;                                                 //stloc.0
	IL_001f:                                                                        //ldloc.0
	IL_0020:                                                                        //ldarg.s				A_4
	IL_0022:            safe_cast<Reflector::ICommandBarItem^>(V_0)->Value=safe_cast<System::Object^>(A_4);//callvirt				void Reflector::ICommandBarItem::set_Value(System::Object^)
	IL_0027:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(Reflector::IConfiguration^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            this->F_x2=A_0;                                             //stfld				Reflector::IConfiguration^ Root::T_x25 F_x2
	IL_0007:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::EventArgs^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::EventHandler^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0006:            if(Temp_0==nullptr)goto IL_0019;                            //brfalse.s				IL_0019
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0010:                                                                        //ldarg.0
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1(safe_cast<System::Object^>(this),A_0);               //callvirt				void System::EventHandler::Invoke(System::Object^,System::EventArgs^)
	IL_0017:            goto IL_0019;                                               //br.s				IL_0019
	IL_0019:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::EventHandler^ A_0)
//Reflector::IAssemblyBrowser^::remove_ActiveItemChanged by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Remove(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Remove(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Object^ A_0)
//Reflector::IAssemblyBrowser^::set_ActiveItem by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Windows::Forms::DialogResult Temp_3 = (System::Windows::Forms::DialogResult)0;
	Reflector::CodeModel::IMethodDeclaration^ Temp_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_5 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_6 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_7 = nullptr;
	Root::T_x31^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::Windows::Forms::DialogResult Temp_12 = (System::Windows::Forms::DialogResult)0;
	Reflector::CodeModel::IFieldDeclaration^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Windows::Forms::DialogResult Temp_17 = (System::Windows::Forms::DialogResult)0;
	Root::T_x45^ Temp_18 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_19 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_20 = nullptr;
	Reflector::CodeModel::IType^ Temp_21 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ Temp_22 = nullptr;
	Root::T_x45^ Temp_23 = nullptr;
	Root::T_x26^ Temp_24 = nullptr;
	Reflector::CodeModel::IEventDeclaration^ Temp_25 = nullptr;
	Reflector::CodeModel::IPropertyDeclaration^ Temp_26 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_27 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyReference^ V_0 = nullptr;
	Reflector::CodeModel::IAssembly^ V_1 = nullptr;
	Root::T_x26^ V_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_3 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_4 = nullptr;
	Root::T_x45^ V_5 = nullptr;
	Reflector::CodeModel::IMemberReference^ V_6 = nullptr;
	Reflector::CodeModel::IMemberDeclaration^ V_7 = nullptr;
	Reflector::CodeModel::IMethodReference^ V_8 = nullptr;
	Reflector::CodeModel::IFieldReference^ V_9 = nullptr;
	Reflector::CodeModel::IEventReference^ V_10 = nullptr;
	Reflector::CodeModel::IPropertyReference^ V_11 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_12 = nullptr;
	Root::T_x45^ V_13 = nullptr;
	Root::T_x31^ V_14 = nullptr;
	System::Int32 V_15 = 0;
	System::Int32 V_16 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x13
	IL_0005:            V_16=19;                                                    //stloc				V_16
	IL_0009:            goto IL_00bb;                                               //br				IL_00bb
	IL_000e:                                                                        //ldloc				V_15
	IL_0012:            switch(V_15){case 0:goto IL_040a;case 1:goto IL_0496;case 2:goto IL_0317;case 3:goto IL_038e;case 4:goto IL_03d2;case 5:goto IL_0131;case 6:goto IL_0144;case 7:goto IL_0241;case 8:goto IL_029d;case 9:goto IL_04dd;case 10:goto IL_04ab;case 11:goto IL_0170;case 12:goto IL_03a3;case 13:goto IL_035f;case 14:goto IL_0373;case 15:goto IL_015d;case 16:goto IL_0468;case 17:goto IL_01c2;case 18:goto IL_0526;case 19:goto IL_047a;case 20:goto IL_025b;case 21:goto IL_0227;case 22:goto IL_050a;case 23:goto IL_0437;case 24:goto IL_0331;case 25:goto IL_02da;case 26:goto IL_0185;case 27:goto IL_0345;case 28:goto IL_0115;case 29:goto IL_01de;case 30:goto IL_041f;case 31:goto IL_03bd;case 32:goto IL_0214;case 33:goto IL_0100;case 34:goto IL_01fc;case 35:goto IL_044c;case 36:goto IL_03ee;case 37:goto IL_028b;case 38:goto IL_04f1;case 39:goto IL_00e4;case 40:goto IL_00d0;};//switch				(IL_040a,IL_0496,IL_0317,IL_038e,IL_03d2,IL_0131,IL_0144,IL_0241,IL_029d,IL_04dd,IL_04ab,IL_0170,IL_03a3,IL_035f,IL_0373,IL_015d,IL_0468,IL_01c2,IL_0526,IL_047a,IL_025b,IL_0227,IL_050a,IL_0437,IL_0331,IL_02da,IL_0185,IL_0345,IL_0115,IL_01de,IL_041f,IL_03bd,IL_0214,IL_0100,IL_01fc,IL_044c,IL_03ee,IL_028b,IL_04f1,IL_00e4,IL_00d0)
	IL_00bb:                                                                        //ldarg.1
	IL_00bc:                                                                        //isinst				Reflector::CodeModel::IAssemblyReference
	IL_00c1:            V_0=dynamic_cast<Reflector::CodeModel::IAssemblyReference^>(A_0);//stloc.0
	IL_00c2:                                                                        //ldc.i4				0x28
	IL_00c7:            V_15=40;                                                    //stloc				V_15
	IL_00cb:            /*goto IL_000e;*/goto IL_00d0;                              //br				IL_000e
	IL_00d0:                                                                        //ldloc.0
	IL_00d1:            if(V_0==nullptr)goto IL_034a;                               //brfalse				IL_034a
	IL_00d6:                                                                        //ldc.i4				0x27
	IL_00db:            V_15=39;                                                    //stloc				V_15
	IL_00df:            /*goto IL_000e;*/goto IL_00e4;                              //br				IL_000e
	IL_00e4:            goto IL_031c;                                               //br				IL_031c
	IL_00e9:                                                                        //ldloc.s				V_6
	IL_00eb:                                                                        //isinst				Reflector::CodeModel::IEventReference
	IL_00f0:            V_10=dynamic_cast<Reflector::CodeModel::IEventReference^>(V_6);//stloc.s				V_10
	IL_00f2:                                                                        //ldc.i4				0x21
	IL_00f7:            V_15=33;                                                    //stloc				V_15
	IL_00fb:            /*goto IL_000e;*/goto IL_0100;                              //br				IL_000e
	IL_0100:                                                                        //ldloc.s				V_10
	IL_0102:            if(V_10==nullptr)goto IL_03f3;                              //brfalse				IL_03f3
	IL_0107:                                                                        //ldc.i4				0x1c
	IL_010c:            V_15=28;                                                    //stloc				V_15
	IL_0110:            /*goto IL_000e;*/goto IL_0115;                              //br				IL_000e
	IL_0115:            goto IL_01c7;                                               //br				IL_01c7
	IL_011a:                                                                        //ldloc.s				V_8
	IL_011c:            Temp_7=V_8->GenericMethod;                                  //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_0121:            V_8=Temp_7;                                                 //stloc.s				V_8
	IL_0123:                                                                        //ldc.i4				0x5
	IL_0128:            V_15=5;                                                     //stloc				V_15
	IL_012c:            /*goto IL_000e;*/goto IL_0131;                              //br				IL_000e
	IL_0131:            goto IL_04f3;                                               //br				IL_04f3
	IL_0136:                                                                        //ldc.i4				0x6
	IL_013b:            V_15=6;                                                     //stloc				V_15
	IL_013f:            /*goto IL_000e;*/goto IL_0144;                              //br				IL_000e
	IL_0144:                                                                        //ldloc.3
	IL_0145:            Temp_5=V_3->GenericType;                                    //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_014a:            if(Temp_5==nullptr)goto IL_0378;                            //brfalse				IL_0378
	IL_014f:                                                                        //ldc.i4				0xf
	IL_0154:            V_15=15;                                                    //stloc				V_15
	IL_0158:            /*goto IL_000e;*/goto IL_015d;                              //br				IL_000e
	IL_015d:            goto IL_0246;                                               //br				IL_0246
	IL_0162:                                                                        //ldc.i4				0xb
	IL_0167:            V_15=11;                                                    //stloc				V_15
	IL_016b:            /*goto IL_000e;*/goto IL_0170;                              //br				IL_000e
	IL_0170:                                                                        //ldloc.s				V_7
	IL_0172:            if(V_7==nullptr)goto IL_02a2;                               //brfalse				IL_02a2
	IL_0177:                                                                        //ldc.i4				0x1a
	IL_017c:            V_15=26;                                                    //stloc				V_15
	IL_0180:            /*goto IL_000e;*/goto IL_0185;                              //br				IL_000e
	IL_0185:            goto IL_0260;                                               //br				IL_0260
	IL_018a:                                                                        //ldstr				L"\x6530\x5B32\x5034\x1736\x5838\x483A\x4E3C\x5A3E\x2C40\x2142\x2944\x3E46\x6948\x264A\x2C4C\x364E\x7150\x3152\x3054\x7756\x3158\x325A\x395C\x3B5E\x0460\x0D62\x4564\x0366\x1C68\x0E6A\x4D6C\x1B6E\x1E70\x5372\x0C74\x1876\x0C78\x097A\x5D7C\x097E\xE880\xE682\xF284\xA786\xFA88\xEE8A\xF98C\xFB8E\xF890\xFD92\xF294\xE496\xB798\x919A\xDC9C\xEA9E\xD5A0\xCCA2\xC8A4\xC6A6\xDDA8\xC2AA\xCEAC\x8FAE\xDFB0\xD2B2\xC3B4\xDEB6\xDEB8\xDABA\xC9BC\xD6BE\xAEC0\xADC2\xE5C4\xA1C6\xA8C8\xA2CA\xA1CC\xAACE\xB5D0\xFDD2"
	IL_018f:                                                                        //ldloc				V_16
	IL_0193:            Temp_9=a(L"\x6530\x5B32\x5034\x1736\x5838\x483A\x4E3C\x5A3E\x2C40\x2142\x2944\x3E46\x6948\x264A\x2C4C\x364E\x7150\x3152\x3054\x7756\x3158\x325A\x395C\x3B5E\x0460\x0D62\x4564\x0366\x1C68\x0E6A\x4D6C\x1B6E\x1E70\x5372\x0C74\x1876\x0C78\x097A\x5D7C\x097E\xE880\xE682\xF284\xA786\xFA88\xEE8A\xF98C\xFB8E\xF890\xFD92\xF294\xE496\xB798\x919A\xDC9C\xEA9E\xD5A0\xCCA2\xC8A4\xC6A6\xDDA8\xC2AA\xCEAC\x8FAE\xDFB0\xD2B2\xC3B4\xDEB6\xDEB8\xDABA\xC9BC\xD6BE\xAEC0\xADC2\xE5C4\xA1C6\xA8C8\xA2CA\xA1CC\xAACE\xB5D0\xFDD2",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0198:                                                                        //ldstr				L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C"
	IL_019d:                                                                        //ldloc				V_16
	IL_01a1:            Temp_10=a(L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01a6:            Temp_11=Root::T_x128::M_x1(Temp_10);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_01ab:                                                                        //ldc.i4.0
	IL_01ac:                                                                        //ldc.i4.s				48
	IL_01ae:            Temp_12=System::Windows::Forms::MessageBox::Show(Temp_9,Temp_11,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_01b3:                                                                        //pop
	IL_01b4:                                                                        //ldc.i4				0x11
	IL_01b9:            V_15=17;                                                    //stloc				V_15
	IL_01bd:            /*goto IL_000e;*/goto IL_01c2;                              //br				IL_000e
	IL_01c2:            goto IL_034a;                                               //br				IL_034a
	IL_01c7:                                                                        //ldloc.s				V_10
	IL_01c9:            Temp_25=V_10->Resolve();                                    //callvirt				Reflector::CodeModel::IEventDeclaration^ Reflector::CodeModel::IEventReference::Resolve()
	IL_01ce:            V_7=safe_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_25);//stloc.s				V_7
	IL_01d0:                                                                        //ldc.i4				0x1d
	IL_01d5:            V_15=29;                                                    //stloc				V_15
	IL_01d9:            /*goto IL_000e;*/goto IL_01de;                              //br				IL_000e
	IL_01de:            goto IL_03f3;                                               //br				IL_03f3
	IL_01e3:                                                                        //ldloc.s				V_13
	IL_01e5:                                                                        //ldloc.s				V_7
	IL_01e7:            Temp_8=V_13->M_x1(V_7);                                     //callvirt				Root::T_x31^ Root::T_x45::M_x1(Reflector::CodeModel::IMemberDeclaration^)
	IL_01ec:            V_14=Temp_8;                                                //stloc.s				V_14
	IL_01ee:                                                                        //ldc.i4				0x22
	IL_01f3:            V_15=34;                                                    //stloc				V_15
	IL_01f7:            /*goto IL_000e;*/goto IL_01fc;                              //br				IL_000e
	IL_01fc:            goto IL_01ff;                                               //br.s				IL_01ff
	IL_01fe:                                                                        //break
	IL_01ff:                                                                        //ldloc.s				V_14
	IL_0201:            if(V_14==nullptr)goto IL_02a2;                              //brfalse				IL_02a2
	IL_0206:                                                                        //ldc.i4				0x20
	IL_020b:            V_15=32;                                                    //stloc				V_15
	IL_020f:            /*goto IL_000e;*/goto IL_0214;                              //br				IL_000e
	IL_0214:            goto IL_04be;                                               //br				IL_04be
	IL_0219:                                                                        //ldc.i4				0x15
	IL_021e:            V_15=21;                                                    //stloc				V_15
	IL_0222:            /*goto IL_000e;*/goto IL_0227;                              //br				IL_000e
	IL_0227:                                                                        //ldloc.s				V_8
	IL_0229:            Temp_20=V_8->GenericMethod;                                 //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReference::get_GenericMethod()
	IL_022e:            if(Temp_20==nullptr)goto IL_04f3;                           //brfalse				IL_04f3
	IL_0233:                                                                        //ldc.i4				0x7
	IL_0238:            V_15=7;                                                     //stloc				V_15
	IL_023c:            /*goto IL_000e;*/goto IL_0241;                              //br				IL_000e
	IL_0241:            goto IL_011a;                                               //br				IL_011a
	IL_0246:                                                                        //ldloc.3
	IL_0247:            Temp_19=V_3->GenericType;                                   //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReference::get_GenericType()
	IL_024c:            V_3=Temp_19;                                                //stloc.3
	IL_024d:                                                                        //ldc.i4				0x14
	IL_0252:            V_15=20;                                                    //stloc				V_15
	IL_0256:            /*goto IL_000e;*/goto IL_025b;                              //br				IL_000e
	IL_025b:            goto IL_0378;                                               //br				IL_0378
	IL_0260:                                                                        //ldloc.s				V_7
	IL_0262:            Temp_21=safe_cast<Reflector::CodeModel::IMemberReference^>(V_7)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0267:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_026c:            Temp_22=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_21)->Resolve();//callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_0271:            V_12=Temp_22;                                               //stloc.s				V_12
	IL_0273:                                                                        //ldarg.0
	IL_0274:                                                                        //ldloc.s				V_12
	IL_0276:            Temp_23=this->M_x1(V_12);                                   //call				Root::T_x45^ Root::T_x25::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_027b:            V_13=Temp_23;                                               //stloc.s				V_13
	IL_027d:                                                                        //ldc.i4				0x25
	IL_0282:            V_15=37;                                                    //stloc				V_15
	IL_0286:            /*goto IL_000e;*/goto IL_028b;                              //br				IL_000e
	IL_028b:                                                                        //ldloc.s				V_13
	IL_028d:            if(V_13==nullptr)goto IL_02a2;                              //brfalse.s				IL_02a2
	IL_028f:                                                                        //ldc.i4				0x8
	IL_0294:            V_15=8;                                                     //stloc				V_15
	IL_0298:            /*goto IL_000e;*/goto IL_029d;                              //br				IL_000e
	IL_029d:            goto IL_01e3;                                               //br				IL_01e3
	IL_02a2:                                                                        //ldstr				L"\x6530\x5B32\x5034\x1736\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x6544\x2E46\x3A48\x6B4A\x234C\x204E\x2550\x7352\x3954\x3856\x3858\x3F5A\x385C\x3B5E\x4160\x0C62\x1764\x4766\x0468\x0A6A\x146C\x4F6E\x1370\x1672\x5574\x1F76\x1078\x1F7A\x197C\x1A7E\xEF80\xA382\xE184\xF286\xEC88\xAB8A\xF98C\xE08E\xB190\xEA92\xFA94\xE296\xEB98\xBB9A\xEB9C\xF69E\xD2A0\xCAA2\xC7A4\xCEA6\xC5A8\xC2AA\xD9AC\xD6AE\x91B0\xC0B2\xD0B4\xC3B6\xCDB8\xD2BA\xD3BC\xD8BE\xB2C0\xEDC2\xCFC4\x86C6\xBCC8\xBFCA\xA2CC\xA2CE\xB0D0\xA7D2\xBCD4\xB4D6\xF9D8\xB5DA\xBCDC\xA9DE\x88E0\x84E2\x84E4\x93E6\x80E8\x84EA\x83EC\xCFEE\x97F0\x92F2\x9CF4\x9BF6\x9CF8\x9FFA\xD3FC"
	IL_02a7:                                                                        //ldloc				V_16
	IL_02ab:            Temp_14=a(L"\x6530\x5B32\x5034\x1736\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x6544\x2E46\x3A48\x6B4A\x234C\x204E\x2550\x7352\x3954\x3856\x3858\x3F5A\x385C\x3B5E\x4160\x0C62\x1764\x4766\x0468\x0A6A\x146C\x4F6E\x1370\x1672\x5574\x1F76\x1078\x1F7A\x197C\x1A7E\xEF80\xA382\xE184\xF286\xEC88\xAB8A\xF98C\xE08E\xB190\xEA92\xFA94\xE296\xEB98\xBB9A\xEB9C\xF69E\xD2A0\xCAA2\xC7A4\xCEA6\xC5A8\xC2AA\xD9AC\xD6AE\x91B0\xC0B2\xD0B4\xC3B6\xCDB8\xD2BA\xD3BC\xD8BE\xB2C0\xEDC2\xCFC4\x86C6\xBCC8\xBFCA\xA2CC\xA2CE\xB0D0\xA7D2\xBCD4\xB4D6\xF9D8\xB5DA\xBCDC\xA9DE\x88E0\x84E2\x84E4\x93E6\x80E8\x84EA\x83EC\xCFEE\x97F0\x92F2\x9CF4\x9BF6\x9CF8\x9FFA\xD3FC",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b0:                                                                        //ldstr				L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C"
	IL_02b5:                                                                        //ldloc				V_16
	IL_02b9:            Temp_15=a(L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02be:            Temp_16=Root::T_x128::M_x1(Temp_15);                        //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_02c3:                                                                        //ldc.i4.0
	IL_02c4:                                                                        //ldc.i4.s				48
	IL_02c6:            Temp_17=System::Windows::Forms::MessageBox::Show(Temp_14,Temp_16,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_02cb:                                                                        //pop
	IL_02cc:                                                                        //ldc.i4				0x19
	IL_02d1:            V_15=25;                                                    //stloc				V_15
	IL_02d5:            /*goto IL_000e;*/goto IL_02da;                              //br				IL_000e
	IL_02da:            goto IL_052b;                                               //br				IL_052b
	IL_02df:                                                                        //ldstr				L"\x6530\x5B32\x5034\x1736\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x6544\x2E46\x3A48\x6B4A\x234C\x204E\x2550\x7352\x3954\x3856\x3858\x3F5A\x385C\x3B5E\x4160\x0C62\x1764\x4766\x0468\x0A6A\x146C\x4F6E\x1370\x1672\x5574\x1F76\x1078\x1F7A\x197C\x1A7E\xEF80\xA382\xE184\xF286\xEC88\xAB8A\xF98C\xE08E\xB190\xEA92\xFA94\xE296\xEB98\xBB9A\xEB9C\xF69E\xD2A0\xCAA2\xC7A4\xCEA6\xC5A8\xC2AA\xD9AC\xD6AE\x91B0\xC0B2\xD0B4\xC3B6\xCDB8\xD2BA\xD3BC\xD8BE\xB2C0\xEDC2\xCFC4\x86C6\xBCC8\xBFCA\xA2CC\xA2CE\xB0D0\xA7D2\xBCD4\xB4D6\xF9D8\xB5DA\xBCDC\xA9DE\x88E0\x84E2\x84E4\x93E6\x80E8\x84EA\x83EC\xCFEE\x97F0\x92F2\x9CF4\x9BF6\x9CF8\x9FFA\xD3FC"
	IL_02e4:                                                                        //ldloc				V_16
	IL_02e8:            Temp_0=a(L"\x6530\x5B32\x5034\x1736\x5438\x5E3A\x503C\x5D3E\x2440\x3142\x6544\x2E46\x3A48\x6B4A\x234C\x204E\x2550\x7352\x3954\x3856\x3858\x3F5A\x385C\x3B5E\x4160\x0C62\x1764\x4766\x0468\x0A6A\x146C\x4F6E\x1370\x1672\x5574\x1F76\x1078\x1F7A\x197C\x1A7E\xEF80\xA382\xE184\xF286\xEC88\xAB8A\xF98C\xE08E\xB190\xEA92\xFA94\xE296\xEB98\xBB9A\xEB9C\xF69E\xD2A0\xCAA2\xC7A4\xCEA6\xC5A8\xC2AA\xD9AC\xD6AE\x91B0\xC0B2\xD0B4\xC3B6\xCDB8\xD2BA\xD3BC\xD8BE\xB2C0\xEDC2\xCFC4\x86C6\xBCC8\xBFCA\xA2CC\xA2CE\xB0D0\xA7D2\xBCD4\xB4D6\xF9D8\xB5DA\xBCDC\xA9DE\x88E0\x84E2\x84E4\x93E6\x80E8\x84EA\x83EC\xCFEE\x97F0\x92F2\x9CF4\x9BF6\x9CF8\x9FFA\xD3FC",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ed:                                                                        //ldstr				L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C"
	IL_02f2:                                                                        //ldloc				V_16
	IL_02f6:            Temp_1=a(L"\x7030\x4332\x4534\x5B36\x5038\x583A\x5C3C\x4B3E\x2840\x2C42\x2B44\x0946\x2848\x264A\x284C",V_16);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fb:            Temp_2=Root::T_x128::M_x1(Temp_1);                          //call				System::String^ Root::T_x128::M_x1(System::String^)
	IL_0300:                                                                        //ldc.i4.0
	IL_0301:                                                                        //ldc.i4.s				48
	IL_0303:            Temp_3=System::Windows::Forms::MessageBox::Show(Temp_0,Temp_2,safe_cast<System::Windows::Forms::MessageBoxButtons>(0),safe_cast<System::Windows::Forms::MessageBoxIcon>(48));//call				System::Windows::Forms::DialogResult System::Windows::Forms::MessageBox::Show(System::String^,System::String^,System::Windows::Forms::MessageBoxButtons,System::Windows::Forms::MessageBoxIcon)
	IL_0308:                                                                        //pop
	IL_0309:                                                                        //ldc.i4				0x2
	IL_030e:            V_15=2;                                                     //stloc				V_15
	IL_0312:            /*goto IL_000e;*/goto IL_0317;                              //br				IL_000e
	IL_0317:            goto IL_0421;                                               //br				IL_0421
	IL_031c:                                                                        //ldloc.0
	IL_031d:            Temp_27=V_0->Resolve();                                     //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyReference::Resolve()
	IL_0322:            V_1=Temp_27;                                                //stloc.1
	IL_0323:                                                                        //ldc.i4				0x18
	IL_0328:            V_15=24;                                                    //stloc				V_15
	IL_032c:            /*goto IL_000e;*/goto IL_0331;                              //br				IL_000e
	IL_0331:                                                                        //ldloc.1
	IL_0332:            if(V_1==nullptr)goto IL_018a;                               //brfalse				IL_018a
	IL_0337:                                                                        //ldc.i4				0x1b
	IL_033c:            V_15=27;                                                    //stloc				V_15
	IL_0340:            /*goto IL_000e;*/goto IL_0345;                              //br				IL_000e
	IL_0345:            goto IL_04c7;                                               //br				IL_04c7
	IL_034a:                                                                        //ldarg.1
	IL_034b:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0350:            V_3=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.3
	IL_0351:                                                                        //ldc.i4				0xd
	IL_0356:            V_15=13;                                                    //stloc				V_15
	IL_035a:            /*goto IL_000e;*/goto IL_035f;                              //br				IL_000e
	IL_035f:                                                                        //ldloc.3
	IL_0360:            if(V_3==nullptr)goto IL_0421;                               //brfalse				IL_0421
	IL_0365:                                                                        //ldc.i4				0xe
	IL_036a:            V_15=14;                                                    //stloc				V_15
	IL_036e:            /*goto IL_000e;*/goto IL_0373;                              //br				IL_000e
	IL_0373:            goto IL_0136;                                               //br				IL_0136
	IL_0378:                                                                        //ldloc.3
	IL_0379:            Temp_6=V_3->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_037e:            V_4=Temp_6;                                                 //stloc.s				V_4
	IL_0380:                                                                        //ldc.i4				0x3
	IL_0385:            V_15=3;                                                     //stloc				V_15
	IL_0389:            /*goto IL_000e;*/goto IL_038e;                              //br				IL_000e
	IL_038e:                                                                        //ldloc.s				V_4
	IL_0390:            if(V_4==nullptr)goto IL_02df;                               //brfalse				IL_02df
	IL_0395:                                                                        //ldc.i4				0xc
	IL_039a:            V_15=12;                                                    //stloc				V_15
	IL_039e:            /*goto IL_000e;*/goto IL_03a3;                              //br				IL_000e
	IL_03a3:            goto IL_03a5;                                               //br.s				IL_03a5
	IL_03a5:                                                                        //ldarg.0
	IL_03a6:                                                                        //ldloc.s				V_4
	IL_03a8:            Temp_18=this->M_x1(V_4);                                    //call				Root::T_x45^ Root::T_x25::M_x1(Reflector::CodeModel::ITypeDeclaration^)
	IL_03ad:            V_5=Temp_18;                                                //stloc.s				V_5
	IL_03af:                                                                        //ldc.i4				0x1f
	IL_03b4:            V_15=31;                                                    //stloc				V_15
	IL_03b8:            /*goto IL_000e;*/goto IL_03bd;                              //br				IL_000e
	IL_03bd:                                                                        //ldloc.s				V_5
	IL_03bf:            if(V_5==nullptr)goto IL_02df;                               //brfalse				IL_02df
	IL_03c4:                                                                        //ldc.i4				0x4
	IL_03c9:            V_15=4;                                                     //stloc				V_15
	IL_03cd:            /*goto IL_000e;*/goto IL_03d2;                              //br				IL_000e
	IL_03d2:            goto IL_04b5;                                               //br				IL_04b5
	IL_03d7:                                                                        //ldloc.s				V_11
	IL_03d9:            Temp_26=V_11->Resolve();                                    //callvirt				Reflector::CodeModel::IPropertyDeclaration^ Reflector::CodeModel::IPropertyReference::Resolve()
	IL_03de:            V_7=safe_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_26);//stloc.s				V_7
	IL_03e0:                                                                        //ldc.i4				0x24
	IL_03e5:            V_15=36;                                                    //stloc				V_15
	IL_03e9:            /*goto IL_000e;*/goto IL_03ee;                              //br				IL_000e
	IL_03ee:            goto IL_0162;                                               //br				IL_0162
	IL_03f3:                                                                        //ldloc.s				V_6
	IL_03f5:                                                                        //isinst				Reflector::CodeModel::IPropertyReference
	IL_03fa:            V_11=dynamic_cast<Reflector::CodeModel::IPropertyReference^>(V_6);//stloc.s				V_11
	IL_03fc:                                                                        //ldc.i4				0x0
	IL_0401:            V_15=0;                                                     //stloc				V_15
	IL_0405:            /*goto IL_000e;*/goto IL_040a;                              //br				IL_000e
	IL_040a:                                                                        //ldloc.s				V_11
	IL_040c:            if(V_11==nullptr)goto IL_0162;                              //brfalse				IL_0162
	IL_0411:                                                                        //ldc.i4				0x1e
	IL_0416:            V_15=30;                                                    //stloc				V_15
	IL_041a:            /*goto IL_000e;*/goto IL_041f;                              //br				IL_000e
	IL_041f:            goto IL_03d7;                                               //br.s				IL_03d7
	IL_0421:                                                                        //ldarg.1
	IL_0422:                                                                        //isinst				Reflector::CodeModel::IMemberReference
	IL_0427:            V_6=dynamic_cast<Reflector::CodeModel::IMemberReference^>(A_0);//stloc.s				V_6
	IL_0429:                                                                        //ldc.i4				0x17
	IL_042e:            V_15=23;                                                    //stloc				V_15
	IL_0432:            /*goto IL_000e;*/goto IL_0437;                              //br				IL_000e
	IL_0437:                                                                        //ldloc.s				V_6
	IL_0439:            if(V_6==nullptr)goto IL_052b;                               //brfalse				IL_052b
	IL_043e:                                                                        //ldc.i4				0x23
	IL_0443:            V_15=35;                                                    //stloc				V_15
	IL_0447:            /*goto IL_000e;*/goto IL_044c;                              //br				IL_000e
	IL_044c:            goto IL_044e;                                               //br.s				IL_044e
	IL_044e:                                                                        //ldnull
	IL_044f:            V_7=safe_cast<Reflector::CodeModel::IMemberDeclaration^>(nullptr);//stloc.s				V_7
	IL_0451:                                                                        //ldloc.s				V_6
	IL_0453:                                                                        //isinst				Reflector::CodeModel::IMethodReference
	IL_0458:            V_8=dynamic_cast<Reflector::CodeModel::IMethodReference^>(V_6);//stloc.s				V_8
	IL_045a:                                                                        //ldc.i4				0x10
	IL_045f:            V_15=16;                                                    //stloc				V_15
	IL_0463:            /*goto IL_000e;*/goto IL_0468;                              //br				IL_000e
	IL_0468:                                                                        //ldloc.s				V_8
	IL_046a:            if(V_8==nullptr)goto IL_047f;                               //brfalse.s				IL_047f
	IL_046c:                                                                        //ldc.i4				0x13
	IL_0471:            V_15=19;                                                    //stloc				V_15
	IL_0475:            /*goto IL_000e;*/goto IL_047a;                              //br				IL_000e
	IL_047a:            goto IL_0219;                                               //br				IL_0219
	IL_047f:                                                                        //ldloc.s				V_6
	IL_0481:                                                                        //isinst				Reflector::CodeModel::IFieldReference
	IL_0486:            V_9=dynamic_cast<Reflector::CodeModel::IFieldReference^>(V_6);//stloc.s				V_9
	IL_0488:                                                                        //ldc.i4				0x1
	IL_048d:            V_15=1;                                                     //stloc				V_15
	IL_0491:            /*goto IL_000e;*/goto IL_0496;                              //br				IL_000e
	IL_0496:                                                                        //ldloc.s				V_9
	IL_0498:            if(V_9==nullptr)goto IL_00e9;                               //brfalse				IL_00e9
	IL_049d:                                                                        //ldc.i4				0xa
	IL_04a2:            V_15=10;                                                    //stloc				V_15
	IL_04a6:            /*goto IL_000e;*/goto IL_04ab;                              //br				IL_000e
	IL_04ab:            goto IL_050f;                                               //br.s				IL_050f
	IL_04ad:                                                                        //ldarg.0
	IL_04ae:                                                                        //ldloc.2
	IL_04af:            this->M_x1(safe_cast<System::Windows::Forms::TreeNode^>(V_2));//call				void Root::T_x25::M_x1(System::Windows::Forms::TreeNode^)
	IL_04b4:            return;                                                     //ret
	IL_04b5:                                                                        //ldarg.0
	IL_04b6:                                                                        //ldloc.s				V_5
	IL_04b8:            this->M_x1(safe_cast<System::Windows::Forms::TreeNode^>(V_5));//call				void Root::T_x25::M_x1(System::Windows::Forms::TreeNode^)
	IL_04bd:            return;                                                     //ret
	IL_04be:                                                                        //ldarg.0
	IL_04bf:                                                                        //ldloc.s				V_14
	IL_04c1:            this->M_x1(safe_cast<System::Windows::Forms::TreeNode^>(V_14));//call				void Root::T_x25::M_x1(System::Windows::Forms::TreeNode^)
	IL_04c6:            return;                                                     //ret
	IL_04c7:                                                                        //ldarg.0
	IL_04c8:                                                                        //ldloc.1
	IL_04c9:            Temp_24=this->M_x1(V_1);                                    //call				Root::T_x26^ Root::T_x25::M_x1(Reflector::CodeModel::IAssembly^)
	IL_04ce:            V_2=Temp_24;                                                //stloc.2
	IL_04cf:                                                                        //ldc.i4				0x9
	IL_04d4:            V_15=9;                                                     //stloc				V_15
	IL_04d8:            /*goto IL_000e;*/goto IL_04dd;                              //br				IL_000e
	IL_04dd:                                                                        //ldloc.2
	IL_04de:            if(V_2==nullptr)goto IL_018a;                               //brfalse				IL_018a
	IL_04e3:                                                                        //ldc.i4				0x26
	IL_04e8:            V_15=38;                                                    //stloc				V_15
	IL_04ec:            /*goto IL_000e;*/goto IL_04f1;                              //br				IL_000e
	IL_04f1:            goto IL_04ad;                                               //br.s				IL_04ad
	IL_04f3:                                                                        //ldloc.s				V_8
	IL_04f5:            Temp_4=V_8->Resolve();                                      //callvirt				Reflector::CodeModel::IMethodDeclaration^ Reflector::CodeModel::IMethodReference::Resolve()
	IL_04fa:            V_7=safe_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_4);//stloc.s				V_7
	IL_04fc:                                                                        //ldc.i4				0x16
	IL_0501:            V_15=22;                                                    //stloc				V_15
	IL_0505:            /*goto IL_000e;*/goto IL_050a;                              //br				IL_000e
	IL_050a:            goto IL_047f;                                               //br				IL_047f
	IL_050f:                                                                        //ldloc.s				V_9
	IL_0511:            Temp_13=V_9->Resolve();                                     //callvirt				Reflector::CodeModel::IFieldDeclaration^ Reflector::CodeModel::IFieldReference::Resolve()
	IL_0516:            V_7=safe_cast<Reflector::CodeModel::IMemberDeclaration^>(Temp_13);//stloc.s				V_7
	IL_0518:                                                                        //ldc.i4				0x12
	IL_051d:            V_15=18;                                                    //stloc				V_15
	IL_0521:            /*goto IL_000e;*/goto IL_0526;                              //br				IL_000e
	IL_0526:            goto IL_00e9;                                               //br				IL_00e9
	IL_052b:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Object^ A_0,System::EventArgs^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::IServiceProvider^ Temp_1 = nullptr;
	System::Type^ Temp_2 = nullptr;
	System::Object^ Temp_3 = nullptr;
	System::Object^ Temp_4 = nullptr;
	//local variables.
	Reflector::ICommandBarButton^ V_0 = nullptr;
	Root::T_x107^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:            goto IL_001a;                                               //br.s				IL_001a
	IL_0005:                                                                        //ldloc				V_3
	IL_0009:            switch(V_3){case 0:goto IL_002c;case 1:goto IL_003f;case 2:goto IL_007a;};//switch				(IL_002c,IL_003f,IL_007a)
	IL_001a:                                                                        //ldarg.1
	IL_001b:                                                                        //castclass				Reflector::ICommandBarButton
	IL_0020:            V_0=safe_cast<Reflector::ICommandBarButton^>(A_0);          //stloc.0
	IL_0021:                                                                        //ldc.i4				0x0
	IL_0026:            V_3=0;                                                      //stloc				V_3
	IL_002a:            /*goto IL_0005;*/goto IL_002c;                              //br.s				IL_0005
	IL_002c:                                                                        //ldloc.0
	IL_002d:            Temp_0=safe_cast<Reflector::ICommandBarItem^>(V_0)->Value;  //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0032:            if(Temp_0==nullptr)goto IL_007c;                            //brfalse.s				IL_007c
	IL_0034:                                                                        //ldc.i4				0x1
	IL_0039:            V_3=1;                                                      //stloc				V_3
	IL_003d:            /*goto IL_0005;*/goto IL_003f;                              //br.s				IL_0005
	IL_003f:            goto IL_0041;                                               //br.s				IL_0041
	IL_0041:                                                                        //ldarg.0
	IL_0042:            Temp_1=this->F_x12;                                         //ldfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_0047:                                                                        //ldtoken				Root::T_x107
	IL_004c:            Temp_2=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0051:            Temp_3=Temp_1->GetService(Temp_2);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0056:                                                                        //castclass				Root::T_x107
	IL_005b:            V_1=safe_cast<Root::T_x107^>(Temp_3);                       //stloc.1
	IL_005c:                                                                        //ldloc.0
	IL_005d:            Temp_4=safe_cast<Reflector::ICommandBarItem^>(V_0)->Value;  //callvirt				System::Object^ Reflector::ICommandBarItem::get_Value()
	IL_0062:                                                                        //castclass				System::String
	IL_0067:            V_2=safe_cast<System::String^>(Temp_4);                     //stloc.2
	IL_0068:                                                                        //ldloc.1
	IL_0069:                                                                        //ldloc.2
	IL_006a:            safe_cast<Root::T_x24^>(V_1)->M_x1(V_2);                    //callvirt				void Root::T_x24::M_x1(System::String^)
	IL_006f:                                                                        //ldc.i4				0x2
	IL_0074:            V_3=2;                                                      //stloc				V_3
	IL_0078:            /*goto IL_0005;*/goto IL_007a;                              //br.s				IL_0005
	IL_007a:            goto IL_007c;                                               //br.s				IL_007c
	IL_007c:            return;                                                     //ret

}
inline Root::T_x41^ Root::T_x25::M_x1(System::String^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::INamespace^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_6 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Root::T_x41^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_00b4;case 1:goto IL_00d8;case 2:goto IL_0038;case 3:goto IL_006a;case 4:goto IL_0049;case 5:goto IL_0078;case 6:goto IL_0088;case 7:goto IL_00a4;};//switch				(IL_00b4,IL_00d8,IL_0038,IL_006a,IL_0049,IL_0078,IL_0088,IL_00a4)
	IL_002b:                                                                        //ldc.i4.0
	IL_002c:            V_0=0;                                                      //stloc.0
	IL_002d:                                                                        //ldc.i4				0x2
	IL_0032:            V_2=2;                                                      //stloc				V_2
	IL_0036:            /*goto IL_0002;*/goto IL_0038;                              //br.s				IL_0002
	IL_0038:            goto IL_007a;                                               //br.s				IL_007a
	IL_003a:                                                                        //ldloc.0
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:                                                                        //add
	IL_003d:            V_0=(V_0 + 1);                                              //stloc.0
	IL_003e:                                                                        //ldc.i4				0x4
	IL_0043:            V_2=4;                                                      //stloc				V_2
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_007a;                                               //br.s				IL_007a
	IL_004b:                                                                        //ldloc.1
	IL_004c:            return V_1;                                                 //ret
	IL_004d:                                                                        //ldarg.0
	IL_004e:            Temp_5=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0053:                                                                        //ldloc.0
	IL_0054:            Temp_6=Temp_5[V_0];                                         //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_0059:                                                                        //isinst				Root::T_x41
	IL_005e:            V_1=dynamic_cast<Root::T_x41^>(Temp_6);                     //stloc.1
	IL_005f:                                                                        //ldc.i4				0x3
	IL_0064:            V_2=3;                                                      //stloc				V_2
	IL_0068:            /*goto IL_0002;*/goto IL_006a;                              //br.s				IL_0002
	IL_006a:                                                                        //ldloc.1
	IL_006b:            if(V_1==nullptr)goto IL_003a;                               //brfalse.s				IL_003a
	IL_006d:                                                                        //ldc.i4				0x5
	IL_0072:            V_2=5;                                                      //stloc				V_2
	IL_0076:            /*goto IL_0002;*/goto IL_0078;                              //br.s				IL_0002
	IL_0078:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_007a:                                                                        //ldc.i4				0x6
	IL_007f:            V_2=6;                                                      //stloc				V_2
	IL_0083:            /*goto IL_0002;*/goto IL_0088;                              //br				IL_0002
	IL_0088:                                                                        //ldloc.0
	IL_0089:                                                                        //ldarg.0
	IL_008a:            Temp_3=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_008f:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0094:            if(V_0<Temp_4)goto IL_004d;                                 //blt.s				IL_004d
	IL_0096:                                                                        //ldc.i4				0x7
	IL_009b:            V_2=7;                                                      //stloc				V_2
	IL_009f:            /*goto IL_0002;*/goto IL_00a4;                              //br				IL_0002
	IL_00a4:            goto IL_00dd;                                               //br.s				IL_00dd
	IL_00a6:                                                                        //ldc.i4				0x0
	IL_00ab:            V_2=0;                                                      //stloc				V_2
	IL_00af:            /*goto IL_0002;*/goto IL_00b4;                              //br				IL_0002
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:                                                                        //ldloc.1
	IL_00b6:            Temp_0=V_1->M_x1();                                         //callvirt				Reflector::CodeModel::INamespace^ Root::T_x41::M_x1()
	IL_00bb:            Temp_1=Temp_0->Name;                                        //callvirt				System::String^ Reflector::CodeModel::INamespace::get_Name()
	IL_00c0:            Temp_2=(A_0 == Temp_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00c5:            if(!Temp_2)goto IL_003a;                                    //brfalse				IL_003a
	IL_00ca:                                                                        //ldc.i4				0x1
	IL_00cf:            V_2=1;                                                      //stloc				V_2
	IL_00d3:            /*goto IL_0002;*/goto IL_00d8;                              //br				IL_0002
	IL_00d8:            goto IL_004b;                                               //br				IL_004b
	IL_00dd:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_00df:                                                                        //break
	IL_00e0:                                                                        //ldnull
	IL_00e1:            return nullptr;                                             //ret

}
inline void Root::T_x25::M_x1(System::Windows::Forms::KeyEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnKeyDown by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Windows::Forms::TreeNode^ Temp_2 = nullptr;
	System::Windows::Forms::Keys Temp_3 = (System::Windows::Forms::Keys)0;
	System::Windows::Forms::Keys Temp_4 = (System::Windows::Forms::Keys)0;
	//local variables.
	System::Windows::Forms::TreeNode^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xb
	IL_0005:            V_1=11;                                                     //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0055;                                               //br.s				IL_0055
	IL_000d:                                                                        //ldc.i4.5
	IL_000e:                                                                        //dup
	IL_000f:                                                                        //dup
	IL_0010:                                                                        //ldc.i4.6
	IL_0011:                                                                        //sub
	IL_0012:                                                                        //blt				IL_000e
	IL_0017:                                                                        //pop
	IL_0018:                                                                        //ldloc				V_1
	IL_001c:            switch(V_1){case 0:goto IL_015f;case 1:goto IL_0105;case 2:goto IL_00dc;case 3:goto IL_0070;case 4:goto IL_014a;case 5:goto IL_009a;case 6:goto IL_00c8;case 7:goto IL_0087;case 8:goto IL_0179;case 9:goto IL_012f;case 10:goto IL_00ab;case 11:goto IL_000b;case 12:goto IL_011c;};//switch				(IL_015f,IL_0105,IL_00dc,IL_0070,IL_014a,IL_009a,IL_00c8,IL_0087,IL_0179,IL_012f,IL_00ab,IL_000b,IL_011c)
	IL_0055:                                                                        //ldarg.1
	IL_0056:            Temp_4=A_0->KeyData;                                        //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_005b:                                                                        //ldc.i4				0x60044
	IL_0060:            if(safe_cast<System::Int32>(Temp_4)!=393284)goto IL_0121;   //bne.un				IL_0121
	IL_0065:                                                                        //ldc.i4				0x3
	IL_006a:            V_1=3;                                                      //stloc				V_1
	IL_006e:            /*goto IL_000d;*/goto IL_0070;                              //br.s				IL_000d
	IL_0070:            goto IL_0107;                                               //br				IL_0107
	IL_0075:                                                                        //ldarg.1
	IL_0076:                                                                        //ldc.i4.1
	IL_0077:            A_0->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_007c:                                                                        //ldc.i4				0x7
	IL_0081:            V_1=7;                                                      //stloc				V_1
	IL_0085:            /*goto IL_000d;*/goto IL_0087;                              //br.s				IL_000d
	IL_0087:            goto IL_0121;                                               //br				IL_0121
	IL_008c:                                                                        //ldc.i4				0x5
	IL_0091:            V_1=5;                                                      //stloc				V_1
	IL_0095:            /*goto IL_000d;*/goto IL_009a;                              //br				IL_000d
	IL_009a:                                                                        //ldloc.0
	IL_009b:            if(V_0!=nullptr)goto IL_00ad;                               //brtrue.s				IL_00ad
	IL_009d:                                                                        //ldc.i4				0xa
	IL_00a2:            V_1=10;                                                     //stloc				V_1
	IL_00a6:            /*goto IL_000d;*/goto IL_00ab;                              //br				IL_000d
	IL_00ab:            goto IL_0075;                                               //br.s				IL_0075
	IL_00ad:                                                                        //ldloc.0
	IL_00ae:            V_0->Expand();                                              //callvirt				void System::Windows::Forms::TreeNode::Expand()
	IL_00b3:                                                                        //ldloc.0
	IL_00b4:            Temp_2=V_0->NextVisibleNode;                                //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNode::get_NextVisibleNode()
	IL_00b9:            V_0=Temp_2;                                                 //stloc.0
	IL_00ba:                                                                        //ldc.i4				0x6
	IL_00bf:            V_1=6;                                                      //stloc				V_1
	IL_00c3:            /*goto IL_000d;*/goto IL_00c8;                              //br				IL_000d
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:            if(V_0==nullptr)goto IL_014c;                               //brfalse				IL_014c
	IL_00ce:                                                                        //ldc.i4				0x2
	IL_00d3:            V_1=2;                                                      //stloc				V_1
	IL_00d7:            /*goto IL_000d;*/goto IL_00dc;                              //br				IL_000d
	IL_00dc:            goto IL_0164;                                               //br				IL_0164
	IL_00e1:                                                                        //ldarg.0
	IL_00e2:                                                                        //ldarg.0
	IL_00e3:            Temp_1=this->ShowLines;                                     //call				System::Boolean System::Windows::Forms::TreeView::get_ShowLines()
	IL_00e8:                                                                        //ldc.i4.0
	IL_00e9:                                                                        //ceq
	IL_00eb:            this->ShowLines=(Temp_1 == false);                          //call				void System::Windows::Forms::TreeView::set_ShowLines(System::Boolean)
	IL_00f0:                                                                        //ldarg.1
	IL_00f1:                                                                        //ldc.i4.1
	IL_00f2:            A_0->Handled=true;                                          //callvirt				void System::Windows::Forms::KeyEventArgs::set_Handled(System::Boolean)
	IL_00f7:                                                                        //ldc.i4				0x1
	IL_00fc:            V_1=1;                                                      //stloc				V_1
	IL_0100:            /*goto IL_000d;*/goto IL_0105;                              //br				IL_000d
	IL_0105:            goto IL_017b;                                               //br.s				IL_017b
	IL_0107:                                                                        //ldarg.0
	IL_0108:            Temp_0=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_010d:            V_0=Temp_0;                                                 //stloc.0
	IL_010e:                                                                        //ldc.i4				0xc
	IL_0113:            V_1=12;                                                     //stloc				V_1
	IL_0117:            /*goto IL_000d;*/goto IL_011c;                              //br				IL_000d
	IL_011c:            goto IL_008c;                                               //br				IL_008c
	IL_0121:                                                                        //ldc.i4				0x9
	IL_0126:            V_1=9;                                                      //stloc				V_1
	IL_012a:            /*goto IL_000d;*/goto IL_012f;                              //br				IL_000d
	IL_012f:                                                                        //ldarg.1
	IL_0130:            Temp_3=A_0->KeyData;                                        //callvirt				System::Windows::Forms::Keys System::Windows::Forms::KeyEventArgs::get_KeyData()
	IL_0135:                                                                        //ldc.i4				0x60047
	IL_013a:            if(safe_cast<System::Int32>(Temp_3)!=393287)goto IL_017b;   //bne.un.s				IL_017b
	IL_013c:                                                                        //ldc.i4				0x4
	IL_0141:            V_1=4;                                                      //stloc				V_1
	IL_0145:            /*goto IL_000d;*/goto IL_014a;                              //br				IL_000d
	IL_014a:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_014c:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_0151:                                                                        //ldc.i4				0x0
	IL_0156:            V_1=0;                                                      //stloc				V_1
	IL_015a:            /*goto IL_000d;*/goto IL_015f;                              //br				IL_000d
	IL_015f:            goto IL_008c;                                               //br				IL_008c
	IL_0164:                                                                        //ldarg.0
	IL_0165:                                                                        //ldloc.0
	IL_0166:            this->SelectedNode=V_0;                                     //call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_016b:                                                                        //ldc.i4				0x8
	IL_0170:            V_1=8;                                                      //stloc				V_1
	IL_0174:            /*goto IL_000d;*/goto IL_0179;                              //br				IL_000d
	IL_0179:            goto IL_014c;                                               //br.s				IL_014c
	IL_017b:                                                                        //ldarg.0
	IL_017c:                                                                        //ldarg.1
	IL_017d:            System::Windows::Forms::TreeView::OnKeyDown(A_0);           //call				void System::Windows::Forms::TreeView::OnKeyDown(System::Windows::Forms::KeyEventArgs^)
	IL_0182:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Windows::Forms::Message% A_0)
//System::Windows::Forms::TreeView^::WndProc by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.1
	IL_0001:            Temp_0=A_0.Msg;                                             //call				System::Int32 System::Windows::Forms::Message::get_Msg()
	IL_0006:                                                                        //ldc.i4.s				20
	IL_0008:            if(Temp_0==20)goto IL_0015;                                 //beq.s				IL_0015
	IL_000a:            goto IL_000c;                                               //br.s				IL_000c
	IL_000c:                                                                        //ldarg.0
	IL_000d:                                                                        //ldarg.1
	IL_000e:            System::Windows::Forms::TreeView::WndProc(A_0);             //call				void System::Windows::Forms::TreeView::WndProc(System::Windows::Forms::Message%)
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Windows::Forms::TreeNode^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.0
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.6
	IL_0004:                                                                        //add
	IL_0005:                                                                        //bgt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:                                                                        //ldarg.0
	IL_000d:            Temp_0=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0012:            this->M_x2(Temp_0);                                         //call				void Root::T_x25::M_x2(System::Windows::Forms::TreeNode^)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            this->SelectedNode=A_0;                                     //call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_001e:                                                                        //ldarg.0
	IL_001f:            Temp_1=this->Focus();                                       //call				System::Boolean System::Windows::Forms::Control::Focus()
	IL_0024:                                                                        //pop
	IL_0025:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Windows::Forms::TreeViewCancelEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnBeforeExpand by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	//method body ------- 
	IL_0000:            goto IL_0003;                                               //br.s				IL_0003
	IL_0002:                                                                        //break
	IL_0003:                                                                        //ldarg.0
	IL_0004:                                                                        //ldarg.1
	IL_0005:            System::Windows::Forms::TreeView::OnBeforeExpand(A_0);      //call				void System::Windows::Forms::TreeView::OnBeforeExpand(System::Windows::Forms::TreeViewCancelEventArgs^)
	IL_000a:            /*goto IL_000c;*/goto IL_000A01;                            //br.s				IL_000c
	IL_000A01:          try{
	IL_000c:                                                                        //ldarg.0
	IL_000d:            this->BeginUpdate();                                        //call				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_0012:                                                                        //ldarg.1
	IL_0013:            Temp_0=A_0->Node;                                           //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeViewCancelEventArgs::get_Node()
	IL_0018:                                                                        //castclass				Root::T_x10
	IL_001d:            V_0=safe_cast<Root::T_x10^>(Temp_0);                        //stloc.0
	IL_001e:                                                                        //ldloc.0
	IL_001f:            V_0->M_x14();                                               //callvirt				void Root::T_x10::M_x14()
	IL_0024:            goto IL_002d;                                               //leave.s				IL_002d
	                    ;}
	                    finally{
	IL_0026:                                                                        //ldarg.0
	IL_0027:            this->EndUpdate();                                          //call				void System::Windows::Forms::TreeView::EndUpdate()
	IL_002c:                                                                        //endfinally
	                    ;}
	IL_002d:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(System::Windows::Forms::TreeViewEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnAfterCollapse by M_x1
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.1
	IL_0002:            System::Windows::Forms::TreeView::OnAfterCollapse(A_0);     //call				void System::Windows::Forms::TreeView::OnAfterCollapse(System::Windows::Forms::TreeViewEventArgs^)
	IL_0007:            /*goto IL_0009;*/goto IL_000701;                            //br.s				IL_0009
	IL_000701:          try{
	IL_0009:                                                                        //ldarg.0
	IL_000a:            this->BeginUpdate();                                        //call				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_000f:                                                                        //ldarg.1
	IL_0010:            Temp_0=A_0->Node;                                           //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeViewEventArgs::get_Node()
	IL_0015:                                                                        //castclass				Root::T_x10
	IL_001a:            V_0=safe_cast<Root::T_x10^>(Temp_0);                        //stloc.0
	IL_001b:                                                                        //ldloc.0
	IL_001c:            V_0->M_x7();                                                //callvirt				void Root::T_x10::M_x7()
	IL_0021:            goto IL_0035;                                               //leave.s				IL_0035
	                    ;}
	                    finally{
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:                                                                        //dup
	IL_0025:                                                                        //dup
	IL_0026:                                                                        //ldc.i4.2
	IL_0027:                                                                        //sub
	IL_0028:                                                                        //blt				IL_0024
	IL_002d:                                                                        //pop
	IL_002e:                                                                        //ldarg.0
	IL_002f:            this->EndUpdate();                                          //call				void System::Windows::Forms::TreeView::EndUpdate()
	IL_0034:                                                                        //endfinally
	                    ;}
	IL_0035:            return;                                                     //ret

}
inline void Root::T_x25::M_x1(Root::T_x10^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IServiceProvider^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::IServiceProvider^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	Root::T_x10^ Temp_6 = nullptr;
	Root::T_x10^ Temp_7 = nullptr;
	Root::T_x10^ Temp_8 = nullptr;
	Root::T_x10^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::ICommandBarCollection^ Temp_11 = nullptr;
	Reflector::ICommandBar^ Temp_12 = nullptr;
	System::EventArgs^ Temp_13 = nullptr;
	System::String^ Temp_14 = nullptr;
	Root::T_x10^ Temp_15 = nullptr;
	Root::T_x10^ Temp_16 = nullptr;
	System::String^ Temp_17 = nullptr;
	//local variables.
	Reflector::ICommandBarManager^ V_0 = nullptr;
	Root::T_x107^ V_1 = nullptr;
	System::String^ V_2 = nullptr;
	Reflector::ICommandBar^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_5=18;                                                     //stloc				V_5
	IL_0009:            goto IL_003c;                                               //br.s				IL_003c
	IL_000b:                                                                        //ldloc				V_4
	IL_000f:            switch(V_4){case 0:goto IL_0124;case 1:goto IL_0163;case 2:goto IL_014d;case 3:goto IL_013a;case 4:goto IL_00a6;case 5:goto IL_00d3;case 6:goto IL_00ff;case 7:goto IL_0096;case 8:goto IL_00ef;case 9:goto IL_007d;};//switch				(IL_0124,IL_0163,IL_014d,IL_013a,IL_00a6,IL_00d3,IL_00ff,IL_0096,IL_00ef,IL_007d)
	IL_003c:                                                                        //ldarg.0
	IL_003d:            Temp_0=this->M_x4();                                        //call				System::IServiceProvider^ Root::T_x25::M_x4()
	IL_0042:                                                                        //ldtoken				Reflector::ICommandBarManager
	IL_0047:            Temp_1=Reflector::ICommandBarManager::typeid;               //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_004c:            Temp_2=Temp_0->GetService(Temp_1);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0051:                                                                        //castclass				Reflector::ICommandBarManager
	IL_0056:            V_0=safe_cast<Reflector::ICommandBarManager^>(Temp_2);      //stloc.0
	IL_0057:                                                                        //ldarg.0
	IL_0058:            Temp_3=this->M_x4();                                        //call				System::IServiceProvider^ Root::T_x25::M_x4()
	IL_005d:                                                                        //ldtoken				Root::T_x107
	IL_0062:            Temp_4=Root::T_x107::typeid;                                //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0067:            Temp_5=Temp_3->GetService(Temp_4);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_006c:                                                                        //castclass				Root::T_x107
	IL_0071:            V_1=safe_cast<Root::T_x107^>(Temp_5);                       //stloc.1
	IL_0072:                                                                        //ldc.i4				0x9
	IL_0077:            V_4=9;                                                      //stloc				V_4
	IL_007b:            /*goto IL_000b;*/goto IL_007d;                              //br.s				IL_000b
	IL_007d:                                                                        //ldarg.0
	IL_007e:            Temp_16=this->F_x13;                                        //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_0083:            if(Temp_16==nullptr)goto IL_010f;                           //brfalse				IL_010f
	IL_0088:                                                                        //ldc.i4				0x7
	IL_008d:            V_4=7;                                                      //stloc				V_4
	IL_0091:            /*goto IL_000b;*/goto IL_0096;                              //br				IL_000b
	IL_0096:            goto IL_00d5;                                               //br.s				IL_00d5
	IL_0098:                                                                        //ldc.i4				0x4
	IL_009d:            V_4=4;                                                      //stloc				V_4
	IL_00a1:            /*goto IL_000b;*/goto IL_00a6;                              //br				IL_000b
	IL_00a6:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a8:                                                                        //break
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:            Temp_9=this->F_x13;                                         //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_00af:            Temp_10=Temp_9->M_x13();                                    //callvirt				System::String^ Root::T_x10::M_x13()
	IL_00b4:            Temp_17=Temp_10;goto IL_0168;                               //br				IL_0168
	IL_00b9:                                                                        //ldloc.1
	IL_00ba:                                                                        //ldarg.0
	IL_00bb:            Temp_8=this->F_x13;                                         //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_00c0:            V_1->M_x1(safe_cast<Root::T_x24^>(Temp_8));                 //callvirt				void Root::T_x107::M_x1(Root::T_x24^)
	IL_00c5:                                                                        //ldc.i4				0x5
	IL_00ca:            V_4=5;                                                      //stloc				V_4
	IL_00ce:            /*goto IL_000b;*/goto IL_00d3;                              //br				IL_000b
	IL_00d3:            goto IL_013f;                                               //br.s				IL_013f
	IL_00d5:                                                                        //ldloc.1
	IL_00d6:                                                                        //ldarg.0
	IL_00d7:            Temp_15=this->F_x13;                                        //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_00dc:            V_1->M_x2(safe_cast<Root::T_x24^>(Temp_15));                //callvirt				void Root::T_x107::M_x2(Root::T_x24^)
	IL_00e1:                                                                        //ldc.i4				0x8
	IL_00e6:            V_4=8;                                                      //stloc				V_4
	IL_00ea:            /*goto IL_000b;*/goto IL_00ef;                              //br				IL_000b
	IL_00ef:            goto IL_010f;                                               //br.s				IL_010f
	IL_00f1:                                                                        //ldc.i4				0x6
	IL_00f6:            V_4=6;                                                      //stloc				V_4
	IL_00fa:            /*goto IL_000b;*/goto IL_00ff;                              //br				IL_000b
	IL_00ff:                                                                        //ldstr				L"\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x043F\x2741\x2243\x2745\x3D47\x2649\x384B"
	IL_0104:                                                                        //ldloc				V_5
	IL_0108:            Temp_14=a(L"\x722F\x4031\x5B33\x4135\x4B37\x5F39\x4E3B\x103D\x043F\x2741\x2243\x2745\x3D47\x2649\x384B",V_5);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_010d:            Temp_17=Temp_14;goto IL_0168;                               //br.s				IL_0168
	IL_010f:                                                                        //ldarg.0
	IL_0110:                                                                        //ldarg.1
	IL_0111:            this->F_x13=A_0;                                            //stfld				Root::T_x10^ Root::T_x25 F_x13
	IL_0116:                                                                        //ldc.i4				0x0
	IL_011b:            V_4=0;                                                      //stloc				V_4
	IL_011f:            /*goto IL_000b;*/goto IL_0124;                              //br				IL_000b
	IL_0124:                                                                        //ldarg.0
	IL_0125:            Temp_6=this->F_x13;                                         //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_012a:            if(Temp_6==nullptr)goto IL_013f;                            //brfalse.s				IL_013f
	IL_012c:                                                                        //ldc.i4				0x3
	IL_0131:            V_4=3;                                                      //stloc				V_4
	IL_0135:            /*goto IL_000b;*/goto IL_013a;                              //br				IL_000b
	IL_013a:            goto IL_00b9;                                               //br				IL_00b9
	IL_013f:                                                                        //ldc.i4				0x2
	IL_0144:            V_4=2;                                                      //stloc				V_4
	IL_0148:            /*goto IL_000b;*/goto IL_014d;                              //br				IL_000b
	IL_014d:                                                                        //ldarg.0
	IL_014e:            Temp_7=this->F_x13;                                         //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_0153:            if(Temp_7==nullptr)goto IL_00f1;                            //brfalse.s				IL_00f1
	IL_0155:                                                                        //ldc.i4				0x1
	IL_015a:            V_4=1;                                                      //stloc				V_4
	IL_015e:            /*goto IL_000b;*/goto IL_0163;                              //br				IL_000b
	IL_0163:            goto IL_0098;                                               //br				IL_0098
	IL_0168:            /*warning ! semantic stack doesn't empty at joint !;*/      //stloc.2
	IL_0169:                                                                        //ldloc.0
	IL_016a:            Temp_11=V_0->CommandBars;                                   //callvirt				Reflector::ICommandBarCollection^ Reflector::ICommandBarManager::get_CommandBars()
	IL_016f:                                                                        //ldloc.2
	IL_0170:            Temp_12=Temp_11[Temp_17];                                   //callvirt				Reflector::ICommandBar^ Reflector::ICommandBarCollection::get_Item(System::String^)
	IL_0175:            V_3=Temp_12;                                                //stloc.3
	IL_0176:                                                                        //ldarg.0
	IL_0177:                                                                        //ldloc.3
	IL_0178:            this->M_x1(V_3);                                            //call				void Root::T_x25::M_x1(Reflector::ICommandBar^)
	IL_017d:                                                                        //ldarg.0
	IL_017e:                                                                        //ldloc.3
	IL_017f:                                                                        //castclass				System::Windows::Forms::ContextMenu
	IL_0184:            this->ContextMenu=safe_cast<System::Windows::Forms::ContextMenu^>(V_3);//callvirt				void System::Windows::Forms::Control::set_ContextMenu(System::Windows::Forms::ContextMenu^)
	IL_0189:                                                                        //ldarg.0
	IL_018a:            Temp_13=System::EventArgs::Empty;                           //ldsfld				System::EventArgs^ System::EventArgs Empty
	IL_018f:            this->M_x1(Temp_13);                                        //callvirt				void Root::T_x25::M_x1(System::EventArgs^)
	IL_0194:            return;                                                     //ret

}
inline System::Boolean Root::T_x25::M_x10()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25::T_x1^ Temp_0 = nullptr;
	Root::T_x25::T_x1^ Temp_1 = nullptr;
	Root::T_x25::T_x1^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0006:            if(Temp_0==nullptr)goto IL_0027;                            //brfalse.s				IL_0027
	IL_0008:                                                                        //ldc.i4.1
	IL_0009:                                                                        //dup
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //ldc.i4.4
	IL_000c:                                                                        //add
	IL_000d:                                                                        //bgt				IL_0009
	IL_0012:                                                                        //pop
	IL_0013:            goto IL_0015;                                               //br.s				IL_0015
	IL_0015:                                                                        //ldarg.0
	IL_0016:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_001b:            Temp_2=Temp_1->F_x1;                                        //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_0020:                                                                        //ldnull
	IL_0021:                                                                        //ceq
	IL_0023:                                                                        //ldc.i4.0
	IL_0024:                                                                        //ceq
	IL_0026:            return ((Temp_2 == safe_cast<Root::T_x25::T_x1^>(nullptr)) == false);//ret
	IL_0027:                                                                        //ldc.i4.0
	IL_0028:            return false;                                               //ret

}
inline void Root::T_x25::M_x11()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Root::T_x25::T_x1^ Temp_1 = nullptr;
	Root::T_x25::T_x1^ Temp_2 = nullptr;
	Root::T_x25::T_x1^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_4 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_0028;case 1:goto IL_003b;case 2:goto IL_0081;};//switch				(IL_0028,IL_003b,IL_0081)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_001d:                                                                        //ldc.i4				0x0
	IL_0022:            V_0=0;                                                      //stloc				V_0
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_0=this->M_x10();                                       //call				System::Boolean Root::T_x25::M_x10()
	IL_002e:            if(!Temp_0)goto IL_0083;                                    //brfalse.s				IL_0083
	IL_0030:                                                                        //ldc.i4				0x1
	IL_0035:            V_0=1;                                                      //stloc				V_0
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003e;                                               //br.s				IL_003e
	IL_003d:                                                                        //break
	IL_003e:            goto IL_0040;                                               //br.s				IL_0040
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldc.i4.0
	IL_0042:            this->F_x5=false;                                           //stfld				System::Boolean Root::T_x25 F_x5
	IL_0047:                                                                        //ldarg.0
	IL_0048:                                                                        //ldarg.0
	IL_0049:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_004e:            Temp_2=Temp_1->F_x1;                                        //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_0053:            this->F_x8=Temp_2;                                          //stfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0058:                                                                        //ldarg.0
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_3=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_005f:            Temp_4=Temp_3->F_x12;                                       //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0064:            this->SelectedNode=Temp_4;                                  //call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_0069:                                                                        //ldarg.0
	IL_006a:                                                                        //ldc.i4.1
	IL_006b:            this->F_x5=true;                                            //stfld				System::Boolean Root::T_x25 F_x5
	IL_0070:                                                                        //ldarg.0
	IL_0071:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_0076:                                                                        //ldc.i4				0x2
	IL_007b:            V_0=2;                                                      //stloc				V_0
	IL_007f:            /*goto IL_0002;*/goto IL_0081;                              //br.s				IL_0002
	IL_0081:            goto IL_0083;                                               //br.s				IL_0083
	IL_0083:            return;                                                     //ret

}
inline void Root::T_x25::M_x12()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25::T_x1^ Temp_0 = nullptr;
	Root::T_x25::T_x1^ Temp_1 = nullptr;
	Root::T_x25::T_x1^ Temp_2 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_0
	IL_0006:            switch(V_0){case 0:goto IL_003b;case 1:goto IL_0028;case 2:goto IL_007e;};//switch				(IL_003b,IL_0028,IL_007e)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_001d:                                                                        //ldc.i4				0x1
	IL_0022:            V_0=1;                                                      //stloc				V_0
	IL_0026:            /*goto IL_0002;*/goto IL_0028;                              //br.s				IL_0002
	IL_0028:                                                                        //ldarg.0
	IL_0029:            Temp_4=this->M_x7();                                        //call				System::Boolean Root::T_x25::M_x7()
	IL_002e:            if(!Temp_4)goto IL_008b;                                    //brfalse.s				IL_008b
	IL_0030:                                                                        //ldc.i4				0x0
	IL_0035:            V_0=0;                                                      //stloc				V_0
	IL_0039:            /*goto IL_0002;*/goto IL_003b;                              //br.s				IL_0002
	IL_003b:            goto IL_003d;                                               //br.s				IL_003d
	IL_003d:                                                                        //ldarg.0
	IL_003e:                                                                        //ldc.i4.0
	IL_003f:            this->F_x5=false;                                           //stfld				System::Boolean Root::T_x25 F_x5
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_004b:            Temp_1=Temp_0->F_x2;                                        //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_0050:            this->F_x8=Temp_1;                                          //stfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0055:                                                                        //ldarg.0
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_005c:            Temp_3=Temp_2->F_x12;                                       //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0061:            this->SelectedNode=Temp_3;                                  //call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_0066:                                                                        //ldarg.0
	IL_0067:                                                                        //ldc.i4.1
	IL_0068:            this->F_x5=true;                                            //stfld				System::Boolean Root::T_x25 F_x5
	IL_006d:                                                                        //ldarg.0
	IL_006e:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_0073:                                                                        //ldc.i4				0x2
	IL_0078:            V_0=2;                                                      //stloc				V_0
	IL_007c:            /*goto IL_0002;*/goto IL_007e;                              //br.s				IL_0002
	IL_007e:                                                                        //ldc.i4.0
	IL_007f:                                                                        //dup
	IL_0080:                                                                        //dup
	IL_0081:                                                                        //ldc.i4.2
	IL_0082:                                                                        //sub
	IL_0083:                                                                        //blt				IL_007f
	IL_0088:                                                                        //pop
	IL_0089:            goto IL_008b;                                               //br.s				IL_008b
	IL_008b:            return;                                                     //ret

}
inline System::Boolean Root::T_x25::M_x12(System::String^ A_0)
//Root::T_x24^::M_x2 by M_x12
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x11
	IL_0005:            V_2=17;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x2
	IL_000e:            V_1=2;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003f;                                               //br.s				IL_003f
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_00ae;case 1:goto IL_00ee;case 2:goto IL_0014;case 3:goto IL_009b;case 4:goto IL_008b;case 5:goto IL_006f;case 6:goto IL_00cc;case 7:goto IL_0101;};//switch				(IL_00ae,IL_00ee,IL_0014,IL_009b,IL_008b,IL_006f,IL_00cc,IL_0101)
	IL_003f:                                                                        //ldstr				L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1152\x3454\x3456\x3258"
	IL_0044:                                                                        //ldloc				V_2
	IL_0048:            Temp_5=a(L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1152\x3454\x3456\x3258",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_004d:                                                                        //ldstr				L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1552\x3A54\x2556\x2E58\x3A5A\x2F5C\x3B5E"
	IL_0052:                                                                        //ldloc				V_2
	IL_0056:            Temp_6=a(L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1552\x3A54\x2556\x2E58\x3A5A\x2F5C\x3B5E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_005b:            goto IL_008d;                                               //leave.s				IL_008d
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_4=this->M_x7();                                        //call				System::Boolean Root::T_x25::M_x7()
	IL_0063:            return Temp_4;                                              //ret
	IL_0064:                                                                        //ldc.i4				0x5
	IL_0069:            V_1=5;                                                      //stloc				V_1
	IL_006d:            /*goto IL_0016;*/goto IL_006f;                              //br.s				IL_0016
	IL_006f:                                                                        //ldloc.0
	IL_0070:                                                                        //ldstr				L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1552\x3A54\x2556\x2E58\x3A5A\x2F5C\x3B5E"
	IL_0075:                                                                        //ldloc				V_2
	IL_0079:            Temp_1=a(L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1552\x3A54\x2556\x2E58\x3A5A\x2F5C\x3B5E",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007e:            if(V_0==Temp_1)goto IL_00b0;                                //beq.s				IL_00b0
	IL_0080:                                                                        //ldc.i4				0x4
	IL_0085:            V_1=4;                                                      //stloc				V_1
	IL_0089:            /*goto IL_0016;*/goto IL_008b;                              //br.s				IL_0016
	IL_008b:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_008d:                                                                        //ldc.i4				0x3
	IL_0092:            V_1=3;                                                      //stloc				V_1
	IL_0096:            /*goto IL_0016;*/goto IL_009b;                              //br				IL_0016
	IL_009b:                                                                        //ldarg.1
	IL_009c:                                                                        //dup
	IL_009d:            V_0=A_0;                                                    //stloc.0
	IL_009e:            if(V_0==nullptr)goto IL_0103;                               //brfalse.s				IL_0103
	IL_00a0:                                                                        //ldc.i4				0x0
	IL_00a5:            V_1=0;                                                      //stloc				V_1
	IL_00a9:            /*goto IL_0016;*/goto IL_00ae;                              //br				IL_0016
	IL_00ae:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00b0:                                                                        //ldarg.0
	IL_00b1:            Temp_2=this->M_x10();                                       //call				System::Boolean Root::T_x25::M_x10()
	IL_00b6:            return Temp_2;                                              //ret
	IL_00b7:                                                                        //ldloc.0
	IL_00b8:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00bd:            V_0=Temp_0;                                                 //stloc.0
	IL_00be:                                                                        //ldc.i4				0x6
	IL_00c3:            V_1=6;                                                      //stloc				V_1
	IL_00c7:            /*goto IL_0016;*/goto IL_00cc;                              //br				IL_0016
	IL_00cc:                                                                        //ldloc.0
	IL_00cd:                                                                        //ldstr				L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1152\x3454\x3456\x3258"
	IL_00d2:                                                                        //ldloc				V_2
	IL_00d6:            Temp_3=a(L"\x6E2E\x4230\x4032\x5034\x5A36\x5B38\x573A\x443C\x7D3E\x3340\x2C42\x3244\x3446\x2C48\x394A\x634C\x084E\x3E50\x1152\x3454\x3456\x3258",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00db:            if(V_0==Temp_3)goto IL_005d;                                //beq.s				IL_005d
	IL_00dd:            goto IL_00e0;                                               //br.s				IL_00e0
	IL_00df:                                                                        //break
	IL_00e0:                                                                        //ldc.i4				0x1
	IL_00e5:            V_1=1;                                                      //stloc				V_1
	IL_00e9:            /*goto IL_0016;*/goto IL_00ee;                              //br				IL_0016
	IL_00ee:            goto IL_0064;                                               //br				IL_0064
	IL_00f3:                                                                        //ldc.i4				0x7
	IL_00f8:            V_1=7;                                                      //stloc				V_1
	IL_00fc:            /*goto IL_0016;*/goto IL_0101;                              //br				IL_0016
	IL_0101:            goto IL_0103;                                               //br.s				IL_0103
	IL_0103:                                                                        //ldc.i4.0
	IL_0104:            return false;                                               //ret

}
inline void Root::T_x25::M_x13()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	System::Collections::ArrayList^ Temp_5 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xc
	IL_0005:            V_1=12;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x1
	IL_000e:            V_0=1;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_0068;case 1:goto IL_0014;case 2:goto IL_00a7;case 3:goto IL_0091;};//switch				(IL_0068,IL_0014,IL_00a7,IL_0091)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x25 F_x2
	IL_0035:                                                                        //ldstr				L"\x6C29\x402B\x4F2D\x442F\x4631\x5133\x5835\x7637\x5B39\x513B\x5B3D\x333F\x3241\x2543\x2545\x2D47\x3949"
	IL_003a:                                                                        //ldloc				V_1
	IL_003e:            Temp_1=a(L"\x6C29\x402B\x4F2D\x442F\x4631\x5133\x5835\x7637\x5B39\x513B\x5B3D\x333F\x3241\x2543\x2545\x2D47\x3949",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0043:            Temp_2=Temp_0->GetProperty(Temp_1);                         //callvirt				System::String^ Reflector::IConfiguration::GetProperty(System::String^)
	IL_0048:                                                                        //ldstr				L"\x5E29\x5E2B\x5B2D\x552F"
	IL_004d:                                                                        //ldloc				V_1
	IL_0051:            Temp_3=a(L"\x5E29\x5E2B\x5B2D\x552F",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0056:            Temp_4=(Temp_2 == Temp_3);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_005b:            if(!Temp_4)goto IL_006a;                                    //brfalse.s				IL_006a
	IL_005d:                                                                        //ldc.i4				0x0
	IL_0062:            V_0=0;                                                      //stloc				V_0
	IL_0066:            /*goto IL_0016;*/goto IL_0068;                              //br.s				IL_0016
	IL_0068:            goto IL_0093;                                               //br.s				IL_0093
	IL_006a:                                                                        //ldc.i4.3
	IL_006b:                                                                        //dup
	IL_006c:                                                                        //dup
	IL_006d:                                                                        //ldc.i4.1
	IL_006e:                                                                        //sub
	IL_006f:                                                                        //blt				IL_006b
	IL_0074:                                                                        //pop
	IL_0075:                                                                        //ldarg.0
	IL_0076:            Temp_5=this->F_x9;                                          //ldfld				System::Collections::ArrayList^ Root::T_x25 F_x9
	IL_007b:            Temp_5->Clear();                                            //callvirt				void System::Collections::ArrayList::Clear()
	IL_0080:                                                                        //ldarg.0
	IL_0081:            this->M_x8();                                               //call				void Root::T_x25::M_x8()
	IL_0086:                                                                        //ldc.i4				0x3
	IL_008b:            V_0=3;                                                      //stloc				V_0
	IL_008f:            /*goto IL_0016;*/goto IL_0091;                              //br.s				IL_0016
	IL_0091:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_0093:                                                                        //ldarg.0
	IL_0094:            this->M_x1();                                               //call				void Root::T_x25::M_x1()
	IL_0099:                                                                        //ldc.i4				0x2
	IL_009e:            V_0=2;                                                      //stloc				V_0
	IL_00a2:            /*goto IL_0016;*/goto IL_00a7;                              //br				IL_0016
	IL_00a7:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_00a9:            System::Windows::Forms::Application::DoEvents();            //call				void System::Windows::Forms::Application::DoEvents()
	IL_00ae:                                                                        //ldarg.0
	IL_00af:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_00b4:            return;                                                     //ret

}
inline Root::T_x10^ Root::T_x25::M_x15()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x10^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x13;                                         //ldfld				Root::T_x10^ Root::T_x25 F_x13
	IL_0006:            return Temp_0;                                              //ret

}
inline void Root::T_x25::M_x2()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25::T_x1^ Temp_0 = nullptr;
	Root::T_x25::T_x1^ Temp_1 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_2 = nullptr;
	System::Windows::Forms::TreeView^ Temp_3 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_4 = nullptr;
	System::Windows::Forms::TreeView^ Temp_5 = nullptr;
	Root::T_x25::T_x1^ Temp_6 = nullptr;
	Root::T_x25::T_x1^ Temp_7 = nullptr;
	Root::T_x25::T_x1^ Temp_8 = nullptr;
	Root::T_x25::T_x1^ Temp_9 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_10 = nullptr;
	Root::T_x25::T_x1^ Temp_11 = nullptr;
	Root::T_x25::T_x1^ Temp_12 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_13 = nullptr;
	//local variables.
	Root::T_x25::T_x1^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Root::T_x25::T_x1^ V_2 = nullptr;
	Root::T_x25::T_x1^ V_3 = nullptr;
	Root::T_x25::T_x1^ V_4 = nullptr;
	Root::T_x25::T_x1^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:            goto IL_0096;                                               //br				IL_0096
	IL_0005:                                                                        //ldloc				V_6
	IL_0009:            switch(V_6){case 0:goto IL_00f4;case 1:goto IL_024d;case 2:goto IL_0163;case 3:goto IL_01bb;case 4:goto IL_0315;case 5:goto IL_01d4;case 6:goto IL_035a;case 7:goto IL_02ed;case 8:goto IL_020f;case 9:goto IL_0134;case 10:goto IL_0107;case 11:goto IL_00df;case 12:goto IL_02a5;case 13:goto IL_0333;case 14:goto IL_01f5;case 15:goto IL_0150;case 16:goto IL_0270;case 17:goto IL_02bf;case 18:goto IL_0302;case 19:goto IL_00b1;case 20:goto IL_0399;case 21:goto IL_0233;case 22:goto IL_0386;case 23:goto IL_03b2;case 24:goto IL_01e4;case 25:goto IL_019d;case 26:goto IL_025d;case 27:goto IL_0346;case 28:goto IL_021f;case 29:goto IL_02dd;case 30:goto IL_036d;case 31:goto IL_0181;case 32:goto IL_0291;case 33:goto IL_011a;};//switch				(IL_00f4,IL_024d,IL_0163,IL_01bb,IL_0315,IL_01d4,IL_035a,IL_02ed,IL_020f,IL_0134,IL_0107,IL_00df,IL_02a5,IL_0333,IL_01f5,IL_0150,IL_0270,IL_02bf,IL_0302,IL_00b1,IL_0399,IL_0233,IL_0386,IL_03b2,IL_01e4,IL_019d,IL_025d,IL_0346,IL_021f,IL_02dd,IL_036d,IL_0181,IL_0291,IL_011a)
	IL_0096:                                                                        //ldnull
	IL_0097:            V_0=safe_cast<Root::T_x25::T_x1^>(nullptr);                 //stloc.0
	IL_0098:                                                                        //ldc.i4.0
	IL_0099:            V_1=0;                                                      //stloc.1
	IL_009a:                                                                        //ldc.i4.0
	IL_009b:            V_1=0;                                                      //stloc.1
	IL_009c:                                                                        //ldarg.0
	IL_009d:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_00a2:            V_0=Temp_0;                                                 //stloc.0
	IL_00a3:                                                                        //ldc.i4				0x13
	IL_00a8:            V_6=19;                                                     //stloc				V_6
	IL_00ac:            /*goto IL_0005;*/goto IL_00b1;                              //br				IL_0005
	IL_00b1:            goto IL_0338;                                               //br				IL_0338
	IL_00b6:                                                                        //ldc.i4.1
	IL_00b7:                                                                        //dup
	IL_00b8:                                                                        //dup
	IL_00b9:                                                                        //ldc.i4.6
	IL_00ba:                                                                        //add
	IL_00bb:                                                                        //bgt				IL_00b7
	IL_00c0:                                                                        //pop
	IL_00c1:                                                                        //ldloc.0
	IL_00c2:            Temp_8=V_0->F_x1;                                           //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_00c7:            V_4=Temp_8;                                                 //stloc.s				V_4
	IL_00c9:                                                                        //ldloc.0
	IL_00ca:            Temp_9=V_0->F_x2;                                           //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_00cf:            V_5=Temp_9;                                                 //stloc.s				V_5
	IL_00d1:                                                                        //ldc.i4				0xb
	IL_00d6:            V_6=11;                                                     //stloc				V_6
	IL_00da:            /*goto IL_0005;*/goto IL_00df;                              //br				IL_0005
	IL_00df:                                                                        //ldloc.s				V_4
	IL_00e1:            if(V_4==nullptr)goto IL_02df;                               //brfalse				IL_02df
	IL_00e6:                                                                        //ldc.i4				0x0
	IL_00eb:            V_6=0;                                                      //stloc				V_6
	IL_00ef:            /*goto IL_0005;*/goto IL_00f4;                              //br				IL_0005
	IL_00f4:            goto IL_0186;                                               //br				IL_0186
	IL_00f9:                                                                        //ldc.i4				0xa
	IL_00fe:            V_6=10;                                                     //stloc				V_6
	IL_0102:            /*goto IL_0005;*/goto IL_0107;                              //br				IL_0005
	IL_0107:                                                                        //ldloc.1
	IL_0108:                                                                        //ldc.i4.s				32
	IL_010a:            if(V_1>32)goto IL_00b6;                                     //bgt.s				IL_00b6
	IL_010c:                                                                        //ldc.i4				0x21
	IL_0111:            V_6=33;                                                     //stloc				V_6
	IL_0115:            /*goto IL_0005;*/goto IL_011a;                              //br				IL_0005
	IL_011a:            goto IL_038b;                                               //br				IL_038b
	IL_011f:                                                                        //ldloc.2
	IL_0120:                                                                        //ldloc.3
	IL_0121:            V_2->F_x2=V_3;                                              //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_0126:                                                                        //ldc.i4				0x9
	IL_012b:            V_6=9;                                                      //stloc				V_6
	IL_012f:            /*goto IL_0005;*/goto IL_0134;                              //br				IL_0005
	IL_0134:            goto IL_01d6;                                               //br				IL_01d6
	IL_0139:                                                                        //ldloc.s				V_5
	IL_013b:                                                                        //ldloc.s				V_4
	IL_013d:            V_5->F_x1=V_4;                                              //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_0142:                                                                        //ldc.i4				0xf
	IL_0147:            V_6=15;                                                     //stloc				V_6
	IL_014b:            /*goto IL_0005;*/goto IL_0150;                              //br				IL_0005
	IL_0150:            goto IL_01fa;                                               //br				IL_01fa
	IL_0155:                                                                        //ldc.i4				0x2
	IL_015a:            V_6=2;                                                      //stloc				V_6
	IL_015e:            /*goto IL_0005;*/goto IL_0163;                              //br				IL_0005
	IL_0163:                                                                        //ldloc.0
	IL_0164:            Temp_2=V_0->F_x12;                                          //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0169:            Temp_3=Temp_2->TreeView;                                    //callvirt				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_016e:            if(Temp_3!=nullptr)goto IL_02c4;                            //brtrue				IL_02c4
	IL_0173:                                                                        //ldc.i4				0x1f
	IL_0178:            V_6=31;                                                     //stloc				V_6
	IL_017c:            /*goto IL_0005;*/goto IL_0181;                              //br				IL_0005
	IL_0181:            goto IL_0275;                                               //br				IL_0275
	IL_0186:                                                                        //ldloc.s				V_4
	IL_0188:                                                                        //ldloc.s				V_5
	IL_018a:            V_4->F_x2=V_5;                                              //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_018f:                                                                        //ldc.i4				0x19
	IL_0194:            V_6=25;                                                     //stloc				V_6
	IL_0198:            /*goto IL_0005;*/goto IL_019d;                              //br				IL_0005
	IL_019d:            goto IL_02df;                                               //br				IL_02df
	IL_01a2:                                                                        //ldloc.1
	IL_01a3:                                                                        //ldc.i4.1
	IL_01a4:                                                                        //add
	IL_01a5:            V_1=(V_1 + 1);                                              //stloc.1
	IL_01a6:                                                                        //ldloc.0
	IL_01a7:            Temp_6=V_0->F_x1;                                           //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_01ac:            V_0=Temp_6;                                                 //stloc.0
	IL_01ad:                                                                        //ldc.i4				0x3
	IL_01b2:            V_6=3;                                                      //stloc				V_6
	IL_01b6:            /*goto IL_0005;*/goto IL_01bb;                              //br				IL_0005
	IL_01bb:            goto IL_0211;                                               //br.s				IL_0211
	IL_01bd:                                                                        //ldc.i4.0
	IL_01be:            V_1=0;                                                      //stloc.1
	IL_01bf:                                                                        //ldarg.0
	IL_01c0:            Temp_7=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_01c5:            V_0=Temp_7;                                                 //stloc.0
	IL_01c6:                                                                        //ldc.i4				0x5
	IL_01cb:            V_6=5;                                                      //stloc				V_6
	IL_01cf:            /*goto IL_0005;*/goto IL_01d4;                              //br				IL_0005
	IL_01d4:            goto IL_0211;                                               //br.s				IL_0211
	IL_01d6:                                                                        //ldc.i4				0x18
	IL_01db:            V_6=24;                                                     //stloc				V_6
	IL_01df:            /*goto IL_0005;*/goto IL_01e4;                              //br				IL_0005
	IL_01e4:                                                                        //ldloc.3
	IL_01e5:            if(V_3==nullptr)goto IL_0238;                               //brfalse.s				IL_0238
	IL_01e7:                                                                        //ldc.i4				0xe
	IL_01ec:            V_6=14;                                                     //stloc				V_6
	IL_01f0:            /*goto IL_0005;*/goto IL_01f5;                              //br				IL_0005
	IL_01f5:            goto IL_02aa;                                               //br				IL_02aa
	IL_01fa:                                                                        //ldloc.0
	IL_01fb:                                                                        //ldnull
	IL_01fc:            V_0->F_x12=safe_cast<System::Windows::Forms::TreeNode^>(nullptr);//stfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0201:                                                                        //ldc.i4				0x8
	IL_0206:            V_6=8;                                                      //stloc				V_6
	IL_020a:            /*goto IL_0005;*/goto IL_020f;                              //br				IL_0005
	IL_020f:            goto IL_01a2;                                               //br.s				IL_01a2
	IL_0211:                                                                        //ldc.i4				0x1c
	IL_0216:            V_6=28;                                                     //stloc				V_6
	IL_021a:            /*goto IL_0005;*/goto IL_021f;                              //br				IL_0005
	IL_021f:                                                                        //ldloc.0
	IL_0220:            if(V_0!=nullptr)goto IL_00f9;                               //brtrue				IL_00f9
	IL_0225:                                                                        //ldc.i4				0x15
	IL_022a:            V_6=21;                                                     //stloc				V_6
	IL_022e:            /*goto IL_0005;*/goto IL_0233;                              //br				IL_0005
	IL_0233:            goto IL_03b7;                                               //br				IL_03b7
	IL_0238:                                                                        //ldloc.0
	IL_0239:                                                                        //ldnull
	IL_023a:            V_0->F_x12=safe_cast<System::Windows::Forms::TreeNode^>(nullptr);//stfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_023f:                                                                        //ldc.i4				0x1
	IL_0244:            V_6=1;                                                      //stloc				V_6
	IL_0248:            /*goto IL_0005;*/goto IL_024d;                              //br				IL_0005
	IL_024d:            goto IL_02c4;                                               //br.s				IL_02c4
	IL_024f:                                                                        //ldc.i4				0x1a
	IL_0254:            V_6=26;                                                     //stloc				V_6
	IL_0258:            /*goto IL_0005;*/goto IL_025d;                              //br				IL_0005
	IL_025d:                                                                        //ldloc.1
	IL_025e:                                                                        //ldc.i4.s				32
	IL_0260:            if(V_1>32)goto IL_0275;                                     //bgt.s				IL_0275
	IL_0262:                                                                        //ldc.i4				0x10
	IL_0267:            V_6=16;                                                     //stloc				V_6
	IL_026b:            /*goto IL_0005;*/goto IL_0270;                              //br				IL_0005
	IL_0270:            goto IL_035f;                                               //br				IL_035f
	IL_0275:                                                                        //ldloc.0
	IL_0276:            Temp_11=V_0->F_x1;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_027b:            V_2=Temp_11;                                                //stloc.2
	IL_027c:                                                                        //ldloc.0
	IL_027d:            Temp_12=V_0->F_x2;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_0282:            V_3=Temp_12;                                                //stloc.3
	IL_0283:                                                                        //ldc.i4				0x20
	IL_0288:            V_6=32;                                                     //stloc				V_6
	IL_028c:            /*goto IL_0005;*/goto IL_0291;                              //br				IL_0005
	IL_0291:                                                                        //ldloc.2
	IL_0292:            if(V_2==nullptr)goto IL_01d6;                               //brfalse				IL_01d6
	IL_0297:                                                                        //ldc.i4				0xc
	IL_029c:            V_6=12;                                                     //stloc				V_6
	IL_02a0:            /*goto IL_0005;*/goto IL_02a5;                              //br				IL_0005
	IL_02a5:            goto IL_011f;                                               //br				IL_011f
	IL_02aa:                                                                        //ldloc.3
	IL_02ab:                                                                        //ldloc.2
	IL_02ac:            V_3->F_x1=V_2;                                              //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_02b1:                                                                        //ldc.i4				0x11
	IL_02b6:            V_6=17;                                                     //stloc				V_6
	IL_02ba:            /*goto IL_0005;*/goto IL_02bf;                              //br				IL_0005
	IL_02bf:            goto IL_0238;                                               //br				IL_0238
	IL_02c4:                                                                        //ldloc.1
	IL_02c5:                                                                        //ldc.i4.1
	IL_02c6:                                                                        //add
	IL_02c7:            V_1=(V_1 + 1);                                              //stloc.1
	IL_02c8:                                                                        //ldloc.0
	IL_02c9:            Temp_1=V_0->F_x2;                                           //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_02ce:            V_0=Temp_1;                                                 //stloc.0
	IL_02cf:                                                                        //ldc.i4				0x1d
	IL_02d4:            V_6=29;                                                     //stloc				V_6
	IL_02d8:            /*goto IL_0005;*/goto IL_02dd;                              //br				IL_0005
	IL_02dd:            goto IL_0338;                                               //br.s				IL_0338
	IL_02df:                                                                        //ldc.i4				0x7
	IL_02e4:            V_6=7;                                                      //stloc				V_6
	IL_02e8:            /*goto IL_0005;*/goto IL_02ed;                              //br				IL_0005
	IL_02ed:                                                                        //ldloc.s				V_5
	IL_02ef:            if(V_5==nullptr)goto IL_01fa;                               //brfalse				IL_01fa
	IL_02f4:                                                                        //ldc.i4				0x12
	IL_02f9:            V_6=18;                                                     //stloc				V_6
	IL_02fd:            /*goto IL_0005;*/goto IL_0302;                              //br				IL_0005
	IL_0302:            goto IL_0139;                                               //br				IL_0139
	IL_0307:                                                                        //ldc.i4				0x4
	IL_030c:            V_6=4;                                                      //stloc				V_6
	IL_0310:            /*goto IL_0005;*/goto IL_0315;                              //br				IL_0005
	IL_0315:                                                                        //ldloc.0
	IL_0316:            Temp_4=V_0->F_x12;                                          //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_031b:            Temp_5=Temp_4->TreeView;                                    //callvirt				System::Windows::Forms::TreeView^ System::Windows::Forms::TreeNode::get_TreeView()
	IL_0320:            if(Temp_5!=nullptr)goto IL_01a2;                            //brtrue				IL_01a2
	IL_0325:                                                                        //ldc.i4				0xd
	IL_032a:            V_6=13;                                                     //stloc				V_6
	IL_032e:            /*goto IL_0005;*/goto IL_0333;                              //br				IL_0005
	IL_0333:            goto IL_00b6;                                               //br				IL_00b6
	IL_0338:                                                                        //ldc.i4				0x1b
	IL_033d:            V_6=27;                                                     //stloc				V_6
	IL_0341:            /*goto IL_0005;*/goto IL_0346;                              //br				IL_0005
	IL_0346:                                                                        //ldloc.0
	IL_0347:            if(V_0!=nullptr)goto IL_024f;                               //brtrue				IL_024f
	IL_034c:                                                                        //ldc.i4				0x6
	IL_0351:            V_6=6;                                                      //stloc				V_6
	IL_0355:            /*goto IL_0005;*/goto IL_035a;                              //br				IL_0005
	IL_035a:            goto IL_01bd;                                               //br				IL_01bd
	IL_035f:                                                                        //ldc.i4				0x1e
	IL_0364:            V_6=30;                                                     //stloc				V_6
	IL_0368:            /*goto IL_0005;*/goto IL_036d;                              //br				IL_0005
	IL_036d:                                                                        //ldloc.0
	IL_036e:            Temp_13=V_0->F_x12;                                         //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0373:            if(Temp_13==nullptr)goto IL_02c4;                           //brfalse				IL_02c4
	IL_0378:                                                                        //ldc.i4				0x16
	IL_037d:            V_6=22;                                                     //stloc				V_6
	IL_0381:            /*goto IL_0005;*/goto IL_0386;                              //br				IL_0005
	IL_0386:            goto IL_0155;                                               //br				IL_0155
	IL_038b:                                                                        //ldc.i4				0x14
	IL_0390:            V_6=20;                                                     //stloc				V_6
	IL_0394:            /*goto IL_0005;*/goto IL_0399;                              //br				IL_0005
	IL_0399:                                                                        //ldloc.0
	IL_039a:            Temp_10=V_0->F_x12;                                         //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_039f:            if(Temp_10==nullptr)goto IL_01a2;                           //brfalse				IL_01a2
	IL_03a4:                                                                        //ldc.i4				0x17
	IL_03a9:            V_6=23;                                                     //stloc				V_6
	IL_03ad:            /*goto IL_0005;*/goto IL_03b2;                              //br				IL_0005
	IL_03b2:            goto IL_0307;                                               //br				IL_0307
	IL_03b7:            return;                                                     //ret

}
inline void Root::T_x25::M_x2(System::EventHandler^ A_0)
//Reflector::IAssemblyBrowser^::add_ActiveItemChanged by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::EventHandler^ Temp_0 = nullptr;
	System::Delegate^ Temp_1 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //ldarg.0
	IL_0002:            Temp_0=this->F_x1;                                          //ldfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0007:                                                                        //ldarg.1
	IL_0008:            Temp_1=System::Delegate::Combine(safe_cast<System::Delegate^>(Temp_0),safe_cast<System::Delegate^>(A_0));//call				System::Delegate^ System::Delegate::Combine(System::Delegate^,System::Delegate^)
	IL_000d:                                                                        //castclass				System::EventHandler
	IL_0012:            this->F_x1=safe_cast<System::EventHandler^>(Temp_1);        //stfld				System::EventHandler^ Root::T_x25 F_x1
	IL_0017:            return;                                                     //ret

}
inline void Root::T_x25::M_x2(System::String^ A_0)
//Root::T_x24^::M_x1 by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	//local variables.
	System::String^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_2=3;                                                      //stloc				V_2
	IL_0009:                                                                        //ldc.i4				0x5
	IL_000e:            V_1=5;                                                      //stloc				V_1
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_003b;                                               //br.s				IL_003b
	IL_0016:                                                                        //ldloc				V_1
	IL_001a:            switch(V_1){case 0:goto IL_0094;case 1:goto IL_00a7;case 2:goto IL_00ef;case 3:goto IL_0087;case 4:goto IL_006b;case 5:goto IL_0014;case 6:goto IL_00c5;};//switch				(IL_0094,IL_00a7,IL_00ef,IL_0087,IL_006b,IL_0014,IL_00c5)
	IL_003b:                                                                        //ldstr				L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0744\x2646\x2A48\x204A"
	IL_0040:                                                                        //ldloc				V_2
	IL_0044:            Temp_3=a(L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0744\x2646\x2A48\x204A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0049:                                                                        //ldstr				L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0344\x2846\x3B48\x3C4A\x2C4C\x3D4E\x3550"
	IL_004e:                                                                        //ldloc				V_2
	IL_0052:            Temp_4=a(L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0344\x2846\x3B48\x3C4A\x2C4C\x3D4E\x3550",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0057:            goto IL_0089;                                               //leave.s				IL_0089
	IL_0059:                                                                        //ldarg.0
	IL_005a:            this->M_x12();                                              //call				void Root::T_x25::M_x12()
	IL_005f:            return;                                                     //ret
	IL_0060:                                                                        //ldc.i4				0x4
	IL_0065:            V_1=4;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0016;*/goto IL_006b;                              //br.s				IL_0016
	IL_006b:                                                                        //ldloc.0
	IL_006c:                                                                        //ldstr				L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0344\x2846\x3B48\x3C4A\x2C4C\x3D4E\x3550"
	IL_0071:                                                                        //ldloc				V_2
	IL_0075:            Temp_1=a(L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0344\x2846\x3B48\x3C4A\x2C4C\x3D4E\x3550",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_007a:            if(V_0==Temp_1)goto IL_00a9;                                //beq.s				IL_00a9
	IL_007c:                                                                        //ldc.i4				0x3
	IL_0081:            V_1=3;                                                      //stloc				V_1
	IL_0085:            /*goto IL_0016;*/goto IL_0087;                              //br.s				IL_0016
	IL_0087:            goto IL_00f4;                                               //br.s				IL_00f4
	IL_0089:                                                                        //ldc.i4				0x0
	IL_008e:            V_1=0;                                                      //stloc				V_1
	IL_0092:            /*goto IL_0016;*/goto IL_0094;                              //br.s				IL_0016
	IL_0094:                                                                        //ldarg.1
	IL_0095:                                                                        //dup
	IL_0096:            V_0=A_0;                                                    //stloc.0
	IL_0097:            if(V_0==nullptr)goto IL_00f5;                               //brfalse.s				IL_00f5
	IL_0099:                                                                        //ldc.i4				0x1
	IL_009e:            V_1=1;                                                      //stloc				V_1
	IL_00a2:            /*goto IL_0016;*/goto IL_00a7;                              //br				IL_0016
	IL_00a7:            goto IL_00b0;                                               //br.s				IL_00b0
	IL_00a9:                                                                        //ldarg.0
	IL_00aa:            this->M_x11();                                              //call				void Root::T_x25::M_x11()
	IL_00af:            return;                                                     //ret
	IL_00b0:                                                                        //ldloc.0
	IL_00b1:            Temp_0=System::String::IsInterned(V_0);                     //call				System::String^ System::String::IsInterned(System::String^)
	IL_00b6:            V_0=Temp_0;                                                 //stloc.0
	IL_00b7:                                                                        //ldc.i4				0x6
	IL_00bc:            V_1=6;                                                      //stloc				V_1
	IL_00c0:            /*goto IL_0016;*/goto IL_00c5;                              //br				IL_0016
	IL_00c5:                                                                        //ldloc.0
	IL_00c6:                                                                        //ldstr				L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0744\x2646\x2A48\x204A"
	IL_00cb:                                                                        //ldloc				V_2
	IL_00cf:            Temp_2=a(L"\x6020\x5022\x5624\x4226\x4428\x492A\x412C\x562E\x7330\x4132\x5A34\x4036\x4A38\x5E3A\x4F3C\x113E\x0640\x2C42\x0744\x2646\x2A48\x204A",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00d4:            if(V_0==Temp_2)goto IL_0059;                                //beq.s				IL_0059
	IL_00d6:                                                                        //ldc.i4.4
	IL_00d7:                                                                        //dup
	IL_00d8:                                                                        //dup
	IL_00d9:                                                                        //ldc.i4.2
	IL_00da:                                                                        //sub
	IL_00db:                                                                        //blt				IL_00d7
	IL_00e0:                                                                        //pop
	IL_00e1:                                                                        //ldc.i4				0x2
	IL_00e6:            V_1=2;                                                      //stloc				V_1
	IL_00ea:            /*goto IL_0016;*/goto IL_00ef;                              //br				IL_0016
	IL_00ef:            goto IL_0060;                                               //br				IL_0060
	IL_00f4:            return;                                                     //ret
	IL_00f5:            return;                                                     //ret

}
inline void Root::T_x25::M_x2(System::Windows::Forms::TreeNode^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25::T_x1^ Temp_0 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_1 = nullptr;
	Root::T_x25::T_x1^ Temp_2 = nullptr;
	Root::T_x25::T_x1^ Temp_3 = nullptr;
	Root::T_x25::T_x1^ Temp_4 = nullptr;
	Root::T_x25::T_x1^ Temp_5 = nullptr;
	Root::T_x25::T_x1^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	Root::T_x25::T_x1^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_1=5;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_0046;                                               //br.s				IL_0046
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00c8;case 1:goto IL_00b4;case 2:goto IL_010b;case 3:goto IL_0085;case 4:goto IL_014d;case 5:goto IL_000b;case 6:goto IL_00a4;case 7:goto IL_00e5;case 8:goto IL_00f5;case 9:goto IL_0137;case 10:goto IL_0078;case 11:goto IL_005f;};//switch				(IL_00c8,IL_00b4,IL_010b,IL_0085,IL_014d,IL_000b,IL_00a4,IL_00e5,IL_00f5,IL_0137,IL_0078,IL_005f)
	IL_0046:            goto IL_0049;                                               //br.s				IL_0049
	IL_0048:                                                                        //break
	IL_0049:                                                                        //ldarg.0
	IL_004a:            Temp_7=this->F_x5;                                          //ldfld				System::Boolean Root::T_x25 F_x5
	IL_004f:            if(!Temp_7)goto IL_0152;                                    //brfalse				IL_0152
	IL_0054:                                                                        //ldc.i4				0xb
	IL_0059:            V_1=11;                                                     //stloc				V_1
	IL_005d:            /*goto IL_000d;*/goto IL_005f;                              //br.s				IL_000d
	IL_005f:            goto IL_00a6;                                               //br.s				IL_00a6
	IL_0061:                                                                        //ldarg.0
	IL_0062:            Temp_2=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0067:                                                                        //ldloc.0
	IL_0068:            Temp_2->F_x1=V_0;                                           //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x1
	IL_006d:                                                                        //ldc.i4				0xa
	IL_0072:            V_1=10;                                                     //stloc				V_1
	IL_0076:            /*goto IL_000d;*/goto IL_0078;                              //br.s				IL_000d
	IL_0078:            goto IL_00ca;                                               //br.s				IL_00ca
	IL_007a:                                                                        //ldc.i4				0x3
	IL_007f:            V_1=3;                                                      //stloc				V_1
	IL_0083:            /*goto IL_000d;*/goto IL_0085;                              //br.s				IL_000d
	IL_0085:                                                                        //ldarg.0
	IL_0086:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_008b:            Temp_1=Temp_0->F_x12;                                       //ldfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_0090:                                                                        //ldarg.1
	IL_0091:            if(Temp_1==A_0)goto IL_0152;                                //beq				IL_0152
	IL_0096:                                                                        //ldc.i4				0x6
	IL_009b:            V_1=6;                                                      //stloc				V_1
	IL_009f:            /*goto IL_000d;*/goto IL_00a4;                              //br				IL_000d
	IL_00a4:            goto IL_0110;                                               //br.s				IL_0110
	IL_00a6:                                                                        //ldc.i4				0x1
	IL_00ab:            V_1=1;                                                      //stloc				V_1
	IL_00af:            /*goto IL_000d;*/goto IL_00b4;                              //br				IL_000d
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            if(A_0==nullptr)goto IL_0152;                               //brfalse				IL_0152
	IL_00ba:                                                                        //ldc.i4				0x0
	IL_00bf:            V_1=0;                                                      //stloc				V_1
	IL_00c3:            /*goto IL_000d;*/goto IL_00c8;                              //br				IL_000d
	IL_00c8:            goto IL_00e7;                                               //br.s				IL_00e7
	IL_00ca:                                                                        //ldarg.0
	IL_00cb:                                                                        //ldloc.0
	IL_00cc:            this->F_x8=V_0;                                             //stfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_00d1:                                                                        //ldarg.0
	IL_00d2:            this->M_x2();                                               //call				void Root::T_x25::M_x2()
	IL_00d7:                                                                        //ldc.i4				0x7
	IL_00dc:            V_1=7;                                                      //stloc				V_1
	IL_00e0:            /*goto IL_000d;*/goto IL_00e5;                              //br				IL_000d
	IL_00e5:            goto IL_0152;                                               //br.s				IL_0152
	IL_00e7:                                                                        //ldc.i4				0x8
	IL_00ec:            V_1=8;                                                      //stloc				V_1
	IL_00f0:            /*goto IL_000d;*/goto IL_00f5;                              //br				IL_000d
	IL_00f5:                                                                        //ldarg.0
	IL_00f6:            Temp_5=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_00fb:            if(Temp_5==nullptr)goto IL_0110;                            //brfalse.s				IL_0110
	IL_00fd:                                                                        //ldc.i4				0x2
	IL_0102:            V_1=2;                                                      //stloc				V_1
	IL_0106:            /*goto IL_000d;*/goto IL_010b;                              //br				IL_000d
	IL_010b:            goto IL_007a;                                               //br				IL_007a
	IL_0110:            Temp_3=gcnew Root::T_x25::T_x1();                           //newobj				void Root::T_x25::T_x1::.ctor()
	IL_0115:            V_0=Temp_3;                                                 //stloc.0
	IL_0116:                                                                        //ldloc.0
	IL_0117:                                                                        //ldarg.1
	IL_0118:            V_0->F_x12=A_0;                                             //stfld				System::Windows::Forms::TreeNode^ Root::T_x25::T_x1 F_x12
	IL_011d:                                                                        //ldloc.0
	IL_011e:                                                                        //ldarg.0
	IL_011f:            Temp_4=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0124:            V_0->F_x2=Temp_4;                                           //stfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_0129:                                                                        //ldc.i4				0x9
	IL_012e:            V_1=9;                                                      //stloc				V_1
	IL_0132:            /*goto IL_000d;*/goto IL_0137;                              //br				IL_000d
	IL_0137:                                                                        //ldarg.0
	IL_0138:            Temp_6=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_013d:            if(Temp_6==nullptr)goto IL_00ca;                            //brfalse.s				IL_00ca
	IL_013f:                                                                        //ldc.i4				0x4
	IL_0144:            V_1=4;                                                      //stloc				V_1
	IL_0148:            /*goto IL_000d;*/goto IL_014d;                              //br				IL_000d
	IL_014d:            goto IL_0061;                                               //br				IL_0061
	IL_0152:            return;                                                     //ret

}
inline void Root::T_x25::M_x2(System::Windows::Forms::TreeViewEventArgs^ A_0)
//System::Windows::Forms::TreeView^::OnAfterSelect by M_x2
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	System::Windows::Forms::TreeViewAction Temp_1 = (System::Windows::Forms::TreeViewAction)0;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_0035;case 1:goto IL_005d;case 2:goto IL_0049;};//switch				(IL_0035,IL_005d,IL_0049)
	IL_0017:                                                                        //ldarg.0
	IL_0018:                                                                        //ldarg.1
	IL_0019:            System::Windows::Forms::TreeView::OnAfterSelect(A_0);       //call				void System::Windows::Forms::TreeView::OnAfterSelect(System::Windows::Forms::TreeViewEventArgs^)
	IL_001e:                                                                        //ldarg.1
	IL_001f:            Temp_0=A_0->Node;                                           //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeViewEventArgs::get_Node()
	IL_0024:                                                                        //castclass				Root::T_x10
	IL_0029:            V_0=safe_cast<Root::T_x10^>(Temp_0);                        //stloc.0
	IL_002a:                                                                        //ldc.i4				0x0
	IL_002f:            V_1=0;                                                      //stloc				V_1
	IL_0033:            /*goto IL_0002;*/goto IL_0035;                              //br.s				IL_0002
	IL_0035:                                                                        //ldarg.1
	IL_0036:            Temp_1=A_0->Action;                                         //callvirt				System::Windows::Forms::TreeViewAction System::Windows::Forms::TreeViewEventArgs::get_Action()
	IL_003b:                                                                        //ldc.i4.1
	IL_003c:            if(safe_cast<System::Int32>(Temp_1)==1)goto IL_0062;        //beq.s				IL_0062
	IL_003e:                                                                        //ldc.i4				0x2
	IL_0043:            V_1=2;                                                      //stloc				V_1
	IL_0047:            /*goto IL_0002;*/goto IL_0049;                              //br.s				IL_0002
	IL_0049:            goto IL_004b;                                               //br.s				IL_004b
	IL_004b:                                                                        //ldarg.0
	IL_004c:                                                                        //ldloc.0
	IL_004d:            this->M_x2(safe_cast<System::Windows::Forms::TreeNode^>(V_0));//call				void Root::T_x25::M_x2(System::Windows::Forms::TreeNode^)
	IL_0052:                                                                        //ldc.i4				0x1
	IL_0057:            V_1=1;                                                      //stloc				V_1
	IL_005b:            /*goto IL_0002;*/goto IL_005d;                              //br.s				IL_0002
	IL_005d:            goto IL_0060;                                               //br.s				IL_0060
	IL_005f:                                                                        //break
	IL_0060:            goto IL_0062;                                               //br.s				IL_0062
	IL_0062:                                                                        //ldarg.0
	IL_0063:                                                                        //ldloc.0
	IL_0064:            this->M_x1(V_0);                                            //call				void Root::T_x25::M_x1(Root::T_x10^)
	IL_0069:            return;                                                     //ret

}
inline System::IServiceProvider^ Root::T_x25::M_x4()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IServiceProvider^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_0006:            return Temp_0;                                              //ret

}
inline Reflector::IConfiguration^ Root::T_x25::M_x5()
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::IConfiguration^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x2;                                          //ldfld				Reflector::IConfiguration^ Root::T_x25 F_x2
	IL_0006:            return Temp_0;                                              //ret

}
inline System::Boolean Root::T_x25::M_x7()
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x25::T_x1^ Temp_0 = nullptr;
	Root::T_x25::T_x1^ Temp_1 = nullptr;
	Root::T_x25::T_x1^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0006:            if(Temp_0==nullptr)goto IL_001f;                            //brfalse.s				IL_001f
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:                                                                        //ldarg.0
	IL_000e:            Temp_1=this->F_x8;                                          //ldfld				Root::T_x25::T_x1^ Root::T_x25 F_x8
	IL_0013:            Temp_2=Temp_1->F_x2;                                        //ldfld				Root::T_x25::T_x1^ Root::T_x25::T_x1 F_x2
	IL_0018:                                                                        //ldnull
	IL_0019:                                                                        //ceq
	IL_001b:                                                                        //ldc.i4.0
	IL_001c:                                                                        //ceq
	IL_001e:            return ((Temp_2 == safe_cast<Root::T_x25::T_x1^>(nullptr)) == false);//ret
	IL_001f:                                                                        //ldc.i4.0
	IL_0020:            return false;                                               //ret

}
inline void Root::T_x25::M_x8()
{
	//temp variables , should be optimized by C++/cli compiler.
	System::IServiceProvider^ Temp_0 = nullptr;
	System::Type^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_3 = nullptr;
	System::Int32 Temp_4 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_5 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_6 = nullptr;
	Root::T_x26^ Temp_7 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	System::Object^ Temp_10 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_11 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	Reflector::CodeModel::IAssembly^ Temp_14 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_15 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_16 = nullptr;
	System::Collections::IEnumerator^ Temp_17 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_18 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_19 = nullptr;
	System::Int32 Temp_20 = 0;
	Root::T_x26^ Temp_21 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_22 = nullptr;
	System::Int32 Temp_23 = 0;
	System::Windows::Forms::TreeNodeCollection^ Temp_24 = nullptr;
	Reflector::CodeModel::IAssemblyCollection^ Temp_25 = nullptr;
	System::Int32 Temp_26 = 0;
	Reflector::CodeModel::IAssemblyCollection^ Temp_27 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_28 = nullptr;
	System::Windows::Forms::TreeNodeCollection^ Temp_29 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_30 = nullptr;
	//local variables.
	Reflector::CodeModel::IAssemblyManager^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	Root::T_x26^ V_2 = nullptr;
	System::Boolean V_3 = false;
	Reflector::CodeModel::IAssembly^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	Reflector::CodeModel::IAssembly^ V_6 = nullptr;
	Root::T_x26^ V_7 = nullptr;
	Root::T_x26^ V_8 = nullptr;
	Root::T_x26^ V_9 = nullptr;
	System::Collections::IEnumerator^ V_10 = nullptr;
	System::IDisposable^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->F_x12;                                         //ldfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_0006:                                                                        //ldtoken				Reflector::CodeModel::IAssemblyManager
	IL_000b:            Temp_1=Reflector::CodeModel::IAssemblyManager::typeid;      //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0010:            Temp_2=Temp_0->GetService(Temp_1);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0015:                                                                        //castclass				Reflector::CodeModel::IAssemblyManager
	IL_001a:            V_0=safe_cast<Reflector::CodeModel::IAssemblyManager^>(Temp_2);//stloc.0
	IL_001b:            /*goto IL_001d;*/goto IL_001B01;                            //br.s				IL_001d
	IL_001B01:          try{
	IL_001d:            goto IL_009c;                                               //br.s				IL_009c
	IL_001f:                                                                        //ldloc				V_12
	IL_0023:            switch(V_12){case 0:goto IL_02cd;case 1:goto IL_0361;case 2:goto IL_032e;case 3:goto IL_043c;case 4:goto IL_039a;case 5:goto IL_00be;case 6:goto IL_012f;case 7:goto IL_0402;case 8:goto IL_04c3;case 9:goto IL_028b;case 10:goto IL_0313;case 11:goto IL_0452;case 12:goto IL_0474;case 13:goto IL_02f8;case 14:goto IL_0420;case 15:goto IL_03ea;case 16:goto IL_04b0;case 17:goto IL_0116;case 18:goto IL_00d1;case 19:goto IL_03ab;case 20:goto IL_049b;case 21:goto IL_025c;case 22:goto IL_02ad;case 23:goto IL_03c5;case 24:goto IL_00e5;case 25:goto IL_0341;case 26:goto IL_03d5;case 27:goto IL_0272;case 28:goto IL_0378;};//switch				(IL_02cd,IL_0361,IL_032e,IL_043c,IL_039a,IL_00be,IL_012f,IL_0402,IL_04c3,IL_028b,IL_0313,IL_0452,IL_0474,IL_02f8,IL_0420,IL_03ea,IL_04b0,IL_0116,IL_00d1,IL_03ab,IL_049b,IL_025c,IL_02ad,IL_03c5,IL_00e5,IL_0341,IL_03d5,IL_0272,IL_0378)
	IL_009c:                                                                        //ldarg.0
	IL_009d:            this->BeginUpdate();                                        //call				void System::Windows::Forms::TreeView::BeginUpdate()
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:            Temp_3=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_00a8:            Temp_4=Temp_3->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_00ad:                                                                        //ldc.i4.1
	IL_00ae:                                                                        //sub
	IL_00af:            V_1=(Temp_4 - 1);                                           //stloc.1
	IL_00b0:                                                                        //ldc.i4				0x5
	IL_00b5:            V_12=5;                                                     //stloc				V_12
	IL_00b9:            /*goto IL_001f;*/goto IL_00be;                              //br				IL_001f
	IL_00be:            goto IL_03c7;                                               //br				IL_03c7
	IL_00c3:                                                                        //ldc.i4				0x12
	IL_00c8:            V_12=18;                                                    //stloc				V_12
	IL_00cc:            /*goto IL_001f;*/goto IL_00d1;                              //br				IL_001f
	IL_00d1:                                                                        //ldloc.3
	IL_00d2:            if(!V_3)goto IL_0366;                                       //brfalse				IL_0366
	IL_00d7:                                                                        //ldc.i4				0x18
	IL_00dc:            V_12=24;                                                    //stloc				V_12
	IL_00e0:            /*goto IL_001f;*/goto IL_00e5;                              //br				IL_001f
	IL_00e5:            goto IL_02d2;                                               //br				IL_02d2
	IL_00ea:            Temp_21=gcnew Root::T_x26();                                //newobj				void Root::T_x26::.ctor()
	IL_00ef:            V_9=Temp_21;                                                //stloc.s				V_9
	IL_00f1:                                                                        //ldloc.s				V_9
	IL_00f3:                                                                        //ldloc.s				V_6
	IL_00f5:            V_9->M_x1(V_6);                                             //callvirt				void Root::T_x26::M_x1(Reflector::CodeModel::IAssembly^)
	IL_00fa:                                                                        //ldarg.0
	IL_00fb:            Temp_22=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0100:                                                                        //ldloc.s				V_9
	IL_0102:            Temp_23=Temp_22->Add(safe_cast<System::Windows::Forms::TreeNode^>(V_9));//callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::Add(System::Windows::Forms::TreeNode^)
	IL_0107:                                                                        //pop
	IL_0108:                                                                        //ldc.i4				0x11
	IL_010d:            V_12=17;                                                    //stloc				V_12
	IL_0111:            /*goto IL_001f;*/goto IL_0116;                              //br				IL_001f
	IL_0116:                                                                        //ldarg.0
	IL_0117:            Temp_15=this->SelectedNode;                                 //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_011c:            if(Temp_15!=nullptr)goto IL_0277;                           //brtrue				IL_0277
	IL_0121:                                                                        //ldc.i4				0x6
	IL_0126:            V_12=6;                                                     //stloc				V_12
	IL_012a:            /*goto IL_001f;*/goto IL_012f;                              //br				IL_001f
	IL_012f:            goto IL_0318;                                               //br				IL_0318
	IL_012F01:          try{
	IL_0134:                                                                        //ldc.i4				0x1
	IL_0139:            V_12=1;                                                     //stloc				V_12
	IL_013d:            /*goto IL_0141;*/goto IL_013f;                              //br.s				IL_0141
	IL_013f:            goto IL_0166;                                               //br.s				IL_0166
	IL_0141:                                                                        //ldloc				V_12
	IL_0145:            switch(V_12){case 0:goto IL_01b2;case 1:goto IL_013f;case 2:goto IL_01d9;case 3:goto IL_01c9;case 4:goto IL_0196;case 5:goto IL_0181;case 6:goto IL_01a5;};//switch				(IL_01b2,IL_013f,IL_01d9,IL_01c9,IL_0196,IL_0181,IL_01a5)
	IL_0166:            goto IL_01a7;                                               //br.s				IL_01a7
	IL_0168:                                                                        //ldloc.s				V_10
	IL_016a:            Temp_10=V_10->Current;                                      //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_016f:                                                                        //castclass				Reflector::CodeModel::IAssembly
	IL_0174:            V_4=safe_cast<Reflector::CodeModel::IAssembly^>(Temp_10);   //stloc.s				V_4
	IL_0176:                                                                        //ldc.i4				0x5
	IL_017b:            V_12=5;                                                     //stloc				V_12
	IL_017f:            /*goto IL_0141;*/goto IL_0181;                              //br.s				IL_0141
	IL_0181:                                                                        //ldloc.s				V_4
	IL_0183:                                                                        //ldloc.2
	IL_0184:            Temp_11=V_2->M_x4();                                        //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0189:            if(V_4!=Temp_11)goto IL_01a7;                               //bne.un.s				IL_01a7
	IL_018b:                                                                        //ldc.i4				0x4
	IL_0190:            V_12=4;                                                     //stloc				V_12
	IL_0194:            /*goto IL_0141;*/goto IL_0196;                              //br.s				IL_0141
	IL_0196:            goto IL_0198;                                               //br.s				IL_0198
	IL_0198:                                                                        //ldc.i4.0
	IL_0199:            V_3=false;                                                  //stloc.3
	IL_019a:                                                                        //ldc.i4				0x6
	IL_019f:            V_12=6;                                                     //stloc				V_12
	IL_01a3:            /*goto IL_0141;*/goto IL_01a5;                              //br.s				IL_0141
	IL_01a5:            goto IL_01a7;                                               //br.s				IL_01a7
	IL_01a7:                                                                        //ldc.i4				0x0
	IL_01ac:            V_12=0;                                                     //stloc				V_12
	IL_01b0:            /*goto IL_0141;*/goto IL_01b2;                              //br.s				IL_0141
	IL_01b2:                                                                        //ldloc.s				V_10
	IL_01b4:            Temp_9=V_10->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_01b9:            if(Temp_9)goto IL_0168;                                     //brtrue.s				IL_0168
	IL_01bb:                                                                        //ldc.i4				0x3
	IL_01c0:            V_12=3;                                                     //stloc				V_12
	IL_01c4:            /*goto IL_0141;*/goto IL_01c9;                              //br				IL_0141
	IL_01c9:            goto IL_01cb;                                               //br.s				IL_01cb
	IL_01cb:                                                                        //ldc.i4				0x2
	IL_01d0:            V_12=2;                                                     //stloc				V_12
	IL_01d4:            /*goto IL_0141;*/goto IL_01d9;                              //br				IL_0141
	IL_01d9:            goto IL_00c3;                                               //leave				IL_00c3
	                    ;}
	                    finally{
	IL_01de:            goto IL_01f5;                                               //br.s				IL_01f5
	IL_01e0:                                                                        //ldloc				V_12
	IL_01e4:            switch(V_12){case 0:goto IL_0209;case 1:goto IL_022c;case 2:goto IL_0218;};//switch				(IL_0209,IL_022c,IL_0218)
	IL_01f5:                                                                        //ldloc.s				V_10
	IL_01f7:                                                                        //isinst				System::IDisposable
	IL_01fc:            V_11=dynamic_cast<System::IDisposable^>(V_10);              //stloc.s				V_11
	IL_01fe:                                                                        //ldc.i4				0x0
	IL_0203:            V_12=0;                                                     //stloc				V_12
	IL_0207:            /*goto IL_01e0;*/goto IL_0209;                              //br.s				IL_01e0
	IL_0209:                                                                        //ldloc.s				V_11
	IL_020b:            if(V_11==nullptr)goto IL_022e;                              //brfalse.s				IL_022e
	IL_020d:                                                                        //ldc.i4				0x2
	IL_0212:            V_12=2;                                                     //stloc				V_12
	IL_0216:            /*goto IL_01e0;*/goto IL_0218;                              //br.s				IL_01e0
	IL_0218:            goto IL_021a;                                               //br.s				IL_021a
	IL_021a:                                                                        //ldloc.s				V_11
	IL_021c:            /*V_11->Dispose();*/                                        //callvirt				void System::IDisposable::Dispose()
	IL_0221:                                                                        //ldc.i4				0x1
	IL_0226:            V_12=1;                                                     //stloc				V_12
	IL_022a:            /*goto IL_01e0;*/goto IL_022c;                              //br.s				IL_01e0
	IL_022c:            goto IL_022e;                                               //br.s				IL_022e
	IL_022e:                                                                        //endfinally
	                    ;}
	IL_022f:            Temp_7=gcnew Root::T_x26();                                 //newobj				void Root::T_x26::.ctor()
	IL_0234:            V_8=Temp_7;                                                 //stloc.s				V_8
	IL_0236:                                                                        //ldloc.s				V_8
	IL_0238:                                                                        //ldloc.s				V_6
	IL_023a:            V_8->M_x1(V_6);                                             //callvirt				void Root::T_x26::M_x1(Reflector::CodeModel::IAssembly^)
	IL_023f:                                                                        //ldarg.0
	IL_0240:            Temp_8=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0245:                                                                        //ldloc.s				V_5
	IL_0247:                                                                        //ldloc.s				V_8
	IL_0249:            Temp_8->Insert(V_5,safe_cast<System::Windows::Forms::TreeNode^>(V_8));//callvirt				void System::Windows::Forms::TreeNodeCollection::Insert(System::Int32,System::Windows::Forms::TreeNode^)
	IL_024e:                                                                        //ldc.i4				0x15
	IL_0253:            V_12=21;                                                    //stloc				V_12
	IL_0257:            /*goto IL_001f;*/goto IL_025c;                              //br				IL_001f
	IL_025c:                                                                        //ldarg.0
	IL_025d:            Temp_18=this->SelectedNode;                                 //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0262:            if(Temp_18!=nullptr)goto IL_0277;                           //brtrue.s				IL_0277
	IL_0264:                                                                        //ldc.i4				0x1b
	IL_0269:            V_12=27;                                                    //stloc				V_12
	IL_026d:            /*goto IL_001f;*/goto IL_0272;                              //br				IL_001f
	IL_0272:            goto IL_03ec;                                               //br				IL_03ec
	IL_0277:                                                                        //ldloc.s				V_5
	IL_0279:                                                                        //ldc.i4.1
	IL_027a:                                                                        //add
	IL_027b:            V_5=(V_5 + 1);                                              //stloc.s				V_5
	IL_027d:                                                                        //ldc.i4				0x9
	IL_0282:            V_12=9;                                                     //stloc				V_12
	IL_0286:            /*goto IL_001f;*/goto IL_028b;                              //br				IL_001f
	IL_028b:            goto IL_0333;                                               //br				IL_0333
	IL_0290:                                                                        //ldloc.0
	IL_0291:            Temp_27=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0296:                                                                        //ldloc.s				V_5
	IL_0298:            Temp_28=Temp_27[V_5];                                       //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IAssemblyCollection::get_Item(System::Int32)
	IL_029d:            V_6=Temp_28;                                                //stloc.s				V_6
	IL_029f:                                                                        //ldc.i4				0x16
	IL_02a4:            V_12=22;                                                    //stloc				V_12
	IL_02a8:            /*goto IL_001f;*/goto IL_02ad;                              //br				IL_001f
	IL_02ad:                                                                        //ldloc.s				V_5
	IL_02af:                                                                        //ldarg.0
	IL_02b0:            Temp_19=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_02b5:            Temp_20=Temp_19->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_02ba:            if(V_5>=Temp_20)goto IL_00ea;                               //bge				IL_00ea
	IL_02bf:                                                                        //ldc.i4				0x0
	IL_02c4:            V_12=0;                                                     //stloc				V_12
	IL_02c8:            /*goto IL_001f;*/goto IL_02cd;                              //br				IL_001f
	IL_02cd:            goto IL_0479;                                               //br				IL_0479
	IL_02d2:                                                                        //ldloc.2
	IL_02d3:            Temp_24=V_2->Nodes;                                         //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_02d8:            Temp_24->Clear();                                           //callvirt				void System::Windows::Forms::TreeNodeCollection::Clear()
	IL_02dd:                                                                        //ldloc.2
	IL_02de:            V_2->Remove();                                              //callvirt				void System::Windows::Forms::TreeNode::Remove()
	IL_02e3:                                                                        //ldloc.2
	IL_02e4:                                                                        //ldnull
	IL_02e5:            V_2->M_x1(safe_cast<Reflector::CodeModel::IAssembly^>(nullptr));//callvirt				void Root::T_x26::M_x1(Reflector::CodeModel::IAssembly^)
	IL_02ea:                                                                        //ldc.i4				0xd
	IL_02ef:            V_12=13;                                                    //stloc				V_12
	IL_02f3:            /*goto IL_001f;*/goto IL_02f8;                              //br				IL_001f
	IL_02f8:                                                                        //ldarg.0
	IL_02f9:            Temp_12=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_02fe:            Temp_13=Temp_12->Count;                                     //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_0303:            if(Temp_13!=0)goto IL_0366;                                 //brtrue.s				IL_0366
	IL_0305:                                                                        //ldc.i4				0xa
	IL_030a:            V_12=10;                                                    //stloc				V_12
	IL_030e:            /*goto IL_001f;*/goto IL_0313;                              //br				IL_001f
	IL_0313:            goto IL_03b0;                                               //br				IL_03b0
	IL_0318:                                                                        //ldarg.0
	IL_0319:                                                                        //ldloc.s				V_9
	IL_031b:            this->SelectedNode=safe_cast<System::Windows::Forms::TreeNode^>(V_9);//call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_0320:                                                                        //ldc.i4				0x2
	IL_0325:            V_12=2;                                                     //stloc				V_12
	IL_0329:            /*goto IL_001f;*/goto IL_032e;                              //br				IL_001f
	IL_032e:            goto IL_0277;                                               //br				IL_0277
	IL_0333:                                                                        //ldc.i4				0x19
	IL_0338:            V_12=25;                                                    //stloc				V_12
	IL_033c:            /*goto IL_001f;*/goto IL_0341;                              //br				IL_001f
	IL_0341:                                                                        //ldloc.s				V_5
	IL_0343:                                                                        //ldloc.0
	IL_0344:            Temp_25=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_0349:            Temp_26=safe_cast<System::Collections::ICollection^>(Temp_25)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_034e:            if(V_5<Temp_26)goto IL_0290;                                //blt				IL_0290
	IL_0353:                                                                        //ldc.i4				0x1
	IL_0358:            V_12=1;                                                     //stloc				V_12
	IL_035c:            /*goto IL_001f;*/goto IL_0361;                              //br				IL_001f
	IL_0361:            goto IL_04b5;                                               //br				IL_04b5
	IL_0366:                                                                        //ldloc.1
	IL_0367:                                                                        //ldc.i4.1
	IL_0368:                                                                        //sub
	IL_0369:            V_1=(V_1 - 1);                                              //stloc.1
	IL_036a:                                                                        //ldc.i4				0x1c
	IL_036f:            V_12=28;                                                    //stloc				V_12
	IL_0373:            /*goto IL_001f;*/goto IL_0378;                              //br				IL_001f
	IL_0378:            goto IL_03c7;                                               //br.s				IL_03c7
	IL_037a:                                                                        //ldarg.0
	IL_037b:            Temp_29=this->Nodes;                                        //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_0380:                                                                        //ldloc.1
	IL_0381:            Temp_30=Temp_29[V_1];                                       //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_0386:                                                                        //castclass				Root::T_x26
	IL_038b:            V_2=safe_cast<Root::T_x26^>(Temp_30);                       //stloc.2
	IL_038c:                                                                        //ldc.i4				0x4
	IL_0391:            V_12=4;                                                     //stloc				V_12
	IL_0395:            /*goto IL_001f;*/goto IL_039a;                              //br				IL_001f
	IL_039a:                                                                        //ldloc.2
	IL_039b:            if(V_2==nullptr)goto IL_0366;                               //brfalse.s				IL_0366
	IL_039d:                                                                        //ldc.i4				0x13
	IL_03a2:            V_12=19;                                                    //stloc				V_12
	IL_03a6:            /*goto IL_001f;*/goto IL_03ab;                              //br				IL_001f
	IL_03ab:            goto IL_0457;                                               //br				IL_0457
	IL_03b0:                                                                        //ldarg.0
	IL_03b1:                                                                        //ldnull
	IL_03b2:            this->M_x1(safe_cast<Root::T_x10^>(nullptr));               //call				void Root::T_x25::M_x1(Root::T_x10^)
	IL_03b7:                                                                        //ldc.i4				0x17
	IL_03bc:            V_12=23;                                                    //stloc				V_12
	IL_03c0:            /*goto IL_001f;*/goto IL_03c5;                              //br				IL_001f
	IL_03c5:            goto IL_0366;                                               //br.s				IL_0366
	IL_03c7:                                                                        //ldc.i4				0x1a
	IL_03cc:            V_12=26;                                                    //stloc				V_12
	IL_03d0:            /*goto IL_001f;*/goto IL_03d5;                              //br				IL_001f
	IL_03d5:                                                                        //ldloc.1
	IL_03d6:                                                                        //ldc.i4.0
	IL_03d7:            if(V_1>=0)goto IL_037a;                                     //bge				IL_037a
	IL_03dc:                                                                        //ldc.i4				0xf
	IL_03e1:            V_12=15;                                                    //stloc				V_12
	IL_03e5:            /*goto IL_001f;*/goto IL_03ea;                              //br				IL_001f
	IL_03ea:            goto IL_0441;                                               //br.s				IL_0441
	IL_03ec:                                                                        //ldarg.0
	IL_03ed:                                                                        //ldloc.s				V_7
	IL_03ef:            this->SelectedNode=safe_cast<System::Windows::Forms::TreeNode^>(V_7);//call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_03f4:                                                                        //ldc.i4				0x7
	IL_03f9:            V_12=7;                                                     //stloc				V_12
	IL_03fd:            /*goto IL_001f;*/goto IL_0402;                              //br				IL_001f
	IL_0402:            goto IL_0277;                                               //br				IL_0277
	IL_0407:                                                                        //ldc.i4.5
	IL_0408:                                                                        //dup
	IL_0409:                                                                        //dup
	IL_040a:                                                                        //ldc.i4.3
	IL_040b:                                                                        //sub
	IL_040c:                                                                        //blt				IL_0408
	IL_0411:                                                                        //pop
	IL_0412:                                                                        //ldc.i4				0xe
	IL_0417:            V_12=14;                                                    //stloc				V_12
	IL_041b:            /*goto IL_001f;*/goto IL_0420;                              //br				IL_001f
	IL_0420:                                                                        //ldloc.s				V_6
	IL_0422:                                                                        //ldloc.s				V_7
	IL_0424:            Temp_14=V_7->M_x4();                                        //callvirt				Reflector::CodeModel::IAssembly^ Root::T_x26::M_x4()
	IL_0429:            if(V_6==Temp_14)goto IL_0277;                               //beq				IL_0277
	IL_042e:                                                                        //ldc.i4				0x3
	IL_0433:            V_12=3;                                                     //stloc				V_12
	IL_0437:            /*goto IL_001f;*/goto IL_043c;                              //br				IL_001f
	IL_043c:            goto IL_022f;                                               //br				IL_022f
	IL_0441:                                                                        //ldc.i4.0
	IL_0442:            V_5=0;                                                      //stloc.s				V_5
	IL_0444:                                                                        //ldc.i4				0xb
	IL_0449:            V_12=11;                                                    //stloc				V_12
	IL_044d:            /*goto IL_001f;*/goto IL_0452;                              //br				IL_001f
	IL_0452:            goto IL_0333;                                               //br				IL_0333
	IL_0457:                                                                        //ldc.i4.1
	IL_0458:            V_3=true;                                                   //stloc.3
	IL_0459:                                                                        //ldloc.0
	IL_045a:            Temp_16=V_0->Assemblies;                                    //callvirt				Reflector::CodeModel::IAssemblyCollection^ Reflector::CodeModel::IAssemblyManager::get_Assemblies()
	IL_045f:            Temp_17=safe_cast<System::Collections::IEnumerable^>(Temp_16)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0464:            V_10=Temp_17;                                               //stloc.s				V_10
	IL_0466:                                                                        //ldc.i4				0xc
	IL_046b:            V_12=12;                                                    //stloc				V_12
	IL_046f:            /*goto IL_001f;*/goto IL_0474;                              //br				IL_001f
	IL_0474:            /*goto IL_0134;*/goto IL_012F01;                            //br				IL_0134
	IL_0479:                                                                        //ldarg.0
	IL_047a:            Temp_5=this->Nodes;                                         //call				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeView::get_Nodes()
	IL_047f:                                                                        //ldloc.s				V_5
	IL_0481:            Temp_6=Temp_5[V_5];                                         //callvirt				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeNodeCollection::get_Item(System::Int32)
	IL_0486:                                                                        //isinst				Root::T_x26
	IL_048b:            V_7=dynamic_cast<Root::T_x26^>(Temp_6);                     //stloc.s				V_7
	IL_048d:                                                                        //ldc.i4				0x14
	IL_0492:            V_12=20;                                                    //stloc				V_12
	IL_0496:            /*goto IL_001f;*/goto IL_049b;                              //br				IL_001f
	IL_049b:                                                                        //ldloc.s				V_7
	IL_049d:            if(V_7==nullptr)goto IL_0277;                               //brfalse				IL_0277
	IL_04a2:                                                                        //ldc.i4				0x10
	IL_04a7:            V_12=16;                                                    //stloc				V_12
	IL_04ab:            /*goto IL_001f;*/goto IL_04b0;                              //br				IL_001f
	IL_04b0:            goto IL_0407;                                               //br				IL_0407
	IL_04b5:                                                                        //ldc.i4				0x8
	IL_04ba:            V_12=8;                                                     //stloc				V_12
	IL_04be:            /*goto IL_001f;*/goto IL_04c3;                              //br				IL_001f
	IL_04c3:            goto IL_04cc;                                               //leave.s				IL_04cc
	                    ;}
	                    finally{
	IL_04c5:                                                                        //ldarg.0
	IL_04c6:            this->EndUpdate();                                          //call				void System::Windows::Forms::TreeView::EndUpdate()
	IL_04cb:                                                                        //endfinally
	                    ;}
	IL_04cc:            return;                                                     //ret

}
inline System::Object^ Root::T_x25::M_x9()
//Reflector::IAssemblyBrowser^::get_ActiveItem by M_x9
{
	//temp variables , should be optimized by C++/cli compiler.
	Root::T_x10^ Temp_0 = nullptr;
	Root::T_x10^ Temp_1 = nullptr;
	System::Object^ Temp_2 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=this->M_x15();                                       //call				Root::T_x10^ Root::T_x25::M_x15()
	IL_0006:            if(Temp_0==nullptr)goto IL_0016;                            //brfalse.s				IL_0016
	IL_0008:            goto IL_000a;                                               //br.s				IL_000a
	IL_000a:                                                                        //ldarg.0
	IL_000b:            Temp_1=this->M_x15();                                       //call				Root::T_x10^ Root::T_x25::M_x15()
	IL_0010:            Temp_2=Temp_1->M_x6();                                      //callvirt				System::Object^ Root::T_x10::M_x6()
	IL_0015:            return Temp_2;                                              //ret
	IL_0016:                                                                        //ldnull
	IL_0017:            return nullptr;                                             //ret

}
inline void Root::T_x25::OnMouseDown(System::Windows::Forms::MouseEventArgs^ e)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Windows::Forms::TreeNode^ Temp_3 = nullptr;
	System::Windows::Forms::MouseButtons Temp_4 = (System::Windows::Forms::MouseButtons)0;
	System::Windows::Forms::MouseButtons Temp_5 = (System::Windows::Forms::MouseButtons)0;
	System::Windows::Forms::MouseButtons Temp_6 = (System::Windows::Forms::MouseButtons)0;
	System::Windows::Forms::MouseButtons Temp_7 = (System::Windows::Forms::MouseButtons)0;
	System::Windows::Forms::TreeNodeCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	System::Boolean Temp_10 = false;
	System::Windows::Forms::MouseButtons Temp_11 = (System::Windows::Forms::MouseButtons)0;
	System::Boolean Temp_12 = false;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0067;                                               //br.s				IL_0067
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_00e1;case 1:goto IL_016d;case 2:goto IL_0253;case 3:goto IL_027f;case 4:goto IL_0181;case 5:goto IL_0225;case 6:goto IL_0207;case 7:goto IL_01f7;case 8:goto IL_0145;case 9:goto IL_0119;case 10:goto IL_0079;case 11:goto IL_00c3;case 12:goto IL_00fb;case 13:goto IL_01d9;case 14:goto IL_026c;case 15:goto IL_01ad;case 16:goto IL_0194;case 17:goto IL_0238;case 18:goto IL_0299;case 19:goto IL_00b0;case 20:goto IL_012c;case 21:goto IL_0097;case 22:goto IL_01c6;};//switch				(IL_00e1,IL_016d,IL_0253,IL_027f,IL_0181,IL_0225,IL_0207,IL_01f7,IL_0145,IL_0119,IL_0079,IL_00c3,IL_00fb,IL_01d9,IL_026c,IL_01ad,IL_0194,IL_0238,IL_0299,IL_00b0,IL_012c,IL_0097,IL_01c6)
	IL_0067:                                                                        //ldarg.0
	IL_0068:                                                                        //ldarg.1
	IL_0069:            System::Windows::Forms::TreeView::OnMouseDown(e);           //call				void System::Windows::Forms::TreeView::OnMouseDown(System::Windows::Forms::MouseEventArgs^)
	IL_006e:                                                                        //ldc.i4				0xa
	IL_0073:            V_1=10;                                                     //stloc				V_1
	IL_0077:            /*goto IL_0002;*/goto IL_0079;                              //br.s				IL_0002
	IL_0079:                                                                        //ldarg.1
	IL_007a:            Temp_5=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_007f:                                                                        //ldc.i4				0x100000
	IL_0084:            if(safe_cast<System::Int32>(Temp_5)==1048576)goto IL_0147;  //beq				IL_0147
	IL_0089:                                                                        //ldc.i4				0x15
	IL_008e:            V_1=21;                                                     //stloc				V_1
	IL_0092:            /*goto IL_0002;*/goto IL_0097;                              //br				IL_0002
	IL_0097:            goto IL_01f9;                                               //br				IL_01f9
	IL_009c:                                                                        //ldarg.0
	IL_009d:            this->M_x12();                                              //call				void Root::T_x25::M_x12()
	IL_00a2:                                                                        //ldc.i4				0x13
	IL_00a7:            V_1=19;                                                     //stloc				V_1
	IL_00ab:            /*goto IL_0002;*/goto IL_00b0;                              //br				IL_0002
	IL_00b0:            goto IL_022a;                                               //br				IL_022a
	IL_00b5:                                                                        //ldc.i4				0xb
	IL_00ba:            V_1=11;                                                     //stloc				V_1
	IL_00be:            /*goto IL_0002;*/goto IL_00c3;                              //br				IL_0002
	IL_00c3:                                                                        //ldarg.1
	IL_00c4:            Temp_6=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_00c9:                                                                        //ldc.i4				0x800000
	IL_00ce:            if(safe_cast<System::Int32>(Temp_6)!=8388608)goto IL_022a;  //bne.un				IL_022a
	IL_00d3:                                                                        //ldc.i4				0x0
	IL_00d8:            V_1=0;                                                      //stloc				V_1
	IL_00dc:            /*goto IL_0002;*/goto IL_00e1;                              //br				IL_0002
	IL_00e1:            goto IL_0186;                                               //br				IL_0186
	IL_00e6:                                                                        //ldarg.0
	IL_00e7:                                                                        //ldloc.0
	IL_00e8:            this->SelectedNode=safe_cast<System::Windows::Forms::TreeNode^>(V_0);//call				void System::Windows::Forms::TreeView::set_SelectedNode(System::Windows::Forms::TreeNode^)
	IL_00ed:                                                                        //ldc.i4				0xc
	IL_00f2:            V_1=12;                                                     //stloc				V_1
	IL_00f6:            /*goto IL_0002;*/goto IL_00fb;                              //br				IL_0002
	IL_00fb:                                                                        //ldarg.1
	IL_00fc:            Temp_7=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_0101:                                                                        //ldc.i4				0x100000
	IL_0106:            if(safe_cast<System::Int32>(Temp_7)!=1048576)goto IL_00b5;  //bne.un.s				IL_00b5
	IL_0108:            goto IL_010b;                                               //br.s				IL_010b
	IL_010a:                                                                        //break
	IL_010b:                                                                        //ldc.i4				0x9
	IL_0110:            V_1=9;                                                      //stloc				V_1
	IL_0114:            /*goto IL_0002;*/goto IL_0119;                              //br				IL_0002
	IL_0119:            goto IL_0271;                                               //br				IL_0271
	IL_011e:                                                                        //ldc.i4				0x14
	IL_0123:            V_1=20;                                                     //stloc				V_1
	IL_0127:            /*goto IL_0002;*/goto IL_012c;                              //br				IL_0002
	IL_012c:                                                                        //ldarg.0
	IL_012d:            Temp_12=this->M_x10();                                      //call				System::Boolean Root::T_x25::M_x10()
	IL_0132:            if(!Temp_12)goto IL_029e;                                   //brfalse				IL_029e
	IL_0137:                                                                        //ldc.i4				0x8
	IL_013c:            V_1=8;                                                      //stloc				V_1
	IL_0140:            /*goto IL_0002;*/goto IL_0145;                              //br				IL_0002
	IL_0145:            goto IL_01b2;                                               //br.s				IL_01b2
	IL_0147:                                                                        //ldarg.0
	IL_0148:                                                                        //ldarg.1
	IL_0149:            Temp_1=e->X;                                                //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_X()
	IL_014e:                                                                        //ldarg.1
	IL_014f:            Temp_2=e->Y;                                                //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Y()
	IL_0154:            Temp_3=this->GetNodeAt(Temp_1,Temp_2);                      //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::GetNodeAt(System::Int32,System::Int32)
	IL_0159:                                                                        //castclass				Root::T_x10
	IL_015e:            V_0=safe_cast<Root::T_x10^>(Temp_3);                        //stloc.0
	IL_015f:                                                                        //ldc.i4				0x1
	IL_0164:            V_1=1;                                                      //stloc				V_1
	IL_0168:            /*goto IL_0002;*/goto IL_016d;                              //br				IL_0002
	IL_016d:                                                                        //ldloc.0
	IL_016e:            if(V_0==nullptr)goto IL_00b5;                               //brfalse				IL_00b5
	IL_0173:                                                                        //ldc.i4				0x4
	IL_0178:            V_1=4;                                                      //stloc				V_1
	IL_017c:            /*goto IL_0002;*/goto IL_0181;                              //br				IL_0002
	IL_0181:            goto IL_00e6;                                               //br				IL_00e6
	IL_0186:                                                                        //ldc.i4				0x10
	IL_018b:            V_1=16;                                                     //stloc				V_1
	IL_018f:            /*goto IL_0002;*/goto IL_0194;                              //br				IL_0002
	IL_0194:                                                                        //ldarg.0
	IL_0195:            Temp_10=this->M_x7();                                       //call				System::Boolean Root::T_x25::M_x7()
	IL_019a:            if(!Temp_10)goto IL_022a;                                   //brfalse				IL_022a
	IL_019f:                                                                        //ldc.i4				0xf
	IL_01a4:            V_1=15;                                                     //stloc				V_1
	IL_01a8:            /*goto IL_0002;*/goto IL_01ad;                              //br				IL_0002
	IL_01ad:            goto IL_009c;                                               //br				IL_009c
	IL_01b2:                                                                        //ldarg.0
	IL_01b3:            this->M_x11();                                              //call				void Root::T_x25::M_x11()
	IL_01b8:                                                                        //ldc.i4				0x16
	IL_01bd:            V_1=22;                                                     //stloc				V_1
	IL_01c1:            /*goto IL_0002;*/goto IL_01c6;                              //br				IL_0002
	IL_01c6:            goto IL_029e;                                               //br				IL_029e
	IL_01cb:                                                                        //ldc.i4				0xd
	IL_01d0:            V_1=13;                                                     //stloc				V_1
	IL_01d4:            /*goto IL_0002;*/goto IL_01d9;                              //br				IL_0002
	IL_01d9:                                                                        //ldloc.0
	IL_01da:            Temp_8=V_0->Nodes;                                          //callvirt				System::Windows::Forms::TreeNodeCollection^ System::Windows::Forms::TreeNode::get_Nodes()
	IL_01df:            Temp_9=Temp_8->Count;                                       //callvirt				System::Int32 System::Windows::Forms::TreeNodeCollection::get_Count()
	IL_01e4:            if(Temp_9!=0)goto IL_00b5;                                  //brtrue				IL_00b5
	IL_01e9:                                                                        //ldc.i4				0x7
	IL_01ee:            V_1=7;                                                      //stloc				V_1
	IL_01f2:            /*goto IL_0002;*/goto IL_01f7;                              //br				IL_0002
	IL_01f7:            goto IL_0258;                                               //br.s				IL_0258
	IL_01f9:                                                                        //ldc.i4				0x6
	IL_01fe:            V_1=6;                                                      //stloc				V_1
	IL_0202:            /*goto IL_0002;*/goto IL_0207;                              //br				IL_0002
	IL_0207:                                                                        //ldarg.1
	IL_0208:            Temp_4=e->Button;                                           //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_020d:                                                                        //ldc.i4				0x200000
	IL_0212:            if(safe_cast<System::Int32>(Temp_4)!=2097152)goto IL_00b5;  //bne.un				IL_00b5
	IL_0217:                                                                        //ldc.i4				0x5
	IL_021c:            V_1=5;                                                      //stloc				V_1
	IL_0220:            /*goto IL_0002;*/goto IL_0225;                              //br				IL_0002
	IL_0225:            goto IL_0147;                                               //br				IL_0147
	IL_022a:                                                                        //ldc.i4				0x11
	IL_022f:            V_1=17;                                                     //stloc				V_1
	IL_0233:            /*goto IL_0002;*/goto IL_0238;                              //br				IL_0002
	IL_0238:                                                                        //ldarg.1
	IL_0239:            Temp_11=e->Button;                                          //callvirt				System::Windows::Forms::MouseButtons System::Windows::Forms::MouseEventArgs::get_Button()
	IL_023e:                                                                        //ldc.i4				0x1000000
	IL_0243:            if(safe_cast<System::Int32>(Temp_11)!=16777216)goto IL_029e;//bne.un.s				IL_029e
	IL_0245:                                                                        //ldc.i4				0x2
	IL_024a:            V_1=2;                                                      //stloc				V_1
	IL_024e:            /*goto IL_0002;*/goto IL_0253;                              //br				IL_0002
	IL_0253:            goto IL_011e;                                               //br				IL_011e
	IL_0258:                                                                        //ldloc.0
	IL_0259:            V_0->M_x2();                                                //callvirt				void Root::T_x10::M_x2()
	IL_025e:                                                                        //ldc.i4				0xe
	IL_0263:            V_1=14;                                                     //stloc				V_1
	IL_0267:            /*goto IL_0002;*/goto IL_026c;                              //br				IL_0002
	IL_026c:            goto IL_00b5;                                               //br				IL_00b5
	IL_0271:                                                                        //ldc.i4				0x3
	IL_0276:            V_1=3;                                                      //stloc				V_1
	IL_027a:            /*goto IL_0002;*/goto IL_027f;                              //br				IL_0002
	IL_027f:                                                                        //ldarg.1
	IL_0280:            Temp_0=e->Clicks;                                           //callvirt				System::Int32 System::Windows::Forms::MouseEventArgs::get_Clicks()
	IL_0285:                                                                        //ldc.i4.2
	IL_0286:            if(Temp_0!=2)goto IL_00b5;                                  //bne.un				IL_00b5
	IL_028b:                                                                        //ldc.i4				0x12
	IL_0290:            V_1=18;                                                     //stloc				V_1
	IL_0294:            /*goto IL_0002;*/goto IL_0299;                              //br				IL_0002
	IL_0299:            goto IL_01cb;                                               //br				IL_01cb
	IL_029e:            return;                                                     //ret

}
inline System::Boolean Root::T_x25::ProcessDialogKey(System::Windows::Forms::Keys key)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Windows::Forms::TreeNode^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Windows::Forms::TreeNode^ Temp_2 = nullptr;
	System::IServiceProvider^ Temp_3 = nullptr;
	System::Type^ Temp_4 = nullptr;
	System::Object^ Temp_5 = nullptr;
	System::IServiceProvider^ Temp_6 = nullptr;
	System::Type^ Temp_7 = nullptr;
	System::Object^ Temp_8 = nullptr;
	Reflector::IWindowCollection^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	Reflector::IWindow^ Temp_11 = nullptr;
	System::Windows::Forms::Control^ Temp_12 = nullptr;
	Reflector::ILanguageCollection^ Temp_13 = nullptr;
	Reflector::CodeModel::ILanguage^ Temp_14 = nullptr;
	System::Windows::Forms::TreeNode^ Temp_15 = nullptr;
	//local variables.
	Root::T_x10^ V_0 = nullptr;
	Root::T_x10^ V_1 = nullptr;
	Root::T_x26^ V_2 = nullptr;
	Reflector::ILanguageManager^ V_3 = nullptr;
	Reflector::IWindowManager^ V_4 = nullptr;
	Reflector::IWindow^ V_5 = nullptr;
	Root::T_x83^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x9
	IL_0005:            V_8=9;                                                      //stloc				V_8
	IL_0009:                                                                        //ldc.i4				0xb
	IL_000e:            V_7=11;                                                     //stloc				V_7
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0062;                                               //br.s				IL_0062
	IL_0016:                                                                        //ldc.i4.5
	IL_0017:                                                                        //dup
	IL_0018:                                                                        //dup
	IL_0019:                                                                        //ldc.i4.6
	IL_001a:                                                                        //add
	IL_001b:                                                                        //bgt				IL_0017
	IL_0020:                                                                        //pop
	IL_0021:                                                                        //ldloc				V_7
	IL_0025:            switch(V_7){case 0:goto IL_00fe;case 1:goto IL_01ec;case 2:goto IL_009d;case 3:goto IL_01c8;case 4:goto IL_01dc;case 5:goto IL_00ea;case 6:goto IL_00b5;case 7:goto IL_0202;case 8:goto IL_00ce;case 9:goto IL_012b;case 10:goto IL_008a;case 11:goto IL_0014;case 12:goto IL_0075;case 13:goto IL_011a;};//switch				(IL_00fe,IL_01ec,IL_009d,IL_01c8,IL_01dc,IL_00ea,IL_00b5,IL_0202,IL_00ce,IL_012b,IL_008a,IL_0014,IL_0075,IL_011a)
	IL_0062:                                                                        //ldarg.1
	IL_0063:                                                                        //ldc.i4.s				13
	IL_0065:            if(safe_cast<System::Int32>(key)!=13)goto IL_01de;          //bne.un				IL_01de
	IL_006a:                                                                        //ldc.i4				0xc
	IL_006f:            V_7=12;                                                     //stloc				V_7
	IL_0073:            /*goto IL_0016;*/goto IL_0075;                              //br.s				IL_0016
	IL_0075:            goto IL_00d0;                                               //br.s				IL_00d0
	IL_0077:                                                                        //ldloc.2
	IL_0078:            V_2->M_x9();                                                //callvirt				void Root::T_x26::M_x9()
	IL_007d:                                                                        //ldc.i4.1
	IL_007e:            return true;                                                //ret
	IL_007f:                                                                        //ldc.i4				0xa
	IL_0084:            V_7=10;                                                     //stloc				V_7
	IL_0088:            /*goto IL_0016;*/goto IL_008a;                              //br.s				IL_0016
	IL_008a:                                                                        //ldarg.1
	IL_008b:                                                                        //ldc.i4.s				46
	IL_008d:            if(safe_cast<System::Int32>(key)!=46)goto IL_00a7;          //bne.un.s				IL_00a7
	IL_008f:                                                                        //ldc.i4				0x2
	IL_0094:            V_7=2;                                                      //stloc				V_7
	IL_0098:            /*goto IL_0016;*/goto IL_009d;                              //br				IL_0016
	IL_009d:            goto IL_0100;                                               //br.s				IL_0100
	IL_009f:                                                                        //ldloc.0
	IL_00a0:            V_0->Toggle();                                              //callvirt				void System::Windows::Forms::TreeNode::Toggle()
	IL_00a5:                                                                        //ldc.i4.1
	IL_00a6:            return true;                                                //ret
	IL_00a7:                                                                        //ldc.i4				0x6
	IL_00ac:            V_7=6;                                                      //stloc				V_7
	IL_00b0:            /*goto IL_0016;*/goto IL_00b5;                              //br				IL_0016
	IL_00b5:                                                                        //ldarg.1
	IL_00b6:                                                                        //ldc.i4				0x20044
	IL_00bb:            if(safe_cast<System::Int32>(key)!=131140)goto IL_020c;      //bne.un				IL_020c
	IL_00c0:                                                                        //ldc.i4				0x8
	IL_00c5:            V_7=8;                                                      //stloc				V_7
	IL_00c9:            /*goto IL_0016;*/goto IL_00ce;                              //br				IL_0016
	IL_00ce:            goto IL_0130;                                               //br.s				IL_0130
	IL_00d0:                                                                        //ldarg.0
	IL_00d1:            Temp_15=this->SelectedNode;                                 //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_00d6:                                                                        //isinst				Root::T_x10
	IL_00db:            V_0=dynamic_cast<Root::T_x10^>(Temp_15);                    //stloc.0
	IL_00dc:                                                                        //ldc.i4				0x5
	IL_00e1:            V_7=5;                                                      //stloc				V_7
	IL_00e5:            /*goto IL_0016;*/goto IL_00ea;                              //br				IL_0016
	IL_00ea:                                                                        //ldloc.0
	IL_00eb:            if(V_0==nullptr)goto IL_01de;                               //brfalse				IL_01de
	IL_00f0:                                                                        //ldc.i4				0x0
	IL_00f5:            V_7=0;                                                      //stloc				V_7
	IL_00f9:            /*goto IL_0016;*/goto IL_00fe;                              //br				IL_0016
	IL_00fe:            goto IL_009f;                                               //br.s				IL_009f
	IL_0100:                                                                        //ldarg.0
	IL_0101:            Temp_0=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_0106:                                                                        //isinst				Root::T_x26
	IL_010b:            V_2=dynamic_cast<Root::T_x26^>(Temp_0);                     //stloc.2
	IL_010c:                                                                        //ldc.i4				0xd
	IL_0111:            V_7=13;                                                     //stloc				V_7
	IL_0115:            /*goto IL_0016;*/goto IL_011a;                              //br				IL_0016
	IL_011a:                                                                        //ldloc.2
	IL_011b:            if(V_2==nullptr)goto IL_00a7;                               //brfalse.s				IL_00a7
	IL_011d:                                                                        //ldc.i4				0x9
	IL_0122:            V_7=9;                                                      //stloc				V_7
	IL_0126:            /*goto IL_0016;*/goto IL_012b;                              //br				IL_0016
	IL_012b:            goto IL_0077;                                               //br				IL_0077
	IL_0130:                                                                        //ldarg.0
	IL_0131:            Temp_3=this->F_x12;                                         //ldfld				System::IServiceProvider^ Root::T_x25 F_x12
	IL_0136:                                                                        //ldtoken				Reflector::ILanguageManager
	IL_013b:            Temp_4=Reflector::ILanguageManager::typeid;                 //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_0140:            Temp_5=Temp_3->GetService(Temp_4);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0145:                                                                        //castclass				Reflector::ILanguageManager
	IL_014a:            V_3=safe_cast<Reflector::ILanguageManager^>(Temp_5);        //stloc.3
	IL_014b:                                                                        //ldarg.0
	IL_014c:            Temp_6=this->M_x4();                                        //call				System::IServiceProvider^ Root::T_x25::M_x4()
	IL_0151:                                                                        //ldtoken				Reflector::IWindowManager
	IL_0156:            Temp_7=Reflector::IWindowManager::typeid;                   //call				System::Type^ System::Type::GetTypeFromHandle(System::RuntimeTypeHandle)
	IL_015b:            Temp_8=Temp_6->GetService(Temp_7);                          //callvirt				System::Object^ System::IServiceProvider::GetService(System::Type^)
	IL_0160:                                                                        //castclass				Reflector::IWindowManager
	IL_0165:            V_4=safe_cast<Reflector::IWindowManager^>(Temp_8);          //stloc.s				V_4
	IL_0167:                                                                        //ldloc.s				V_4
	IL_0169:            Temp_9=V_4->Windows;                                        //callvirt				Reflector::IWindowCollection^ Reflector::IWindowManager::get_Windows()
	IL_016e:                                                                        //ldstr				L"\x6326\x4028\x582A\x4C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x5E3A\x4F3C\x683E\x2840\x2D42\x2144\x2846\x3E48"
	IL_0173:                                                                        //ldloc				V_8
	IL_0177:            Temp_10=a(L"\x6326\x4028\x582A\x4C2C\x5C2E\x4230\x5632\x5834\x5536\x5538\x5E3A\x4F3C\x683E\x2840\x2D42\x2144\x2846\x3E48",V_8);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_017c:            Temp_11=Temp_9[Temp_10];                                    //callvirt				Reflector::IWindow^ Reflector::IWindowCollection::get_Item(System::String^)
	IL_0181:            V_5=Temp_11;                                                //stloc.s				V_5
	IL_0183:                                                                        //ldloc.s				V_5
	IL_0185:            Temp_12=V_5->Content;                                       //callvirt				System::Windows::Forms::Control^ Reflector::IWindow::get_Content()
	IL_018a:                                                                        //castclass				Root::T_x83
	IL_018f:            V_6=safe_cast<Root::T_x83^>(Temp_12);                       //stloc.s				V_6
	IL_0191:                                                                        //ldloc.s				V_6
	IL_0193:                                                                        //ldloc.3
	IL_0194:            Temp_13=V_3->Languages;                                     //callvirt				Reflector::ILanguageCollection^ Reflector::ILanguageManager::get_Languages()
	IL_0199:                                                                        //ldc.i4.0
	IL_019a:            Temp_14=Temp_13[safe_cast<System::Int32>(0)];               //callvirt				Reflector::CodeModel::ILanguage^ Reflector::ILanguageCollection::get_Item(System::Int32)
	IL_019f:            V_6->M_x1(Temp_14);                                         //callvirt				void Root::T_x83::M_x1(Reflector::CodeModel::ILanguage^)
	IL_01a4:                                                                        //ldloc.s				V_5
	IL_01a6:                                                                        //ldc.i4.1
	IL_01a7:            V_5->Visible=true;                                          //callvirt				void Reflector::IWindow::set_Visible(System::Boolean)
	IL_01ac:                                                                        //ldc.i4.1
	IL_01ad:            return true;                                                //ret
	IL_01ae:                                                                        //ldarg.0
	IL_01af:            Temp_2=this->SelectedNode;                                  //call				System::Windows::Forms::TreeNode^ System::Windows::Forms::TreeView::get_SelectedNode()
	IL_01b4:                                                                        //isinst				Root::T_x10
	IL_01b9:            V_1=dynamic_cast<Root::T_x10^>(Temp_2);                     //stloc.1
	IL_01ba:                                                                        //ldc.i4				0x3
	IL_01bf:            V_7=3;                                                      //stloc				V_7
	IL_01c3:            /*goto IL_0016;*/goto IL_01c8;                              //br				IL_0016
	IL_01c8:                                                                        //ldloc.1
	IL_01c9:            if(V_1==nullptr)goto IL_007f;                               //brfalse				IL_007f
	IL_01ce:                                                                        //ldc.i4				0x4
	IL_01d3:            V_7=4;                                                      //stloc				V_7
	IL_01d7:            /*goto IL_0016;*/goto IL_01dc;                              //br				IL_0016
	IL_01dc:            goto IL_0204;                                               //br.s				IL_0204
	IL_01de:                                                                        //ldc.i4				0x1
	IL_01e3:            V_7=1;                                                      //stloc				V_7
	IL_01e7:            /*goto IL_0016;*/goto IL_01ec;                              //br				IL_0016
	IL_01ec:                                                                        //ldarg.1
	IL_01ed:                                                                        //ldc.i4.s				32
	IL_01ef:            if(safe_cast<System::Int32>(key)!=32)goto IL_007f;          //bne.un				IL_007f
	IL_01f4:                                                                        //ldc.i4				0x7
	IL_01f9:            V_7=7;                                                      //stloc				V_7
	IL_01fd:            /*goto IL_0016;*/goto IL_0202;                              //br				IL_0016
	IL_0202:            goto IL_01ae;                                               //br.s				IL_01ae
	IL_0204:                                                                        //ldloc.1
	IL_0205:            V_1->M_x2();                                                //callvirt				void Root::T_x10::M_x2()
	IL_020a:                                                                        //ldc.i4.1
	IL_020b:            return true;                                                //ret
	IL_020c:                                                                        //ldarg.0
	IL_020d:                                                                        //ldarg.1
	IL_020e:            Temp_1=System::Windows::Forms::TreeView::ProcessDialogKey(key);//call				System::Boolean System::Windows::Forms::TreeView::ProcessDialogKey(System::Windows::Forms::Keys)
	IL_0213:            return Temp_1;                                              //ret

}
inline Root::T_x25::T_x1::T_x1()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
