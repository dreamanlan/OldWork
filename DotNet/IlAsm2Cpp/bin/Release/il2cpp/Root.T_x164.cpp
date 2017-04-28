#include "global_xref.h"

inline System::Int32 Root::T_x164::M_x1(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Globalization::CultureInfo^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	array<System::Object^>^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::NotSupportedException^ Temp_7 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Object^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_3=13;                                                     //stloc				V_3
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_050f;case 1:goto IL_044d;case 2:goto IL_064b;case 3:goto IL_058a;case 4:goto IL_0039;case 5:goto IL_06e1;};//switch				(IL_050f,IL_044d,IL_064b,IL_058a,IL_0039,IL_06e1)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            V_0=A_0;                                                    //stloc.0
	IL_002e:                                                                        //ldc.i4				0x4
	IL_0033:            V_2=4;                                                      //stloc				V_2
	IL_0037:            /*goto IL_000b;*/goto IL_0039;                              //br.s				IL_000b
	IL_0039:                                                                        //ldloc.0
	IL_003a:            switch(V_0){case 0:goto IL_046d;case 1:goto IL_0514;case 2:goto IL_05e9;case 3:goto IL_04a0;case 4:goto IL_062e;case 5:goto IL_0491;case 6:goto IL_04ee;case 7:goto IL_06ea;case 8:goto IL_0612;case 9:goto IL_054a;case 10:goto IL_05b3;case 11:goto IL_0708;case 12:goto IL_0564;case 13:goto IL_0639;case 14:goto IL_05ee;case 15:goto IL_0557;case 16:goto IL_04aa;case 17:goto IL_0715;case 18:goto IL_0566;case 19:goto IL_05ba;case 20:goto IL_05d3;case 21:goto IL_04ea;case 22:goto IL_05bf;case 23:goto IL_0635;case 24:goto IL_05ab;case 25:goto IL_05fb;case 26:goto IL_0569;case 27:goto IL_04f0;case 28:goto IL_04ec;case 29:goto IL_045b;case 30:goto IL_05b5;case 31:goto IL_04c8;case 32:goto IL_04a6;case 33:goto IL_0521;case 34:goto IL_049d;case 35:goto IL_0472;case 36:goto IL_063b;case 37:goto IL_0605;case 38:goto IL_04ad;case 39:goto IL_05e5;case 40:goto IL_05cc;case 41:goto IL_04be;case 42:goto IL_06f3;case 43:goto IL_05b7;case 44:goto IL_046f;case 45:goto IL_0607;case 46:goto IL_070e;case 47:goto IL_0700;case 48:goto IL_0456;case 49:goto IL_0632;case 50:goto IL_0483;case 51:goto IL_04b2;case 52:goto IL_0474;case 53:goto IL_05a8;case 54:goto IL_04e7;case 55:goto IL_0463;case 56:goto IL_04a4;case 57:goto IL_048c;case 58:goto IL_0577;case 59:goto IL_048a;case 60:goto IL_05e1;case 61:goto IL_060c;case 62:goto IL_0594;case 63:goto IL_054c;case 64:goto IL_0718;case 65:goto IL_0535;case 66:goto IL_0488;case 67:goto IL_05c6;case 68:goto IL_062c;case 69:goto IL_0529;case 70:goto IL_0628;case 71:goto IL_0481;case 72:goto IL_05bd;case 73:goto IL_059d;case 74:goto IL_0630;case 75:goto IL_0495;case 76:goto IL_06ee;case 77:goto IL_04c4;case 78:goto IL_04fa;case 79:goto IL_051d;case 80:goto IL_04f2;case 81:goto IL_055c;case 82:goto IL_0499;case 83:goto IL_0537;case 84:goto IL_0601;case 85:goto IL_0592;case 86:goto IL_04d2;case 87:goto IL_070c;case 88:goto IL_06f7;case 89:goto IL_055e;case 90:goto IL_047d;case 91:goto IL_047b;case 92:goto IL_06e8;case 93:goto IL_059f;case 94:goto IL_051b;case 95:goto IL_04d0;case 96:goto IL_04d4;case 97:goto IL_04dc;case 98:goto IL_06f5;case 99:goto IL_0614;case 100:goto IL_0555;case 101:goto IL_061a;case 102:goto IL_046b;case 103:goto IL_0519;case 104:goto IL_0618;case 105:goto IL_04da;case 106:goto IL_05db;case 107:goto IL_0493;case 108:goto IL_051f;case 109:goto IL_05ca;case 110:goto IL_0562;case 111:goto IL_06fb;case 112:goto IL_0579;case 113:goto IL_05ad;case 114:goto IL_05f4;case 115:goto IL_05df;case 116:goto IL_048e;case 117:goto IL_04fc;case 118:goto IL_070a;case 119:goto IL_063b;case 120:goto IL_063b;case 121:goto IL_0571;case 122:goto IL_0531;case 123:goto IL_0553;case 124:goto IL_0713;case 125:goto IL_04d6;case 126:goto IL_05a6;case 127:goto IL_04c6;case 128:goto IL_060e;case 129:goto IL_0516;case 130:goto IL_04e2;case 131:goto IL_05d9;case 132:goto IL_04ce;case 133:goto IL_0454;case 134:goto IL_0637;case 135:goto IL_05d7;case 136:goto IL_04de;case 137:goto IL_05ff;case 138:goto IL_0461;case 139:goto IL_05c8;case 140:goto IL_04c1;case 141:goto IL_04af;case 142:goto IL_0542;case 143:goto IL_0703;case 144:goto IL_053c;case 145:goto IL_0525;case 146:goto IL_0527;case 147:goto IL_0624;case 148:goto IL_04f8;case 149:goto IL_047f;case 150:goto IL_0706;case 151:goto IL_0603;case 152:goto IL_0622;case 153:goto IL_056b;case 154:goto IL_0544;case 155:goto IL_04f6;case 156:goto IL_054e;case 157:goto IL_04f4;case 158:goto IL_0540;case 159:goto IL_045d;case 160:goto IL_056f;case 161:goto IL_0596;case 162:goto IL_0452;case 163:goto IL_052e;case 164:goto IL_0539;case 165:goto IL_06f0;case 166:goto IL_063b;case 167:goto IL_063b;case 168:goto IL_063b;case 169:goto IL_063b;case 170:goto IL_063b;case 171:goto IL_063b;case 172:goto IL_063b;case 173:goto IL_063b;case 174:goto IL_063b;case 175:goto IL_063b;case 176:goto IL_063b;case 177:goto IL_063b;case 178:goto IL_063b;case 179:goto IL_0546;case 180:goto IL_055a;case 181:goto IL_060a;case 182:goto IL_04ff;case 183:goto IL_06e6;case 184:goto IL_0533;case 185:goto IL_0497;case 186:goto IL_04b8;case 187:goto IL_063b;case 188:goto IL_063b;case 189:goto IL_063b;case 190:goto IL_063b;case 191:goto IL_063b;case 192:goto IL_063b;case 193:goto IL_063b;case 194:goto IL_04cb;case 195:goto IL_05dd;case 196:goto IL_063b;case 197:goto IL_063b;case 198:goto IL_05f1;case 199:goto IL_063b;case 200:goto IL_063b;case 201:goto IL_063b;case 202:goto IL_063b;case 203:goto IL_063b;case 204:goto IL_063b;case 205:goto IL_063b;case 206:goto IL_063b;case 207:goto IL_063b;case 208:goto IL_05c1;case 209:goto IL_05a4;case 210:goto IL_0616;case 211:goto IL_04a8;case 212:goto IL_04e0;case 213:goto IL_0626;case 214:goto IL_062a;case 215:goto IL_0479;case 216:goto IL_05e7;case 217:goto IL_0523;case 218:goto IL_052c;case 219:goto IL_0459;case 220:goto IL_05e3;case 221:goto IL_0486;case 222:goto IL_04b5;case 223:goto IL_061c;case 224:goto IL_04ba;case 225:goto IL_063b;case 226:goto IL_063b;case 227:goto IL_063b;case 228:goto IL_063b;case 229:goto IL_063b;case 230:goto IL_063b;case 231:goto IL_063b;case 232:goto IL_063b;case 233:goto IL_063b;case 234:goto IL_063b;case 235:goto IL_063b;case 236:goto IL_063b;case 237:goto IL_063b;case 238:goto IL_063b;case 239:goto IL_063b;case 240:goto IL_063b;case 241:goto IL_063b;case 242:goto IL_063b;case 243:goto IL_063b;case 244:goto IL_063b;case 245:goto IL_063b;case 246:goto IL_063b;case 247:goto IL_063b;case 248:goto IL_05d5;case 249:goto IL_056d;case 250:goto IL_05c4;case 251:goto IL_05f7;case 252:goto IL_049b;case 253:goto IL_053e;case 254:goto IL_04bc;case 255:goto IL_0466;};//switch				(IL_046d,IL_0514,IL_05e9,IL_04a0,IL_062e,IL_0491,IL_04ee,IL_06ea,IL_0612,IL_054a,IL_05b3,IL_0708,IL_0564,IL_0639,IL_05ee,IL_0557,IL_04aa,IL_0715,IL_0566,IL_05ba,IL_05d3,IL_04ea,IL_05bf,IL_0635,IL_05ab,IL_05fb,IL_0569,IL_04f0,IL_04ec,IL_045b,IL_05b5,IL_04c8,IL_04a6,IL_0521,IL_049d,IL_0472,IL_063b,IL_0605,IL_04ad,IL_05e5,IL_05cc,IL_04be,IL_06f3,IL_05b7,IL_046f,IL_0607,IL_070e,IL_0700,IL_0456,IL_0632,IL_0483,IL_04b2,IL_0474,IL_05a8,IL_04e7,IL_0463,IL_04a4,IL_048c,IL_0577,IL_048a,IL_05e1,IL_060c,IL_0594,IL_054c,IL_0718,IL_0535,IL_0488,IL_05c6,IL_062c,IL_0529,IL_0628,IL_0481,IL_05bd,IL_059d,IL_0630,IL_0495,IL_06ee,IL_04c4,IL_04fa,IL_051d,IL_04f2,IL_055c,IL_0499,IL_0537,IL_0601,IL_0592,IL_04d2,IL_070c,IL_06f7,IL_055e,IL_047d,IL_047b,IL_06e8,IL_059f,IL_051b,IL_04d0,IL_04d4,IL_04dc,IL_06f5,IL_0614,IL_0555,IL_061a,IL_046b,IL_0519,IL_0618,IL_04da,IL_05db,IL_0493,IL_051f,IL_05ca,IL_0562,IL_06fb,IL_0579,IL_05ad,IL_05f4,IL_05df,IL_048e,IL_04fc,IL_070a,IL_063b,IL_063b,IL_0571,IL_0531,IL_0553,IL_0713,IL_04d6,IL_05a6,IL_04c6,IL_060e,IL_0516,IL_04e2,IL_05d9,IL_04ce,IL_0454,IL_0637,IL_05d7,IL_04de,IL_05ff,IL_0461,IL_05c8,IL_04c1,IL_04af,IL_0542,IL_0703,IL_053c,IL_0525,IL_0527,IL_0624,IL_04f8,IL_047f,IL_0706,IL_0603,IL_0622,IL_056b,IL_0544,IL_04f6,IL_054e,IL_04f4,IL_0540,IL_045d,IL_056f,IL_0596,IL_0452,IL_052e,IL_0539,IL_06f0,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_0546,IL_055a,IL_060a,IL_04ff,IL_06e6,IL_0533,IL_0497,IL_04b8,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_04cb,IL_05dd,IL_063b,IL_063b,IL_05f1,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_05c1,IL_05a4,IL_0616,IL_04a8,IL_04e0,IL_0626,IL_062a,IL_0479,IL_05e7,IL_0523,IL_052c,IL_0459,IL_05e3,IL_0486,IL_04b5,IL_061c,IL_04ba,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_063b,IL_05d5,IL_056d,IL_05c4,IL_05f7,IL_049b,IL_053e,IL_04bc,IL_0466)
	IL_043f:                                                                        //ldc.i4				0x1
	IL_0444:            V_2=1;                                                      //stloc				V_2
	IL_0448:            /*goto IL_000b;*/goto IL_044d;                              //br				IL_000b
	IL_044d:            goto IL_0501;                                               //br				IL_0501
	IL_0452:                                                                        //ldc.i4.5
	IL_0453:            return 5;                                                   //ret
	IL_0454:                                                                        //ldc.i4.5
	IL_0455:            return 5;                                                   //ret
	IL_0456:                                                                        //ldc.i4.s				15
	IL_0458:            return 15;                                                  //ret
	IL_0459:                                                                        //ldc.i4.5
	IL_045a:            return 5;                                                   //ret
	IL_045b:                                                                        //ldc.i4.5
	IL_045c:            return 5;                                                   //ret
	IL_045d:                                                                        //ldc.i4.5
	IL_045e:            return 5;                                                   //ret
	IL_045f:                                                                        //ldc.i4.5
	IL_0460:            return 5;                                                   //ret
	IL_0461:                                                                        //ldc.i4.5
	IL_0462:            return 5;                                                   //ret
	IL_0463:                                                                        //ldc.i4.s				15
	IL_0465:            return 15;                                                  //ret
	IL_0466:                                                                        //ldc.i4.5
	IL_0467:            return 5;                                                   //ret
	IL_0468:                                                                        //ldc.i4.s				13
	IL_046a:            return 13;                                                  //ret
	IL_046b:                                                                        //ldc.i4.5
	IL_046c:            return 5;                                                   //ret
	IL_046d:                                                                        //ldc.i4.5
	IL_046e:            return 5;                                                   //ret
	IL_046f:                                                                        //ldc.i4.s				15
	IL_0471:            return 15;                                                  //ret
	IL_0472:                                                                        //ldc.i4.7
	IL_0473:            return 7;                                                   //ret
	IL_0474:                                                                        //ldc.i4.s				15
	IL_0476:            return 15;                                                  //ret
	IL_0477:                                                                        //ldc.i4.5
	IL_0478:            return 5;                                                   //ret
	IL_0479:                                                                        //ldc.i4.5
	IL_047a:            return 5;                                                   //ret
	IL_047b:                                                                        //ldc.i4.5
	IL_047c:            return 5;                                                   //ret
	IL_047d:                                                                        //ldc.i4.5
	IL_047e:            return 5;                                                   //ret
	IL_047f:                                                                        //ldc.i4.5
	IL_0480:            return 5;                                                   //ret
	IL_0481:                                                                        //ldc.i4.5
	IL_0482:            return 5;                                                   //ret
	IL_0483:                                                                        //ldc.i4.s				15
	IL_0485:            return 15;                                                  //ret
	IL_0486:                                                                        //ldc.i4.0
	IL_0487:            return 0;                                                   //ret
	IL_0488:                                                                        //ldc.i4.0
	IL_0489:            return 0;                                                   //ret
	IL_048a:                                                                        //ldc.i4.0
	IL_048b:            return 0;                                                   //ret
	IL_048c:                                                                        //ldc.i4.0
	IL_048d:            return 0;                                                   //ret
	IL_048e:                                                                        //ldc.i4.s				13
	IL_0490:            return 13;                                                  //ret
	IL_0491:                                                                        //ldc.i4.5
	IL_0492:            return 5;                                                   //ret
	IL_0493:                                                                        //ldc.i4.5
	IL_0494:            return 5;                                                   //ret
	IL_0495:                                                                        //ldc.i4.5
	IL_0496:            return 5;                                                   //ret
	IL_0497:                                                                        //ldc.i4.5
	IL_0498:            return 5;                                                   //ret
	IL_0499:                                                                        //ldc.i4.5
	IL_049a:            return 5;                                                   //ret
	IL_049b:                                                                        //ldc.i4.5
	IL_049c:            return 5;                                                   //ret
	IL_049d:                                                                        //ldc.i4.s				17
	IL_049f:            return 17;                                                  //ret
	IL_04a0:                                                                        //ldc.i4.5
	IL_04a1:            return 5;                                                   //ret
	IL_04a2:                                                                        //ldc.i4.4
	IL_04a3:            return 4;                                                   //ret
	IL_04a4:                                                                        //ldc.i4.0
	IL_04a5:            return 0;                                                   //ret
	IL_04a6:                                                                        //ldc.i4.2
	IL_04a7:            return 2;                                                   //ret
	IL_04a8:                                                                        //ldc.i4.5
	IL_04a9:            return 5;                                                   //ret
	IL_04aa:                                                                        //ldc.i4.s				18
	IL_04ac:            return 18;                                                  //ret
	IL_04ad:                                                                        //ldc.i4.5
	IL_04ae:            return 5;                                                   //ret
	IL_04af:                                                                        //ldc.i4.s				13
	IL_04b1:            return 13;                                                  //ret
	IL_04b2:                                                                        //ldc.i4.s				15
	IL_04b4:            return 15;                                                  //ret
	IL_04b5:                                                                        //ldc.i4.s				15
	IL_04b7:            return 15;                                                  //ret
	IL_04b8:                                                                        //ldc.i4.5
	IL_04b9:            return 5;                                                   //ret
	IL_04ba:                                                                        //ldc.i4.5
	IL_04bb:            return 5;                                                   //ret
	IL_04bc:                                                                        //ldc.i4.5
	IL_04bd:            return 5;                                                   //ret
	IL_04be:                                                                        //ldc.i4.s				9
	IL_04c0:            return 9;                                                   //ret
	IL_04c1:                                                                        //ldc.i4.s				13
	IL_04c3:            return 13;                                                  //ret
	IL_04c4:                                                                        //ldc.i4.5
	IL_04c5:            return 5;                                                   //ret
	IL_04c6:                                                                        //ldc.i4.1
	IL_04c7:            return 1;                                                   //ret
	IL_04c8:                                                                        //ldc.i4.s				16
	IL_04ca:            return 16;                                                  //ret
	IL_04cb:                                                                        //ldc.i4.s				13
	IL_04cd:            return 13;                                                  //ret
	IL_04ce:                                                                        //ldc.i4.5
	IL_04cf:            return 5;                                                   //ret
	IL_04d0:                                                                        //ldc.i4.5
	IL_04d1:            return 5;                                                   //ret
	IL_04d2:                                                                        //ldc.i4.5
	IL_04d3:            return 5;                                                   //ret
	IL_04d4:                                                                        //ldc.i4.5
	IL_04d5:            return 5;                                                   //ret
	IL_04d6:                                                                        //ldc.i4.1
	IL_04d7:            return 1;                                                   //ret
	IL_04d8:                                                                        //ldc.i4.5
	IL_04d9:            return 5;                                                   //ret
	IL_04da:                                                                        //ldc.i4.5
	IL_04db:            return 5;                                                   //ret
	IL_04dc:                                                                        //ldc.i4.5
	IL_04dd:            return 5;                                                   //ret
	IL_04de:                                                                        //ldc.i4.5
	IL_04df:            return 5;                                                   //ret
	IL_04e0:                                                                        //ldc.i4.5
	IL_04e1:            return 5;                                                   //ret
	IL_04e2:            goto IL_04e5;                                               //br.s				IL_04e5
	IL_04e4:                                                                        //break
	IL_04e5:                                                                        //ldc.i4.5
	IL_04e6:            return 5;                                                   //ret
	IL_04e7:                                                                        //ldc.i4.s				15
	IL_04e9:            return 15;                                                  //ret
	IL_04ea:                                                                        //ldc.i4.5
	IL_04eb:            return 5;                                                   //ret
	IL_04ec:                                                                        //ldc.i4.5
	IL_04ed:            return 5;                                                   //ret
	IL_04ee:                                                                        //ldc.i4.5
	IL_04ef:            return 5;                                                   //ret
	IL_04f0:                                                                        //ldc.i4.5
	IL_04f1:            return 5;                                                   //ret
	IL_04f2:                                                                        //ldc.i4.5
	IL_04f3:            return 5;                                                   //ret
	IL_04f4:                                                                        //ldc.i4.5
	IL_04f5:            return 5;                                                   //ret
	IL_04f6:                                                                        //ldc.i4.5
	IL_04f7:            return 5;                                                   //ret
	IL_04f8:                                                                        //ldc.i4.5
	IL_04f9:            return 5;                                                   //ret
	IL_04fa:                                                                        //ldc.i4.5
	IL_04fb:            return 5;                                                   //ret
	IL_04fc:                                                                        //ldc.i4.s				13
	IL_04fe:            return 13;                                                  //ret
	IL_04ff:                                                                        //ldc.i4.5
	IL_0500:            return 5;                                                   //ret
	IL_0501:                                                                        //ldc.i4				0x0
	IL_0506:            V_2=0;                                                      //stloc				V_2
	IL_050a:            /*goto IL_000b;*/goto IL_050f;                              //br				IL_000b
	IL_050f:            goto IL_063b;                                               //br				IL_063b
	IL_0514:                                                                        //ldc.i4.5
	IL_0515:            return 5;                                                   //ret
	IL_0516:                                                                        //ldc.i4.s				13
	IL_0518:            return 13;                                                  //ret
	IL_0519:                                                                        //ldc.i4.5
	IL_051a:            return 5;                                                   //ret
	IL_051b:                                                                        //ldc.i4.5
	IL_051c:            return 5;                                                   //ret
	IL_051d:                                                                        //ldc.i4.5
	IL_051e:            return 5;                                                   //ret
	IL_051f:                                                                        //ldc.i4.5
	IL_0520:            return 5;                                                   //ret
	IL_0521:                                                                        //ldc.i4.3
	IL_0522:            return 3;                                                   //ret
	IL_0523:                                                                        //ldc.i4.5
	IL_0524:            return 5;                                                   //ret
	IL_0525:                                                                        //ldc.i4.5
	IL_0526:            return 5;                                                   //ret
	IL_0527:                                                                        //ldc.i4.5
	IL_0528:            return 5;                                                   //ret
	IL_0529:                                                                        //ldc.i4.s				11
	IL_052b:            return 11;                                                  //ret
	IL_052c:                                                                        //ldc.i4.5
	IL_052d:            return 5;                                                   //ret
	IL_052e:                                                                        //ldc.i4.s				13
	IL_0530:            return 13;                                                  //ret
	IL_0531:                                                                        //ldc.i4.5
	IL_0532:            return 5;                                                   //ret
	IL_0533:                                                                        //ldc.i4.5
	IL_0534:            return 5;                                                   //ret
	IL_0535:                                                                        //ldc.i4.0
	IL_0536:            return 0;                                                   //ret
	IL_0537:                                                                        //ldc.i4.5
	IL_0538:            return 5;                                                   //ret
	IL_0539:                                                                        //ldc.i4.s				13
	IL_053b:            return 13;                                                  //ret
	IL_053c:                                                                        //ldc.i4.5
	IL_053d:            return 5;                                                   //ret
	IL_053e:                                                                        //ldc.i4.5
	IL_053f:            return 5;                                                   //ret
	IL_0540:                                                                        //ldc.i4.5
	IL_0541:            return 5;                                                   //ret
	IL_0542:                                                                        //ldc.i4.5
	IL_0543:            return 5;                                                   //ret
	IL_0544:                                                                        //ldc.i4.5
	IL_0545:            return 5;                                                   //ret
	IL_0546:                                                                        //ldc.i4.5
	IL_0547:            return 5;                                                   //ret
	IL_0548:                                                                        //ldc.i4.5
	IL_0549:            return 5;                                                   //ret
	IL_054a:                                                                        //ldc.i4.5
	IL_054b:            return 5;                                                   //ret
	IL_054c:                                                                        //ldc.i4.0
	IL_054d:            return 0;                                                   //ret
	IL_054e:                                                                        //ldc.i4.5
	IL_054f:            return 5;                                                   //ret
	IL_0550:                                                                        //ldc.i4.s				14
	IL_0552:            return 14;                                                  //ret
	IL_0553:                                                                        //ldc.i4.1
	IL_0554:            return 1;                                                   //ret
	IL_0555:                                                                        //ldc.i4.5
	IL_0556:            return 5;                                                   //ret
	IL_0557:                                                                        //ldc.i4.s				18
	IL_0559:            return 18;                                                  //ret
	IL_055a:                                                                        //ldc.i4.5
	IL_055b:            return 5;                                                   //ret
	IL_055c:                                                                        //ldc.i4.5
	IL_055d:            return 5;                                                   //ret
	IL_055e:                                                                        //ldc.i4.5
	IL_055f:            return 5;                                                   //ret
	IL_0560:                                                                        //ldc.i4.5
	IL_0561:            return 5;                                                   //ret
	IL_0562:                                                                        //ldc.i4.5
	IL_0563:            return 5;                                                   //ret
	IL_0564:                                                                        //ldc.i4.5
	IL_0565:            return 5;                                                   //ret
	IL_0566:                                                                        //ldc.i4.s				18
	IL_0568:            return 18;                                                  //ret
	IL_0569:                                                                        //ldc.i4.5
	IL_056a:            return 5;                                                   //ret
	IL_056b:                                                                        //ldc.i4.5
	IL_056c:            return 5;                                                   //ret
	IL_056d:                                                                        //ldc.i4.5
	IL_056e:            return 5;                                                   //ret
	IL_056f:                                                                        //ldc.i4.5
	IL_0570:            return 5;                                                   //ret
	IL_0571:                                                                        //ldc.i4.s				13
	IL_0573:            return 13;                                                  //ret
	IL_0574:                                                                        //ldc.i4.s				14
	IL_0576:            return 14;                                                  //ret
	IL_0577:                                                                        //ldc.i4.0
	IL_0578:            return 0;                                                   //ret
	IL_0579:                                                                        //ldc.i4.s				13
	IL_057b:            return 13;                                                  //ret
	IL_057c:                                                                        //ldc.i4				0x3
	IL_0581:            V_2=3;                                                      //stloc				V_2
	IL_0585:            /*goto IL_000b;*/goto IL_058a;                              //br				IL_000b
	IL_058a:            goto IL_071c;                                               //br				IL_071c
	IL_058f:                                                                        //ldc.i4.s				13
	IL_0591:            return 13;                                                  //ret
	IL_0592:                                                                        //ldc.i4.5
	IL_0593:            return 5;                                                   //ret
	IL_0594:                                                                        //ldc.i4.0
	IL_0595:            return 0;                                                   //ret
	IL_0596:                                                                        //ldc.i4.5
	IL_0597:            return 5;                                                   //ret
	IL_0598:                                                                        //ldc.i4.s				14
	IL_059a:            return 14;                                                  //ret
	IL_059b:                                                                        //ldc.i4.5
	IL_059c:            return 5;                                                   //ret
	IL_059d:                                                                        //ldc.i4.5
	IL_059e:            return 5;                                                   //ret
	IL_059f:                                                                        //ldc.i4.5
	IL_05a0:            return 5;                                                   //ret
	IL_05a1:                                                                        //ldc.i4.s				14
	IL_05a3:            return 14;                                                  //ret
	IL_05a4:                                                                        //ldc.i4.5
	IL_05a5:            return 5;                                                   //ret
	IL_05a6:                                                                        //ldc.i4.1
	IL_05a7:            return 1;                                                   //ret
	IL_05a8:                                                                        //ldc.i4.s				15
	IL_05aa:            return 15;                                                  //ret
	IL_05ab:                                                                        //ldc.i4.5
	IL_05ac:            return 5;                                                   //ret
	IL_05ad:                                                                        //ldc.i4.s				13
	IL_05af:            return 13;                                                  //ret
	IL_05b0:                                                                        //ldc.i4.s				14
	IL_05b2:            return 14;                                                  //ret
	IL_05b3:                                                                        //ldc.i4.5
	IL_05b4:            return 5;                                                   //ret
	IL_05b5:                                                                        //ldc.i4.5
	IL_05b6:            return 5;                                                   //ret
	IL_05b7:                                                                        //ldc.i4.s				15
	IL_05b9:            return 15;                                                  //ret
	IL_05ba:                                                                        //ldc.i4.s				18
	IL_05bc:            return 18;                                                  //ret
	IL_05bd:                                                                        //ldc.i4.5
	IL_05be:            return 5;                                                   //ret
	IL_05bf:                                                                        //ldc.i4.5
	IL_05c0:            return 5;                                                   //ret
	IL_05c1:                                                                        //ldc.i4.s				12
	IL_05c3:            return 12;                                                  //ret
	IL_05c4:                                                                        //ldc.i4.5
	IL_05c5:            return 5;                                                   //ret
	IL_05c6:                                                                        //ldc.i4.0
	IL_05c7:            return 0;                                                   //ret
	IL_05c8:                                                                        //ldc.i4.5
	IL_05c9:            return 5;                                                   //ret
	IL_05ca:                                                                        //ldc.i4.5
	IL_05cb:            return 5;                                                   //ret
	IL_05cc:                                                                        //ldc.i4.4
	IL_05cd:            return 4;                                                   //ret
	IL_05ce:                                                                        //ldc.i4.s				14
	IL_05d0:            return 14;                                                  //ret
	IL_05d1:                                                                        //ldc.i4.5
	IL_05d2:            return 5;                                                   //ret
	IL_05d3:                                                                        //ldc.i4.5
	IL_05d4:            return 5;                                                   //ret
	IL_05d5:                                                                        //ldc.i4.5
	IL_05d6:            return 5;                                                   //ret
	IL_05d7:                                                                        //ldc.i4.5
	IL_05d8:            return 5;                                                   //ret
	IL_05d9:                                                                        //ldc.i4.5
	IL_05da:            return 5;                                                   //ret
	IL_05db:                                                                        //ldc.i4.5
	IL_05dc:            return 5;                                                   //ret
	IL_05dd:                                                                        //ldc.i4.5
	IL_05de:            return 5;                                                   //ret
	IL_05df:                                                                        //ldc.i4.4
	IL_05e0:            return 4;                                                   //ret
	IL_05e1:                                                                        //ldc.i4.0
	IL_05e2:            return 0;                                                   //ret
	IL_05e3:                                                                        //ldc.i4.5
	IL_05e4:            return 5;                                                   //ret
	IL_05e5:                                                                        //ldc.i4.4
	IL_05e6:            return 4;                                                   //ret
	IL_05e7:                                                                        //ldc.i4.5
	IL_05e8:            return 5;                                                   //ret
	IL_05e9:                                                                        //ldc.i4.5
	IL_05ea:            return 5;                                                   //ret
	IL_05eb:                                                                        //ldc.i4.s				13
	IL_05ed:            return 13;                                                  //ret
	IL_05ee:                                                                        //ldc.i4.s				18
	IL_05f0:            return 18;                                                  //ret
	IL_05f1:                                                                        //ldc.i4.s				13
	IL_05f3:            return 13;                                                  //ret
	IL_05f4:                                                                        //ldc.i4.s				10
	IL_05f6:            return 10;                                                  //ret
	IL_05f7:                                                                        //ldc.i4.5
	IL_05f8:            return 5;                                                   //ret
	IL_05f9:                                                                        //ldc.i4.5
	IL_05fa:            return 5;                                                   //ret
	IL_05fb:                                                                        //ldc.i4.5
	IL_05fc:            return 5;                                                   //ret
	IL_05fd:                                                                        //ldc.i4.5
	IL_05fe:            return 5;                                                   //ret
	IL_05ff:                                                                        //ldc.i4.5
	IL_0600:            return 5;                                                   //ret
	IL_0601:                                                                        //ldc.i4.5
	IL_0602:            return 5;                                                   //ret
	IL_0603:                                                                        //ldc.i4.5
	IL_0604:            return 5;                                                   //ret
	IL_0605:                                                                        //ldc.i4.5
	IL_0606:            return 5;                                                   //ret
	IL_0607:                                                                        //ldc.i4.s				15
	IL_0609:            return 15;                                                  //ret
	IL_060a:                                                                        //ldc.i4.5
	IL_060b:            return 5;                                                   //ret
	IL_060c:                                                                        //ldc.i4.0
	IL_060d:            return 0;                                                   //ret
	IL_060e:                                                                        //ldc.i4.1
	IL_060f:            return 1;                                                   //ret
	IL_0610:                                                                        //ldc.i4.5
	IL_0611:            return 5;                                                   //ret
	IL_0612:                                                                        //ldc.i4.5
	IL_0613:            return 5;                                                   //ret
	IL_0614:                                                                        //ldc.i4.5
	IL_0615:            return 5;                                                   //ret
	IL_0616:                                                                        //ldc.i4.5
	IL_0617:            return 5;                                                   //ret
	IL_0618:                                                                        //ldc.i4.5
	IL_0619:            return 5;                                                   //ret
	IL_061a:                                                                        //ldc.i4.5
	IL_061b:            return 5;                                                   //ret
	IL_061c:                                                                        //ldc.i4.5
	IL_061d:            return 5;                                                   //ret
	IL_061e:                                                                        //ldc.i4.5
	IL_061f:            return 5;                                                   //ret
	IL_0620:                                                                        //ldc.i4.5
	IL_0621:            return 5;                                                   //ret
	IL_0622:                                                                        //ldc.i4.5
	IL_0623:            return 5;                                                   //ret
	IL_0624:                                                                        //ldc.i4.5
	IL_0625:            return 5;                                                   //ret
	IL_0626:                                                                        //ldc.i4.5
	IL_0627:            return 5;                                                   //ret
	IL_0628:                                                                        //ldc.i4.5
	IL_0629:            return 5;                                                   //ret
	IL_062a:                                                                        //ldc.i4.5
	IL_062b:            return 5;                                                   //ret
	IL_062c:                                                                        //ldc.i4.0
	IL_062d:            return 0;                                                   //ret
	IL_062e:                                                                        //ldc.i4.5
	IL_062f:            return 5;                                                   //ret
	IL_0630:                                                                        //ldc.i4.5
	IL_0631:            return 5;                                                   //ret
	IL_0632:                                                                        //ldc.i4.s				15
	IL_0634:            return 15;                                                  //ret
	IL_0635:                                                                        //ldc.i4.5
	IL_0636:            return 5;                                                   //ret
	IL_0637:                                                                        //ldc.i4.5
	IL_0638:            return 5;                                                   //ret
	IL_0639:                                                                        //ldc.i4.5
	IL_063a:            return 5;                                                   //ret
	IL_063b:                                                                        //ldarg.0
	IL_063c:            V_0=A_0;                                                    //stloc.0
	IL_063d:                                                                        //ldc.i4				0x2
	IL_0642:            V_2=2;                                                      //stloc				V_2
	IL_0646:            /*goto IL_000b;*/goto IL_064b;                              //br				IL_000b
	IL_064b:                                                                        //ldloc.0
	IL_064c:                                                                        //ldc.i4				0xfe00
	IL_0651:                                                                        //sub
	IL_0652:            switch((V_0 - 65024)){case 0:goto IL_0548;case 1:goto IL_06f9;case 2:goto IL_0711;case 3:goto IL_0477;case 4:goto IL_04d8;case 5:goto IL_045f;case 6:goto IL_04a2;case 7:goto IL_071a;case 8:goto IL_071c;case 9:goto IL_05b0;case 10:goto IL_0574;case 11:goto IL_05ce;case 12:goto IL_05a1;case 13:goto IL_0550;case 14:goto IL_0598;case 15:goto IL_059b;case 16:goto IL_071c;case 17:goto IL_05fd;case 18:goto IL_06fd;case 19:goto IL_061e;case 20:goto IL_06ec;case 21:goto IL_058f;case 22:goto IL_0468;case 23:goto IL_05d1;case 24:goto IL_0620;case 25:goto IL_071c;case 26:goto IL_0610;case 27:goto IL_071c;case 28:goto IL_05eb;case 29:goto IL_05f9;case 30:goto IL_0560;};//switch				(IL_0548,IL_06f9,IL_0711,IL_0477,IL_04d8,IL_045f,IL_04a2,IL_071a,IL_071c,IL_05b0,IL_0574,IL_05ce,IL_05a1,IL_0550,IL_0598,IL_059b,IL_071c,IL_05fd,IL_06fd,IL_061e,IL_06ec,IL_058f,IL_0468,IL_05d1,IL_0620,IL_071c,IL_0610,IL_071c,IL_05eb,IL_05f9,IL_0560)
	IL_06d3:                                                                        //ldc.i4				0x5
	IL_06d8:            V_2=5;                                                      //stloc				V_2
	IL_06dc:            /*goto IL_000b;*/goto IL_06e1;                              //br				IL_000b
	IL_06e1:            goto IL_057c;                                               //br				IL_057c
	IL_06e6:                                                                        //ldc.i4.5
	IL_06e7:            return 5;                                                   //ret
	IL_06e8:                                                                        //ldc.i4.5
	IL_06e9:            return 5;                                                   //ret
	IL_06ea:                                                                        //ldc.i4.5
	IL_06eb:            return 5;                                                   //ret
	IL_06ec:                                                                        //ldc.i4.5
	IL_06ed:            return 5;                                                   //ret
	IL_06ee:                                                                        //ldc.i4.5
	IL_06ef:            return 5;                                                   //ret
	IL_06f0:                                                                        //ldc.i4.s				13
	IL_06f2:            return 13;                                                  //ret
	IL_06f3:                                                                        //ldc.i4.5
	IL_06f4:            return 5;                                                   //ret
	IL_06f5:                                                                        //ldc.i4.5
	IL_06f6:            return 5;                                                   //ret
	IL_06f7:                                                                        //ldc.i4.5
	IL_06f8:            return 5;                                                   //ret
	IL_06f9:                                                                        //ldc.i4.5
	IL_06fa:            return 5;                                                   //ret
	IL_06fb:                                                                        //ldc.i4.4
	IL_06fc:            return 4;                                                   //ret
	IL_06fd:                                                                        //ldc.i4.s				16
	IL_06ff:            return 16;                                                  //ret
	IL_0700:                                                                        //ldc.i4.s				15
	IL_0702:            return 15;                                                  //ret
	IL_0703:                                                                        //ldc.i4.s				13
	IL_0705:            return 13;                                                  //ret
	IL_0706:                                                                        //ldc.i4.5
	IL_0707:            return 5;                                                   //ret
	IL_0708:                                                                        //ldc.i4.5
	IL_0709:            return 5;                                                   //ret
	IL_070a:                                                                        //ldc.i4.5
	IL_070b:            return 5;                                                   //ret
	IL_070c:                                                                        //ldc.i4.5
	IL_070d:            return 5;                                                   //ret
	IL_070e:                                                                        //ldc.i4.s				15
	IL_0710:            return 15;                                                  //ret
	IL_0711:                                                                        //ldc.i4.5
	IL_0712:            return 5;                                                   //ret
	IL_0713:                                                                        //ldc.i4.1
	IL_0714:            return 1;                                                   //ret
	IL_0715:                                                                        //ldc.i4.s				18
	IL_0717:            return 18;                                                  //ret
	IL_0718:                                                                        //ldc.i4.0
	IL_0719:            return 0;                                                   //ret
	IL_071a:                                                                        //ldc.i4.4
	IL_071b:            return 4;                                                   //ret
	IL_071c:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0721:                                                                        //ldstr				L"\x7E2A\x432C\x442E\x5F30\x5C32\x4234\x5936\x1938\x723A\x713C\x1F3E\x2840\x2D42\x3644\x3346\x3B48\x3E4A\x2E4C\x3B4E\x3850\x3C52\x3B54\x7756\x7E58\x205A\x6D5C\x225E\x4660\x4D62"
	IL_0726:                                                                        //ldloc				V_3
	IL_072a:            Temp_1=a(L"\x7E2A\x432C\x442E\x5F30\x5C32\x4234\x5936\x1938\x723A\x713C\x1F3E\x2840\x2D42\x3644\x3346\x3B48\x3E4A\x2E4C\x3B4E\x3850\x3C52\x3B54\x7756\x7E58\x205A\x6D5C\x225E\x4660\x4D62",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_072f:                                                                        //ldc.i4.1
	IL_0730:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0735:            V_1=Temp_2;                                                 //stloc.1
	IL_0736:                                                                        //ldloc.1
	IL_0737:                                                                        //ldc.i4.0
	IL_0738:                                                                        //ldarga.s				A_0
	IL_073a:                                                                        //ldstr				L"\x732A\x192C"
	IL_073f:                                                                        //ldloc				V_3
	IL_0743:            Temp_3=a(L"\x732A\x192C",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0748:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_074d:            Temp_5=A_0.ToString(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_0752:            V_1[0]=safe_cast<System::Object^>(Temp_5);                  //stelem.ref
	IL_0753:                                                                        //ldloc.1
	IL_0754:            Temp_6=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0759:            Temp_7=gcnew System::NotSupportedException(Temp_6);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_075e:            throw Temp_7;                                               //throw

}
