#include "global_xref.h"

inline Root::T_x183::T_x183()
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            /*System::Object();*/                                       //call				void System::Object::.ctor()
	IL_0006:            return;                                                     //ret

}
inline Reflector::CodeModel::BinaryOperator Root::T_x183::M_x1(Reflector::CodeModel::BinaryOperator A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::InvalidOperationException^ Temp_0 = nullptr;
	//local variables.
	Reflector::CodeModel::BinaryOperator V_0 = (Reflector::CodeModel::BinaryOperator)0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:            goto IL_0017;                                               //br.s				IL_0017
	IL_0002:                                                                        //ldloc				V_1
	IL_0006:            switch(V_1){case 0:goto IL_006b;case 1:goto IL_0024;case 2:goto IL_0089;};//switch				(IL_006b,IL_0024,IL_0089)
	IL_0017:                                                                        //ldarg.0
	IL_0018:            V_0=A_0;                                                    //stloc.0
	IL_0019:                                                                        //ldc.i4				0x1
	IL_001e:            V_1=1;                                                      //stloc				V_1
	IL_0022:            /*goto IL_0002;*/goto IL_0024;                              //br.s				IL_0002
	IL_0024:                                                                        //ldloc.0
	IL_0025:                                                                        //ldc.i4.7
	IL_0026:                                                                        //sub
	IL_0027:            switch((V_0 - safe_cast<Reflector::CodeModel::BinaryOperator>(7))){case 0:goto IL_008b;case 1:goto IL_006d;case 2:goto IL_0078;case 3:goto IL_008d;case 4:goto IL_0096;case 5:goto IL_0096;case 6:goto IL_0096;case 7:goto IL_0096;case 8:goto IL_0096;case 9:goto IL_0090;case 10:goto IL_0072;case 11:goto IL_0075;case 12:goto IL_0093;};//switch				(IL_008b,IL_006d,IL_0078,IL_008d,IL_0096,IL_0096,IL_0096,IL_0096,IL_0096,IL_0090,IL_0072,IL_0075,IL_0093)
	IL_0060:                                                                        //ldc.i4				0x0
	IL_0065:            V_1=0;                                                      //stloc				V_1
	IL_0069:            /*goto IL_0002;*/goto IL_006b;                              //br.s				IL_0002
	IL_006b:            goto IL_007b;                                               //br.s				IL_007b
	IL_006d:            goto IL_0070;                                               //br.s				IL_0070
	IL_006f:                                                                        //break
	IL_0070:                                                                        //ldc.i4.7
	IL_0071:            return safe_cast<Reflector::CodeModel::BinaryOperator>(7);  //ret
	IL_0072:                                                                        //ldc.i4.s				18
	IL_0074:            return safe_cast<Reflector::CodeModel::BinaryOperator>(18); //ret
	IL_0075:                                                                        //ldc.i4.s				17
	IL_0077:            return safe_cast<Reflector::CodeModel::BinaryOperator>(17); //ret
	IL_0078:                                                                        //ldc.i4.s				10
	IL_007a:            return safe_cast<Reflector::CodeModel::BinaryOperator>(10); //ret
	IL_007b:                                                                        //ldc.i4				0x2
	IL_0080:            V_1=2;                                                      //stloc				V_1
	IL_0084:            /*goto IL_0002;*/goto IL_0089;                              //br				IL_0002
	IL_0089:            goto IL_0096;                                               //br.s				IL_0096
	IL_008b:                                                                        //ldc.i4.8
	IL_008c:            return safe_cast<Reflector::CodeModel::BinaryOperator>(8);  //ret
	IL_008d:                                                                        //ldc.i4.s				9
	IL_008f:            return safe_cast<Reflector::CodeModel::BinaryOperator>(9);  //ret
	IL_0090:                                                                        //ldc.i4.s				19
	IL_0092:            return safe_cast<Reflector::CodeModel::BinaryOperator>(19); //ret
	IL_0093:                                                                        //ldc.i4.s				16
	IL_0095:            return safe_cast<Reflector::CodeModel::BinaryOperator>(16); //ret
	IL_0096:            Temp_0=gcnew System::InvalidOperationException();           //newobj				void System::InvalidOperationException::.ctor()
	IL_009b:            throw Temp_0;                                               //throw

}
inline System::Int32 Root::T_x183::M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatementCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IStatementCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_4 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ILabeledStatement^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0036;                                               //br.s				IL_0036
	IL_0002:                                                                        //ldc.i4.6
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.0
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_0086;case 1:goto IL_0096;case 2:goto IL_0054;case 3:goto IL_00b2;case 4:goto IL_00e6;case 5:goto IL_00c2;case 6:goto IL_0043;case 7:goto IL_0075;};//switch				(IL_0086,IL_0096,IL_0054,IL_00b2,IL_00e6,IL_00c2,IL_0043,IL_0075)
	IL_0036:                                                                        //ldarg.1
	IL_0037:            V_0=A_1;                                                    //stloc.0
	IL_0038:                                                                        //ldc.i4				0x6
	IL_003d:            V_2=6;                                                      //stloc				V_2
	IL_0041:            /*goto IL_0002;*/goto IL_0043;                              //br.s				IL_0002
	IL_0043:            goto IL_0088;                                               //br.s				IL_0088
	IL_0045:                                                                        //ldloc.0
	IL_0046:                                                                        //ldc.i4.1
	IL_0047:                                                                        //add
	IL_0048:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0049:                                                                        //ldc.i4				0x2
	IL_004e:            V_2=2;                                                      //stloc				V_2
	IL_0052:            /*goto IL_0002;*/goto IL_0054;                              //br.s				IL_0002
	IL_0054:            goto IL_0088;                                               //br.s				IL_0088
	IL_0056:                                                                        //ldloc.0
	IL_0057:            return V_0;                                                 //ret
	IL_0058:                                                                        //ldarg.0
	IL_0059:            Temp_2=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_005e:                                                                        //ldloc.0
	IL_005f:            Temp_3=Temp_2[V_0];                                         //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_0064:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_0069:            V_1=dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(Temp_3);//stloc.1
	IL_006a:                                                                        //ldc.i4				0x7
	IL_006f:            V_2=7;                                                      //stloc				V_2
	IL_0073:            /*goto IL_0002;*/goto IL_0075;                              //br.s				IL_0002
	IL_0075:                                                                        //ldloc.1
	IL_0076:            if(V_1!=nullptr)goto IL_00eb;                               //brtrue.s				IL_00eb
	IL_0078:                                                                        //ldc.i4				0x0
	IL_007d:            V_2=0;                                                      //stloc				V_2
	IL_0081:            /*goto IL_0002;*/goto IL_0086;                              //br				IL_0002
	IL_0086:            goto IL_00b4;                                               //br.s				IL_00b4
	IL_0088:                                                                        //ldc.i4				0x1
	IL_008d:            V_2=1;                                                      //stloc				V_2
	IL_0091:            /*goto IL_0002;*/goto IL_0096;                              //br				IL_0002
	IL_0096:                                                                        //ldloc.0
	IL_0097:                                                                        //ldarg.0
	IL_0098:            Temp_0=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_009d:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00a2:            if(V_0<Temp_1)goto IL_0058;                                 //blt.s				IL_0058
	IL_00a4:                                                                        //ldc.i4				0x3
	IL_00a9:            V_2=3;                                                      //stloc				V_2
	IL_00ad:            /*goto IL_0002;*/goto IL_00b2;                              //br				IL_0002
	IL_00b2:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00b4:                                                                        //ldc.i4				0x5
	IL_00b9:            V_2=5;                                                      //stloc				V_2
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:                                                                        //ldarg.0
	IL_00c3:            Temp_4=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_00c8:                                                                        //ldloc.0
	IL_00c9:            Temp_5=Temp_4[V_0];                                         //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_00ce:            Temp_6=Root::T_x183::M_x12(Temp_5);                         //call				System::Boolean Root::T_x183::M_x12(Reflector::CodeModel::IStatement^)
	IL_00d3:            if(!Temp_6)goto IL_0045;                                    //brfalse				IL_0045
	IL_00d8:                                                                        //ldc.i4				0x4
	IL_00dd:            V_2=4;                                                      //stloc				V_2
	IL_00e1:            /*goto IL_0002;*/goto IL_00e6;                              //br				IL_0002
	IL_00e6:            goto IL_0056;                                               //br				IL_0056
	IL_00eb:                                                                        //ldc.i4.m1
	IL_00ec:            return -1;                                                  //ret

}
inline Reflector::CodeModel::IExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::Memory::BinaryExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::Memory::BinaryExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_3 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::BinaryOperator Temp_4 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_6 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_8 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_9 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_10 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_11 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_12 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_13 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_14 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::Memory::BinaryExpression^ Temp_15 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_16 = nullptr;
	Reflector::CodeModel::UnaryOperator Temp_17 = (Reflector::CodeModel::UnaryOperator)0;
	Reflector::CodeModel::Memory::UnaryExpression^ Temp_18 = nullptr;
	//local variables.
	Reflector::CodeModel::IBinaryExpression^ V_0 = nullptr;
	Reflector::CodeModel::IBinaryExpression^ V_1 = nullptr;
	Reflector::CodeModel::IExpression^ V_2 = nullptr;
	Reflector::CodeModel::IExpression^ V_3 = nullptr;
	Reflector::CodeModel::IBinaryExpression^ V_4 = nullptr;
	Reflector::CodeModel::IExpression^ V_5 = nullptr;
	Reflector::CodeModel::IExpression^ V_6 = nullptr;
	Reflector::CodeModel::IBinaryExpression^ V_7 = nullptr;
	Reflector::CodeModel::IUnaryExpression^ V_8 = nullptr;
	Reflector::CodeModel::IUnaryExpression^ V_9 = nullptr;
	Reflector::CodeModel::BinaryOperator V_10 = (Reflector::CodeModel::BinaryOperator)0;
	System::Int32 V_11 = 0;
	//method body ------- 
	IL_0000:            goto IL_004f;                                               //br.s				IL_004f
	IL_0002:                                                                        //ldloc				V_11
	IL_0006:            switch(V_11){case 0:goto IL_01a4;case 1:goto IL_01bf;case 2:goto IL_0150;case 3:goto IL_0163;case 4:goto IL_0072;case 5:goto IL_0193;case 6:goto IL_00c4;case 7:goto IL_0178;case 8:goto IL_0061;case 9:goto IL_0237;case 10:goto IL_00d9;case 11:goto IL_0140;case 12:goto IL_020a;case 13:goto IL_0125;case 14:goto IL_0285;case 15:goto IL_0296;case 16:goto IL_0225;};//switch				(IL_01a4,IL_01bf,IL_0150,IL_0163,IL_0072,IL_0193,IL_00c4,IL_0178,IL_0061,IL_0237,IL_00d9,IL_0140,IL_020a,IL_0125,IL_0285,IL_0296,IL_0225)
	IL_004f:                                                                        //ldarg.0
	IL_0050:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_0055:            V_0=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.0
	IL_0056:                                                                        //ldc.i4				0x8
	IL_005b:            V_11=8;                                                     //stloc				V_11
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:                                                                        //ldloc.0
	IL_0062:            if(V_0==nullptr)goto IL_020f;                               //brfalse				IL_020f
	IL_0067:                                                                        //ldc.i4				0x4
	IL_006c:            V_11=4;                                                     //stloc				V_11
	IL_0070:            /*goto IL_0002;*/goto IL_0072;                              //br.s				IL_0002
	IL_0072:            goto IL_01a9;                                               //br				IL_01a9
	IL_0077:            Temp_15=gcnew Reflector::CodeModel::Memory::BinaryExpression();//newobj				void Reflector::CodeModel::Memory::BinaryExpression::.ctor()
	IL_007c:            V_7=safe_cast<Reflector::CodeModel::IBinaryExpression^>(Temp_15);//stloc.s				V_7
	IL_007e:                                                                        //ldloc.s				V_7
	IL_0080:                                                                        //ldloc.s				V_5
	IL_0082:            V_7->Left=V_5;                                              //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_0087:                                                                        //ldloc.s				V_7
	IL_0089:                                                                        //ldc.i4.s				15
	IL_008b:            V_7->Operator=safe_cast<Reflector::CodeModel::BinaryOperator>(15);//callvirt				void Reflector::CodeModel::IBinaryExpression::set_Operator(Reflector::CodeModel::BinaryOperator)
	IL_0090:                                                                        //ldloc.s				V_7
	IL_0092:                                                                        //ldloc.s				V_6
	IL_0094:            V_7->Right=V_6;                                             //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_0099:                                                                        //ldloc.s				V_7
	IL_009b:            return safe_cast<Reflector::CodeModel::IExpression^>(V_7);  //ret
	IL_009c:                                                                        //ldloc.0
	IL_009d:            Temp_6=V_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_00a2:            Temp_7=Root::T_x183::M_x1(Temp_6);                          //call				Reflector::CodeModel::IExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^)
	IL_00a7:            V_5=Temp_7;                                                 //stloc.s				V_5
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:            Temp_8=V_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_00af:            Temp_9=Root::T_x183::M_x1(Temp_8);                          //call				Reflector::CodeModel::IExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^)
	IL_00b4:            V_6=Temp_9;                                                 //stloc.s				V_6
	IL_00b6:                                                                        //ldc.i4				0x6
	IL_00bb:            V_11=6;                                                     //stloc				V_11
	IL_00bf:            /*goto IL_0002;*/goto IL_00c4;                              //br				IL_0002
	IL_00c4:                                                                        //ldloc.s				V_5
	IL_00c6:            if(V_5==nullptr)goto IL_020f;                               //brfalse				IL_020f
	IL_00cb:                                                                        //ldc.i4				0xa
	IL_00d0:            V_11=10;                                                    //stloc				V_11
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:                                                                        //ldc.i4.0
	IL_00da:                                                                        //dup
	IL_00db:                                                                        //dup
	IL_00dc:                                                                        //ldc.i4.7
	IL_00dd:                                                                        //add
	IL_00de:                                                                        //bgt				IL_00da
	IL_00e3:                                                                        //pop
	IL_00e4:            goto IL_0155;                                               //br.s				IL_0155
	IL_00e6:            Temp_1=gcnew Reflector::CodeModel::Memory::BinaryExpression();//newobj				void Reflector::CodeModel::Memory::BinaryExpression::.ctor()
	IL_00eb:            V_1=safe_cast<Reflector::CodeModel::IBinaryExpression^>(Temp_1);//stloc.1
	IL_00ec:                                                                        //ldloc.1
	IL_00ed:                                                                        //ldloc.0
	IL_00ee:            Temp_2=V_0->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_00f3:            V_1->Left=Temp_2;                                           //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_00f8:                                                                        //ldloc.1
	IL_00f9:                                                                        //ldloc.0
	IL_00fa:            Temp_3=V_0->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_00ff:            Temp_4=Root::T_x183::M_x1(Temp_3);                          //call				Reflector::CodeModel::BinaryOperator Root::T_x183::M_x1(Reflector::CodeModel::BinaryOperator)
	IL_0104:            V_1->Operator=Temp_4;                                       //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Operator(Reflector::CodeModel::BinaryOperator)
	IL_0109:                                                                        //ldloc.1
	IL_010a:                                                                        //ldloc.0
	IL_010b:            Temp_5=V_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_0110:            V_1->Right=Temp_5;                                          //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_0115:                                                                        //ldloc.1
	IL_0116:            return safe_cast<Reflector::CodeModel::IExpression^>(V_1);  //ret
	IL_0117:                                                                        //ldc.i4				0xd
	IL_011c:            V_11=13;                                                    //stloc				V_11
	IL_0120:            /*goto IL_0002;*/goto IL_0125;                              //br				IL_0002
	IL_0125:                                                                        //ldloc.s				V_8
	IL_0127:            Temp_17=V_8->Operator;                                      //callvirt				Reflector::CodeModel::UnaryOperator Reflector::CodeModel::IUnaryExpression::get_Operator()
	IL_012c:                                                                        //ldc.i4.1
	IL_012d:            if(safe_cast<System::Int32>(Temp_17)!=1)goto IL_029b;       //bne.un				IL_029b
	IL_0132:                                                                        //ldc.i4				0xb
	IL_0137:            V_11=11;                                                    //stloc				V_11
	IL_013b:            /*goto IL_0002;*/goto IL_0140;                              //br				IL_0002
	IL_0140:            goto IL_017d;                                               //br.s				IL_017d
	IL_0142:                                                                        //ldc.i4				0x2
	IL_0147:            V_11=2;                                                     //stloc				V_11
	IL_014b:            /*goto IL_0002;*/goto IL_0150;                              //br				IL_0002
	IL_0150:            goto IL_020f;                                               //br				IL_020f
	IL_0155:                                                                        //ldc.i4				0x3
	IL_015a:            V_11=3;                                                     //stloc				V_11
	IL_015e:            /*goto IL_0002;*/goto IL_0163;                              //br				IL_0002
	IL_0163:                                                                        //ldloc.s				V_6
	IL_0165:            if(V_6==nullptr)goto IL_020f;                               //brfalse				IL_020f
	IL_016a:                                                                        //ldc.i4				0x7
	IL_016f:            V_11=7;                                                     //stloc				V_11
	IL_0173:            /*goto IL_0002;*/goto IL_0178;                              //br				IL_0002
	IL_0178:            goto IL_0077;                                               //br				IL_0077
	IL_017d:                                                                        //ldloc.s				V_8
	IL_017f:            Temp_16=V_8->Expression;                                    //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_0184:            return Temp_16;                                             //ret
	IL_0185:                                                                        //ldc.i4				0x5
	IL_018a:            V_11=5;                                                     //stloc				V_11
	IL_018e:            /*goto IL_0002;*/goto IL_0193;                              //br				IL_0002
	IL_0193:                                                                        //ldloc.3
	IL_0194:            if(V_3==nullptr)goto IL_020f;                               //brfalse.s				IL_020f
	IL_0196:                                                                        //ldc.i4				0x0
	IL_019b:            V_11=0;                                                     //stloc				V_11
	IL_019f:            /*goto IL_0002;*/goto IL_01a4;                              //br				IL_0002
	IL_01a4:            goto IL_023c;                                               //br				IL_023c
	IL_01a9:                                                                        //ldloc.0
	IL_01aa:            Temp_14=V_0->Operator;                                      //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_01af:            V_10=Temp_14;                                               //stloc.s				V_10
	IL_01b1:                                                                        //ldc.i4				0x1
	IL_01b6:            V_11=1;                                                     //stloc				V_11
	IL_01ba:            /*goto IL_0002;*/goto IL_01bf;                              //br				IL_0002
	IL_01bf:                                                                        //ldloc.s				V_10
	IL_01c1:                                                                        //ldc.i4.7
	IL_01c2:                                                                        //sub
	IL_01c3:            switch((V_10 - safe_cast<Reflector::CodeModel::BinaryOperator>(7))){case 0:goto IL_00e6;case 1:goto IL_00e6;case 2:goto IL_00e6;case 3:goto IL_00e6;case 4:goto IL_020f;case 5:goto IL_020f;case 6:goto IL_020f;case 7:goto IL_009c;case 8:goto IL_025f;case 9:goto IL_00e6;case 10:goto IL_00e6;case 11:goto IL_00e6;case 12:goto IL_00e6;};//switch				(IL_00e6,IL_00e6,IL_00e6,IL_00e6,IL_020f,IL_020f,IL_020f,IL_009c,IL_025f,IL_00e6,IL_00e6,IL_00e6,IL_00e6)
	IL_01fc:                                                                        //ldc.i4				0xc
	IL_0201:            V_11=12;                                                    //stloc				V_11
	IL_0205:            /*goto IL_0002;*/goto IL_020a;                              //br				IL_0002
	IL_020a:            goto IL_0142;                                               //br				IL_0142
	IL_020f:                                                                        //ldarg.0
	IL_0210:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_0215:            V_8=dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0);//stloc.s				V_8
	IL_0217:                                                                        //ldc.i4				0x10
	IL_021c:            V_11=16;                                                    //stloc				V_11
	IL_0220:            /*goto IL_0002;*/goto IL_0225;                              //br				IL_0002
	IL_0225:                                                                        //ldloc.s				V_8
	IL_0227:            if(V_8==nullptr)goto IL_029b;                               //brfalse.s				IL_029b
	IL_0229:                                                                        //ldc.i4				0x9
	IL_022e:            V_11=9;                                                     //stloc				V_11
	IL_0232:            /*goto IL_0002;*/goto IL_0237;                              //br				IL_0002
	IL_0237:            goto IL_0117;                                               //br				IL_0117
	IL_023c:            Temp_0=gcnew Reflector::CodeModel::Memory::BinaryExpression();//newobj				void Reflector::CodeModel::Memory::BinaryExpression::.ctor()
	IL_0241:            V_4=safe_cast<Reflector::CodeModel::IBinaryExpression^>(Temp_0);//stloc.s				V_4
	IL_0243:                                                                        //ldloc.s				V_4
	IL_0245:                                                                        //ldloc.2
	IL_0246:            V_4->Left=V_2;                                              //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Left(Reflector::CodeModel::IExpression^)
	IL_024b:                                                                        //ldloc.s				V_4
	IL_024d:                                                                        //ldc.i4.s				14
	IL_024f:            V_4->Operator=safe_cast<Reflector::CodeModel::BinaryOperator>(14);//callvirt				void Reflector::CodeModel::IBinaryExpression::set_Operator(Reflector::CodeModel::BinaryOperator)
	IL_0254:                                                                        //ldloc.s				V_4
	IL_0256:                                                                        //ldloc.3
	IL_0257:            V_4->Right=V_3;                                             //callvirt				void Reflector::CodeModel::IBinaryExpression::set_Right(Reflector::CodeModel::IExpression^)
	IL_025c:                                                                        //ldloc.s				V_4
	IL_025e:            return safe_cast<Reflector::CodeModel::IExpression^>(V_4);  //ret
	IL_025f:                                                                        //ldloc.0
	IL_0260:            Temp_10=V_0->Left;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_0265:            Temp_11=Root::T_x183::M_x1(Temp_10);                        //call				Reflector::CodeModel::IExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^)
	IL_026a:            V_2=Temp_11;                                                //stloc.2
	IL_026b:                                                                        //ldloc.0
	IL_026c:            Temp_12=V_0->Right;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_0271:            Temp_13=Root::T_x183::M_x1(Temp_12);                        //call				Reflector::CodeModel::IExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^)
	IL_0276:            V_3=Temp_13;                                                //stloc.3
	IL_0277:                                                                        //ldc.i4				0xe
	IL_027c:            V_11=14;                                                    //stloc				V_11
	IL_0280:            /*goto IL_0002;*/goto IL_0285;                              //br				IL_0002
	IL_0285:                                                                        //ldloc.2
	IL_0286:            if(V_2==nullptr)goto IL_020f;                               //brfalse.s				IL_020f
	IL_0288:                                                                        //ldc.i4				0xf
	IL_028d:            V_11=15;                                                    //stloc				V_11
	IL_0291:            /*goto IL_0002;*/goto IL_0296;                              //br				IL_0002
	IL_0296:            goto IL_0185;                                               //br				IL_0185
	IL_029b:            Temp_18=gcnew Reflector::CodeModel::Memory::UnaryExpression();//newobj				void Reflector::CodeModel::Memory::UnaryExpression::.ctor()
	IL_02a0:            V_9=safe_cast<Reflector::CodeModel::IUnaryExpression^>(Temp_18);//stloc.s				V_9
	IL_02a2:                                                                        //ldloc.s				V_9
	IL_02a4:                                                                        //ldc.i4.1
	IL_02a5:            V_9->Operator=safe_cast<Reflector::CodeModel::UnaryOperator>(1);//callvirt				void Reflector::CodeModel::IUnaryExpression::set_Operator(Reflector::CodeModel::UnaryOperator)
	IL_02aa:                                                                        //ldloc.s				V_9
	IL_02ac:                                                                        //ldarg.0
	IL_02ad:            V_9->Expression=A_0;                                        //callvirt				void Reflector::CodeModel::IUnaryExpression::set_Expression(Reflector::CodeModel::IExpression^)
	IL_02b2:                                                                        //ldloc.s				V_9
	IL_02b4:            return safe_cast<Reflector::CodeModel::IExpression^>(V_9);  //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::BinaryOperator A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	System::Object^ Temp_1 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_2 = (Reflector::CodeModel::BinaryOperator)0;
	//local variables.
	Reflector::CodeModel::IBinaryExpression^ V_0 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_008d;case 1:goto IL_00c5;case 2:goto IL_005e;case 3:goto IL_0071;case 4:goto IL_0051;case 5:goto IL_0040;case 6:goto IL_009e;case 7:goto IL_00ae;};//switch				(IL_008d,IL_00c5,IL_005e,IL_0071,IL_0051,IL_0040,IL_009e,IL_00ae)
	IL_002b:            goto IL_002e;                                               //br.s				IL_002e
	IL_002d:                                                                        //break
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_0034:            V_0=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.0
	IL_0035:                                                                        //ldc.i4				0x5
	IL_003a:            V_2=5;                                                      //stloc				V_2
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:            if(V_0==nullptr)goto IL_00c9;                               //brfalse				IL_00c9
	IL_0046:                                                                        //ldc.i4				0x4
	IL_004b:            V_2=4;                                                      //stloc				V_2
	IL_004f:            /*goto IL_0002;*/goto IL_0051;                              //br.s				IL_0002
	IL_0051:            goto IL_00a0;                                               //br.s				IL_00a0
	IL_0053:                                                                        //ldc.i4				0x2
	IL_0058:            V_2=2;                                                      //stloc				V_2
	IL_005c:            /*goto IL_0002;*/goto IL_005e;                              //br.s				IL_0002
	IL_005e:                                                                        //ldloc.1
	IL_005f:            Temp_1=V_1->Value;                                          //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_0064:            if(Temp_1!=nullptr)goto IL_00c9;                            //brtrue.s				IL_00c9
	IL_0066:                                                                        //ldc.i4				0x3
	IL_006b:            V_2=3;                                                      //stloc				V_2
	IL_006f:            /*goto IL_0002;*/goto IL_0071;                              //br.s				IL_0002
	IL_0071:            goto IL_00c7;                                               //br.s				IL_00c7
	IL_0073:                                                                        //ldloc.0
	IL_0074:            Temp_0=V_0->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_0079:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_007e:            V_1=dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(Temp_0);//stloc.1
	IL_007f:                                                                        //ldc.i4				0x0
	IL_0084:            V_2=0;                                                      //stloc				V_2
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:                                                                        //ldloc.1
	IL_008e:            if(V_1==nullptr)goto IL_00c9;                               //brfalse.s				IL_00c9
	IL_0090:                                                                        //ldc.i4				0x6
	IL_0095:            V_2=6;                                                      //stloc				V_2
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:            goto IL_0053;                                               //br.s				IL_0053
	IL_00a0:                                                                        //ldc.i4				0x7
	IL_00a5:            V_2=7;                                                      //stloc				V_2
	IL_00a9:            /*goto IL_0002;*/goto IL_00ae;                              //br				IL_0002
	IL_00ae:                                                                        //ldloc.0
	IL_00af:            Temp_2=V_0->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_00b4:                                                                        //ldarg.1
	IL_00b5:            if(Temp_2!=A_1)goto IL_00c9;                                //bne.un.s				IL_00c9
	IL_00b7:                                                                        //ldc.i4				0x1
	IL_00bc:            V_2=1;                                                      //stloc				V_2
	IL_00c0:            /*goto IL_0002;*/goto IL_00c5;                              //br				IL_0002
	IL_00c5:            goto IL_0073;                                               //br.s				IL_0073
	IL_00c7:                                                                        //ldc.i4.1
	IL_00c8:            return true;                                                //ret
	IL_00c9:                                                                        //ldc.i4.0
	IL_00ca:            return false;                                               //ret

}
inline Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IVariableDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_3 = nullptr;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::Object^>^ Temp_6 = nullptr;
	System::Object^ Temp_7 = nullptr;
	System::Type^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::NotSupportedException^ Temp_11 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_12 = nullptr;
	Reflector::CodeModel::IType^ Temp_13 = nullptr;
	Reflector::CodeModel::IType^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_26 = nullptr;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_32 = nullptr;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_38 = nullptr;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_41 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::String^ Temp_44 = nullptr;
	System::Boolean Temp_45 = false;
	Reflector::CodeModel::IExpression^ Temp_46 = nullptr;
	Reflector::CodeModel::IType^ Temp_47 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_48 = nullptr;
	Reflector::CodeModel::IType^ Temp_49 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_50 = nullptr;
	Reflector::CodeModel::IType^ Temp_51 = nullptr;
	System::String^ Temp_52 = nullptr;
	System::String^ Temp_53 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_54 = nullptr;
	Reflector::CodeModel::IVariableReference^ Temp_55 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ Temp_56 = nullptr;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::Boolean Temp_59 = false;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_62 = nullptr;
	Reflector::CodeModel::Memory::PointerType^ Temp_63 = nullptr;
	Reflector::CodeModel::IType^ Temp_64 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_65 = nullptr;
	Reflector::CodeModel::IType^ Temp_66 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_67 = nullptr;
	Reflector::CodeModel::IType^ Temp_68 = nullptr;
	Reflector::CodeModel::IPropertyReferenceExpression^ Temp_69 = nullptr;
	Reflector::CodeModel::IType^ Temp_70 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_71 = nullptr;
	Reflector::CodeModel::IType^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::String^ Temp_74 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::String^ Temp_77 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	System::String^ Temp_80 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_81 = nullptr;
	System::String^ Temp_82 = nullptr;
	System::String^ Temp_83 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_84 = nullptr;
	System::String^ Temp_85 = nullptr;
	System::String^ Temp_86 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	System::String^ Temp_89 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::String^ Temp_92 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::String^ Temp_95 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::String^ Temp_98 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::String^ Temp_101 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_102 = nullptr;
	System::String^ Temp_103 = nullptr;
	System::String^ Temp_104 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_105 = nullptr;
	System::String^ Temp_106 = nullptr;
	System::String^ Temp_107 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_108 = nullptr;
	System::String^ Temp_109 = nullptr;
	System::String^ Temp_110 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_111 = nullptr;
	System::String^ Temp_112 = nullptr;
	System::String^ Temp_113 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_114 = nullptr;
	System::String^ Temp_115 = nullptr;
	System::String^ Temp_116 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_117 = nullptr;
	System::String^ Temp_118 = nullptr;
	System::String^ Temp_119 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_120 = nullptr;
	Reflector::CodeModel::IType^ Temp_121 = nullptr;
	System::String^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_124 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_125 = nullptr;
	Reflector::CodeModel::IType^ Temp_126 = nullptr;
	System::String^ Temp_127 = nullptr;
	System::String^ Temp_128 = nullptr;
	System::Boolean Temp_129 = false;
	System::String^ Temp_130 = nullptr;
	System::String^ Temp_131 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_132 = nullptr;
	System::String^ Temp_133 = nullptr;
	System::String^ Temp_134 = nullptr;
	System::Boolean Temp_135 = false;
	Reflector::CodeModel::IExpression^ Temp_136 = nullptr;
	System::NotSupportedException^ Temp_137 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_138 = nullptr;
	Reflector::CodeModel::IType^ Temp_139 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_140 = nullptr;
	System::String^ Temp_141 = nullptr;
	System::String^ Temp_142 = nullptr;
	System::Boolean Temp_143 = false;
	Reflector::CodeModel::BinaryOperator Temp_144 = (Reflector::CodeModel::BinaryOperator)0;
	System::String^ Temp_145 = nullptr;
	System::String^ Temp_146 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_147 = nullptr;
	Reflector::CodeModel::Memory::ReferenceType^ Temp_148 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_149 = nullptr;
	Reflector::CodeModel::IType^ Temp_150 = nullptr;
	System::String^ Temp_151 = nullptr;
	System::String^ Temp_152 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_153 = nullptr;
	System::String^ Temp_154 = nullptr;
	System::String^ Temp_155 = nullptr;
	System::Boolean Temp_156 = false;
	Reflector::CodeModel::Memory::ReferenceType^ Temp_157 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_158 = nullptr;
	Reflector::CodeModel::IType^ Temp_159 = nullptr;
	System::String^ Temp_160 = nullptr;
	System::String^ Temp_161 = nullptr;
	System::Boolean Temp_162 = false;
	System::String^ Temp_163 = nullptr;
	System::String^ Temp_164 = nullptr;
	System::Boolean Temp_165 = false;
	Reflector::CodeModel::IExpression^ Temp_166 = nullptr;
	Reflector::CodeModel::IPropertyReference^ Temp_167 = nullptr;
	Reflector::CodeModel::IType^ Temp_168 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_169 = nullptr;
	Reflector::CodeModel::IType^ Temp_170 = nullptr;
	Reflector::CodeModel::IMethodReference^ Temp_171 = nullptr;
	Reflector::CodeModel::IMethodReturnType^ Temp_172 = nullptr;
	Reflector::CodeModel::IType^ Temp_173 = nullptr;
	System::String^ Temp_174 = nullptr;
	System::String^ Temp_175 = nullptr;
	System::Boolean Temp_176 = false;
	System::String^ Temp_177 = nullptr;
	System::String^ Temp_178 = nullptr;
	System::Boolean Temp_179 = false;
	System::String^ Temp_180 = nullptr;
	System::String^ Temp_181 = nullptr;
	System::Boolean Temp_182 = false;
	System::String^ Temp_183 = nullptr;
	System::String^ Temp_184 = nullptr;
	System::Boolean Temp_185 = false;
	System::String^ Temp_186 = nullptr;
	System::String^ Temp_187 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_188 = nullptr;
	System::String^ Temp_189 = nullptr;
	System::String^ Temp_190 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_191 = nullptr;
	System::String^ Temp_192 = nullptr;
	System::String^ Temp_193 = nullptr;
	System::Boolean Temp_194 = false;
	Reflector::CodeModel::IType^ Temp_195 = nullptr;
	System::String^ Temp_196 = nullptr;
	System::String^ Temp_197 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_198 = nullptr;
	System::String^ Temp_199 = nullptr;
	System::String^ Temp_200 = nullptr;
	System::Boolean Temp_201 = false;
	System::String^ Temp_202 = nullptr;
	System::String^ Temp_203 = nullptr;
	System::Boolean Temp_204 = false;
	System::String^ Temp_205 = nullptr;
	System::String^ Temp_206 = nullptr;
	System::Boolean Temp_207 = false;
	Reflector::CodeModel::BinaryOperator Temp_208 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_209 = nullptr;
	Reflector::CodeModel::IType^ Temp_210 = nullptr;
	System::String^ Temp_211 = nullptr;
	System::String^ Temp_212 = nullptr;
	System::Boolean Temp_213 = false;
	System::String^ Temp_214 = nullptr;
	System::String^ Temp_215 = nullptr;
	System::Boolean Temp_216 = false;
	Reflector::CodeModel::BinaryOperator Temp_217 = (Reflector::CodeModel::BinaryOperator)0;
	System::String^ Temp_218 = nullptr;
	System::NotSupportedException^ Temp_219 = nullptr;
	System::String^ Temp_220 = nullptr;
	System::String^ Temp_221 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_222 = nullptr;
	System::Boolean Temp_223 = false;
	Reflector::CodeModel::IType^ Temp_224 = nullptr;
	Reflector::CodeModel::Memory::ArrayType^ Temp_225 = nullptr;
	Reflector::CodeModel::IType^ Temp_226 = nullptr;
	Reflector::CodeModel::IGenericArgument^ Temp_227 = nullptr;
	System::Collections::Hashtable^ Temp_228 = nullptr;
	System::Object^ Temp_229 = nullptr;
	System::Object^ Temp_230 = nullptr;
	System::Object^ Temp_231 = nullptr;
	System::Object^ Temp_232 = nullptr;
	System::Type^ Temp_233 = nullptr;
	System::String^ Temp_234 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_235 = nullptr;
	Reflector::CodeModel::IType^ Temp_236 = nullptr;
	System::String^ Temp_237 = nullptr;
	System::String^ Temp_238 = nullptr;
	System::Boolean Temp_239 = false;
	Reflector::CodeModel::UnaryOperator Temp_240 = (Reflector::CodeModel::UnaryOperator)0;
	Reflector::CodeModel::IType^ Temp_241 = nullptr;
	System::String^ Temp_242 = nullptr;
	System::String^ Temp_243 = nullptr;
	System::Boolean Temp_244 = false;
	System::String^ Temp_245 = nullptr;
	System::String^ Temp_246 = nullptr;
	System::Boolean Temp_247 = false;
	System::String^ Temp_248 = nullptr;
	System::String^ Temp_249 = nullptr;
	System::Boolean Temp_250 = false;
	Reflector::CodeModel::IType^ Temp_251 = nullptr;
	System::String^ Temp_252 = nullptr;
	System::String^ Temp_253 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_254 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_255 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_256 = nullptr;
	Reflector::CodeModel::IType^ Temp_257 = nullptr;
	System::String^ Temp_258 = nullptr;
	System::String^ Temp_259 = nullptr;
	System::Boolean Temp_260 = false;
	Reflector::CodeModel::IType^ Temp_261 = nullptr;
	System::String^ Temp_262 = nullptr;
	System::String^ Temp_263 = nullptr;
	System::Boolean Temp_264 = false;
	System::String^ Temp_265 = nullptr;
	System::String^ Temp_266 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_267 = nullptr;
	System::String^ Temp_268 = nullptr;
	System::String^ Temp_269 = nullptr;
	System::Boolean Temp_270 = false;
	System::String^ Temp_271 = nullptr;
	System::String^ Temp_272 = nullptr;
	System::Boolean Temp_273 = false;
	System::String^ Temp_274 = nullptr;
	System::String^ Temp_275 = nullptr;
	System::Boolean Temp_276 = false;
	Reflector::CodeModel::Memory::PointerType^ Temp_277 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_278 = nullptr;
	Reflector::CodeModel::IType^ Temp_279 = nullptr;
	System::String^ Temp_280 = nullptr;
	System::String^ Temp_281 = nullptr;
	System::Boolean Temp_282 = false;
	Reflector::CodeModel::IParameterReference^ Temp_283 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ Temp_284 = nullptr;
	Reflector::CodeModel::IType^ Temp_285 = nullptr;
	System::String^ Temp_286 = nullptr;
	System::String^ Temp_287 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_288 = nullptr;
	Reflector::CodeModel::Memory::PointerType^ Temp_289 = nullptr;
	System::String^ Temp_290 = nullptr;
	System::String^ Temp_291 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_292 = nullptr;
	System::Boolean Temp_293 = false;
	System::Collections::Hashtable^ Temp_294 = nullptr;
	System::String^ Temp_295 = nullptr;
	System::String^ Temp_296 = nullptr;
	System::String^ Temp_297 = nullptr;
	System::String^ Temp_298 = nullptr;
	System::String^ Temp_299 = nullptr;
	System::String^ Temp_300 = nullptr;
	System::String^ Temp_301 = nullptr;
	System::String^ Temp_302 = nullptr;
	System::String^ Temp_303 = nullptr;
	System::String^ Temp_304 = nullptr;
	System::String^ Temp_305 = nullptr;
	System::String^ Temp_306 = nullptr;
	System::String^ Temp_307 = nullptr;
	System::String^ Temp_308 = nullptr;
	System::String^ Temp_309 = nullptr;
	System::String^ Temp_310 = nullptr;
	System::Boolean Temp_311 = false;
	System::Boolean Temp_312 = false;
	System::String^ Temp_313 = nullptr;
	System::String^ Temp_314 = nullptr;
	System::Boolean Temp_315 = false;
	Reflector::CodeModel::IType^ Temp_316 = nullptr;
	Reflector::CodeModel::IType^ Temp_317 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_318 = nullptr;
	Reflector::CodeModel::IType^ Temp_319 = nullptr;
	System::String^ Temp_320 = nullptr;
	System::String^ Temp_321 = nullptr;
	System::Boolean Temp_322 = false;
	System::Globalization::CultureInfo^ Temp_323 = nullptr;
	System::String^ Temp_324 = nullptr;
	array<System::Object^>^ Temp_325 = nullptr;
	System::Type^ Temp_326 = nullptr;
	System::String^ Temp_327 = nullptr;
	System::String^ Temp_328 = nullptr;
	System::NotSupportedException^ Temp_329 = nullptr;
	System::Collections::Hashtable^ Temp_330 = nullptr;
	//local variables.
	Reflector::CodeModel::IArgumentReferenceExpression^ V_0 = nullptr;
	Reflector::CodeModel::IParameterDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IFieldReferenceExpression^ V_2 = nullptr;
	Reflector::CodeModel::IPropertyReferenceExpression^ V_3 = nullptr;
	Reflector::CodeModel::IMethodInvokeExpression^ V_4 = nullptr;
	Reflector::CodeModel::IMethodReferenceExpression^ V_5 = nullptr;
	Reflector::CodeModel::ITypeReferenceExpression^ V_6 = nullptr;
	Reflector::CodeModel::IThisReferenceExpression^ V_7 = nullptr;
	Reflector::CodeModel::IBaseReferenceExpression^ V_8 = nullptr;
	Reflector::CodeModel::IVariableDeclaration^ V_9 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ V_10 = nullptr;
	Reflector::CodeModel::IVariableDeclarationExpression^ V_11 = nullptr;
	Reflector::CodeModel::IType^ V_12 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_13 = nullptr;
	Reflector::CodeModel::IPointerType^ V_14 = nullptr;
	Reflector::CodeModel::IPointerType^ V_15 = nullptr;
	Reflector::CodeModel::ILiteralExpression^ V_16 = nullptr;
	Reflector::CodeModel::IUnaryExpression^ V_17 = nullptr;
	Reflector::CodeModel::IBinaryExpression^ V_18 = nullptr;
	Reflector::CodeModel::IType^ V_19 = nullptr;
	Reflector::CodeModel::IType^ V_20 = nullptr;
	Reflector::CodeModel::IType^ V_21 = nullptr;
	Reflector::CodeModel::IObjectCreateExpression^ V_22 = nullptr;
	Reflector::CodeModel::IArrayIndexerExpression^ V_23 = nullptr;
	Reflector::CodeModel::IType^ V_24 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_25 = nullptr;
	Reflector::CodeModel::IArrayType^ V_26 = nullptr;
	Reflector::CodeModel::IPointerType^ V_27 = nullptr;
	Reflector::CodeModel::IPropertyIndexerExpression^ V_28 = nullptr;
	Reflector::CodeModel::IType^ V_29 = nullptr;
	Reflector::CodeModel::IConditionExpression^ V_30 = nullptr;
	Reflector::CodeModel::INullCoalescingExpression^ V_31 = nullptr;
	Reflector::CodeModel::IAddressDereferenceExpression^ V_32 = nullptr;
	Reflector::CodeModel::IType^ V_33 = nullptr;
	Reflector::CodeModel::IPointerType^ V_34 = nullptr;
	Reflector::CodeModel::IAddressOfExpression^ V_35 = nullptr;
	Reflector::CodeModel::IPointerType^ V_36 = nullptr;
	Reflector::CodeModel::IAddressReferenceExpression^ V_37 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_38 = nullptr;
	Reflector::CodeModel::IAddressOutExpression^ V_39 = nullptr;
	Reflector::CodeModel::IReferenceType^ V_40 = nullptr;
	Reflector::CodeModel::ITypeOfExpression^ V_41 = nullptr;
	Reflector::CodeModel::IFieldOfExpression^ V_42 = nullptr;
	Reflector::CodeModel::IMethodOfExpression^ V_43 = nullptr;
	Reflector::CodeModel::ISizeOfExpression^ V_44 = nullptr;
	Reflector::CodeModel::ICanCastExpression^ V_45 = nullptr;
	Reflector::CodeModel::ICastExpression^ V_46 = nullptr;
	Reflector::CodeModel::ITryCastExpression^ V_47 = nullptr;
	Reflector::CodeModel::IArrayCreateExpression^ V_48 = nullptr;
	Reflector::CodeModel::IArrayType^ V_49 = nullptr;
	Reflector::CodeModel::IDelegateCreateExpression^ V_50 = nullptr;
	Reflector::CodeModel::IStackAllocateExpression^ V_51 = nullptr;
	Reflector::CodeModel::IAssignExpression^ V_52 = nullptr;
	Reflector::CodeModel::ITypeOfTypedReferenceExpression^ V_53 = nullptr;
	Reflector::CodeModel::IValueOfTypedReferenceExpression^ V_54 = nullptr;
	Reflector::CodeModel::ITypedReferenceCreateExpression^ V_55 = nullptr;
	Reflector::CodeModel::ISnippetExpression^ V_56 = nullptr;
	Reflector::CodeModel::IArgumentListExpression^ V_57 = nullptr;
	Reflector::CodeModel::IObjectInitializeExpression^ V_58 = nullptr;
	Reflector::CodeModel::IGenericDefaultExpression^ V_59 = nullptr;
	System::Object^ V_60 = nullptr;
	array<System::Object^>^ V_61 = nullptr;
	Reflector::CodeModel::UnaryOperator V_62 = (Reflector::CodeModel::UnaryOperator)0;
	Reflector::CodeModel::BinaryOperator V_63 = (Reflector::CodeModel::BinaryOperator)0;
	System::Int32 V_64 = 0;
	System::Int32 V_65 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xd
	IL_0005:            V_65=13;                                                    //stloc				V_65
	IL_0009:                                                                        //ldc.i4				0xa4
	IL_000e:            V_64=164;                                                   //stloc				V_64
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_033a;                                               //br				IL_033a
	IL_0019:                                                                        //ldloc				V_64
	IL_001d:            switch(V_64){case 0:goto IL_15a0;case 1:goto IL_1cd1;case 2:goto IL_10d0;case 3:goto IL_1b7c;case 4:goto IL_1f21;case 5:goto IL_0ee1;case 6:goto IL_1819;case 7:goto IL_0564;case 8:goto IL_1635;case 9:goto IL_089d;case 10:goto IL_0f91;case 11:goto IL_0aae;case 12:goto IL_21e8;case 13:goto IL_12d4;case 14:goto IL_03f6;case 15:goto IL_17e3;case 16:goto IL_1bd4;case 17:goto IL_14eb;case 18:goto IL_1edc;case 19:goto IL_1741;case 20:goto IL_2053;case 21:goto IL_18ac;case 22:goto IL_0968;case 23:goto IL_0523;case 24:goto IL_206e;case 25:goto IL_07f0;case 26:goto IL_0692;case 27:goto IL_1d37;case 28:goto IL_1d8f;case 29:goto IL_0eab;case 30:goto IL_1c0a;case 31:goto IL_0735;case 32:goto IL_040b;case 33:goto IL_097c;case 34:goto IL_0fd0;case 35:goto IL_08fa;case 36:goto IL_2156;case 37:goto IL_1f79;case 38:goto IL_043b;case 39:goto IL_09ac;case 40:goto IL_221e;case 41:goto IL_1b05;case 42:goto IL_1ce4;case 43:goto IL_1064;case 44:goto IL_219b;case 45:goto IL_0676;case 46:goto IL_130a;case 47:goto IL_0ae4;case 48:goto IL_057f;case 49:goto IL_06f7;case 50:goto IL_1a54;case 51:goto IL_090d;case 52:goto IL_1488;case 53:goto IL_14a2;case 54:goto IL_0f3f;case 55:goto IL_216b;case 56:goto IL_0840;case 57:goto IL_1577;case 58:goto IL_0661;case 59:goto IL_0c07;case 60:goto IL_1445;case 61:goto IL_1f0c;case 62:goto IL_1389;case 63:goto IL_0b55;case 64:goto IL_0a48;case 65:goto IL_186a;case 66:goto IL_1b61;case 67:goto IL_213b;case 68:goto IL_104f;case 69:goto IL_1541;case 70:goto IL_1bc1;case 71:goto IL_20da;case 72:goto IL_2297;case 73:goto IL_1f43;case 74:goto IL_0456;case 75:goto IL_0ccf;case 76:goto IL_0c3d;case 77:goto IL_08ca;case 78:goto IL_0f7c;case 79:goto IL_172e;case 80:goto IL_1d7a;case 81:goto IL_0367;case 82:goto IL_0a33;case 83:goto IL_0854;case 84:goto IL_1c8c;case 85:goto IL_0626;case 86:goto IL_0826;case 87:goto IL_15b5;case 88:goto IL_20ef;case 89:goto IL_1834;case 90:goto IL_0bf4;case 91:goto IL_04ed;case 92:goto IL_1340;case 93:goto IL_0db7;case 94:goto IL_1e96;case 95:goto IL_0ded;case 96:goto IL_1a1e;case 97:goto IL_1ad8;case 98:goto IL_0da4;case 99:goto IL_109a;case 100:goto IL_2186;case 101:goto IL_19db;case 102:goto IL_08e5;case 103:goto IL_13ec;case 104:goto IL_18f1;case 105:goto IL_05f0;case 106:goto IL_1af3;case 107:goto IL_0e0e;case 108:goto IL_0394;case 109:goto IL_0a78;case 110:goto IL_16f8;case 111:goto IL_1430;case 112:goto IL_1b91;case 113:goto IL_1c4e;case 114:goto IL_0867;case 115:goto IL_1921;case 116:goto IL_0ba8;case 117:goto IL_1b18;case 118:goto IL_1e5c;case 119:goto IL_17d0;case 120:goto IL_13d7;case 121:goto IL_1bac;case 122:goto IL_048c;case 123:goto IL_2083;case 124:goto IL_17b6;case 125:goto IL_19f6;case 126:goto IL_0bbd;case 127:goto IL_1777;case 128:goto IL_1906;case 129:goto IL_1cbc;case 130:goto IL_20bf;case 131:goto IL_0a63;case 132:goto IL_2239;case 133:goto IL_1dcd;case 134:goto IL_1897;case 135:goto IL_0bd0;case 136:goto IL_1415;case 137:goto IL_2039;case 138:goto IL_1e6f;case 139:goto IL_0766;case 140:goto IL_1460;case 141:goto IL_1a93;case 142:goto IL_1e26;case 143:goto IL_224e;case 144:goto IL_15fa;case 145:goto IL_1de2;case 146:goto IL_1506;case 147:goto IL_0c99;case 148:goto IL_0c50;case 149:goto IL_0c86;case 150:goto IL_1012;case 151:goto IL_129e;case 152:goto IL_0b6a;case 153:goto IL_15e8;case 154:goto IL_1475;case 155:goto IL_0e98;case 156:goto IL_0426;case 157:goto IL_0997;case 158:goto IL_1ef1;case 159:goto IL_0797;case 160:goto IL_0943;case 161:goto IL_1ca1;case 162:goto IL_1650;case 163:goto IL_1353;case 164:goto IL_0014;case 165:goto IL_1620;case 166:goto IL_1aa8;case 167:goto IL_2261;case 168:goto IL_1665;case 169:goto IL_0d05;case 170:goto IL_0594;case 171:goto IL_1957;case 172:goto IL_14b5;case 173:goto IL_09e2;case 174:goto IL_151b;case 175:goto IL_0d3b;case 176:goto IL_19c6;case 177:goto IL_1b2b;case 178:goto IL_0551;case 179:goto IL_074a;case 180:goto IL_0a18;case 181:goto IL_08b0;case 182:goto IL_18c8;case 183:goto IL_0354;case 184:goto IL_0e4f;case 185:goto IL_0d6e;case 186:goto IL_0fb6;case 187:goto IL_1ac3;case 188:goto IL_0e62;case 189:goto IL_053d;case 190:goto IL_0f1b;case 191:goto IL_1024;case 192:goto IL_1a0b;case 193:goto IL_152e;case 194:goto IL_1275;case 195:goto IL_0381;case 196:goto IL_2105;case 197:goto IL_20aa;};//switch				(IL_15a0,IL_1cd1,IL_10d0,IL_1b7c,IL_1f21,IL_0ee1,IL_1819,IL_0564,IL_1635,IL_089d,IL_0f91,IL_0aae,IL_21e8,IL_12d4,IL_03f6,IL_17e3,IL_1bd4,IL_14eb,IL_1edc,IL_1741,IL_2053,IL_18ac,IL_0968,IL_0523,IL_206e,IL_07f0,IL_0692,IL_1d37,IL_1d8f,IL_0eab,IL_1c0a,IL_0735,IL_040b,IL_097c,IL_0fd0,IL_08fa,IL_2156,IL_1f79,IL_043b,IL_09ac,IL_221e,IL_1b05,IL_1ce4,IL_1064,IL_219b,IL_0676,IL_130a,IL_0ae4,IL_057f,IL_06f7,IL_1a54,IL_090d,IL_1488,IL_14a2,IL_0f3f,IL_216b,IL_0840,IL_1577,IL_0661,IL_0c07,IL_1445,IL_1f0c,IL_1389,IL_0b55,IL_0a48,IL_186a,IL_1b61,IL_213b,IL_104f,IL_1541,IL_1bc1,IL_20da,IL_2297,IL_1f43,IL_0456,IL_0ccf,IL_0c3d,IL_08ca,IL_0f7c,IL_172e,IL_1d7a,IL_0367,IL_0a33,IL_0854,IL_1c8c,IL_0626,IL_0826,IL_15b5,IL_20ef,IL_1834,IL_0bf4,IL_04ed,IL_1340,IL_0db7,IL_1e96,IL_0ded,IL_1a1e,IL_1ad8,IL_0da4,IL_109a,IL_2186,IL_19db,IL_08e5,IL_13ec,IL_18f1,IL_05f0,IL_1af3,IL_0e0e,IL_0394,IL_0a78,IL_16f8,IL_1430,IL_1b91,IL_1c4e,IL_0867,IL_1921,IL_0ba8,IL_1b18,IL_1e5c,IL_17d0,IL_13d7,IL_1bac,IL_048c,IL_2083,IL_17b6,IL_19f6,IL_0bbd,IL_1777,IL_1906,IL_1cbc,IL_20bf,IL_0a63,IL_2239,IL_1dcd,IL_1897,IL_0bd0,IL_1415,IL_2039,IL_1e6f,IL_0766,IL_1460,IL_1a93,IL_1e26,IL_224e,IL_15fa,IL_1de2,IL_1506,IL_0c99,IL_0c50,IL_0c86,IL_1012,IL_129e,IL_0b6a,IL_15e8,IL_1475,IL_0e98,IL_0426,IL_0997,IL_1ef1,IL_0797,IL_0943,IL_1ca1,IL_1650,IL_1353,IL_0014,IL_1620,IL_1aa8,IL_2261,IL_1665,IL_0d05,IL_0594,IL_1957,IL_14b5,IL_09e2,IL_151b,IL_0d3b,IL_19c6,IL_1b2b,IL_0551,IL_074a,IL_0a18,IL_08b0,IL_18c8,IL_0354,IL_0e4f,IL_0d6e,IL_0fb6,IL_1ac3,IL_0e62,IL_053d,IL_0f1b,IL_1024,IL_1a0b,IL_152e,IL_1275,IL_0381,IL_2105,IL_20aa)
	IL_033a:                                                                        //volatile.
	IL_033c:            Temp_330=Root::T_x188::F_x113;                              //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x113
	IL_0341:            if(Temp_330!=nullptr)goto IL_0528;                          //brtrue				IL_0528
	IL_0346:                                                                        //ldc.i4				0xb7
	IL_034b:            V_64=183;                                                   //stloc				V_64
	IL_034f:            /*goto IL_0019;*/goto IL_0354;                              //br				IL_0019
	IL_0354:            goto IL_10e3;                                               //br				IL_10e3
	IL_0359:                                                                        //ldc.i4				0x51
	IL_035e:            V_64=81;                                                    //stloc				V_64
	IL_0362:            /*goto IL_0019;*/goto IL_0367;                              //br				IL_0019
	IL_0367:                                                                        //ldloc.s				V_30
	IL_0369:            Temp_166=V_30->Then;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_036e:            if(Temp_166==nullptr)goto IL_147a;                          //brfalse				IL_147a
	IL_0373:                                                                        //ldc.i4				0xc3
	IL_0378:            V_64=195;                                                   //stloc				V_64
	IL_037c:            /*goto IL_0019;*/goto IL_0381;                              //br				IL_0019
	IL_0381:            goto IL_18cd;                                               //br				IL_18cd
	IL_0386:                                                                        //ldc.i4				0x6c
	IL_038b:            V_64=108;                                                   //stloc				V_64
	IL_038f:            /*goto IL_0019;*/goto IL_0394;                              //br				IL_0019
	IL_0394:            goto IL_128d;                                               //br				IL_128d
	IL_0399:                                                                        //ldarg.1
	IL_039a:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_039f:                                                                        //ldloc				V_65
	IL_03a3:            Temp_85=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03a8:                                                                        //ldstr				L"\x692A\x542C\x5B2E\x5430"
	IL_03ad:                                                                        //ldloc				V_65
	IL_03b1:            Temp_86=a(L"\x692A\x542C\x5B2E\x5430",V_65);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03b6:            Temp_87=Root::T_x183::M_x1(A_1,Temp_85,Temp_86);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_03bb:            return safe_cast<Reflector::CodeModel::IType^>(Temp_87);    //ret
	IL_03bc:                                                                        //ldarg.1
	IL_03bd:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x5B3C\x533E\x2440\x2042\x3144\x2E46\x2648\x254A"
	IL_03c2:                                                                        //ldloc				V_65
	IL_03c6:            Temp_196=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x5B3C\x533E\x2440\x2042\x3144\x2E46\x2648\x254A",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03cb:                                                                        //ldstr				L"\x6D2A\x442C\x4A2E\x5D30\x5732\x7C34\x5936\x5F38\x543A"
	IL_03d0:                                                                        //ldloc				V_65
	IL_03d4:            Temp_197=a(L"\x6D2A\x442C\x4A2E\x5D30\x5732\x7C34\x5936\x5F38\x543A",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d9:            Temp_198=Root::T_x183::M_x1(A_1,Temp_196,Temp_197);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_03de:            return safe_cast<Reflector::CodeModel::IType^>(Temp_198);   //ret
	IL_03df:                                                                        //ldloc.s				V_12
	IL_03e1:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_03e6:            V_13=dynamic_cast<Reflector::CodeModel::IReferenceType^>(V_12);//stloc.s				V_13
	IL_03e8:                                                                        //ldc.i4				0xe
	IL_03ed:            V_64=14;                                                    //stloc				V_64
	IL_03f1:            /*goto IL_0019;*/goto IL_03f6;                              //br				IL_0019
	IL_03f6:                                                                        //ldloc.s				V_13
	IL_03f8:            if(V_13==nullptr)goto IL_09d4;                              //brfalse				IL_09d4
	IL_03fd:                                                                        //ldc.i4				0x20
	IL_0402:            V_64=32;                                                    //stloc				V_64
	IL_0406:            /*goto IL_0019;*/goto IL_040b;                              //br				IL_0019
	IL_040b:            goto IL_0cd4;                                               //br				IL_0cd4
	IL_0410:                                                                        //ldarg.0
	IL_0411:                                                                        //isinst				Reflector::CodeModel::IPropertyIndexerExpression
	IL_0416:            V_28=dynamic_cast<Reflector::CodeModel::IPropertyIndexerExpression^>(A_0);//stloc.s				V_28
	IL_0418:                                                                        //ldc.i4				0x9c
	IL_041d:            V_64=156;                                                   //stloc				V_64
	IL_0421:            /*goto IL_0019;*/goto IL_0426;                              //br				IL_0019
	IL_0426:                                                                        //ldloc.s				V_28
	IL_0428:            if(V_28==nullptr)goto IL_15d2;                              //brfalse				IL_15d2
	IL_042d:                                                                        //ldc.i4				0x26
	IL_0432:            V_64=38;                                                    //stloc				V_64
	IL_0436:            /*goto IL_0019;*/goto IL_043b;                              //br				IL_0019
	IL_043b:            goto IL_16b5;                                               //br				IL_16b5
	IL_0440:                                                                        //ldloc.s				V_51
	IL_0442:            Temp_195=V_51->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IStackAllocateExpression::get_Type()
	IL_0447:            return Temp_195;                                            //ret
	IL_0448:                                                                        //ldc.i4				0x4a
	IL_044d:            V_64=74;                                                    //stloc				V_64
	IL_0451:            /*goto IL_0019;*/goto IL_0456;                              //br				IL_0019
	IL_0456:                                                                        //ldloc.s				V_21
	IL_0458:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_045d:                                                                        //ldloc				V_65
	IL_0461:            Temp_163=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0466:                                                                        //ldstr				L"\x692A\x542C\x5B2E\x5430"
	IL_046b:                                                                        //ldloc				V_65
	IL_046f:            Temp_164=a(L"\x692A\x542C\x5B2E\x5430",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0474:            Temp_165=Root::T_x183::M_x1(V_21,Temp_163,Temp_164);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0479:            if(Temp_165)goto IL_1df5;                                   //brtrue				IL_1df5
	IL_047e:                                                                        //ldc.i4				0x7a
	IL_0483:            V_64=122;                                                   //stloc				V_64
	IL_0487:            /*goto IL_0019;*/goto IL_048c;                              //br				IL_0019
	IL_048c:            goto IL_0e9d;                                               //br				IL_0e9d
	IL_0491:                                                                        //ldarg.1
	IL_0492:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0497:                                                                        //ldloc				V_65
	IL_049b:            Temp_103=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04a0:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0532\x0134"
	IL_04a5:                                                                        //ldloc				V_65
	IL_04a9:            Temp_104=a(L"\x7E2A\x642C\x412E\x4530\x0532\x0134",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04ae:            Temp_105=Root::T_x183::M_x1(A_1,Temp_103,Temp_104);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_04b3:            return safe_cast<Reflector::CodeModel::IType^>(Temp_105);   //ret
	IL_04b4:                                                                        //ldloc.s				V_47
	IL_04b6:            Temp_224=V_47->TargetType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITryCastExpression::get_TargetType()
	IL_04bb:            return Temp_224;                                            //ret
	IL_04bc:                                                                        //ldarg.1
	IL_04bd:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_04c2:                                                                        //ldloc				V_65
	IL_04c6:            Temp_122=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04cb:                                                                        //ldstr				L"\x792A\x582C\x412E\x4530\x5A32\x5834\x5236\x7838\x493A\x5A3C\x4A3E\x2C40\x2642\x2B44\x3346\x0148\x2A4A\x234C\x2B4E\x3D50\x3652"
	IL_04d0:                                                                        //ldloc				V_65
	IL_04d4:            Temp_123=a(L"\x792A\x582C\x412E\x4530\x5A32\x5834\x5236\x7838\x493A\x5A3C\x4A3E\x2C40\x2642\x2B44\x3346\x0148\x2A4A\x234C\x2B4E\x3D50\x3652",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04d9:            Temp_124=Root::T_x183::M_x1(A_1,Temp_122,Temp_123);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_04de:            return safe_cast<Reflector::CodeModel::IType^>(Temp_124);   //ret
	IL_04df:                                                                        //ldc.i4				0x5b
	IL_04e4:            V_64=91;                                                    //stloc				V_64
	IL_04e8:            /*goto IL_0019;*/goto IL_04ed;                              //br				IL_0019
	IL_04ed:                                                                        //ldloc.s				V_20
	IL_04ef:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_04f4:                                                                        //ldloc				V_65
	IL_04f8:            Temp_177=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04fd:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_0502:                                                                        //ldloc				V_65
	IL_0506:            Temp_178=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_050b:            Temp_179=Root::T_x183::M_x1(V_20,Temp_177,Temp_178);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0510:            if(!Temp_179)goto IL_1fe2;                                  //brfalse				IL_1fe2
	IL_0515:                                                                        //ldc.i4				0x17
	IL_051a:            V_64=23;                                                    //stloc				V_64
	IL_051e:            /*goto IL_0019;*/goto IL_0523;                              //br				IL_0019
	IL_0523:            goto IL_1fa1;                                               //br				IL_1fa1
	IL_0528:                                                                        //ldarg.0
	IL_0529:                                                                        //isinst				Reflector::CodeModel::IArgumentReferenceExpression
	IL_052e:            V_0=dynamic_cast<Reflector::CodeModel::IArgumentReferenceExpression^>(A_0);//stloc.0
	IL_052f:                                                                        //ldc.i4				0xbd
	IL_0534:            V_64=189;                                                   //stloc				V_64
	IL_0538:            /*goto IL_0019;*/goto IL_053d;                              //br				IL_0019
	IL_053d:                                                                        //ldloc.0
	IL_053e:            if(V_0==nullptr)goto IL_0953;                               //brfalse				IL_0953
	IL_0543:                                                                        //ldc.i4				0xb2
	IL_0548:            V_64=178;                                                   //stloc				V_64
	IL_054c:            /*goto IL_0019;*/goto IL_0551;                              //br				IL_0019
	IL_0551:            goto IL_127a;                                               //br				IL_127a
	IL_0556:                                                                        //ldc.i4				0x7
	IL_055b:            V_64=7;                                                     //stloc				V_64
	IL_055f:            /*goto IL_0019;*/goto IL_0564;                              //br				IL_0019
	IL_0564:            goto IL_1678;                                               //br				IL_1678
	IL_0569:                                                                        //ldarg.0
	IL_056a:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_056f:            V_16=dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0);//stloc.s				V_16
	IL_0571:                                                                        //ldc.i4				0x30
	IL_0576:            V_64=48;                                                    //stloc				V_64
	IL_057a:            /*goto IL_0019;*/goto IL_057f;                              //br				IL_0019
	IL_057f:                                                                        //ldloc.s				V_16
	IL_0581:            if(V_16==nullptr)goto IL_2223;                              //brfalse				IL_2223
	IL_0586:                                                                        //ldc.i4				0xaa
	IL_058b:            V_64=170;                                                   //stloc				V_64
	IL_058f:            /*goto IL_0019;*/goto IL_0594;                              //br				IL_0019
	IL_0594:            goto IL_202b;                                               //br				IL_202b
	IL_0599:                                                                        //ldarg.1
	IL_059a:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_059f:                                                                        //ldloc				V_65
	IL_05a3:            Temp_97=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05a8:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0032\x0734"
	IL_05ad:                                                                        //ldloc				V_65
	IL_05b1:            Temp_98=a(L"\x7E2A\x642C\x412E\x4530\x0032\x0734",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05b6:            Temp_99=Root::T_x183::M_x1(A_1,Temp_97,Temp_98);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_05bb:            return safe_cast<Reflector::CodeModel::IType^>(Temp_99);    //ret
	IL_05bc:                                                                        //ldloc.s				V_50
	IL_05be:            Temp_140=V_50->DelegateType;                                //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::IDelegateCreateExpression::get_DelegateType()
	IL_05c3:            return safe_cast<Reflector::CodeModel::IType^>(Temp_140);   //ret
	IL_05c4:            Temp_157=gcnew Reflector::CodeModel::Memory::ReferenceType();//newobj				void Reflector::CodeModel::Memory::ReferenceType::.ctor()
	IL_05c9:            V_40=safe_cast<Reflector::CodeModel::IReferenceType^>(Temp_157);//stloc.s				V_40
	IL_05cb:                                                                        //ldloc.s				V_40
	IL_05cd:                                                                        //ldloc.s				V_39
	IL_05cf:            Temp_158=V_39->Expression;                                  //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOutExpression::get_Expression()
	IL_05d4:                                                                        //ldarg.1
	IL_05d5:            Temp_159=Root::T_x183::M_x1(Temp_158,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_05da:            V_40->ElementType=Temp_159;                                 //callvirt				void Reflector::CodeModel::IReferenceType::set_ElementType(Reflector::CodeModel::IType^)
	IL_05df:                                                                        //ldloc.s				V_40
	IL_05e1:            return safe_cast<Reflector::CodeModel::IType^>(V_40);       //ret
	IL_05e2:                                                                        //ldc.i4				0x69
	IL_05e7:            V_64=105;                                                   //stloc				V_64
	IL_05eb:            /*goto IL_0019;*/goto IL_05f0;                              //br				IL_0019
	IL_05f0:                                                                        //ldloc.s				V_20
	IL_05f2:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_05f7:                                                                        //ldloc				V_65
	IL_05fb:            Temp_199=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0600:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0532\x0134"
	IL_0605:                                                                        //ldloc				V_65
	IL_0609:            Temp_200=a(L"\x7E2A\x642C\x412E\x4530\x0532\x0134",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_060e:            Temp_201=Root::T_x183::M_x1(V_20,Temp_199,Temp_200);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0613:            if(!Temp_201)goto IL_1b1d;                                  //brfalse				IL_1b1d
	IL_0618:                                                                        //ldc.i4				0x55
	IL_061d:            V_64=85;                                                    //stloc				V_64
	IL_0621:            /*goto IL_0019;*/goto IL_0626;                              //br				IL_0019
	IL_0626:            goto IL_0628;                                               //br.s				IL_0628
	IL_0628:                                                                        //ldarg.1
	IL_0629:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_062e:                                                                        //ldloc				V_65
	IL_0632:            Temp_24=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0637:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0532\x0134"
	IL_063c:                                                                        //ldloc				V_65
	IL_0640:            Temp_25=a(L"\x7E2A\x642C\x412E\x4530\x0532\x0134",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0645:            Temp_26=Root::T_x183::M_x1(A_1,Temp_24,Temp_25);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_064a:            return safe_cast<Reflector::CodeModel::IType^>(Temp_26);    //ret
	IL_064b:                                                                        //ldarg.0
	IL_064c:                                                                        //isinst				Reflector::CodeModel::IArrayIndexerExpression
	IL_0651:            V_23=dynamic_cast<Reflector::CodeModel::IArrayIndexerExpression^>(A_0);//stloc.s				V_23
	IL_0653:                                                                        //ldc.i4				0x3a
	IL_0658:            V_64=58;                                                    //stloc				V_64
	IL_065c:            /*goto IL_0019;*/goto IL_0661;                              //br				IL_0019
	IL_0661:                                                                        //ldloc.s				V_23
	IL_0663:            if(V_23==nullptr)goto IL_0410;                              //brfalse				IL_0410
	IL_0668:                                                                        //ldc.i4				0x2d
	IL_066d:            V_64=45;                                                    //stloc				V_64
	IL_0671:            /*goto IL_0019;*/goto IL_0676;                              //br				IL_0019
	IL_0676:            goto IL_1029;                                               //br				IL_1029
	IL_067b:                                                                        //ldloc.s				V_18
	IL_067d:            Temp_144=V_18->Operator;                                    //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0682:            V_63=Temp_144;                                              //stloc.s				V_63
	IL_0684:                                                                        //ldc.i4				0x1a
	IL_0689:            V_64=26;                                                    //stloc				V_64
	IL_068d:            /*goto IL_0019;*/goto IL_0692;                              //br				IL_0019
	IL_0692:                                                                        //ldloc.s				V_63
	IL_0694:            switch(safe_cast<System::Int32>(V_63)){case 0:goto IL_178a;case 1:goto IL_178a;case 2:goto IL_178a;case 3:goto IL_178a;case 4:goto IL_178a;case 5:goto IL_1f26;case 6:goto IL_1f26;case 7:goto IL_1d3e;case 8:goto IL_1d3e;case 9:goto IL_1d3e;case 10:goto IL_1d3e;case 11:goto IL_178a;case 12:goto IL_178a;case 13:goto IL_178a;case 14:goto IL_1d3e;case 15:goto IL_1d3e;case 16:goto IL_1d3e;case 17:goto IL_1d3e;case 18:goto IL_1d3e;case 19:goto IL_1d3e;};//switch				(IL_178a,IL_178a,IL_178a,IL_178a,IL_178a,IL_1f26,IL_1f26,IL_1d3e,IL_1d3e,IL_1d3e,IL_1d3e,IL_178a,IL_178a,IL_178a,IL_1d3e,IL_1d3e,IL_1d3e,IL_1d3e,IL_1d3e,IL_1d3e)
	IL_06e9:                                                                        //ldc.i4				0x31
	IL_06ee:            V_64=49;                                                    //stloc				V_64
	IL_06f2:            /*goto IL_0019;*/goto IL_06f7;                              //br				IL_0019
	IL_06f7:            goto IL_1b0a;                                               //br				IL_1b0a
	IL_06fc:                                                                        //ldarg.1
	IL_06fd:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0702:                                                                        //ldloc				V_65
	IL_0706:            Temp_88=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_070b:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_0710:                                                                        //ldloc				V_65
	IL_0714:            Temp_89=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0719:            Temp_90=Root::T_x183::M_x1(A_1,Temp_88,Temp_89);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_071e:            return safe_cast<Reflector::CodeModel::IType^>(Temp_90);    //ret
	IL_071f:                                                                        //ldarg.0
	IL_0720:                                                                        //isinst				Reflector::CodeModel::IMethodOfExpression
	IL_0725:            V_43=dynamic_cast<Reflector::CodeModel::IMethodOfExpression^>(A_0);//stloc.s				V_43
	IL_0727:                                                                        //ldc.i4				0x1f
	IL_072c:            V_64=31;                                                    //stloc				V_64
	IL_0730:            /*goto IL_0019;*/goto IL_0735;                              //br				IL_0019
	IL_0735:                                                                        //ldloc.s				V_43
	IL_0737:            if(V_43==nullptr)goto IL_1ef6;                              //brfalse				IL_1ef6
	IL_073c:                                                                        //ldc.i4				0xb3
	IL_0741:            V_64=179;                                                   //stloc				V_64
	IL_0745:            /*goto IL_0019;*/goto IL_074a;                              //br				IL_0019
	IL_074a:            goto IL_0b0c;                                               //br				IL_0b0c
	IL_074f:                                                                        //ldloc.s				V_17
	IL_0751:            Temp_240=V_17->Operator;                                    //callvirt				Reflector::CodeModel::UnaryOperator Reflector::CodeModel::IUnaryExpression::get_Operator()
	IL_0756:            V_62=Temp_240;                                              //stloc.s				V_62
	IL_0758:                                                                        //ldc.i4				0x8b
	IL_075d:            V_64=139;                                                   //stloc				V_64
	IL_0761:            /*goto IL_0019;*/goto IL_0766;                              //br				IL_0019
	IL_0766:                                                                        //ldloc.s				V_62
	IL_0768:            switch(safe_cast<System::Int32>(V_62)){case 0:goto IL_1de7;case 1:goto IL_1de7;case 2:goto IL_1de7;case 3:goto IL_1de7;case 4:goto IL_1de7;case 5:goto IL_1de7;case 6:goto IL_1de7;};//switch				(IL_1de7,IL_1de7,IL_1de7,IL_1de7,IL_1de7,IL_1de7,IL_1de7)
	IL_0789:                                                                        //ldc.i4				0x9f
	IL_078e:            V_64=159;                                                   //stloc				V_64
	IL_0792:            /*goto IL_0019;*/goto IL_0797;                              //br				IL_0019
	IL_0797:            goto IL_1520;                                               //br				IL_1520
	IL_079c:                                                                        //ldarg.1
	IL_079d:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_07a2:                                                                        //ldloc				V_65
	IL_07a6:            Temp_112=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07ab:                                                                        //ldstr				L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36"
	IL_07b0:                                                                        //ldloc				V_65
	IL_07b4:            Temp_113=a(L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07b9:            Temp_114=Root::T_x183::M_x1(A_1,Temp_112,Temp_113);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_07be:            return safe_cast<Reflector::CodeModel::IType^>(Temp_114);   //ret
	IL_07bf:                                                                        //ldarg.1
	IL_07c0:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_07c5:                                                                        //ldloc				V_65
	IL_07c9:            Temp_109=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07ce:                                                                        //ldstr				L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034"
	IL_07d3:                                                                        //ldloc				V_65
	IL_07d7:            Temp_110=a(L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07dc:            Temp_111=Root::T_x183::M_x1(A_1,Temp_109,Temp_110);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_07e1:            return safe_cast<Reflector::CodeModel::IType^>(Temp_111);   //ret
	IL_07e2:                                                                        //ldc.i4				0x19
	IL_07e7:            V_64=25;                                                    //stloc				V_64
	IL_07eb:            /*goto IL_0019;*/goto IL_07f0;                              //br				IL_0019
	IL_07f0:                                                                        //ldloc.s				V_19
	IL_07f2:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_07f7:                                                                        //ldloc				V_65
	IL_07fb:            Temp_43=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0800:                                                                        //ldstr				L"\x692A\x542C\x5B2E\x5430"
	IL_0805:                                                                        //ldloc				V_65
	IL_0809:            Temp_44=a(L"\x692A\x542C\x5B2E\x5430",V_65);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_080e:            Temp_45=Root::T_x183::M_x1(V_19,Temp_43,Temp_44);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0813:            if(Temp_45)goto IL_1bc6;                                    //brtrue				IL_1bc6
	IL_0818:                                                                        //ldc.i4				0x56
	IL_081d:            V_64=86;                                                    //stloc				V_64
	IL_0821:            /*goto IL_0019;*/goto IL_0826;                              //br				IL_0019
	IL_0826:            goto IL_1913;                                               //br				IL_1913
	IL_082b:                                                                        //ldarg.0
	IL_082c:                                                                        //isinst				Reflector::CodeModel::IPropertyReferenceExpression
	IL_0831:            V_3=dynamic_cast<Reflector::CodeModel::IPropertyReferenceExpression^>(A_0);//stloc.3
	IL_0832:                                                                        //ldc.i4				0x38
	IL_0837:            V_64=56;                                                    //stloc				V_64
	IL_083b:            /*goto IL_0019;*/goto IL_0840;                              //br				IL_0019
	IL_0840:                                                                        //ldloc.3
	IL_0841:            if(V_3==nullptr)goto IL_1c76;                               //brfalse				IL_1c76
	IL_0846:                                                                        //ldc.i4				0x53
	IL_084b:            V_64=83;                                                    //stloc				V_64
	IL_084f:            /*goto IL_0019;*/goto IL_0854;                              //br				IL_0019
	IL_0854:            goto IL_0f93;                                               //br				IL_0f93
	IL_0859:                                                                        //ldc.i4				0x72
	IL_085e:            V_64=114;                                                   //stloc				V_64
	IL_0862:            /*goto IL_0019;*/goto IL_0867;                              //br				IL_0019
	IL_0867:                                                                        //ldloc.s				V_19
	IL_0869:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_086e:                                                                        //ldloc				V_65
	IL_0872:            Temp_211=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0877:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_087c:                                                                        //ldloc				V_65
	IL_0880:            Temp_212=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0885:            Temp_213=Root::T_x183::M_x1(V_19,Temp_211,Temp_212);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_088a:            if(Temp_213)goto IL_198d;                                   //brtrue				IL_198d
	IL_088f:                                                                        //ldc.i4				0x9
	IL_0894:            V_64=9;                                                     //stloc				V_64
	IL_0898:            /*goto IL_0019;*/goto IL_089d;                              //br				IL_0019
	IL_089d:            goto IL_1826;                                               //br				IL_1826
	IL_08a2:                                                                        //ldc.i4				0xb5
	IL_08a7:            V_64=181;                                                   //stloc				V_64
	IL_08ab:            /*goto IL_0019;*/goto IL_08b0;                              //br				IL_0019
	IL_08b0:                                                                        //ldloc.s				V_20
	IL_08b2:            Temp_293=Root::T_x183::M_x13(V_20);                         //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_08b7:            if(!Temp_293)goto IL_0f04;                                  //brfalse				IL_0f04
	IL_08bc:                                                                        //ldc.i4				0x4d
	IL_08c1:            V_64=77;                                                    //stloc				V_64
	IL_08c5:            /*goto IL_0019;*/goto IL_08ca;                              //br				IL_0019
	IL_08ca:            goto IL_12fc;                                               //br				IL_12fc
	IL_08cf:                                                                        //ldarg.0
	IL_08d0:                                                                        //isinst				Reflector::CodeModel::IAddressDereferenceExpression
	IL_08d5:            V_32=dynamic_cast<Reflector::CodeModel::IAddressDereferenceExpression^>(A_0);//stloc.s				V_32
	IL_08d7:                                                                        //ldc.i4				0x66
	IL_08dc:            V_64=102;                                                   //stloc				V_64
	IL_08e0:            /*goto IL_0019;*/goto IL_08e5;                              //br				IL_0019
	IL_08e5:                                                                        //ldloc.s				V_32
	IL_08e7:            if(V_32==nullptr)goto IL_14f0;                              //brfalse				IL_14f0
	IL_08ec:                                                                        //ldc.i4				0x23
	IL_08f1:            V_64=35;                                                    //stloc				V_64
	IL_08f5:            /*goto IL_0019;*/goto IL_08fa;                              //br				IL_0019
	IL_08fa:            goto IL_0b2f;                                               //br				IL_0b2f
	IL_08ff:                                                                        //ldc.i4				0x33
	IL_0904:            V_64=51;                                                    //stloc				V_64
	IL_0908:            /*goto IL_0019;*/goto IL_090d;                              //br				IL_0019
	IL_090d:                                                                        //ldloc.s				V_20
	IL_090f:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0914:                                                                        //ldloc				V_65
	IL_0918:            Temp_133=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_091d:                                                                        //ldstr				L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034"
	IL_0922:                                                                        //ldloc				V_65
	IL_0926:            Temp_134=a(L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_092b:            Temp_135=Root::T_x183::M_x1(V_20,Temp_133,Temp_134);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0930:            if(!Temp_135)goto IL_1533;                                  //brfalse				IL_1533
	IL_0935:                                                                        //ldc.i4				0xa0
	IL_093a:            V_64=160;                                                   //stloc				V_64
	IL_093e:            /*goto IL_0019;*/goto IL_0943;                              //br				IL_0019
	IL_0943:            goto IL_0fd5;                                               //br				IL_0fd5
	IL_0948:                                                                        //ldloc.s				V_46
	IL_094a:            Temp_241=V_46->TargetType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ICastExpression::get_TargetType()
	IL_094f:            return Temp_241;                                            //ret
	IL_0950:                                                                        //ldloc.s				V_12
	IL_0952:            return V_12;                                                //ret
	IL_0953:                                                                        //ldarg.0
	IL_0954:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_0959:            V_2=dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0);//stloc.2
	IL_095a:                                                                        //ldc.i4				0x16
	IL_095f:            V_64=22;                                                    //stloc				V_64
	IL_0963:            /*goto IL_0019;*/goto IL_0968;                              //br				IL_0019
	IL_0968:                                                                        //ldloc.2
	IL_0969:            if(V_2==nullptr)goto IL_082b;                               //brfalse				IL_082b
	IL_096e:                                                                        //ldc.i4				0x21
	IL_0973:            V_64=33;                                                    //stloc				V_64
	IL_0977:            /*goto IL_0019;*/goto IL_097c;                              //br				IL_0019
	IL_097c:            goto IL_2088;                                               //br				IL_2088
	IL_0981:                                                                        //ldarg.0
	IL_0982:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_0987:            V_52=dynamic_cast<Reflector::CodeModel::IAssignExpression^>(A_0);//stloc.s				V_52
	IL_0989:                                                                        //ldc.i4				0x9d
	IL_098e:            V_64=157;                                                   //stloc				V_64
	IL_0992:            /*goto IL_0019;*/goto IL_0997;                              //br				IL_0019
	IL_0997:                                                                        //ldloc.s				V_52
	IL_0999:            if(V_52==nullptr)goto IL_163a;                              //brfalse				IL_163a
	IL_099e:                                                                        //ldc.i4				0x27
	IL_09a3:            V_64=39;                                                    //stloc				V_64
	IL_09a7:            /*goto IL_0019;*/goto IL_09ac;                              //br				IL_0019
	IL_09ac:            goto IL_0df2;                                               //br				IL_0df2
	IL_09b1:                                                                        //ldarg.1
	IL_09b2:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_09b7:                                                                        //ldloc				V_65
	IL_09bb:            Temp_106=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09c0:                                                                        //ldstr				L"\x782A\x442C\x412E\x5630\x5F32\x5034"
	IL_09c5:                                                                        //ldloc				V_65
	IL_09c9:            Temp_107=a(L"\x782A\x442C\x412E\x5630\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09ce:            Temp_108=Root::T_x183::M_x1(A_1,Temp_106,Temp_107);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_09d3:            return safe_cast<Reflector::CodeModel::IType^>(Temp_108);   //ret
	IL_09d4:                                                                        //ldc.i4				0xad
	IL_09d9:            V_64=173;                                                   //stloc				V_64
	IL_09dd:            /*goto IL_0019;*/goto IL_09e2;                              //br				IL_0019
	IL_09e2:                                                                        //ldloc.s				V_12
	IL_09e4:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_09e9:                                                                        //ldloc				V_65
	IL_09ed:            Temp_274=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_09f2:                                                                        //ldstr				L"\x782A\x592C\x5D2E\x5830\x5D32\x5234"
	IL_09f7:                                                                        //ldloc				V_65
	IL_09fb:            Temp_275=a(L"\x782A\x592C\x5D2E\x5830\x5D32\x5234",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a00:            Temp_276=Root::T_x183::M_x1(V_12,Temp_274,Temp_275);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0a05:            if(!Temp_276)goto IL_0950;                                  //brfalse				IL_0950
	IL_0a0a:                                                                        //ldc.i4				0xb4
	IL_0a0f:            V_64=180;                                                   //stloc				V_64
	IL_0a13:            /*goto IL_0019;*/goto IL_0a18;                              //br				IL_0019
	IL_0a18:            goto IL_138e;                                               //br				IL_138e
	IL_0a1d:                                                                        //ldarg.0
	IL_0a1e:                                                                        //isinst				Reflector::CodeModel::IAddressReferenceExpression
	IL_0a23:            V_37=dynamic_cast<Reflector::CodeModel::IAddressReferenceExpression^>(A_0);//stloc.s				V_37
	IL_0a25:                                                                        //ldc.i4				0x52
	IL_0a2a:            V_64=82;                                                    //stloc				V_64
	IL_0a2e:            /*goto IL_0019;*/goto IL_0a33;                              //br				IL_0019
	IL_0a33:                                                                        //ldloc.s				V_37
	IL_0a35:            if(V_37==nullptr)goto IL_1b96;                              //brfalse				IL_1b96
	IL_0a3a:                                                                        //ldc.i4				0x40
	IL_0a3f:            V_64=64;                                                    //stloc				V_64
	IL_0a43:            /*goto IL_0019;*/goto IL_0a48;                              //br				IL_0019
	IL_0a48:            goto IL_0ee6;                                               //br				IL_0ee6
	IL_0a4d:                                                                        //ldarg.0
	IL_0a4e:                                                                        //isinst				Reflector::CodeModel::IThisReferenceExpression
	IL_0a53:            V_7=dynamic_cast<Reflector::CodeModel::IThisReferenceExpression^>(A_0);//stloc.s				V_7
	IL_0a55:                                                                        //ldc.i4				0x83
	IL_0a5a:            V_64=131;                                                   //stloc				V_64
	IL_0a5e:            /*goto IL_0019;*/goto IL_0a63;                              //br				IL_0019
	IL_0a63:                                                                        //ldloc.s				V_7
	IL_0a65:            if(V_7==nullptr)goto IL_1881;                               //brfalse				IL_1881
	IL_0a6a:                                                                        //ldc.i4				0x6d
	IL_0a6f:            V_64=109;                                                   //stloc				V_64
	IL_0a73:            /*goto IL_0019;*/goto IL_0a78;                              //br				IL_0019
	IL_0a78:            goto IL_1d3c;                                               //br				IL_1d3c
	IL_0a7d:                                                                        //ldarg.1
	IL_0a7e:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0a83:                                                                        //ldloc				V_65
	IL_0a87:            Temp_39=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a8c:                                                                        //ldstr				L"\x642A\x4F2C\x452E\x5430\x5032\x4134"
	IL_0a91:                                                                        //ldloc				V_65
	IL_0a95:            Temp_40=a(L"\x642A\x4F2C\x452E\x5430\x5032\x4134",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a9a:            Temp_41=Root::T_x183::M_x1(A_1,Temp_39,Temp_40);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0a9f:            return safe_cast<Reflector::CodeModel::IType^>(Temp_41);    //ret
	IL_0aa0:                                                                        //ldc.i4				0xb
	IL_0aa5:            V_64=11;                                                    //stloc				V_64
	IL_0aa9:            /*goto IL_0019;*/goto IL_0aae;                              //br				IL_0019
	IL_0aae:                                                                        //ldloc.s				V_21
	IL_0ab0:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0ab5:                                                                        //ldloc				V_65
	IL_0ab9:            Temp_15=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0abe:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_0ac3:                                                                        //ldloc				V_65
	IL_0ac7:            Temp_16=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0acc:            Temp_17=Root::T_x183::M_x1(V_21,Temp_15,Temp_16);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0ad1:            if(!Temp_17)goto IL_15ff;                                   //brfalse				IL_15ff
	IL_0ad6:                                                                        //ldc.i4				0x2f
	IL_0adb:            V_64=47;                                                    //stloc				V_64
	IL_0adf:            /*goto IL_0019;*/goto IL_0ae4;                              //br				IL_0019
	IL_0ae4:            goto IL_1df5;                                               //br				IL_1df5
	IL_0ae9:                                                                        //ldarg.1
	IL_0aea:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0aef:                                                                        //ldloc				V_65
	IL_0af3:            Temp_94=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0af8:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_0afd:                                                                        //ldloc				V_65
	IL_0b01:            Temp_95=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b06:            Temp_96=Root::T_x183::M_x1(A_1,Temp_94,Temp_95);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0b0b:            return safe_cast<Reflector::CodeModel::IType^>(Temp_96);    //ret
	IL_0b0c:                                                                        //ldarg.1
	IL_0b0d:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x5B3C\x533E\x2440\x2042\x3144\x2E46\x2648\x254A"
	IL_0b12:                                                                        //ldloc				V_65
	IL_0b16:            Temp_286=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6B38\x5E3A\x5B3C\x533E\x2440\x2042\x3144\x2E46\x2648\x254A",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b1b:                                                                        //ldstr				L"\x662A\x482C\x5B2E\x5930\x5C32\x5134\x7536\x5838\x483A\x583C"
	IL_0b20:                                                                        //ldloc				V_65
	IL_0b24:            Temp_287=a(L"\x662A\x482C\x5B2E\x5930\x5C32\x5134\x7536\x5838\x483A\x583C",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b29:            Temp_288=Root::T_x183::M_x1(A_1,Temp_286,Temp_287);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0b2e:            return safe_cast<Reflector::CodeModel::IType^>(Temp_288);   //ret
	IL_0b2f:                                                                        //ldloc.s				V_32
	IL_0b31:            Temp_67=V_32->Expression;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressDereferenceExpression::get_Expression()
	IL_0b36:                                                                        //ldarg.1
	IL_0b37:            Temp_68=Root::T_x183::M_x1(Temp_67,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_0b3c:            V_33=Temp_68;                                               //stloc.s				V_33
	IL_0b3e:                                                                        //ldloc.s				V_33
	IL_0b40:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_0b45:            V_34=dynamic_cast<Reflector::CodeModel::IPointerType^>(V_33);//stloc.s				V_34
	IL_0b47:                                                                        //ldc.i4				0x3f
	IL_0b4c:            V_64=63;                                                    //stloc				V_64
	IL_0b50:            /*goto IL_0019;*/goto IL_0b55;                              //br				IL_0019
	IL_0b55:                                                                        //ldloc.s				V_34
	IL_0b57:            if(V_34==nullptr)goto IL_20f4;                              //brfalse				IL_20f4
	IL_0b5c:                                                                        //ldc.i4				0x98
	IL_0b61:            V_64=152;                                                   //stloc				V_64
	IL_0b65:            /*goto IL_0019;*/goto IL_0b6a;                              //br				IL_0019
	IL_0b6a:            goto IL_0cec;                                               //br				IL_0cec
	IL_0b6f:                                                                        //ldarg.1
	IL_0b70:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0b75:                                                                        //ldloc				V_65
	IL_0b79:            Temp_1=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b7e:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_0b83:                                                                        //ldloc				V_65
	IL_0b87:            Temp_2=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b8c:            Temp_3=Root::T_x183::M_x1(A_1,Temp_1,Temp_2);               //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0b91:            return safe_cast<Reflector::CodeModel::IType^>(Temp_3);     //ret
	IL_0b92:                                                                        //ldarg.0
	IL_0b93:                                                                        //isinst				Reflector::CodeModel::ITryCastExpression
	IL_0b98:            V_47=dynamic_cast<Reflector::CodeModel::ITryCastExpression^>(A_0);//stloc.s				V_47
	IL_0b9a:                                                                        //ldc.i4				0x74
	IL_0b9f:            V_64=116;                                                   //stloc				V_64
	IL_0ba3:            /*goto IL_0019;*/goto IL_0ba8;                              //br				IL_0019
	IL_0ba8:                                                                        //ldloc.s				V_47
	IL_0baa:            if(V_47==nullptr)goto IL_18db;                              //brfalse				IL_18db
	IL_0baf:                                                                        //ldc.i4				0x7e
	IL_0bb4:            V_64=126;                                                   //stloc				V_64
	IL_0bb8:            /*goto IL_0019;*/goto IL_0bbd;                              //br				IL_0019
	IL_0bbd:            goto IL_04b4;                                               //br				IL_04b4
	IL_0bc2:                                                                        //ldc.i4				0x87
	IL_0bc7:            V_64=135;                                                   //stloc				V_64
	IL_0bcb:            /*goto IL_0019;*/goto IL_0bd0;                              //br				IL_0019
	IL_0bd0:                                                                        //volatile.
	IL_0bd2:            Temp_228=Root::T_x188::F_x113;                              //ldsfld				System::Collections::Hashtable^ Root::T_x188 F_x113
	IL_0bd7:            Temp_230=V_60;                                              //ldloc.s				V_60
	IL_0bd9:            Temp_229=Temp_228[Temp_230];                                //call				System::Object^ System::Collections::Hashtable::get_Item(System::Object^)
	IL_0bde:                                                                        //dup
	IL_0bdf:            V_60=Temp_229;                                              //stloc.s				V_60
	IL_0be1:            if(V_60==nullptr)goto IL_1678;                              //brfalse				IL_1678
	IL_0be6:                                                                        //ldc.i4				0x5a
	IL_0beb:            V_64=90;                                                    //stloc				V_64
	IL_0bef:            /*goto IL_0019;*/goto IL_0bf4;                              //br				IL_0019
	IL_0bf4:            goto IL_1cd6;                                               //br				IL_1cd6
	IL_0bf9:                                                                        //ldc.i4				0x3b
	IL_0bfe:            V_64=59;                                                    //stloc				V_64
	IL_0c02:            /*goto IL_0019;*/goto IL_0c07;                              //br				IL_0019
	IL_0c07:                                                                        //ldloc.s				V_21
	IL_0c09:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0c0e:                                                                        //ldloc				V_65
	IL_0c12:            Temp_141=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c17:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0232\x0334"
	IL_0c1c:                                                                        //ldloc				V_65
	IL_0c20:            Temp_142=a(L"\x7E2A\x642C\x412E\x4530\x0232\x0334",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c25:            Temp_143=Root::T_x183::M_x1(V_21,Temp_141,Temp_142);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0c2a:            if(Temp_143)goto IL_1df5;                                   //brtrue				IL_1df5
	IL_0c2f:                                                                        //ldc.i4				0x4c
	IL_0c34:            V_64=76;                                                    //stloc				V_64
	IL_0c38:            /*goto IL_0019;*/goto IL_0c3d;                              //br				IL_0019
	IL_0c3d:            goto IL_0aa0;                                               //br				IL_0aa0
	IL_0c42:                                                                        //ldc.i4				0x94
	IL_0c47:            V_64=148;                                                   //stloc				V_64
	IL_0c4b:            /*goto IL_0019;*/goto IL_0c50;                              //br				IL_0019
	IL_0c50:                                                                        //ldloc.s				V_20
	IL_0c52:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0c57:                                                                        //ldloc				V_65
	IL_0c5b:            Temp_245=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c60:                                                                        //ldstr				L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36"
	IL_0c65:                                                                        //ldloc				V_65
	IL_0c69:            Temp_246=a(L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c6e:            Temp_247=Root::T_x183::M_x1(V_20,Temp_245,Temp_246);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0c73:            if(!Temp_247)goto IL_1a10;                                  //brfalse				IL_1a10
	IL_0c78:                                                                        //ldc.i4				0x95
	IL_0c7d:            V_64=149;                                                   //stloc				V_64
	IL_0c81:            /*goto IL_0019;*/goto IL_0c86;                              //br				IL_0019
	IL_0c86:            goto IL_1069;                                               //br				IL_1069
	IL_0c8b:                                                                        //ldc.i4				0x93
	IL_0c90:            V_64=147;                                                   //stloc				V_64
	IL_0c94:            /*goto IL_0019;*/goto IL_0c99;                              //br				IL_0019
	IL_0c99:                                                                        //ldloc.s				V_20
	IL_0c9b:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0ca0:                                                                        //ldloc				V_65
	IL_0ca4:            Temp_242=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ca9:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0232\x0334"
	IL_0cae:                                                                        //ldloc				V_65
	IL_0cb2:            Temp_243=a(L"\x7E2A\x642C\x412E\x4530\x0232\x0334",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cb7:            Temp_244=Root::T_x183::M_x1(V_20,Temp_242,Temp_243);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0cbc:            if(Temp_244)goto IL_1f7e;                                   //brtrue				IL_1f7e
	IL_0cc1:                                                                        //ldc.i4				0x4b
	IL_0cc6:            V_64=75;                                                    //stloc				V_64
	IL_0cca:            /*goto IL_0019;*/goto IL_0ccf;                              //br				IL_0019
	IL_0ccf:            goto IL_2253;                                               //br				IL_2253
	IL_0cd4:            Temp_63=gcnew Reflector::CodeModel::Memory::PointerType();  //newobj				void Reflector::CodeModel::Memory::PointerType::.ctor()
	IL_0cd9:            V_14=safe_cast<Reflector::CodeModel::IPointerType^>(Temp_63);//stloc.s				V_14
	IL_0cdb:                                                                        //ldloc.s				V_14
	IL_0cdd:                                                                        //ldloc.s				V_13
	IL_0cdf:            Temp_64=V_13->ElementType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_0ce4:            V_14->ElementType=Temp_64;                                  //callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0ce9:                                                                        //ldloc.s				V_14
	IL_0ceb:            return safe_cast<Reflector::CodeModel::IType^>(V_14);       //ret
	IL_0cec:                                                                        //ldloc.s				V_34
	IL_0cee:            Temp_251=V_34->ElementType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_0cf3:            return Temp_251;                                            //ret
	IL_0cf4:                                                                        //ldloc.s				V_19
	IL_0cf6:            return V_19;                                                //ret
	IL_0cf7:                                                                        //ldc.i4				0xa9
	IL_0cfc:            V_64=169;                                                   //stloc				V_64
	IL_0d00:            /*goto IL_0019;*/goto IL_0d05;                              //br				IL_0019
	IL_0d05:                                                                        //ldloc.s				V_19
	IL_0d07:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0d0c:                                                                        //ldloc				V_65
	IL_0d10:            Temp_268=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d15:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0032\x0734"
	IL_0d1a:                                                                        //ldloc				V_65
	IL_0d1e:            Temp_269=a(L"\x7E2A\x642C\x412E\x4530\x0032\x0734",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d23:            Temp_270=Root::T_x183::M_x1(V_19,Temp_268,Temp_269);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0d28:            if(!Temp_270)goto IL_1290;                                  //brfalse				IL_1290
	IL_0d2d:                                                                        //ldc.i4				0xaf
	IL_0d32:            V_64=175;                                                   //stloc				V_64
	IL_0d36:            /*goto IL_0019;*/goto IL_0d3b;                              //br				IL_0019
	IL_0d3b:            goto IL_0d60;                                               //br.s				IL_0d60
	IL_0d3d:                                                                        //ldarg.1
	IL_0d3e:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0d43:                                                                        //ldloc				V_65
	IL_0d47:            Temp_73=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d4c:                                                                        //ldstr				L"\x782A\x442C\x412E\x5630\x5F32\x5034"
	IL_0d51:                                                                        //ldloc				V_65
	IL_0d55:            Temp_74=a(L"\x782A\x442C\x412E\x5630\x5F32\x5034",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d5a:            Temp_75=Root::T_x183::M_x1(A_1,Temp_73,Temp_74);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0d5f:            return safe_cast<Reflector::CodeModel::IType^>(Temp_75);    //ret
	IL_0d60:                                                                        //ldc.i4				0xb9
	IL_0d65:            V_64=185;                                                   //stloc				V_64
	IL_0d69:            /*goto IL_0019;*/goto IL_0d6e;                              //br				IL_0019
	IL_0d6e:                                                                        //ldloc.s				V_20
	IL_0d70:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0d75:                                                                        //ldloc				V_65
	IL_0d79:            Temp_309=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d7e:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_0d83:                                                                        //ldloc				V_65
	IL_0d87:            Temp_310=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d8c:            Temp_311=Root::T_x183::M_x1(V_20,Temp_309,Temp_310);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0d91:            if(Temp_311)goto IL_1fa1;                                   //brtrue				IL_1fa1
	IL_0d96:                                                                        //ldc.i4				0x62
	IL_0d9b:            V_64=98;                                                    //stloc				V_64
	IL_0d9f:            /*goto IL_0019;*/goto IL_0da4;                              //br				IL_0019
	IL_0da4:            goto IL_0e54;                                               //br				IL_0e54
	IL_0da9:                                                                        //ldc.i4				0x5d
	IL_0dae:            V_64=93;                                                    //stloc				V_64
	IL_0db2:            /*goto IL_0019;*/goto IL_0db7;                              //br				IL_0019
	IL_0db7:                                                                        //ldloc.s				V_20
	IL_0db9:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0dbe:                                                                        //ldloc				V_65
	IL_0dc2:            Temp_180=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dc7:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_0dcc:                                                                        //ldloc				V_65
	IL_0dd0:            Temp_181=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0dd5:            Temp_182=Root::T_x183::M_x1(V_20,Temp_180,Temp_181);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0dda:            if(Temp_182)goto IL_1f7e;                                   //brtrue				IL_1f7e
	IL_0ddf:                                                                        //ldc.i4				0x5f
	IL_0de4:            V_64=95;                                                    //stloc				V_64
	IL_0de8:            /*goto IL_0019;*/goto IL_0ded;                              //br				IL_0019
	IL_0ded:            goto IL_0c8b;                                               //br				IL_0c8b
	IL_0df2:                                                                        //ldloc.s				V_52
	IL_0df4:            Temp_71=V_52->Expression;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAssignExpression::get_Expression()
	IL_0df9:                                                                        //ldarg.1
	IL_0dfa:            Temp_72=Root::T_x183::M_x1(Temp_71,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_0dff:            return Temp_72;                                             //ret
	IL_0e00:                                                                        //ldc.i4				0x6b
	IL_0e05:            V_64=107;                                                   //stloc				V_64
	IL_0e09:            /*goto IL_0019;*/goto IL_0e0e;                              //br				IL_0019
	IL_0e0e:                                                                        //ldloc.s				V_19
	IL_0e10:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0e15:                                                                        //ldloc				V_65
	IL_0e19:            Temp_202=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e1e:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_0e23:                                                                        //ldloc				V_65
	IL_0e27:            Temp_203=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e2c:            Temp_204=Root::T_x183::M_x1(V_19,Temp_202,Temp_203);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0e31:            if(Temp_204)goto IL_198d;                                   //brtrue				IL_198d
	IL_0e36:                                                                        //ldc.i4.0
	IL_0e37:                                                                        //dup
	IL_0e38:                                                                        //dup
	IL_0e39:                                                                        //ldc.i4.4
	IL_0e3a:                                                                        //add
	IL_0e3b:                                                                        //bgt				IL_0e37
	IL_0e40:                                                                        //pop
	IL_0e41:                                                                        //ldc.i4				0xb8
	IL_0e46:            V_64=184;                                                   //stloc				V_64
	IL_0e4a:            /*goto IL_0019;*/goto IL_0e4f;                              //br				IL_0019
	IL_0e4f:            goto IL_0859;                                               //br				IL_0859
	IL_0e54:                                                                        //ldc.i4				0xbc
	IL_0e59:            V_64=188;                                                   //stloc				V_64
	IL_0e5d:            /*goto IL_0019;*/goto IL_0e62;                              //br				IL_0019
	IL_0e62:                                                                        //ldloc.s				V_20
	IL_0e64:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0e69:                                                                        //ldloc				V_65
	IL_0e6d:            Temp_313=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e72:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_0e77:                                                                        //ldloc				V_65
	IL_0e7b:            Temp_314=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e80:            Temp_315=Root::T_x183::M_x1(V_20,Temp_313,Temp_314);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0e85:            if(Temp_315)goto IL_1fa1;                                   //brtrue				IL_1fa1
	IL_0e8a:                                                                        //ldc.i4				0x9b
	IL_0e8f:            V_64=155;                                                   //stloc				V_64
	IL_0e93:            /*goto IL_0019;*/goto IL_0e98;                              //br				IL_0019
	IL_0e98:            goto IL_1733;                                               //br				IL_1733
	IL_0e9d:                                                                        //ldc.i4				0x1d
	IL_0ea2:            V_64=29;                                                    //stloc				V_64
	IL_0ea6:            /*goto IL_0019;*/goto IL_0eab;                              //br				IL_0019
	IL_0eab:                                                                        //ldloc.s				V_21
	IL_0ead:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0eb2:                                                                        //ldloc				V_65
	IL_0eb6:            Temp_57=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ebb:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_0ec0:                                                                        //ldloc				V_65
	IL_0ec4:            Temp_58=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ec9:            Temp_59=Root::T_x183::M_x1(V_21,Temp_57,Temp_58);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0ece:            if(Temp_59)goto IL_1df5;                                    //brtrue				IL_1df5
	IL_0ed3:                                                                        //ldc.i4				0x5
	IL_0ed8:            V_64=5;                                                     //stloc				V_64
	IL_0edc:            /*goto IL_0019;*/goto IL_0ee1;                              //br				IL_0019
	IL_0ee1:            goto IL_0bf9;                                               //br				IL_0bf9
	IL_0ee6:            Temp_148=gcnew Reflector::CodeModel::Memory::ReferenceType();//newobj				void Reflector::CodeModel::Memory::ReferenceType::.ctor()
	IL_0eeb:            V_38=safe_cast<Reflector::CodeModel::IReferenceType^>(Temp_148);//stloc.s				V_38
	IL_0eed:                                                                        //ldloc.s				V_38
	IL_0eef:                                                                        //ldloc.s				V_37
	IL_0ef1:            Temp_149=V_37->Expression;                                  //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressReferenceExpression::get_Expression()
	IL_0ef6:                                                                        //ldarg.1
	IL_0ef7:            Temp_150=Root::T_x183::M_x1(Temp_149,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_0efc:            V_38->ElementType=Temp_150;                                 //callvirt				void Reflector::CodeModel::IReferenceType::set_ElementType(Reflector::CodeModel::IType^)
	IL_0f01:                                                                        //ldloc.s				V_38
	IL_0f03:            return safe_cast<Reflector::CodeModel::IType^>(V_38);       //ret
	IL_0f04:                                                                        //ldloc.s				V_18
	IL_0f06:            Temp_208=V_18->Operator;                                    //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0f0b:            V_63=Temp_208;                                              //stloc.s				V_63
	IL_0f0d:                                                                        //ldc.i4				0xbe
	IL_0f12:            V_64=190;                                                   //stloc				V_64
	IL_0f16:            /*goto IL_0019;*/goto IL_0f1b;                              //br				IL_0019
	IL_0f1b:                                                                        //ldloc.s				V_63
	IL_0f1d:                                                                        //ldc.i4.s				11
	IL_0f1f:                                                                        //sub
	IL_0f20:            switch((V_63 - safe_cast<Reflector::CodeModel::BinaryOperator>(11))){case 0:goto IL_0cf4;case 1:goto IL_0cf4;case 2:goto IL_0cf4;};//switch				(IL_0cf4,IL_0cf4,IL_0cf4)
	IL_0f31:                                                                        //ldc.i4				0x36
	IL_0f36:            V_64=54;                                                    //stloc				V_64
	IL_0f3a:            /*goto IL_0019;*/goto IL_0f3f;                              //br				IL_0019
	IL_0f3f:            goto IL_0386;                                               //br				IL_0386
	IL_0f44:                                                                        //ldarg.1
	IL_0f45:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0f4a:                                                                        //ldloc				V_65
	IL_0f4e:            Temp_100=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f53:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_0f58:                                                                        //ldloc				V_65
	IL_0f5c:            Temp_101=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f61:            Temp_102=Root::T_x183::M_x1(A_1,Temp_100,Temp_101);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0f66:            return safe_cast<Reflector::CodeModel::IType^>(Temp_102);   //ret
	IL_0f67:                                                                        //ldarg.1
	IL_0f68:            Temp_42=A_1->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0f6d:            return safe_cast<Reflector::CodeModel::IType^>(Temp_42);    //ret
	IL_0f6e:                                                                        //ldc.i4				0x4e
	IL_0f73:            V_64=78;                                                    //stloc				V_64
	IL_0f77:            /*goto IL_0019;*/goto IL_0f7c;                              //br				IL_0019
	IL_0f7c:                                                                        //ldloc.s				V_9
	IL_0f7e:            if(V_9==nullptr)goto IL_0569;                               //brfalse				IL_0569
	IL_0f83:                                                                        //ldc.i4				0xa
	IL_0f88:            V_64=10;                                                    //stloc				V_64
	IL_0f8c:            /*goto IL_0019;*/goto IL_0f91;                              //br				IL_0019
	IL_0f91:            goto IL_0f9f;                                               //br.s				IL_0f9f
	IL_0f93:                                                                        //ldloc.3
	IL_0f94:            Temp_167=V_3->Property;                                     //callvirt				Reflector::CodeModel::IPropertyReference^ Reflector::CodeModel::IPropertyReferenceExpression::get_Property()
	IL_0f99:            Temp_168=Temp_167->PropertyType;                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPropertyReference::get_PropertyType()
	IL_0f9e:            return Temp_168;                                            //ret
	IL_0f9f:                                                                        //ldloc.s				V_9
	IL_0fa1:            Temp_14=V_9->VariableType;                                  //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IVariableDeclaration::get_VariableType()
	IL_0fa6:            V_12=Temp_14;                                               //stloc.s				V_12
	IL_0fa8:                                                                        //ldc.i4				0xba
	IL_0fad:            V_64=186;                                                   //stloc				V_64
	IL_0fb1:            /*goto IL_0019;*/goto IL_0fb6;                              //br				IL_0019
	IL_0fb6:                                                                        //ldloc.s				V_9
	IL_0fb8:            Temp_312=V_9->Pinned;                                       //callvirt				System::Boolean Reflector::CodeModel::IVariableDeclaration::get_Pinned()
	IL_0fbd:            if(!Temp_312)goto IL_0950;                                  //brfalse				IL_0950
	IL_0fc2:                                                                        //ldc.i4				0x22
	IL_0fc7:            V_64=34;                                                    //stloc				V_64
	IL_0fcb:            /*goto IL_0019;*/goto IL_0fd0;                              //br				IL_0019
	IL_0fd0:            goto IL_03df;                                               //br				IL_03df
	IL_0fd5:                                                                        //ldarg.1
	IL_0fd6:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_0fdb:                                                                        //ldloc				V_65
	IL_0fdf:            Temp_186=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fe4:                                                                        //ldstr				L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034"
	IL_0fe9:                                                                        //ldloc				V_65
	IL_0fed:            Temp_187=a(L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ff2:            Temp_188=Root::T_x183::M_x1(A_1,Temp_186,Temp_187);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_0ff7:            return safe_cast<Reflector::CodeModel::IType^>(Temp_188);   //ret
	IL_0ff8:                                                                        //ldloc.s				V_24
	IL_0ffa:            return V_24;                                                //ret
	IL_0ffb:                                                                        //ldloc.s				V_24
	IL_0ffd:                                                                        //isinst				Reflector::CodeModel::IPointerType
	IL_1002:            V_27=dynamic_cast<Reflector::CodeModel::IPointerType^>(V_24);//stloc.s				V_27
	IL_1004:                                                                        //ldc.i4				0x96
	IL_1009:            V_64=150;                                                   //stloc				V_64
	IL_100d:            /*goto IL_0019;*/goto IL_1012;                              //br				IL_0019
	IL_1012:                                                                        //ldloc.s				V_27
	IL_1014:            if(V_27==nullptr)goto IL_0ff8;                              //brfalse.s				IL_0ff8
	IL_1016:                                                                        //ldc.i4				0xbf
	IL_101b:            V_64=191;                                                   //stloc				V_64
	IL_101f:            /*goto IL_0019;*/goto IL_1024;                              //br				IL_0019
	IL_1024:            goto IL_1602;                                               //br				IL_1602
	IL_1029:                                                                        //ldloc.s				V_23
	IL_102b:            Temp_125=V_23->Target;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IArrayIndexerExpression::get_Target()
	IL_1030:                                                                        //ldarg.1
	IL_1031:            Temp_126=Root::T_x183::M_x1(Temp_125,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1036:            V_24=Temp_126;                                              //stloc.s				V_24
	IL_1038:                                                                        //ldloc.s				V_24
	IL_103a:                                                                        //isinst				Reflector::CodeModel::IReferenceType
	IL_103f:            V_25=dynamic_cast<Reflector::CodeModel::IReferenceType^>(V_24);//stloc.s				V_25
	IL_1041:                                                                        //ldc.i4				0x44
	IL_1046:            V_64=68;                                                    //stloc				V_64
	IL_104a:            /*goto IL_0019;*/goto IL_104f;                              //br				IL_0019
	IL_104f:                                                                        //ldloc.s				V_25
	IL_1051:            if(V_25==nullptr)goto IL_1a7c;                              //brfalse				IL_1a7c
	IL_1056:                                                                        //ldc.i4				0x2b
	IL_105b:            V_64=43;                                                    //stloc				V_64
	IL_105f:            /*goto IL_0019;*/goto IL_1064;                              //br				IL_0019
	IL_1064:            goto IL_13fe;                                               //br				IL_13fe
	IL_1069:                                                                        //ldarg.1
	IL_106a:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_106f:                                                                        //ldloc				V_65
	IL_1073:            Temp_130=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1078:                                                                        //ldstr				L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36"
	IL_107d:                                                                        //ldloc				V_65
	IL_1081:            Temp_131=a(L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1086:            Temp_132=Root::T_x183::M_x1(A_1,Temp_130,Temp_131);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_108b:            return safe_cast<Reflector::CodeModel::IType^>(Temp_132);   //ret
	IL_108c:                                                                        //ldc.i4				0x63
	IL_1091:            V_64=99;                                                    //stloc				V_64
	IL_1095:            /*goto IL_0019;*/goto IL_109a;                              //br				IL_0019
	IL_109a:                                                                        //ldloc.s				V_19
	IL_109c:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_10a1:                                                                        //ldloc				V_65
	IL_10a5:            Temp_192=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10aa:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0232\x0334"
	IL_10af:                                                                        //ldloc				V_65
	IL_10b3:            Temp_193=a(L"\x7E2A\x642C\x412E\x4530\x0232\x0334",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10b8:            Temp_194=Root::T_x183::M_x1(V_19,Temp_192,Temp_193);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_10bd:            if(Temp_194)goto IL_1bc6;                                   //brtrue				IL_1bc6
	IL_10c2:                                                                        //ldc.i4				0x2
	IL_10c7:            V_64=2;                                                     //stloc				V_64
	IL_10cb:            /*goto IL_0019;*/goto IL_10d0;                              //br				IL_0019
	IL_10d0:            goto IL_16ea;                                               //br				IL_16ea
	IL_10d5:                                                                        //ldloc.s				V_31
	IL_10d7:            Temp_12=V_31->Expression;                                   //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::INullCoalescingExpression::get_Expression()
	IL_10dc:                                                                        //ldarg.1
	IL_10dd:            Temp_13=Root::T_x183::M_x1(Temp_12,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_10e2:            return Temp_13;                                             //ret
	IL_10e3:                                                                        //ldc.i4.s				28
	IL_10e5:                                                                        //ldc.r4				0.5
	IL_10ea:            Temp_294=gcnew System::Collections::Hashtable(safe_cast<System::Int32>(28),safe_cast<System::Single>(0.5));//newobj				void System::Collections::Hashtable::.ctor(System::Int32,System::Single)
	IL_10ef:                                                                        //dup
	IL_10f0:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7B38\x543A\x523C\x533E\x2440\x2242\x2B44"
	IL_10f5:                                                                        //ldloc				V_65
	IL_10f9:            Temp_295=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7B38\x543A\x523C\x533E\x2440\x2242\x2B44",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_10fe:                                                                        //ldc.i4.0
	IL_10ff:                                                                        //box				System::Int32
	IL_1104:            Temp_294->Add(safe_cast<System::Object^>(Temp_295),safe_cast<System::Object^>(0));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1109:                                                                        //dup
	IL_110a:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x793A\x443C\x4B3E\x2440"
	IL_110f:                                                                        //ldloc				V_65
	IL_1113:            Temp_296=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x793A\x443C\x4B3E\x2440",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1118:                                                                        //ldc.i4.1
	IL_1119:                                                                        //box				System::Int32
	IL_111e:            Temp_294->Add(safe_cast<System::Object^>(Temp_296),safe_cast<System::Object^>(1));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1123:                                                                        //dup
	IL_1124:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7B38\x423A\x493C\x5A3E"
	IL_1129:                                                                        //ldloc				V_65
	IL_112d:            Temp_297=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7B38\x423A\x493C\x5A3E",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1132:                                                                        //ldc.i4.2
	IL_1133:                                                                        //box				System::Int32
	IL_1138:            Temp_294->Add(safe_cast<System::Object^>(Temp_297),safe_cast<System::Object^>(2));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_113d:                                                                        //dup
	IL_113e:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x0E3E\x7740"
	IL_1143:                                                                        //ldloc				V_65
	IL_1147:            Temp_298=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x0E3E\x7740",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_114c:                                                                        //ldc.i4.3
	IL_114d:                                                                        //box				System::Int32
	IL_1152:            Temp_294->Add(safe_cast<System::Object^>(Temp_298),safe_cast<System::Object^>(3));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1157:                                                                        //dup
	IL_1158:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7040\x7542"
	IL_115d:                                                                        //ldloc				V_65
	IL_1161:            Temp_299=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7040\x7542",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1166:                                                                        //ldc.i4.4
	IL_1167:                                                                        //box				System::Int32
	IL_116c:            Temp_294->Add(safe_cast<System::Object^>(Temp_299),safe_cast<System::Object^>(4));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1171:                                                                        //dup
	IL_1172:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x0C3E\x7340"
	IL_1177:                                                                        //ldloc				V_65
	IL_117b:            Temp_300=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x0C3E\x7340",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1180:                                                                        //ldc.i4.5
	IL_1181:                                                                        //box				System::Int32
	IL_1186:            Temp_294->Add(safe_cast<System::Object^>(Temp_300),safe_cast<System::Object^>(5));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_118b:                                                                        //dup
	IL_118c:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7240\x7142"
	IL_1191:                                                                        //ldloc				V_65
	IL_1195:            Temp_301=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7240\x7142",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_119a:                                                                        //ldc.i4.6
	IL_119b:                                                                        //box				System::Int32
	IL_11a0:            Temp_294->Add(safe_cast<System::Object^>(Temp_301),safe_cast<System::Object^>(6));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11a5:                                                                        //dup
	IL_11a6:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x093E\x7540"
	IL_11ab:                                                                        //ldloc				V_65
	IL_11af:            Temp_302=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7038\x553A\x493C\x093E\x7540",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11b4:                                                                        //ldc.i4.7
	IL_11b5:                                                                        //box				System::Int32
	IL_11ba:            Temp_294->Add(safe_cast<System::Object^>(Temp_302),safe_cast<System::Object^>(7));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11bf:                                                                        //dup
	IL_11c0:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7740\x7742"
	IL_11c5:                                                                        //ldloc				V_65
	IL_11c9:            Temp_303=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6C38\x723A\x533C\x4B3E\x7740\x7742",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11ce:                                                                        //ldc.i4.8
	IL_11cf:                                                                        //box				System::Int32
	IL_11d4:            Temp_294->Add(safe_cast<System::Object^>(Temp_303),safe_cast<System::Object^>(8));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11d9:                                                                        //dup
	IL_11da:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x523A\x533C\x583E\x2D40\x2642"
	IL_11df:                                                                        //ldloc				V_65
	IL_11e3:            Temp_304=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x523A\x533C\x583E\x2D40\x2642",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11e8:                                                                        //ldc.i4.s				9
	IL_11ea:                                                                        //box				System::Int32
	IL_11ef:            Temp_294->Add(safe_cast<System::Object^>(Temp_304),safe_cast<System::Object^>(9));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_11f4:                                                                        //dup
	IL_11f5:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7D38\x543A\x483C\x5D3E\x2D40\x2642"
	IL_11fa:                                                                        //ldloc				V_65
	IL_11fe:            Temp_305=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7D38\x543A\x483C\x5D3E\x2D40\x2642",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1203:                                                                        //ldc.i4.s				10
	IL_1205:                                                                        //box				System::Int32
	IL_120a:            Temp_294->Add(safe_cast<System::Object^>(Temp_305),safe_cast<System::Object^>(10));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_120f:                                                                        //dup
	IL_1210:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7D38\x5E3A\x5E3C\x563E\x2C40\x2242\x2944"
	IL_1215:                                                                        //ldloc				V_65
	IL_1219:            Temp_306=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7D38\x5E3A\x5E3C\x563E\x2C40\x2242\x2944",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_121e:                                                                        //ldc.i4.s				11
	IL_1220:                                                                        //box				System::Int32
	IL_1225:            Temp_294->Add(safe_cast<System::Object^>(Temp_306),safe_cast<System::Object^>(11));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_122a:                                                                        //dup
	IL_122b:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x4F3A\x4F3C\x563E\x2F40\x2442"
	IL_1230:                                                                        //ldloc				V_65
	IL_1234:            Temp_307=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x6A38\x4F3A\x4F3C\x563E\x2F40\x2442",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1239:                                                                        //ldc.i4.s				12
	IL_123b:                                                                        //box				System::Int32
	IL_1240:            Temp_294->Add(safe_cast<System::Object^>(Temp_307),safe_cast<System::Object^>(12));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1245:                                                                        //dup
	IL_1246:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7A38\x533A\x5C3C\x4D3E"
	IL_124b:                                                                        //ldloc				V_65
	IL_124f:            Temp_308=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834\x1936\x7A38\x533A\x5C3C\x4D3E",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1254:                                                                        //ldc.i4.s				13
	IL_1256:                                                                        //box				System::Int32
	IL_125b:            Temp_294->Add(safe_cast<System::Object^>(Temp_308),safe_cast<System::Object^>(13));//call				void System::Collections::Hashtable::Add(System::Object^,System::Object^)
	IL_1260:                                                                        //volatile.
	IL_1262:            Root::T_x188::F_x113=Temp_294;                              //stsfld				System::Collections::Hashtable^ Root::T_x188 F_x113
	IL_1267:                                                                        //ldc.i4				0xc2
	IL_126c:            V_64=194;                                                   //stloc				V_64
	IL_1270:            /*goto IL_0019;*/goto IL_1275;                              //br				IL_0019
	IL_1275:            goto IL_0528;                                               //br				IL_0528
	IL_127a:                                                                        //ldloc.0
	IL_127b:            Temp_283=V_0->Parameter;                                    //callvirt				Reflector::CodeModel::IParameterReference^ Reflector::CodeModel::IArgumentReferenceExpression::get_Parameter()
	IL_1280:            Temp_284=Temp_283->Resolve();                               //callvirt				Reflector::CodeModel::IParameterDeclaration^ Reflector::CodeModel::IParameterReference::Resolve()
	IL_1285:            V_1=Temp_284;                                               //stloc.1
	IL_1286:                                                                        //ldloc.1
	IL_1287:            Temp_285=V_1->ParameterType;                                //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IParameterDeclaration::get_ParameterType()
	IL_128c:            return Temp_285;                                            //ret
	IL_128d:                                                                        //ldloc.s				V_19
	IL_128f:            return V_19;                                                //ret
	IL_1290:                                                                        //ldc.i4				0x97
	IL_1295:            V_64=151;                                                   //stloc				V_64
	IL_1299:            /*goto IL_0019;*/goto IL_129e;                              //br				IL_0019
	IL_129e:                                                                        //ldloc.s				V_20
	IL_12a0:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_12a5:                                                                        //ldloc				V_65
	IL_12a9:            Temp_248=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12ae:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0032\x0734"
	IL_12b3:                                                                        //ldloc				V_65
	IL_12b7:            Temp_249=a(L"\x7E2A\x642C\x412E\x4530\x0032\x0734",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12bc:            Temp_250=Root::T_x183::M_x1(V_20,Temp_248,Temp_249);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_12c1:            if(!Temp_250)goto IL_1e18;                                  //brfalse				IL_1e18
	IL_12c6:                                                                        //ldc.i4				0xd
	IL_12cb:            V_64=13;                                                    //stloc				V_64
	IL_12cf:            /*goto IL_0019;*/goto IL_12d4;                              //br				IL_0019
	IL_12d4:            goto IL_0e00;                                               //br				IL_0e00
	IL_12d9:                                                                        //ldarg.1
	IL_12da:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_12df:                                                                        //ldloc				V_65
	IL_12e3:            Temp_151=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12e8:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_12ed:                                                                        //ldloc				V_65
	IL_12f1:            Temp_152=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_12f6:            Temp_153=Root::T_x183::M_x1(A_1,Temp_151,Temp_152);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_12fb:            return safe_cast<Reflector::CodeModel::IType^>(Temp_153);   //ret
	IL_12fc:                                                                        //ldc.i4				0x2e
	IL_1301:            V_64=46;                                                    //stloc				V_64
	IL_1305:            /*goto IL_0019;*/goto IL_130a;                              //br				IL_0019
	IL_130a:                                                                        //ldloc.s				V_19
	IL_130c:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1311:                                                                        //ldloc				V_65
	IL_1315:            Temp_127=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_131a:                                                                        //ldstr				L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36"
	IL_131f:                                                                        //ldloc				V_65
	IL_1323:            Temp_128=a(L"\x6F2A\x482C\x4C2E\x5830\x5E32\x5434\x5B36",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1328:            Temp_129=Root::T_x183::M_x1(V_19,Temp_127,Temp_128);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_132d:            if(Temp_129)goto IL_1069;                                   //brtrue				IL_1069
	IL_1332:                                                                        //ldc.i4				0x5c
	IL_1337:            V_64=92;                                                    //stloc				V_64
	IL_133b:            /*goto IL_0019;*/goto IL_1340;                              //br				IL_0019
	IL_1340:            goto IL_0c42;                                               //br				IL_0c42
	IL_1345:                                                                        //ldc.i4				0xa3
	IL_134a:            V_64=163;                                                   //stloc				V_64
	IL_134e:            /*goto IL_0019;*/goto IL_1353;                              //br				IL_0019
	IL_1353:                                                                        //ldloc.s				V_19
	IL_1355:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_135a:                                                                        //ldloc				V_65
	IL_135e:            Temp_258=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1363:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_1368:                                                                        //ldloc				V_65
	IL_136c:            Temp_259=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1371:            Temp_260=Root::T_x183::M_x1(V_19,Temp_258,Temp_259);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1376:            if(!Temp_260)goto IL_1c50;                                  //brfalse				IL_1c50
	IL_137b:                                                                        //ldc.i4				0x3e
	IL_1380:            V_64=62;                                                    //stloc				V_64
	IL_1384:            /*goto IL_0019;*/goto IL_1389;                              //br				IL_0019
	IL_1389:            goto IL_198d;                                               //br				IL_198d
	IL_138e:            Temp_289=gcnew Reflector::CodeModel::Memory::PointerType(); //newobj				void Reflector::CodeModel::Memory::PointerType::.ctor()
	IL_1393:            V_15=safe_cast<Reflector::CodeModel::IPointerType^>(Temp_289);//stloc.s				V_15
	IL_1395:                                                                        //ldloc.s				V_15
	IL_1397:                                                                        //ldarg.1
	IL_1398:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_139d:                                                                        //ldloc				V_65
	IL_13a1:            Temp_290=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_13a6:                                                                        //ldstr				L"\x682A\x452C\x4E2E\x4330"
	IL_13ab:                                                                        //ldloc				V_65
	IL_13af:            Temp_291=a(L"\x682A\x452C\x4E2E\x4330",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_13b4:            Temp_292=Root::T_x183::M_x1(A_1,Temp_290,Temp_291);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_13b9:            V_15->ElementType=safe_cast<Reflector::CodeModel::IType^>(Temp_292);//callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_13be:                                                                        //ldloc.s				V_15
	IL_13c0:            return safe_cast<Reflector::CodeModel::IType^>(V_15);       //ret
	IL_13c1:                                                                        //ldarg.0
	IL_13c2:                                                                        //isinst				Reflector::CodeModel::IFieldOfExpression
	IL_13c7:            V_42=dynamic_cast<Reflector::CodeModel::IFieldOfExpression^>(A_0);//stloc.s				V_42
	IL_13c9:                                                                        //ldc.i4				0x78
	IL_13ce:            V_64=120;                                                   //stloc				V_64
	IL_13d2:            /*goto IL_0019;*/goto IL_13d7;                              //br				IL_0019
	IL_13d7:                                                                        //ldloc.s				V_42
	IL_13d9:            if(V_42==nullptr)goto IL_071f;                              //brfalse				IL_071f
	IL_13de:                                                                        //ldc.i4				0x67
	IL_13e3:            V_64=103;                                                   //stloc				V_64
	IL_13e7:            /*goto IL_0019;*/goto IL_13ec;                              //br				IL_0019
	IL_13ec:            goto IL_03bc;                                               //br				IL_03bc
	IL_13f1:                                                                        //ldloc.s				V_22
	IL_13f3:            Temp_169=V_22->Constructor;                                 //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IObjectCreateExpression::get_Constructor()
	IL_13f8:            Temp_170=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_169)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_13fd:            return Temp_170;                                            //ret
	IL_13fe:                                                                        //ldloc.s				V_25
	IL_1400:            Temp_121=V_25->ElementType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IReferenceType::get_ElementType()
	IL_1405:            V_24=Temp_121;                                              //stloc.s				V_24
	IL_1407:                                                                        //ldc.i4				0x88
	IL_140c:            V_64=136;                                                   //stloc				V_64
	IL_1410:            /*goto IL_0019;*/goto IL_1415;                              //br				IL_0019
	IL_1415:            goto IL_1a7c;                                               //br				IL_1a7c
	IL_141a:                                                                        //ldarg.0
	IL_141b:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_1420:            V_18=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.s				V_18
	IL_1422:                                                                        //ldc.i4				0x6f
	IL_1427:            V_64=111;                                                   //stloc				V_64
	IL_142b:            /*goto IL_0019;*/goto IL_1430;                              //br				IL_0019
	IL_1430:                                                                        //ldloc.s				V_18
	IL_1432:            if(V_18==nullptr)goto IL_158a;                              //brfalse				IL_158a
	IL_1437:                                                                        //ldc.i4				0x3c
	IL_143c:            V_64=60;                                                    //stloc				V_64
	IL_1440:            /*goto IL_0019;*/goto IL_1445;                              //br				IL_0019
	IL_1445:            goto IL_067b;                                               //br				IL_067b
	IL_144a:                                                                        //ldarg.0
	IL_144b:                                                                        //isinst				Reflector::CodeModel::ICanCastExpression
	IL_1450:            V_45=dynamic_cast<Reflector::CodeModel::ICanCastExpression^>(A_0);//stloc.s				V_45
	IL_1452:                                                                        //ldc.i4				0x8c
	IL_1457:            V_64=140;                                                   //stloc				V_64
	IL_145b:            /*goto IL_0019;*/goto IL_1460;                              //br				IL_0019
	IL_1460:                                                                        //ldloc.s				V_45
	IL_1462:            if(V_45==nullptr)goto IL_1db7;                              //brfalse				IL_1db7
	IL_1467:                                                                        //ldc.i4				0x9a
	IL_146c:            V_64=154;                                                   //stloc				V_64
	IL_1470:            /*goto IL_0019;*/goto IL_1475;                              //br				IL_0019
	IL_1475:            goto IL_2008;                                               //br				IL_2008
	IL_147a:                                                                        //ldc.i4				0x34
	IL_147f:            V_64=52;                                                    //stloc				V_64
	IL_1483:            /*goto IL_0019;*/goto IL_1488;                              //br				IL_0019
	IL_1488:                                                                        //ldloc.s				V_30
	IL_148a:            Temp_136=V_30->Else;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_148f:            if(Temp_136==nullptr)goto IL_1784;                          //brfalse				IL_1784
	IL_1494:                                                                        //ldc.i4				0x35
	IL_1499:            V_64=53;                                                    //stloc				V_64
	IL_149d:            /*goto IL_0019;*/goto IL_14a2;                              //br				IL_0019
	IL_14a2:            goto IL_157c;                                               //br				IL_157c
	IL_14a7:                                                                        //ldc.i4				0xac
	IL_14ac:            V_64=172;                                                   //stloc				V_64
	IL_14b0:            /*goto IL_0019;*/goto IL_14b5;                              //br				IL_0019
	IL_14b5:                                                                        //ldloc.s				V_20
	IL_14b7:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_14bc:                                                                        //ldloc				V_65
	IL_14c0:            Temp_271=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_14c5:                                                                        //ldstr				L"\x692A\x542C\x5B2E\x5430"
	IL_14ca:                                                                        //ldloc				V_65
	IL_14ce:            Temp_272=a(L"\x692A\x542C\x5B2E\x5430",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_14d3:            Temp_273=Root::T_x183::M_x1(V_20,Temp_271,Temp_272);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_14d8:            if(Temp_273)goto IL_1f7e;                                   //brtrue				IL_1f7e
	IL_14dd:                                                                        //ldc.i4				0x11
	IL_14e2:            V_64=17;                                                    //stloc				V_64
	IL_14e6:            /*goto IL_0019;*/goto IL_14eb;                              //br				IL_0019
	IL_14eb:            goto IL_0da9;                                               //br				IL_0da9
	IL_14f0:                                                                        //ldarg.0
	IL_14f1:                                                                        //isinst				Reflector::CodeModel::IAddressOfExpression
	IL_14f6:            V_35=dynamic_cast<Reflector::CodeModel::IAddressOfExpression^>(A_0);//stloc.s				V_35
	IL_14f8:                                                                        //ldc.i4				0x92
	IL_14fd:            V_64=146;                                                   //stloc				V_64
	IL_1501:            /*goto IL_0019;*/goto IL_1506;                              //br				IL_0019
	IL_1506:                                                                        //ldloc.s				V_35
	IL_1508:            if(V_35==nullptr)goto IL_0a1d;                              //brfalse				IL_0a1d
	IL_150d:                                                                        //ldc.i4				0xae
	IL_1512:            V_64=174;                                                   //stloc				V_64
	IL_1516:            /*goto IL_0019;*/goto IL_151b;                              //br				IL_0019
	IL_151b:            goto IL_1fc4;                                               //br				IL_1fc4
	IL_1520:                                                                        //ldc.i4				0xc1
	IL_1525:            V_64=193;                                                   //stloc				V_64
	IL_1529:            /*goto IL_0019;*/goto IL_152e;                              //br				IL_0019
	IL_152e:            goto IL_141a;                                               //br				IL_141a
	IL_1533:                                                                        //ldc.i4				0x45
	IL_1538:            V_64=69;                                                    //stloc				V_64
	IL_153c:            /*goto IL_0019;*/goto IL_1541;                              //br				IL_0019
	IL_1541:                                                                        //ldloc.s				V_19
	IL_1543:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1548:                                                                        //ldloc				V_65
	IL_154c:            Temp_154=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1551:                                                                        //ldstr				L"\x782A\x442C\x412E\x5630\x5F32\x5034"
	IL_1556:                                                                        //ldloc				V_65
	IL_155a:            Temp_155=a(L"\x782A\x442C\x412E\x5630\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_155f:            Temp_156=Root::T_x183::M_x1(V_19,Temp_154,Temp_155);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1564:            if(Temp_156)goto IL_0d3d;                                   //brtrue				IL_0d3d
	IL_1569:                                                                        //ldc.i4				0x39
	IL_156e:            V_64=57;                                                    //stloc				V_64
	IL_1572:            /*goto IL_0019;*/goto IL_1577;                              //br				IL_0019
	IL_1577:            goto IL_21da;                                               //br				IL_21da
	IL_157c:                                                                        //ldloc.s				V_30
	IL_157e:            Temp_138=V_30->Else;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Else()
	IL_1583:                                                                        //ldarg.1
	IL_1584:            Temp_139=Root::T_x183::M_x1(Temp_138,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1589:            return Temp_139;                                            //ret
	IL_158a:                                                                        //ldarg.0
	IL_158b:                                                                        //isinst				Reflector::CodeModel::IObjectCreateExpression
	IL_1590:            V_22=dynamic_cast<Reflector::CodeModel::IObjectCreateExpression^>(A_0);//stloc.s				V_22
	IL_1592:                                                                        //ldc.i4				0x0
	IL_1597:            V_64=0;                                                     //stloc				V_64
	IL_159b:            /*goto IL_0019;*/goto IL_15a0;                              //br				IL_0019
	IL_15a0:                                                                        //ldloc.s				V_22
	IL_15a2:            if(V_22==nullptr)goto IL_064b;                              //brfalse				IL_064b
	IL_15a7:                                                                        //ldc.i4				0x57
	IL_15ac:            V_64=87;                                                    //stloc				V_64
	IL_15b0:            /*goto IL_0019;*/goto IL_15b5;                              //br				IL_0019
	IL_15b5:            goto IL_13f1;                                               //br				IL_13f1
	IL_15ba:            Temp_225=gcnew Reflector::CodeModel::Memory::ArrayType();   //newobj				void Reflector::CodeModel::Memory::ArrayType::.ctor()
	IL_15bf:            V_49=safe_cast<Reflector::CodeModel::IArrayType^>(Temp_225);//stloc.s				V_49
	IL_15c1:                                                                        //ldloc.s				V_49
	IL_15c3:                                                                        //ldloc.s				V_48
	IL_15c5:            Temp_226=V_48->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayCreateExpression::get_Type()
	IL_15ca:            V_49->ElementType=Temp_226;                                 //callvirt				void Reflector::CodeModel::IArrayType::set_ElementType(Reflector::CodeModel::IType^)
	IL_15cf:                                                                        //ldloc.s				V_49
	IL_15d1:            return safe_cast<Reflector::CodeModel::IType^>(V_49);       //ret
	IL_15d2:                                                                        //ldarg.0
	IL_15d3:                                                                        //isinst				Reflector::CodeModel::IConditionExpression
	IL_15d8:            V_30=dynamic_cast<Reflector::CodeModel::IConditionExpression^>(A_0);//stloc.s				V_30
	IL_15da:                                                                        //ldc.i4				0x99
	IL_15df:            V_64=153;                                                   //stloc				V_64
	IL_15e3:            /*goto IL_0019;*/goto IL_15e8;                              //br				IL_0019
	IL_15e8:                                                                        //ldloc.s				V_30
	IL_15ea:            if(V_30==nullptr)goto IL_160a;                              //brfalse.s				IL_160a
	IL_15ec:                                                                        //ldc.i4				0x90
	IL_15f1:            V_64=144;                                                   //stloc				V_64
	IL_15f5:            /*goto IL_0019;*/goto IL_15fa;                              //br				IL_0019
	IL_15fa:            goto IL_0359;                                               //br				IL_0359
	IL_15ff:                                                                        //ldloc.s				V_21
	IL_1601:            return V_21;                                                //ret
	IL_1602:                                                                        //ldloc.s				V_27
	IL_1604:            Temp_316=V_27->ElementType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IPointerType::get_ElementType()
	IL_1609:            return Temp_316;                                            //ret
	IL_160a:                                                                        //ldarg.0
	IL_160b:                                                                        //isinst				Reflector::CodeModel::INullCoalescingExpression
	IL_1610:            V_31=dynamic_cast<Reflector::CodeModel::INullCoalescingExpression^>(A_0);//stloc.s				V_31
	IL_1612:                                                                        //ldc.i4				0xa5
	IL_1617:            V_64=165;                                                   //stloc				V_64
	IL_161b:            /*goto IL_0019;*/goto IL_1620;                              //br				IL_0019
	IL_1620:                                                                        //ldloc.s				V_31
	IL_1622:            if(V_31==nullptr)goto IL_08cf;                              //brfalse				IL_08cf
	IL_1627:                                                                        //ldc.i4				0x8
	IL_162c:            V_64=8;                                                     //stloc				V_64
	IL_1630:            /*goto IL_0019;*/goto IL_1635;                              //br				IL_0019
	IL_1635:            goto IL_10d5;                                               //br				IL_10d5
	IL_163a:                                                                        //ldarg.0
	IL_163b:                                                                        //isinst				Reflector::CodeModel::ITypeOfTypedReferenceExpression
	IL_1640:            V_53=dynamic_cast<Reflector::CodeModel::ITypeOfTypedReferenceExpression^>(A_0);//stloc.s				V_53
	IL_1642:                                                                        //ldc.i4				0xa2
	IL_1647:            V_64=162;                                                   //stloc				V_64
	IL_164b:            /*goto IL_0019;*/goto IL_1650;                              //br				IL_0019
	IL_1650:                                                                        //ldloc.s				V_53
	IL_1652:            if(V_53==nullptr)goto IL_1b66;                              //brfalse				IL_1b66
	IL_1657:                                                                        //ldc.i4				0xa8
	IL_165c:            V_64=168;                                                   //stloc				V_64
	IL_1660:            /*goto IL_0019;*/goto IL_1665;                              //br				IL_0019
	IL_1665:            goto IL_1c53;                                               //br				IL_1c53
	IL_166a:                                                                        //ldloc.s				V_4
	IL_166c:            Temp_256=V_4->Method;                                       //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_1671:                                                                        //ldarg.1
	IL_1672:            Temp_257=Root::T_x183::M_x1(Temp_256,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1677:            return Temp_257;                                            //ret
	IL_1678:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_167d:                                                                        //ldstr				L"\x622A\x432C\x592E\x5030\x5F32\x5C34\x5336\x1938\x573A\x543C\x4B3E\x2440\x3142\x2444\x2B46\x6948\x3F4A\x344C\x3F4E\x3450\x7352\x7254\x2C56\x6958\x265A\x7A5C\x715E"
	IL_1682:                                                                        //ldloc				V_65
	IL_1686:            Temp_5=a(L"\x622A\x432C\x592E\x5030\x5F32\x5C34\x5336\x1938\x573A\x543C\x4B3E\x2440\x3142\x2444\x2B46\x6948\x3F4A\x344C\x3F4E\x3450\x7352\x7254\x2C56\x6958\x265A\x7A5C\x715E",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_168b:                                                                        //ldc.i4.1
	IL_168c:            Temp_6=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_1691:            V_61=Temp_6;                                                //stloc.s				V_61
	IL_1693:                                                                        //ldloc.s				V_61
	IL_1695:                                                                        //ldc.i4.0
	IL_1696:                                                                        //ldloc.s				V_16
	IL_1698:            Temp_7=V_16->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_169d:            Temp_8=Temp_7->GetType();                                   //callvirt				System::Type^ System::Object::GetType()
	IL_16a2:            Temp_9=Temp_8->FullName;                                    //callvirt				System::String^ System::Type::get_FullName()
	IL_16a7:            V_61[0]=safe_cast<System::Object^>(Temp_9);                 //stelem.ref
	IL_16a8:                                                                        //ldloc.s				V_61
	IL_16aa:            Temp_10=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_4),Temp_5,V_61);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_16af:            Temp_11=gcnew System::NotSupportedException(Temp_10);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_16b4:            throw Temp_11;                                              //throw
	IL_16b5:                                                                        //ldloc.s				V_28
	IL_16b7:            Temp_69=V_28->Target;                                       //callvirt				Reflector::CodeModel::IPropertyReferenceExpression^ Reflector::CodeModel::IPropertyIndexerExpression::get_Target()
	IL_16bc:                                                                        //ldarg.1
	IL_16bd:            Temp_70=Root::T_x183::M_x1(safe_cast<Reflector::CodeModel::IExpression^>(Temp_69),A_1);//call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_16c2:            V_29=Temp_70;                                               //stloc.s				V_29
	IL_16c4:                                                                        //ldloc.s				V_29
	IL_16c6:            return V_29;                                                //ret
	IL_16c7:                                                                        //ldarg.1
	IL_16c8:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_16cd:                                                                        //ldloc				V_65
	IL_16d1:            Temp_76=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_16d6:                                                                        //ldstr				L"\x7F2A\x542C\x5F2E\x5430\x5732\x6734\x5236\x5F38\x5E3A\x4F3C\x5A3E\x2F40\x2042\x2044"
	IL_16db:                                                                        //ldloc				V_65
	IL_16df:            Temp_77=a(L"\x7F2A\x542C\x5F2E\x5430\x5732\x6734\x5236\x5F38\x5E3A\x4F3C\x5A3E\x2F40\x2042\x2044",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_16e4:            Temp_78=Root::T_x183::M_x1(A_1,Temp_76,Temp_77);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_16e9:            return safe_cast<Reflector::CodeModel::IType^>(Temp_78);    //ret
	IL_16ea:                                                                        //ldc.i4				0x6e
	IL_16ef:            V_64=110;                                                   //stloc				V_64
	IL_16f3:            /*goto IL_0019;*/goto IL_16f8;                              //br				IL_0019
	IL_16f8:                                                                        //ldloc.s				V_19
	IL_16fa:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_16ff:                                                                        //ldloc				V_65
	IL_1703:            Temp_205=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1708:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_170d:                                                                        //ldloc				V_65
	IL_1711:            Temp_206=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1716:            Temp_207=Root::T_x183::M_x1(V_19,Temp_205,Temp_206);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_171b:            if(!Temp_207)goto IL_0f04;                                  //brfalse				IL_0f04
	IL_1720:                                                                        //ldc.i4				0x4f
	IL_1725:            V_64=79;                                                    //stloc				V_64
	IL_1729:            /*goto IL_0019;*/goto IL_172e;                              //br				IL_0019
	IL_172e:            goto IL_1bc6;                                               //br				IL_1bc6
	IL_1733:                                                                        //ldc.i4				0x13
	IL_1738:            V_64=19;                                                    //stloc				V_64
	IL_173c:            /*goto IL_0019;*/goto IL_1741;                              //br				IL_0019
	IL_1741:                                                                        //ldloc.s				V_20
	IL_1743:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1748:                                                                        //ldloc				V_65
	IL_174c:            Temp_33=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1751:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_1756:                                                                        //ldloc				V_65
	IL_175a:            Temp_34=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_175f:            Temp_35=Root::T_x183::M_x1(V_20,Temp_33,Temp_34);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1764:            if(Temp_35)goto IL_1fa1;                                    //brtrue				IL_1fa1
	IL_1769:                                                                        //ldc.i4				0x7f
	IL_176e:            V_64=127;                                                   //stloc				V_64
	IL_1772:            /*goto IL_0019;*/goto IL_1777;                              //br				IL_0019
	IL_1777:            goto IL_04df;                                               //br				IL_04df
	IL_177c:                                                                        //ldloc.s				V_6
	IL_177e:            Temp_255=V_6->Type;                                         //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReferenceExpression::get_Type()
	IL_1783:            return safe_cast<Reflector::CodeModel::IType^>(Temp_255);   //ret
	IL_1784:            Temp_137=gcnew System::NotSupportedException();             //newobj				void System::NotSupportedException::.ctor()
	IL_1789:            throw Temp_137;                                             //throw
	IL_178a:                                                                        //ldloc.s				V_18
	IL_178c:            Temp_46=V_18->Left;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_1791:                                                                        //ldarg.1
	IL_1792:            Temp_47=Root::T_x183::M_x1(Temp_46,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1797:            V_19=Temp_47;                                               //stloc.s				V_19
	IL_1799:                                                                        //ldloc.s				V_18
	IL_179b:            Temp_48=V_18->Right;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_17a0:                                                                        //ldarg.1
	IL_17a1:            Temp_49=Root::T_x183::M_x1(Temp_48,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_17a6:            V_20=Temp_49;                                               //stloc.s				V_20
	IL_17a8:                                                                        //ldc.i4				0x7c
	IL_17ad:            V_64=124;                                                   //stloc				V_64
	IL_17b1:            /*goto IL_0019;*/goto IL_17b6;                              //br				IL_0019
	IL_17b6:                                                                        //ldloc.s				V_19
	IL_17b8:            Temp_223=Root::T_x183::M_x13(V_19);                         //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_17bd:            if(Temp_223)goto IL_12fc;                                   //brtrue				IL_12fc
	IL_17c2:                                                                        //ldc.i4				0x77
	IL_17c7:            V_64=119;                                                   //stloc				V_64
	IL_17cb:            /*goto IL_0019;*/goto IL_17d0;                              //br				IL_0019
	IL_17d0:            goto IL_08a2;                                               //br				IL_08a2
	IL_17d5:                                                                        //ldc.i4				0xf
	IL_17da:            V_64=15;                                                    //stloc				V_64
	IL_17de:            /*goto IL_0019;*/goto IL_17e3;                              //br				IL_0019
	IL_17e3:                                                                        //ldloc.s				V_19
	IL_17e5:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_17ea:                                                                        //ldloc				V_65
	IL_17ee:            Temp_21=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_17f3:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0532\x0134"
	IL_17f8:                                                                        //ldloc				V_65
	IL_17fc:            Temp_22=a(L"\x7E2A\x642C\x412E\x4530\x0532\x0134",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1801:            Temp_23=Root::T_x183::M_x1(V_19,Temp_21,Temp_22);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1806:            if(Temp_23)goto IL_0628;                                    //brtrue				IL_0628
	IL_180b:                                                                        //ldc.i4				0x6
	IL_1810:            V_64=6;                                                     //stloc				V_64
	IL_1814:            /*goto IL_0019;*/goto IL_1819;                              //br				IL_0019
	IL_1819:            goto IL_05e2;                                               //br				IL_05e2
	IL_181e:                                                                        //ldloc.s				V_59
	IL_1820:            Temp_227=V_59->GenericArgument;                             //callvirt				Reflector::CodeModel::IGenericArgument^ Reflector::CodeModel::IGenericDefaultExpression::get_GenericArgument()
	IL_1825:            return safe_cast<Reflector::CodeModel::IType^>(Temp_227);   //ret
	IL_1826:                                                                        //ldc.i4				0x59
	IL_182b:            V_64=89;                                                    //stloc				V_64
	IL_182f:            /*goto IL_0019;*/goto IL_1834;                              //br				IL_0019
	IL_1834:                                                                        //ldloc.s				V_19
	IL_1836:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_183b:                                                                        //ldloc				V_65
	IL_183f:            Temp_174=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1844:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_1849:                                                                        //ldloc				V_65
	IL_184d:            Temp_175=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1852:            Temp_176=Root::T_x183::M_x1(V_19,Temp_174,Temp_175);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1857:            if(Temp_176)goto IL_198d;                                   //brtrue				IL_198d
	IL_185c:                                                                        //ldc.i4				0x41
	IL_1861:            V_64=65;                                                    //stloc				V_64
	IL_1865:            /*goto IL_0019;*/goto IL_186a;                              //br				IL_0019
	IL_186a:            goto IL_1345;                                               //br				IL_1345
	IL_186f:                                                                        //ldloc.s				V_5
	IL_1871:            Temp_171=V_5->Method;                                       //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceExpression::get_Method()
	IL_1876:            Temp_172=safe_cast<Reflector::CodeModel::IMethodSignature^>(Temp_171)->ReturnType;//callvirt				Reflector::CodeModel::IMethodReturnType^ Reflector::CodeModel::IMethodSignature::get_ReturnType()
	IL_187b:            Temp_173=Temp_172->Type;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMethodReturnType::get_Type()
	IL_1880:            return Temp_173;                                            //ret
	IL_1881:                                                                        //ldarg.0
	IL_1882:                                                                        //isinst				Reflector::CodeModel::IBaseReferenceExpression
	IL_1887:            V_8=dynamic_cast<Reflector::CodeModel::IBaseReferenceExpression^>(A_0);//stloc.s				V_8
	IL_1889:                                                                        //ldc.i4				0x86
	IL_188e:            V_64=134;                                                   //stloc				V_64
	IL_1892:            /*goto IL_0019;*/goto IL_1897;                              //br				IL_0019
	IL_1897:                                                                        //ldloc.s				V_8
	IL_1899:            if(V_8==nullptr)goto IL_1d61;                               //brfalse				IL_1d61
	IL_189e:                                                                        //ldc.i4				0x15
	IL_18a3:            V_64=21;                                                    //stloc				V_64
	IL_18a7:            /*goto IL_0019;*/goto IL_18ac;                              //br				IL_0019
	IL_18ac:            goto IL_0f67;                                               //br				IL_0f67
	IL_18b1:                                                                        //ldloc.s				V_11
	IL_18b3:            Temp_0=V_11->Variable;                                      //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableDeclarationExpression::get_Variable()
	IL_18b8:            V_9=Temp_0;                                                 //stloc.s				V_9
	IL_18ba:                                                                        //ldc.i4				0xb6
	IL_18bf:            V_64=182;                                                   //stloc				V_64
	IL_18c3:            /*goto IL_0019;*/goto IL_18c8;                              //br				IL_0019
	IL_18c8:            goto IL_0f6e;                                               //br				IL_0f6e
	IL_18cd:                                                                        //ldloc.s				V_30
	IL_18cf:            Temp_318=V_30->Then;                                        //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionExpression::get_Then()
	IL_18d4:                                                                        //ldarg.1
	IL_18d5:            Temp_319=Root::T_x183::M_x1(Temp_318,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_18da:            return Temp_319;                                            //ret
	IL_18db:                                                                        //ldarg.0
	IL_18dc:                                                                        //isinst				Reflector::CodeModel::IArrayCreateExpression
	IL_18e1:            V_48=dynamic_cast<Reflector::CodeModel::IArrayCreateExpression^>(A_0);//stloc.s				V_48
	IL_18e3:                                                                        //ldc.i4				0x68
	IL_18e8:            V_64=104;                                                   //stloc				V_64
	IL_18ec:            /*goto IL_0019;*/goto IL_18f1;                              //br				IL_0019
	IL_18f1:                                                                        //ldloc.s				V_48
	IL_18f3:            if(V_48==nullptr)goto IL_2140;                              //brfalse				IL_2140
	IL_18f8:                                                                        //ldc.i4				0x80
	IL_18fd:            V_64=128;                                                   //stloc				V_64
	IL_1901:            /*goto IL_0019;*/goto IL_1906;                              //br				IL_0019
	IL_1906:            goto IL_15ba;                                               //br				IL_15ba
	IL_190b:                                                                        //ldloc.s				V_26
	IL_190d:            Temp_261=V_26->ElementType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IArrayType::get_ElementType()
	IL_1912:            return Temp_261;                                            //ret
	IL_1913:                                                                        //ldc.i4				0x73
	IL_1918:            V_64=115;                                                   //stloc				V_64
	IL_191c:            /*goto IL_0019;*/goto IL_1921;                              //br				IL_0019
	IL_1921:                                                                        //ldloc.s				V_19
	IL_1923:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1928:                                                                        //ldloc				V_65
	IL_192c:            Temp_214=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1931:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0030\x0532"
	IL_1936:                                                                        //ldloc				V_65
	IL_193a:            Temp_215=a(L"\x622A\x432C\x5B2E\x0030\x0532",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_193f:            Temp_216=Root::T_x183::M_x1(V_19,Temp_214,Temp_215);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1944:            if(Temp_216)goto IL_1bc6;                                   //brtrue				IL_1bc6
	IL_1949:                                                                        //ldc.i4				0xab
	IL_194e:            V_64=171;                                                   //stloc				V_64
	IL_1952:            /*goto IL_0019;*/goto IL_1957;                              //br				IL_0019
	IL_1957:            goto IL_108c;                                               //br				IL_108c
	IL_195c:                                                                        //ldloc.s				V_54
	IL_195e:            Temp_209=V_54->Expression;                                  //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IValueOfTypedReferenceExpression::get_Expression()
	IL_1963:                                                                        //ldarg.1
	IL_1964:            Temp_210=Root::T_x183::M_x1(Temp_209,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1969:            return Temp_210;                                            //ret
	IL_196a:                                                                        //ldarg.1
	IL_196b:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1970:                                                                        //ldloc				V_65
	IL_1974:            Temp_91=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1979:                                                                        //ldstr				L"\x7E2A\x642C\x412E\x4530\x0232\x0334"
	IL_197e:                                                                        //ldloc				V_65
	IL_1982:            Temp_92=a(L"\x7E2A\x642C\x412E\x4530\x0232\x0334",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1987:            Temp_93=Root::T_x183::M_x1(A_1,Temp_91,Temp_92);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_198c:            return safe_cast<Reflector::CodeModel::IType^>(Temp_93);    //ret
	IL_198d:                                                                        //ldarg.1
	IL_198e:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1993:                                                                        //ldloc				V_65
	IL_1997:            Temp_145=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_199c:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_19a1:                                                                        //ldloc				V_65
	IL_19a5:            Temp_146=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_19aa:            Temp_147=Root::T_x183::M_x1(A_1,Temp_145,Temp_146);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_19af:            return safe_cast<Reflector::CodeModel::IType^>(Temp_147);   //ret
	IL_19b0:                                                                        //ldarg.0
	IL_19b1:                                                                        //isinst				Reflector::CodeModel::IStackAllocateExpression
	IL_19b6:            V_51=dynamic_cast<Reflector::CodeModel::IStackAllocateExpression^>(A_0);//stloc.s				V_51
	IL_19b8:                                                                        //ldc.i4				0xb0
	IL_19bd:            V_64=176;                                                   //stloc				V_64
	IL_19c1:            /*goto IL_0019;*/goto IL_19c6;                              //br				IL_0019
	IL_19c6:                                                                        //ldloc.s				V_51
	IL_19c8:            if(V_51==nullptr)goto IL_0981;                              //brfalse				IL_0981
	IL_19cd:                                                                        //ldc.i4				0x65
	IL_19d2:            V_64=101;                                                   //stloc				V_64
	IL_19d6:            /*goto IL_0019;*/goto IL_19db;                              //br				IL_0019
	IL_19db:            goto IL_0440;                                               //br				IL_0440
	IL_19e0:                                                                        //ldarg.0
	IL_19e1:                                                                        //isinst				Reflector::CodeModel::IObjectInitializeExpression
	IL_19e6:            V_58=dynamic_cast<Reflector::CodeModel::IObjectInitializeExpression^>(A_0);//stloc.s				V_58
	IL_19e8:                                                                        //ldc.i4				0x7d
	IL_19ed:            V_64=125;                                                   //stloc				V_64
	IL_19f1:            /*goto IL_0019;*/goto IL_19f6;                              //br				IL_0019
	IL_19f6:                                                                        //ldloc.s				V_58
	IL_19f8:            if(V_58==nullptr)goto IL_2094;                              //brfalse				IL_2094
	IL_19fd:                                                                        //ldc.i4				0xc0
	IL_1a02:            V_64=192;                                                   //stloc				V_64
	IL_1a06:            /*goto IL_0019;*/goto IL_1a0b;                              //br				IL_0019
	IL_1a0b:            goto IL_1ebe;                                               //br				IL_1ebe
	IL_1a10:                                                                        //ldc.i4				0x60
	IL_1a15:            V_64=96;                                                    //stloc				V_64
	IL_1a19:            /*goto IL_0019;*/goto IL_1a1e;                              //br				IL_0019
	IL_1a1e:                                                                        //ldloc.s				V_19
	IL_1a20:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1a25:                                                                        //ldloc				V_65
	IL_1a29:            Temp_183=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1a2e:                                                                        //ldstr				L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034"
	IL_1a33:                                                                        //ldloc				V_65
	IL_1a37:            Temp_184=a(L"\x6F2A\x422C\x5A2E\x5330\x5F32\x5034",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1a3c:            Temp_185=Root::T_x183::M_x1(V_19,Temp_183,Temp_184);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1a41:            if(Temp_185)goto IL_0fd5;                                   //brtrue				IL_0fd5
	IL_1a46:                                                                        //ldc.i4				0x32
	IL_1a4b:            V_64=50;                                                    //stloc				V_64
	IL_1a4f:            /*goto IL_0019;*/goto IL_1a54;                              //br				IL_0019
	IL_1a54:            goto IL_08ff;                                               //br				IL_08ff
	IL_1a59:                                                                        //ldarg.1
	IL_1a5a:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1a5f:                                                                        //ldloc				V_65
	IL_1a63:            Temp_115=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1a68:                                                                        //ldstr				L"\x782A\x592C\x5D2E\x5830\x5D32\x5234"
	IL_1a6d:                                                                        //ldloc				V_65
	IL_1a71:            Temp_116=a(L"\x782A\x592C\x5D2E\x5830\x5D32\x5234",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1a76:            Temp_117=Root::T_x183::M_x1(A_1,Temp_115,Temp_116);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1a7b:            return safe_cast<Reflector::CodeModel::IType^>(Temp_117);   //ret
	IL_1a7c:                                                                        //ldloc.s				V_24
	IL_1a7e:                                                                        //isinst				Reflector::CodeModel::IArrayType
	IL_1a83:            V_26=dynamic_cast<Reflector::CodeModel::IArrayType^>(V_24); //stloc.s				V_26
	IL_1a85:                                                                        //ldc.i4				0x8d
	IL_1a8a:            V_64=141;                                                   //stloc				V_64
	IL_1a8e:            /*goto IL_0019;*/goto IL_1a93;                              //br				IL_0019
	IL_1a93:                                                                        //ldloc.s				V_26
	IL_1a95:            if(V_26==nullptr)goto IL_0ffb;                              //brfalse				IL_0ffb
	IL_1a9a:                                                                        //ldc.i4				0xa6
	IL_1a9f:            V_64=166;                                                   //stloc				V_64
	IL_1aa3:            /*goto IL_0019;*/goto IL_1aa8;                              //br				IL_0019
	IL_1aa8:            goto IL_190b;                                               //br				IL_190b
	IL_1aad:                                                                        //ldarg.0
	IL_1aae:                                                                        //isinst				Reflector::CodeModel::ISnippetExpression
	IL_1ab3:            V_56=dynamic_cast<Reflector::CodeModel::ISnippetExpression^>(A_0);//stloc.s				V_56
	IL_1ab5:                                                                        //ldc.i4				0xbb
	IL_1aba:            V_64=187;                                                   //stloc				V_64
	IL_1abe:            /*goto IL_0019;*/goto IL_1ac3;                              //br				IL_0019
	IL_1ac3:                                                                        //ldloc.s				V_56
	IL_1ac5:            if(V_56==nullptr)goto IL_2170;                              //brfalse				IL_2170
	IL_1aca:                                                                        //ldc.i4				0x61
	IL_1acf:            V_64=97;                                                    //stloc				V_64
	IL_1ad3:            /*goto IL_0019;*/goto IL_1ad8;                              //br				IL_0019
	IL_1ad8:            goto IL_1e9b;                                               //br				IL_1e9b
	IL_1add:                                                                        //ldarg.0
	IL_1ade:                                                                        //isinst				Reflector::CodeModel::ITypedReferenceCreateExpression
	IL_1ae3:            V_55=dynamic_cast<Reflector::CodeModel::ITypedReferenceCreateExpression^>(A_0);//stloc.s				V_55
	IL_1ae5:                                                                        //ldc.i4				0x6a
	IL_1aea:            V_64=106;                                                   //stloc				V_64
	IL_1aee:            /*goto IL_0019;*/goto IL_1af3;                              //br				IL_0019
	IL_1af3:                                                                        //ldloc.s				V_55
	IL_1af5:            if(V_55==nullptr)goto IL_1aad;                              //brfalse.s				IL_1aad
	IL_1af7:                                                                        //ldc.i4				0x29
	IL_1afc:            V_64=41;                                                    //stloc				V_64
	IL_1b00:            /*goto IL_0019;*/goto IL_1b05;                              //br				IL_0019
	IL_1b05:            goto IL_16c7;                                               //br				IL_16c7
	IL_1b0a:                                                                        //ldc.i4				0x75
	IL_1b0f:            V_64=117;                                                   //stloc				V_64
	IL_1b13:            /*goto IL_0019;*/goto IL_1b18;                              //br				IL_0019
	IL_1b18:            goto IL_21c3;                                               //br				IL_21c3
	IL_1b1d:                                                                        //ldc.i4				0xb1
	IL_1b22:            V_64=177;                                                   //stloc				V_64
	IL_1b26:            /*goto IL_0019;*/goto IL_1b2b;                              //br				IL_0019
	IL_1b2b:                                                                        //ldloc.s				V_19
	IL_1b2d:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1b32:                                                                        //ldloc				V_65
	IL_1b36:            Temp_280=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1b3b:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_1b40:                                                                        //ldloc				V_65
	IL_1b44:            Temp_281=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1b49:            Temp_282=Root::T_x183::M_x1(V_19,Temp_280,Temp_281);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1b4e:            if(Temp_282)goto IL_12d9;                                   //brtrue				IL_12d9
	IL_1b53:                                                                        //ldc.i4				0x42
	IL_1b58:            V_64=66;                                                    //stloc				V_64
	IL_1b5c:            /*goto IL_0019;*/goto IL_1b61;                              //br				IL_0019
	IL_1b61:            goto IL_20f7;                                               //br				IL_20f7
	IL_1b66:                                                                        //ldarg.0
	IL_1b67:                                                                        //isinst				Reflector::CodeModel::IValueOfTypedReferenceExpression
	IL_1b6c:            V_54=dynamic_cast<Reflector::CodeModel::IValueOfTypedReferenceExpression^>(A_0);//stloc.s				V_54
	IL_1b6e:                                                                        //ldc.i4				0x3
	IL_1b73:            V_64=3;                                                     //stloc				V_64
	IL_1b77:            /*goto IL_0019;*/goto IL_1b7c;                              //br				IL_0019
	IL_1b7c:                                                                        //ldloc.s				V_54
	IL_1b7e:            if(V_54==nullptr)goto IL_1add;                              //brfalse				IL_1add
	IL_1b83:                                                                        //ldc.i4				0x70
	IL_1b88:            V_64=112;                                                   //stloc				V_64
	IL_1b8c:            /*goto IL_0019;*/goto IL_1b91;                              //br				IL_0019
	IL_1b91:            goto IL_195c;                                               //br				IL_195c
	IL_1b96:                                                                        //ldarg.0
	IL_1b97:                                                                        //isinst				Reflector::CodeModel::IAddressOutExpression
	IL_1b9c:            V_39=dynamic_cast<Reflector::CodeModel::IAddressOutExpression^>(A_0);//stloc.s				V_39
	IL_1b9e:                                                                        //ldc.i4				0x79
	IL_1ba3:            V_64=121;                                                   //stloc				V_64
	IL_1ba7:            /*goto IL_0019;*/goto IL_1bac;                              //br				IL_0019
	IL_1bac:                                                                        //ldloc.s				V_39
	IL_1bae:            if(V_39==nullptr)goto IL_2058;                              //brfalse				IL_2058
	IL_1bb3:                                                                        //ldc.i4				0x46
	IL_1bb8:            V_64=70;                                                    //stloc				V_64
	IL_1bbc:            /*goto IL_0019;*/goto IL_1bc1;                              //br				IL_0019
	IL_1bc1:            goto IL_05c4;                                               //br				IL_05c4
	IL_1bc6:                                                                        //ldc.i4				0x10
	IL_1bcb:            V_64=16;                                                    //stloc				V_64
	IL_1bcf:            /*goto IL_0019;*/goto IL_1bd4;                              //br				IL_0019
	IL_1bd4:                                                                        //ldloc.s				V_20
	IL_1bd6:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1bdb:                                                                        //ldloc				V_65
	IL_1bdf:            Temp_27=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1be4:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_1be9:                                                                        //ldloc				V_65
	IL_1bed:            Temp_28=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1bf2:            Temp_29=Root::T_x183::M_x1(V_20,Temp_27,Temp_28);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1bf7:            if(Temp_29)goto IL_1f7e;                                    //brtrue				IL_1f7e
	IL_1bfc:                                                                        //ldc.i4				0x1e
	IL_1c01:            V_64=30;                                                    //stloc				V_64
	IL_1c05:            /*goto IL_0019;*/goto IL_1c0a;                              //br				IL_0019
	IL_1c0a:            goto IL_14a7;                                               //br				IL_14a7
	IL_1c0f:                                                                        //ldarg.1
	IL_1c10:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1c15:                                                                        //ldloc				V_65
	IL_1c19:            Temp_79=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1c1e:                                                                        //ldstr				L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936"
	IL_1c23:                                                                        //ldloc				V_65
	IL_1c27:            Temp_80=a(L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1c2c:            Temp_81=Root::T_x183::M_x1(A_1,Temp_79,Temp_80);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1c31:            return safe_cast<Reflector::CodeModel::IType^>(Temp_81);    //ret
	IL_1c32:                                                                        //ldloc.s				V_10
	IL_1c34:            Temp_55=V_10->Variable;                                     //callvirt				Reflector::CodeModel::IVariableReference^ Reflector::CodeModel::IVariableReferenceExpression::get_Variable()
	IL_1c39:            Temp_56=Temp_55->Variable;                                  //callvirt				Reflector::CodeModel::IVariableDeclaration^ Reflector::CodeModel::IVariableReference::get_Variable()
	IL_1c3e:            V_9=Temp_56;                                                //stloc.s				V_9
	IL_1c40:                                                                        //ldc.i4				0x71
	IL_1c45:            V_64=113;                                                   //stloc				V_64
	IL_1c49:            /*goto IL_0019;*/goto IL_1c4e;                              //br				IL_0019
	IL_1c4e:            goto IL_1ca6;                                               //br.s				IL_1ca6
	IL_1c50:                                                                        //ldloc.s				V_20
	IL_1c52:            return V_20;                                                //ret
	IL_1c53:                                                                        //ldarg.1
	IL_1c54:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1c59:                                                                        //ldloc				V_65
	IL_1c5d:            Temp_265=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1c62:                                                                        //ldstr				L"\x7F2A\x542C\x5F2E\x5430"
	IL_1c67:                                                                        //ldloc				V_65
	IL_1c6b:            Temp_266=a(L"\x7F2A\x542C\x5F2E\x5430",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1c70:            Temp_267=Root::T_x183::M_x1(A_1,Temp_265,Temp_266);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1c75:            return safe_cast<Reflector::CodeModel::IType^>(Temp_267);   //ret
	IL_1c76:                                                                        //ldarg.0
	IL_1c77:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_1c7c:            V_4=dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0);//stloc.s				V_4
	IL_1c7e:                                                                        //ldc.i4				0x54
	IL_1c83:            V_64=84;                                                    //stloc				V_64
	IL_1c87:            /*goto IL_0019;*/goto IL_1c8c;                              //br				IL_0019
	IL_1c8c:                                                                        //ldloc.s				V_4
	IL_1c8e:            if(V_4==nullptr)goto IL_20c4;                               //brfalse				IL_20c4
	IL_1c93:                                                                        //ldc.i4				0xa1
	IL_1c98:            V_64=161;                                                   //stloc				V_64
	IL_1c9c:            /*goto IL_0019;*/goto IL_1ca1;                              //br				IL_0019
	IL_1ca1:            goto IL_166a;                                               //br				IL_166a
	IL_1ca6:                                                                        //ldarg.0
	IL_1ca7:                                                                        //isinst				Reflector::CodeModel::IVariableDeclarationExpression
	IL_1cac:            V_11=dynamic_cast<Reflector::CodeModel::IVariableDeclarationExpression^>(A_0);//stloc.s				V_11
	IL_1cae:                                                                        //ldc.i4				0x81
	IL_1cb3:            V_64=129;                                                   //stloc				V_64
	IL_1cb7:            /*goto IL_0019;*/goto IL_1cbc;                              //br				IL_0019
	IL_1cbc:                                                                        //ldloc.s				V_11
	IL_1cbe:            if(V_11==nullptr)goto IL_0f6e;                              //brfalse				IL_0f6e
	IL_1cc3:                                                                        //ldc.i4				0x1
	IL_1cc8:            V_64=1;                                                     //stloc				V_64
	IL_1ccc:            /*goto IL_0019;*/goto IL_1cd1;                              //br				IL_0019
	IL_1cd1:            goto IL_18b1;                                               //br				IL_18b1
	IL_1cd6:                                                                        //ldc.i4				0x2a
	IL_1cdb:            V_64=42;                                                    //stloc				V_64
	IL_1cdf:            /*goto IL_0019;*/goto IL_1ce4;                              //br				IL_0019
	IL_1ce4:                                                                        //ldloc.s				V_60
	IL_1ce6:                                                                        //unbox				System::Int32
	IL_1ceb:                                                                        //ldind.i4
	IL_1cec:            switch(safe_cast<System::Int32>(V_60)){case 0:goto IL_1c0f;case 1:goto IL_21a0;case 2:goto IL_0399;case 3:goto IL_06fc;case 4:goto IL_196a;case 5:goto IL_0ae9;case 6:goto IL_0599;case 7:goto IL_0f44;case 8:goto IL_0491;case 9:goto IL_09b1;case 10:goto IL_07bf;case 11:goto IL_079c;case 12:goto IL_1a59;case 13:goto IL_1fe5;};//switch				(IL_1c0f,IL_21a0,IL_0399,IL_06fc,IL_196a,IL_0ae9,IL_0599,IL_0f44,IL_0491,IL_09b1,IL_07bf,IL_079c,IL_1a59,IL_1fe5)
	IL_1d29:                                                                        //ldc.i4				0x1b
	IL_1d2e:            V_64=27;                                                    //stloc				V_64
	IL_1d32:            /*goto IL_0019;*/goto IL_1d37;                              //br				IL_0019
	IL_1d37:            goto IL_0556;                                               //br				IL_0556
	IL_1d3c:                                                                        //ldarg.1
	IL_1d3d:            return safe_cast<Reflector::CodeModel::IType^>(A_1);        //ret
	IL_1d3e:                                                                        //ldarg.1
	IL_1d3f:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1d44:                                                                        //ldloc				V_65
	IL_1d48:            Temp_52=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1d4d:                                                                        //ldstr				L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936"
	IL_1d52:                                                                        //ldloc				V_65
	IL_1d56:            Temp_53=a(L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1d5b:            Temp_54=Root::T_x183::M_x1(A_1,Temp_52,Temp_53);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1d60:            return safe_cast<Reflector::CodeModel::IType^>(Temp_54);    //ret
	IL_1d61:                                                                        //ldnull
	IL_1d62:            V_9=safe_cast<Reflector::CodeModel::IVariableDeclaration^>(nullptr);//stloc.s				V_9
	IL_1d64:                                                                        //ldarg.0
	IL_1d65:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_1d6a:            V_10=dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(A_0);//stloc.s				V_10
	IL_1d6c:                                                                        //ldc.i4				0x50
	IL_1d71:            V_64=80;                                                    //stloc				V_64
	IL_1d75:            /*goto IL_0019;*/goto IL_1d7a;                              //br				IL_0019
	IL_1d7a:                                                                        //ldloc.s				V_10
	IL_1d7c:            if(V_10==nullptr)goto IL_1ca6;                              //brfalse				IL_1ca6
	IL_1d81:                                                                        //ldc.i4				0x1c
	IL_1d86:            V_64=28;                                                    //stloc				V_64
	IL_1d8a:            /*goto IL_0019;*/goto IL_1d8f;                              //br				IL_0019
	IL_1d8f:            goto IL_1c32;                                               //br				IL_1c32
	IL_1d94:                                                                        //ldarg.1
	IL_1d95:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1d9a:                                                                        //ldloc				V_65
	IL_1d9e:            Temp_220=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1da3:                                                                        //ldstr				L"\x7F2A\x542C\x5F2E\x5430"
	IL_1da8:                                                                        //ldloc				V_65
	IL_1dac:            Temp_221=a(L"\x7F2A\x542C\x5F2E\x5430",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1db1:            Temp_222=Root::T_x183::M_x1(A_1,Temp_220,Temp_221);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1db6:            return safe_cast<Reflector::CodeModel::IType^>(Temp_222);   //ret
	IL_1db7:                                                                        //ldarg.0
	IL_1db8:                                                                        //isinst				Reflector::CodeModel::ICastExpression
	IL_1dbd:            V_46=dynamic_cast<Reflector::CodeModel::ICastExpression^>(A_0);//stloc.s				V_46
	IL_1dbf:                                                                        //ldc.i4				0x85
	IL_1dc4:            V_64=133;                                                   //stloc				V_64
	IL_1dc8:            /*goto IL_0019;*/goto IL_1dcd;                              //br				IL_0019
	IL_1dcd:                                                                        //ldloc.s				V_46
	IL_1dcf:            if(V_46==nullptr)goto IL_0b92;                              //brfalse				IL_0b92
	IL_1dd4:                                                                        //ldc.i4				0x91
	IL_1dd9:            V_64=145;                                                   //stloc				V_64
	IL_1ddd:            /*goto IL_0019;*/goto IL_1de2;                              //br				IL_0019
	IL_1de2:            goto IL_0948;                                               //br				IL_0948
	IL_1de7:                                                                        //ldloc.s				V_17
	IL_1de9:            Temp_235=V_17->Expression;                                  //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IUnaryExpression::get_Expression()
	IL_1dee:                                                                        //ldarg.1
	IL_1def:            Temp_236=Root::T_x183::M_x1(Temp_235,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1df4:            return Temp_236;                                            //ret
	IL_1df5:                                                                        //ldarg.1
	IL_1df6:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1dfb:                                                                        //ldloc				V_65
	IL_1dff:            Temp_60=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1e04:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_1e09:                                                                        //ldloc				V_65
	IL_1e0d:            Temp_61=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1e12:            Temp_62=Root::T_x183::M_x1(A_1,Temp_60,Temp_61);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1e17:            return safe_cast<Reflector::CodeModel::IType^>(Temp_62);    //ret
	IL_1e18:                                                                        //ldc.i4				0x8e
	IL_1e1d:            V_64=142;                                                   //stloc				V_64
	IL_1e21:            /*goto IL_0019;*/goto IL_1e26;                              //br				IL_0019
	IL_1e26:                                                                        //ldloc.s				V_19
	IL_1e28:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1e2d:                                                                        //ldloc				V_65
	IL_1e31:            Temp_237=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1e36:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_1e3b:                                                                        //ldloc				V_65
	IL_1e3f:            Temp_238=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1e44:            Temp_239=Root::T_x183::M_x1(V_19,Temp_237,Temp_238);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1e49:            if(Temp_239)goto IL_1bc6;                                   //brtrue				IL_1bc6
	IL_1e4e:                                                                        //ldc.i4				0x76
	IL_1e53:            V_64=118;                                                   //stloc				V_64
	IL_1e57:            /*goto IL_0019;*/goto IL_1e5c;                              //br				IL_0019
	IL_1e5c:            goto IL_07e2;                                               //br				IL_07e2
	IL_1e61:                                                                        //ldc.i4				0x8a
	IL_1e66:            V_64=138;                                                   //stloc				V_64
	IL_1e6a:            /*goto IL_0019;*/goto IL_1e6f;                              //br				IL_0019
	IL_1e6f:                                                                        //ldloc.s				V_16
	IL_1e71:            Temp_232=V_16->Value;                                       //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_1e76:            Temp_233=Temp_232->GetType();                               //callvirt				System::Type^ System::Object::GetType()
	IL_1e7b:            Temp_234=Temp_233->FullName;                                //callvirt				System::String^ System::Type::get_FullName()
	IL_1e80:                                                                        //dup
	IL_1e81:            V_60=safe_cast<System::Object^>(Temp_234);                  //stloc.s				V_60
	IL_1e83:            if(Temp_234==nullptr)goto IL_1678;                          //brfalse				IL_1678
	IL_1e88:                                                                        //ldc.i4				0x5e
	IL_1e8d:            V_64=94;                                                    //stloc				V_64
	IL_1e91:            /*goto IL_0019;*/goto IL_1e96;                              //br				IL_0019
	IL_1e96:            goto IL_0bc2;                                               //br				IL_0bc2
	IL_1e9b:                                                                        //ldarg.1
	IL_1e9c:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1ea1:                                                                        //ldloc				V_65
	IL_1ea5:            Temp_189=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1eaa:                                                                        //ldstr				L"\x642A\x4F2C\x452E\x5430\x5032\x4134"
	IL_1eaf:                                                                        //ldloc				V_65
	IL_1eb3:            Temp_190=a(L"\x642A\x4F2C\x452E\x5430\x5032\x4134",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1eb8:            Temp_191=Root::T_x183::M_x1(A_1,Temp_189,Temp_190);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1ebd:            return safe_cast<Reflector::CodeModel::IType^>(Temp_191);   //ret
	IL_1ebe:                                                                        //ldloc.s				V_58
	IL_1ec0:            Temp_317=V_58->Type;                                        //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IObjectInitializeExpression::get_Type()
	IL_1ec5:            return Temp_317;                                            //ret
	IL_1ec6:                                                                        //ldarg.0
	IL_1ec7:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_1ecc:            V_6=dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(A_0);//stloc.s				V_6
	IL_1ece:                                                                        //ldc.i4				0x12
	IL_1ed3:            V_64=18;                                                    //stloc				V_64
	IL_1ed7:            /*goto IL_0019;*/goto IL_1edc;                              //br				IL_0019
	IL_1edc:                                                                        //ldloc.s				V_6
	IL_1ede:            if(V_6==nullptr)goto IL_0a4d;                               //brfalse				IL_0a4d
	IL_1ee3:                                                                        //ldc.i4				0x9e
	IL_1ee8:            V_64=158;                                                   //stloc				V_64
	IL_1eec:            /*goto IL_0019;*/goto IL_1ef1;                              //br				IL_0019
	IL_1ef1:            goto IL_177c;                                               //br				IL_177c
	IL_1ef6:                                                                        //ldarg.0
	IL_1ef7:                                                                        //isinst				Reflector::CodeModel::ISizeOfExpression
	IL_1efc:            V_44=dynamic_cast<Reflector::CodeModel::ISizeOfExpression^>(A_0);//stloc.s				V_44
	IL_1efe:                                                                        //ldc.i4				0x3d
	IL_1f03:            V_64=61;                                                    //stloc				V_64
	IL_1f07:            /*goto IL_0019;*/goto IL_1f0c;                              //br				IL_0019
	IL_1f0c:                                                                        //ldloc.s				V_44
	IL_1f0e:            if(V_44==nullptr)goto IL_144a;                              //brfalse				IL_144a
	IL_1f13:                                                                        //ldc.i4				0x4
	IL_1f18:            V_64=4;                                                     //stloc				V_64
	IL_1f1c:            /*goto IL_0019;*/goto IL_1f21;                              //br				IL_0019
	IL_1f21:            goto IL_0b6f;                                               //br				IL_0b6f
	IL_1f26:                                                                        //ldloc.s				V_18
	IL_1f28:            Temp_50=V_18->Left;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_1f2d:                                                                        //ldarg.1
	IL_1f2e:            Temp_51=Root::T_x183::M_x1(Temp_50,A_1);                    //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1f33:            V_21=Temp_51;                                               //stloc.s				V_21
	IL_1f35:                                                                        //ldc.i4				0x49
	IL_1f3a:            V_64=73;                                                    //stloc				V_64
	IL_1f3e:            /*goto IL_0019;*/goto IL_1f43;                              //br				IL_0019
	IL_1f43:                                                                        //ldloc.s				V_21
	IL_1f45:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1f4a:                                                                        //ldloc				V_65
	IL_1f4e:            Temp_160=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1f53:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_1f58:                                                                        //ldloc				V_65
	IL_1f5c:            Temp_161=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1f61:            Temp_162=Root::T_x183::M_x1(V_21,Temp_160,Temp_161);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1f66:            if(Temp_162)goto IL_1df5;                                   //brtrue				IL_1df5
	IL_1f6b:                                                                        //ldc.i4				0x25
	IL_1f70:            V_64=37;                                                    //stloc				V_64
	IL_1f74:            /*goto IL_0019;*/goto IL_1f79;                              //br				IL_0019
	IL_1f79:            goto IL_0448;                                               //br				IL_0448
	IL_1f7e:                                                                        //ldarg.1
	IL_1f7f:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1f84:                                                                        //ldloc				V_65
	IL_1f88:            Temp_30=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1f8d:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_1f92:                                                                        //ldloc				V_65
	IL_1f96:            Temp_31=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1f9b:            Temp_32=Root::T_x183::M_x1(A_1,Temp_30,Temp_31);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1fa0:            return safe_cast<Reflector::CodeModel::IType^>(Temp_32);    //ret
	IL_1fa1:                                                                        //ldarg.1
	IL_1fa2:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1fa7:                                                                        //ldloc				V_65
	IL_1fab:            Temp_36=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1fb0:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_1fb5:                                                                        //ldloc				V_65
	IL_1fb9:            Temp_37=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1fbe:            Temp_38=Root::T_x183::M_x1(A_1,Temp_36,Temp_37);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_1fc3:            return safe_cast<Reflector::CodeModel::IType^>(Temp_38);    //ret
	IL_1fc4:            Temp_277=gcnew Reflector::CodeModel::Memory::PointerType(); //newobj				void Reflector::CodeModel::Memory::PointerType::.ctor()
	IL_1fc9:            V_36=safe_cast<Reflector::CodeModel::IPointerType^>(Temp_277);//stloc.s				V_36
	IL_1fcb:                                                                        //ldloc.s				V_36
	IL_1fcd:                                                                        //ldloc.s				V_35
	IL_1fcf:            Temp_278=V_35->Expression;                                  //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IAddressOfExpression::get_Expression()
	IL_1fd4:                                                                        //ldarg.1
	IL_1fd5:            Temp_279=Root::T_x183::M_x1(Temp_278,A_1);                  //call				Reflector::CodeModel::IType^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,Reflector::CodeModel::ITypeDeclaration^)
	IL_1fda:            V_36->ElementType=Temp_279;                                 //callvirt				void Reflector::CodeModel::IPointerType::set_ElementType(Reflector::CodeModel::IType^)
	IL_1fdf:                                                                        //ldloc.s				V_36
	IL_1fe1:            return safe_cast<Reflector::CodeModel::IType^>(V_36);       //ret
	IL_1fe2:                                                                        //ldloc.s				V_19
	IL_1fe4:            return V_19;                                                //ret
	IL_1fe5:                                                                        //ldarg.1
	IL_1fe6:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_1feb:                                                                        //ldloc				V_65
	IL_1fef:            Temp_118=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1ff4:                                                                        //ldstr				L"\x682A\x452C\x4E2E\x4330"
	IL_1ff9:                                                                        //ldloc				V_65
	IL_1ffd:            Temp_119=a(L"\x682A\x452C\x4E2E\x4330",V_65);               //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2002:            Temp_120=Root::T_x183::M_x1(A_1,Temp_118,Temp_119);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_2007:            return safe_cast<Reflector::CodeModel::IType^>(Temp_120);   //ret
	IL_2008:                                                                        //ldarg.1
	IL_2009:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_200e:                                                                        //ldloc				V_65
	IL_2012:            Temp_252=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2017:                                                                        //ldstr				L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936"
	IL_201c:                                                                        //ldloc				V_65
	IL_2020:            Temp_253=a(L"\x692A\x422C\x402E\x5D30\x5632\x5434\x5936",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2025:            Temp_254=Root::T_x183::M_x1(A_1,Temp_252,Temp_253);         //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_202a:            return safe_cast<Reflector::CodeModel::IType^>(Temp_254);   //ret
	IL_202b:                                                                        //ldc.i4				0x89
	IL_2030:            V_64=137;                                                   //stloc				V_64
	IL_2034:            /*goto IL_0019;*/goto IL_2039;                              //br				IL_0019
	IL_2039:                                                                        //ldloc.s				V_16
	IL_203b:            Temp_231=V_16->Value;                                       //callvirt				System::Object^ Reflector::CodeModel::ILiteralExpression::get_Value()
	IL_2040:            if(Temp_231!=nullptr)goto IL_1e61;                          //brtrue				IL_1e61
	IL_2045:                                                                        //ldc.i4				0x14
	IL_204a:            V_64=20;                                                    //stloc				V_64
	IL_204e:            /*goto IL_0019;*/goto IL_2053;                              //br				IL_0019
	IL_2053:            goto IL_0a7d;                                               //br				IL_0a7d
	IL_2058:                                                                        //ldarg.0
	IL_2059:                                                                        //isinst				Reflector::CodeModel::ITypeOfExpression
	IL_205e:            V_41=dynamic_cast<Reflector::CodeModel::ITypeOfExpression^>(A_0);//stloc.s				V_41
	IL_2060:                                                                        //ldc.i4				0x18
	IL_2065:            V_64=24;                                                    //stloc				V_64
	IL_2069:            /*goto IL_0019;*/goto IL_206e;                              //br				IL_0019
	IL_206e:                                                                        //ldloc.s				V_41
	IL_2070:            if(V_41==nullptr)goto IL_13c1;                              //brfalse				IL_13c1
	IL_2075:                                                                        //ldc.i4				0x7b
	IL_207a:            V_64=123;                                                   //stloc				V_64
	IL_207e:            /*goto IL_0019;*/goto IL_2083;                              //br				IL_0019
	IL_2083:            goto IL_1d94;                                               //br				IL_1d94
	IL_2088:                                                                        //ldloc.2
	IL_2089:            Temp_65=V_2->Field;                                         //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_208e:            Temp_66=Temp_65->FieldType;                                 //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_2093:            return Temp_66;                                             //ret
	IL_2094:                                                                        //ldarg.0
	IL_2095:                                                                        //isinst				Reflector::CodeModel::IGenericDefaultExpression
	IL_209a:            V_59=dynamic_cast<Reflector::CodeModel::IGenericDefaultExpression^>(A_0);//stloc.s				V_59
	IL_209c:                                                                        //ldc.i4				0xc5
	IL_20a1:            V_64=197;                                                   //stloc				V_64
	IL_20a5:            /*goto IL_0019;*/goto IL_20aa;                              //br				IL_0019
	IL_20aa:                                                                        //ldloc.s				V_59
	IL_20ac:            if(V_59==nullptr)goto IL_229c;                              //brfalse				IL_229c
	IL_20b1:                                                                        //ldc.i4				0x82
	IL_20b6:            V_64=130;                                                   //stloc				V_64
	IL_20ba:            /*goto IL_0019;*/goto IL_20bf;                              //br				IL_0019
	IL_20bf:            goto IL_181e;                                               //br				IL_181e
	IL_20c4:                                                                        //ldarg.0
	IL_20c5:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_20ca:            V_5=dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(A_0);//stloc.s				V_5
	IL_20cc:                                                                        //ldc.i4				0x47
	IL_20d1:            V_64=71;                                                    //stloc				V_64
	IL_20d5:            /*goto IL_0019;*/goto IL_20da;                              //br				IL_0019
	IL_20da:                                                                        //ldloc.s				V_5
	IL_20dc:            if(V_5==nullptr)goto IL_1ec6;                               //brfalse				IL_1ec6
	IL_20e1:                                                                        //ldc.i4				0x58
	IL_20e6:            V_64=88;                                                    //stloc				V_64
	IL_20ea:            /*goto IL_0019;*/goto IL_20ef;                              //br				IL_0019
	IL_20ef:            goto IL_186f;                                               //br				IL_186f
	IL_20f4:                                                                        //ldloc.s				V_33
	IL_20f6:            return V_33;                                                //ret
	IL_20f7:                                                                        //ldc.i4				0xc4
	IL_20fc:            V_64=196;                                                   //stloc				V_64
	IL_2100:            /*goto IL_0019;*/goto IL_2105;                              //br				IL_0019
	IL_2105:                                                                        //ldloc.s				V_20
	IL_2107:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_210c:                                                                        //ldloc				V_65
	IL_2110:            Temp_320=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2115:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0730\x0732"
	IL_211a:                                                                        //ldloc				V_65
	IL_211e:            Temp_321=a(L"\x622A\x432C\x5B2E\x0730\x0732",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2123:            Temp_322=Root::T_x183::M_x1(V_20,Temp_320,Temp_321);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_2128:            if(!Temp_322)goto IL_0cf7;                                  //brfalse				IL_0cf7
	IL_212d:                                                                        //ldc.i4				0x43
	IL_2132:            V_64=67;                                                    //stloc				V_64
	IL_2136:            /*goto IL_0019;*/goto IL_213b;                              //br				IL_0019
	IL_213b:            goto IL_12d9;                                               //br				IL_12d9
	IL_2140:                                                                        //ldarg.0
	IL_2141:                                                                        //isinst				Reflector::CodeModel::IDelegateCreateExpression
	IL_2146:            V_50=dynamic_cast<Reflector::CodeModel::IDelegateCreateExpression^>(A_0);//stloc.s				V_50
	IL_2148:                                                                        //ldc.i4				0x24
	IL_214d:            V_64=36;                                                    //stloc				V_64
	IL_2151:            /*goto IL_0019;*/goto IL_2156;                              //br				IL_0019
	IL_2156:                                                                        //ldloc.s				V_50
	IL_2158:            if(V_50==nullptr)goto IL_19b0;                              //brfalse				IL_19b0
	IL_215d:                                                                        //ldc.i4				0x37
	IL_2162:            V_64=55;                                                    //stloc				V_64
	IL_2166:            /*goto IL_0019;*/goto IL_216b;                              //br				IL_0019
	IL_216b:            goto IL_05bc;                                               //br				IL_05bc
	IL_2170:                                                                        //ldarg.0
	IL_2171:                                                                        //isinst				Reflector::CodeModel::IArgumentListExpression
	IL_2176:            V_57=dynamic_cast<Reflector::CodeModel::IArgumentListExpression^>(A_0);//stloc.s				V_57
	IL_2178:                                                                        //ldc.i4				0x64
	IL_217d:            V_64=100;                                                   //stloc				V_64
	IL_2181:            /*goto IL_0019;*/goto IL_2186;                              //br				IL_0019
	IL_2186:                                                                        //ldloc.s				V_57
	IL_2188:            if(V_57==nullptr)goto IL_19e0;                              //brfalse				IL_19e0
	IL_218d:                                                                        //ldc.i4				0x2c
	IL_2192:            V_64=44;                                                    //stloc				V_64
	IL_2196:            /*goto IL_0019;*/goto IL_219b;                              //br				IL_0019
	IL_219b:            goto IL_04bc;                                               //br				IL_04bc
	IL_21a0:                                                                        //ldarg.1
	IL_21a1:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_21a6:                                                                        //ldloc				V_65
	IL_21aa:            Temp_82=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_21af:                                                                        //ldstr				L"\x782A\x6F2C\x562E\x4530\x5632"
	IL_21b4:                                                                        //ldloc				V_65
	IL_21b8:            Temp_83=a(L"\x782A\x6F2C\x562E\x4530\x5632",V_65);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_21bd:            Temp_84=Root::T_x183::M_x1(A_1,Temp_82,Temp_83);            //call				Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^,System::String^,System::String^)
	IL_21c2:            return safe_cast<Reflector::CodeModel::IType^>(Temp_84);    //ret
	IL_21c3:                                                                        //ldloc.s				V_18
	IL_21c5:            Temp_217=V_18->Operator;                                    //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_21ca:                                                                        //box				Reflector::CodeModel::BinaryOperator
	IL_21cf:            Temp_218=Temp_217.ToString();                               //call				System::String^ System::Enum::ToString()
	IL_21d4:            Temp_219=gcnew System::NotSupportedException(Temp_218);     //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_21d9:            throw Temp_219;                                             //throw
	IL_21da:                                                                        //ldc.i4				0xc
	IL_21df:            V_64=12;                                                    //stloc				V_64
	IL_21e3:            /*goto IL_0019;*/goto IL_21e8;                              //br				IL_0019
	IL_21e8:                                                                        //ldloc.s				V_20
	IL_21ea:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_21ef:                                                                        //ldloc				V_65
	IL_21f3:            Temp_18=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_21f8:                                                                        //ldstr				L"\x782A\x442C\x412E\x5630\x5F32\x5034"
	IL_21fd:                                                                        //ldloc				V_65
	IL_2201:            Temp_19=a(L"\x782A\x442C\x412E\x5630\x5F32\x5034",V_65);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2206:            Temp_20=Root::T_x183::M_x1(V_20,Temp_18,Temp_19);           //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_220b:            if(!Temp_20)goto IL_17d5;                                   //brfalse				IL_17d5
	IL_2210:                                                                        //ldc.i4				0x28
	IL_2215:            V_64=40;                                                    //stloc				V_64
	IL_2219:            /*goto IL_0019;*/goto IL_221e;                              //br				IL_0019
	IL_221e:            goto IL_0d3d;                                               //br				IL_0d3d
	IL_2223:                                                                        //ldarg.0
	IL_2224:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_2229:            V_17=dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(A_0);//stloc.s				V_17
	IL_222b:                                                                        //ldc.i4				0x84
	IL_2230:            V_64=132;                                                   //stloc				V_64
	IL_2234:            /*goto IL_0019;*/goto IL_2239;                              //br				IL_0019
	IL_2239:                                                                        //ldloc.s				V_17
	IL_223b:            if(V_17==nullptr)goto IL_141a;                              //brfalse				IL_141a
	IL_2240:                                                                        //ldc.i4				0x8f
	IL_2245:            V_64=143;                                                   //stloc				V_64
	IL_2249:            /*goto IL_0019;*/goto IL_224e;                              //br				IL_0019
	IL_224e:            goto IL_074f;                                               //br				IL_074f
	IL_2253:                                                                        //ldc.i4				0xa7
	IL_2258:            V_64=167;                                                   //stloc				V_64
	IL_225c:            /*goto IL_0019;*/goto IL_2261;                              //br				IL_0019
	IL_2261:                                                                        //ldloc.s				V_20
	IL_2263:                                                                        //ldstr				L"\x782A\x542C\x5C2E\x4530\x5632\x5834"
	IL_2268:                                                                        //ldloc				V_65
	IL_226c:            Temp_262=a(L"\x782A\x542C\x5C2E\x4530\x5632\x5834",V_65);   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_2271:                                                                        //ldstr				L"\x622A\x432C\x5B2E\x0230\x0132"
	IL_2276:                                                                        //ldloc				V_65
	IL_227a:            Temp_263=a(L"\x622A\x432C\x5B2E\x0230\x0132",V_65);         //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_227f:            Temp_264=Root::T_x183::M_x1(V_20,Temp_262,Temp_263);        //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_2284:            if(!Temp_264)goto IL_0f04;                                  //brfalse				IL_0f04
	IL_2289:                                                                        //ldc.i4				0x48
	IL_228e:            V_64=72;                                                    //stloc				V_64
	IL_2292:            /*goto IL_0019;*/goto IL_2297;                              //br				IL_0019
	IL_2297:            goto IL_1f7e;                                               //br				IL_1f7e
	IL_229c:            Temp_323=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_22a1:                                                                        //ldstr				L"\x7E2A\x432C\x442E\x5E30\x4432\x5B34\x1736\x5C38\x433A\x4D3C\x4D3E\x2440\x3042\x3644\x2E46\x2648\x254A\x6D4C\x3B4E\x2850\x2352\x3054\x7756\x7E58\x205A\x6D5C\x225E\x4660\x4D62"
	IL_22a6:                                                                        //ldloc				V_65
	IL_22aa:            Temp_324=a(L"\x7E2A\x432C\x442E\x5E30\x4432\x5B34\x1736\x5C38\x433A\x4D3C\x4D3E\x2440\x3042\x3644\x2E46\x2648\x254A\x6D4C\x3B4E\x2850\x2352\x3054\x7756\x7E58\x205A\x6D5C\x225E\x4660\x4D62",V_65);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_22af:                                                                        //ldc.i4.1
	IL_22b0:            Temp_325=gcnew array<System::Object^>(1);                   //newarr				System::Object
	IL_22b5:            V_61=Temp_325;                                              //stloc.s				V_61
	IL_22b7:                                                                        //ldloc.s				V_61
	IL_22b9:                                                                        //ldc.i4.0
	IL_22ba:                                                                        //ldarg.0
	IL_22bb:            Temp_326=A_0->GetType();                                    //callvirt				System::Type^ System::Object::GetType()
	IL_22c0:            Temp_327=Temp_326->FullName;                                //callvirt				System::String^ System::Type::get_FullName()
	IL_22c5:            V_61[0]=safe_cast<System::Object^>(Temp_327);               //stelem.ref
	IL_22c6:                                                                        //ldloc.s				V_61
	IL_22c8:            Temp_328=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_323),Temp_324,V_61);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_22cd:            Temp_329=gcnew System::NotSupportedException(Temp_328);     //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_22d2:            throw Temp_329;                                             //throw

}
inline Reflector::CodeModel::IVariableReferenceExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^ A_0,System::Boolean A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Boolean Temp_0 = false;
	Reflector::CodeModel::IExpression^ Temp_1 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ Temp_2 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_3 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ Temp_4 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::BinaryOperator Temp_7 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::IExpression^ Temp_8 = nullptr;
	Reflector::CodeModel::BinaryOperator Temp_9 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::BinaryOperator Temp_10 = (Reflector::CodeModel::BinaryOperator)0;
	System::Int32 Temp_11 = 0;
	System::Int32 Temp_12 = 0;
	System::Int32 Temp_13 = 0;
	//local variables.
	Reflector::CodeModel::BinaryOperator V_0 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::BinaryOperator V_1 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::BinaryOperator V_2 = (Reflector::CodeModel::BinaryOperator)0;
	Reflector::CodeModel::IBinaryExpression^ V_3 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ V_4 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ V_5 = nullptr;
	Reflector::CodeModel::IVariableReferenceExpression^ V_6 = nullptr;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_7=5;                                                      //stloc				V_7
	IL_0009:            /*goto IL_0010;*/goto IL_000b;                              //br.s				IL_0010
	IL_000b:            goto IL_0091;                                               //br				IL_0091
	IL_0010:                                                                        //ldloc				V_7
	IL_0014:            switch(V_7){case 0:goto IL_02b4;case 1:goto IL_01f1;case 2:goto IL_00fd;case 3:goto IL_015a;case 4:goto IL_01d3;case 5:goto IL_000b;case 6:goto IL_02dd;case 7:goto IL_00d8;case 8:goto IL_02fa;case 9:goto IL_0279;case 10:goto IL_01c1;case 11:goto IL_00a5;case 12:goto IL_0220;case 13:goto IL_00ed;case 14:goto IL_029e;case 15:goto IL_020c;case 16:goto IL_012c;case 17:goto IL_028d;case 18:goto IL_01b1;case 19:goto IL_016d;case 20:goto IL_00c3;case 21:goto IL_02c9;case 22:goto IL_0184;case 23:goto IL_0233;case 24:goto IL_0140;case 25:goto IL_0264;case 26:goto IL_0322;case 27:goto IL_0119;case 28:goto IL_0197;case 29:goto IL_030f;};//switch				(IL_02b4,IL_01f1,IL_00fd,IL_015a,IL_01d3,IL_000b,IL_02dd,IL_00d8,IL_02fa,IL_0279,IL_01c1,IL_00a5,IL_0220,IL_00ed,IL_029e,IL_020c,IL_012c,IL_028d,IL_01b1,IL_016d,IL_00c3,IL_02c9,IL_0184,IL_0233,IL_0140,IL_0264,IL_0322,IL_0119,IL_0197,IL_030f)
	IL_0091:                                                                        //ldarg.1
	IL_0092:            if(A_1)goto IL_011e;                                        //brtrue				IL_011e
	IL_0097:                                                                        //ldc.i4				0xb
	IL_009c:            V_7=11;                                                     //stloc				V_7
	IL_00a0:            /*goto IL_0010;*/goto IL_00a5;                              //br				IL_0010
	IL_00a5:                                                                        //ldc.i4.2
	IL_00a6:                                                                        //dup
	IL_00a7:                                                                        //dup
	IL_00a8:                                                                        //ldc.i4.4
	IL_00a9:                                                                        //add
	IL_00aa:                                                                        //bgt				IL_00a6
	IL_00af:                                                                        //pop
	IL_00b0:            goto IL_02a6;                                               //br				IL_02a6
	IL_00b5:                                                                        //ldc.i4				0x14
	IL_00ba:            V_7=20;                                                     //stloc				V_7
	IL_00be:            /*goto IL_0010;*/goto IL_00c3;                              //br				IL_0010
	IL_00c3:                                                                        //ldc.i4.s				9
	IL_00c5:            Temp_13=9;goto IL_02ba;                                     //br				IL_02ba
	IL_00ca:                                                                        //ldc.i4				0x7
	IL_00cf:            V_7=7;                                                      //stloc				V_7
	IL_00d3:            /*goto IL_0010;*/goto IL_00d8;                              //br				IL_0010
	IL_00d8:                                                                        //ldloc.s				V_6
	IL_00da:            if(V_6==nullptr)goto IL_0329;                               //brfalse				IL_0329
	IL_00df:                                                                        //ldc.i4				0xd
	IL_00e4:            V_7=13;                                                     //stloc				V_7
	IL_00e8:            /*goto IL_0010;*/goto IL_00ed;                              //br				IL_0010
	IL_00ed:            goto IL_00ef;                                               //br.s				IL_00ef
	IL_00ef:                                                                        //ldc.i4				0x2
	IL_00f4:            V_7=2;                                                      //stloc				V_7
	IL_00f8:            /*goto IL_0010;*/goto IL_00fd;                              //br				IL_0010
	IL_00fd:                                                                        //ldloc.s				V_5
	IL_00ff:                                                                        //ldloc.s				V_6
	IL_0101:            Temp_0=V_5->Equals(safe_cast<System::Object^>(V_6));        //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0106:            if(!Temp_0)goto IL_0329;                                    //brfalse				IL_0329
	IL_010b:                                                                        //ldc.i4				0x1b
	IL_0110:            V_7=27;                                                     //stloc				V_7
	IL_0114:            /*goto IL_0010;*/goto IL_0119;                              //br				IL_0010
	IL_0119:            goto IL_02b7;                                               //br				IL_02b7
	IL_011e:                                                                        //ldc.i4				0x10
	IL_0123:            V_7=16;                                                     //stloc				V_7
	IL_0127:            /*goto IL_0010;*/goto IL_012c;                              //br				IL_0010
	IL_012c:                                                                        //ldc.i4.8
	IL_012d:            Temp_12=8;goto IL_027e;                                     //br				IL_027e
	IL_0132:                                                                        //ldc.i4				0x18
	IL_0137:            V_7=24;                                                     //stloc				V_7
	IL_013b:            /*goto IL_0010;*/goto IL_0140;                              //br				IL_0010
	IL_0140:                                                                        //ldloc.3
	IL_0141:            Temp_9=V_3->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0146:                                                                        //ldloc.2
	IL_0147:            if(Temp_9!=V_2)goto IL_0329;                                //bne.un				IL_0329
	IL_014c:                                                                        //ldc.i4				0x3
	IL_0151:            V_7=3;                                                      //stloc				V_7
	IL_0155:            /*goto IL_0010;*/goto IL_015a;                              //br				IL_0010
	IL_015a:            goto IL_023a;                                               //br				IL_023a
	IL_015f:                                                                        //ldc.i4				0x13
	IL_0164:            V_7=19;                                                     //stloc				V_7
	IL_0168:            /*goto IL_0010;*/goto IL_016d;                              //br				IL_0010
	IL_016d:                                                                        //ldloc.3
	IL_016e:            Temp_7=V_3->Operator;                                       //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_0173:                                                                        //ldloc.1
	IL_0174:            if(Temp_7!=V_1)goto IL_0132;                                //bne.un.s				IL_0132
	IL_0176:                                                                        //ldc.i4				0x16
	IL_017b:            V_7=22;                                                     //stloc				V_7
	IL_017f:            /*goto IL_0010;*/goto IL_0184;                              //br				IL_0010
	IL_0184:            goto IL_02df;                                               //br				IL_02df
	IL_0189:                                                                        //ldc.i4				0x1c
	IL_018e:            V_7=28;                                                     //stloc				V_7
	IL_0192:            /*goto IL_0010;*/goto IL_0197;                              //br				IL_0010
	IL_0197:                                                                        //ldloc.3
	IL_0198:            Temp_10=V_3->Operator;                                      //callvirt				Reflector::CodeModel::BinaryOperator Reflector::CodeModel::IBinaryExpression::get_Operator()
	IL_019d:                                                                        //ldloc.0
	IL_019e:            if(Temp_10==V_0)goto IL_02df;                               //beq				IL_02df
	IL_01a3:                                                                        //ldc.i4				0x12
	IL_01a8:            V_7=18;                                                     //stloc				V_7
	IL_01ac:            /*goto IL_0010;*/goto IL_01b1;                              //br				IL_0010
	IL_01b1:            goto IL_015f;                                               //br.s				IL_015f
	IL_01b3:                                                                        //ldc.i4				0xa
	IL_01b8:            V_7=10;                                                     //stloc				V_7
	IL_01bc:            /*goto IL_0010;*/goto IL_01c1;                              //br				IL_0010
	IL_01c1:                                                                        //ldc.i4.s				15
	IL_01c3:            Temp_11=15;goto IL_01f6;                                    //br.s				IL_01f6
	IL_01c5:                                                                        //ldc.i4				0x4
	IL_01ca:            V_7=4;                                                      //stloc				V_7
	IL_01ce:            /*goto IL_0010;*/goto IL_01d3;                              //br				IL_0010
	IL_01d3:                                                                        //ldloc.3
	IL_01d4:            Temp_5=V_3->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_01d9:            Temp_6=Root::T_x183::M_x2(Temp_5);                          //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^)
	IL_01de:            if(!Temp_6)goto IL_0132;                                    //brfalse				IL_0132
	IL_01e3:                                                                        //ldc.i4				0x1
	IL_01e8:            V_7=1;                                                      //stloc				V_7
	IL_01ec:            /*goto IL_0010;*/goto IL_01f1;                              //br				IL_0010
	IL_01f1:            goto IL_02a3;                                               //br				IL_02a3
	IL_01f6:            V_2=safe_cast<Reflector::CodeModel::BinaryOperator>(Temp_11);/*warning ! semantic stack doesn't empty at joint !;*///stloc.2
	IL_01f7:                                                                        //ldarg.0
	IL_01f8:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_01fd:            V_3=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.3
	IL_01fe:                                                                        //ldc.i4				0xf
	IL_0203:            V_7=15;                                                     //stloc				V_7
	IL_0207:            /*goto IL_0010;*/goto IL_020c;                              //br				IL_0010
	IL_020c:                                                                        //ldloc.3
	IL_020d:            if(V_3==nullptr)goto IL_0329;                               //brfalse				IL_0329
	IL_0212:                                                                        //ldc.i4				0xc
	IL_0217:            V_7=12;                                                     //stloc				V_7
	IL_021b:            /*goto IL_0010;*/goto IL_0220;                              //br				IL_0010
	IL_0220:            goto IL_0189;                                               //br				IL_0189
	IL_0225:                                                                        //ldc.i4				0x17
	IL_022a:            V_7=23;                                                     //stloc				V_7
	IL_022e:            /*goto IL_0010;*/goto IL_0233;                              //br				IL_0010
	IL_0233:                                                                        //ldc.i4.s				10
	IL_0235:            Temp_13=10;goto IL_02ba;                                    //br				IL_02ba
	IL_023a:                                                                        //ldloc.3
	IL_023b:            Temp_1=V_3->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_0240:                                                                        //ldarg.1
	IL_0241:            Temp_2=Root::T_x183::M_x1(Temp_1,A_1);                      //call				Reflector::CodeModel::IVariableReferenceExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,System::Boolean)
	IL_0246:            V_5=Temp_2;                                                 //stloc.s				V_5
	IL_0248:                                                                        //ldloc.3
	IL_0249:            Temp_3=V_3->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_024e:                                                                        //ldarg.1
	IL_024f:            Temp_4=Root::T_x183::M_x1(Temp_3,A_1);                      //call				Reflector::CodeModel::IVariableReferenceExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IExpression^,System::Boolean)
	IL_0254:            V_6=Temp_4;                                                 //stloc.s				V_6
	IL_0256:                                                                        //ldc.i4				0x19
	IL_025b:            V_7=25;                                                     //stloc				V_7
	IL_025f:            /*goto IL_0010;*/goto IL_0264;                              //br				IL_0010
	IL_0264:                                                                        //ldloc.s				V_5
	IL_0266:            if(V_5==nullptr)goto IL_0329;                               //brfalse				IL_0329
	IL_026b:                                                                        //ldc.i4				0x9
	IL_0270:            V_7=9;                                                      //stloc				V_7
	IL_0274:            /*goto IL_0010;*/goto IL_0279;                              //br				IL_0010
	IL_0279:            goto IL_00ca;                                               //br				IL_00ca
	IL_027e:            Temp_12=7;V_0=safe_cast<Reflector::CodeModel::BinaryOperator>(Temp_12);/*warning ! semantic stack doesn't empty at joint !;*///stloc.0
	IL_027f:                                                                        //ldc.i4				0x11
	IL_0284:            V_7=17;                                                     //stloc				V_7
	IL_0288:            /*goto IL_0010;*/goto IL_028d;                              //br				IL_0010
	IL_028d:                                                                        //ldarg.1
	IL_028e:            if(A_1)goto IL_0225;                                        //brtrue.s				IL_0225
	IL_0290:                                                                        //ldc.i4				0xe
	IL_0295:            V_7=14;                                                     //stloc				V_7
	IL_0299:            /*goto IL_0010;*/goto IL_029e;                              //br				IL_0010
	IL_029e:            goto IL_00b5;                                               //br				IL_00b5
	IL_02a3:                                                                        //ldloc.s				V_4
	IL_02a5:            return V_4;                                                 //ret
	IL_02a6:                                                                        //ldc.i4				0x0
	IL_02ab:            V_7=0;                                                      //stloc				V_7
	IL_02af:            /*goto IL_0010;*/goto IL_02b4;                              //br				IL_0010
	IL_02b4:                                                                        //ldc.i4.7
	IL_02b5:            goto IL_027e;                                               //br.s				IL_027e
	IL_02b7:                                                                        //ldloc.s				V_5
	IL_02b9:            return V_5;                                                 //ret
	IL_02ba:            V_1=safe_cast<Reflector::CodeModel::BinaryOperator>(Temp_13);/*warning ! semantic stack doesn't empty at joint !;*///stloc.1
	IL_02bb:                                                                        //ldc.i4				0x15
	IL_02c0:            V_7=21;                                                     //stloc				V_7
	IL_02c4:            /*goto IL_0010;*/goto IL_02c9;                              //br				IL_0010
	IL_02c9:                                                                        //ldarg.1
	IL_02ca:            if(A_1)goto IL_01b3;                                        //brtrue				IL_01b3
	IL_02cf:                                                                        //ldc.i4				0x6
	IL_02d4:            V_7=6;                                                      //stloc				V_7
	IL_02d8:            /*goto IL_0010;*/goto IL_02dd;                              //br				IL_0010
	IL_02dd:            goto IL_0314;                                               //br.s				IL_0314
	IL_02df:                                                                        //ldloc.3
	IL_02e0:            Temp_8=V_3->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_02e5:                                                                        //isinst				Reflector::CodeModel::IVariableReferenceExpression
	IL_02ea:            V_4=dynamic_cast<Reflector::CodeModel::IVariableReferenceExpression^>(Temp_8);//stloc.s				V_4
	IL_02ec:                                                                        //ldc.i4				0x8
	IL_02f1:            V_7=8;                                                      //stloc				V_7
	IL_02f5:            /*goto IL_0010;*/goto IL_02fa;                              //br				IL_0010
	IL_02fa:                                                                        //ldloc.s				V_4
	IL_02fc:            if(V_4==nullptr)goto IL_0132;                               //brfalse				IL_0132
	IL_0301:                                                                        //ldc.i4				0x1d
	IL_0306:            V_7=29;                                                     //stloc				V_7
	IL_030a:            /*goto IL_0010;*/goto IL_030f;                              //br				IL_0010
	IL_030f:            goto IL_01c5;                                               //br				IL_01c5
	IL_0314:                                                                        //ldc.i4				0x1a
	IL_0319:            V_7=26;                                                     //stloc				V_7
	IL_031d:            /*goto IL_0010;*/goto IL_0322;                              //br				IL_0010
	IL_0322:                                                                        //ldc.i4.s				14
	IL_0324:            Temp_11=14;goto IL_01f6;                                    //br				IL_01f6
	IL_0329:                                                                        //ldnull
	IL_032a:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IExpression^ A_0,System::String^ A_1,System::String^ A_2,System::String^ A_3,System::Int32 A_4)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::IExpressionCollection^ Temp_1 = nullptr;
	System::Int32 Temp_2 = 0;
	Reflector::CodeModel::IMethodReference^ Temp_3 = nullptr;
	Reflector::CodeModel::IType^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::IMethodReference^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	Reflector::CodeModel::IMethodInvokeExpression^ V_0 = nullptr;
	Reflector::CodeModel::IMethodReferenceExpression^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_003e;                                               //br.s				IL_003e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //sub
	IL_0007:                                                                        //blt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_2
	IL_0011:            switch(V_2){case 0:goto IL_00f1;case 1:goto IL_00d4;case 2:goto IL_0093;case 3:goto IL_0120;case 4:goto IL_010f;case 5:goto IL_006e;case 6:goto IL_00a3;case 7:goto IL_0050;case 8:goto IL_0061;case 9:goto IL_00c4;};//switch				(IL_00f1,IL_00d4,IL_0093,IL_0120,IL_010f,IL_006e,IL_00a3,IL_0050,IL_0061,IL_00c4)
	IL_003e:                                                                        //ldarg.0
	IL_003f:                                                                        //isinst				Reflector::CodeModel::IMethodInvokeExpression
	IL_0044:            V_0=dynamic_cast<Reflector::CodeModel::IMethodInvokeExpression^>(A_0);//stloc.0
	IL_0045:                                                                        //ldc.i4				0x7
	IL_004a:            V_2=7;                                                      //stloc				V_2
	IL_004e:            /*goto IL_0002;*/goto IL_0050;                              //br.s				IL_0002
	IL_0050:                                                                        //ldloc.0
	IL_0051:            if(V_0==nullptr)goto IL_0125;                               //brfalse				IL_0125
	IL_0056:                                                                        //ldc.i4				0x8
	IL_005b:            V_2=8;                                                      //stloc				V_2
	IL_005f:            /*goto IL_0002;*/goto IL_0061;                              //br.s				IL_0002
	IL_0061:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_0063:                                                                        //ldc.i4				0x5
	IL_0068:            V_2=5;                                                      //stloc				V_2
	IL_006c:            /*goto IL_0002;*/goto IL_006e;                              //br.s				IL_0002
	IL_006e:                                                                        //ldloc.1
	IL_006f:            Temp_3=V_1->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceExpression::get_Method()
	IL_0074:            Temp_4=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_3)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0079:                                                                        //ldarg.1
	IL_007a:                                                                        //ldarg.2
	IL_007b:            Temp_5=Root::T_x183::M_x1(Temp_4,A_1,A_2);                  //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0080:            if(!Temp_5)goto IL_0125;                                    //brfalse				IL_0125
	IL_0085:                                                                        //ldc.i4				0x2
	IL_008a:            V_2=2;                                                      //stloc				V_2
	IL_008e:            /*goto IL_0002;*/goto IL_0093;                              //br				IL_0002
	IL_0093:            goto IL_00f3;                                               //br.s				IL_00f3
	IL_0095:                                                                        //ldc.i4				0x6
	IL_009a:            V_2=6;                                                      //stloc				V_2
	IL_009e:            /*goto IL_0002;*/goto IL_00a3;                              //br				IL_0002
	IL_00a3:                                                                        //ldloc.1
	IL_00a4:            Temp_6=V_1->Method;                                         //callvirt				Reflector::CodeModel::IMethodReference^ Reflector::CodeModel::IMethodReferenceExpression::get_Method()
	IL_00a9:            Temp_7=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_6)->Name;//callvirt				System::String^ Reflector::CodeModel::IMemberReference::get_Name()
	IL_00ae:                                                                        //ldarg.3
	IL_00af:            Temp_8=(Temp_7 == A_3);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b4:            if(!Temp_8)goto IL_0125;                                    //brfalse.s				IL_0125
	IL_00b6:                                                                        //ldc.i4				0x9
	IL_00bb:            V_2=9;                                                      //stloc				V_2
	IL_00bf:            /*goto IL_0002;*/goto IL_00c4;                              //br				IL_0002
	IL_00c4:            goto IL_0063;                                               //br.s				IL_0063
	IL_00c6:                                                                        //ldc.i4				0x1
	IL_00cb:            V_2=1;                                                      //stloc				V_2
	IL_00cf:            /*goto IL_0002;*/goto IL_00d4;                              //br				IL_0002
	IL_00d4:                                                                        //ldloc.0
	IL_00d5:            Temp_1=V_0->Arguments;                                      //callvirt				Reflector::CodeModel::IExpressionCollection^ Reflector::CodeModel::IMethodInvokeExpression::get_Arguments()
	IL_00da:            Temp_2=safe_cast<System::Collections::ICollection^>(Temp_1)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00df:                                                                        //ldarg.s				A_4
	IL_00e1:            if(Temp_2!=A_4)goto IL_0125;                                //bne.un.s				IL_0125
	IL_00e3:                                                                        //ldc.i4				0x0
	IL_00e8:            V_2=0;                                                      //stloc				V_2
	IL_00ec:            /*goto IL_0002;*/goto IL_00f1;                              //br				IL_0002
	IL_00f1:            goto IL_00f5;                                               //br.s				IL_00f5
	IL_00f3:                                                                        //ldc.i4.1
	IL_00f4:            return true;                                                //ret
	IL_00f5:                                                                        //ldloc.0
	IL_00f6:            Temp_0=V_0->Method;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IMethodInvokeExpression::get_Method()
	IL_00fb:                                                                        //isinst				Reflector::CodeModel::IMethodReferenceExpression
	IL_0100:            V_1=dynamic_cast<Reflector::CodeModel::IMethodReferenceExpression^>(Temp_0);//stloc.1
	IL_0101:                                                                        //ldc.i4				0x4
	IL_0106:            V_2=4;                                                      //stloc				V_2
	IL_010a:            /*goto IL_0002;*/goto IL_010f;                              //br				IL_0002
	IL_010f:                                                                        //ldloc.1
	IL_0110:            if(V_1==nullptr)goto IL_0125;                               //brfalse.s				IL_0125
	IL_0112:                                                                        //ldc.i4				0x3
	IL_0117:            V_2=3;                                                      //stloc				V_2
	IL_011b:            /*goto IL_0002;*/goto IL_0120;                              //br				IL_0002
	IL_0120:            goto IL_0095;                                               //br				IL_0095
	IL_0125:                                                                        //ldc.i4.0
	IL_0126:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ Temp_1 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_2 = nullptr;
	Reflector::CodeModel::IType^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IFieldReference^ Temp_5 = nullptr;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	Reflector::CodeModel::IFieldReference^ Temp_7 = nullptr;
	Reflector::CodeModel::IType^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	//local variables.
	Reflector::CodeModel::ITypeReferenceExpression^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x4
	IL_0005:            V_1=4;                                                      //stloc				V_1
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_1
	IL_0011:            switch(V_1){case 0:goto IL_00b8;case 1:goto IL_0056;case 2:goto IL_008b;case 3:goto IL_00a7;case 4:goto IL_000b;case 5:goto IL_0068;};//switch				(IL_00b8,IL_0056,IL_008b,IL_00a7,IL_000b,IL_0068)
	IL_002e:                                                                        //ldarg.0
	IL_002f:            Temp_5=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_0034:            Temp_6=Temp_5->FieldType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0039:                                                                        //ldarg.0
	IL_003a:            Temp_7=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_003f:            Temp_8=safe_cast<Reflector::CodeModel::IMemberReference^>(Temp_7)->DeclaringType;//callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IMemberReference::get_DeclaringType()
	IL_0044:            Temp_9=Temp_6->Equals(safe_cast<System::Object^>(Temp_8));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0049:            if(!Temp_9)goto IL_00ba;                                    //brfalse.s				IL_00ba
	IL_004b:                                                                        //ldc.i4				0x1
	IL_0050:            V_1=1;                                                      //stloc				V_1
	IL_0054:            /*goto IL_000d;*/goto IL_0056;                              //br.s				IL_000d
	IL_0056:            goto IL_0059;                                               //br.s				IL_0059
	IL_0058:                                                                        //break
	IL_0059:            goto IL_008d;                                               //br.s				IL_008d
	IL_005b:                                                                        //ldc.i4.1
	IL_005c:            return true;                                                //ret
	IL_005d:                                                                        //ldc.i4				0x5
	IL_0062:            V_1=5;                                                      //stloc				V_1
	IL_0066:            /*goto IL_000d;*/goto IL_0068;                              //br.s				IL_000d
	IL_0068:                                                                        //ldloc.0
	IL_0069:            Temp_1=V_0->Type;                                           //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeReferenceExpression::get_Type()
	IL_006e:                                                                        //ldarg.0
	IL_006f:            Temp_2=A_0->Field;                                          //callvirt				Reflector::CodeModel::IFieldReference^ Reflector::CodeModel::IFieldReferenceExpression::get_Field()
	IL_0074:            Temp_3=Temp_2->FieldType;                                   //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IFieldReference::get_FieldType()
	IL_0079:            Temp_4=Temp_1->Equals(safe_cast<System::Object^>(Temp_3));  //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_007e:            if(!Temp_4)goto IL_00ba;                                    //brfalse.s				IL_00ba
	IL_0080:                                                                        //ldc.i4				0x2
	IL_0085:            V_1=2;                                                      //stloc				V_1
	IL_0089:            /*goto IL_000d;*/goto IL_008b;                              //br.s				IL_000d
	IL_008b:            goto IL_005b;                                               //br.s				IL_005b
	IL_008d:                                                                        //ldarg.0
	IL_008e:            Temp_0=A_0->Target;                                         //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IFieldReferenceExpression::get_Target()
	IL_0093:                                                                        //isinst				Reflector::CodeModel::ITypeReferenceExpression
	IL_0098:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReferenceExpression^>(Temp_0);//stloc.0
	IL_0099:                                                                        //ldc.i4				0x3
	IL_009e:            V_1=3;                                                      //stloc				V_1
	IL_00a2:            /*goto IL_000d;*/goto IL_00a7;                              //br				IL_000d
	IL_00a7:                                                                        //ldloc.0
	IL_00a8:            if(V_0==nullptr)goto IL_00ba;                               //brfalse.s				IL_00ba
	IL_00aa:                                                                        //ldc.i4				0x0
	IL_00af:            V_1=0;                                                      //stloc				V_1
	IL_00b3:            /*goto IL_000d;*/goto IL_00b8;                              //br				IL_000d
	IL_00b8:            goto IL_005d;                                               //br.s				IL_005d
	IL_00ba:                                                                        //ldc.i4.0
	IL_00bb:            return false;                                               //ret

}
inline Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ICatchClauseCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::ICatchClauseCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::ICatchClause^ Temp_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_5 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_6 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_7 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_8 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_9 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_10 = nullptr;
	System::Int32 Temp_11 = 0;
	Reflector::CodeModel::IStatementCollection^ Temp_12 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_13 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_14 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_15 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_16 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_17 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_18 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_19 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_20 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_21 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_22 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_23 = nullptr;
	System::Int32 Temp_24 = 0;
	Reflector::CodeModel::IStatement^ Temp_25 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_26 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_27 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_28 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_29 = nullptr;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	Reflector::CodeModel::IStatement^ Temp_33 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_34 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_35 = nullptr;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_36 = nullptr;
	System::Int32 Temp_37 = 0;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_38 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_39 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_40 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_41 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_42 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_43 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_44 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_45 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_46 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_47 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_48 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_49 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_50 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_51 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_52 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_53 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_54 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_55 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_56 = nullptr;
	Reflector::CodeModel::IBlockStatement^ Temp_57 = nullptr;
	Reflector::CodeModel::ILabeledStatement^ Temp_58 = nullptr;
	//local variables.
	Reflector::CodeModel::ILabeledStatement^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IConditionStatement^ V_3 = nullptr;
	Reflector::CodeModel::IForStatement^ V_4 = nullptr;
	Reflector::CodeModel::IForEachStatement^ V_5 = nullptr;
	Reflector::CodeModel::IUsingStatement^ V_6 = nullptr;
	Reflector::CodeModel::IFixedStatement^ V_7 = nullptr;
	Reflector::CodeModel::ILockStatement^ V_8 = nullptr;
	Reflector::CodeModel::IWhileStatement^ V_9 = nullptr;
	Reflector::CodeModel::IDoStatement^ V_10 = nullptr;
	Reflector::CodeModel::ISwitchStatement^ V_11 = nullptr;
	System::Int32 V_12 = 0;
	Reflector::CodeModel::IConditionCase^ V_13 = nullptr;
	Reflector::CodeModel::IDefaultCase^ V_14 = nullptr;
	Reflector::CodeModel::ITryCatchFinallyStatement^ V_15 = nullptr;
	System::Int32 V_16 = 0;
	System::Int32 V_17 = 0;
	//method body ------- 
	IL_0000:            goto IL_0136;                                               //br				IL_0136
	IL_0005:                                                                        //ldloc				V_17
	IL_0009:            switch(V_17){case 0:goto IL_0351;case 1:goto IL_0737;case 2:goto IL_0722;case 3:goto IL_0539;case 4:goto IL_06a5;case 5:goto IL_07ec;case 6:goto IL_01e3;case 7:goto IL_016d;case 8:goto IL_0623;case 9:goto IL_024f;case 10:goto IL_0501;case 11:goto IL_0829;case 12:goto IL_07a0;case 13:goto IL_04ec;case 14:goto IL_033e;case 15:goto IL_03a7;case 16:goto IL_089e;case 17:goto IL_022c;case 18:goto IL_02f1;case 19:goto IL_0407;case 20:goto IL_01af;case 21:goto IL_076d;case 22:goto IL_054c;case 23:goto IL_08f1;case 24:goto IL_046f;case 25:goto IL_01c3;case 26:goto IL_03d5;case 27:goto IL_05a7;case 28:goto IL_05da;case 29:goto IL_07bb;case 30:goto IL_0480;case 31:goto IL_032a;case 32:goto IL_0305;case 33:goto IL_065a;case 34:goto IL_0782;case 35:goto IL_0148;case 36:goto IL_01f7;case 37:goto IL_0758;case 38:goto IL_0496;case 39:goto IL_06c4;case 40:goto IL_0646;case 41:goto IL_060e;case 42:goto IL_0372;case 43:goto IL_085e;case 44:goto IL_0182;case 45:goto IL_0814;case 46:goto IL_0874;case 47:goto IL_03e9;case 48:goto IL_05fd;case 49:goto IL_0451;case 50:goto IL_08dd;case 51:goto IL_04b7;case 52:goto IL_0524;case 53:goto IL_041b;case 54:goto IL_06fa;case 55:goto IL_0393;case 56:goto IL_0296;case 57:goto IL_067c;case 58:goto IL_0690;case 59:goto IL_0593;case 60:goto IL_08bd;case 61:goto IL_02b7;case 62:goto IL_088b;case 63:goto IL_07d8;case 64:goto IL_05c5;case 65:goto IL_027f;case 66:goto IL_06e5;case 67:goto IL_0264;case 68:goto IL_084a;case 69:goto IL_02cc;case 70:goto IL_0570;case 71:goto IL_0218;case 72:goto IL_043c;case 73:goto IL_04cb;};//switch				(IL_0351,IL_0737,IL_0722,IL_0539,IL_06a5,IL_07ec,IL_01e3,IL_016d,IL_0623,IL_024f,IL_0501,IL_0829,IL_07a0,IL_04ec,IL_033e,IL_03a7,IL_089e,IL_022c,IL_02f1,IL_0407,IL_01af,IL_076d,IL_054c,IL_08f1,IL_046f,IL_01c3,IL_03d5,IL_05a7,IL_05da,IL_07bb,IL_0480,IL_032a,IL_0305,IL_065a,IL_0782,IL_0148,IL_01f7,IL_0758,IL_0496,IL_06c4,IL_0646,IL_060e,IL_0372,IL_085e,IL_0182,IL_0814,IL_0874,IL_03e9,IL_05fd,IL_0451,IL_08dd,IL_04b7,IL_0524,IL_041b,IL_06fa,IL_0393,IL_0296,IL_067c,IL_0690,IL_0593,IL_08bd,IL_02b7,IL_088b,IL_07d8,IL_05c5,IL_027f,IL_06e5,IL_0264,IL_084a,IL_02cc,IL_0570,IL_0218,IL_043c,IL_04cb)
	IL_0136:                                                                        //ldnull
	IL_0137:            V_0=safe_cast<Reflector::CodeModel::ILabeledStatement^>(nullptr);//stloc.0
	IL_0138:                                                                        //ldc.i4.0
	IL_0139:            V_1=0;                                                      //stloc.1
	IL_013a:                                                                        //ldc.i4				0x23
	IL_013f:            V_17=35;                                                    //stloc				V_17
	IL_0143:            /*goto IL_0005;*/goto IL_0148;                              //br				IL_0005
	IL_0148:            goto IL_0697;                                               //br				IL_0697
	IL_014d:                                                                        //ldloc.0
	IL_014e:            return V_0;                                                 //ret
	IL_014f:                                                                        //ldloc.0
	IL_0150:            return V_0;                                                 //ret
	IL_0151:                                                                        //ldarg.1
	IL_0152:                                                                        //ldloc.2
	IL_0153:            Temp_53=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_0158:                                                                        //isinst				Reflector::CodeModel::IForStatement
	IL_015d:            V_4=dynamic_cast<Reflector::CodeModel::IForStatement^>(Temp_53);//stloc.s				V_4
	IL_015f:                                                                        //ldc.i4				0x7
	IL_0164:            V_17=7;                                                     //stloc				V_17
	IL_0168:            /*goto IL_0005;*/goto IL_016d;                              //br				IL_0005
	IL_016d:                                                                        //ldloc.s				V_4
	IL_016f:            if(V_4==nullptr)goto IL_04d0;                               //brfalse				IL_04d0
	IL_0174:                                                                        //ldc.i4				0x2c
	IL_0179:            V_17=44;                                                    //stloc				V_17
	IL_017d:            /*goto IL_0005;*/goto IL_0182;                              //br				IL_0005
	IL_0182:            goto IL_0453;                                               //br				IL_0453
	IL_0187:                                                                        //ldarg.0
	IL_0188:                                                                        //ldloc.s				V_15
	IL_018a:            Temp_2=V_15->CatchClauses;                                  //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_018f:                                                                        //ldloc.s				V_16
	IL_0191:            Temp_3=Temp_2[V_16];                                        //callvirt				Reflector::CodeModel::ICatchClause^ Reflector::CodeModel::ICatchClauseCollection::get_Item(System::Int32)
	IL_0196:            Temp_4=Temp_3->Body;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ICatchClause::get_Body()
	IL_019b:            Temp_5=Root::T_x183::M_x1(A_0,Temp_4);                      //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_01a0:            V_0=Temp_5;                                                 //stloc.0
	IL_01a1:                                                                        //ldc.i4				0x14
	IL_01a6:            V_17=20;                                                    //stloc				V_17
	IL_01aa:            /*goto IL_0005;*/goto IL_01af;                              //br				IL_0005
	IL_01af:                                                                        //ldloc.0
	IL_01b0:            if(V_0==nullptr)goto IL_026b;                               //brfalse				IL_026b
	IL_01b5:                                                                        //ldc.i4				0x19
	IL_01ba:            V_17=25;                                                    //stloc				V_17
	IL_01be:            /*goto IL_0005;*/goto IL_01c3;                              //br				IL_0005
	IL_01c3:            goto IL_0772;                                               //br				IL_0772
	IL_01c8:                                                                        //ldarg.0
	IL_01c9:                                                                        //ldloc.3
	IL_01ca:            Temp_54=V_3->Then;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Then()
	IL_01cf:            Temp_55=Root::T_x183::M_x1(A_0,Temp_54);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_01d4:            V_0=Temp_55;                                                //stloc.0
	IL_01d5:                                                                        //ldc.i4				0x6
	IL_01da:            V_17=6;                                                     //stloc				V_17
	IL_01de:            /*goto IL_0005;*/goto IL_01e3;                              //br				IL_0005
	IL_01e3:                                                                        //ldloc.0
	IL_01e4:            if(V_0==nullptr)goto IL_07bd;                               //brfalse				IL_07bd
	IL_01e9:                                                                        //ldc.i4				0x24
	IL_01ee:            V_17=36;                                                    //stloc				V_17
	IL_01f2:            /*goto IL_0005;*/goto IL_01f7;                              //br				IL_0005
	IL_01f7:            goto IL_030c;                                               //br				IL_030c
	IL_01fc:                                                                        //ldarg.0
	IL_01fd:                                                                        //ldloc.s				V_14
	IL_01ff:            Temp_6=safe_cast<Reflector::CodeModel::ISwitchCase^>(V_14)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_0204:            Temp_7=Root::T_x183::M_x1(A_0,Temp_6);                      //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_0209:            V_0=Temp_7;                                                 //stloc.0
	IL_020a:                                                                        //ldc.i4				0x47
	IL_020f:            V_17=71;                                                    //stloc				V_17
	IL_0213:            /*goto IL_0005;*/goto IL_0218;                              //br				IL_0005
	IL_0218:                                                                        //ldloc.0
	IL_0219:            if(V_0==nullptr)goto IL_07a7;                               //brfalse				IL_07a7
	IL_021e:                                                                        //ldc.i4				0x11
	IL_0223:            V_17=17;                                                    //stloc				V_17
	IL_0227:            /*goto IL_0005;*/goto IL_022c;                              //br				IL_0005
	IL_022c:            goto IL_014d;                                               //br				IL_014d
	IL_0231:                                                                        //ldloc.0
	IL_0232:            return V_0;                                                 //ret
	IL_0233:                                                                        //ldarg.1
	IL_0234:                                                                        //ldloc.2
	IL_0235:            Temp_49=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_023a:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_023f:            V_11=dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(Temp_49);//stloc.s				V_11
	IL_0241:                                                                        //ldc.i4				0x9
	IL_0246:            V_17=9;                                                     //stloc				V_17
	IL_024a:            /*goto IL_0005;*/goto IL_024f;                              //br				IL_0005
	IL_024f:                                                                        //ldloc.s				V_11
	IL_0251:            if(V_11==nullptr)goto IL_05a9;                              //brfalse				IL_05a9
	IL_0256:                                                                        //ldc.i4				0x43
	IL_025b:            V_17=67;                                                    //stloc				V_17
	IL_025f:            /*goto IL_0005;*/goto IL_0264;                              //br				IL_0005
	IL_0264:            goto IL_0863;                                               //br				IL_0863
	IL_0269:                                                                        //ldloc.0
	IL_026a:            return V_0;                                                 //ret
	IL_026b:                                                                        //ldloc.s				V_16
	IL_026d:                                                                        //ldc.i4.1
	IL_026e:                                                                        //add
	IL_026f:            V_16=(V_16 + 1);                                            //stloc.s				V_16
	IL_0271:                                                                        //ldc.i4				0x41
	IL_0276:            V_17=65;                                                    //stloc				V_17
	IL_027a:            /*goto IL_0005;*/goto IL_027f;                              //br				IL_0005
	IL_027f:            goto IL_0343;                                               //br				IL_0343
	IL_0284:                                                                        //ldloc.2
	IL_0285:                                                                        //ldc.i4.1
	IL_0286:                                                                        //add
	IL_0287:            V_2=(V_2 + 1);                                              //stloc.2
	IL_0288:                                                                        //ldc.i4				0x38
	IL_028d:            V_17=56;                                                    //stloc				V_17
	IL_0291:            /*goto IL_0005;*/goto IL_0296;                              //br				IL_0005
	IL_0296:            goto IL_0890;                                               //br				IL_0890
	IL_029b:                                                                        //ldarg.1
	IL_029c:                                                                        //ldloc.2
	IL_029d:            Temp_33=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_02a2:                                                                        //isinst				Reflector::CodeModel::ILockStatement
	IL_02a7:            V_8=dynamic_cast<Reflector::CodeModel::ILockStatement^>(Temp_33);//stloc.s				V_8
	IL_02a9:                                                                        //ldc.i4				0x3d
	IL_02ae:            V_17=61;                                                    //stloc				V_17
	IL_02b2:            /*goto IL_0005;*/goto IL_02b7;                              //br				IL_0005
	IL_02b7:                                                                        //ldloc.s				V_8
	IL_02b9:            if(V_8==nullptr)goto IL_073c;                               //brfalse				IL_073c
	IL_02be:                                                                        //ldc.i4				0x45
	IL_02c3:            V_17=69;                                                    //stloc				V_17
	IL_02c7:            /*goto IL_0005;*/goto IL_02cc;                              //br				IL_0005
	IL_02cc:            goto IL_0577;                                               //br				IL_0577
	IL_02d1:                                                                        //ldarg.1
	IL_02d2:            Temp_12=A_1->Statements;                                    //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_02d7:                                                                        //ldloc.1
	IL_02d8:            Temp_13=Temp_12[V_1];                                       //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_02dd:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_02e2:            V_0=dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(Temp_13);//stloc.0
	IL_02e3:                                                                        //ldc.i4				0x12
	IL_02e8:            V_17=18;                                                    //stloc				V_17
	IL_02ec:            /*goto IL_0005;*/goto IL_02f1;                              //br				IL_0005
	IL_02f1:                                                                        //ldloc.0
	IL_02f2:            if(V_0==nullptr)goto IL_0879;                               //brfalse				IL_0879
	IL_02f7:                                                                        //ldc.i4				0x20
	IL_02fc:            V_17=32;                                                    //stloc				V_17
	IL_0300:            /*goto IL_0005;*/goto IL_0305;                              //br				IL_0005
	IL_0305:            goto IL_053e;                                               //br				IL_053e
	IL_030a:                                                                        //ldloc.0
	IL_030b:            return V_0;                                                 //ret
	IL_030c:                                                                        //ldloc.0
	IL_030d:            return V_0;                                                 //ret
	IL_030e:                                                                        //ldarg.0
	IL_030f:                                                                        //ldloc.s				V_5
	IL_0311:            Temp_18=V_5->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForEachStatement::get_Body()
	IL_0316:            Temp_19=Root::T_x183::M_x1(A_0,Temp_18);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_031b:            V_0=Temp_19;                                                //stloc.0
	IL_031c:                                                                        //ldc.i4				0x1f
	IL_0321:            V_17=31;                                                    //stloc				V_17
	IL_0325:            /*goto IL_0005;*/goto IL_032a;                              //br				IL_0005
	IL_032a:                                                                        //ldloc.0
	IL_032b:            if(V_0==nullptr)goto IL_0420;                               //brfalse				IL_0420
	IL_0330:                                                                        //ldc.i4				0xe
	IL_0335:            V_17=14;                                                    //stloc				V_17
	IL_0339:            /*goto IL_0005;*/goto IL_033e;                              //br				IL_0005
	IL_033e:            goto IL_0506;                                               //br				IL_0506
	IL_0343:                                                                        //ldc.i4				0x0
	IL_0348:            V_17=0;                                                     //stloc				V_17
	IL_034c:            /*goto IL_0005;*/goto IL_0351;                              //br				IL_0005
	IL_0351:                                                                        //ldloc.s				V_16
	IL_0353:                                                                        //ldloc.s				V_15
	IL_0355:            Temp_0=V_15->CatchClauses;                                  //callvirt				Reflector::CodeModel::ICatchClauseCollection^ Reflector::CodeModel::ITryCatchFinallyStatement::get_CatchClauses()
	IL_035a:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_035f:            if(V_16<Temp_1)goto IL_0187;                                //blt				IL_0187
	IL_0364:                                                                        //ldc.i4				0x2a
	IL_0369:            V_17=42;                                                    //stloc				V_17
	IL_036d:            /*goto IL_0005;*/goto IL_0372;                              //br				IL_0005
	IL_0372:            goto IL_05e1;                                               //br				IL_05e1
	IL_0377:                                                                        //ldarg.0
	IL_0378:                                                                        //ldloc.s				V_15
	IL_037a:            Temp_34=V_15->Try;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Try()
	IL_037f:            Temp_35=Root::T_x183::M_x1(A_0,Temp_34);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_0384:            V_0=Temp_35;                                                //stloc.0
	IL_0385:                                                                        //ldc.i4				0x37
	IL_038a:            V_17=55;                                                    //stloc				V_17
	IL_038e:            /*goto IL_0005;*/goto IL_0393;                              //br				IL_0005
	IL_0393:                                                                        //ldloc.0
	IL_0394:            if(V_0==nullptr)goto IL_0485;                               //brfalse				IL_0485
	IL_0399:                                                                        //ldc.i4				0xf
	IL_039e:            V_17=15;                                                    //stloc				V_17
	IL_03a2:            /*goto IL_0005;*/goto IL_03a7;                              //br				IL_0005
	IL_03a7:            goto IL_0695;                                               //br				IL_0695
	IL_03ac:                                                                        //ldloc.0
	IL_03ad:            return V_0;                                                 //ret
	IL_03ae:                                                                        //ldarg.0
	IL_03af:                                                                        //ldloc.s				V_7
	IL_03b1:            Temp_51=V_7->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IFixedStatement::get_Body()
	IL_03b6:            Temp_52=Root::T_x183::M_x1(A_0,Temp_51);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_03bb:            V_0=Temp_52;                                                //stloc.0
	IL_03bc:                                                                        //ldc.i4.1
	IL_03bd:                                                                        //dup
	IL_03be:                                                                        //dup
	IL_03bf:                                                                        //ldc.i4.7
	IL_03c0:                                                                        //add
	IL_03c1:                                                                        //bgt				IL_03bd
	IL_03c6:                                                                        //pop
	IL_03c7:                                                                        //ldc.i4				0x1a
	IL_03cc:            V_17=26;                                                    //stloc				V_17
	IL_03d0:            /*goto IL_0005;*/goto IL_03d5;                              //br				IL_0005
	IL_03d5:                                                                        //ldloc.0
	IL_03d6:            if(V_0==nullptr)goto IL_029b;                               //brfalse				IL_029b
	IL_03db:                                                                        //ldc.i4				0x2f
	IL_03e0:            V_17=47;                                                    //stloc				V_17
	IL_03e4:            /*goto IL_0005;*/goto IL_03e9;                              //br				IL_0005
	IL_03e9:            goto IL_03ac;                                               //br.s				IL_03ac
	IL_03eb:                                                                        //ldarg.0
	IL_03ec:                                                                        //ldloc.s				V_13
	IL_03ee:            Temp_20=safe_cast<Reflector::CodeModel::ISwitchCase^>(V_13)->Body;//callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_03f3:            Temp_21=Root::T_x183::M_x1(A_0,Temp_20);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_03f8:            V_0=Temp_21;                                                //stloc.0
	IL_03f9:                                                                        //ldc.i4				0x13
	IL_03fe:            V_17=19;                                                    //stloc				V_17
	IL_0402:            /*goto IL_0005;*/goto IL_0407;                              //br				IL_0005
	IL_0407:                                                                        //ldloc.0
	IL_0408:            if(V_0==nullptr)goto IL_06ff;                               //brfalse				IL_06ff
	IL_040d:                                                                        //ldc.i4				0x35
	IL_0412:            V_17=53;                                                    //stloc				V_17
	IL_0416:            /*goto IL_0005;*/goto IL_041b;                              //br				IL_0005
	IL_041b:            goto IL_08bf;                                               //br				IL_08bf
	IL_0420:                                                                        //ldarg.1
	IL_0421:                                                                        //ldloc.2
	IL_0422:            Temp_22=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_0427:                                                                        //isinst				Reflector::CodeModel::IUsingStatement
	IL_042c:            V_6=dynamic_cast<Reflector::CodeModel::IUsingStatement^>(Temp_22);//stloc.s				V_6
	IL_042e:                                                                        //ldc.i4				0x48
	IL_0433:            V_17=72;                                                    //stloc				V_17
	IL_0437:            /*goto IL_0005;*/goto IL_043c;                              //br				IL_0005
	IL_043c:                                                                        //ldloc.s				V_6
	IL_043e:            if(V_6==nullptr)goto IL_06c9;                               //brfalse				IL_06c9
	IL_0443:                                                                        //ldc.i4				0x31
	IL_0448:            V_17=49;                                                    //stloc				V_17
	IL_044c:            /*goto IL_0005;*/goto IL_0451;                              //br				IL_0005
	IL_0451:            goto IL_049b;                                               //br.s				IL_049b
	IL_0453:                                                                        //ldarg.0
	IL_0454:                                                                        //ldloc.s				V_4
	IL_0456:            Temp_43=V_4->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IForStatement::get_Body()
	IL_045b:            Temp_44=Root::T_x183::M_x1(A_0,Temp_43);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_0460:            V_0=Temp_44;                                                //stloc.0
	IL_0461:                                                                        //ldc.i4				0x18
	IL_0466:            V_17=24;                                                    //stloc				V_17
	IL_046a:            /*goto IL_0005;*/goto IL_046f;                              //br				IL_0005
	IL_046f:                                                                        //ldloc.0
	IL_0470:            if(V_0==nullptr)goto IL_04d0;                               //brfalse.s				IL_04d0
	IL_0472:                                                                        //ldc.i4				0x1e
	IL_0477:            V_17=30;                                                    //stloc				V_17
	IL_047b:            /*goto IL_0005;*/goto IL_0480;                              //br				IL_0005
	IL_0480:            goto IL_0269;                                               //br				IL_0269
	IL_0485:                                                                        //ldc.i4.0
	IL_0486:            V_16=0;                                                     //stloc.s				V_16
	IL_0488:                                                                        //ldc.i4				0x26
	IL_048d:            V_17=38;                                                    //stloc				V_17
	IL_0491:            /*goto IL_0005;*/goto IL_0496;                              //br				IL_0005
	IL_0496:            goto IL_0343;                                               //br				IL_0343
	IL_049b:                                                                        //ldarg.0
	IL_049c:                                                                        //ldloc.s				V_6
	IL_049e:            Temp_47=V_6->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IUsingStatement::get_Body()
	IL_04a3:            Temp_48=Root::T_x183::M_x1(A_0,Temp_47);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_04a8:            V_0=Temp_48;                                                //stloc.0
	IL_04a9:                                                                        //ldc.i4				0x33
	IL_04ae:            V_17=51;                                                    //stloc				V_17
	IL_04b2:            /*goto IL_0005;*/goto IL_04b7;                              //br				IL_0005
	IL_04b7:                                                                        //ldloc.0
	IL_04b8:            if(V_0==nullptr)goto IL_06c9;                               //brfalse				IL_06c9
	IL_04bd:                                                                        //ldc.i4				0x49
	IL_04c2:            V_17=73;                                                    //stloc				V_17
	IL_04c6:            /*goto IL_0005;*/goto IL_04cb;                              //br				IL_0005
	IL_04cb:            goto IL_065f;                                               //br				IL_065f
	IL_04d0:                                                                        //ldarg.1
	IL_04d1:                                                                        //ldloc.2
	IL_04d2:            Temp_16=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_04d7:                                                                        //isinst				Reflector::CodeModel::IForEachStatement
	IL_04dc:            V_5=dynamic_cast<Reflector::CodeModel::IForEachStatement^>(Temp_16);//stloc.s				V_5
	IL_04de:                                                                        //ldc.i4				0xd
	IL_04e3:            V_17=13;                                                    //stloc				V_17
	IL_04e7:            /*goto IL_0005;*/goto IL_04ec;                              //br				IL_0005
	IL_04ec:                                                                        //ldloc.s				V_5
	IL_04ee:            if(V_5==nullptr)goto IL_0420;                               //brfalse				IL_0420
	IL_04f3:                                                                        //ldc.i4				0xa
	IL_04f8:            V_17=10;                                                    //stloc				V_17
	IL_04fc:            /*goto IL_0005;*/goto IL_0501;                              //br				IL_0005
	IL_0501:            goto IL_030e;                                               //br				IL_030e
	IL_0506:                                                                        //ldloc.0
	IL_0507:            return V_0;                                                 //ret
	IL_0508:                                                                        //ldarg.1
	IL_0509:                                                                        //ldloc.2
	IL_050a:            Temp_40=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_050f:                                                                        //isinst				Reflector::CodeModel::IDoStatement
	IL_0514:            V_10=dynamic_cast<Reflector::CodeModel::IDoStatement^>(Temp_40);//stloc.s				V_10
	IL_0516:                                                                        //ldc.i4				0x34
	IL_051b:            V_17=52;                                                    //stloc				V_17
	IL_051f:            /*goto IL_0005;*/goto IL_0524;                              //br				IL_0005
	IL_0524:                                                                        //ldloc.s				V_10
	IL_0526:            if(V_10==nullptr)goto IL_0233;                              //brfalse				IL_0233
	IL_052b:                                                                        //ldc.i4				0x3
	IL_0530:            V_17=3;                                                     //stloc				V_17
	IL_0534:            /*goto IL_0005;*/goto IL_0539;                              //br				IL_0005
	IL_0539:            goto IL_08c1;                                               //br				IL_08c1
	IL_053e:                                                                        //ldc.i4				0x16
	IL_0543:            V_17=22;                                                    //stloc				V_17
	IL_0547:            /*goto IL_0005;*/goto IL_054c;                              //br				IL_0005
	IL_054c:                                                                        //ldarg.0
	IL_054d:            Temp_30=A_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::IGotoStatement::get_Name()
	IL_0552:                                                                        //ldloc.0
	IL_0553:            Temp_31=V_0->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ILabeledStatement::get_Name()
	IL_0558:            Temp_32=(Temp_30 == Temp_31);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_055d:            if(!Temp_32)goto IL_0879;                                   //brfalse				IL_0879
	IL_0562:                                                                        //ldc.i4				0x46
	IL_0567:            V_17=70;                                                    //stloc				V_17
	IL_056b:            /*goto IL_0005;*/goto IL_0570;                              //br				IL_0005
	IL_0570:            goto IL_0628;                                               //br				IL_0628
	IL_0575:                                                                        //ldloc.0
	IL_0576:            return V_0;                                                 //ret
	IL_0577:                                                                        //ldarg.0
	IL_0578:                                                                        //ldloc.s				V_8
	IL_057a:            Temp_57=V_8->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ILockStatement::get_Body()
	IL_057f:            Temp_58=Root::T_x183::M_x1(A_0,Temp_57);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_0584:            V_0=Temp_58;                                                //stloc.0
	IL_0585:                                                                        //ldc.i4				0x3b
	IL_058a:            V_17=59;                                                    //stloc				V_17
	IL_058e:            /*goto IL_0005;*/goto IL_0593;                              //br				IL_0005
	IL_0593:                                                                        //ldloc.0
	IL_0594:            if(V_0==nullptr)goto IL_073c;                               //brfalse				IL_073c
	IL_0599:                                                                        //ldc.i4				0x1b
	IL_059e:            V_17=27;                                                    //stloc				V_17
	IL_05a2:            /*goto IL_0005;*/goto IL_05a7;                              //br				IL_0005
	IL_05a7:            goto IL_05df;                                               //br.s				IL_05df
	IL_05a9:                                                                        //ldarg.1
	IL_05aa:                                                                        //ldloc.2
	IL_05ab:            Temp_17=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_05b0:                                                                        //isinst				Reflector::CodeModel::ITryCatchFinallyStatement
	IL_05b5:            V_15=dynamic_cast<Reflector::CodeModel::ITryCatchFinallyStatement^>(Temp_17);//stloc.s				V_15
	IL_05b7:                                                                        //ldc.i4				0x40
	IL_05bc:            V_17=64;                                                    //stloc				V_17
	IL_05c0:            /*goto IL_0005;*/goto IL_05c5;                              //br				IL_0005
	IL_05c5:                                                                        //ldloc.s				V_15
	IL_05c7:            if(V_15==nullptr)goto IL_0284;                              //brfalse				IL_0284
	IL_05cc:                                                                        //ldc.i4				0x1c
	IL_05d1:            V_17=28;                                                    //stloc				V_17
	IL_05d5:            /*goto IL_0005;*/goto IL_05da;                              //br				IL_0005
	IL_05da:            goto IL_0377;                                               //br				IL_0377
	IL_05df:                                                                        //ldloc.0
	IL_05e0:            return V_0;                                                 //ret
	IL_05e1:                                                                        //ldarg.0
	IL_05e2:                                                                        //ldloc.s				V_15
	IL_05e4:            Temp_41=V_15->Finally;                                      //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Finally()
	IL_05e9:            Temp_42=Root::T_x183::M_x1(A_0,Temp_41);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_05ee:            V_0=Temp_42;                                                //stloc.0
	IL_05ef:                                                                        //ldc.i4				0x30
	IL_05f4:            V_17=48;                                                    //stloc				V_17
	IL_05f8:            /*goto IL_0005;*/goto IL_05fd;                              //br				IL_0005
	IL_05fd:                                                                        //ldloc.0
	IL_05fe:            if(V_0==nullptr)goto IL_062a;                               //brfalse.s				IL_062a
	IL_0600:                                                                        //ldc.i4				0x29
	IL_0605:            V_17=41;                                                    //stloc				V_17
	IL_0609:            /*goto IL_0005;*/goto IL_060e;                              //br				IL_0005
	IL_060e:            goto IL_0231;                                               //br				IL_0231
	IL_0613:                                                                        //ldc.i4.0
	IL_0614:            V_2=0;                                                      //stloc.2
	IL_0615:                                                                        //ldc.i4				0x8
	IL_061a:            V_17=8;                                                     //stloc				V_17
	IL_061e:            /*goto IL_0005;*/goto IL_0623;                              //br				IL_0005
	IL_0623:            goto IL_0890;                                               //br				IL_0890
	IL_0628:                                                                        //ldloc.0
	IL_0629:            return V_0;                                                 //ret
	IL_062a:                                                                        //ldarg.0
	IL_062b:                                                                        //ldloc.s				V_15
	IL_062d:            Temp_45=V_15->Fault;                                        //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ITryCatchFinallyStatement::get_Fault()
	IL_0632:            Temp_46=Root::T_x183::M_x1(A_0,Temp_45);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_0637:            V_0=Temp_46;                                                //stloc.0
	IL_0638:                                                                        //ldc.i4				0x28
	IL_063d:            V_17=40;                                                    //stloc				V_17
	IL_0641:            /*goto IL_0005;*/goto IL_0646;                              //br				IL_0005
	IL_0646:                                                                        //ldloc.0
	IL_0647:            if(V_0==nullptr)goto IL_0284;                               //brfalse				IL_0284
	IL_064c:                                                                        //ldc.i4				0x21
	IL_0651:            V_17=33;                                                    //stloc				V_17
	IL_0655:            /*goto IL_0005;*/goto IL_065a;                              //br				IL_0005
	IL_065a:            goto IL_07a5;                                               //br				IL_07a5
	IL_065f:                                                                        //ldloc.0
	IL_0660:            return V_0;                                                 //ret
	IL_0661:                                                                        //ldarg.1
	IL_0662:                                                                        //ldloc.2
	IL_0663:            Temp_25=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_0668:                                                                        //isinst				Reflector::CodeModel::IConditionStatement
	IL_066d:            V_3=dynamic_cast<Reflector::CodeModel::IConditionStatement^>(Temp_25);//stloc.3
	IL_066e:                                                                        //ldc.i4				0x39
	IL_0673:            V_17=57;                                                    //stloc				V_17
	IL_0677:            /*goto IL_0005;*/goto IL_067c;                              //br				IL_0005
	IL_067c:                                                                        //ldloc.3
	IL_067d:            if(V_3==nullptr)goto IL_0151;                               //brfalse				IL_0151
	IL_0682:                                                                        //ldc.i4				0x3a
	IL_0687:            V_17=58;                                                    //stloc				V_17
	IL_068b:            /*goto IL_0005;*/goto IL_0690;                              //br				IL_0005
	IL_0690:            goto IL_01c8;                                               //br				IL_01c8
	IL_0695:                                                                        //ldloc.0
	IL_0696:            return V_0;                                                 //ret
	IL_0697:                                                                        //ldc.i4				0x4
	IL_069c:            V_17=4;                                                     //stloc				V_17
	IL_06a0:            /*goto IL_0005;*/goto IL_06a5;                              //br				IL_0005
	IL_06a5:                                                                        //ldloc.1
	IL_06a6:                                                                        //ldarg.1
	IL_06a7:            Temp_10=A_1->Statements;                                    //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_06ac:            Temp_11=safe_cast<System::Collections::ICollection^>(Temp_10)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_06b1:            if(V_1<Temp_11)goto IL_02d1;                                //blt				IL_02d1
	IL_06b6:                                                                        //ldc.i4				0x27
	IL_06bb:            V_17=39;                                                    //stloc				V_17
	IL_06bf:            /*goto IL_0005;*/goto IL_06c4;                              //br				IL_0005
	IL_06c4:            goto IL_0613;                                               //br				IL_0613
	IL_06c9:                                                                        //ldarg.1
	IL_06ca:                                                                        //ldloc.2
	IL_06cb:            Temp_50=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_06d0:                                                                        //isinst				Reflector::CodeModel::IFixedStatement
	IL_06d5:            V_7=dynamic_cast<Reflector::CodeModel::IFixedStatement^>(Temp_50);//stloc.s				V_7
	IL_06d7:                                                                        //ldc.i4				0x42
	IL_06dc:            V_17=66;                                                    //stloc				V_17
	IL_06e0:            /*goto IL_0005;*/goto IL_06e5;                              //br				IL_0005
	IL_06e5:                                                                        //ldloc.s				V_7
	IL_06e7:            if(V_7==nullptr)goto IL_029b;                               //brfalse				IL_029b
	IL_06ec:                                                                        //ldc.i4				0x36
	IL_06f1:            V_17=54;                                                    //stloc				V_17
	IL_06f5:            /*goto IL_0005;*/goto IL_06fa;                              //br				IL_0005
	IL_06fa:            goto IL_03ae;                                               //br				IL_03ae
	IL_06ff:                                                                        //ldloc.s				V_11
	IL_0701:            Temp_26=V_11->Cases;                                        //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0706:                                                                        //ldloc.s				V_12
	IL_0708:            Temp_27=Temp_26[V_12];                                      //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_070d:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_0712:            V_14=dynamic_cast<Reflector::CodeModel::IDefaultCase^>(Temp_27);//stloc.s				V_14
	IL_0714:                                                                        //ldc.i4				0x2
	IL_0719:            V_17=2;                                                     //stloc				V_17
	IL_071d:            /*goto IL_0005;*/goto IL_0722;                              //br				IL_0005
	IL_0722:                                                                        //ldloc.s				V_14
	IL_0724:            if(V_14==nullptr)goto IL_07a7;                              //brfalse				IL_07a7
	IL_0729:                                                                        //ldc.i4				0x1
	IL_072e:            V_17=1;                                                     //stloc				V_17
	IL_0732:            /*goto IL_0005;*/goto IL_0737;                              //br				IL_0005
	IL_0737:            goto IL_01fc;                                               //br				IL_01fc
	IL_073c:                                                                        //ldarg.1
	IL_073d:                                                                        //ldloc.2
	IL_073e:            Temp_56=Root::T_x183::M_x12(A_1,V_2);                       //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_0743:                                                                        //isinst				Reflector::CodeModel::IWhileStatement
	IL_0748:            V_9=dynamic_cast<Reflector::CodeModel::IWhileStatement^>(Temp_56);//stloc.s				V_9
	IL_074a:                                                                        //ldc.i4				0x25
	IL_074f:            V_17=37;                                                    //stloc				V_17
	IL_0753:            /*goto IL_0005;*/goto IL_0758;                              //br				IL_0005
	IL_0758:                                                                        //ldloc.s				V_9
	IL_075a:            if(V_9==nullptr)goto IL_0508;                               //brfalse				IL_0508
	IL_075f:                                                                        //ldc.i4				0x15
	IL_0764:            V_17=21;                                                    //stloc				V_17
	IL_0768:            /*goto IL_0005;*/goto IL_076d;                              //br				IL_0005
	IL_076d:            goto IL_082e;                                               //br				IL_082e
	IL_0772:                                                                        //ldloc.0
	IL_0773:            return V_0;                                                 //ret
	IL_0774:                                                                        //ldc.i4				0x22
	IL_0779:            V_17=34;                                                    //stloc				V_17
	IL_077d:            /*goto IL_0005;*/goto IL_0782;                              //br				IL_0005
	IL_0782:                                                                        //ldloc.s				V_12
	IL_0784:                                                                        //ldloc.s				V_11
	IL_0786:            Temp_36=V_11->Cases;                                        //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_078b:            Temp_37=safe_cast<System::Collections::ICollection^>(Temp_36)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0790:            if(V_12<Temp_37)goto IL_07f1;                               //blt.s				IL_07f1
	IL_0792:                                                                        //ldc.i4				0xc
	IL_0797:            V_17=12;                                                    //stloc				V_17
	IL_079b:            /*goto IL_0005;*/goto IL_07a0;                              //br				IL_0005
	IL_07a0:            goto IL_05a9;                                               //br				IL_05a9
	IL_07a5:                                                                        //ldloc.0
	IL_07a6:            return V_0;                                                 //ret
	IL_07a7:                                                                        //ldloc.s				V_12
	IL_07a9:                                                                        //ldc.i4.1
	IL_07aa:                                                                        //add
	IL_07ab:            V_12=(V_12 + 1);                                            //stloc.s				V_12
	IL_07ad:                                                                        //ldc.i4				0x1d
	IL_07b2:            V_17=29;                                                    //stloc				V_17
	IL_07b6:            /*goto IL_0005;*/goto IL_07bb;                              //br				IL_0005
	IL_07bb:            goto IL_0774;                                               //br.s				IL_0774
	IL_07bd:                                                                        //ldarg.0
	IL_07be:                                                                        //ldloc.3
	IL_07bf:            Temp_14=V_3->Else;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IConditionStatement::get_Else()
	IL_07c4:            Temp_15=Root::T_x183::M_x1(A_0,Temp_14);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_07c9:            V_0=Temp_15;                                                //stloc.0
	IL_07ca:                                                                        //ldc.i4				0x3f
	IL_07cf:            V_17=63;                                                    //stloc				V_17
	IL_07d3:            /*goto IL_0005;*/goto IL_07d8;                              //br				IL_0005
	IL_07d8:                                                                        //ldloc.0
	IL_07d9:            if(V_0==nullptr)goto IL_0151;                               //brfalse				IL_0151
	IL_07de:                                                                        //ldc.i4				0x5
	IL_07e3:            V_17=5;                                                     //stloc				V_17
	IL_07e7:            /*goto IL_0005;*/goto IL_07ec;                              //br				IL_0005
	IL_07ec:            goto IL_030a;                                               //br				IL_030a
	IL_07f1:                                                                        //ldloc.s				V_11
	IL_07f3:            Temp_38=V_11->Cases;                                        //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_07f8:                                                                        //ldloc.s				V_12
	IL_07fa:            Temp_39=Temp_38[V_12];                                      //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_07ff:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_0804:            V_13=dynamic_cast<Reflector::CodeModel::IConditionCase^>(Temp_39);//stloc.s				V_13
	IL_0806:                                                                        //ldc.i4				0x2d
	IL_080b:            V_17=45;                                                    //stloc				V_17
	IL_080f:            /*goto IL_0005;*/goto IL_0814;                              //br				IL_0005
	IL_0814:                                                                        //ldloc.s				V_13
	IL_0816:            if(V_13==nullptr)goto IL_06ff;                              //brfalse				IL_06ff
	IL_081b:                                                                        //ldc.i4				0xb
	IL_0820:            V_17=11;                                                    //stloc				V_17
	IL_0824:            /*goto IL_0005;*/goto IL_0829;                              //br				IL_0005
	IL_0829:            goto IL_03eb;                                               //br				IL_03eb
	IL_082e:                                                                        //ldarg.0
	IL_082f:                                                                        //ldloc.s				V_9
	IL_0831:            Temp_28=V_9->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IWhileStatement::get_Body()
	IL_0836:            Temp_29=Root::T_x183::M_x1(A_0,Temp_28);                    //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_083b:            V_0=Temp_29;                                                //stloc.0
	IL_083c:                                                                        //ldc.i4				0x44
	IL_0841:            V_17=68;                                                    //stloc				V_17
	IL_0845:            /*goto IL_0005;*/goto IL_084a;                              //br				IL_0005
	IL_084a:                                                                        //ldloc.0
	IL_084b:            if(V_0==nullptr)goto IL_0508;                               //brfalse				IL_0508
	IL_0850:                                                                        //ldc.i4				0x2b
	IL_0855:            V_17=43;                                                    //stloc				V_17
	IL_0859:            /*goto IL_0005;*/goto IL_085e;                              //br				IL_0005
	IL_085e:            goto IL_0575;                                               //br				IL_0575
	IL_0863:                                                                        //ldc.i4.0
	IL_0864:            V_12=0;                                                     //stloc.s				V_12
	IL_0866:                                                                        //ldc.i4				0x2e
	IL_086b:            V_17=46;                                                    //stloc				V_17
	IL_086f:            /*goto IL_0005;*/goto IL_0874;                              //br				IL_0005
	IL_0874:            goto IL_0774;                                               //br				IL_0774
	IL_0879:                                                                        //ldloc.1
	IL_087a:                                                                        //ldc.i4.1
	IL_087b:                                                                        //add
	IL_087c:            V_1=(V_1 + 1);                                              //stloc.1
	IL_087d:                                                                        //ldc.i4				0x3e
	IL_0882:            V_17=62;                                                    //stloc				V_17
	IL_0886:            /*goto IL_0005;*/goto IL_088b;                              //br				IL_0005
	IL_088b:            goto IL_0697;                                               //br				IL_0697
	IL_0890:                                                                        //ldc.i4				0x10
	IL_0895:            V_17=16;                                                    //stloc				V_17
	IL_0899:            /*goto IL_0005;*/goto IL_089e;                              //br				IL_0005
	IL_089e:                                                                        //ldloc.2
	IL_089f:                                                                        //ldarg.1
	IL_08a0:            Temp_23=A_1->Statements;                                    //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_08a5:            Temp_24=safe_cast<System::Collections::ICollection^>(Temp_23)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_08aa:            if(V_2<Temp_24)goto IL_0661;                                //blt				IL_0661
	IL_08af:                                                                        //ldc.i4				0x3c
	IL_08b4:            V_17=60;                                                    //stloc				V_17
	IL_08b8:            /*goto IL_0005;*/goto IL_08bd;                              //br				IL_0005
	IL_08bd:            goto IL_08f6;                                               //br.s				IL_08f6
	IL_08bf:                                                                        //ldloc.0
	IL_08c0:            return V_0;                                                 //ret
	IL_08c1:                                                                        //ldarg.0
	IL_08c2:                                                                        //ldloc.s				V_10
	IL_08c4:            Temp_8=V_10->Body;                                          //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::IDoStatement::get_Body()
	IL_08c9:            Temp_9=Root::T_x183::M_x1(A_0,Temp_8);                      //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_08ce:            V_0=Temp_9;                                                 //stloc.0
	IL_08cf:                                                                        //ldc.i4				0x32
	IL_08d4:            V_17=50;                                                    //stloc				V_17
	IL_08d8:            /*goto IL_0005;*/goto IL_08dd;                              //br				IL_0005
	IL_08dd:                                                                        //ldloc.0
	IL_08de:            if(V_0==nullptr)goto IL_0233;                               //brfalse				IL_0233
	IL_08e3:                                                                        //ldc.i4				0x17
	IL_08e8:            V_17=23;                                                    //stloc				V_17
	IL_08ec:            /*goto IL_0005;*/goto IL_08f1;                              //br				IL_0005
	IL_08f1:            goto IL_014f;                                               //br				IL_014f
	IL_08f6:                                                                        //ldnull
	IL_08f7:            return nullptr;                                             //ret

}
inline System::Int32 Root::T_x183::M_x1(Reflector::CodeModel::IInstruction^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Int32 Temp_0 = 0;
	Root::T_x183::T_x1 Temp_1 = (Root::T_x183::T_x1)0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Globalization::CultureInfo^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	array<System::Object^>^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::NotSupportedException^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	System::Int32 Temp_13 = 0;
	//local variables.
	System::Int32 V_0 = 0;
	array<System::Int32>^ V_1 = nullptr;
	Root::T_x183::T_x1 V_2 = (Root::T_x183::T_x1)0;
	array<System::Object^>^ V_3 = nullptr;
	System::Int32 V_4 = 0;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x3
	IL_0005:            V_6=3;                                                      //stloc				V_6
	IL_0009:            goto IL_004c;                                               //br.s				IL_004c
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_0196;case 1:goto IL_00b2;case 2:goto IL_0059;case 3:goto IL_00fb;case 4:goto IL_01c9;case 5:goto IL_0229;case 6:goto IL_0088;case 7:goto IL_00d0;case 8:goto IL_01aa;case 9:goto IL_0071;case 10:goto IL_0129;case 11:goto IL_0182;case 12:goto IL_0112;case 13:goto IL_009f;};//switch				(IL_0196,IL_00b2,IL_0059,IL_00fb,IL_01c9,IL_0229,IL_0088,IL_00d0,IL_01aa,IL_0071,IL_0129,IL_0182,IL_0112,IL_009f)
	IL_004c:                                                                        //ldc.i4.0
	IL_004d:            V_0=0;                                                      //stloc.0
	IL_004e:                                                                        //ldc.i4				0x2
	IL_0053:            V_5=2;                                                      //stloc				V_5
	IL_0057:            /*goto IL_000b;*/goto IL_0059;                              //br.s				IL_000b
	IL_0059:                                                                        //ldarg.0
	IL_005a:            Temp_3=A_0->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_005f:                                                                        //ldc.i4				0x100
	IL_0064:            if(Temp_3>=256)goto IL_00a4;                                //bge.s				IL_00a4
	IL_0066:                                                                        //ldc.i4				0x9
	IL_006b:            V_5=9;                                                      //stloc				V_5
	IL_006f:            /*goto IL_000b;*/goto IL_0071;                              //br.s				IL_000b
	IL_0071:            goto IL_0100;                                               //br				IL_0100
	IL_0076:                                                                        //ldloc.0
	IL_0077:                                                                        //ldc.i4.4
	IL_0078:                                                                        //add
	IL_0079:            V_0=(V_0 + 4);                                              //stloc.0
	IL_007a:            goto IL_007d;                                               //br.s				IL_007d
	IL_007c:                                                                        //break
	IL_007d:                                                                        //ldc.i4				0x6
	IL_0082:            V_5=6;                                                      //stloc				V_5
	IL_0086:            /*goto IL_000b;*/goto IL_0088;                              //br.s				IL_000b
	IL_0088:            goto IL_022e;                                               //br				IL_022e
	IL_008d:                                                                        //ldloc.0
	IL_008e:                                                                        //ldc.i4.1
	IL_008f:                                                                        //add
	IL_0090:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0091:                                                                        //ldc.i4				0xd
	IL_0096:            V_5=13;                                                     //stloc				V_5
	IL_009a:            /*goto IL_000b;*/goto IL_009f;                              //br				IL_000b
	IL_009f:            goto IL_022e;                                               //br				IL_022e
	IL_00a4:                                                                        //ldc.i4				0x1
	IL_00a9:            V_5=1;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_000b;*/goto IL_00b2;                              //br				IL_000b
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:            Temp_2=A_0->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_00b8:                                                                        //ldc.i4				0x10000
	IL_00bd:            if(Temp_2>=65536)goto IL_01af;                              //bge				IL_01af
	IL_00c2:                                                                        //ldc.i4				0x7
	IL_00c7:            V_5=7;                                                      //stloc				V_5
	IL_00cb:            /*goto IL_000b;*/goto IL_00d0;                              //br				IL_000b
	IL_00d0:            goto IL_0184;                                               //br				IL_0184
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:                                                                        //ldc.i4.4
	IL_00d7:                                                                        //add
	IL_00d8:            V_0=(V_0 + 4);                                              //stloc.0
	IL_00d9:                                                                        //ldarg.0
	IL_00da:            Temp_12=A_0->Value;                                         //callvirt				System::Object^ Reflector::CodeModel::IInstruction::get_Value()
	IL_00df:                                                                        //castclass				array<System::Int32>
	IL_00e4:            V_1=safe_cast<array<System::Int32>^>(Temp_12);              //stloc.1
	IL_00e5:                                                                        //ldloc.0
	IL_00e6:                                                                        //ldloc.1
	IL_00e7:            Temp_13=V_1->Length;                                        //ldlen
	IL_00e8:                                                                        //conv.i4
	IL_00e9:                                                                        //ldc.i4.4
	IL_00ea:                                                                        //mul
	IL_00eb:                                                                        //add
	IL_00ec:            V_0=(V_0 + (Temp_13 * 4));                                  //stloc.0
	IL_00ed:                                                                        //ldc.i4				0x3
	IL_00f2:            V_5=3;                                                      //stloc				V_5
	IL_00f6:            /*goto IL_000b;*/goto IL_00fb;                              //br				IL_000b
	IL_00fb:            goto IL_022e;                                               //br				IL_022e
	IL_0100:                                                                        //ldloc.0
	IL_0101:                                                                        //ldc.i4.1
	IL_0102:                                                                        //add
	IL_0103:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0104:                                                                        //ldc.i4				0xc
	IL_0109:            V_5=12;                                                     //stloc				V_5
	IL_010d:            /*goto IL_000b;*/goto IL_0112;                              //br				IL_000b
	IL_0112:            goto IL_01af;                                               //br				IL_01af
	IL_0117:                                                                        //ldloc.0
	IL_0118:                                                                        //ldc.i4.8
	IL_0119:                                                                        //add
	IL_011a:            V_0=(V_0 + 8);                                              //stloc.0
	IL_011b:                                                                        //ldc.i4				0xa
	IL_0120:            V_5=10;                                                     //stloc				V_5
	IL_0124:            /*goto IL_000b;*/goto IL_0129;                              //br				IL_000b
	IL_0129:            goto IL_022e;                                               //br				IL_022e
	IL_012e:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0133:                                                                        //ldstr				L"\x7420\x4D22\x4E24\x4926\x4628\x5C2A\x432C\x0F2E\x5E30\x4332\x5034\x4536\x5838\x553A\x593C\x1F3E\x3540\x3A42\x3544\x2246\x6948\x2D4A\x224C\x3D4E\x7150\x3C52\x2554\x3256\x2B58\x3A5A\x295C\x305E\x1360\x4362\x4264\x1C66\x5968\x166A\x4A6C\x416E"
	IL_0138:                                                                        //ldloc				V_6
	IL_013c:            Temp_5=a(L"\x7420\x4D22\x4E24\x4926\x4628\x5C2A\x432C\x0F2E\x5E30\x4332\x5034\x4536\x5838\x553A\x593C\x1F3E\x3540\x3A42\x3544\x2246\x6948\x2D4A\x224C\x3D4E\x7150\x3C52\x2554\x3256\x2B58\x3A5A\x295C\x305E\x1360\x4362\x4264\x1C66\x5968\x166A\x4A6C\x416E",V_6);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0141:                                                                        //ldc.i4.1
	IL_0142:            Temp_6=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_0147:            V_3=Temp_6;                                                 //stloc.3
	IL_0148:                                                                        //ldloc.3
	IL_0149:                                                                        //ldc.i4.0
	IL_014a:                                                                        //ldarg.0
	IL_014b:            Temp_7=A_0->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_0150:            V_4=Temp_7;                                                 //stloc.s				V_4
	IL_0152:                                                                        //ldloca.s				V_4
	IL_0154:                                                                        //ldstr				L"\x5920\x1722"
	IL_0159:                                                                        //ldloc				V_6
	IL_015d:            Temp_8=a(L"\x5920\x1722",V_6);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0162:            Temp_9=V_4.ToString(Temp_8);                                //call				System::String^ System::Int32::ToString(System::String^)
	IL_0167:            V_3[0]=safe_cast<System::Object^>(Temp_9);                  //stelem.ref
	IL_0168:                                                                        //ldloc.3
	IL_0169:            Temp_10=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_4),Temp_5,V_3);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_016e:            Temp_11=gcnew System::NotSupportedException(Temp_10);       //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0173:            throw Temp_11;                                              //throw
	IL_0174:                                                                        //ldc.i4				0xb
	IL_0179:            V_5=11;                                                     //stloc				V_5
	IL_017d:            /*goto IL_000b;*/goto IL_0182;                              //br				IL_000b
	IL_0182:            goto IL_012e;                                               //br.s				IL_012e
	IL_0184:                                                                        //ldloc.0
	IL_0185:                                                                        //ldc.i4.2
	IL_0186:                                                                        //add
	IL_0187:            V_0=(V_0 + 2);                                              //stloc.0
	IL_0188:                                                                        //ldc.i4				0x0
	IL_018d:            V_5=0;                                                      //stloc				V_5
	IL_0191:            /*goto IL_000b;*/goto IL_0196;                              //br				IL_000b
	IL_0196:            goto IL_01af;                                               //br.s				IL_01af
	IL_0198:                                                                        //ldloc.0
	IL_0199:                                                                        //ldc.i4.2
	IL_019a:                                                                        //add
	IL_019b:            V_0=(V_0 + 2);                                              //stloc.0
	IL_019c:                                                                        //ldc.i4				0x8
	IL_01a1:            V_5=8;                                                      //stloc				V_5
	IL_01a5:            /*goto IL_000b;*/goto IL_01aa;                              //br				IL_000b
	IL_01aa:            goto IL_022e;                                               //br				IL_022e
	IL_01af:                                                                        //ldarg.0
	IL_01b0:            Temp_0=A_0->Code;                                           //callvirt				System::Int32 Reflector::CodeModel::IInstruction::get_Code()
	IL_01b5:            Temp_1=Root::T_x183::M_x1(Temp_0);                          //call				Root::T_x183::T_x1 Root::T_x183::M_x1(System::Int32)
	IL_01ba:            V_2=Temp_1;                                                 //stloc.2
	IL_01bb:                                                                        //ldc.i4				0x4
	IL_01c0:            V_5=4;                                                      //stloc				V_5
	IL_01c4:            /*goto IL_000b;*/goto IL_01c9;                              //br				IL_000b
	IL_01c9:                                                                        //ldloc.2
	IL_01ca:            switch(safe_cast<System::Int32>(V_2)){case 0:goto IL_0076;case 1:goto IL_0076;case 2:goto IL_0076;case 3:goto IL_0117;case 4:goto IL_0076;case 5:goto IL_022e;case 6:goto IL_012e;case 7:goto IL_0117;case 8:goto IL_012e;case 9:goto IL_0076;case 10:goto IL_0076;case 11:goto IL_00d5;case 12:goto IL_0076;case 13:goto IL_0076;case 14:goto IL_0198;case 15:goto IL_008d;case 16:goto IL_008d;case 17:goto IL_0076;case 18:goto IL_008d;};//switch				(IL_0076,IL_0076,IL_0076,IL_0117,IL_0076,IL_022e,IL_012e,IL_0117,IL_012e,IL_0076,IL_0076,IL_00d5,IL_0076,IL_0076,IL_0198,IL_008d,IL_008d,IL_0076,IL_008d)
	IL_021b:                                                                        //ldc.i4				0x5
	IL_0220:            V_5=5;                                                      //stloc				V_5
	IL_0224:            /*goto IL_000b;*/goto IL_0229;                              //br				IL_000b
	IL_0229:            goto IL_0174;                                               //br				IL_0174
	IL_022e:                                                                        //ldloc.0
	IL_022f:            return V_0;                                                 //ret

}
inline Reflector::CodeModel::IUnaryExpression^ Root::T_x183::M_x1(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	Reflector::CodeModel::IExpressionStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0);//stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_001b;                               //brfalse.s				IL_001b
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:                                                                        //ldloc.0
	IL_0010:            Temp_0=V_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionStatement::get_Expression()
	IL_0015:                                                                        //isinst				Reflector::CodeModel::IUnaryExpression
	IL_001a:            return dynamic_cast<Reflector::CodeModel::IUnaryExpression^>(Temp_0);//ret
	IL_001b:                                                                        //ldnull
	IL_001c:            return nullptr;                                             //ret

}
inline Reflector::CodeModel::IDefaultCase^ Root::T_x183::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::Object^ Temp_3 = nullptr;
	//local variables.
	Reflector::CodeModel::ISwitchCase^ V_0 = nullptr;
	Reflector::CodeModel::IDefaultCase^ V_1 = nullptr;
	Reflector::CodeModel::IDefaultCase^ V_2 = nullptr;
	System::Collections::IEnumerator^ V_3 = nullptr;
	System::IDisposable^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0006:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_000b:            V_3=Temp_1;                                                 //stloc.3
	IL_000c:            /*goto IL_0010;*/goto IL_000F01;                            //br.s				IL_0010
	IL_000e:                                                                        //ldnull
	IL_000f:            return nullptr;                                             //ret
	IL_000F01:          try{
	IL_0010:                                                                        //ldc.i4				0x3
	IL_0015:            V_5=3;                                                      //stloc				V_5
	IL_0019:            /*goto IL_001d;*/goto IL_001b;                              //br.s				IL_001d
	IL_001b:            goto IL_0042;                                               //br.s				IL_0042
	IL_001d:                                                                        //ldloc				V_5
	IL_0021:            switch(V_5){case 0:goto IL_00a2;case 1:goto IL_0082;case 2:goto IL_0062;case 3:goto IL_001b;case 4:goto IL_004f;case 5:goto IL_0090;case 6:goto IL_00b2;};//switch				(IL_00a2,IL_0082,IL_0062,IL_001b,IL_004f,IL_0090,IL_00b2)
	IL_0042:            goto IL_0044;                                               //br.s				IL_0044
	IL_0044:                                                                        //ldc.i4				0x4
	IL_0049:            V_5=4;                                                      //stloc				V_5
	IL_004d:            /*goto IL_001d;*/goto IL_004f;                              //br.s				IL_001d
	IL_004f:                                                                        //ldloc.3
	IL_0050:            Temp_2=V_3->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0055:            if(Temp_2)goto IL_0064;                                     //brtrue.s				IL_0064
	IL_0057:                                                                        //ldc.i4				0x2
	IL_005c:            V_5=2;                                                      //stloc				V_5
	IL_0060:            /*goto IL_001d;*/goto IL_0062;                              //br.s				IL_001d
	IL_0062:            goto IL_00a4;                                               //br.s				IL_00a4
	IL_0064:                                                                        //ldloc.3
	IL_0065:            Temp_3=V_3->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_006a:                                                                        //castclass				Reflector::CodeModel::ISwitchCase
	IL_006f:            V_0=safe_cast<Reflector::CodeModel::ISwitchCase^>(Temp_3);  //stloc.0
	IL_0070:                                                                        //ldloc.0
	IL_0071:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_0076:            V_1=dynamic_cast<Reflector::CodeModel::IDefaultCase^>(V_0); //stloc.1
	IL_0077:                                                                        //ldc.i4				0x1
	IL_007c:            V_5=1;                                                      //stloc				V_5
	IL_0080:            /*goto IL_001d;*/goto IL_0082;                              //br.s				IL_001d
	IL_0082:                                                                        //ldloc.1
	IL_0083:            if(V_1==nullptr)goto IL_0044;                               //brfalse.s				IL_0044
	IL_0085:                                                                        //ldc.i4				0x5
	IL_008a:            V_5=5;                                                      //stloc				V_5
	IL_008e:            /*goto IL_001d;*/goto IL_0090;                              //br.s				IL_001d
	IL_0090:            goto IL_0092;                                               //br.s				IL_0092
	IL_0092:                                                                        //ldloc.1
	IL_0093:            V_2=V_1;                                                    //stloc.2
	IL_0094:                                                                        //ldc.i4				0x0
	IL_0099:            V_5=0;                                                      //stloc				V_5
	IL_009d:            /*goto IL_001d;*/goto IL_00a2;                              //br				IL_001d
	IL_00a2:            goto IL_0112;                                               //leave.s				IL_0112
	IL_00a4:                                                                        //ldc.i4				0x6
	IL_00a9:            V_5=6;                                                      //stloc				V_5
	IL_00ad:            /*goto IL_001d;*/goto IL_00b2;                              //br				IL_001d
	IL_00b2:            goto IL_000e;                                               //leave				IL_000e
	                    ;}
	                    finally{
	IL_00b7:            goto IL_00ce;                                               //br.s				IL_00ce
	IL_00b9:                                                                        //ldloc				V_6
	IL_00bd:            switch(V_6){case 0:goto IL_00f0;case 1:goto IL_00e1;case 2:goto IL_0104;};//switch				(IL_00f0,IL_00e1,IL_0104)
	IL_00ce:                                                                        //ldloc.3
	IL_00cf:                                                                        //isinst				System::IDisposable
	IL_00d4:            V_4=dynamic_cast<System::IDisposable^>(V_3);                //stloc.s				V_4
	IL_00d6:                                                                        //ldc.i4				0x1
	IL_00db:            V_6=1;                                                      //stloc				V_6
	IL_00df:            /*goto IL_00b9;*/goto IL_00e1;                              //br.s				IL_00b9
	IL_00e1:                                                                        //ldloc.s				V_4
	IL_00e3:            if(V_4==nullptr)goto IL_0111;                               //brfalse.s				IL_0111
	IL_00e5:                                                                        //ldc.i4				0x0
	IL_00ea:            V_6=0;                                                      //stloc				V_6
	IL_00ee:            /*goto IL_00b9;*/goto IL_00f0;                              //br.s				IL_00b9
	IL_00f0:            goto IL_00f2;                                               //br.s				IL_00f2
	IL_00f2:                                                                        //ldloc.s				V_4
	IL_00f4:            /*V_4->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_00f9:                                                                        //ldc.i4				0x2
	IL_00fe:            V_6=2;                                                      //stloc				V_6
	IL_0102:            /*goto IL_00b9;*/goto IL_0104;                              //br.s				IL_00b9
	IL_0104:                                                                        //ldc.i4.3
	IL_0105:                                                                        //dup
	IL_0106:                                                                        //dup
	IL_0107:                                                                        //ldc.i4.2
	IL_0108:                                                                        //add
	IL_0109:                                                                        //bgt				IL_0105
	IL_010e:                                                                        //pop
	IL_010f:            goto IL_0111;                                               //br.s				IL_0111
	IL_0111:                                                                        //endfinally
	                    ;}
	IL_0112:                                                                        //ldloc.2
	IL_0113:            return V_2;                                                 //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::IExpression^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::ISwitchCase^ Temp_3 = nullptr;
	Reflector::CodeModel::IExpression^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	Reflector::CodeModel::IExpression^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::IConditionCase^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0100;case 1:goto IL_00cd;case 2:goto IL_00a1;case 3:goto IL_013d;case 4:goto IL_00b1;case 5:goto IL_005a;case 6:goto IL_0117;case 7:goto IL_0127;case 8:goto IL_0048;case 9:goto IL_0076;case 10:goto IL_0086;case 11:goto IL_00ef;};//switch				(IL_0100,IL_00cd,IL_00a1,IL_013d,IL_00b1,IL_005a,IL_0117,IL_0127,IL_0048,IL_0076,IL_0086,IL_00ef)
	IL_003b:                                                                        //ldc.i4.0
	IL_003c:            V_0=0;                                                      //stloc.0
	IL_003d:                                                                        //ldc.i4				0x8
	IL_0042:            V_2=8;                                                      //stloc				V_2
	IL_0046:            /*goto IL_0002;*/goto IL_0048;                              //br.s				IL_0002
	IL_0048:            goto IL_004b;                                               //br.s				IL_004b
	IL_004a:                                                                        //break
	IL_004b:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_004d:                                                                        //ldc.i4.1
	IL_004e:            return true;                                                //ret
	IL_004f:                                                                        //ldc.i4				0x5
	IL_0054:            V_2=5;                                                      //stloc				V_2
	IL_0058:            /*goto IL_0002;*/goto IL_005a;                              //br.s				IL_0002
	IL_005a:                                                                        //ldloc.1
	IL_005b:            Temp_4=V_1->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_0060:                                                                        //ldarg.1
	IL_0061:            Temp_5=Temp_4->Equals(safe_cast<System::Object^>(A_1));     //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0066:            if(!Temp_5)goto IL_0105;                                    //brfalse				IL_0105
	IL_006b:                                                                        //ldc.i4				0x9
	IL_0070:            V_2=9;                                                      //stloc				V_2
	IL_0074:            /*goto IL_0002;*/goto IL_0076;                              //br.s				IL_0002
	IL_0076:            goto IL_004d;                                               //br.s				IL_004d
	IL_0078:                                                                        //ldc.i4				0xa
	IL_007d:            V_2=10;                                                     //stloc				V_2
	IL_0081:            /*goto IL_0002;*/goto IL_0086;                              //br				IL_0002
	IL_0086:                                                                        //ldloc.1
	IL_0087:            Temp_7=V_1->Condition;                                      //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IConditionCase::get_Condition()
	IL_008c:            Temp_8=Root::T_x183::M_x2(Temp_7);                          //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^)
	IL_0091:            if(!Temp_8)goto IL_0105;                                    //brfalse.s				IL_0105
	IL_0093:                                                                        //ldc.i4				0x2
	IL_0098:            V_2=2;                                                      //stloc				V_2
	IL_009c:            /*goto IL_0002;*/goto IL_00a1;                              //br				IL_0002
	IL_00a1:            goto IL_0119;                                               //br.s				IL_0119
	IL_00a3:                                                                        //ldc.i4				0x4
	IL_00a8:            V_2=4;                                                      //stloc				V_2
	IL_00ac:            /*goto IL_0002;*/goto IL_00b1;                              //br				IL_0002
	IL_00b1:                                                                        //ldloc.0
	IL_00b2:                                                                        //ldarg.0
	IL_00b3:            Temp_0=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_00b8:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00bd:            if(V_0<Temp_1)goto IL_00cf;                                 //blt.s				IL_00cf
	IL_00bf:                                                                        //ldc.i4				0x1
	IL_00c4:            V_2=1;                                                      //stloc				V_2
	IL_00c8:            /*goto IL_0002;*/goto IL_00cd;                              //br				IL_0002
	IL_00cd:            goto IL_0142;                                               //br.s				IL_0142
	IL_00cf:                                                                        //ldarg.0
	IL_00d0:            Temp_2=A_0->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_00d5:                                                                        //ldloc.0
	IL_00d6:            Temp_3=Temp_2[V_0];                                         //callvirt				Reflector::CodeModel::ISwitchCase^ Reflector::CodeModel::ISwitchCaseCollection::get_Item(System::Int32)
	IL_00db:                                                                        //isinst				Reflector::CodeModel::IConditionCase
	IL_00e0:            V_1=dynamic_cast<Reflector::CodeModel::IConditionCase^>(Temp_3);//stloc.1
	IL_00e1:                                                                        //ldc.i4				0xb
	IL_00e6:            V_2=11;                                                     //stloc				V_2
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:                                                                        //ldloc.1
	IL_00f0:            if(V_1==nullptr)goto IL_0105;                               //brfalse.s				IL_0105
	IL_00f2:                                                                        //ldc.i4				0x0
	IL_00f7:            V_2=0;                                                      //stloc				V_2
	IL_00fb:            /*goto IL_0002;*/goto IL_0100;                              //br				IL_0002
	IL_0100:            goto IL_0078;                                               //br				IL_0078
	IL_0105:                                                                        //ldloc.0
	IL_0106:                                                                        //ldc.i4.1
	IL_0107:                                                                        //add
	IL_0108:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0109:                                                                        //ldc.i4				0x6
	IL_010e:            V_2=6;                                                      //stloc				V_2
	IL_0112:            /*goto IL_0002;*/goto IL_0117;                              //br				IL_0002
	IL_0117:            goto IL_00a3;                                               //br.s				IL_00a3
	IL_0119:                                                                        //ldc.i4				0x7
	IL_011e:            V_2=7;                                                      //stloc				V_2
	IL_0122:            /*goto IL_0002;*/goto IL_0127;                              //br				IL_0002
	IL_0127:                                                                        //ldarg.1
	IL_0128:            Temp_6=Root::T_x183::M_x2(A_1);                             //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^)
	IL_012d:            if(!Temp_6)goto IL_0105;                                    //brfalse.s				IL_0105
	IL_012f:                                                                        //ldc.i4				0x3
	IL_0134:            V_2=3;                                                      //stloc				V_2
	IL_0138:            /*goto IL_0002;*/goto IL_013d;                              //br				IL_0002
	IL_013d:            goto IL_004f;                                               //br				IL_004f
	IL_0142:                                                                        //ldc.i4.0
	IL_0143:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeDeclaration^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	Reflector::CodeModel::ITypeReference^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_4=14;                                                     //stloc				V_4
	IL_0009:            goto IL_0034;                                               //br.s				IL_0034
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_0057;case 1:goto IL_00fc;case 2:goto IL_007e;case 3:goto IL_00cf;case 4:goto IL_0046;case 5:goto IL_00a7;case 6:goto IL_00be;case 7:goto IL_00e8;};//switch				(IL_0057,IL_00fc,IL_007e,IL_00cf,IL_0046,IL_00a7,IL_00be,IL_00e8)
	IL_0034:                                                                        //ldarg.0
	IL_0035:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003a:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_003b:                                                                        //ldc.i4				0x4
	IL_0040:            V_3=4;                                                      //stloc				V_3
	IL_0044:            /*goto IL_000b;*/goto IL_0046;                              //br.s				IL_000b
	IL_0046:                                                                        //ldloc.0
	IL_0047:            if(V_0==nullptr)goto IL_0101;                               //brfalse				IL_0101
	IL_004c:                                                                        //ldc.i4				0x0
	IL_0051:            V_3=0;                                                      //stloc				V_3
	IL_0055:            /*goto IL_000b;*/goto IL_0057;                              //br.s				IL_000b
	IL_0057:            goto IL_00a9;                                               //br.s				IL_00a9
	IL_0059:                                                                        //ldloc.2
	IL_005a:            Temp_5=V_2->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_005f:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_0064:                                                                        //ldloc				V_4
	IL_0068:            Temp_6=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_4);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006d:            Temp_7=(Temp_5 == Temp_6);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0072:            return Temp_7;                                              //ret
	IL_0073:                                                                        //ldc.i4				0x2
	IL_0078:            V_3=2;                                                      //stloc				V_3
	IL_007c:            /*goto IL_000b;*/goto IL_007e;                              //br.s				IL_000b
	IL_007e:                                                                        //ldloc.2
	IL_007f:            Temp_1=V_2->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0084:                                                                        //ldstr				L"\x692B\x402D\x452F\x5F31"
	IL_0089:                                                                        //ldloc				V_4
	IL_008d:            Temp_2=a(L"\x692B\x402D\x452F\x5F31",V_4);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0092:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0097:            if(!Temp_3)goto IL_00d1;                                    //brfalse.s				IL_00d1
	IL_0099:                                                                        //ldc.i4				0x5
	IL_009e:            V_3=5;                                                      //stloc				V_3
	IL_00a2:            /*goto IL_000b;*/goto IL_00a7;                              //br				IL_000b
	IL_00a7:            goto IL_0059;                                               //br.s				IL_0059
	IL_00a9:                                                                        //ldloc.0
	IL_00aa:            Temp_0=V_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00af:            V_1=Temp_0;                                                 //stloc.1
	IL_00b0:                                                                        //ldc.i4				0x6
	IL_00b5:            V_3=6;                                                      //stloc				V_3
	IL_00b9:            /*goto IL_000b;*/goto IL_00be;                              //br				IL_000b
	IL_00be:                                                                        //ldloc.1
	IL_00bf:            if(V_1==nullptr)goto IL_0101;                               //brfalse.s				IL_0101
	IL_00c1:                                                                        //ldc.i4				0x3
	IL_00c6:            V_3=3;                                                      //stloc				V_3
	IL_00ca:            /*goto IL_000b;*/goto IL_00cf;                              //br				IL_000b
	IL_00cf:            goto IL_00d3;                                               //br.s				IL_00d3
	IL_00d1:                                                                        //ldc.i4.0
	IL_00d2:            return false;                                               //ret
	IL_00d3:                                                                        //ldloc.1
	IL_00d4:            Temp_4=V_1->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00d9:            V_2=Temp_4;                                                 //stloc.2
	IL_00da:                                                                        //ldc.i4				0x7
	IL_00df:            V_3=7;                                                      //stloc				V_3
	IL_00e3:            /*goto IL_000b;*/goto IL_00e8;                              //br				IL_000b
	IL_00e8:            goto IL_00eb;                                               //br.s				IL_00eb
	IL_00ea:                                                                        //break
	IL_00eb:                                                                        //ldloc.2
	IL_00ec:            if(V_2==nullptr)goto IL_00d1;                               //brfalse.s				IL_00d1
	IL_00ee:                                                                        //ldc.i4				0x1
	IL_00f3:            V_3=1;                                                      //stloc				V_3
	IL_00f7:            /*goto IL_000b;*/goto IL_00fc;                              //br				IL_000b
	IL_00fc:            goto IL_0073;                                               //br				IL_0073
	IL_0101:                                                                        //ldc.i4.0
	IL_0102:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	System::String^ Temp_33 = nullptr;
	System::String^ Temp_34 = nullptr;
	System::Boolean Temp_35 = false;
	System::String^ Temp_36 = nullptr;
	System::String^ Temp_37 = nullptr;
	System::Boolean Temp_38 = false;
	System::String^ Temp_39 = nullptr;
	System::String^ Temp_40 = nullptr;
	System::Boolean Temp_41 = false;
	System::String^ Temp_42 = nullptr;
	System::String^ Temp_43 = nullptr;
	System::Boolean Temp_44 = false;
	System::String^ Temp_45 = nullptr;
	System::String^ Temp_46 = nullptr;
	System::Boolean Temp_47 = false;
	System::String^ Temp_48 = nullptr;
	System::String^ Temp_49 = nullptr;
	System::Boolean Temp_50 = false;
	System::Boolean Temp_51 = false;
	System::Boolean Temp_52 = false;
	System::Object^ Temp_53 = nullptr;
	System::String^ Temp_54 = nullptr;
	System::String^ Temp_55 = nullptr;
	System::Boolean Temp_56 = false;
	System::String^ Temp_57 = nullptr;
	System::String^ Temp_58 = nullptr;
	System::Boolean Temp_59 = false;
	System::String^ Temp_60 = nullptr;
	System::String^ Temp_61 = nullptr;
	System::Boolean Temp_62 = false;
	System::String^ Temp_63 = nullptr;
	System::String^ Temp_64 = nullptr;
	System::Boolean Temp_65 = false;
	System::String^ Temp_66 = nullptr;
	System::String^ Temp_67 = nullptr;
	System::Boolean Temp_68 = false;
	System::String^ Temp_69 = nullptr;
	System::String^ Temp_70 = nullptr;
	System::Boolean Temp_71 = false;
	System::String^ Temp_72 = nullptr;
	System::String^ Temp_73 = nullptr;
	System::Boolean Temp_74 = false;
	System::String^ Temp_75 = nullptr;
	System::String^ Temp_76 = nullptr;
	System::Boolean Temp_77 = false;
	System::String^ Temp_78 = nullptr;
	System::String^ Temp_79 = nullptr;
	System::Boolean Temp_80 = false;
	System::String^ Temp_81 = nullptr;
	System::String^ Temp_82 = nullptr;
	System::Boolean Temp_83 = false;
	System::String^ Temp_84 = nullptr;
	System::String^ Temp_85 = nullptr;
	System::Boolean Temp_86 = false;
	System::String^ Temp_87 = nullptr;
	System::String^ Temp_88 = nullptr;
	System::Boolean Temp_89 = false;
	System::String^ Temp_90 = nullptr;
	System::String^ Temp_91 = nullptr;
	System::Boolean Temp_92 = false;
	System::String^ Temp_93 = nullptr;
	System::String^ Temp_94 = nullptr;
	System::Boolean Temp_95 = false;
	System::String^ Temp_96 = nullptr;
	System::String^ Temp_97 = nullptr;
	System::Boolean Temp_98 = false;
	System::String^ Temp_99 = nullptr;
	System::String^ Temp_100 = nullptr;
	System::Boolean Temp_101 = false;
	System::String^ Temp_102 = nullptr;
	System::String^ Temp_103 = nullptr;
	System::Boolean Temp_104 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_105 = nullptr;
	System::String^ Temp_106 = nullptr;
	System::String^ Temp_107 = nullptr;
	System::Boolean Temp_108 = false;
	Reflector::CodeModel::ITypeReference^ Temp_109 = nullptr;
	System::Boolean Temp_110 = false;
	Reflector::CodeModel::ITypeReferenceCollection^ Temp_111 = nullptr;
	System::Collections::IEnumerator^ Temp_112 = nullptr;
	System::String^ Temp_113 = nullptr;
	System::String^ Temp_114 = nullptr;
	System::Boolean Temp_115 = false;
	System::String^ Temp_116 = nullptr;
	System::String^ Temp_117 = nullptr;
	System::Boolean Temp_118 = false;
	System::String^ Temp_119 = nullptr;
	System::String^ Temp_120 = nullptr;
	System::Boolean Temp_121 = false;
	System::String^ Temp_122 = nullptr;
	System::String^ Temp_123 = nullptr;
	System::Boolean Temp_124 = false;
	System::String^ Temp_125 = nullptr;
	System::String^ Temp_126 = nullptr;
	System::Boolean Temp_127 = false;
	System::String^ Temp_128 = nullptr;
	System::String^ Temp_129 = nullptr;
	System::Boolean Temp_130 = false;
	System::String^ Temp_131 = nullptr;
	System::String^ Temp_132 = nullptr;
	System::Boolean Temp_133 = false;
	System::Boolean Temp_134 = false;
	System::Boolean Temp_135 = false;
	System::String^ Temp_136 = nullptr;
	System::String^ Temp_137 = nullptr;
	System::Boolean Temp_138 = false;
	System::String^ Temp_139 = nullptr;
	System::String^ Temp_140 = nullptr;
	System::Boolean Temp_141 = false;
	System::String^ Temp_142 = nullptr;
	System::String^ Temp_143 = nullptr;
	System::Boolean Temp_144 = false;
	System::String^ Temp_145 = nullptr;
	System::String^ Temp_146 = nullptr;
	System::Boolean Temp_147 = false;
	System::String^ Temp_148 = nullptr;
	System::String^ Temp_149 = nullptr;
	System::Boolean Temp_150 = false;
	System::Boolean Temp_151 = false;
	System::String^ Temp_152 = nullptr;
	System::String^ Temp_153 = nullptr;
	System::Boolean Temp_154 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_2 = nullptr;
	System::Boolean V_3 = false;
	System::Collections::IEnumerator^ V_4 = nullptr;
	System::IDisposable^ V_5 = nullptr;
	System::Int32 V_6 = 0;
	System::Int32 V_7 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x12
	IL_0005:            V_7=18;                                                     //stloc				V_7
	IL_0009:                                                                        //ldc.i4				0x68
	IL_000e:            V_6=104;                                                    //stloc				V_6
	IL_0012:            /*goto IL_0019;*/goto IL_0014;                              //br.s				IL_0019
	IL_0014:            goto IL_01de;                                               //br				IL_01de
	IL_0019:                                                                        //ldloc				V_6
	IL_001d:            switch(V_6){case 0:goto IL_0f10;case 1:goto IL_0d77;case 2:goto IL_056b;case 3:goto IL_071d;case 4:goto IL_0b06;case 5:goto IL_0c9f;case 6:goto IL_060e;case 7:goto IL_0536;case 8:goto IL_0314;case 9:goto IL_0778;case 10:goto IL_0a3f;case 11:goto IL_03a4;case 12:goto IL_0403;case 13:goto IL_0f8d;case 14:goto IL_0bdd;case 15:goto IL_035c;case 16:goto IL_05b3;case 17:goto IL_03b7;case 18:goto IL_087b;case 19:goto IL_01f2;case 20:goto IL_07bd;case 21:goto IL_04d9;case 22:goto IL_0478;case 23:goto IL_1065;case 24:goto IL_0d42;case 25:goto IL_08c4;case 26:goto IL_0643;case 27:goto IL_0b95;case 28:goto IL_024f;case 29:goto IL_0cb2;case 30:goto IL_0868;case 31:goto IL_0f45;case 32:goto IL_0c6a;case 33:goto IL_0ec8;case 34:goto IL_0765;case 35:goto IL_07f2;case 36:goto IL_0e24;case 37:goto IL_0327;case 38:goto IL_02df;case 39:goto IL_10f3;case 40:goto IL_0c57;case 41:goto IL_0284;case 42:goto IL_0d8a;case 43:goto IL_0dbf;case 44:goto IL_0fe8;case 45:goto IL_0438;case 46:goto IL_0a52;case 47:goto IL_0a0a;case 48:goto IL_0523;case 49:goto IL_0dd2;case 50:goto IL_068b;case 51:goto IL_06d3;case 52:goto IL_0ad1;case 53:goto IL_0e37;case 54:goto IL_0207;case 55:goto IL_1030;case 56:goto IL_07aa;case 57:goto IL_0cfa;case 58:goto IL_0fa0;case 59:goto IL_0c22;case 60:goto IL_0eb8;case 61:goto IL_04ad;case 62:goto IL_057e;case 63:goto IL_08f9;case 64:goto IL_0bca;case 65:goto IL_0fd5;case 66:goto IL_02cc;case 67:goto IL_080c;case 68:goto IL_08ad;case 69:goto IL_0e83;case 70:goto IL_0d2f;case 71:goto IL_1128;case 72:goto IL_0efd;case 73:goto IL_0820;case 74:goto IL_05c6;case 75:goto IL_10df;case 76:goto IL_05fb;case 77:goto IL_0b19;case 78:goto IL_06e8;case 79:goto IL_0c12;case 80:goto IL_0b38;case 81:goto IL_11b9;case 82:goto IL_0f58;case 83:goto IL_113b;case 84:goto IL_0297;case 85:goto IL_0656;case 86:goto IL_1078;case 87:goto IL_1187;case 88:goto IL_044b;case 89:goto IL_0a9a;case 90:goto IL_0ce7;case 91:goto IL_0b82;case 92:goto IL_10ad;case 93:goto IL_1170;case 94:goto IL_0abe;case 95:goto IL_023c;case 96:goto IL_0730;case 97:goto IL_101d;case 98:goto IL_069e;case 99:goto IL_03ec;case 100:goto IL_0465;case 101:goto IL_0833;case 102:goto IL_04ee;case 103:goto IL_036f;case 104:goto IL_0014;case 105:goto IL_0e04;case 106:goto IL_10cb;case 107:goto IL_0e6c;case 108:goto IL_0a87;case 109:goto IL_04c0;case 110:goto IL_0b4d;};//switch				(IL_0f10,IL_0d77,IL_056b,IL_071d,IL_0b06,IL_0c9f,IL_060e,IL_0536,IL_0314,IL_0778,IL_0a3f,IL_03a4,IL_0403,IL_0f8d,IL_0bdd,IL_035c,IL_05b3,IL_03b7,IL_087b,IL_01f2,IL_07bd,IL_04d9,IL_0478,IL_1065,IL_0d42,IL_08c4,IL_0643,IL_0b95,IL_024f,IL_0cb2,IL_0868,IL_0f45,IL_0c6a,IL_0ec8,IL_0765,IL_07f2,IL_0e24,IL_0327,IL_02df,IL_10f3,IL_0c57,IL_0284,IL_0d8a,IL_0dbf,IL_0fe8,IL_0438,IL_0a52,IL_0a0a,IL_0523,IL_0dd2,IL_068b,IL_06d3,IL_0ad1,IL_0e37,IL_0207,IL_1030,IL_07aa,IL_0cfa,IL_0fa0,IL_0c22,IL_0eb8,IL_04ad,IL_057e,IL_08f9,IL_0bca,IL_0fd5,IL_02cc,IL_080c,IL_08ad,IL_0e83,IL_0d2f,IL_1128,IL_0efd,IL_0820,IL_05c6,IL_10df,IL_05fb,IL_0b19,IL_06e8,IL_0c12,IL_0b38,IL_11b9,IL_0f58,IL_113b,IL_0297,IL_0656,IL_1078,IL_1187,IL_044b,IL_0a9a,IL_0ce7,IL_0b82,IL_10ad,IL_1170,IL_0abe,IL_023c,IL_0730,IL_101d,IL_069e,IL_03ec,IL_0465,IL_0833,IL_04ee,IL_036f,IL_0014,IL_0e04,IL_10cb,IL_0e6c,IL_0a87,IL_04c0,IL_0b4d)
	IL_01de:                                                                        //ldarg.1
	IL_01df:            if(A_1==nullptr)goto IL_0f4a;                               //brfalse				IL_0f4a
	IL_01e4:                                                                        //ldc.i4				0x13
	IL_01e9:            V_6=19;                                                     //stloc				V_6
	IL_01ed:            /*goto IL_0019;*/goto IL_01f2;                              //br				IL_0019
	IL_01f2:            goto IL_043d;                                               //br				IL_043d
	IL_01f7:                                                                        //ldc.i4.1
	IL_01f8:            return true;                                                //ret
	IL_01f9:                                                                        //ldc.i4				0x36
	IL_01fe:            V_6=54;                                                     //stloc				V_6
	IL_0202:            /*goto IL_0019;*/goto IL_0207;                              //br				IL_0019
	IL_0207:                                                                        //ldarg.1
	IL_0208:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_020d:                                                                        //ldloc				V_7
	IL_0211:            Temp_84=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0216:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0B37\x0839"
	IL_021b:                                                                        //ldloc				V_7
	IL_021f:            Temp_85=a(L"\x652F\x7B31\x5A33\x4235\x0B37\x0839",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0224:            Temp_86=Root::T_x183::M_x1(A_1,Temp_84,Temp_85);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0229:            if(Temp_86)goto IL_0e71;                                    //brtrue				IL_0e71
	IL_022e:                                                                        //ldc.i4				0x5f
	IL_0233:            V_6=95;                                                     //stloc				V_6
	IL_0237:            /*goto IL_0019;*/goto IL_023c;                              //br				IL_0019
	IL_023c:            goto IL_0dc4;                                               //br				IL_0dc4
	IL_0241:                                                                        //ldc.i4				0x1c
	IL_0246:            V_6=28;                                                     //stloc				V_6
	IL_024a:            /*goto IL_0019;*/goto IL_024f;                              //br				IL_0019
	IL_024f:                                                                        //ldarg.1
	IL_0250:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0255:                                                                        //ldloc				V_7
	IL_0259:            Temp_39=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_025e:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0035\x0C37"
	IL_0263:                                                                        //ldloc				V_7
	IL_0267:            Temp_40=a(L"\x792F\x5C31\x4033\x0035\x0C37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_026c:            Temp_41=Root::T_x183::M_x1(A_1,Temp_39,Temp_40);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0271:            if(Temp_41)goto IL_04de;                                    //brtrue				IL_04de
	IL_0276:                                                                        //ldc.i4				0x29
	IL_027b:            V_6=41;                                                     //stloc				V_6
	IL_027f:            /*goto IL_0019;*/goto IL_0284;                              //br				IL_0019
	IL_0284:            goto IL_0690;                                               //br				IL_0690
	IL_0289:                                                                        //ldc.i4				0x54
	IL_028e:            V_6=84;                                                     //stloc				V_6
	IL_0292:            /*goto IL_0019;*/goto IL_0297;                              //br				IL_0019
	IL_0297:                                                                        //ldarg.0
	IL_0298:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_029d:                                                                        //ldloc				V_7
	IL_02a1:            Temp_122=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02a6:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0B37\x0839"
	IL_02ab:                                                                        //ldloc				V_7
	IL_02af:            Temp_123=a(L"\x652F\x7B31\x5A33\x4235\x0B37\x0839",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02b4:            Temp_124=Root::T_x183::M_x1(A_0,Temp_122,Temp_123);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_02b9:            if(!Temp_124)goto IL_08b6;                                  //brfalse				IL_08b6
	IL_02be:                                                                        //ldc.i4				0x42
	IL_02c3:            V_6=66;                                                     //stloc				V_6
	IL_02c7:            /*goto IL_0019;*/goto IL_02cc;                              //br				IL_0019
	IL_02cc:            goto IL_106a;                                               //br				IL_106a
	IL_02d1:                                                                        //ldc.i4				0x26
	IL_02d6:            V_6=38;                                                     //stloc				V_6
	IL_02da:            /*goto IL_0019;*/goto IL_02df;                              //br				IL_0019
	IL_02df:                                                                        //ldarg.1
	IL_02e0:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_02e5:                                                                        //ldloc				V_7
	IL_02e9:            Temp_57=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02ee:                                                                        //ldstr				L"\x732F\x5A31\x5533\x4435"
	IL_02f3:                                                                        //ldloc				V_7
	IL_02f7:            Temp_58=a(L"\x732F\x5A31\x5533\x4435",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02fc:            Temp_59=Root::T_x183::M_x1(A_1,Temp_57,Temp_58);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0301:            if(!Temp_59)goto IL_1179;                                   //brfalse				IL_1179
	IL_0306:                                                                        //ldc.i4				0x8
	IL_030b:            V_6=8;                                                      //stloc				V_6
	IL_030f:            /*goto IL_0019;*/goto IL_0314;                              //br				IL_0019
	IL_0314:            goto IL_01f7;                                               //br				IL_01f7
	IL_0319:                                                                        //ldc.i4				0x25
	IL_031e:            V_6=37;                                                     //stloc				V_6
	IL_0322:            /*goto IL_0019;*/goto IL_0327;                              //br				IL_0019
	IL_0327:                                                                        //ldarg.1
	IL_0328:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_032d:                                                                        //ldloc				V_7
	IL_0331:            Temp_54=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0336:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_033b:                                                                        //ldloc				V_7
	IL_033f:            Temp_55=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0344:            Temp_56=Root::T_x183::M_x1(A_1,Temp_54,Temp_55);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0349:            if(Temp_56)goto IL_1175;                                    //brtrue				IL_1175
	IL_034e:                                                                        //ldc.i4				0xf
	IL_0353:            V_6=15;                                                     //stloc				V_6
	IL_0357:            /*goto IL_0019;*/goto IL_035c;                              //br				IL_0019
	IL_035c:            goto IL_0ca4;                                               //br				IL_0ca4
	IL_0361:                                                                        //ldc.i4				0x67
	IL_0366:            V_6=103;                                                    //stloc				V_6
	IL_036a:            /*goto IL_0019;*/goto IL_036f;                              //br				IL_0019
	IL_036f:                                                                        //ldarg.1
	IL_0370:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0375:                                                                        //ldloc				V_7
	IL_0379:            Temp_148=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_037e:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_0383:                                                                        //ldloc				V_7
	IL_0387:            Temp_149=a(L"\x722F\x4B31\x4033\x5335",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_038c:            Temp_150=Root::T_x183::M_x1(A_1,Temp_148,Temp_149);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0391:            if(!Temp_150)goto IL_0d34;                                  //brfalse				IL_0d34
	IL_0396:                                                                        //ldc.i4				0xb
	IL_039b:            V_6=11;                                                     //stloc				V_6
	IL_039f:            /*goto IL_0019;*/goto IL_03a4;                              //br				IL_0019
	IL_03a4:            goto IL_0e71;                                               //br				IL_0e71
	IL_03a9:                                                                        //ldc.i4				0x11
	IL_03ae:            V_6=17;                                                     //stloc				V_6
	IL_03b2:            /*goto IL_0019;*/goto IL_03b7;                              //br				IL_0019
	IL_03b7:                                                                        //ldarg.1
	IL_03b8:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_03bd:                                                                        //ldloc				V_7
	IL_03c1:            Temp_18=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03c6:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0735\x0E37"
	IL_03cb:                                                                        //ldloc				V_7
	IL_03cf:            Temp_19=a(L"\x792F\x5C31\x4033\x0735\x0E37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_03d4:            Temp_20=Root::T_x183::M_x1(A_1,Temp_18,Temp_19);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_03d9:            if(Temp_20)goto IL_04de;                                    //brtrue				IL_04de
	IL_03de:                                                                        //ldc.i4				0x63
	IL_03e3:            V_6=99;                                                     //stloc				V_6
	IL_03e7:            /*goto IL_0019;*/goto IL_03ec;                              //br				IL_0019
	IL_03ec:            goto IL_076a;                                               //br				IL_076a
	IL_03f1:                                                                        //ldc.i4.1
	IL_03f2:            return true;                                                //ret
	IL_03f3:                                                                        //ldc.i4.1
	IL_03f4:            return true;                                                //ret
	IL_03f5:                                                                        //ldc.i4				0xc
	IL_03fa:            V_6=12;                                                     //stloc				V_6
	IL_03fe:            /*goto IL_0019;*/goto IL_0403;                              //br				IL_0019
	IL_0403:                                                                        //ldarg.1
	IL_0404:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0409:                                                                        //ldloc				V_7
	IL_040d:            Temp_12=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0412:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39"
	IL_0417:                                                                        //ldloc				V_7
	IL_041b:            Temp_13=a(L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0420:            Temp_14=Root::T_x183::M_x1(A_1,Temp_12,Temp_13);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0425:            if(Temp_14)goto IL_0e73;                                    //brtrue				IL_0e73
	IL_042a:                                                                        //ldc.i4				0x2d
	IL_042f:            V_6=45;                                                     //stloc				V_6
	IL_0433:            /*goto IL_0019;*/goto IL_0438;                              //br				IL_0019
	IL_0438:            goto IL_0fda;                                               //br				IL_0fda
	IL_043d:                                                                        //ldc.i4				0x58
	IL_0442:            V_6=88;                                                     //stloc				V_6
	IL_0446:            /*goto IL_0019;*/goto IL_044b;                              //br				IL_0019
	IL_044b:                                                                        //ldarg.1
	IL_044c:                                                                        //ldarg.0
	IL_044d:            Temp_134=A_1->Equals(safe_cast<System::Object^>(A_0));      //callvirt				System::Boolean System::Object::Equals(System::Object^)
	IL_0452:            if(!Temp_134)goto IL_07f7;                                  //brfalse				IL_07f7
	IL_0457:                                                                        //ldc.i4				0x64
	IL_045c:            V_6=100;                                                    //stloc				V_6
	IL_0460:            /*goto IL_0019;*/goto IL_0465;                              //br				IL_0019
	IL_0465:            goto IL_09fa;                                               //br				IL_09fa
	IL_046a:                                                                        //ldc.i4				0x16
	IL_046f:            V_6=22;                                                     //stloc				V_6
	IL_0473:            /*goto IL_0019;*/goto IL_0478;                              //br				IL_0019
	IL_0478:                                                                        //ldarg.1
	IL_0479:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_047e:                                                                        //ldloc				V_7
	IL_0482:            Temp_27=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0487:                                                                        //ldstr				L"\x632F\x5B31\x5A33\x5135\x5437\x5F39"
	IL_048c:                                                                        //ldloc				V_7
	IL_0490:            Temp_28=a(L"\x632F\x5B31\x5A33\x5135\x5437\x5F39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0495:            Temp_29=Root::T_x183::M_x1(A_1,Temp_27,Temp_28);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_049a:            if(!Temp_29)goto IL_0241;                                   //brfalse				IL_0241
	IL_049f:                                                                        //ldc.i4				0x3d
	IL_04a4:            V_6=61;                                                     //stloc				V_6
	IL_04a8:            /*goto IL_0019;*/goto IL_04ad;                              //br				IL_0019
	IL_04ad:            goto IL_0b3d;                                               //br				IL_0b3d
	IL_04b2:                                                                        //ldc.i4				0x6d
	IL_04b7:            V_6=109;                                                    //stloc				V_6
	IL_04bb:            /*goto IL_0019;*/goto IL_04c0;                              //br				IL_0019
	IL_04c0:                                                                        //ldarg.1
	IL_04c1:            Temp_151=Root::T_x183::M_x13(A_1);                          //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_04c6:            if(!Temp_151)goto IL_0f4a;                                  //brfalse				IL_0f4a
	IL_04cb:                                                                        //ldc.i4				0x15
	IL_04d0:            V_6=21;                                                     //stloc				V_6
	IL_04d4:            /*goto IL_0019;*/goto IL_04d9;                              //br				IL_0019
	IL_04d9:            goto IL_0cec;                                               //br				IL_0cec
	IL_04de:                                                                        //ldc.i4.1
	IL_04df:            return true;                                                //ret
	IL_04e0:                                                                        //ldc.i4				0x66
	IL_04e5:            V_6=102;                                                    //stloc				V_6
	IL_04e9:            /*goto IL_0019;*/goto IL_04ee;                              //br				IL_0019
	IL_04ee:                                                                        //ldarg.1
	IL_04ef:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_04f4:                                                                        //ldloc				V_7
	IL_04f8:            Temp_145=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_04fd:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0B37\x0839"
	IL_0502:                                                                        //ldloc				V_7
	IL_0506:            Temp_146=a(L"\x652F\x7B31\x5A33\x4235\x0B37\x0839",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_050b:            Temp_147=Root::T_x183::M_x1(A_1,Temp_145,Temp_146);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0510:            if(Temp_147)goto IL_1175;                                   //brtrue				IL_1175
	IL_0515:                                                                        //ldc.i4				0x30
	IL_051a:            V_6=48;                                                     //stloc				V_6
	IL_051e:            /*goto IL_0019;*/goto IL_0523;                              //br				IL_0019
	IL_0523:            goto IL_0319;                                               //br				IL_0319
	IL_0528:                                                                        //ldc.i4				0x7
	IL_052d:            V_6=7;                                                      //stloc				V_6
	IL_0531:            /*goto IL_0019;*/goto IL_0536;                              //br				IL_0019
	IL_0536:                                                                        //ldarg.1
	IL_0537:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_053c:                                                                        //ldloc				V_7
	IL_0540:            Temp_6=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0545:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_054a:                                                                        //ldloc				V_7
	IL_054e:            Temp_7=a(L"\x722F\x4B31\x4033\x5335",V_7);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0553:            Temp_8=Root::T_x183::M_x1(A_1,Temp_6,Temp_7);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0558:            if(Temp_8)goto IL_06d8;                                     //brtrue				IL_06d8
	IL_055d:                                                                        //ldc.i4				0x2
	IL_0562:            V_6=2;                                                      //stloc				V_6
	IL_0566:            /*goto IL_0019;*/goto IL_056b;                              //br				IL_0019
	IL_056b:            goto IL_0ac3;                                               //br				IL_0ac3
	IL_0570:                                                                        //ldc.i4				0x3e
	IL_0575:            V_6=62;                                                     //stloc				V_6
	IL_0579:            /*goto IL_0019;*/goto IL_057e;                              //br				IL_0019
	IL_057e:                                                                        //ldarg.1
	IL_057f:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0584:                                                                        //ldloc				V_7
	IL_0588:            Temp_99=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_058d:                                                                        //ldstr				L"\x632F\x7031\x4D33\x4235\x5D37"
	IL_0592:                                                                        //ldloc				V_7
	IL_0596:            Temp_100=a(L"\x632F\x7031\x4D33\x4235\x5D37",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_059b:            Temp_101=Root::T_x183::M_x1(A_1,Temp_99,Temp_100);          //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_05a0:            if(!Temp_101)goto IL_03f5;                                  //brfalse				IL_03f5
	IL_05a5:                                                                        //ldc.i4				0x10
	IL_05aa:            V_6=16;                                                     //stloc				V_6
	IL_05ae:            /*goto IL_0019;*/goto IL_05b3;                              //br				IL_0019
	IL_05b3:            goto IL_08b4;                                               //br				IL_08b4
	IL_05b8:                                                                        //ldc.i4				0x4a
	IL_05bd:            V_6=74;                                                     //stloc				V_6
	IL_05c1:            /*goto IL_0019;*/goto IL_05c6;                              //br				IL_0019
	IL_05c6:                                                                        //ldarg.1
	IL_05c7:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_05cc:                                                                        //ldloc				V_7
	IL_05d0:            Temp_106=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05d5:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0735\x0E37"
	IL_05da:                                                                        //ldloc				V_7
	IL_05de:            Temp_107=a(L"\x792F\x5C31\x4033\x0735\x0E37",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_05e3:            Temp_108=Root::T_x183::M_x1(A_1,Temp_106,Temp_107);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_05e8:            if(Temp_108)goto IL_08b4;                                   //brtrue				IL_08b4
	IL_05ed:                                                                        //ldc.i4				0x4c
	IL_05f2:            V_6=76;                                                     //stloc				V_6
	IL_05f6:            /*goto IL_0019;*/goto IL_05fb;                              //br				IL_0019
	IL_05fb:            goto IL_0570;                                               //br				IL_0570
	IL_0600:                                                                        //ldc.i4				0x6
	IL_0605:            V_6=6;                                                      //stloc				V_6
	IL_0609:            /*goto IL_0019;*/goto IL_060e;                              //br				IL_0019
	IL_060e:                                                                        //ldarg.1
	IL_060f:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0614:                                                                        //ldloc				V_7
	IL_0618:            Temp_3=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_061d:                                                                        //ldstr				L"\x632F\x7031\x4D33\x4235\x5D37"
	IL_0622:                                                                        //ldloc				V_7
	IL_0626:            Temp_4=a(L"\x632F\x7031\x4D33\x4235\x5D37",V_7);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_062b:            Temp_5=Root::T_x183::M_x1(A_1,Temp_3,Temp_4);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0630:            if(Temp_5)goto IL_01f7;                                     //brtrue				IL_01f7
	IL_0635:                                                                        //ldc.i4				0x1a
	IL_063a:            V_6=26;                                                     //stloc				V_6
	IL_063e:            /*goto IL_0019;*/goto IL_0643;                              //br				IL_0019
	IL_0643:            goto IL_0b3f;                                               //br				IL_0b3f
	IL_0648:                                                                        //ldc.i4				0x55
	IL_064d:            V_6=85;                                                     //stloc				V_6
	IL_0651:            /*goto IL_0019;*/goto IL_0656;                              //br				IL_0019
	IL_0656:                                                                        //ldarg.1
	IL_0657:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_065c:                                                                        //ldloc				V_7
	IL_0660:            Temp_125=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0665:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_066a:                                                                        //ldloc				V_7
	IL_066e:            Temp_126=a(L"\x722F\x4B31\x4033\x5335",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0673:            Temp_127=Root::T_x183::M_x1(A_1,Temp_125,Temp_126);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0678:            if(!Temp_127)goto IL_0b87;                                  //brfalse				IL_0b87
	IL_067d:                                                                        //ldc.i4				0x32
	IL_0682:            V_6=50;                                                     //stloc				V_6
	IL_0686:            /*goto IL_0019;*/goto IL_068b;                              //br				IL_0019
	IL_068b:            goto IL_10e1;                                               //br				IL_10e1
	IL_0690:                                                                        //ldc.i4				0x62
	IL_0695:            V_6=98;                                                     //stloc				V_6
	IL_0699:            /*goto IL_0019;*/goto IL_069e;                              //br				IL_0019
	IL_069e:                                                                        //ldarg.1
	IL_069f:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_06a4:                                                                        //ldloc				V_7
	IL_06a8:            Temp_139=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06ad:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0535\x0A37"
	IL_06b2:                                                                        //ldloc				V_7
	IL_06b6:            Temp_140=a(L"\x792F\x5C31\x4033\x0535\x0A37",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06bb:            Temp_141=Root::T_x183::M_x1(A_1,Temp_139,Temp_140);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_06c0:            if(Temp_141)goto IL_04de;                                   //brtrue				IL_04de
	IL_06c5:                                                                        //ldc.i4				0x33
	IL_06ca:            V_6=51;                                                     //stloc				V_6
	IL_06ce:            /*goto IL_0019;*/goto IL_06d3;                              //br				IL_0019
	IL_06d3:            goto IL_03a9;                                               //br				IL_03a9
	IL_06d8:                                                                        //ldc.i4.1
	IL_06d9:            return true;                                                //ret
	IL_06da:                                                                        //ldc.i4				0x4e
	IL_06df:            V_6=78;                                                     //stloc				V_6
	IL_06e3:            /*goto IL_0019;*/goto IL_06e8;                              //br				IL_0019
	IL_06e8:                                                                        //ldarg.1
	IL_06e9:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_06ee:                                                                        //ldloc				V_7
	IL_06f2:            Temp_113=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_06f7:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_06fc:                                                                        //ldloc				V_7
	IL_0700:            Temp_114=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0705:            Temp_115=Root::T_x183::M_x1(A_1,Temp_113,Temp_114);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_070a:            if(Temp_115)goto IL_10e1;                                   //brtrue				IL_10e1
	IL_070f:                                                                        //ldc.i4				0x3
	IL_0714:            V_6=3;                                                      //stloc				V_6
	IL_0718:            /*goto IL_0019;*/goto IL_071d;                              //br				IL_0019
	IL_071d:            goto IL_0648;                                               //br				IL_0648
	IL_0722:                                                                        //ldc.i4				0x60
	IL_0727:            V_6=96;                                                     //stloc				V_6
	IL_072b:            /*goto IL_0019;*/goto IL_0730;                              //br				IL_0019
	IL_0730:                                                                        //ldarg.1
	IL_0731:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0736:                                                                        //ldloc				V_7
	IL_073a:            Temp_136=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_073f:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39"
	IL_0744:                                                                        //ldloc				V_7
	IL_0748:            Temp_137=a(L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_074d:            Temp_138=Root::T_x183::M_x1(A_1,Temp_136,Temp_137);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0752:            if(Temp_138)goto IL_10e1;                                   //brtrue				IL_10e1
	IL_0757:                                                                        //ldc.i4				0x22
	IL_075c:            V_6=34;                                                     //stloc				V_6
	IL_0760:            /*goto IL_0019;*/goto IL_0765;                              //br				IL_0019
	IL_0765:            goto IL_0a44;                                               //br				IL_0a44
	IL_076a:                                                                        //ldc.i4				0x9
	IL_076f:            V_6=9;                                                      //stloc				V_6
	IL_0773:            /*goto IL_0019;*/goto IL_0778;                              //br				IL_0019
	IL_0778:                                                                        //ldarg.1
	IL_0779:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_077e:                                                                        //ldloc				V_7
	IL_0782:            Temp_9=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0787:                                                                        //ldstr				L"\x632F\x7031\x4D33\x4235\x5D37"
	IL_078c:                                                                        //ldloc				V_7
	IL_0790:            Temp_10=a(L"\x632F\x7031\x4D33\x4235\x5D37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0795:            Temp_11=Root::T_x183::M_x1(A_1,Temp_9,Temp_10);             //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_079a:            if(!Temp_11)goto IL_0722;                                   //brfalse.s				IL_0722
	IL_079c:                                                                        //ldc.i4				0x38
	IL_07a1:            V_6=56;                                                     //stloc				V_6
	IL_07a5:            /*goto IL_0019;*/goto IL_07aa;                              //br				IL_0019
	IL_07aa:            goto IL_04de;                                               //br				IL_04de
	IL_07af:                                                                        //ldc.i4				0x14
	IL_07b4:            V_6=20;                                                     //stloc				V_6
	IL_07b8:            /*goto IL_0019;*/goto IL_07bd;                              //br				IL_0019
	IL_07bd:                                                                        //ldarg.1
	IL_07be:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_07c3:                                                                        //ldloc				V_7
	IL_07c7:            Temp_24=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07cc:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0735\x0E37"
	IL_07d1:                                                                        //ldloc				V_7
	IL_07d5:            Temp_25=a(L"\x792F\x5C31\x4033\x0735\x0E37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_07da:            Temp_26=Root::T_x183::M_x1(A_1,Temp_24,Temp_25);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_07df:            if(Temp_26)goto IL_10b2;                                    //brtrue				IL_10b2
	IL_07e4:                                                                        //ldc.i4				0x23
	IL_07e9:            V_6=35;                                                     //stloc				V_6
	IL_07ed:            /*goto IL_0019;*/goto IL_07f2;                              //br				IL_0019
	IL_07f2:            goto IL_0f92;                                               //br				IL_0f92
	IL_07f7:                                                                        //ldarg.1
	IL_07f8:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_07fd:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_1);//stloc.0
	IL_07fe:                                                                        //ldc.i4				0x43
	IL_0803:            V_6=67;                                                     //stloc				V_6
	IL_0807:            /*goto IL_0019;*/goto IL_080c;                              //br				IL_0019
	IL_080c:                                                                        //ldloc.0
	IL_080d:            if(V_0==nullptr)goto IL_0a8c;                               //brfalse				IL_0a8c
	IL_0812:                                                                        //ldc.i4				0x49
	IL_0817:            V_6=73;                                                     //stloc				V_6
	IL_081b:            /*goto IL_0019;*/goto IL_0820;                              //br				IL_0019
	IL_0820:            goto IL_10b6;                                               //br				IL_10b6
	IL_0825:                                                                        //ldc.i4				0x65
	IL_082a:            V_6=101;                                                    //stloc				V_6
	IL_082e:            /*goto IL_0019;*/goto IL_0833;                              //br				IL_0019
	IL_0833:                                                                        //ldarg.0
	IL_0834:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0839:                                                                        //ldloc				V_7
	IL_083d:            Temp_142=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0842:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0035\x0C37"
	IL_0847:                                                                        //ldloc				V_7
	IL_084b:            Temp_143=a(L"\x792F\x5C31\x4033\x0035\x0C37",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0850:            Temp_144=Root::T_x183::M_x1(A_0,Temp_142,Temp_143);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0855:            if(!Temp_144)goto IL_0d34;                                  //brfalse				IL_0d34
	IL_085a:                                                                        //ldc.i4				0x1e
	IL_085f:            V_6=30;                                                     //stloc				V_6
	IL_0863:            /*goto IL_0019;*/goto IL_0868;                              //br				IL_0019
	IL_0868:            goto IL_0eba;                                               //br				IL_0eba
	IL_086d:                                                                        //ldc.i4				0x12
	IL_0872:            V_6=18;                                                     //stloc				V_6
	IL_0876:            /*goto IL_0019;*/goto IL_087b;                              //br				IL_0019
	IL_087b:                                                                        //ldarg.1
	IL_087c:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0881:                                                                        //ldloc				V_7
	IL_0885:            Temp_21=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_088a:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0035\x0C37"
	IL_088f:                                                                        //ldloc				V_7
	IL_0893:            Temp_22=a(L"\x792F\x5C31\x4033\x0035\x0C37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0898:            Temp_23=Root::T_x183::M_x1(A_1,Temp_21,Temp_22);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_089d:            if(Temp_23)goto IL_08b4;                                    //brtrue.s				IL_08b4
	IL_089f:                                                                        //ldc.i4				0x44
	IL_08a4:            V_6=68;                                                     //stloc				V_6
	IL_08a8:            /*goto IL_0019;*/goto IL_08ad;                              //br				IL_0019
	IL_08ad:            goto IL_10e5;                                               //br				IL_10e5
	IL_08b2:                                                                        //ldc.i4.1
	IL_08b3:            return true;                                                //ret
	IL_08b4:                                                                        //ldc.i4.1
	IL_08b5:            return true;                                                //ret
	IL_08b6:                                                                        //ldc.i4				0x19
	IL_08bb:            V_6=25;                                                     //stloc				V_6
	IL_08bf:            /*goto IL_0019;*/goto IL_08c4;                              //br				IL_0019
	IL_08c4:                                                                        //ldarg.0
	IL_08c5:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_08ca:                                                                        //ldloc				V_7
	IL_08ce:            Temp_33=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08d3:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39"
	IL_08d8:                                                                        //ldloc				V_7
	IL_08dc:            Temp_34=a(L"\x652F\x7B31\x5A33\x4235\x0E37\x0E39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_08e1:            Temp_35=Root::T_x183::M_x1(A_0,Temp_33,Temp_34);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_08e6:            if(!Temp_35)goto IL_0f4a;                                   //brfalse				IL_0f4a
	IL_08eb:                                                                        //ldc.i4				0x3f
	IL_08f0:            V_6=63;                                                     //stloc				V_6
	IL_08f4:            /*goto IL_0019;*/goto IL_08f9;                              //br				IL_0019
	IL_08f9:            goto IL_04e0;                                               //br				IL_04e0
	IL_08F901:          try{
	IL_08fe:                                                                        //ldc.i4				0x1
	IL_0903:            V_6=1;                                                      //stloc				V_6
	IL_0907:            /*goto IL_090b;*/goto IL_0909;                              //br.s				IL_090b
	IL_0909:            goto IL_0930;                                               //br.s				IL_0930
	IL_090b:                                                                        //ldloc				V_6
	IL_090f:            switch(V_6){case 0:goto IL_096d;case 1:goto IL_0909;case 2:goto IL_095e;case 3:goto IL_094a;case 4:goto IL_0994;case 5:goto IL_09a4;case 6:goto IL_097d;};//switch				(IL_096d,IL_0909,IL_095e,IL_094a,IL_0994,IL_09a4,IL_097d)
	IL_0930:            goto IL_0972;                                               //br.s				IL_0972
	IL_0932:                                                                        //ldloc.s				V_4
	IL_0934:            Temp_53=V_4->Current;                                       //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0939:                                                                        //castclass				Reflector::CodeModel::ITypeReference
	IL_093e:            V_2=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_53);//stloc.2
	IL_093f:                                                                        //ldc.i4				0x3
	IL_0944:            V_6=3;                                                      //stloc				V_6
	IL_0948:            /*goto IL_090b;*/goto IL_094a;                              //br.s				IL_090b
	IL_094a:                                                                        //ldarg.0
	IL_094b:                                                                        //ldloc.2
	IL_094c:            Temp_51=Root::T_x183::M_x1(A_0,safe_cast<Reflector::CodeModel::IType^>(V_2));//call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_0951:            if(!Temp_51)goto IL_0972;                                   //brfalse.s				IL_0972
	IL_0953:                                                                        //ldc.i4				0x2
	IL_0958:            V_6=2;                                                      //stloc				V_6
	IL_095c:            /*goto IL_090b;*/goto IL_095e;                              //br.s				IL_090b
	IL_095e:            goto IL_0960;                                               //br.s				IL_0960
	IL_0960:                                                                        //ldc.i4.1
	IL_0961:            V_3=true;                                                   //stloc.3
	IL_0962:                                                                        //ldc.i4				0x0
	IL_0967:            V_6=0;                                                      //stloc				V_6
	IL_096b:            /*goto IL_090b;*/goto IL_096d;                              //br.s				IL_090b
	IL_096d:            goto IL_11be;                                               //leave				IL_11be
	IL_0972:                                                                        //ldc.i4				0x6
	IL_0977:            V_6=6;                                                      //stloc				V_6
	IL_097b:            /*goto IL_090b;*/goto IL_097d;                              //br.s				IL_090b
	IL_097d:                                                                        //ldloc.s				V_4
	IL_097f:            Temp_52=V_4->MoveNext();                                    //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0984:            if(Temp_52)goto IL_0932;                                    //brtrue.s				IL_0932
	IL_0986:                                                                        //ldc.i4				0x4
	IL_098b:            V_6=4;                                                      //stloc				V_6
	IL_098f:            /*goto IL_090b;*/goto IL_0994;                              //br				IL_090b
	IL_0994:            goto IL_0996;                                               //br.s				IL_0996
	IL_0996:                                                                        //ldc.i4				0x5
	IL_099b:            V_6=5;                                                      //stloc				V_6
	IL_099f:            /*goto IL_090b;*/goto IL_09a4;                              //br				IL_090b
	IL_09a4:            goto IL_0a8c;                                               //leave				IL_0a8c
	                    ;}
	                    finally{
	IL_09a9:            goto IL_09c0;                                               //br.s				IL_09c0
	IL_09ab:                                                                        //ldloc				V_6
	IL_09af:            switch(V_6){case 0:goto IL_09d4;case 1:goto IL_09f7;case 2:goto IL_09e3;};//switch				(IL_09d4,IL_09f7,IL_09e3)
	IL_09c0:                                                                        //ldloc.s				V_4
	IL_09c2:                                                                        //isinst				System::IDisposable
	IL_09c7:            V_5=dynamic_cast<System::IDisposable^>(V_4);                //stloc.s				V_5
	IL_09c9:                                                                        //ldc.i4				0x0
	IL_09ce:            V_6=0;                                                      //stloc				V_6
	IL_09d2:            /*goto IL_09ab;*/goto IL_09d4;                              //br.s				IL_09ab
	IL_09d4:                                                                        //ldloc.s				V_5
	IL_09d6:            if(V_5==nullptr)goto IL_09f9;                               //brfalse.s				IL_09f9
	IL_09d8:                                                                        //ldc.i4				0x2
	IL_09dd:            V_6=2;                                                      //stloc				V_6
	IL_09e1:            /*goto IL_09ab;*/goto IL_09e3;                              //br.s				IL_09ab
	IL_09e3:            goto IL_09e5;                                               //br.s				IL_09e5
	IL_09e5:                                                                        //ldloc.s				V_5
	IL_09e7:            /*V_5->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_09ec:                                                                        //ldc.i4				0x1
	IL_09f1:            V_6=1;                                                      //stloc				V_6
	IL_09f5:            /*goto IL_09ab;*/goto IL_09f7;                              //br.s				IL_09ab
	IL_09f7:            goto IL_09f9;                                               //br.s				IL_09f9
	IL_09f9:                                                                        //endfinally
	                    ;}
	IL_09fa:                                                                        //ldc.i4.1
	IL_09fb:            return true;                                                //ret
	IL_09fc:                                                                        //ldc.i4				0x2f
	IL_0a01:            V_6=47;                                                     //stloc				V_6
	IL_0a05:            /*goto IL_0019;*/goto IL_0a0a;                              //br				IL_0019
	IL_0a0a:                                                                        //ldarg.1
	IL_0a0b:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0a10:                                                                        //ldloc				V_7
	IL_0a14:            Temp_72=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a19:                                                                        //ldstr				L"\x732F\x5A31\x5533\x4435"
	IL_0a1e:                                                                        //ldloc				V_7
	IL_0a22:            Temp_73=a(L"\x732F\x5A31\x5533\x4435",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a27:            Temp_74=Root::T_x183::M_x1(A_1,Temp_72,Temp_73);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0a2c:            if(!Temp_74)goto IL_0f4a;                                   //brfalse				IL_0f4a
	IL_0a31:                                                                        //ldc.i4				0xa
	IL_0a36:            V_6=10;                                                     //stloc				V_6
	IL_0a3a:            /*goto IL_0019;*/goto IL_0a3f;                              //br				IL_0019
	IL_0a3f:            goto IL_1175;                                               //br				IL_1175
	IL_0a44:                                                                        //ldc.i4				0x2e
	IL_0a49:            V_6=46;                                                     //stloc				V_6
	IL_0a4d:            /*goto IL_0019;*/goto IL_0a52;                              //br				IL_0019
	IL_0a52:                                                                        //ldarg.1
	IL_0a53:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0a58:                                                                        //ldloc				V_7
	IL_0a5c:            Temp_69=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a61:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0B37\x0839"
	IL_0a66:                                                                        //ldloc				V_7
	IL_0a6a:            Temp_70=a(L"\x652F\x7B31\x5A33\x4235\x0B37\x0839",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0a6f:            Temp_71=Root::T_x183::M_x1(A_1,Temp_69,Temp_70);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0a74:            if(Temp_71)goto IL_10e1;                                    //brtrue				IL_10e1
	IL_0a79:                                                                        //ldc.i4				0x6c
	IL_0a7e:            V_6=108;                                                    //stloc				V_6
	IL_0a82:            /*goto IL_0019;*/goto IL_0a87;                              //br				IL_0019
	IL_0a87:            goto IL_06da;                                               //br				IL_06da
	IL_0a8c:                                                                        //ldc.i4				0x59
	IL_0a91:            V_6=89;                                                     //stloc				V_6
	IL_0a95:            /*goto IL_0019;*/goto IL_0a9a;                              //br				IL_0019
	IL_0a9a:                                                                        //ldc.i4.6
	IL_0a9b:                                                                        //dup
	IL_0a9c:                                                                        //dup
	IL_0a9d:                                                                        //ldc.i4.0
	IL_0a9e:                                                                        //sub
	IL_0a9f:                                                                        //blt				IL_0a9b
	IL_0aa4:                                                                        //pop
	IL_0aa5:                                                                        //ldarg.0
	IL_0aa6:            Temp_135=Root::T_x183::M_x13(A_0);                          //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_0aab:            if(Temp_135)goto IL_0cec;                                   //brtrue				IL_0cec
	IL_0ab0:                                                                        //ldc.i4				0x5e
	IL_0ab5:            V_6=94;                                                     //stloc				V_6
	IL_0ab9:            /*goto IL_0019;*/goto IL_0abe;                              //br				IL_0019
	IL_0abe:            goto IL_04b2;                                               //br				IL_04b2
	IL_0ac3:                                                                        //ldc.i4				0x34
	IL_0ac8:            V_6=52;                                                     //stloc				V_6
	IL_0acc:            /*goto IL_0019;*/goto IL_0ad1;                              //br				IL_0019
	IL_0ad1:                                                                        //ldarg.1
	IL_0ad2:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0ad7:                                                                        //ldloc				V_7
	IL_0adb:            Temp_78=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ae0:                                                                        //ldstr				L"\x732F\x5A31\x5533\x4435"
	IL_0ae5:                                                                        //ldloc				V_7
	IL_0ae9:            Temp_79=a(L"\x732F\x5A31\x5533\x4435",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0aee:            Temp_80=Root::T_x183::M_x1(A_1,Temp_78,Temp_79);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0af3:            if(!Temp_80)goto IL_0289;                                   //brfalse				IL_0289
	IL_0af8:                                                                        //ldc.i4				0x4
	IL_0afd:            V_6=4;                                                      //stloc				V_6
	IL_0b01:            /*goto IL_0019;*/goto IL_0b06;                              //br				IL_0019
	IL_0b06:            goto IL_06d8;                                               //br				IL_06d8
	IL_0b0b:                                                                        //ldc.i4				0x4d
	IL_0b10:            V_6=77;                                                     //stloc				V_6
	IL_0b14:            /*goto IL_0019;*/goto IL_0b19;                              //br				IL_0019
	IL_0b19:                                                                        //ldarg.0
	IL_0b1a:                                                                        //ldloc.1
	IL_0b1b:            Temp_109=V_1->BaseType;                                     //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_0b20:            Temp_110=Root::T_x183::M_x1(A_0,safe_cast<Reflector::CodeModel::IType^>(Temp_109));//call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,Reflector::CodeModel::IType^)
	IL_0b25:            if(!Temp_110)goto IL_0e09;                                  //brfalse				IL_0e09
	IL_0b2a:                                                                        //ldc.i4				0x50
	IL_0b2f:            V_6=80;                                                     //stloc				V_6
	IL_0b33:            /*goto IL_0019;*/goto IL_0b38;                              //br				IL_0019
	IL_0b38:            goto IL_10b4;                                               //br				IL_10b4
	IL_0b3d:                                                                        //ldc.i4.1
	IL_0b3e:            return true;                                                //ret
	IL_0b3f:                                                                        //ldc.i4				0x6e
	IL_0b44:            V_6=110;                                                    //stloc				V_6
	IL_0b48:            /*goto IL_0019;*/goto IL_0b4d;                              //br				IL_0019
	IL_0b4d:                                                                        //ldarg.1
	IL_0b4e:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0b53:                                                                        //ldloc				V_7
	IL_0b57:            Temp_152=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b5c:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_0b61:                                                                        //ldloc				V_7
	IL_0b65:            Temp_153=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0b6a:            Temp_154=Root::T_x183::M_x1(A_1,Temp_152,Temp_153);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0b6f:            if(Temp_154)goto IL_01f7;                                   //brtrue				IL_01f7
	IL_0b74:                                                                        //ldc.i4				0x5b
	IL_0b79:            V_6=91;                                                     //stloc				V_6
	IL_0b7d:            /*goto IL_0019;*/goto IL_0b82;                              //br				IL_0019
	IL_0b82:            goto IL_1022;                                               //br				IL_1022
	IL_0b87:                                                                        //ldc.i4				0x1b
	IL_0b8c:            V_6=27;                                                     //stloc				V_6
	IL_0b90:            /*goto IL_0019;*/goto IL_0b95;                              //br				IL_0019
	IL_0b95:                                                                        //ldarg.0
	IL_0b96:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0b9b:                                                                        //ldloc				V_7
	IL_0b9f:            Temp_36=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ba4:                                                                        //ldstr				L"\x632F\x5B31\x5A33\x5135\x5437\x5F39"
	IL_0ba9:                                                                        //ldloc				V_7
	IL_0bad:            Temp_37=a(L"\x632F\x5B31\x5A33\x5135\x5437\x5F39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bb2:            Temp_38=Root::T_x183::M_x1(A_0,Temp_36,Temp_37);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0bb7:            if(!Temp_38)goto IL_0825;                                   //brfalse				IL_0825
	IL_0bbc:                                                                        //ldc.i4				0x40
	IL_0bc1:            V_6=64;                                                     //stloc				V_6
	IL_0bc5:            /*goto IL_0019;*/goto IL_0bca;                              //br				IL_0019
	IL_0bca:            goto IL_086d;                                               //br				IL_086d
	IL_0bcf:                                                                        //ldc.i4				0xe
	IL_0bd4:            V_6=14;                                                     //stloc				V_6
	IL_0bd8:            /*goto IL_0019;*/goto IL_0bdd;                              //br				IL_0019
	IL_0bdd:                                                                        //ldarg.1
	IL_0bde:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0be3:                                                                        //ldloc				V_7
	IL_0be7:            Temp_15=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bec:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_0bf1:                                                                        //ldloc				V_7
	IL_0bf5:            Temp_16=a(L"\x722F\x4B31\x4033\x5335",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0bfa:            Temp_17=Root::T_x183::M_x1(A_1,Temp_15,Temp_16);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0bff:            if(Temp_17)goto IL_03f1;                                    //brtrue				IL_03f1
	IL_0c04:                                                                        //ldc.i4				0x4f
	IL_0c09:            V_6=79;                                                     //stloc				V_6
	IL_0c0d:            /*goto IL_0019;*/goto IL_0c12;                              //br				IL_0019
	IL_0c12:            goto IL_0c5c;                                               //br.s				IL_0c5c
	IL_0c14:                                                                        //ldc.i4				0x3b
	IL_0c19:            V_6=59;                                                     //stloc				V_6
	IL_0c1d:            /*goto IL_0019;*/goto IL_0c22;                              //br				IL_0019
	IL_0c22:                                                                        //ldarg.1
	IL_0c23:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0c28:                                                                        //ldloc				V_7
	IL_0c2c:            Temp_96=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c31:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_0c36:                                                                        //ldloc				V_7
	IL_0c3a:            Temp_97=a(L"\x722F\x4B31\x4033\x5335",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c3f:            Temp_98=Root::T_x183::M_x1(A_1,Temp_96,Temp_97);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0c44:            if(!Temp_98)goto IL_112d;                                   //brfalse				IL_112d
	IL_0c49:                                                                        //ldc.i4				0x28
	IL_0c4e:            V_6=40;                                                     //stloc				V_6
	IL_0c52:            /*goto IL_0019;*/goto IL_0c57;                              //br				IL_0019
	IL_0c57:            goto IL_08b2;                                               //br				IL_08b2
	IL_0c5c:                                                                        //ldc.i4				0x20
	IL_0c61:            V_6=32;                                                     //stloc				V_6
	IL_0c65:            /*goto IL_0019;*/goto IL_0c6a;                              //br				IL_0019
	IL_0c6a:                                                                        //ldarg.1
	IL_0c6b:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0c70:                                                                        //ldloc				V_7
	IL_0c74:            Temp_45=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c79:                                                                        //ldstr				L"\x732F\x5A31\x5533\x4435"
	IL_0c7e:                                                                        //ldloc				V_7
	IL_0c82:            Temp_46=a(L"\x732F\x5A31\x5533\x4435",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0c87:            Temp_47=Root::T_x183::M_x1(A_1,Temp_45,Temp_46);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0c8c:            if(!Temp_47)goto IL_08b6;                                   //brfalse				IL_08b6
	IL_0c91:                                                                        //ldc.i4				0x5
	IL_0c96:            V_6=5;                                                      //stloc				V_6
	IL_0c9a:            /*goto IL_0019;*/goto IL_0c9f;                              //br				IL_0019
	IL_0c9f:            goto IL_03f1;                                               //br				IL_03f1
	IL_0ca4:                                                                        //ldc.i4				0x1d
	IL_0ca9:            V_6=29;                                                     //stloc				V_6
	IL_0cad:            /*goto IL_0019;*/goto IL_0cb2;                              //br				IL_0019
	IL_0cb2:                                                                        //ldarg.1
	IL_0cb3:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0cb8:                                                                        //ldloc				V_7
	IL_0cbc:            Temp_42=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0cc1:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_0cc6:                                                                        //ldloc				V_7
	IL_0cca:            Temp_43=a(L"\x722F\x4B31\x4033\x5335",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ccf:            Temp_44=Root::T_x183::M_x1(A_1,Temp_42,Temp_43);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0cd4:            if(Temp_44)goto IL_1175;                                    //brtrue				IL_1175
	IL_0cd9:                                                                        //ldc.i4				0x5a
	IL_0cde:            V_6=90;                                                     //stloc				V_6
	IL_0ce2:            /*goto IL_0019;*/goto IL_0ce7;                              //br				IL_0019
	IL_0ce7:            goto IL_09fc;                                               //br				IL_09fc
	IL_0cec:                                                                        //ldc.i4				0x39
	IL_0cf1:            V_6=57;                                                     //stloc				V_6
	IL_0cf5:            /*goto IL_0019;*/goto IL_0cfa;                              //br				IL_0019
	IL_0cfa:                                                                        //ldarg.0
	IL_0cfb:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0d00:                                                                        //ldloc				V_7
	IL_0d04:            Temp_90=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d09:                                                                        //ldstr				L"\x742F\x5D31\x4133\x5435\x5437\x5F39"
	IL_0d0e:                                                                        //ldloc				V_7
	IL_0d12:            Temp_91=a(L"\x742F\x5D31\x4133\x5435\x5437\x5F39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d17:            Temp_92=Root::T_x183::M_x1(A_0,Temp_90,Temp_91);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0d1c:            if(!Temp_92)goto IL_0b87;                                   //brfalse				IL_0b87
	IL_0d21:                                                                        //ldc.i4				0x46
	IL_0d26:            V_6=70;                                                     //stloc				V_6
	IL_0d2a:            /*goto IL_0019;*/goto IL_0d2f;                              //br				IL_0019
	IL_0d2f:            goto IL_046a;                                               //br				IL_046a
	IL_0d34:                                                                        //ldc.i4				0x18
	IL_0d39:            V_6=24;                                                     //stloc				V_6
	IL_0d3d:            /*goto IL_0019;*/goto IL_0d42;                              //br				IL_0019
	IL_0d42:                                                                        //ldarg.0
	IL_0d43:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0d48:                                                                        //ldloc				V_7
	IL_0d4c:            Temp_30=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d51:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0535\x0A37"
	IL_0d56:                                                                        //ldloc				V_7
	IL_0d5a:            Temp_31=a(L"\x792F\x5C31\x4033\x0535\x0A37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d5f:            Temp_32=Root::T_x183::M_x1(A_0,Temp_30,Temp_31);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0d64:            if(!Temp_32)goto IL_1179;                                   //brfalse				IL_1179
	IL_0d69:                                                                        //ldc.i4				0x1
	IL_0d6e:            V_6=1;                                                      //stloc				V_6
	IL_0d72:            /*goto IL_0019;*/goto IL_0d77;                              //br				IL_0019
	IL_0d77:            goto IL_0f02;                                               //br				IL_0f02
	IL_0d7c:                                                                        //ldc.i4				0x2a
	IL_0d81:            V_6=42;                                                     //stloc				V_6
	IL_0d85:            /*goto IL_0019;*/goto IL_0d8a;                              //br				IL_0019
	IL_0d8a:                                                                        //ldarg.1
	IL_0d8b:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0d90:                                                                        //ldloc				V_7
	IL_0d94:            Temp_63=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0d99:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_0d9e:                                                                        //ldloc				V_7
	IL_0da2:            Temp_64=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0da7:            Temp_65=Root::T_x183::M_x1(A_1,Temp_63,Temp_64);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0dac:            if(Temp_65)goto IL_0e73;                                    //brtrue				IL_0e73
	IL_0db1:                                                                        //ldc.i4				0x2b
	IL_0db6:            V_6=43;                                                     //stloc				V_6
	IL_0dba:            /*goto IL_0019;*/goto IL_0dbf;                              //br				IL_0019
	IL_0dbf:            goto IL_0e75;                                               //br				IL_0e75
	IL_0dc4:                                                                        //ldc.i4				0x31
	IL_0dc9:            V_6=49;                                                     //stloc				V_6
	IL_0dcd:            /*goto IL_0019;*/goto IL_0dd2;                              //br				IL_0019
	IL_0dd2:                                                                        //ldarg.1
	IL_0dd3:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0dd8:                                                                        //ldloc				V_7
	IL_0ddc:            Temp_75=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0de1:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_0de6:                                                                        //ldloc				V_7
	IL_0dea:            Temp_76=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0def:            Temp_77=Root::T_x183::M_x1(A_1,Temp_75,Temp_76);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0df4:            if(Temp_77)goto IL_0e71;                                    //brtrue.s				IL_0e71
	IL_0df6:                                                                        //ldc.i4				0x69
	IL_0dfb:            V_6=105;                                                    //stloc				V_6
	IL_0dff:            /*goto IL_0019;*/goto IL_0e04;                              //br				IL_0019
	IL_0e04:            goto IL_0361;                                               //br				IL_0361
	IL_0e09:                                                                        //ldloc.1
	IL_0e0a:            Temp_111=V_1->Interfaces;                                   //callvirt				Reflector::CodeModel::ITypeReferenceCollection^ Reflector::CodeModel::ITypeDeclaration::get_Interfaces()
	IL_0e0f:            Temp_112=safe_cast<System::Collections::IEnumerable^>(Temp_111)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_0e14:            V_4=Temp_112;                                               //stloc.s				V_4
	IL_0e16:                                                                        //ldc.i4				0x24
	IL_0e1b:            V_6=36;                                                     //stloc				V_6
	IL_0e1f:            /*goto IL_0019;*/goto IL_0e24;                              //br				IL_0019
	IL_0e24:            /*goto IL_08fe;*/goto IL_08F901;                            //br				IL_08fe
	IL_0e29:                                                                        //ldc.i4				0x35
	IL_0e2e:            V_6=53;                                                     //stloc				V_6
	IL_0e32:            /*goto IL_0019;*/goto IL_0e37;                              //br				IL_0019
	IL_0e37:                                                                        //ldarg.1
	IL_0e38:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0e3d:                                                                        //ldloc				V_7
	IL_0e41:            Temp_81=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e46:                                                                        //ldstr				L"\x632F\x7031\x4D33\x4235\x5D37"
	IL_0e4b:                                                                        //ldloc				V_7
	IL_0e4f:            Temp_82=a(L"\x632F\x7031\x4D33\x4235\x5D37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e54:            Temp_83=Root::T_x183::M_x1(A_1,Temp_81,Temp_82);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0e59:            if(Temp_83)goto IL_08b2;                                    //brtrue				IL_08b2
	IL_0e5e:                                                                        //ldc.i4				0x6b
	IL_0e63:            V_6=107;                                                    //stloc				V_6
	IL_0e67:            /*goto IL_0019;*/goto IL_0e6c;                              //br				IL_0019
	IL_0e6c:            goto IL_0c14;                                               //br				IL_0c14
	IL_0e71:                                                                        //ldc.i4.1
	IL_0e72:            return true;                                                //ret
	IL_0e73:                                                                        //ldc.i4.1
	IL_0e74:            return true;                                                //ret
	IL_0e75:                                                                        //ldc.i4				0x45
	IL_0e7a:            V_6=69;                                                     //stloc				V_6
	IL_0e7e:            /*goto IL_0019;*/goto IL_0e83;                              //br				IL_0019
	IL_0e83:                                                                        //ldarg.1
	IL_0e84:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0e89:                                                                        //ldloc				V_7
	IL_0e8d:            Temp_102=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0e92:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_0e97:                                                                        //ldloc				V_7
	IL_0e9b:            Temp_103=a(L"\x722F\x4B31\x4033\x5335",V_7);                //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ea0:            Temp_104=Root::T_x183::M_x1(A_1,Temp_102,Temp_103);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0ea5:            if(!Temp_104)goto IL_0825;                                  //brfalse				IL_0825
	IL_0eaa:                                                                        //ldc.i4				0x3c
	IL_0eaf:            V_6=60;                                                     //stloc				V_6
	IL_0eb3:            /*goto IL_0019;*/goto IL_0eb8;                              //br				IL_0019
	IL_0eb8:            goto IL_0e73;                                               //br.s				IL_0e73
	IL_0eba:                                                                        //ldc.i4				0x21
	IL_0ebf:            V_6=33;                                                     //stloc				V_6
	IL_0ec3:            /*goto IL_0019;*/goto IL_0ec8;                              //br				IL_0019
	IL_0ec8:                                                                        //ldarg.1
	IL_0ec9:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0ece:                                                                        //ldloc				V_7
	IL_0ed2:            Temp_48=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ed7:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0535\x0A37"
	IL_0edc:                                                                        //ldloc				V_7
	IL_0ee0:            Temp_49=a(L"\x792F\x5C31\x4033\x0535\x0A37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ee5:            Temp_50=Root::T_x183::M_x1(A_1,Temp_48,Temp_49);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0eea:            if(Temp_50)goto IL_10b2;                                    //brtrue				IL_10b2
	IL_0eef:                                                                        //ldc.i4				0x48
	IL_0ef4:            V_6=72;                                                     //stloc				V_6
	IL_0ef8:            /*goto IL_0019;*/goto IL_0efd;                              //br				IL_0019
	IL_0efd:            goto IL_07af;                                               //br				IL_07af
	IL_0f02:                                                                        //ldc.i4				0x0
	IL_0f07:            V_6=0;                                                      //stloc				V_6
	IL_0f0b:            /*goto IL_0019;*/goto IL_0f10;                              //br				IL_0019
	IL_0f10:                                                                        //ldarg.1
	IL_0f11:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0f16:                                                                        //ldloc				V_7
	IL_0f1a:            Temp_0=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f1f:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0735\x0E37"
	IL_0f24:                                                                        //ldloc				V_7
	IL_0f28:            Temp_1=a(L"\x792F\x5C31\x4033\x0735\x0E37",V_7);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f2d:            Temp_2=Root::T_x183::M_x1(A_1,Temp_0,Temp_1);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0f32:            if(Temp_2)goto IL_01f7;                                     //brtrue				IL_01f7
	IL_0f37:                                                                        //ldc.i4				0x1f
	IL_0f3c:            V_6=31;                                                     //stloc				V_6
	IL_0f40:            /*goto IL_0019;*/goto IL_0f45;                              //br				IL_0019
	IL_0f45:            goto IL_0600;                                               //br				IL_0600
	IL_0f4a:                                                                        //ldc.i4				0x52
	IL_0f4f:            V_6=82;                                                     //stloc				V_6
	IL_0f53:            /*goto IL_0019;*/goto IL_0f58;                              //br				IL_0019
	IL_0f58:                                                                        //ldarg.0
	IL_0f59:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0f5e:                                                                        //ldloc				V_7
	IL_0f62:            Temp_116=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f67:                                                                        //ldstr				L"\x7F2F\x5031\x5E33\x5335\x5B37\x4E39"
	IL_0f6c:                                                                        //ldloc				V_7
	IL_0f70:            Temp_117=a(L"\x7F2F\x5031\x5E33\x5335\x5B37\x4E39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0f75:            Temp_118=Root::T_x183::M_x1(A_0,Temp_116,Temp_117);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0f7a:            if(!Temp_118)goto IL_1177;                                  //brfalse				IL_1177
	IL_0f7f:                                                                        //ldc.i4				0xd
	IL_0f84:            V_6=13;                                                     //stloc				V_6
	IL_0f88:            /*goto IL_0019;*/goto IL_0f8d;                              //br				IL_0019
	IL_0f8d:            goto IL_03f3;                                               //br				IL_03f3
	IL_0f92:                                                                        //ldc.i4				0x3a
	IL_0f97:            V_6=58;                                                     //stloc				V_6
	IL_0f9b:            /*goto IL_0019;*/goto IL_0fa0;                              //br				IL_0019
	IL_0fa0:                                                                        //ldarg.1
	IL_0fa1:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0fa6:                                                                        //ldloc				V_7
	IL_0faa:            Temp_93=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0faf:                                                                        //ldstr				L"\x632F\x7031\x4D33\x4235\x5D37"
	IL_0fb4:                                                                        //ldloc				V_7
	IL_0fb8:            Temp_94=a(L"\x632F\x7031\x4D33\x4235\x5D37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0fbd:            Temp_95=Root::T_x183::M_x1(A_1,Temp_93,Temp_94);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0fc2:            if(!Temp_95)goto IL_01f9;                                   //brfalse				IL_01f9
	IL_0fc7:                                                                        //ldc.i4				0x41
	IL_0fcc:            V_6=65;                                                     //stloc				V_6
	IL_0fd0:            /*goto IL_0019;*/goto IL_0fd5;                              //br				IL_0019
	IL_0fd5:            goto IL_10b2;                                               //br				IL_10b2
	IL_0fda:                                                                        //ldc.i4				0x2c
	IL_0fdf:            V_6=44;                                                     //stloc				V_6
	IL_0fe3:            /*goto IL_0019;*/goto IL_0fe8;                              //br				IL_0019
	IL_0fe8:                                                                        //ldarg.1
	IL_0fe9:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_0fee:                                                                        //ldloc				V_7
	IL_0ff2:            Temp_66=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0ff7:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0B37\x0839"
	IL_0ffc:                                                                        //ldloc				V_7
	IL_1000:            Temp_67=a(L"\x652F\x7B31\x5A33\x4235\x0B37\x0839",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1005:            Temp_68=Root::T_x183::M_x1(A_1,Temp_66,Temp_67);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_100a:            if(Temp_68)goto IL_0e73;                                    //brtrue				IL_0e73
	IL_100f:                                                                        //ldc.i4				0x61
	IL_1014:            V_6=97;                                                     //stloc				V_6
	IL_1018:            /*goto IL_0019;*/goto IL_101d;                              //br				IL_0019
	IL_101d:            goto IL_0d7c;                                               //br				IL_0d7c
	IL_1022:                                                                        //ldc.i4				0x37
	IL_1027:            V_6=55;                                                     //stloc				V_6
	IL_102b:            /*goto IL_0019;*/goto IL_1030;                              //br				IL_0019
	IL_1030:                                                                        //ldarg.1
	IL_1031:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_1036:                                                                        //ldloc				V_7
	IL_103a:            Temp_87=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_103f:                                                                        //ldstr				L"\x722F\x4B31\x4033\x5335"
	IL_1044:                                                                        //ldloc				V_7
	IL_1048:            Temp_88=a(L"\x722F\x4B31\x4033\x5335",V_7);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_104d:            Temp_89=Root::T_x183::M_x1(A_1,Temp_87,Temp_88);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1052:            if(Temp_89)goto IL_01f7;                                    //brtrue				IL_01f7
	IL_1057:                                                                        //ldc.i4				0x17
	IL_105c:            V_6=23;                                                     //stloc				V_6
	IL_1060:            /*goto IL_0019;*/goto IL_1065;                              //br				IL_0019
	IL_1065:            goto IL_02d1;                                               //br				IL_02d1
	IL_106a:                                                                        //ldc.i4				0x56
	IL_106f:            V_6=86;                                                     //stloc				V_6
	IL_1073:            /*goto IL_0019;*/goto IL_1078;                              //br				IL_0019
	IL_1078:                                                                        //ldarg.1
	IL_1079:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_107e:                                                                        //ldloc				V_7
	IL_1082:            Temp_128=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1087:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_108c:                                                                        //ldloc				V_7
	IL_1090:            Temp_129=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1095:            Temp_130=Root::T_x183::M_x1(A_1,Temp_128,Temp_129);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_109a:            if(Temp_130)goto IL_03f1;                                   //brtrue				IL_03f1
	IL_109f:                                                                        //ldc.i4				0x5c
	IL_10a4:            V_6=92;                                                     //stloc				V_6
	IL_10a8:            /*goto IL_0019;*/goto IL_10ad;                              //br				IL_0019
	IL_10ad:            goto IL_0bcf;                                               //br				IL_0bcf
	IL_10b2:                                                                        //ldc.i4.1
	IL_10b3:            return true;                                                //ret
	IL_10b4:                                                                        //ldc.i4.1
	IL_10b5:            return true;                                                //ret
	IL_10b6:                                                                        //ldloc.0
	IL_10b7:            Temp_105=V_0->Resolve();                                    //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_10bc:            V_1=Temp_105;                                               //stloc.1
	IL_10bd:                                                                        //ldc.i4				0x6a
	IL_10c2:            V_6=106;                                                    //stloc				V_6
	IL_10c6:            /*goto IL_0019;*/goto IL_10cb;                              //br				IL_0019
	IL_10cb:                                                                        //ldloc.1
	IL_10cc:            if(V_1!=nullptr)goto IL_0b0b;                               //brtrue				IL_0b0b
	IL_10d1:                                                                        //ldc.i4				0x4b
	IL_10d6:            V_6=75;                                                     //stloc				V_6
	IL_10da:            /*goto IL_0019;*/goto IL_10df;                              //br				IL_0019
	IL_10df:            goto IL_10e3;                                               //br.s				IL_10e3
	IL_10e1:                                                                        //ldc.i4.1
	IL_10e2:            return true;                                                //ret
	IL_10e3:                                                                        //ldc.i4.1
	IL_10e4:            return true;                                                //ret
	IL_10e5:                                                                        //ldc.i4				0x27
	IL_10ea:            V_6=39;                                                     //stloc				V_6
	IL_10ee:            /*goto IL_0019;*/goto IL_10f3;                              //br				IL_0019
	IL_10f3:                                                                        //ldarg.1
	IL_10f4:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_10f9:                                                                        //ldloc				V_7
	IL_10fd:            Temp_60=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1102:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0535\x0A37"
	IL_1107:                                                                        //ldloc				V_7
	IL_110b:            Temp_61=a(L"\x792F\x5C31\x4033\x0535\x0A37",V_7);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1110:            Temp_62=Root::T_x183::M_x1(A_1,Temp_60,Temp_61);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_1115:            if(Temp_62)goto IL_08b4;                                    //brtrue				IL_08b4
	IL_111a:                                                                        //ldc.i4				0x47
	IL_111f:            V_6=71;                                                     //stloc				V_6
	IL_1123:            /*goto IL_0019;*/goto IL_1128;                              //br				IL_0019
	IL_1128:            goto IL_05b8;                                               //br				IL_05b8
	IL_112d:                                                                        //ldc.i4				0x53
	IL_1132:            V_6=83;                                                     //stloc				V_6
	IL_1136:            /*goto IL_0019;*/goto IL_113b;                              //br				IL_0019
	IL_113b:                                                                        //ldarg.0
	IL_113c:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_1141:                                                                        //ldloc				V_7
	IL_1145:            Temp_119=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_114a:                                                                        //ldstr				L"\x652F\x7B31\x5A33\x4235\x0937\x0C39"
	IL_114f:                                                                        //ldloc				V_7
	IL_1153:            Temp_120=a(L"\x652F\x7B31\x5A33\x4235\x0937\x0C39",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1158:            Temp_121=Root::T_x183::M_x1(A_0,Temp_119,Temp_120);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_115d:            if(!Temp_121)goto IL_0289;                                  //brfalse				IL_0289
	IL_1162:                                                                        //ldc.i4				0x5d
	IL_1167:            V_6=93;                                                     //stloc				V_6
	IL_116b:            /*goto IL_0019;*/goto IL_1170;                              //br				IL_0019
	IL_1170:            goto IL_0528;                                               //br				IL_0528
	IL_1175:                                                                        //ldc.i4.1
	IL_1176:            return true;                                                //ret
	IL_1177:                                                                        //ldc.i4.0
	IL_1178:            return false;                                               //ret
	IL_1179:                                                                        //ldc.i4				0x57
	IL_117e:            V_6=87;                                                     //stloc				V_6
	IL_1182:            /*goto IL_0019;*/goto IL_1187;                              //br				IL_0019
	IL_1187:                                                                        //ldarg.0
	IL_1188:                                                                        //ldstr				L"\x632F\x4B31\x4733\x4235\x5D37\x5739"
	IL_118d:                                                                        //ldloc				V_7
	IL_1191:            Temp_131=a(L"\x632F\x4B31\x4733\x4235\x5D37\x5739",V_7);    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_1196:                                                                        //ldstr				L"\x792F\x5C31\x4033\x0735\x0E37"
	IL_119b:                                                                        //ldloc				V_7
	IL_119f:            Temp_132=a(L"\x792F\x5C31\x4033\x0735\x0E37",V_7);          //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_11a4:            Temp_133=Root::T_x183::M_x1(A_0,Temp_131,Temp_132);         //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_11a9:            if(!Temp_133)goto IL_112d;                                  //brfalse.s				IL_112d
	IL_11ab:                                                                        //ldc.i4				0x51
	IL_11b0:            V_6=81;                                                     //stloc				V_6
	IL_11b4:            /*goto IL_0019;*/goto IL_11b9;                              //br				IL_0019
	IL_11b9:            goto IL_0e29;                                               //br				IL_0e29
	IL_11be:                                                                        //ldloc.3
	IL_11bf:            return V_3;                                                 //ret

}
inline System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::IType^ Temp_6 = nullptr;
	System::Boolean Temp_7 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_1 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_002b;                                               //br.s				IL_002b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_007b;case 1:goto IL_00c2;case 2:goto IL_006d;case 3:goto IL_00a6;case 4:goto IL_00d9;case 5:goto IL_00f5;case 6:goto IL_004b;case 7:goto IL_003d;};//switch				(IL_007b,IL_00c2,IL_006d,IL_00a6,IL_00d9,IL_00f5,IL_004b,IL_003d)
	IL_002b:                                                                        //ldarg.0
	IL_002c:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0031:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0032:                                                                        //ldc.i4				0x7
	IL_0037:            V_3=7;                                                      //stloc				V_3
	IL_003b:            /*goto IL_0002;*/goto IL_003d;                              //br.s				IL_0002
	IL_003d:                                                                        //ldloc.0
	IL_003e:            if(V_0==nullptr)goto IL_005b;                               //brfalse.s				IL_005b
	IL_0040:                                                                        //ldc.i4				0x6
	IL_0045:            V_3=6;                                                      //stloc				V_3
	IL_0049:            /*goto IL_0002;*/goto IL_004b;                              //br.s				IL_0002
	IL_004b:            goto IL_0098;                                               //br.s				IL_0098
	IL_004d:                                                                        //ldloc.1
	IL_004e:            Temp_0=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0053:                                                                        //ldarg.1
	IL_0054:                                                                        //ldarg.2
	IL_0055:            Temp_1=Root::T_x183::M_x1(Temp_0,A_1,A_2);                  //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_005a:            return Temp_1;                                              //ret
	IL_005b:                                                                        //ldarg.0
	IL_005c:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_0061:            V_1=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.1
	IL_0062:                                                                        //ldc.i4				0x2
	IL_0067:            V_3=2;                                                      //stloc				V_3
	IL_006b:            /*goto IL_0002;*/goto IL_006d;                              //br.s				IL_0002
	IL_006d:                                                                        //ldloc.1
	IL_006e:            if(V_1==nullptr)goto IL_00c4;                               //brfalse.s				IL_00c4
	IL_0070:                                                                        //ldc.i4				0x0
	IL_0075:            V_3=0;                                                      //stloc				V_3
	IL_0079:            /*goto IL_0002;*/goto IL_007b;                              //br.s				IL_0002
	IL_007b:            goto IL_004d;                                               //br.s				IL_004d
	IL_007d:                                                                        //ldloc.0
	IL_007e:            Temp_2=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0083:                                                                        //ldarg.1
	IL_0084:            Temp_3=(Temp_2 == A_1);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0089:            return Temp_3;                                              //ret
	IL_008a:                                                                        //ldloc.2
	IL_008b:            Temp_6=V_2->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_0090:                                                                        //ldarg.1
	IL_0091:                                                                        //ldarg.2
	IL_0092:            Temp_7=Root::T_x183::M_x1(Temp_6,A_1,A_2);                  //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0097:            return Temp_7;                                              //ret
	IL_0098:                                                                        //ldc.i4				0x3
	IL_009d:            V_3=3;                                                      //stloc				V_3
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:                                                                        //ldloc.0
	IL_00a7:            Temp_4=V_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_00ac:                                                                        //ldarg.2
	IL_00ad:            Temp_5=(Temp_4 == A_2);                                     //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b2:            if(!Temp_5)goto IL_00f7;                                    //brfalse.s				IL_00f7
	IL_00b4:                                                                        //ldc.i4				0x1
	IL_00b9:            V_3=1;                                                      //stloc				V_3
	IL_00bd:            /*goto IL_0002;*/goto IL_00c2;                              //br				IL_0002
	IL_00c2:            goto IL_007d;                                               //br.s				IL_007d
	IL_00c4:                                                                        //ldarg.0
	IL_00c5:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_00ca:            V_2=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.2
	IL_00cb:                                                                        //ldc.i4				0x4
	IL_00d0:            V_3=4;                                                      //stloc				V_3
	IL_00d4:            /*goto IL_0002;*/goto IL_00d9;                              //br				IL_0002
	IL_00d9:                                                                        //ldc.i4.4
	IL_00da:                                                                        //dup
	IL_00db:                                                                        //dup
	IL_00dc:                                                                        //ldc.i4.2
	IL_00dd:                                                                        //sub
	IL_00de:                                                                        //blt				IL_00da
	IL_00e3:                                                                        //pop
	IL_00e4:                                                                        //ldloc.2
	IL_00e5:            if(V_2==nullptr)goto IL_00f9;                               //brfalse.s				IL_00f9
	IL_00e7:                                                                        //ldc.i4				0x5
	IL_00ec:            V_3=5;                                                      //stloc				V_3
	IL_00f0:            /*goto IL_0002;*/goto IL_00f5;                              //br				IL_0002
	IL_00f5:            goto IL_008a;                                               //br.s				IL_008a
	IL_00f7:                                                                        //ldc.i4.0
	IL_00f8:            return false;                                               //ret
	IL_00f9:                                                                        //ldc.i4.0
	IL_00fa:            return false;                                               //ret

}
inline Reflector::CodeModel::ITypeReference^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::String^ A_1,System::String^ A_2)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::Object^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	Reflector::CodeModel::Memory::TypeReference^ Temp_9 = nullptr;
	Reflector::CodeModel::IAssemblyReferenceCollection^ Temp_10 = nullptr;
	System::Collections::IEnumerator^ Temp_11 = nullptr;
	System::Object^ Temp_12 = nullptr;
	Reflector::CodeModel::IAssembly^ Temp_13 = nullptr;
	//local variables.
	System::Object^ V_0 = nullptr;
	Reflector::CodeModel::ITypeDeclaration^ V_1 = nullptr;
	Reflector::CodeModel::IModule^ V_2 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_3 = nullptr;
	Reflector::CodeModel::IAssemblyReference^ V_4 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_5 = nullptr;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	System::Int32 V_9 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_9=14;                                                     //stloc				V_9
	IL_0009:            goto IL_0038;                                               //br.s				IL_0038
	IL_000b:                                                                        //ldloc				V_8
	IL_000f:            switch(V_8){case 0:goto IL_017e;case 1:goto IL_01a7;case 2:goto IL_01ea;case 3:goto IL_0201;case 4:goto IL_022a;case 5:goto IL_0191;case 6:goto IL_0244;case 7:goto IL_004a;case 8:goto IL_0258;};//switch				(IL_017e,IL_01a7,IL_01ea,IL_0201,IL_022a,IL_0191,IL_0244,IL_004a,IL_0258)
	IL_0038:                                                                        //ldarg.0
	IL_0039:            Temp_0=safe_cast<Reflector::CodeModel::ITypeReference^>(A_0)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_003e:            V_0=Temp_0;                                                 //stloc.0
	IL_003f:                                                                        //ldc.i4				0x7
	IL_0044:            V_8=7;                                                      //stloc				V_8
	IL_0048:            /*goto IL_000b;*/goto IL_004a;                              //br.s				IL_000b
	IL_004a:            goto IL_0183;                                               //br				IL_0183
	IL_004A01:          try{
	IL_004f:                                                                        //ldc.i4				0x2
	IL_0054:            V_8=2;                                                      //stloc				V_8
	IL_0058:            /*goto IL_005c;*/goto IL_005a;                              //br.s				IL_005c
	IL_005a:            goto IL_0081;                                               //br.s				IL_0081
	IL_005c:                                                                        //ldloc				V_8
	IL_0060:            switch(V_8){case 0:goto IL_00e7;case 1:goto IL_00d0;case 2:goto IL_005a;case 3:goto IL_009c;case 4:goto IL_00c3;case 5:goto IL_00fa;case 6:goto IL_010a;};//switch				(IL_00e7,IL_00d0,IL_005a,IL_009c,IL_00c3,IL_00fa,IL_010a)
	IL_0081:            goto IL_00c5;                                               //br.s				IL_00c5
	IL_0083:                                                                        //ldloc.s				V_6
	IL_0085:            Temp_2=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_008a:                                                                        //castclass				Reflector::CodeModel::IAssemblyReference
	IL_008f:            V_4=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_2);//stloc.s				V_4
	IL_0091:                                                                        //ldc.i4				0x3
	IL_0096:            V_8=3;                                                      //stloc				V_8
	IL_009a:            /*goto IL_005c;*/goto IL_009c;                              //br.s				IL_005c
	IL_009c:                                                                        //ldloc.s				V_4
	IL_009e:            Temp_3=V_4->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_00a3:                                                                        //ldstr				L"\x412B\x5D2D\x532F\x5D31\x4633\x5A35\x5137\x5839"
	IL_00a8:                                                                        //ldloc				V_9
	IL_00ac:            Temp_4=a(L"\x412B\x5D2D\x532F\x5D31\x4633\x5A35\x5137\x5839",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b1:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00b6:            if(!Temp_5)goto IL_00c5;                                    //brfalse.s				IL_00c5
	IL_00b8:                                                                        //ldc.i4				0x4
	IL_00bd:            V_8=4;                                                      //stloc				V_8
	IL_00c1:            /*goto IL_005c;*/goto IL_00c3;                              //br.s				IL_005c
	IL_00c3:            goto IL_00e9;                                               //br.s				IL_00e9
	IL_00c5:                                                                        //ldc.i4				0x1
	IL_00ca:            V_8=1;                                                      //stloc				V_8
	IL_00ce:            /*goto IL_005c;*/goto IL_00d0;                              //br.s				IL_005c
	IL_00d0:                                                                        //ldloc.s				V_6
	IL_00d2:            Temp_1=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_00d7:            if(Temp_1)goto IL_0083;                                     //brtrue.s				IL_0083
	IL_00d9:                                                                        //ldc.i4				0x0
	IL_00de:            V_8=0;                                                      //stloc				V_8
	IL_00e2:            /*goto IL_005c;*/goto IL_00e7;                              //br				IL_005c
	IL_00e7:            goto IL_00fc;                                               //br.s				IL_00fc
	IL_00e9:                                                                        //ldloc.s				V_4
	IL_00eb:            V_3=V_4;                                                    //stloc.3
	IL_00ec:                                                                        //ldc.i4				0x5
	IL_00f1:            V_8=5;                                                      //stloc				V_8
	IL_00f5:            /*goto IL_005c;*/goto IL_00fa;                              //br				IL_005c
	IL_00fa:            goto IL_00fc;                                               //br.s				IL_00fc
	IL_00fc:                                                                        //ldc.i4				0x6
	IL_0101:            V_8=6;                                                      //stloc				V_8
	IL_0105:            /*goto IL_005c;*/goto IL_010a;                              //br				IL_005c
	IL_010a:            goto IL_01ac;                                               //leave				IL_01ac
	                    ;}
	                    finally{
	IL_010f:            goto IL_0126;                                               //br.s				IL_0126
	IL_0111:                                                                        //ldloc				V_8
	IL_0115:            switch(V_8){case 0:goto IL_013a;case 1:goto IL_0149;case 2:goto IL_015d;};//switch				(IL_013a,IL_0149,IL_015d)
	IL_0126:                                                                        //ldloc.s				V_6
	IL_0128:                                                                        //isinst				System::IDisposable
	IL_012d:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_012f:                                                                        //ldc.i4				0x0
	IL_0134:            V_8=0;                                                      //stloc				V_8
	IL_0138:            /*goto IL_0111;*/goto IL_013a;                              //br.s				IL_0111
	IL_013a:                                                                        //ldloc.s				V_7
	IL_013c:            if(V_7==nullptr)goto IL_015f;                               //brfalse.s				IL_015f
	IL_013e:                                                                        //ldc.i4				0x1
	IL_0143:            V_8=1;                                                      //stloc				V_8
	IL_0147:            /*goto IL_0111;*/goto IL_0149;                              //br.s				IL_0111
	IL_0149:            goto IL_014b;                                               //br.s				IL_014b
	IL_014b:                                                                        //ldloc.s				V_7
	IL_014d:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0152:                                                                        //ldc.i4				0x2
	IL_0157:            V_8=2;                                                      //stloc				V_8
	IL_015b:            /*goto IL_0111;*/goto IL_015d;                              //br.s				IL_0111
	IL_015d:            goto IL_015f;                                               //br.s				IL_015f
	IL_015f:                                                                        //endfinally
	                    ;}
	IL_0160:            goto IL_0163;                                               //br.s				IL_0163
	IL_0162:                                                                        //break
	IL_0163:                                                                        //ldloc.2
	IL_0164:            Temp_10=V_2->AssemblyReferences;                            //callvirt				Reflector::CodeModel::IAssemblyReferenceCollection^ Reflector::CodeModel::IModule::get_AssemblyReferences()
	IL_0169:            Temp_11=safe_cast<System::Collections::IEnumerable^>(Temp_10)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_016e:            V_6=Temp_11;                                                //stloc.s				V_6
	IL_0170:                                                                        //ldc.i4				0x0
	IL_0175:            V_8=0;                                                      //stloc				V_8
	IL_0179:            /*goto IL_000b;*/goto IL_017e;                              //br				IL_000b
	IL_017e:            /*goto IL_004f;*/goto IL_004A01;                            //br				IL_004f
	IL_0183:                                                                        //ldc.i4				0x5
	IL_0188:            V_8=5;                                                      //stloc				V_8
	IL_018c:            /*goto IL_000b;*/goto IL_0191;                              //br				IL_000b
	IL_0191:                                                                        //ldloc.0
	IL_0192:                                                                        //isinst				Reflector::CodeModel::ITypeDeclaration
	IL_0197:            if(dynamic_cast<Reflector::CodeModel::ITypeDeclaration^>(V_0)!=nullptr)goto IL_01ce;//brtrue.s				IL_01ce
	IL_0199:                                                                        //ldc.i4				0x1
	IL_019e:            V_8=1;                                                      //stloc				V_8
	IL_01a2:            /*goto IL_000b;*/goto IL_01a7;                              //br				IL_000b
	IL_01a7:            goto IL_022f;                                               //br				IL_022f
	IL_01ac:            Temp_9=gcnew Reflector::CodeModel::Memory::TypeReference(); //newobj				void Reflector::CodeModel::Memory::TypeReference::.ctor()
	IL_01b1:            V_5=safe_cast<Reflector::CodeModel::ITypeReference^>(Temp_9);//stloc.s				V_5
	IL_01b3:                                                                        //ldloc.s				V_5
	IL_01b5:                                                                        //ldloc.3
	IL_01b6:            V_5->Owner=safe_cast<System::Object^>(V_3);                 //callvirt				void Reflector::CodeModel::ITypeReference::set_Owner(System::Object^)
	IL_01bb:                                                                        //ldloc.s				V_5
	IL_01bd:                                                                        //ldarg.1
	IL_01be:            V_5->Namespace=A_1;                                         //callvirt				void Reflector::CodeModel::ITypeReference::set_Namespace(System::String^)
	IL_01c3:                                                                        //ldloc.s				V_5
	IL_01c5:                                                                        //ldarg.2
	IL_01c6:            V_5->Name=A_2;                                              //callvirt				void Reflector::CodeModel::ITypeReference::set_Name(System::String^)
	IL_01cb:                                                                        //ldloc.s				V_5
	IL_01cd:            return V_5;                                                 //ret
	IL_01ce:                                                                        //ldloc.0
	IL_01cf:                                                                        //castclass				Reflector::CodeModel::ITypeDeclaration
	IL_01d4:            V_1=safe_cast<Reflector::CodeModel::ITypeDeclaration^>(V_0);//stloc.1
	IL_01d5:                                                                        //ldloc.1
	IL_01d6:            Temp_12=safe_cast<Reflector::CodeModel::ITypeReference^>(V_1)->Owner;//callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_01db:            V_0=Temp_12;                                                //stloc.0
	IL_01dc:                                                                        //ldc.i4				0x2
	IL_01e1:            V_8=2;                                                      //stloc				V_8
	IL_01e5:            /*goto IL_000b;*/goto IL_01ea;                              //br				IL_000b
	IL_01ea:            goto IL_0183;                                               //br.s				IL_0183
	IL_01ec:                                                                        //ldloc.2
	IL_01ed:            Temp_13=V_2->Assembly;                                      //callvirt				Reflector::CodeModel::IAssembly^ Reflector::CodeModel::IModule::get_Assembly()
	IL_01f2:            V_3=safe_cast<Reflector::CodeModel::IAssemblyReference^>(Temp_13);//stloc.3
	IL_01f3:                                                                        //ldc.i4				0x3
	IL_01f8:            V_8=3;                                                      //stloc				V_8
	IL_01fc:            /*goto IL_000b;*/goto IL_0201;                              //br				IL_000b
	IL_0201:                                                                        //ldloc.3
	IL_0202:            Temp_6=V_3->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IAssemblyReference::get_Name()
	IL_0207:                                                                        //ldstr				L"\x412B\x5D2D\x532F\x5D31\x4633\x5A35\x5137\x5839"
	IL_020c:                                                                        //ldloc				V_9
	IL_0210:            Temp_7=a(L"\x412B\x5D2D\x532F\x5D31\x4633\x5A35\x5137\x5839",V_9);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0215:            Temp_8=(Temp_6 != Temp_7);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_021a:            if(!Temp_8)goto IL_01ac;                                    //brfalse.s				IL_01ac
	IL_021c:                                                                        //ldc.i4				0x4
	IL_0221:            V_8=4;                                                      //stloc				V_8
	IL_0225:            /*goto IL_000b;*/goto IL_022a;                              //br				IL_000b
	IL_022a:            goto IL_0160;                                               //br				IL_0160
	IL_022f:                                                                        //ldloc.0
	IL_0230:                                                                        //isinst				Reflector::CodeModel::IModule
	IL_0235:            V_2=dynamic_cast<Reflector::CodeModel::IModule^>(V_0);      //stloc.2
	IL_0236:                                                                        //ldc.i4				0x6
	IL_023b:            V_8=6;                                                      //stloc				V_8
	IL_023f:            /*goto IL_000b;*/goto IL_0244;                              //br				IL_000b
	IL_0244:                                                                        //ldloc.2
	IL_0245:            if(V_2==nullptr)goto IL_025a;                               //brfalse				IL_025a
	IL_024a:                                                                        //ldc.i4				0x8
	IL_024f:            V_8=8;                                                      //stloc				V_8
	IL_0253:            /*goto IL_000b;*/goto IL_0258;                              //br				IL_000b
	IL_0258:            goto IL_01ec;                                               //br.s				IL_01ec
	IL_025a:                                                                        //ldnull
	IL_025b:            return nullptr;                                             //ret

}
inline System::String^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::Object^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	System::String^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x1
	IL_0005:            V_3=1;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4.1
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.4
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_0082;case 1:goto IL_0046;case 2:goto IL_006f;case 3:goto IL_0054;};//switch				(IL_0082,IL_0046,IL_006f,IL_0054)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_0=A_0->Owner;                                          //callvirt				System::Object^ Reflector::CodeModel::ITypeReference::get_Owner()
	IL_0035:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_003a:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(Temp_0);//stloc.0
	IL_003b:                                                                        //ldc.i4				0x1
	IL_0040:            V_2=1;                                                      //stloc				V_2
	IL_0044:            /*goto IL_0016;*/goto IL_0046;                              //br.s				IL_0016
	IL_0046:                                                                        //ldloc.0
	IL_0047:            if(V_0==nullptr)goto IL_005d;                               //brfalse.s				IL_005d
	IL_0049:                                                                        //ldc.i4				0x3
	IL_004e:            V_2=3;                                                      //stloc				V_2
	IL_0052:            /*goto IL_0016;*/goto IL_0054;                              //br.s				IL_0016
	IL_0054:            goto IL_0084;                                               //br.s				IL_0084
	IL_0056:                                                                        //ldarg.0
	IL_0057:            Temp_1=Root::T_x183::M_x2(A_0);                             //call				System::String^ Root::T_x183::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_005c:            return Temp_1;                                              //ret
	IL_005d:                                                                        //ldarg.0
	IL_005e:            Temp_2=A_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0063:            V_1=Temp_2;                                                 //stloc.1
	IL_0064:                                                                        //ldc.i4				0x2
	IL_0069:            V_2=2;                                                      //stloc				V_2
	IL_006d:            /*goto IL_0016;*/goto IL_006f;                              //br.s				IL_0016
	IL_006f:                                                                        //ldloc.1
	IL_0070:            Temp_3=V_1->Length;                                         //callvirt				System::Int32 System::String::get_Length()
	IL_0075:            if(Temp_3!=0)goto IL_00a4;                                  //brtrue.s				IL_00a4
	IL_0077:                                                                        //ldc.i4				0x0
	IL_007c:            V_2=0;                                                      //stloc				V_2
	IL_0080:            /*goto IL_0016;*/goto IL_0082;                              //br.s				IL_0016
	IL_0082:            goto IL_0056;                                               //br.s				IL_0056
	IL_0084:                                                                        //ldloc.0
	IL_0085:            Temp_7=Root::T_x183::M_x1(V_0);                             //call				System::String^ Root::T_x183::M_x1(Reflector::CodeModel::ITypeReference^)
	IL_008a:                                                                        //ldstr				L"\x341E"
	IL_008f:                                                                        //ldloc				V_3
	IL_0093:            Temp_8=a(L"\x341E",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0098:                                                                        //ldarg.0
	IL_0099:            Temp_9=Root::T_x183::M_x2(A_0);                             //call				System::String^ Root::T_x183::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_009e:            Temp_10=System::String::Concat(Temp_7,Temp_8,Temp_9);       //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00a3:            return Temp_10;                                             //ret
	IL_00a4:                                                                        //ldloc.1
	IL_00a5:                                                                        //ldstr				L"\x311E"
	IL_00aa:                                                                        //ldloc				V_3
	IL_00ae:            Temp_4=a(L"\x311E",V_3);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00b3:                                                                        //ldarg.0
	IL_00b4:            Temp_5=Root::T_x183::M_x2(A_0);                             //call				System::String^ Root::T_x183::M_x2(Reflector::CodeModel::ITypeReference^)
	IL_00b9:            Temp_6=System::String::Concat(V_1,Temp_4,Temp_5);           //call				System::String^ System::String::Concat(System::String^,System::String^,System::String^)
	IL_00be:            return Temp_6;                                              //ret

}
inline Root::T_x183::T_x1 Root::T_x183::M_x1(System::Int32 A_0)
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
	IL_0000:                                                                        //ldc.i4				0xf
	IL_0005:            V_3=15;                                                     //stloc				V_3
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_2
	IL_000f:            switch(V_2){case 0:goto IL_0039;case 1:goto IL_044d;case 2:goto IL_0592;case 3:goto IL_0517;case 4:goto IL_06e9;case 5:goto IL_0653;};//switch				(IL_0039,IL_044d,IL_0592,IL_0517,IL_06e9,IL_0653)
	IL_002c:                                                                        //ldarg.0
	IL_002d:            V_0=A_0;                                                    //stloc.0
	IL_002e:                                                                        //ldc.i4				0x0
	IL_0033:            V_2=0;                                                      //stloc				V_2
	IL_0037:            /*goto IL_000b;*/goto IL_0039;                              //br.s				IL_000b
	IL_0039:                                                                        //ldloc.0
	IL_003a:            switch(V_0){case 0:goto IL_046d;case 1:goto IL_051c;case 2:goto IL_05f1;case 3:goto IL_04a0;case 4:goto IL_0636;case 5:goto IL_0491;case 6:goto IL_04eb;case 7:goto IL_06f2;case 8:goto IL_061a;case 9:goto IL_0552;case 10:goto IL_05bb;case 11:goto IL_0710;case 12:goto IL_056c;case 13:goto IL_0641;case 14:goto IL_05f6;case 15:goto IL_055f;case 16:goto IL_04aa;case 17:goto IL_071d;case 18:goto IL_056e;case 19:goto IL_05c2;case 20:goto IL_05db;case 21:goto IL_04e7;case 22:goto IL_05c7;case 23:goto IL_063d;case 24:goto IL_05b3;case 25:goto IL_0603;case 26:goto IL_0571;case 27:goto IL_04ed;case 28:goto IL_04e9;case 29:goto IL_045b;case 30:goto IL_05bd;case 31:goto IL_04c8;case 32:goto IL_04a6;case 33:goto IL_0529;case 34:goto IL_049d;case 35:goto IL_0472;case 36:goto IL_0643;case 37:goto IL_060d;case 38:goto IL_04ad;case 39:goto IL_05ed;case 40:goto IL_05d4;case 41:goto IL_04be;case 42:goto IL_06fb;case 43:goto IL_05bf;case 44:goto IL_046f;case 45:goto IL_060f;case 46:goto IL_0716;case 47:goto IL_0708;case 48:goto IL_0456;case 49:goto IL_063a;case 50:goto IL_0483;case 51:goto IL_04b2;case 52:goto IL_0474;case 53:goto IL_05b0;case 54:goto IL_04e4;case 55:goto IL_0463;case 56:goto IL_04a4;case 57:goto IL_048c;case 58:goto IL_057f;case 59:goto IL_048a;case 60:goto IL_05e9;case 61:goto IL_0614;case 62:goto IL_059c;case 63:goto IL_0554;case 64:goto IL_0720;case 65:goto IL_053d;case 66:goto IL_0488;case 67:goto IL_05ce;case 68:goto IL_0634;case 69:goto IL_0531;case 70:goto IL_0630;case 71:goto IL_0481;case 72:goto IL_05c5;case 73:goto IL_05a5;case 74:goto IL_0638;case 75:goto IL_0495;case 76:goto IL_06f6;case 77:goto IL_04c4;case 78:goto IL_04f7;case 79:goto IL_0525;case 80:goto IL_04ef;case 81:goto IL_0564;case 82:goto IL_0499;case 83:goto IL_053f;case 84:goto IL_0609;case 85:goto IL_059a;case 86:goto IL_04d2;case 87:goto IL_0714;case 88:goto IL_06ff;case 89:goto IL_0566;case 90:goto IL_047d;case 91:goto IL_047b;case 92:goto IL_06f0;case 93:goto IL_05a7;case 94:goto IL_0523;case 95:goto IL_04d0;case 96:goto IL_04d4;case 97:goto IL_04dc;case 98:goto IL_06fd;case 99:goto IL_061c;case 100:goto IL_055d;case 101:goto IL_0622;case 102:goto IL_046b;case 103:goto IL_0521;case 104:goto IL_0620;case 105:goto IL_04da;case 106:goto IL_05e3;case 107:goto IL_0493;case 108:goto IL_0527;case 109:goto IL_05d2;case 110:goto IL_056a;case 111:goto IL_0703;case 112:goto IL_0581;case 113:goto IL_05b5;case 114:goto IL_05fc;case 115:goto IL_05e7;case 116:goto IL_048e;case 117:goto IL_04f9;case 118:goto IL_0712;case 119:goto IL_0643;case 120:goto IL_0643;case 121:goto IL_0579;case 122:goto IL_0539;case 123:goto IL_055b;case 124:goto IL_071b;case 125:goto IL_04d6;case 126:goto IL_05ae;case 127:goto IL_04c6;case 128:goto IL_0616;case 129:goto IL_051e;case 130:goto IL_04e2;case 131:goto IL_05e1;case 132:goto IL_04ce;case 133:goto IL_0454;case 134:goto IL_063f;case 135:goto IL_05df;case 136:goto IL_04de;case 137:goto IL_0607;case 138:goto IL_0461;case 139:goto IL_05d0;case 140:goto IL_04c1;case 141:goto IL_04af;case 142:goto IL_054a;case 143:goto IL_070b;case 144:goto IL_0544;case 145:goto IL_052d;case 146:goto IL_052f;case 147:goto IL_062c;case 148:goto IL_04f5;case 149:goto IL_047f;case 150:goto IL_070e;case 151:goto IL_060b;case 152:goto IL_062a;case 153:goto IL_0573;case 154:goto IL_054c;case 155:goto IL_04f3;case 156:goto IL_0556;case 157:goto IL_04f1;case 158:goto IL_0548;case 159:goto IL_045d;case 160:goto IL_0577;case 161:goto IL_059e;case 162:goto IL_0452;case 163:goto IL_0536;case 164:goto IL_0541;case 165:goto IL_06f8;case 166:goto IL_0643;case 167:goto IL_0643;case 168:goto IL_0643;case 169:goto IL_0643;case 170:goto IL_0643;case 171:goto IL_0643;case 172:goto IL_0643;case 173:goto IL_0643;case 174:goto IL_0643;case 175:goto IL_0643;case 176:goto IL_0643;case 177:goto IL_0643;case 178:goto IL_0643;case 179:goto IL_054e;case 180:goto IL_0562;case 181:goto IL_0612;case 182:goto IL_0507;case 183:goto IL_06ee;case 184:goto IL_053b;case 185:goto IL_0497;case 186:goto IL_04b8;case 187:goto IL_0643;case 188:goto IL_0643;case 189:goto IL_0643;case 190:goto IL_0643;case 191:goto IL_0643;case 192:goto IL_0643;case 193:goto IL_0643;case 194:goto IL_04cb;case 195:goto IL_05e5;case 196:goto IL_0643;case 197:goto IL_0643;case 198:goto IL_05f9;case 199:goto IL_0643;case 200:goto IL_0643;case 201:goto IL_0643;case 202:goto IL_0643;case 203:goto IL_0643;case 204:goto IL_0643;case 205:goto IL_0643;case 206:goto IL_0643;case 207:goto IL_0643;case 208:goto IL_05c9;case 209:goto IL_05ac;case 210:goto IL_061e;case 211:goto IL_04a8;case 212:goto IL_04e0;case 213:goto IL_062e;case 214:goto IL_0632;case 215:goto IL_0479;case 216:goto IL_05ef;case 217:goto IL_052b;case 218:goto IL_0534;case 219:goto IL_0459;case 220:goto IL_05eb;case 221:goto IL_0486;case 222:goto IL_04b5;case 223:goto IL_0624;case 224:goto IL_04ba;case 225:goto IL_0643;case 226:goto IL_0643;case 227:goto IL_0643;case 228:goto IL_0643;case 229:goto IL_0643;case 230:goto IL_0643;case 231:goto IL_0643;case 232:goto IL_0643;case 233:goto IL_0643;case 234:goto IL_0643;case 235:goto IL_0643;case 236:goto IL_0643;case 237:goto IL_0643;case 238:goto IL_0643;case 239:goto IL_0643;case 240:goto IL_0643;case 241:goto IL_0643;case 242:goto IL_0643;case 243:goto IL_0643;case 244:goto IL_0643;case 245:goto IL_0643;case 246:goto IL_0643;case 247:goto IL_0643;case 248:goto IL_05dd;case 249:goto IL_0575;case 250:goto IL_05cc;case 251:goto IL_05ff;case 252:goto IL_049b;case 253:goto IL_0546;case 254:goto IL_04bc;case 255:goto IL_0466;};//switch				(IL_046d,IL_051c,IL_05f1,IL_04a0,IL_0636,IL_0491,IL_04eb,IL_06f2,IL_061a,IL_0552,IL_05bb,IL_0710,IL_056c,IL_0641,IL_05f6,IL_055f,IL_04aa,IL_071d,IL_056e,IL_05c2,IL_05db,IL_04e7,IL_05c7,IL_063d,IL_05b3,IL_0603,IL_0571,IL_04ed,IL_04e9,IL_045b,IL_05bd,IL_04c8,IL_04a6,IL_0529,IL_049d,IL_0472,IL_0643,IL_060d,IL_04ad,IL_05ed,IL_05d4,IL_04be,IL_06fb,IL_05bf,IL_046f,IL_060f,IL_0716,IL_0708,IL_0456,IL_063a,IL_0483,IL_04b2,IL_0474,IL_05b0,IL_04e4,IL_0463,IL_04a4,IL_048c,IL_057f,IL_048a,IL_05e9,IL_0614,IL_059c,IL_0554,IL_0720,IL_053d,IL_0488,IL_05ce,IL_0634,IL_0531,IL_0630,IL_0481,IL_05c5,IL_05a5,IL_0638,IL_0495,IL_06f6,IL_04c4,IL_04f7,IL_0525,IL_04ef,IL_0564,IL_0499,IL_053f,IL_0609,IL_059a,IL_04d2,IL_0714,IL_06ff,IL_0566,IL_047d,IL_047b,IL_06f0,IL_05a7,IL_0523,IL_04d0,IL_04d4,IL_04dc,IL_06fd,IL_061c,IL_055d,IL_0622,IL_046b,IL_0521,IL_0620,IL_04da,IL_05e3,IL_0493,IL_0527,IL_05d2,IL_056a,IL_0703,IL_0581,IL_05b5,IL_05fc,IL_05e7,IL_048e,IL_04f9,IL_0712,IL_0643,IL_0643,IL_0579,IL_0539,IL_055b,IL_071b,IL_04d6,IL_05ae,IL_04c6,IL_0616,IL_051e,IL_04e2,IL_05e1,IL_04ce,IL_0454,IL_063f,IL_05df,IL_04de,IL_0607,IL_0461,IL_05d0,IL_04c1,IL_04af,IL_054a,IL_070b,IL_0544,IL_052d,IL_052f,IL_062c,IL_04f5,IL_047f,IL_070e,IL_060b,IL_062a,IL_0573,IL_054c,IL_04f3,IL_0556,IL_04f1,IL_0548,IL_045d,IL_0577,IL_059e,IL_0452,IL_0536,IL_0541,IL_06f8,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_054e,IL_0562,IL_0612,IL_0507,IL_06ee,IL_053b,IL_0497,IL_04b8,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_04cb,IL_05e5,IL_0643,IL_0643,IL_05f9,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_05c9,IL_05ac,IL_061e,IL_04a8,IL_04e0,IL_062e,IL_0632,IL_0479,IL_05ef,IL_052b,IL_0534,IL_0459,IL_05eb,IL_0486,IL_04b5,IL_0624,IL_04ba,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_0643,IL_05dd,IL_0575,IL_05cc,IL_05ff,IL_049b,IL_0546,IL_04bc,IL_0466)
	IL_043f:                                                                        //ldc.i4				0x1
	IL_0444:            V_2=1;                                                      //stloc				V_2
	IL_0448:            /*goto IL_000b;*/goto IL_044d;                              //br				IL_000b
	IL_044d:            goto IL_0509;                                               //br				IL_0509
	IL_0452:                                                                        //ldc.i4.5
	IL_0453:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0454:                                                                        //ldc.i4.5
	IL_0455:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0456:                                                                        //ldc.i4.s				15
	IL_0458:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0459:                                                                        //ldc.i4.5
	IL_045a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_045b:                                                                        //ldc.i4.5
	IL_045c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_045d:                                                                        //ldc.i4.5
	IL_045e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_045f:                                                                        //ldc.i4.5
	IL_0460:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0461:                                                                        //ldc.i4.5
	IL_0462:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0463:                                                                        //ldc.i4.s				15
	IL_0465:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0466:                                                                        //ldc.i4.5
	IL_0467:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0468:                                                                        //ldc.i4.s				13
	IL_046a:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_046b:                                                                        //ldc.i4.5
	IL_046c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_046d:                                                                        //ldc.i4.5
	IL_046e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_046f:                                                                        //ldc.i4.s				15
	IL_0471:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0472:                                                                        //ldc.i4.7
	IL_0473:            return safe_cast<Root::T_x183::T_x1>(7);                    //ret
	IL_0474:                                                                        //ldc.i4.s				15
	IL_0476:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0477:                                                                        //ldc.i4.5
	IL_0478:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0479:                                                                        //ldc.i4.5
	IL_047a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_047b:                                                                        //ldc.i4.5
	IL_047c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_047d:                                                                        //ldc.i4.5
	IL_047e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_047f:                                                                        //ldc.i4.5
	IL_0480:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0481:                                                                        //ldc.i4.5
	IL_0482:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0483:                                                                        //ldc.i4.s				15
	IL_0485:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0486:                                                                        //ldc.i4.0
	IL_0487:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0488:                                                                        //ldc.i4.0
	IL_0489:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_048a:                                                                        //ldc.i4.0
	IL_048b:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_048c:                                                                        //ldc.i4.0
	IL_048d:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_048e:                                                                        //ldc.i4.s				13
	IL_0490:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0491:                                                                        //ldc.i4.5
	IL_0492:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0493:                                                                        //ldc.i4.5
	IL_0494:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0495:                                                                        //ldc.i4.5
	IL_0496:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0497:                                                                        //ldc.i4.5
	IL_0498:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0499:                                                                        //ldc.i4.5
	IL_049a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_049b:                                                                        //ldc.i4.5
	IL_049c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_049d:                                                                        //ldc.i4.s				17
	IL_049f:            return safe_cast<Root::T_x183::T_x1>(17);                   //ret
	IL_04a0:                                                                        //ldc.i4.5
	IL_04a1:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04a2:                                                                        //ldc.i4.4
	IL_04a3:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_04a4:                                                                        //ldc.i4.0
	IL_04a5:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_04a6:                                                                        //ldc.i4.2
	IL_04a7:            return safe_cast<Root::T_x183::T_x1>(2);                    //ret
	IL_04a8:                                                                        //ldc.i4.5
	IL_04a9:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04aa:                                                                        //ldc.i4.s				18
	IL_04ac:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_04ad:                                                                        //ldc.i4.5
	IL_04ae:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04af:                                                                        //ldc.i4.s				13
	IL_04b1:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_04b2:                                                                        //ldc.i4.s				15
	IL_04b4:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_04b5:                                                                        //ldc.i4.s				15
	IL_04b7:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_04b8:                                                                        //ldc.i4.5
	IL_04b9:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04ba:                                                                        //ldc.i4.5
	IL_04bb:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04bc:                                                                        //ldc.i4.5
	IL_04bd:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04be:                                                                        //ldc.i4.s				9
	IL_04c0:            return safe_cast<Root::T_x183::T_x1>(9);                    //ret
	IL_04c1:                                                                        //ldc.i4.s				13
	IL_04c3:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_04c4:                                                                        //ldc.i4.5
	IL_04c5:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04c6:                                                                        //ldc.i4.1
	IL_04c7:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_04c8:                                                                        //ldc.i4.s				16
	IL_04ca:            return safe_cast<Root::T_x183::T_x1>(16);                   //ret
	IL_04cb:                                                                        //ldc.i4.s				13
	IL_04cd:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_04ce:                                                                        //ldc.i4.5
	IL_04cf:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04d0:                                                                        //ldc.i4.5
	IL_04d1:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04d2:                                                                        //ldc.i4.5
	IL_04d3:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04d4:                                                                        //ldc.i4.5
	IL_04d5:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04d6:                                                                        //ldc.i4.1
	IL_04d7:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_04d8:                                                                        //ldc.i4.5
	IL_04d9:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04da:                                                                        //ldc.i4.5
	IL_04db:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04dc:                                                                        //ldc.i4.5
	IL_04dd:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04de:                                                                        //ldc.i4.5
	IL_04df:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04e0:                                                                        //ldc.i4.5
	IL_04e1:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04e2:                                                                        //ldc.i4.5
	IL_04e3:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04e4:                                                                        //ldc.i4.s				15
	IL_04e6:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_04e7:                                                                        //ldc.i4.5
	IL_04e8:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04e9:                                                                        //ldc.i4.5
	IL_04ea:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04eb:                                                                        //ldc.i4.5
	IL_04ec:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04ed:                                                                        //ldc.i4.5
	IL_04ee:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04ef:                                                                        //ldc.i4.5
	IL_04f0:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04f1:                                                                        //ldc.i4.5
	IL_04f2:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04f3:                                                                        //ldc.i4.5
	IL_04f4:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04f5:                                                                        //ldc.i4.5
	IL_04f6:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04f7:                                                                        //ldc.i4.5
	IL_04f8:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_04f9:                                                                        //ldc.i4.6
	IL_04fa:                                                                        //dup
	IL_04fb:                                                                        //dup
	IL_04fc:                                                                        //ldc.i4.5
	IL_04fd:                                                                        //sub
	IL_04fe:                                                                        //blt				IL_04fa
	IL_0503:                                                                        //pop
	IL_0504:                                                                        //ldc.i4.s				13
	IL_0506:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0507:                                                                        //ldc.i4.5
	IL_0508:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0509:                                                                        //ldc.i4				0x3
	IL_050e:            V_2=3;                                                      //stloc				V_2
	IL_0512:            /*goto IL_000b;*/goto IL_0517;                              //br				IL_000b
	IL_0517:            goto IL_0643;                                               //br				IL_0643
	IL_051c:                                                                        //ldc.i4.5
	IL_051d:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_051e:                                                                        //ldc.i4.s				13
	IL_0520:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0521:                                                                        //ldc.i4.5
	IL_0522:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0523:                                                                        //ldc.i4.5
	IL_0524:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0525:                                                                        //ldc.i4.5
	IL_0526:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0527:                                                                        //ldc.i4.5
	IL_0528:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0529:                                                                        //ldc.i4.3
	IL_052a:            return safe_cast<Root::T_x183::T_x1>(3);                    //ret
	IL_052b:                                                                        //ldc.i4.5
	IL_052c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_052d:                                                                        //ldc.i4.5
	IL_052e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_052f:                                                                        //ldc.i4.5
	IL_0530:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0531:                                                                        //ldc.i4.s				11
	IL_0533:            return safe_cast<Root::T_x183::T_x1>(11);                   //ret
	IL_0534:                                                                        //ldc.i4.5
	IL_0535:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0536:                                                                        //ldc.i4.s				13
	IL_0538:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0539:                                                                        //ldc.i4.5
	IL_053a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_053b:                                                                        //ldc.i4.5
	IL_053c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_053d:                                                                        //ldc.i4.0
	IL_053e:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_053f:                                                                        //ldc.i4.5
	IL_0540:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0541:                                                                        //ldc.i4.s				13
	IL_0543:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0544:                                                                        //ldc.i4.5
	IL_0545:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0546:                                                                        //ldc.i4.5
	IL_0547:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0548:                                                                        //ldc.i4.5
	IL_0549:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_054a:                                                                        //ldc.i4.5
	IL_054b:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_054c:                                                                        //ldc.i4.5
	IL_054d:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_054e:                                                                        //ldc.i4.5
	IL_054f:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0550:                                                                        //ldc.i4.5
	IL_0551:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0552:                                                                        //ldc.i4.5
	IL_0553:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0554:                                                                        //ldc.i4.0
	IL_0555:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0556:                                                                        //ldc.i4.5
	IL_0557:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0558:                                                                        //ldc.i4.s				14
	IL_055a:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_055b:                                                                        //ldc.i4.1
	IL_055c:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_055d:                                                                        //ldc.i4.5
	IL_055e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_055f:                                                                        //ldc.i4.s				18
	IL_0561:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_0562:                                                                        //ldc.i4.5
	IL_0563:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0564:                                                                        //ldc.i4.5
	IL_0565:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0566:                                                                        //ldc.i4.5
	IL_0567:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0568:                                                                        //ldc.i4.5
	IL_0569:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_056a:                                                                        //ldc.i4.5
	IL_056b:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_056c:                                                                        //ldc.i4.5
	IL_056d:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_056e:                                                                        //ldc.i4.s				18
	IL_0570:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_0571:                                                                        //ldc.i4.5
	IL_0572:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0573:                                                                        //ldc.i4.5
	IL_0574:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0575:                                                                        //ldc.i4.5
	IL_0576:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0577:                                                                        //ldc.i4.5
	IL_0578:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0579:                                                                        //ldc.i4.s				13
	IL_057b:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_057c:                                                                        //ldc.i4.s				14
	IL_057e:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_057f:                                                                        //ldc.i4.0
	IL_0580:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0581:                                                                        //ldc.i4.s				13
	IL_0583:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_0584:                                                                        //ldc.i4				0x2
	IL_0589:            V_2=2;                                                      //stloc				V_2
	IL_058d:            /*goto IL_000b;*/goto IL_0592;                              //br				IL_000b
	IL_0592:            goto IL_0724;                                               //br				IL_0724
	IL_0597:                                                                        //ldc.i4.s				13
	IL_0599:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_059a:                                                                        //ldc.i4.5
	IL_059b:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_059c:                                                                        //ldc.i4.0
	IL_059d:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_059e:                                                                        //ldc.i4.5
	IL_059f:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05a0:                                                                        //ldc.i4.s				14
	IL_05a2:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_05a3:                                                                        //ldc.i4.5
	IL_05a4:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05a5:                                                                        //ldc.i4.5
	IL_05a6:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05a7:                                                                        //ldc.i4.5
	IL_05a8:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05a9:                                                                        //ldc.i4.s				14
	IL_05ab:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_05ac:                                                                        //ldc.i4.5
	IL_05ad:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05ae:                                                                        //ldc.i4.1
	IL_05af:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_05b0:                                                                        //ldc.i4.s				15
	IL_05b2:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_05b3:                                                                        //ldc.i4.5
	IL_05b4:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05b5:                                                                        //ldc.i4.s				13
	IL_05b7:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_05b8:                                                                        //ldc.i4.s				14
	IL_05ba:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_05bb:                                                                        //ldc.i4.5
	IL_05bc:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05bd:                                                                        //ldc.i4.5
	IL_05be:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05bf:                                                                        //ldc.i4.s				15
	IL_05c1:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_05c2:                                                                        //ldc.i4.s				18
	IL_05c4:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_05c5:                                                                        //ldc.i4.5
	IL_05c6:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05c7:                                                                        //ldc.i4.5
	IL_05c8:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05c9:                                                                        //ldc.i4.s				12
	IL_05cb:            return safe_cast<Root::T_x183::T_x1>(12);                   //ret
	IL_05cc:                                                                        //ldc.i4.5
	IL_05cd:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05ce:                                                                        //ldc.i4.0
	IL_05cf:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_05d0:                                                                        //ldc.i4.5
	IL_05d1:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05d2:                                                                        //ldc.i4.5
	IL_05d3:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05d4:                                                                        //ldc.i4.4
	IL_05d5:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_05d6:                                                                        //ldc.i4.s				14
	IL_05d8:            return safe_cast<Root::T_x183::T_x1>(14);                   //ret
	IL_05d9:                                                                        //ldc.i4.5
	IL_05da:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05db:                                                                        //ldc.i4.5
	IL_05dc:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05dd:                                                                        //ldc.i4.5
	IL_05de:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05df:                                                                        //ldc.i4.5
	IL_05e0:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05e1:                                                                        //ldc.i4.5
	IL_05e2:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05e3:                                                                        //ldc.i4.5
	IL_05e4:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05e5:                                                                        //ldc.i4.5
	IL_05e6:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05e7:                                                                        //ldc.i4.4
	IL_05e8:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_05e9:                                                                        //ldc.i4.0
	IL_05ea:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_05eb:                                                                        //ldc.i4.5
	IL_05ec:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05ed:                                                                        //ldc.i4.4
	IL_05ee:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_05ef:                                                                        //ldc.i4.5
	IL_05f0:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05f1:                                                                        //ldc.i4.5
	IL_05f2:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_05f3:                                                                        //ldc.i4.s				13
	IL_05f5:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_05f6:                                                                        //ldc.i4.s				18
	IL_05f8:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_05f9:                                                                        //ldc.i4.s				13
	IL_05fb:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_05fc:                                                                        //ldc.i4.s				10
	IL_05fe:            return safe_cast<Root::T_x183::T_x1>(10);                   //ret
	IL_05ff:                                                                        //ldc.i4.5
	IL_0600:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0601:                                                                        //ldc.i4.5
	IL_0602:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0603:                                                                        //ldc.i4.5
	IL_0604:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0605:                                                                        //ldc.i4.5
	IL_0606:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0607:                                                                        //ldc.i4.5
	IL_0608:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0609:                                                                        //ldc.i4.5
	IL_060a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_060b:                                                                        //ldc.i4.5
	IL_060c:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_060d:                                                                        //ldc.i4.5
	IL_060e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_060f:                                                                        //ldc.i4.s				15
	IL_0611:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0612:                                                                        //ldc.i4.5
	IL_0613:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0614:                                                                        //ldc.i4.0
	IL_0615:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0616:                                                                        //ldc.i4.1
	IL_0617:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_0618:                                                                        //ldc.i4.5
	IL_0619:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_061a:                                                                        //ldc.i4.5
	IL_061b:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_061c:                                                                        //ldc.i4.5
	IL_061d:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_061e:                                                                        //ldc.i4.5
	IL_061f:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0620:                                                                        //ldc.i4.5
	IL_0621:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0622:                                                                        //ldc.i4.5
	IL_0623:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0624:                                                                        //ldc.i4.5
	IL_0625:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0626:                                                                        //ldc.i4.5
	IL_0627:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0628:                                                                        //ldc.i4.5
	IL_0629:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_062a:                                                                        //ldc.i4.5
	IL_062b:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_062c:                                                                        //ldc.i4.5
	IL_062d:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_062e:                                                                        //ldc.i4.5
	IL_062f:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0630:                                                                        //ldc.i4.5
	IL_0631:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0632:                                                                        //ldc.i4.5
	IL_0633:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0634:                                                                        //ldc.i4.0
	IL_0635:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0636:                                                                        //ldc.i4.5
	IL_0637:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0638:                                                                        //ldc.i4.5
	IL_0639:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_063a:                                                                        //ldc.i4.s				15
	IL_063c:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_063d:                                                                        //ldc.i4.5
	IL_063e:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_063f:                                                                        //ldc.i4.5
	IL_0640:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0641:                                                                        //ldc.i4.5
	IL_0642:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0643:                                                                        //ldarg.0
	IL_0644:            V_0=A_0;                                                    //stloc.0
	IL_0645:                                                                        //ldc.i4				0x5
	IL_064a:            V_2=5;                                                      //stloc				V_2
	IL_064e:            /*goto IL_000b;*/goto IL_0653;                              //br				IL_000b
	IL_0653:                                                                        //ldloc.0
	IL_0654:                                                                        //ldc.i4				0xfe00
	IL_0659:                                                                        //sub
	IL_065a:            switch((V_0 - 65024)){case 0:goto IL_0550;case 1:goto IL_0701;case 2:goto IL_0719;case 3:goto IL_0477;case 4:goto IL_04d8;case 5:goto IL_045f;case 6:goto IL_04a2;case 7:goto IL_0722;case 8:goto IL_0724;case 9:goto IL_05b8;case 10:goto IL_057c;case 11:goto IL_05d6;case 12:goto IL_05a9;case 13:goto IL_0558;case 14:goto IL_05a0;case 15:goto IL_05a3;case 16:goto IL_0724;case 17:goto IL_0605;case 18:goto IL_0705;case 19:goto IL_0626;case 20:goto IL_06f4;case 21:goto IL_0597;case 22:goto IL_0468;case 23:goto IL_05d9;case 24:goto IL_0628;case 25:goto IL_0724;case 26:goto IL_0618;case 27:goto IL_0724;case 28:goto IL_05f3;case 29:goto IL_0601;case 30:goto IL_0568;};//switch				(IL_0550,IL_0701,IL_0719,IL_0477,IL_04d8,IL_045f,IL_04a2,IL_0722,IL_0724,IL_05b8,IL_057c,IL_05d6,IL_05a9,IL_0558,IL_05a0,IL_05a3,IL_0724,IL_0605,IL_0705,IL_0626,IL_06f4,IL_0597,IL_0468,IL_05d9,IL_0628,IL_0724,IL_0618,IL_0724,IL_05f3,IL_0601,IL_0568)
	IL_06db:                                                                        //ldc.i4				0x4
	IL_06e0:            V_2=4;                                                      //stloc				V_2
	IL_06e4:            /*goto IL_000b;*/goto IL_06e9;                              //br				IL_000b
	IL_06e9:            goto IL_0584;                                               //br				IL_0584
	IL_06ee:                                                                        //ldc.i4.5
	IL_06ef:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06f0:                                                                        //ldc.i4.5
	IL_06f1:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06f2:                                                                        //ldc.i4.5
	IL_06f3:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06f4:                                                                        //ldc.i4.5
	IL_06f5:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06f6:                                                                        //ldc.i4.5
	IL_06f7:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06f8:                                                                        //ldc.i4.s				13
	IL_06fa:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_06fb:                                                                        //ldc.i4.5
	IL_06fc:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06fd:                                                                        //ldc.i4.5
	IL_06fe:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_06ff:                                                                        //ldc.i4.5
	IL_0700:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0701:                                                                        //ldc.i4.5
	IL_0702:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0703:                                                                        //ldc.i4.4
	IL_0704:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_0705:                                                                        //ldc.i4.s				16
	IL_0707:            return safe_cast<Root::T_x183::T_x1>(16);                   //ret
	IL_0708:                                                                        //ldc.i4.s				15
	IL_070a:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_070b:                                                                        //ldc.i4.s				13
	IL_070d:            return safe_cast<Root::T_x183::T_x1>(13);                   //ret
	IL_070e:                                                                        //ldc.i4.5
	IL_070f:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0710:                                                                        //ldc.i4.5
	IL_0711:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0712:                                                                        //ldc.i4.5
	IL_0713:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0714:                                                                        //ldc.i4.5
	IL_0715:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_0716:                                                                        //ldc.i4.s				15
	IL_0718:            return safe_cast<Root::T_x183::T_x1>(15);                   //ret
	IL_0719:                                                                        //ldc.i4.5
	IL_071a:            return safe_cast<Root::T_x183::T_x1>(5);                    //ret
	IL_071b:                                                                        //ldc.i4.1
	IL_071c:            return safe_cast<Root::T_x183::T_x1>(1);                    //ret
	IL_071d:                                                                        //ldc.i4.s				18
	IL_071f:            return safe_cast<Root::T_x183::T_x1>(18);                   //ret
	IL_0720:                                                                        //ldc.i4.0
	IL_0721:            return safe_cast<Root::T_x183::T_x1>(0);                    //ret
	IL_0722:                                                                        //ldc.i4.4
	IL_0723:            return safe_cast<Root::T_x183::T_x1>(4);                    //ret
	IL_0724:            Temp_0=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0729:                                                                        //ldstr				L"\x782C\x412E\x5A30\x5D32\x5A34\x4036\x5738\x1B3A\x743C\x733E\x6140\x2A42\x2B44\x3446\x3D48\x394A\x384C\x2C4E\x2550\x3A52\x3A54\x3956\x7958\x7C5A\x265C\x6F5E\x1C60\x4462\x4B64"
	IL_072e:                                                                        //ldloc				V_3
	IL_0732:            Temp_1=a(L"\x782C\x412E\x5A30\x5D32\x5A34\x4036\x5738\x1B3A\x743C\x733E\x6140\x2A42\x2B44\x3446\x3D48\x394A\x384C\x2C4E\x2550\x3A52\x3A54\x3956\x7958\x7C5A\x265C\x6F5E\x1C60\x4462\x4B64",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0737:                                                                        //ldc.i4.1
	IL_0738:            Temp_2=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_073d:            V_1=Temp_2;                                                 //stloc.1
	IL_073e:                                                                        //ldloc.1
	IL_073f:                                                                        //ldc.i4.0
	IL_0740:                                                                        //ldarga.s				A_0
	IL_0742:                                                                        //ldstr				L"\x752C\x1B2E"
	IL_0747:                                                                        //ldloc				V_3
	IL_074b:            Temp_3=a(L"\x752C\x1B2E",V_3);                              //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0750:            Temp_4=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0755:            Temp_5=A_0.ToString(Temp_3,safe_cast<System::IFormatProvider^>(Temp_4));//call				System::String^ System::Int32::ToString(System::String^,System::IFormatProvider^)
	IL_075a:            V_1[0]=safe_cast<System::Object^>(Temp_5);                  //stelem.ref
	IL_075b:                                                                        //ldloc.1
	IL_075c:            Temp_6=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_0),Temp_1,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_0761:            Temp_7=gcnew System::NotSupportedException(Temp_6);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0766:            throw Temp_7;                                               //throw

}
inline Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatementCollection^ Temp_0 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_2 = nullptr;
	//local variables.
	Reflector::CodeModel::IStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4.6
	IL_0001:                                                                        //dup
	IL_0002:                                                                        //dup
	IL_0003:                                                                        //ldc.i4.0
	IL_0004:                                                                        //sub
	IL_0005:                                                                        //blt				IL_0001
	IL_000a:                                                                        //pop
	IL_000b:                                                                        //ldarg.0
	IL_000c:            Temp_0=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0011:                                                                        //ldarg.1
	IL_0012:            Temp_1=Temp_0[A_1];                                         //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_0017:            V_0=Temp_1;                                                 //stloc.0
	IL_0018:                                                                        //ldloc.0
	IL_0019:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_001e:            if(dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(V_0)==nullptr)goto IL_002e;//brfalse.s				IL_002e
	IL_0020:            goto IL_0022;                                               //br.s				IL_0022
	IL_0022:                                                                        //ldloc.0
	IL_0023:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_0028:            Temp_2=dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(V_0)->Statement;//callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::ILabeledStatement::get_Statement()
	IL_002d:            return Temp_2;                                              //ret
	IL_002e:                                                                        //ldloc.0
	IL_002f:            return V_0;                                                 //ret

}
inline System::Boolean Root::T_x183::M_x12(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	Reflector::CodeModel::IGotoStatement^ V_0 = nullptr;
	Reflector::CodeModel::IMethodReturnStatement^ V_1 = nullptr;
	Reflector::CodeModel::IThrowExceptionStatement^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_002e;                                               //br.s				IL_002e
	IL_0002:                                                                        //ldc.i4.5
	IL_0003:                                                                        //dup
	IL_0004:                                                                        //dup
	IL_0005:                                                                        //ldc.i4.6
	IL_0006:                                                                        //add
	IL_0007:                                                                        //bgt				IL_0003
	IL_000c:                                                                        //pop
	IL_000d:                                                                        //ldloc				V_3
	IL_0011:            switch(V_3){case 0:goto IL_008d;case 1:goto IL_009e;case 2:goto IL_004e;case 3:goto IL_0062;case 4:goto IL_0040;case 5:goto IL_0070;};//switch				(IL_008d,IL_009e,IL_004e,IL_0062,IL_0040,IL_0070)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //isinst				Reflector::CodeModel::IGotoStatement
	IL_0034:            V_0=dynamic_cast<Reflector::CodeModel::IGotoStatement^>(A_0);//stloc.0
	IL_0035:                                                                        //ldc.i4				0x4
	IL_003a:            V_3=4;                                                      //stloc				V_3
	IL_003e:            /*goto IL_0002;*/goto IL_0040;                              //br.s				IL_0002
	IL_0040:                                                                        //ldloc.0
	IL_0041:            if(V_0==nullptr)goto IL_0078;                               //brfalse.s				IL_0078
	IL_0043:                                                                        //ldc.i4				0x2
	IL_0048:            V_3=2;                                                      //stloc				V_3
	IL_004c:            /*goto IL_0002;*/goto IL_004e;                              //br.s				IL_0002
	IL_004e:            goto IL_0074;                                               //br.s				IL_0074
	IL_0050:                                                                        //ldarg.0
	IL_0051:                                                                        //isinst				Reflector::CodeModel::IThrowExceptionStatement
	IL_0056:            V_2=dynamic_cast<Reflector::CodeModel::IThrowExceptionStatement^>(A_0);//stloc.2
	IL_0057:                                                                        //ldc.i4				0x3
	IL_005c:            V_3=3;                                                      //stloc				V_3
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldloc.2
	IL_0063:            if(V_2==nullptr)goto IL_00a0;                               //brfalse.s				IL_00a0
	IL_0065:                                                                        //ldc.i4				0x5
	IL_006a:            V_3=5;                                                      //stloc				V_3
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_0076;                                               //br.s				IL_0076
	IL_0072:                                                                        //ldc.i4.1
	IL_0073:            return true;                                                //ret
	IL_0074:                                                                        //ldc.i4.1
	IL_0075:            return true;                                                //ret
	IL_0076:                                                                        //ldc.i4.1
	IL_0077:            return true;                                                //ret
	IL_0078:                                                                        //ldarg.0
	IL_0079:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_007e:            V_1=dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0);//stloc.1
	IL_007f:                                                                        //ldc.i4				0x0
	IL_0084:            V_3=0;                                                      //stloc				V_3
	IL_0088:            /*goto IL_0002;*/goto IL_008d;                              //br				IL_0002
	IL_008d:                                                                        //ldloc.1
	IL_008e:            if(V_1==nullptr)goto IL_0050;                               //brfalse.s				IL_0050
	IL_0090:                                                                        //ldc.i4				0x1
	IL_0095:            V_3=1;                                                      //stloc				V_3
	IL_0099:            /*goto IL_0002;*/goto IL_009e;                              //br				IL_0002
	IL_009e:            goto IL_0072;                                               //br.s				IL_0072
	IL_00a0:                                                                        //ldc.i4.0
	IL_00a1:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x12(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_1=5;                                                      //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0x3
	IL_000e:            V_0=3;                                                      //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_002f;                                               //br.s				IL_002f
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_00a7;case 1:goto IL_0042;case 2:goto IL_0075;case 3:goto IL_0014;};//switch				(IL_00a7,IL_0042,IL_0075,IL_0014)
	IL_002f:                                                                        //ldarg.0
	IL_0030:            Temp_6=Root::T_x183::M_x2(A_0);                             //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IType^)
	IL_0035:            if(Temp_6)goto IL_00a9;                                     //brtrue.s				IL_00a9
	IL_0037:                                                                        //ldc.i4				0x1
	IL_003c:            V_0=1;                                                      //stloc				V_0
	IL_0040:            /*goto IL_0016;*/goto IL_0042;                              //br.s				IL_0016
	IL_0042:            goto IL_0067;                                               //br.s				IL_0067
	IL_0044:                                                                        //ldarg.0
	IL_0045:                                                                        //ldstr				L"\x7022\x5C24\x5426\x5D28\x4E2A\x402C"
	IL_004a:                                                                        //ldloc				V_1
	IL_004e:            Temp_0=a(L"\x7022\x5C24\x5426\x5D28\x4E2A\x402C",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0053:                                                                        //ldstr				L"\x6022\x4D24\x4626\x5B28"
	IL_0058:                                                                        //ldloc				V_1
	IL_005c:            Temp_1=a(L"\x6022\x4D24\x4626\x5B28",V_1);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0061:            Temp_2=Root::T_x183::M_x1(A_0,Temp_0,Temp_1);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0066:            return Temp_2;                                              //ret
	IL_0067:            goto IL_006a;                                               //br.s				IL_006a
	IL_0069:                                                                        //break
	IL_006a:                                                                        //ldc.i4				0x2
	IL_006f:            V_0=2;                                                      //stloc				V_0
	IL_0073:            /*goto IL_0016;*/goto IL_0075;                              //br.s				IL_0016
	IL_0075:                                                                        //ldarg.0
	IL_0076:                                                                        //ldstr				L"\x7022\x5C24\x5426\x5D28\x4E2A\x402C"
	IL_007b:                                                                        //ldloc				V_1
	IL_007f:            Temp_3=a(L"\x7022\x5C24\x5426\x5D28\x4E2A\x402C",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0084:                                                                        //ldstr				L"\x7022\x5124\x5526\x4028\x452A\x4A2C"
	IL_0089:                                                                        //ldloc				V_1
	IL_008d:            Temp_4=a(L"\x7022\x5124\x5526\x4028\x452A\x4A2C",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0092:            Temp_5=Root::T_x183::M_x1(A_0,Temp_3,Temp_4);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0097:            if(Temp_5)goto IL_00a9;                                     //brtrue.s				IL_00a9
	IL_0099:                                                                        //ldc.i4				0x0
	IL_009e:            V_0=0;                                                      //stloc				V_0
	IL_00a2:            /*goto IL_0016;*/goto IL_00a7;                              //br				IL_0016
	IL_00a7:            goto IL_0044;                                               //br.s				IL_0044
	IL_00a9:                                                                        //ldc.i4.1
	IL_00aa:            return true;                                                //ret

}
inline System::Boolean Root::T_x183::M_x12(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::ITypeReference^ Temp_10 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x4
	IL_000e:            V_2=4;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0047;                                               //br.s				IL_0047
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_007f;case 1:goto IL_0108;case 2:goto IL_0058;case 3:goto IL_0144;case 4:goto IL_0014;case 5:goto IL_011b;case 6:goto IL_00bf;case 7:goto IL_00f7;case 8:goto IL_00a8;case 9:goto IL_00d3;};//switch				(IL_007f,IL_0108,IL_0058,IL_0144,IL_0014,IL_011b,IL_00bf,IL_00f7,IL_00a8,IL_00d3)
	IL_0047:                                                                        //ldarg.0
	IL_0048:            if(A_0==nullptr)goto IL_0149;                               //brfalse				IL_0149
	IL_004d:                                                                        //ldc.i4				0x2
	IL_0052:            V_2=2;                                                      //stloc				V_2
	IL_0056:            /*goto IL_0016;*/goto IL_0058;                              //br.s				IL_0016
	IL_0058:            goto IL_00aa;                                               //br.s				IL_00aa
	IL_005a:                                                                        //ldloc.1
	IL_005b:            Temp_3=V_1->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0060:                                                                        //ldstr				L"\x4D1D\x591F\x5121\x5023\x4325\x4527"
	IL_0065:                                                                        //ldloc				V_3
	IL_0069:            Temp_4=a(L"\x4D1D\x591F\x5121\x5023\x4325\x4527",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_006e:            Temp_5=(Temp_3 == Temp_4);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0073:            return Temp_5;                                              //ret
	IL_0074:                                                                        //ldc.i4				0x0
	IL_0079:            V_2=0;                                                      //stloc				V_2
	IL_007d:            /*goto IL_0016;*/goto IL_007f;                              //br.s				IL_0016
	IL_007f:                                                                        //ldloc.1
	IL_0080:            Temp_0=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0085:                                                                        //ldstr				L"\x481D\x411F\x4E21\x5123\x4325\x7C27\x5329\x5C2B\x4B2D"
	IL_008a:                                                                        //ldloc				V_3
	IL_008e:            Temp_1=a(L"\x481D\x411F\x4E21\x5123\x4325\x7C27\x5329\x5C2B\x4B2D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0093:            Temp_2=(Temp_0 == Temp_1);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0098:            if(Temp_2)goto IL_005a;                                     //brtrue.s				IL_005a
	IL_009a:                                                                        //ldc.i4				0x8
	IL_009f:            V_2=8;                                                      //stloc				V_2
	IL_00a3:            /*goto IL_0016;*/goto IL_00a8;                              //br				IL_0016
	IL_00a8:            goto IL_010d;                                               //br.s				IL_010d
	IL_00aa:                                                                        //ldarg.0
	IL_00ab:            Temp_6=A_0->Resolve();                                      //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_00b0:            V_0=Temp_6;                                                 //stloc.0
	IL_00b1:                                                                        //ldc.i4				0x6
	IL_00b6:            V_2=6;                                                      //stloc				V_2
	IL_00ba:            /*goto IL_0016;*/goto IL_00bf;                              //br				IL_0016
	IL_00bf:                                                                        //ldloc.0
	IL_00c0:            if(V_0==nullptr)goto IL_0149;                               //brfalse				IL_0149
	IL_00c5:                                                                        //ldc.i4				0x9
	IL_00ca:            V_2=9;                                                      //stloc				V_2
	IL_00ce:            /*goto IL_0016;*/goto IL_00d3;                              //br				IL_0016
	IL_00d3:            goto IL_00d7;                                               //br.s				IL_00d7
	IL_00d5:                                                                        //ldc.i4.0
	IL_00d6:            return false;                                               //ret
	IL_00d7:                                                                        //ldloc.0
	IL_00d8:            Temp_10=V_0->BaseType;                                      //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_00dd:            V_1=Temp_10;                                                //stloc.1
	IL_00de:                                                                        //ldc.i4.0
	IL_00df:                                                                        //dup
	IL_00e0:                                                                        //dup
	IL_00e1:                                                                        //ldc.i4.5
	IL_00e2:                                                                        //add
	IL_00e3:                                                                        //bgt				IL_00df
	IL_00e8:                                                                        //pop
	IL_00e9:                                                                        //ldc.i4				0x7
	IL_00ee:            V_2=7;                                                      //stloc				V_2
	IL_00f2:            /*goto IL_0016;*/goto IL_00f7;                              //br				IL_0016
	IL_00f7:                                                                        //ldloc.1
	IL_00f8:            if(V_1==nullptr)goto IL_00d5;                               //brfalse.s				IL_00d5
	IL_00fa:                                                                        //ldc.i4				0x1
	IL_00ff:            V_2=1;                                                      //stloc				V_2
	IL_0103:            /*goto IL_0016;*/goto IL_0108;                              //br				IL_0016
	IL_0108:            goto IL_0074;                                               //br				IL_0074
	IL_010d:                                                                        //ldc.i4				0x5
	IL_0112:            V_2=5;                                                      //stloc				V_2
	IL_0116:            /*goto IL_0016;*/goto IL_011b;                              //br				IL_0016
	IL_011b:                                                                        //ldloc.1
	IL_011c:            Temp_7=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0121:                                                                        //ldstr				L"\x5B1D\x4E1F\x5721\x4923"
	IL_0126:                                                                        //ldloc				V_3
	IL_012a:            Temp_8=a(L"\x5B1D\x4E1F\x5721\x4923",V_3);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012f:            Temp_9=(Temp_7 == Temp_8);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0134:            if(!Temp_9)goto IL_00d5;                                    //brfalse.s				IL_00d5
	IL_0136:                                                                        //ldc.i4				0x3
	IL_013b:            V_2=3;                                                      //stloc				V_2
	IL_013f:            /*goto IL_0016;*/goto IL_0144;                              //br				IL_0016
	IL_0144:            goto IL_005a;                                               //br				IL_005a
	IL_0149:                                                                        //ldc.i4.0
	IL_014a:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ISwitchCaseCollection^ Temp_0 = nullptr;
	System::Collections::IEnumerator^ Temp_1 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	Reflector::CodeModel::IBlockStatement^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::Boolean Temp_6 = false;
	System::Object^ Temp_7 = nullptr;
	Reflector::CodeModel::IStatementCollection^ Temp_8 = nullptr;
	System::Int32 Temp_9 = 0;
	Reflector::CodeModel::IStatement^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	//local variables.
	Reflector::CodeModel::IMethodReturnStatement^ V_0 = nullptr;
	Reflector::CodeModel::ISwitchStatement^ V_1 = nullptr;
	System::Boolean V_2 = false;
	Reflector::CodeModel::ISwitchCase^ V_3 = nullptr;
	Reflector::CodeModel::IBlockStatement^ V_4 = nullptr;
	System::Boolean V_5 = false;
	System::Collections::IEnumerator^ V_6 = nullptr;
	System::IDisposable^ V_7 = nullptr;
	System::Int32 V_8 = 0;
	//method body ------- 
	IL_0000:            goto IL_002f;                                               //br.s				IL_002f
	IL_0002:                                                                        //ldloc				V_8
	IL_0006:            switch(V_8){case 0:goto IL_0095;case 1:goto IL_00f0;case 2:goto IL_00a6;case 3:goto IL_0041;case 4:goto IL_005c;case 5:goto IL_025c;case 6:goto IL_004f;case 7:goto IL_007c;case 8:goto IL_00de;};//switch				(IL_0095,IL_00f0,IL_00a6,IL_0041,IL_005c,IL_025c,IL_004f,IL_007c,IL_00de)
	IL_002f:                                                                        //ldarg.0
	IL_0030:                                                                        //isinst				Reflector::CodeModel::IMethodReturnStatement
	IL_0035:            V_0=dynamic_cast<Reflector::CodeModel::IMethodReturnStatement^>(A_0);//stloc.0
	IL_0036:                                                                        //ldc.i4				0x3
	IL_003b:            V_8=3;                                                      //stloc				V_8
	IL_003f:            /*goto IL_0002;*/goto IL_0041;                              //br.s				IL_0002
	IL_0041:                                                                        //ldloc.0
	IL_0042:            if(V_0==nullptr)goto IL_0080;                               //brfalse.s				IL_0080
	IL_0044:                                                                        //ldc.i4				0x6
	IL_0049:            V_8=6;                                                      //stloc				V_8
	IL_004d:            /*goto IL_0002;*/goto IL_004f;                              //br.s				IL_0002
	IL_004f:            goto IL_00c6;                                               //br.s				IL_00c6
	IL_0051:                                                                        //ldc.i4				0x4
	IL_0056:            V_8=4;                                                      //stloc				V_8
	IL_005a:            /*goto IL_0002;*/goto IL_005c;                              //br.s				IL_0002
	IL_005c:                                                                        //ldloc.s				V_4
	IL_005e:            Temp_2=V_4->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0063:            Temp_3=safe_cast<System::Collections::ICollection^>(Temp_2)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0068:                                                                        //ldc.i4.0
	IL_0069:            if(Temp_3<=0)goto IL_00f5;                                  //ble				IL_00f5
	IL_006e:            goto IL_0071;                                               //br.s				IL_0071
	IL_0070:                                                                        //break
	IL_0071:                                                                        //ldc.i4				0x7
	IL_0076:            V_8=7;                                                      //stloc				V_8
	IL_007a:            /*goto IL_0002;*/goto IL_007c;                              //br.s				IL_0002
	IL_007c:            goto IL_00ab;                                               //br.s				IL_00ab
	IL_007e:                                                                        //ldloc.2
	IL_007f:            return V_2;                                                 //ret
	IL_0080:                                                                        //ldarg.0
	IL_0081:                                                                        //isinst				Reflector::CodeModel::ISwitchStatement
	IL_0086:            V_1=dynamic_cast<Reflector::CodeModel::ISwitchStatement^>(A_0);//stloc.1
	IL_0087:                                                                        //ldc.i4				0x0
	IL_008c:            V_8=0;                                                      //stloc				V_8
	IL_0090:            /*goto IL_0002;*/goto IL_0095;                              //br				IL_0002
	IL_0095:                                                                        //ldloc.1
	IL_0096:            if(V_1==nullptr)goto IL_00c8;                               //brfalse.s				IL_00c8
	IL_0098:                                                                        //ldc.i4				0x2
	IL_009d:            V_8=2;                                                      //stloc				V_8
	IL_00a1:            /*goto IL_0002;*/goto IL_00a6;                              //br				IL_0002
	IL_00a6:            goto IL_023f;                                               //br				IL_023f
	IL_00ab:                                                                        //ldloc.s				V_4
	IL_00ad:                                                                        //ldloc.s				V_4
	IL_00af:            Temp_8=V_4->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_00b4:            Temp_9=safe_cast<System::Collections::ICollection^>(Temp_8)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00b9:                                                                        //ldc.i4.1
	IL_00ba:                                                                        //sub
	IL_00bb:            Temp_10=Root::T_x183::M_x12(V_4,(Temp_9 - 1));              //call				Reflector::CodeModel::IStatement^ Root::T_x183::M_x12(Reflector::CodeModel::IBlockStatement^,System::Int32)
	IL_00c0:            Temp_11=Root::T_x183::M_x13(Temp_10);                       //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IStatement^)
	IL_00c5:            return Temp_11;                                             //ret
	IL_00c6:                                                                        //ldc.i4.1
	IL_00c7:            return true;                                                //ret
	IL_00c8:                                                                        //ldarg.0
	IL_00c9:                                                                        //isinst				Reflector::CodeModel::IBlockStatement
	IL_00ce:            V_4=dynamic_cast<Reflector::CodeModel::IBlockStatement^>(A_0);//stloc.s				V_4
	IL_00d0:                                                                        //ldc.i4				0x8
	IL_00d5:            V_8=8;                                                      //stloc				V_8
	IL_00d9:            /*goto IL_0002;*/goto IL_00de;                              //br				IL_0002
	IL_00de:                                                                        //ldloc.s				V_4
	IL_00e0:            if(V_4==nullptr)goto IL_00f5;                               //brfalse.s				IL_00f5
	IL_00e2:                                                                        //ldc.i4				0x1
	IL_00e7:            V_8=1;                                                      //stloc				V_8
	IL_00eb:            /*goto IL_0002;*/goto IL_00f0;                              //br				IL_0002
	IL_00f0:            goto IL_0051;                                               //br				IL_0051
	IL_00f5:                                                                        //ldc.i4.0
	IL_00f6:            return false;                                               //ret
	IL_00F601:          try{
	IL_00f7:                                                                        //ldc.i4				0x4
	IL_00fc:            V_8=4;                                                      //stloc				V_8
	IL_0100:            /*goto IL_0104;*/goto IL_0102;                              //br.s				IL_0104
	IL_0102:            goto IL_0135;                                               //br.s				IL_0135
	IL_0104:                                                                        //ldloc				V_8
	IL_0108:            switch(V_8){case 0:goto IL_0168;case 1:goto IL_01e9;case 2:goto IL_01d6;case 3:goto IL_01a8;case 4:goto IL_0102;case 5:goto IL_01c3;case 6:goto IL_0182;case 7:goto IL_0156;case 8:goto IL_0142;case 9:goto IL_0198;};//switch				(IL_0168,IL_01e9,IL_01d6,IL_01a8,IL_0102,IL_01c3,IL_0182,IL_0156,IL_0142,IL_0198)
	IL_0135:            goto IL_0137;                                               //br.s				IL_0137
	IL_0137:                                                                        //ldc.i4				0x8
	IL_013c:            V_8=8;                                                      //stloc				V_8
	IL_0140:            /*goto IL_0104;*/goto IL_0142;                              //br.s				IL_0104
	IL_0142:                                                                        //ldloc.s				V_6
	IL_0144:            Temp_6=V_6->MoveNext();                                     //callvirt				System::Boolean System::Collections::IEnumerator::MoveNext()
	IL_0149:            if(Temp_6)goto IL_016a;                                     //brtrue.s				IL_016a
	IL_014b:                                                                        //ldc.i4				0x7
	IL_0150:            V_8=7;                                                      //stloc				V_8
	IL_0154:            /*goto IL_0104;*/goto IL_0156;                              //br.s				IL_0104
	IL_0156:            goto IL_01db;                                               //br				IL_01db
	IL_015b:                                                                        //ldc.i4.1
	IL_015c:            V_2=true;                                                   //stloc.2
	IL_015d:                                                                        //ldc.i4				0x0
	IL_0162:            V_8=0;                                                      //stloc				V_8
	IL_0166:            /*goto IL_0104;*/goto IL_0168;                              //br.s				IL_0104
	IL_0168:            goto IL_019a;                                               //br.s				IL_019a
	IL_016a:                                                                        //ldloc.s				V_6
	IL_016c:            Temp_7=V_6->Current;                                        //callvirt				System::Object^ System::Collections::IEnumerator::get_Current()
	IL_0171:                                                                        //castclass				Reflector::CodeModel::ISwitchCase
	IL_0176:            V_3=safe_cast<Reflector::CodeModel::ISwitchCase^>(Temp_7);  //stloc.3
	IL_0177:                                                                        //ldc.i4				0x6
	IL_017c:            V_8=6;                                                      //stloc				V_8
	IL_0180:            /*goto IL_0104;*/goto IL_0182;                              //br.s				IL_0104
	IL_0182:                                                                        //ldloc.3
	IL_0183:                                                                        //isinst				Reflector::CodeModel::IDefaultCase
	IL_0188:            if(dynamic_cast<Reflector::CodeModel::IDefaultCase^>(V_3)==nullptr)goto IL_019a;//brfalse.s				IL_019a
	IL_018a:                                                                        //ldc.i4				0x9
	IL_018f:            V_8=9;                                                      //stloc				V_8
	IL_0193:            /*goto IL_0104;*/goto IL_0198;                              //br				IL_0104
	IL_0198:            goto IL_015b;                                               //br.s				IL_015b
	IL_019a:                                                                        //ldc.i4				0x3
	IL_019f:            V_8=3;                                                      //stloc				V_8
	IL_01a3:            /*goto IL_0104;*/goto IL_01a8;                              //br				IL_0104
	IL_01a8:                                                                        //ldloc.3
	IL_01a9:            Temp_4=V_3->Body;                                           //callvirt				Reflector::CodeModel::IBlockStatement^ Reflector::CodeModel::ISwitchCase::get_Body()
	IL_01ae:            Temp_5=Root::T_x183::M_x13(safe_cast<Reflector::CodeModel::IStatement^>(Temp_4));//call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IStatement^)
	IL_01b3:            if(Temp_5)goto IL_0137;                                     //brtrue.s				IL_0137
	IL_01b5:                                                                        //ldc.i4				0x5
	IL_01ba:            V_8=5;                                                      //stloc				V_8
	IL_01be:            /*goto IL_0104;*/goto IL_01c3;                              //br				IL_0104
	IL_01c3:            goto IL_01c5;                                               //br.s				IL_01c5
	IL_01c5:                                                                        //ldc.i4.0
	IL_01c6:            V_5=false;                                                  //stloc.s				V_5
	IL_01c8:                                                                        //ldc.i4				0x2
	IL_01cd:            V_8=2;                                                      //stloc				V_8
	IL_01d1:            /*goto IL_0104;*/goto IL_01d6;                              //br				IL_0104
	IL_01d6:            goto IL_0261;                                               //leave				IL_0261
	IL_01db:                                                                        //ldc.i4				0x1
	IL_01e0:            V_8=1;                                                      //stloc				V_8
	IL_01e4:            /*goto IL_0104;*/goto IL_01e9;                              //br				IL_0104
	IL_01e9:            goto IL_007e;                                               //leave				IL_007e
	                    ;}
	                    finally{
	IL_01ee:            goto IL_0205;                                               //br.s				IL_0205
	IL_01f0:                                                                        //ldloc				V_8
	IL_01f4:            switch(V_8){case 0:goto IL_023c;case 1:goto IL_0219;case 2:goto IL_0228;};//switch				(IL_023c,IL_0219,IL_0228)
	IL_0205:                                                                        //ldloc.s				V_6
	IL_0207:                                                                        //isinst				System::IDisposable
	IL_020c:            V_7=dynamic_cast<System::IDisposable^>(V_6);                //stloc.s				V_7
	IL_020e:                                                                        //ldc.i4				0x1
	IL_0213:            V_8=1;                                                      //stloc				V_8
	IL_0217:            /*goto IL_01f0;*/goto IL_0219;                              //br.s				IL_01f0
	IL_0219:                                                                        //ldloc.s				V_7
	IL_021b:            if(V_7==nullptr)goto IL_023e;                               //brfalse.s				IL_023e
	IL_021d:                                                                        //ldc.i4				0x2
	IL_0222:            V_8=2;                                                      //stloc				V_8
	IL_0226:            /*goto IL_01f0;*/goto IL_0228;                              //br.s				IL_01f0
	IL_0228:            goto IL_022a;                                               //br.s				IL_022a
	IL_022a:                                                                        //ldloc.s				V_7
	IL_022c:            /*V_7->Dispose();*/                                         //callvirt				void System::IDisposable::Dispose()
	IL_0231:                                                                        //ldc.i4				0x0
	IL_0236:            V_8=0;                                                      //stloc				V_8
	IL_023a:            /*goto IL_01f0;*/goto IL_023c;                              //br.s				IL_01f0
	IL_023c:            goto IL_023e;                                               //br.s				IL_023e
	IL_023e:                                                                        //endfinally
	                    ;}
	IL_023f:                                                                        //ldc.i4.0
	IL_0240:            V_2=false;                                                  //stloc.2
	IL_0241:                                                                        //ldloc.1
	IL_0242:            Temp_0=V_1->Cases;                                          //callvirt				Reflector::CodeModel::ISwitchCaseCollection^ Reflector::CodeModel::ISwitchStatement::get_Cases()
	IL_0247:            Temp_1=safe_cast<System::Collections::IEnumerable^>(Temp_0)->GetEnumerator();//callvirt				System::Collections::IEnumerator^ System::Collections::IEnumerable::GetEnumerator()
	IL_024c:            V_6=Temp_1;                                                 //stloc.s				V_6
	IL_024e:                                                                        //ldc.i4				0x5
	IL_0253:            V_8=5;                                                      //stloc				V_8
	IL_0257:            /*goto IL_0002;*/goto IL_025c;                              //br				IL_0002
	IL_025c:            /*goto IL_00f7;*/goto IL_00F601;                            //br				IL_00f7
	IL_0261:                                                                        //ldloc.s				V_5
	IL_0263:            return V_5;                                                 //ret

}
inline System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IType^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	System::String^ Temp_2 = nullptr;
	System::String^ Temp_3 = nullptr;
	System::Boolean Temp_4 = false;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	//local variables.
	Reflector::CodeModel::ITypeReference^ V_0 = nullptr;
	Reflector::CodeModel::IRequiredModifier^ V_1 = nullptr;
	Reflector::CodeModel::IOptionalModifier^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	System::Int32 V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_4=16;                                                     //stloc				V_4
	IL_0009:            goto IL_002c;                                               //br.s				IL_002c
	IL_000b:                                                                        //ldloc				V_3
	IL_000f:            switch(V_3){case 0:goto IL_003e;case 1:goto IL_006e;case 2:goto IL_004c;case 3:goto IL_0060;case 4:goto IL_00cb;case 5:goto IL_00ba;};//switch				(IL_003e,IL_006e,IL_004c,IL_0060,IL_00cb,IL_00ba)
	IL_002c:                                                                        //ldarg.0
	IL_002d:                                                                        //isinst				Reflector::CodeModel::ITypeReference
	IL_0032:            V_0=dynamic_cast<Reflector::CodeModel::ITypeReference^>(A_0);//stloc.0
	IL_0033:                                                                        //ldc.i4				0x0
	IL_0038:            V_3=0;                                                      //stloc				V_3
	IL_003c:            /*goto IL_000b;*/goto IL_003e;                              //br.s				IL_000b
	IL_003e:                                                                        //ldloc.0
	IL_003f:            if(V_0==nullptr)goto IL_00a2;                               //brfalse.s				IL_00a2
	IL_0041:                                                                        //ldc.i4				0x2
	IL_0046:            V_3=2;                                                      //stloc				V_3
	IL_004a:            /*goto IL_000b;*/goto IL_004c;                              //br.s				IL_000b
	IL_004c:            goto IL_007c;                                               //br.s				IL_007c
	IL_004e:                                                                        //ldarg.0
	IL_004f:                                                                        //isinst				Reflector::CodeModel::IOptionalModifier
	IL_0054:            V_2=dynamic_cast<Reflector::CodeModel::IOptionalModifier^>(A_0);//stloc.2
	IL_0055:                                                                        //ldc.i4				0x3
	IL_005a:            V_3=3;                                                      //stloc				V_3
	IL_005e:            /*goto IL_000b;*/goto IL_0060;                              //br.s				IL_000b
	IL_0060:                                                                        //ldloc.2
	IL_0061:            if(V_2==nullptr)goto IL_00cd;                               //brfalse.s				IL_00cd
	IL_0063:                                                                        //ldc.i4				0x1
	IL_0068:            V_3=1;                                                      //stloc				V_3
	IL_006c:            /*goto IL_000b;*/goto IL_006e;                              //br.s				IL_000b
	IL_006e:            goto IL_0096;                                               //br.s				IL_0096
	IL_0070:                                                                        //ldloc.1
	IL_0071:            Temp_5=V_1->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IRequiredModifier::get_ElementType()
	IL_0076:            Temp_6=Root::T_x183::M_x13(Temp_5);                         //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_007b:            return Temp_6;                                              //ret
	IL_007c:                                                                        //ldloc.0
	IL_007d:            Temp_2=V_0->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0082:                                                                        //ldstr				L"\x7D2D\x492F\x4131\x4033\x5335\x5537"
	IL_0087:                                                                        //ldloc				V_4
	IL_008b:            Temp_3=a(L"\x7D2D\x492F\x4131\x4033\x5335\x5537",V_4);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0090:            Temp_4=(Temp_2 == Temp_3);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0095:            return Temp_4;                                              //ret
	IL_0096:                                                                        //ldloc.2
	IL_0097:            Temp_0=V_2->ElementType;                                    //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::IOptionalModifier::get_ElementType()
	IL_009c:            Temp_1=Root::T_x183::M_x13(Temp_0);                         //call				System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::IType^)
	IL_00a1:            return Temp_1;                                              //ret
	IL_00a2:                                                                        //ldarg.0
	IL_00a3:                                                                        //isinst				Reflector::CodeModel::IRequiredModifier
	IL_00a8:            V_1=dynamic_cast<Reflector::CodeModel::IRequiredModifier^>(A_0);//stloc.1
	IL_00a9:            goto IL_00ac;                                               //br.s				IL_00ac
	IL_00ab:                                                                        //break
	IL_00ac:                                                                        //ldc.i4				0x5
	IL_00b1:            V_3=5;                                                      //stloc				V_3
	IL_00b5:            /*goto IL_000b;*/goto IL_00ba;                              //br				IL_000b
	IL_00ba:                                                                        //ldloc.1
	IL_00bb:            if(V_1==nullptr)goto IL_004e;                               //brfalse.s				IL_004e
	IL_00bd:                                                                        //ldc.i4				0x4
	IL_00c2:            V_3=4;                                                      //stloc				V_3
	IL_00c6:            /*goto IL_000b;*/goto IL_00cb;                              //br				IL_000b
	IL_00cb:            goto IL_0070;                                               //br.s				IL_0070
	IL_00cd:                                                                        //ldc.i4.0
	IL_00ce:            return false;                                               //ret

}
inline System::Boolean Root::T_x183::M_x13(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeReference^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::Boolean Temp_6 = false;
	System::String^ Temp_7 = nullptr;
	System::String^ Temp_8 = nullptr;
	System::Boolean Temp_9 = false;
	Reflector::CodeModel::ITypeDeclaration^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::Boolean Temp_13 = false;
	System::String^ Temp_14 = nullptr;
	System::String^ Temp_15 = nullptr;
	System::Boolean Temp_16 = false;
	System::String^ Temp_17 = nullptr;
	System::String^ Temp_18 = nullptr;
	System::Boolean Temp_19 = false;
	//local variables.
	Reflector::CodeModel::ITypeDeclaration^ V_0 = nullptr;
	Reflector::CodeModel::ITypeReference^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x0
	IL_0005:            V_3=0;                                                      //stloc				V_3
	IL_0009:                                                                        //ldc.i4				0x8
	IL_000e:            V_2=8;                                                      //stloc				V_2
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_005f;                                               //br.s				IL_005f
	IL_0016:                                                                        //ldloc				V_2
	IL_001a:            switch(V_2){case 0:goto IL_021f;case 1:goto IL_018b;case 2:goto IL_01e3;case 3:goto IL_01f4;case 4:goto IL_0080;case 5:goto IL_00ca;case 6:goto IL_0162;case 7:goto IL_00b7;case 8:goto IL_0014;case 9:goto IL_00f6;case 10:goto IL_0070;case 11:goto IL_0135;case 12:goto IL_01c7;case 13:goto IL_020e;case 14:goto IL_019e;case 15:goto IL_0109;};//switch				(IL_021f,IL_018b,IL_01e3,IL_01f4,IL_0080,IL_00ca,IL_0162,IL_00b7,IL_0014,IL_00f6,IL_0070,IL_0135,IL_01c7,IL_020e,IL_019e,IL_0109)
	IL_005f:                                                                        //ldarg.0
	IL_0060:            if(A_0==nullptr)goto IL_0221;                               //brfalse				IL_0221
	IL_0065:                                                                        //ldc.i4				0xa
	IL_006a:            V_2=10;                                                     //stloc				V_2
	IL_006e:            /*goto IL_0016;*/goto IL_0070;                              //br.s				IL_0016
	IL_0070:            goto IL_0154;                                               //br				IL_0154
	IL_0075:                                                                        //ldc.i4				0x4
	IL_007a:            V_2=4;                                                      //stloc				V_2
	IL_007e:            /*goto IL_0016;*/goto IL_0080;                              //br.s				IL_0016
	IL_0080:                                                                        //ldc.i4.2
	IL_0081:                                                                        //dup
	IL_0082:                                                                        //dup
	IL_0083:                                                                        //ldc.i4.2
	IL_0084:                                                                        //add
	IL_0085:                                                                        //bgt				IL_0081
	IL_008a:                                                                        //pop
	IL_008b:                                                                        //ldloc.1
	IL_008c:            Temp_1=V_1->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0091:                                                                        //ldstr				L"\x5A1D\x451F\x4E21\x4123\x4125\x4927\x5E29\x492B"
	IL_0096:                                                                        //ldloc				V_3
	IL_009a:            Temp_2=a(L"\x5A1D\x451F\x4E21\x4123\x4125\x4927\x5E29\x492B",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_009f:            Temp_3=(Temp_1 == Temp_2);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00a4:            if(!Temp_3)goto IL_01cc;                                    //brfalse				IL_01cc
	IL_00a9:                                                                        //ldc.i4				0x7
	IL_00ae:            V_2=7;                                                      //stloc				V_2
	IL_00b2:            /*goto IL_0016;*/goto IL_00b7;                              //br				IL_0016
	IL_00b7:            goto IL_013a;                                               //br				IL_013a
	IL_00bc:                                                                        //ldc.i4				0x5
	IL_00c1:            V_2=5;                                                      //stloc				V_2
	IL_00c5:            /*goto IL_0016;*/goto IL_00ca;                              //br				IL_0016
	IL_00ca:                                                                        //ldloc.1
	IL_00cb:            Temp_4=V_1->Namespace;                                      //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_00d0:                                                                        //ldstr				L"\x4D1D\x591F\x5121\x5023\x4325\x4527"
	IL_00d5:                                                                        //ldloc				V_3
	IL_00d9:            Temp_5=a(L"\x4D1D\x591F\x5121\x5023\x4325\x4527",V_3);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00de:            Temp_6=(Temp_4 == Temp_5);                                  //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_00e3:            if(!Temp_6)goto IL_01cc;                                    //brfalse				IL_01cc
	IL_00e8:                                                                        //ldc.i4				0x9
	IL_00ed:            V_2=9;                                                      //stloc				V_2
	IL_00f1:            /*goto IL_0016;*/goto IL_00f6;                              //br				IL_0016
	IL_00f6:            goto IL_0190;                                               //br				IL_0190
	IL_00fb:                                                                        //ldc.i4				0xf
	IL_0100:            V_2=15;                                                     //stloc				V_2
	IL_0104:            /*goto IL_0016;*/goto IL_0109;                              //br				IL_0016
	IL_0109:                                                                        //ldarg.0
	IL_010a:            Temp_17=A_0->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_010f:                                                                        //ldstr				L"\x4D1D\x591F\x5121\x5023\x4325\x4527"
	IL_0114:                                                                        //ldloc				V_3
	IL_0118:            Temp_18=a(L"\x4D1D\x591F\x5121\x5023\x4325\x4527",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011d:            Temp_19=(Temp_17 != Temp_18);                               //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_0122:            if(!Temp_19)goto IL_0221;                                   //brfalse				IL_0221
	IL_0127:                                                                        //ldc.i4				0xb
	IL_012c:            V_2=11;                                                     //stloc				V_2
	IL_0130:            /*goto IL_0016;*/goto IL_0135;                              //br				IL_0016
	IL_0135:            goto IL_01f9;                                               //br				IL_01f9
	IL_013a:                                                                        //ldloc.1
	IL_013b:            Temp_11=V_1->Namespace;                                     //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Namespace()
	IL_0140:                                                                        //ldstr				L"\x4D1D\x591F\x5121\x5023\x4325\x4527"
	IL_0145:                                                                        //ldloc				V_3
	IL_0149:            Temp_12=a(L"\x4D1D\x591F\x5121\x5023\x4325\x4527",V_3);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_014e:            Temp_13=(Temp_11 == Temp_12);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_0153:            return Temp_13;                                             //ret
	IL_0154:                                                                        //ldc.i4				0x6
	IL_0159:            V_2=6;                                                      //stloc				V_2
	IL_015d:            /*goto IL_0016;*/goto IL_0162;                              //br				IL_0016
	IL_0162:                                                                        //ldarg.0
	IL_0163:            Temp_7=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0168:                                                                        //ldstr				L"\x531D\x551F\x4E21\x5023\x4F25\x4B27\x4B29\x5F2B\x5A2D\x742F\x5731\x5833\x5335\x5F37\x5B39\x483B\x5B3D"
	IL_016d:                                                                        //ldloc				V_3
	IL_0171:            Temp_8=a(L"\x531D\x551F\x4E21\x5023\x4F25\x4B27\x4B29\x5F2B\x5A2D\x742F\x5731\x5833\x5335\x5F37\x5B39\x483B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0176:            Temp_9=(Temp_7 != Temp_8);                                  //call				System::Boolean System::String::op_Inequality(System::String^,System::String^)
	IL_017b:            if(Temp_9)goto IL_01f9;                                     //brtrue.s				IL_01f9
	IL_017d:                                                                        //ldc.i4				0x1
	IL_0182:            V_2=1;                                                      //stloc				V_2
	IL_0186:            /*goto IL_0016;*/goto IL_018b;                              //br				IL_0016
	IL_018b:            goto IL_00fb;                                               //br				IL_00fb
	IL_0190:                                                                        //ldc.i4				0xe
	IL_0195:            V_2=14;                                                     //stloc				V_2
	IL_0199:            /*goto IL_0016;*/goto IL_019e;                              //br				IL_0016
	IL_019e:                                                                        //ldloc.1
	IL_019f:            Temp_14=V_1->Name;                                          //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_01a4:                                                                        //ldstr				L"\x531D\x551F\x4E21\x5023\x4F25\x4B27\x4B29\x5F2B\x5A2D\x742F\x5731\x5833\x5335\x5F37\x5B39\x483B\x5B3D"
	IL_01a9:                                                                        //ldloc				V_3
	IL_01ad:            Temp_15=a(L"\x531D\x551F\x4E21\x5023\x4F25\x4B27\x4B29\x5F2B\x5A2D\x742F\x5731\x5833\x5335\x5F37\x5B39\x483B\x5B3D",V_3);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01b2:            Temp_16=(Temp_14 == Temp_15);                               //call				System::Boolean System::String::op_Equality(System::String^,System::String^)
	IL_01b7:            if(Temp_16)goto IL_013a;                                    //brtrue.s				IL_013a
	IL_01b9:                                                                        //ldc.i4				0xc
	IL_01be:            V_2=12;                                                     //stloc				V_2
	IL_01c2:            /*goto IL_0016;*/goto IL_01c7;                              //br				IL_0016
	IL_01c7:            goto IL_0075;                                               //br				IL_0075
	IL_01cc:                                                                        //ldc.i4.0
	IL_01cd:            return false;                                               //ret
	IL_01ce:                                                                        //ldloc.0
	IL_01cf:            Temp_0=V_0->BaseType;                                       //callvirt				Reflector::CodeModel::ITypeReference^ Reflector::CodeModel::ITypeDeclaration::get_BaseType()
	IL_01d4:            V_1=Temp_0;                                                 //stloc.1
	IL_01d5:                                                                        //ldc.i4				0x2
	IL_01da:            V_2=2;                                                      //stloc				V_2
	IL_01de:            /*goto IL_0016;*/goto IL_01e3;                              //br				IL_0016
	IL_01e3:                                                                        //ldloc.1
	IL_01e4:            if(V_1==nullptr)goto IL_01cc;                               //brfalse.s				IL_01cc
	IL_01e6:                                                                        //ldc.i4				0x3
	IL_01eb:            V_2=3;                                                      //stloc				V_2
	IL_01ef:            /*goto IL_0016;*/goto IL_01f4;                              //br				IL_0016
	IL_01f4:            goto IL_00bc;                                               //br				IL_00bc
	IL_01f9:                                                                        //ldarg.0
	IL_01fa:            Temp_10=A_0->Resolve();                                     //callvirt				Reflector::CodeModel::ITypeDeclaration^ Reflector::CodeModel::ITypeReference::Resolve()
	IL_01ff:            V_0=Temp_10;                                                //stloc.0
	IL_0200:                                                                        //ldc.i4				0xd
	IL_0205:            V_2=13;                                                     //stloc				V_2
	IL_0209:            /*goto IL_0016;*/goto IL_020e;                              //br				IL_0016
	IL_020e:                                                                        //ldloc.0
	IL_020f:            if(V_0==nullptr)goto IL_0221;                               //brfalse.s				IL_0221
	IL_0211:                                                                        //ldc.i4				0x0
	IL_0216:            V_2=0;                                                      //stloc				V_2
	IL_021a:            /*goto IL_0016;*/goto IL_021f;                              //br				IL_0016
	IL_021f:            goto IL_01ce;                                               //br.s				IL_01ce
	IL_0221:                                                                        //ldc.i4.0
	IL_0222:            return false;                                               //ret

}
inline System::Int32 Root::T_x183::M_x2(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IStatementCollection^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	Reflector::CodeModel::IStatementCollection^ Temp_2 = nullptr;
	Reflector::CodeModel::IStatement^ Temp_3 = nullptr;
	//local variables.
	System::Int32 V_0 = 0;
	Reflector::CodeModel::ILabeledStatement^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:            goto IL_0023;                                               //br.s				IL_0023
	IL_0002:                                                                        //ldloc				V_2
	IL_0006:            switch(V_2){case 0:goto IL_0070;case 1:goto IL_009c;case 2:goto IL_0041;case 3:goto IL_0080;case 4:goto IL_0062;case 5:goto IL_0030;};//switch				(IL_0070,IL_009c,IL_0041,IL_0080,IL_0062,IL_0030)
	IL_0023:                                                                        //ldarg.1
	IL_0024:            V_0=A_1;                                                    //stloc.0
	IL_0025:                                                                        //ldc.i4				0x5
	IL_002a:            V_2=5;                                                      //stloc				V_2
	IL_002e:            /*goto IL_0002;*/goto IL_0030;                              //br.s				IL_0002
	IL_0030:            goto IL_0072;                                               //br.s				IL_0072
	IL_0032:                                                                        //ldloc.0
	IL_0033:                                                                        //ldc.i4.1
	IL_0034:                                                                        //add
	IL_0035:            V_0=(V_0 + 1);                                              //stloc.0
	IL_0036:                                                                        //ldc.i4				0x2
	IL_003b:            V_2=2;                                                      //stloc				V_2
	IL_003f:            /*goto IL_0002;*/goto IL_0041;                              //br.s				IL_0002
	IL_0041:            goto IL_0072;                                               //br.s				IL_0072
	IL_0043:                                                                        //ldloc.0
	IL_0044:            return V_0;                                                 //ret
	IL_0045:                                                                        //ldarg.0
	IL_0046:            Temp_2=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_004b:                                                                        //ldloc.0
	IL_004c:            Temp_3=Temp_2[V_0];                                         //callvirt				Reflector::CodeModel::IStatement^ Reflector::CodeModel::IStatementCollection::get_Item(System::Int32)
	IL_0051:                                                                        //isinst				Reflector::CodeModel::ILabeledStatement
	IL_0056:            V_1=dynamic_cast<Reflector::CodeModel::ILabeledStatement^>(Temp_3);//stloc.1
	IL_0057:                                                                        //ldc.i4				0x4
	IL_005c:            V_2=4;                                                      //stloc				V_2
	IL_0060:            /*goto IL_0002;*/goto IL_0062;                              //br.s				IL_0002
	IL_0062:                                                                        //ldloc.1
	IL_0063:            if(V_1==nullptr)goto IL_0032;                               //brfalse.s				IL_0032
	IL_0065:                                                                        //ldc.i4				0x0
	IL_006a:            V_2=0;                                                      //stloc				V_2
	IL_006e:            /*goto IL_0002;*/goto IL_0070;                              //br.s				IL_0002
	IL_0070:            goto IL_0043;                                               //br.s				IL_0043
	IL_0072:            goto IL_0075;                                               //br.s				IL_0075
	IL_0074:                                                                        //break
	IL_0075:                                                                        //ldc.i4				0x3
	IL_007a:            V_2=3;                                                      //stloc				V_2
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:                                                                        //ldloc.0
	IL_0081:                                                                        //ldarg.0
	IL_0082:            Temp_0=A_0->Statements;                                     //callvirt				Reflector::CodeModel::IStatementCollection^ Reflector::CodeModel::IBlockStatement::get_Statements()
	IL_0087:            Temp_1=safe_cast<System::Collections::ICollection^>(Temp_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_008c:            if(V_0<Temp_1)goto IL_0045;                                 //blt.s				IL_0045
	IL_008e:                                                                        //ldc.i4				0x1
	IL_0093:            V_2=1;                                                      //stloc				V_2
	IL_0097:            /*goto IL_0002;*/goto IL_009c;                              //br				IL_0002
	IL_009c:            goto IL_009e;                                               //br.s				IL_009e
	IL_009e:                                                                        //ldc.i4.m1
	IL_009f:            return -1;                                                  //ret

}
inline System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	System::Boolean Temp_1 = false;
	Reflector::CodeModel::IExpression^ Temp_2 = nullptr;
	System::Boolean Temp_3 = false;
	System::Boolean Temp_4 = false;
	//local variables.
	Reflector::CodeModel::ILiteralExpression^ V_0 = nullptr;
	Reflector::CodeModel::IBinaryExpression^ V_1 = nullptr;
	Reflector::CodeModel::IFieldReferenceExpression^ V_2 = nullptr;
	System::Int32 V_3 = 0;
	//method body ------- 
	IL_0000:            goto IL_003b;                                               //br.s				IL_003b
	IL_0002:                                                                        //ldloc				V_3
	IL_0006:            switch(V_3){case 0:goto IL_004d;case 1:goto IL_006f;case 2:goto IL_00b5;case 3:goto IL_0099;case 4:goto IL_005b;case 5:goto IL_0080;case 6:goto IL_010d;case 7:goto IL_013e;case 8:goto IL_00ef;case 9:goto IL_0120;case 10:goto IL_00c9;case 11:goto IL_00df;};//switch				(IL_004d,IL_006f,IL_00b5,IL_0099,IL_005b,IL_0080,IL_010d,IL_013e,IL_00ef,IL_0120,IL_00c9,IL_00df)
	IL_003b:                                                                        //ldarg.0
	IL_003c:                                                                        //isinst				Reflector::CodeModel::ILiteralExpression
	IL_0041:            V_0=dynamic_cast<Reflector::CodeModel::ILiteralExpression^>(A_0);//stloc.0
	IL_0042:                                                                        //ldc.i4				0x0
	IL_0047:            V_3=0;                                                      //stloc				V_3
	IL_004b:            /*goto IL_0002;*/goto IL_004d;                              //br.s				IL_0002
	IL_004d:                                                                        //ldloc.0
	IL_004e:            if(V_0==nullptr)goto IL_0084;                               //brfalse.s				IL_0084
	IL_0050:                                                                        //ldc.i4				0x4
	IL_0055:            V_3=4;                                                      //stloc				V_3
	IL_0059:            /*goto IL_0002;*/goto IL_005b;                              //br.s				IL_0002
	IL_005b:            goto IL_00b9;                                               //br.s				IL_00b9
	IL_005d:                                                                        //ldarg.0
	IL_005e:                                                                        //isinst				Reflector::CodeModel::IFieldReferenceExpression
	IL_0063:            V_2=dynamic_cast<Reflector::CodeModel::IFieldReferenceExpression^>(A_0);//stloc.2
	IL_0064:                                                                        //ldc.i4				0x1
	IL_0069:            V_3=1;                                                      //stloc				V_3
	IL_006d:            /*goto IL_0002;*/goto IL_006f;                              //br.s				IL_0002
	IL_006f:                                                                        //ldloc.2
	IL_0070:            if(V_2==nullptr)goto IL_0140;                               //brfalse				IL_0140
	IL_0075:                                                                        //ldc.i4				0x5
	IL_007a:            V_3=5;                                                      //stloc				V_3
	IL_007e:            /*goto IL_0002;*/goto IL_0080;                              //br.s				IL_0002
	IL_0080:            goto IL_00bb;                                               //br.s				IL_00bb
	IL_0082:                                                                        //ldc.i4.1
	IL_0083:            return true;                                                //ret
	IL_0084:                                                                        //ldarg.0
	IL_0085:                                                                        //isinst				Reflector::CodeModel::IBinaryExpression
	IL_008a:            V_1=dynamic_cast<Reflector::CodeModel::IBinaryExpression^>(A_0);//stloc.1
	IL_008b:                                                                        //ldc.i4				0x3
	IL_0090:            V_3=3;                                                      //stloc				V_3
	IL_0094:            /*goto IL_0002;*/goto IL_0099;                              //br				IL_0002
	IL_0099:                                                                        //ldloc.1
	IL_009a:            if(V_1==nullptr)goto IL_005d;                               //brfalse.s				IL_005d
	IL_009c:                                                                        //ldc.i4.2
	IL_009d:                                                                        //dup
	IL_009e:                                                                        //dup
	IL_009f:                                                                        //ldc.i4.7
	IL_00a0:                                                                        //add
	IL_00a1:                                                                        //bgt				IL_009d
	IL_00a6:                                                                        //pop
	IL_00a7:                                                                        //ldc.i4				0x2
	IL_00ac:            V_3=2;                                                      //stloc				V_3
	IL_00b0:            /*goto IL_0002;*/goto IL_00b5;                              //br				IL_0002
	IL_00b5:            goto IL_0112;                                               //br.s				IL_0112
	IL_00b7:                                                                        //ldc.i4.1
	IL_00b8:            return true;                                                //ret
	IL_00b9:                                                                        //ldc.i4.1
	IL_00ba:            return true;                                                //ret
	IL_00bb:                                                                        //ldc.i4				0xa
	IL_00c0:            V_3=10;                                                     //stloc				V_3
	IL_00c4:            /*goto IL_0002;*/goto IL_00c9;                              //br				IL_0002
	IL_00c9:                                                                        //ldloc.2
	IL_00ca:            Temp_4=Root::T_x183::M_x1(V_2);                             //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IFieldReferenceExpression^)
	IL_00cf:            if(!Temp_4)goto IL_0140;                                    //brfalse.s				IL_0140
	IL_00d1:                                                                        //ldc.i4				0xb
	IL_00d6:            V_3=11;                                                     //stloc				V_3
	IL_00da:            /*goto IL_0002;*/goto IL_00df;                              //br				IL_0002
	IL_00df:            goto IL_00b7;                                               //br.s				IL_00b7
	IL_00e1:                                                                        //ldc.i4				0x8
	IL_00e6:            V_3=8;                                                      //stloc				V_3
	IL_00ea:            /*goto IL_0002;*/goto IL_00ef;                              //br				IL_0002
	IL_00ef:                                                                        //ldloc.1
	IL_00f0:            Temp_0=V_1->Right;                                          //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Right()
	IL_00f5:            Temp_1=Root::T_x183::M_x2(Temp_0);                          //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^)
	IL_00fa:            if(!Temp_1)goto IL_005d;                                    //brfalse				IL_005d
	IL_00ff:                                                                        //ldc.i4				0x6
	IL_0104:            V_3=6;                                                      //stloc				V_3
	IL_0108:            /*goto IL_0002;*/goto IL_010d;                              //br				IL_0002
	IL_010d:            goto IL_0082;                                               //br				IL_0082
	IL_0112:                                                                        //ldc.i4				0x9
	IL_0117:            V_3=9;                                                      //stloc				V_3
	IL_011b:            /*goto IL_0002;*/goto IL_0120;                              //br				IL_0002
	IL_0120:                                                                        //ldloc.1
	IL_0121:            Temp_2=V_1->Left;                                           //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IBinaryExpression::get_Left()
	IL_0126:            Temp_3=Root::T_x183::M_x2(Temp_2);                          //call				System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IExpression^)
	IL_012b:            if(!Temp_3)goto IL_005d;                                    //brfalse				IL_005d
	IL_0130:                                                                        //ldc.i4				0x7
	IL_0135:            V_3=7;                                                      //stloc				V_3
	IL_0139:            /*goto IL_0002;*/goto IL_013e;                              //br				IL_0002
	IL_013e:            goto IL_00e1;                                               //br.s				IL_00e1
	IL_0140:                                                                        //ldc.i4.0
	IL_0141:            return false;                                               //ret

}
inline Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x2(Reflector::CodeModel::IGotoStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ILabeledStatement^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::String^ Temp_2 = nullptr;
	array<System::Object^>^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::String^ Temp_5 = nullptr;
	System::NotSupportedException^ Temp_6 = nullptr;
	//local variables.
	Reflector::CodeModel::ILabeledStatement^ V_0 = nullptr;
	array<System::Object^>^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x10
	IL_0005:            V_2=16;                                                     //stloc				V_2
	IL_0009:                                                                        //ldc.i4.6
	IL_000a:                                                                        //dup
	IL_000b:                                                                        //dup
	IL_000c:                                                                        //ldc.i4.2
	IL_000d:                                                                        //sub
	IL_000e:                                                                        //blt				IL_000a
	IL_0013:                                                                        //pop
	IL_0014:                                                                        //ldarg.0
	IL_0015:                                                                        //ldarg.1
	IL_0016:            Temp_0=Root::T_x183::M_x1(A_0,A_1);                         //call				Reflector::CodeModel::ILabeledStatement^ Root::T_x183::M_x1(Reflector::CodeModel::IGotoStatement^,Reflector::CodeModel::IBlockStatement^)
	IL_001b:            V_0=Temp_0;                                                 //stloc.0
	IL_001c:                                                                        //ldloc.0
	IL_001d:            if(V_0==nullptr)goto IL_0023;                               //brfalse.s				IL_0023
	IL_001f:            goto IL_0021;                                               //br.s				IL_0021
	IL_0021:                                                                        //ldloc.0
	IL_0022:            return V_0;                                                 //ret
	IL_0023:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_0028:                                                                        //ldstr				L"\x6D2D\x512F\x5C31\x5A33\x5935\x4C37\x1A39\x4E3B\x5B3D\x333F\x2D41\x2843\x3045\x2D47\x6A49\x2B4B\x214D\x244F\x3D51\x7453\x2555\x2C57\x3B59\x285B\x3B5D\x0D5F\x0761\x0A63\x1265\x4867\x1E69\x036B\x4E6D\x1C6F\x1371\x1673\x1375\x1477\x5A79\x5B7B\x057D\xB07F\xFF81\xA383\xA885"
	IL_002d:                                                                        //ldloc				V_2
	IL_0031:            Temp_2=a(L"\x6D2D\x512F\x5C31\x5A33\x5935\x4C37\x1A39\x4E3B\x5B3D\x333F\x2D41\x2843\x3045\x2D47\x6A49\x2B4B\x214D\x244F\x3D51\x7453\x2555\x2C57\x3B59\x285B\x3B5D\x0D5F\x0761\x0A63\x1265\x4867\x1E69\x036B\x4E6D\x1C6F\x1371\x1673\x1375\x1477\x5A79\x5B7B\x057D\xB07F\xFF81\xA383\xA885",V_2);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0036:                                                                        //ldc.i4.1
	IL_0037:            Temp_3=gcnew array<System::Object^>(1);                     //newarr				System::Object
	IL_003c:            V_1=Temp_3;                                                 //stloc.1
	IL_003d:                                                                        //ldloc.1
	IL_003e:                                                                        //ldc.i4.0
	IL_003f:                                                                        //ldarg.0
	IL_0040:            Temp_4=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::IGotoStatement::get_Name()
	IL_0045:            V_1[0]=safe_cast<System::Object^>(Temp_4);                  //stelem.ref
	IL_0046:                                                                        //ldloc.1
	IL_0047:            Temp_5=System::String::Format(safe_cast<System::IFormatProvider^>(Temp_1),Temp_2,V_1);//call				System::String^ System::String::Format(System::IFormatProvider^,System::String^,array<System::Object^>^)
	IL_004c:            Temp_6=gcnew System::NotSupportedException(Temp_5);         //newobj				void System::NotSupportedException::.ctor(System::String^)
	IL_0051:            throw Temp_6;                                               //throw

}
inline Reflector::CodeModel::IAssignExpression^ Root::T_x183::M_x2(Reflector::CodeModel::IStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IExpression^ Temp_0 = nullptr;
	//local variables.
	Reflector::CodeModel::IExpressionStatement^ V_0 = nullptr;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:                                                                        //isinst				Reflector::CodeModel::IExpressionStatement
	IL_0006:            V_0=dynamic_cast<Reflector::CodeModel::IExpressionStatement^>(A_0);//stloc.0
	IL_0007:                                                                        //ldloc.0
	IL_0008:            if(V_0==nullptr)goto IL_001b;                               //brfalse.s				IL_001b
	IL_000a:            goto IL_000d;                                               //br.s				IL_000d
	IL_000c:                                                                        //break
	IL_000d:            goto IL_000f;                                               //br.s				IL_000f
	IL_000f:                                                                        //ldloc.0
	IL_0010:            Temp_0=V_0->Expression;                                     //callvirt				Reflector::CodeModel::IExpression^ Reflector::CodeModel::IExpressionStatement::get_Expression()
	IL_0015:                                                                        //isinst				Reflector::CodeModel::IAssignExpression
	IL_001a:            return dynamic_cast<Reflector::CodeModel::IAssignExpression^>(Temp_0);//ret
	IL_001b:                                                                        //ldnull
	IL_001c:            return nullptr;                                             //ret

}
inline System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::ISwitchStatement^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::IDefaultCase^ Temp_0 = nullptr;
	//local variables.
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=Root::T_x183::M_x1(A_0);                             //call				Reflector::CodeModel::IDefaultCase^ Root::T_x183::M_x1(Reflector::CodeModel::ISwitchStatement^)
	IL_0006:                                                                        //ldnull
	IL_0007:                                                                        //ceq
	IL_0009:                                                                        //ldc.i4.0
	IL_000a:                                                                        //ceq
	IL_000c:            return ((Temp_0 == safe_cast<Reflector::CodeModel::IDefaultCase^>(nullptr)) == false);//ret

}
inline System::Boolean Root::T_x183::M_x2(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	System::String^ Temp_3 = nullptr;
	System::String^ Temp_4 = nullptr;
	System::Boolean Temp_5 = false;
	System::String^ Temp_6 = nullptr;
	System::String^ Temp_7 = nullptr;
	System::Boolean Temp_8 = false;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::Boolean Temp_11 = false;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	System::Boolean Temp_14 = false;
	System::String^ Temp_15 = nullptr;
	System::String^ Temp_16 = nullptr;
	System::Boolean Temp_17 = false;
	System::String^ Temp_18 = nullptr;
	System::String^ Temp_19 = nullptr;
	System::Boolean Temp_20 = false;
	System::String^ Temp_21 = nullptr;
	System::String^ Temp_22 = nullptr;
	System::Boolean Temp_23 = false;
	System::String^ Temp_24 = nullptr;
	System::String^ Temp_25 = nullptr;
	System::Boolean Temp_26 = false;
	System::String^ Temp_27 = nullptr;
	System::String^ Temp_28 = nullptr;
	System::Boolean Temp_29 = false;
	System::String^ Temp_30 = nullptr;
	System::String^ Temp_31 = nullptr;
	System::Boolean Temp_32 = false;
	//local variables.
	System::Int32 V_0 = 0;
	System::Int32 V_1 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xe
	IL_0005:            V_1=14;                                                     //stloc				V_1
	IL_0009:                                                                        //ldc.i4				0xd
	IL_000e:            V_0=13;                                                     //stloc				V_0
	IL_0012:            /*goto IL_0016;*/goto IL_0014;                              //br.s				IL_0016
	IL_0014:            goto IL_0077;                                               //br.s				IL_0077
	IL_0016:                                                                        //ldloc				V_0
	IL_001a:            switch(V_0){case 0:goto IL_021f;case 1:goto IL_00ac;case 2:goto IL_0111;case 3:goto IL_00cc;case 4:goto IL_027a;case 5:goto IL_0341;case 6:goto IL_01d5;case 7:goto IL_0354;case 8:goto IL_0146;case 9:goto IL_01ea;case 10:goto IL_0386;case 11:goto IL_0267;case 12:goto IL_018b;case 13:goto IL_0014;case 14:goto IL_01a0;case 15:goto IL_00fe;case 16:goto IL_030c;case 17:goto IL_0159;case 18:goto IL_02c2;case 19:goto IL_02af;case 20:goto IL_02f7;case 21:goto IL_0232;};//switch				(IL_021f,IL_00ac,IL_0111,IL_00cc,IL_027a,IL_0341,IL_01d5,IL_0354,IL_0146,IL_01ea,IL_0386,IL_0267,IL_018b,IL_0014,IL_01a0,IL_00fe,IL_030c,IL_0159,IL_02c2,IL_02af,IL_02f7,IL_0232)
	IL_0077:                                                                        //ldarg.0
	IL_0078:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_007d:                                                                        //ldloc				V_1
	IL_0081:            Temp_30=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0086:                                                                        //ldstr				L"\x7F2B\x6C2D\x492F\x4631\x5133"
	IL_008b:                                                                        //ldloc				V_1
	IL_008f:            Temp_31=a(L"\x7F2B\x6C2D\x492F\x4631\x5133",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0094:            Temp_32=Root::T_x183::M_x1(A_0,Temp_30,Temp_31);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0099:            if(Temp_32)goto IL_0190;                                    //brtrue				IL_0190
	IL_009e:                                                                        //ldc.i4				0x1
	IL_00a3:            V_0=1;                                                      //stloc				V_0
	IL_00a7:            /*goto IL_0016;*/goto IL_00ac;                              //br				IL_0016
	IL_00ac:            goto IL_02fe;                                               //br				IL_02fe
	IL_00b1:                                                                        //ldc.i4.3
	IL_00b2:                                                                        //dup
	IL_00b3:                                                                        //dup
	IL_00b4:                                                                        //ldc.i4.3
	IL_00b5:                                                                        //sub
	IL_00b6:                                                                        //blt				IL_00b2
	IL_00bb:                                                                        //pop
	IL_00bc:                                                                        //ldc.i4.1
	IL_00bd:            return true;                                                //ret
	IL_00be:                                                                        //ldc.i4				0x3
	IL_00c3:            V_0=3;                                                      //stloc				V_0
	IL_00c7:            /*goto IL_0016;*/goto IL_00cc;                              //br				IL_0016
	IL_00cc:                                                                        //ldarg.0
	IL_00cd:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_00d2:                                                                        //ldloc				V_1
	IL_00d6:            Temp_3=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00db:                                                                        //ldstr				L"\x652B\x402D\x442F\x0431\x0033"
	IL_00e0:                                                                        //ldloc				V_1
	IL_00e4:            Temp_4=a(L"\x652B\x402D\x442F\x0431\x0033",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_00e9:            Temp_5=Root::T_x183::M_x1(A_0,Temp_3,Temp_4);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_00ee:            if(Temp_5)goto IL_00b1;                                     //brtrue.s				IL_00b1
	IL_00f0:                                                                        //ldc.i4				0xf
	IL_00f5:            V_0=15;                                                     //stloc				V_0
	IL_00f9:            /*goto IL_0016;*/goto IL_00fe;                              //br				IL_0016
	IL_00fe:            goto IL_0192;                                               //br				IL_0192
	IL_0103:                                                                        //ldc.i4				0x2
	IL_0108:            V_0=2;                                                      //stloc				V_0
	IL_010c:            /*goto IL_0016;*/goto IL_0111;                              //br				IL_0016
	IL_0111:                                                                        //ldarg.0
	IL_0112:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_0117:                                                                        //ldloc				V_1
	IL_011b:            Temp_0=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0120:                                                                        //ldstr				L"\x652B\x402D\x442F\x0331\x0233"
	IL_0125:                                                                        //ldloc				V_1
	IL_0129:            Temp_1=a(L"\x652B\x402D\x442F\x0331\x0233",V_1);            //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_012e:            Temp_2=Root::T_x183::M_x1(A_0,Temp_0,Temp_1);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0133:            if(Temp_2)goto IL_02fc;                                     //brtrue				IL_02fc
	IL_0138:                                                                        //ldc.i4				0x8
	IL_013d:            V_0=8;                                                      //stloc				V_0
	IL_0141:            /*goto IL_0016;*/goto IL_0146;                              //br				IL_0016
	IL_0146:            goto IL_0224;                                               //br				IL_0224
	IL_014b:                                                                        //ldc.i4				0x11
	IL_0150:            V_0=17;                                                     //stloc				V_0
	IL_0154:            /*goto IL_0016;*/goto IL_0159;                              //br				IL_0016
	IL_0159:                                                                        //ldarg.0
	IL_015a:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_015f:                                                                        //ldloc				V_1
	IL_0163:            Temp_21=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0168:                                                                        //ldstr				L"\x682B\x412D\x452F\x5031\x5833\x5335"
	IL_016d:                                                                        //ldloc				V_1
	IL_0171:            Temp_22=a(L"\x682B\x412D\x452F\x5031\x5833\x5335",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0176:            Temp_23=Root::T_x183::M_x1(A_0,Temp_21,Temp_22);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_017b:            if(Temp_23)goto IL_01da;                                    //brtrue.s				IL_01da
	IL_017d:                                                                        //ldc.i4				0xc
	IL_0182:            V_0=12;                                                     //stloc				V_0
	IL_0186:            /*goto IL_0016;*/goto IL_018b;                              //br				IL_0016
	IL_018b:            goto IL_026c;                                               //br				IL_026c
	IL_0190:                                                                        //ldc.i4.1
	IL_0191:            return true;                                                //ret
	IL_0192:                                                                        //ldc.i4				0xe
	IL_0197:            V_0=14;                                                     //stloc				V_0
	IL_019b:            /*goto IL_0016;*/goto IL_01a0;                              //br				IL_0016
	IL_01a0:                                                                        //ldarg.0
	IL_01a1:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_01a6:                                                                        //ldloc				V_1
	IL_01aa:            Temp_15=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01af:                                                                        //ldstr				L"\x792B\x672D\x5E2F\x4631\x0233\x0235"
	IL_01b4:                                                                        //ldloc				V_1
	IL_01b8:            Temp_16=a(L"\x792B\x672D\x5E2F\x4631\x0233\x0235",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01bd:            Temp_17=Root::T_x183::M_x1(A_0,Temp_15,Temp_16);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_01c2:            if(!Temp_17)goto IL_02b4;                                   //brfalse				IL_02b4
	IL_01c7:                                                                        //ldc.i4				0x6
	IL_01cc:            V_0=6;                                                      //stloc				V_0
	IL_01d0:            /*goto IL_0016;*/goto IL_01d5;                              //br				IL_0016
	IL_01d5:            goto IL_00b1;                                               //br				IL_00b1
	IL_01da:                                                                        //ldc.i4.1
	IL_01db:            return true;                                                //ret
	IL_01dc:                                                                        //ldc.i4				0x9
	IL_01e1:            V_0=9;                                                      //stloc				V_0
	IL_01e5:            /*goto IL_0016;*/goto IL_01ea;                              //br				IL_0016
	IL_01ea:                                                                        //ldarg.0
	IL_01eb:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_01f0:                                                                        //ldloc				V_1
	IL_01f4:            Temp_12=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_01f9:                                                                        //ldstr				L"\x792B\x672D\x5E2F\x4631\x0733\x0435"
	IL_01fe:                                                                        //ldloc				V_1
	IL_0202:            Temp_13=a(L"\x792B\x672D\x5E2F\x4631\x0733\x0435",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0207:            Temp_14=Root::T_x183::M_x1(A_0,Temp_12,Temp_13);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_020c:            if(!Temp_14)goto IL_00be;                                   //brfalse				IL_00be
	IL_0211:                                                                        //ldc.i4				0x0
	IL_0216:            V_0=0;                                                      //stloc				V_0
	IL_021a:            /*goto IL_0016;*/goto IL_021f;                              //br				IL_0016
	IL_021f:            goto IL_038b;                                               //br				IL_038b
	IL_0224:                                                                        //ldc.i4				0x15
	IL_0229:            V_0=21;                                                     //stloc				V_0
	IL_022d:            /*goto IL_0016;*/goto IL_0232;                              //br				IL_0016
	IL_0232:                                                                        //ldarg.0
	IL_0233:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_0238:                                                                        //ldloc				V_1
	IL_023c:            Temp_27=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0241:                                                                        //ldstr				L"\x792B\x672D\x5E2F\x4631\x0533\x0035"
	IL_0246:                                                                        //ldloc				V_1
	IL_024a:            Temp_28=a(L"\x792B\x672D\x5E2F\x4631\x0533\x0035",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_024f:            Temp_29=Root::T_x183::M_x1(A_0,Temp_27,Temp_28);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0254:            if(!Temp_29)goto IL_0346;                                   //brfalse				IL_0346
	IL_0259:                                                                        //ldc.i4				0xb
	IL_025e:            V_0=11;                                                     //stloc				V_0
	IL_0262:            /*goto IL_0016;*/goto IL_0267;                              //br				IL_0016
	IL_0267:            goto IL_02fc;                                               //br				IL_02fc
	IL_026c:                                                                        //ldc.i4				0x4
	IL_0271:            V_0=4;                                                      //stloc				V_0
	IL_0275:            /*goto IL_0016;*/goto IL_027a;                              //br				IL_0016
	IL_027a:                                                                        //ldarg.0
	IL_027b:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_0280:                                                                        //ldloc				V_1
	IL_0284:            Temp_6=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0289:                                                                        //ldstr				L"\x682B\x4B2D\x532F\x5B31\x5933\x5735\x5437"
	IL_028e:                                                                        //ldloc				V_1
	IL_0292:            Temp_7=a(L"\x682B\x4B2D\x532F\x5B31\x5933\x5735\x5437",V_1);//call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0297:            Temp_8=Root::T_x183::M_x1(A_0,Temp_6,Temp_7);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_029c:            if(!Temp_8)goto IL_038d;                                    //brfalse				IL_038d
	IL_02a1:                                                                        //ldc.i4				0x13
	IL_02a6:            V_0=19;                                                     //stloc				V_0
	IL_02aa:            /*goto IL_0016;*/goto IL_02af;                              //br				IL_0016
	IL_02af:            goto IL_01da;                                               //br				IL_01da
	IL_02b4:                                                                        //ldc.i4				0x12
	IL_02b9:            V_0=18;                                                     //stloc				V_0
	IL_02bd:            /*goto IL_0016;*/goto IL_02c2;                              //br				IL_0016
	IL_02c2:                                                                        //ldarg.0
	IL_02c3:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_02c8:                                                                        //ldloc				V_1
	IL_02cc:            Temp_24=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02d1:                                                                        //ldstr				L"\x7F2B\x472D\x5E2F\x5531\x5833\x5335"
	IL_02d6:                                                                        //ldloc				V_1
	IL_02da:            Temp_25=a(L"\x7F2B\x472D\x5E2F\x5531\x5833\x5335",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_02df:            Temp_26=Root::T_x183::M_x1(A_0,Temp_24,Temp_25);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_02e4:            if(Temp_26)goto IL_01da;                                    //brtrue				IL_01da
	IL_02e9:                                                                        //ldc.i4				0x14
	IL_02ee:            V_0=20;                                                     //stloc				V_0
	IL_02f2:            /*goto IL_0016;*/goto IL_02f7;                              //br				IL_0016
	IL_02f7:            goto IL_014b;                                               //br				IL_014b
	IL_02fc:                                                                        //ldc.i4.1
	IL_02fd:            return true;                                                //ret
	IL_02fe:                                                                        //ldc.i4				0x10
	IL_0303:            V_0=16;                                                     //stloc				V_0
	IL_0307:            /*goto IL_0016;*/goto IL_030c;                              //br				IL_0016
	IL_030c:                                                                        //ldarg.0
	IL_030d:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_0312:                                                                        //ldloc				V_1
	IL_0316:            Temp_18=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);     //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_031b:                                                                        //ldstr				L"\x6E2B\x572D\x442F\x5731"
	IL_0320:                                                                        //ldloc				V_1
	IL_0324:            Temp_19=a(L"\x6E2B\x572D\x442F\x5731",V_1);                 //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0329:            Temp_20=Root::T_x183::M_x1(A_0,Temp_18,Temp_19);            //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_032e:            if(!Temp_20)goto IL_0103;                                   //brfalse				IL_0103
	IL_0333:                                                                        //ldc.i4				0x5
	IL_0338:            V_0=5;                                                      //stloc				V_0
	IL_033c:            /*goto IL_0016;*/goto IL_0341;                              //br				IL_0016
	IL_0341:            goto IL_0190;                                               //br				IL_0190
	IL_0346:                                                                        //ldc.i4				0x7
	IL_034b:            V_0=7;                                                      //stloc				V_0
	IL_034f:            /*goto IL_0016;*/goto IL_0354;                              //br				IL_0016
	IL_0354:                                                                        //ldarg.0
	IL_0355:                                                                        //ldstr				L"\x7F2B\x572D\x432F\x4631\x5133\x5B35"
	IL_035a:                                                                        //ldloc				V_1
	IL_035e:            Temp_9=a(L"\x7F2B\x572D\x432F\x4631\x5133\x5B35",V_1);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0363:                                                                        //ldstr				L"\x652B\x402D\x442F\x0131\x0633"
	IL_0368:                                                                        //ldloc				V_1
	IL_036c:            Temp_10=a(L"\x652B\x402D\x442F\x0131\x0633",V_1);           //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0371:            Temp_11=Root::T_x183::M_x1(A_0,Temp_9,Temp_10);             //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_0376:            if(Temp_11)goto IL_038b;                                    //brtrue.s				IL_038b
	IL_0378:                                                                        //ldc.i4				0xa
	IL_037d:            V_0=10;                                                     //stloc				V_0
	IL_0381:            /*goto IL_0016;*/goto IL_0386;                              //br				IL_0016
	IL_0386:            goto IL_01dc;                                               //br				IL_01dc
	IL_038b:                                                                        //ldc.i4.1
	IL_038c:            return true;                                                //ret
	IL_038d:                                                                        //ldc.i4.0
	IL_038e:            return false;                                               //ret

}
inline System::String^ Root::T_x183::M_x2(Reflector::CodeModel::ITypeReference^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	Reflector::CodeModel::ITypeCollection^ Temp_0 = nullptr;
	System::Globalization::CultureInfo^ Temp_1 = nullptr;
	System::IO::StringWriter^ Temp_2 = nullptr;
	System::Int32 Temp_3 = 0;
	System::String^ Temp_4 = nullptr;
	Reflector::CodeModel::IType^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::String^ Temp_8 = nullptr;
	System::String^ Temp_9 = nullptr;
	System::String^ Temp_10 = nullptr;
	System::String^ Temp_11 = nullptr;
	System::String^ Temp_12 = nullptr;
	System::String^ Temp_13 = nullptr;
	//local variables.
	Reflector::CodeModel::ITypeCollection^ V_0 = nullptr;
	System::IO::StringWriter^ V_1 = nullptr;
	System::Int32 V_2 = 0;
	Reflector::CodeModel::IType^ V_3 = nullptr;
	System::String^ V_4 = nullptr;
	System::Int32 V_5 = 0;
	System::Int32 V_6 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0xa
	IL_0005:            V_6=10;                                                     //stloc				V_6
	IL_0009:            goto IL_0020;                                               //br.s				IL_0020
	IL_000b:                                                                        //ldloc				V_5
	IL_000f:            switch(V_5){case 0:goto IL_0049;case 1:goto IL_0032;case 2:goto IL_01f9;};//switch				(IL_0049,IL_0032,IL_01f9)
	IL_0020:                                                                        //ldarg.0
	IL_0021:            Temp_0=safe_cast<Reflector::CodeModel::IGenericArgumentProvider^>(A_0)->GenericArguments;//callvirt				Reflector::CodeModel::ITypeCollection^ Reflector::CodeModel::IGenericArgumentProvider::get_GenericArguments()
	IL_0026:            V_0=Temp_0;                                                 //stloc.0
	IL_0027:                                                                        //ldc.i4				0x1
	IL_002c:            V_5=1;                                                      //stloc				V_5
	IL_0030:            /*goto IL_000b;*/goto IL_0032;                              //br.s				IL_000b
	IL_0032:                                                                        //ldloc.0
	IL_0033:            Temp_3=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_0038:                                                                        //ldc.i4.0
	IL_0039:            if(Temp_3<=0)goto IL_01fe;                                  //ble				IL_01fe
	IL_003e:                                                                        //ldc.i4				0x0
	IL_0043:            V_5=0;                                                      //stloc				V_5
	IL_0047:            /*goto IL_000b;*/goto IL_0049;                              //br.s				IL_000b
	IL_0049:            goto IL_01e0;                                               //br				IL_01e0
	IL_004901:          try{
	IL_004e:            goto IL_0085;                                               //br.s				IL_0085
	IL_0050:                                                                        //ldloc				V_5
	IL_0054:            switch(V_5){case 0:goto IL_012f;case 1:goto IL_00be;case 2:goto IL_00ad;case 3:goto IL_0092;case 4:goto IL_014b;case 5:goto IL_00cb;case 6:goto IL_010b;case 7:goto IL_00fa;case 8:goto IL_00e2;case 9:goto IL_018d;case 10:goto IL_009f;};//switch				(IL_012f,IL_00be,IL_00ad,IL_0092,IL_014b,IL_00cb,IL_010b,IL_00fa,IL_00e2,IL_018d,IL_009f)
	IL_0085:                                                                        //ldc.i4.0
	IL_0086:            V_2=0;                                                      //stloc.2
	IL_0087:                                                                        //ldc.i4				0x3
	IL_008c:            V_5=3;                                                      //stloc				V_5
	IL_0090:            /*goto IL_0050;*/goto IL_0092;                              //br.s				IL_0050
	IL_0092:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_0094:                                                                        //ldc.i4				0xa
	IL_0099:            V_5=10;                                                     //stloc				V_5
	IL_009d:            /*goto IL_0050;*/goto IL_009f;                              //br.s				IL_0050
	IL_009f:                                                                        //ldloc.2
	IL_00a0:            if(V_2==0)goto IL_00e4;                                     //brfalse.s				IL_00e4
	IL_00a2:                                                                        //ldc.i4				0x2
	IL_00a7:            V_5=2;                                                      //stloc				V_5
	IL_00ab:            /*goto IL_0050;*/goto IL_00ad;                              //br.s				IL_0050
	IL_00ad:            goto IL_010d;                                               //br.s				IL_010d
	IL_00af:                                                                        //ldloc.2
	IL_00b0:                                                                        //ldc.i4.1
	IL_00b1:                                                                        //add
	IL_00b2:            V_2=(V_2 + 1);                                              //stloc.2
	IL_00b3:                                                                        //ldc.i4				0x1
	IL_00b8:            V_5=1;                                                      //stloc				V_5
	IL_00bc:            /*goto IL_0050;*/goto IL_00be;                              //br.s				IL_0050
	IL_00be:            goto IL_00c0;                                               //br.s				IL_00c0
	IL_00c0:                                                                        //ldc.i4				0x5
	IL_00c5:            V_5=5;                                                      //stloc				V_5
	IL_00c9:            /*goto IL_0050;*/goto IL_00cb;                              //br.s				IL_0050
	IL_00cb:                                                                        //ldloc.2
	IL_00cc:                                                                        //ldloc.0
	IL_00cd:            Temp_7=safe_cast<System::Collections::ICollection^>(V_0)->Count;//callvirt				System::Int32 System::Collections::ICollection::get_Count()
	IL_00d2:            if(V_2<Temp_7)goto IL_0094;                                 //blt.s				IL_0094
	IL_00d4:                                                                        //ldc.i4				0x8
	IL_00d9:            V_5=8;                                                      //stloc				V_5
	IL_00dd:            /*goto IL_0050;*/goto IL_00e2;                              //br				IL_0050
	IL_00e2:            goto IL_0150;                                               //br.s				IL_0150
	IL_00e4:                                                                        //ldloc.0
	IL_00e5:                                                                        //ldloc.2
	IL_00e6:            Temp_5=V_0[V_2];                                            //callvirt				Reflector::CodeModel::IType^ Reflector::CodeModel::ITypeCollection::get_Item(System::Int32)
	IL_00eb:            V_3=Temp_5;                                                 //stloc.3
	IL_00ec:                                                                        //ldc.i4				0x7
	IL_00f1:            V_5=7;                                                      //stloc				V_5
	IL_00f5:            /*goto IL_0050;*/goto IL_00fa;                              //br				IL_0050
	IL_00fa:                                                                        //ldloc.3
	IL_00fb:            if(V_3==nullptr)goto IL_00af;                               //brfalse.s				IL_00af
	IL_00fd:                                                                        //ldc.i4				0x6
	IL_0102:            V_5=6;                                                      //stloc				V_5
	IL_0106:            /*goto IL_0050;*/goto IL_010b;                              //br				IL_0050
	IL_010b:            goto IL_0131;                                               //br.s				IL_0131
	IL_010d:                                                                        //ldloc.1
	IL_010e:                                                                        //ldstr				L"\x0427"
	IL_0113:                                                                        //ldloc				V_6
	IL_0117:            Temp_6=a(L"\x0427",V_6);                                    //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_011c:            V_1->Write(Temp_6);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_0121:                                                                        //ldc.i4				0x0
	IL_0126:            V_5=0;                                                      //stloc				V_5
	IL_012a:            /*goto IL_0050;*/goto IL_012f;                              //br				IL_0050
	IL_012f:            goto IL_00e4;                                               //br.s				IL_00e4
	IL_0131:                                                                        //ldloc.1
	IL_0132:                                                                        //ldloc.3
	IL_0133:            Temp_8=V_3->ToString();                                     //callvirt				System::String^ System::Object::ToString()
	IL_0138:            V_1->Write(Temp_8);                                         //callvirt				void System::IO::TextWriter::Write(System::String^)
	IL_013d:                                                                        //ldc.i4				0x4
	IL_0142:            V_5=4;                                                      //stloc				V_5
	IL_0146:            /*goto IL_0050;*/goto IL_014b;                              //br				IL_0050
	IL_014b:            goto IL_00af;                                               //br				IL_00af
	IL_0150:                                                                        //ldarg.0
	IL_0151:            Temp_9=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0156:                                                                        //ldstr				L"\x1427"
	IL_015b:                                                                        //ldloc				V_6
	IL_015f:            Temp_10=a(L"\x1427",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0164:                                                                        //ldloc.1
	IL_0165:            Temp_11=V_1->ToString();                                    //callvirt				System::String^ System::IO::StringWriter::ToString()
	IL_016a:                                                                        //ldstr				L"\x1627"
	IL_016f:                                                                        //ldloc				V_6
	IL_0173:            Temp_12=a(L"\x1627",V_6);                                   //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0178:            Temp_13=System::String::Concat(Temp_9,Temp_10,Temp_11,Temp_12);//call				System::String^ System::String::Concat(System::String^,System::String^,System::String^,System::String^)
	IL_017d:            V_4=Temp_13;                                                //stloc.s				V_4
	IL_017f:                                                                        //ldc.i4				0x9
	IL_0184:            V_5=9;                                                      //stloc				V_5
	IL_0188:            /*goto IL_0050;*/goto IL_018d;                              //br				IL_0050
	IL_018d:            goto IL_0205;                                               //leave.s				IL_0205
	                    ;}
	                    finally{
	IL_018f:                                                                        //ldc.i4				0x0
	IL_0194:            V_5=0;                                                      //stloc				V_5
	IL_0198:            /*goto IL_01a7;*/goto IL_019a;                              //br.s				IL_01a7
	IL_019a:                                                                        //ldc.i4.0
	IL_019b:                                                                        //dup
	IL_019c:                                                                        //dup
	IL_019d:                                                                        //ldc.i4.3
	IL_019e:                                                                        //sub
	IL_019f:                                                                        //blt				IL_019b
	IL_01a4:                                                                        //pop
	IL_01a5:            goto IL_01bc;                                               //br.s				IL_01bc
	IL_01a7:                                                                        //ldloc				V_5
	IL_01ab:            switch(V_5){case 0:goto IL_019a;case 1:goto IL_01ca;case 2:goto IL_01dd;};//switch				(IL_019a,IL_01ca,IL_01dd)
	IL_01bc:                                                                        //ldloc.1
	IL_01bd:            if(V_1==nullptr)goto IL_01df;                               //brfalse.s				IL_01df
	IL_01bf:                                                                        //ldc.i4				0x1
	IL_01c4:            V_5=1;                                                      //stloc				V_5
	IL_01c8:            /*goto IL_01a7;*/goto IL_01ca;                              //br.s				IL_01a7
	IL_01ca:            goto IL_01cc;                                               //br.s				IL_01cc
	IL_01cc:                                                                        //ldloc.1
	IL_01cd:            /*safe_cast<System::IDisposable^>(V_1)->Dispose();*/        //callvirt				void System::IDisposable::Dispose()
	IL_01d2:                                                                        //ldc.i4				0x2
	IL_01d7:            V_5=2;                                                      //stloc				V_5
	IL_01db:            /*goto IL_01a7;*/goto IL_01dd;                              //br.s				IL_01a7
	IL_01dd:            goto IL_01df;                                               //br.s				IL_01df
	IL_01df:                                                                        //endfinally
	                    ;}
	IL_01e0:            Temp_1=System::Globalization::CultureInfo::InvariantCulture;//call				System::Globalization::CultureInfo^ System::Globalization::CultureInfo::get_InvariantCulture()
	IL_01e5:            Temp_2=gcnew System::IO::StringWriter(safe_cast<System::IFormatProvider^>(Temp_1));//newobj				void System::IO::StringWriter::.ctor(System::IFormatProvider^)
	IL_01ea:            V_1=Temp_2;                                                 //stloc.1
	IL_01eb:                                                                        //ldc.i4				0x2
	IL_01f0:            V_5=2;                                                      //stloc				V_5
	IL_01f4:            /*goto IL_000b;*/goto IL_01f9;                              //br				IL_000b
	IL_01f9:            /*goto IL_004e;*/goto IL_004901;                            //br				IL_004e
	IL_01fe:                                                                        //ldarg.0
	IL_01ff:            Temp_4=A_0->Name;                                           //callvirt				System::String^ Reflector::CodeModel::ITypeReference::get_Name()
	IL_0204:            return Temp_4;                                              //ret
	IL_0205:                                                                        //ldloc.s				V_4
	IL_0207:            return V_4;                                                 //ret

}
inline System::Boolean Root::T_x183::M_x2(System::Int32 A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x5
	IL_0005:            V_0=5;                                                      //stloc				V_0
	IL_0009:            /*goto IL_000d;*/goto IL_000b;                              //br.s				IL_000d
	IL_000b:            goto IL_002e;                                               //br.s				IL_002e
	IL_000d:                                                                        //ldloc				V_0
	IL_0011:            switch(V_0){case 0:goto IL_0067;case 1:goto IL_0054;case 2:goto IL_0074;case 3:goto IL_003e;case 4:goto IL_0092;case 5:goto IL_000b;};//switch				(IL_0067,IL_0054,IL_0074,IL_003e,IL_0092,IL_000b)
	IL_002e:                                                                        //ldarg.0
	IL_002f:                                                                        //ldc.i4.s				43
	IL_0031:            if(A_0<43)goto IL_0049;                                     //blt.s				IL_0049
	IL_0033:                                                                        //ldc.i4				0x3
	IL_0038:            V_0=3;                                                      //stloc				V_0
	IL_003c:            /*goto IL_000d;*/goto IL_003e;                              //br.s				IL_000d
	IL_003e:            goto IL_0069;                                               //br.s				IL_0069
	IL_0040:                                                                        //ldarg.0
	IL_0041:                                                                        //ldc.i4				0xdd
	IL_0046:                                                                        //ceq
	IL_0048:            return (A_0 == 221);                                        //ret
	IL_0049:                                                                        //ldc.i4				0x1
	IL_004e:            V_0=1;                                                      //stloc				V_0
	IL_0052:            /*goto IL_000d;*/goto IL_0054;                              //br.s				IL_000d
	IL_0054:                                                                        //ldarg.0
	IL_0055:                                                                        //ldc.i4				0xde
	IL_005a:            if(A_0==222)goto IL_0094;                                   //beq.s				IL_0094
	IL_005c:                                                                        //ldc.i4				0x0
	IL_0061:            V_0=0;                                                      //stloc				V_0
	IL_0065:            /*goto IL_000d;*/goto IL_0067;                              //br.s				IL_000d
	IL_0067:            goto IL_0040;                                               //br.s				IL_0040
	IL_0069:                                                                        //ldc.i4				0x2
	IL_006e:            V_0=2;                                                      //stloc				V_0
	IL_0072:            /*goto IL_000d;*/goto IL_0074;                              //br.s				IL_000d
	IL_0074:                                                                        //ldc.i4.5
	IL_0075:                                                                        //dup
	IL_0076:                                                                        //dup
	IL_0077:                                                                        //ldc.i4.3
	IL_0078:                                                                        //sub
	IL_0079:                                                                        //blt				IL_0075
	IL_007e:                                                                        //pop
	IL_007f:                                                                        //ldarg.0
	IL_0080:                                                                        //ldc.i4.s				68
	IL_0082:            if(A_0<=68)goto IL_0094;                                    //ble.s				IL_0094
	IL_0084:                                                                        //ldc.i4				0x4
	IL_0089:            V_0=4;                                                      //stloc				V_0
	IL_008d:            /*goto IL_000d;*/goto IL_0092;                              //br				IL_000d
	IL_0092:            goto IL_0049;                                               //br.s				IL_0049
	IL_0094:                                                                        //ldc.i4.1
	IL_0095:            return true;                                                //ret

}
inline System::Boolean Root::T_x183::M_x8(Reflector::CodeModel::IType^ A_0)
{
	//temp variables , should be optimized by C++/cli compiler.
	System::String^ Temp_0 = nullptr;
	System::String^ Temp_1 = nullptr;
	System::Boolean Temp_2 = false;
	//local variables.
	System::Int32 V_0 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldc.i4				0x8
	IL_0005:            V_0=8;                                                      //stloc				V_0
	IL_0009:                                                                        //ldarg.0
	IL_000a:                                                                        //ldstr				L"\x7525\x5127\x5929\x582B\x4B2D\x5D2F"
	IL_000f:                                                                        //ldloc				V_0
	IL_0013:            Temp_0=a(L"\x7525\x5127\x5929\x582B\x4B2D\x5D2F",V_0);      //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0018:                                                                        //ldstr				L"\x7025\x4727\x4329\x482B"
	IL_001d:                                                                        //ldloc				V_0
	IL_0021:            Temp_1=a(L"\x7025\x4727\x4329\x482B",V_0);                  //call				System::String^ undefined_type::a(System::String^,System::Int32)
	IL_0026:            Temp_2=Root::T_x183::M_x1(A_0,Temp_0,Temp_1);               //call				System::Boolean Root::T_x183::M_x1(Reflector::CodeModel::IType^,System::String^,System::String^)
	IL_002b:            return Temp_2;                                              //ret

}
