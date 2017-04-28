#include "global_xref.h"

                    
void BytesToBytes(array<System::Byte>^ bs, array<System::Byte>^ ds)
{
    Array::Copy(bs, ds, ds->Length);
}
void BytesToChars(array<System::Byte>^ bs, array<System::Char>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToChar(bs, i * 2);
    }
}
void BytesToInt32s(array<System::Byte>^ bs,array<System::Int32>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToInt32(bs, i * 4);
    }
}
void BytesToInt64s(array<System::Byte>^ bs,array<System::Int64>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToInt64(bs, i * 8);
    }
}
void BytesToSingles(array<System::Byte>^ bs,array<System::Single>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToSingle(bs, i * 4);
    }
}
void BytesToDoubles(array<System::Byte>^ bs,array<System::Double>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToDouble(bs, i * 8);
    }
}
System::String^ a(System::String^ A_0,System::Int32 A_1)
{
	//temp variables , should be optimized by C++/cli compiler.
	array<System::Char>^ Temp_0 = nullptr;
	System::Int32 Temp_1 = 0;
	System::Int32 Temp_2 = 0;
	System::Int32 Temp_3 = 0;
	System::Byte Temp_4 = 0;
	System::String^ Temp_5 = nullptr;
	System::String^ Temp_6 = nullptr;
	System::Int32 Temp_7 = 0;
	System::Int32 Temp_8 = 0;
	System::Int32 Temp_9 = 0;
	//local variables.
	array<System::Char>^ V_0 = nullptr;
	System::Int32 V_1 = 0;
	System::Int32 V_2 = 0;
	System::Byte V_3 = 0;
	System::Byte V_4 = 0;
	//method body ------- 
	IL_0000:                                                                        //ldarg.0
	IL_0001:            Temp_0=A_0->ToCharArray();                                  //callvirt				array<System::Char>^ System::String::ToCharArray()
	IL_0006:            V_0=Temp_0;                                                 //stloc.0
	IL_0007:                                                                        //ldc.i4				0x22a2041d
	IL_000c:                                                                        //ldarg.1
	IL_000d:                                                                        //add
	IL_000e:            V_1=(581043229 + A_1);                                      //stloc.1
	IL_000f:                                                                        //ldc.i4.0
	IL_0010:                                                                        //dup
	IL_0011:                                                                        //ldc.i4.1
	IL_0012:            Temp_8=0;goto IL_0047;                                      //blt.s				IL_0047
	IL_0014:                                                                        //dup
	IL_0015:            Temp_9=Temp_8;                                              //stloc.2
	IL_0016:                                                                        //ldloc.0
	IL_0017:                                                                        //ldloc.2
	IL_0018:                                                                        //ldloc.0
	IL_0019:                                                                        //ldloc.2
	IL_001a:                                                                        //ldelem.i2
	IL_001b:                                                                        //dup
	IL_001c:                                                                        //ldc.i4				0xff
	IL_0021:                                                                        //and
	IL_0022:            Temp_2=V_1;                                                 //ldloc.1
	IL_0023:                                                                        //dup
	IL_0024:                                                                        //ldc.i4.1
	IL_0025:                                                                        //add
	IL_0026:            Temp_3=(Temp_2 + 1);                                        //stloc.1
	IL_0027:                                                                        //xor
	IL_0028:                                                                        //conv.u1
	IL_0029:            V_3=safe_cast<System::Byte>(((V_0[Temp_9] & (System::Char)255) ^ Temp_2));//stloc.3
	IL_002a:                                                                        //dup
	IL_002b:                                                                        //ldc.i4.8
	IL_002c:                                                                        //shr
	IL_002d:                                                                        //ldloc.1
	IL_002e:                                                                        //dup
	IL_002f:                                                                        //ldc.i4.1
	IL_0030:                                                                        //add
	IL_0031:            V_1=(Temp_3 + 1);                                           //stloc.1
	IL_0032:                                                                        //xor
	IL_0033:                                                                        //conv.u1
	IL_0034:            Temp_4=safe_cast<System::Byte>(((V_0[Temp_9] >> 8) ^ safe_cast<System::Char>(Temp_3)));//stloc.s				V_4
	IL_0036:                                                                        //pop
	IL_0037:                                                                        //ldloc.s				V_4
	IL_0039:                                                                        //ldloc.3
	IL_003a:            V_4=V_3;                                                    //stloc.s				V_4
	IL_003c:            V_3=Temp_4;                                                 //stloc.3
	IL_003d:                                                                        //ldloc.s				V_4
	IL_003f:                                                                        //ldc.i4.8
	IL_0040:                                                                        //shl
	IL_0041:                                                                        //ldloc.3
	IL_0042:                                                                        //or
	IL_0043:                                                                        //conv.u2
	IL_0044:            V_0[Temp_9]=safe_cast<System::Char>(safe_cast<System::UInt16>(((V_4 << 8) | V_3)));//stelem.i2
	IL_0045:                                                                        //ldc.i4.1
	IL_0046:            Temp_8=(Temp_9 + 1);                                        //add
	IL_0047:            /*warning ! semantic stack doesn't empty at joint !;*/      //dup
	IL_0048:                                                                        //ldloc.0
	IL_0049:            Temp_1=V_0->Length;                                         //ldlen
	IL_004a:                                                                        //conv.i4
	IL_004b:            if(Temp_8<Temp_1)goto IL_0014;                              //blt.s				IL_0014
	IL_004d:                                                                        //pop
	IL_004e:                                                                        //ldloc.0
	IL_004f:            Temp_5=gcnew System::String(V_0);                           //newobj				void System::String::.ctor(array<System::Char>^)
	IL_0054:            Temp_6=System::String::Intern(Temp_5);                      //call				System::String^ System::String::Intern(System::String^)
	IL_0059:            return Temp_6;                                              //ret

}
