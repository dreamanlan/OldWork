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
