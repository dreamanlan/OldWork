#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x139
	{
	private:
		System::Int32 F_x1;
	private:
		array<System::Byte>^ F_x2;
	private:
		System::Int32 F_x12;
	public:
		T_x139(System::IO::Stream^ A_0);
	public:
		T_x139(Root::T_x139^ A_0,System::Int32 A_1);
	public:
		T_x139(System::IO::BinaryReader^ A_0,System::Int32 A_1);
	public:
		T_x139(array<System::Byte>^ A_0);
	public:
		System::Boolean M_x13();
	public:
		System::Char M_x8();
	public:
		System::Single M_x18();
	public:
		System::Double M_x7();
	public:
		System::Int32 M_x6();
	public:
		System::Int16 M_x16();
	public:
		System::SByte M_x4();
	public:
		System::Byte M_x15();
	public:
		System::UInt16 M_x11();
	public:
		System::Int32 M_x5();
	public:
		System::UInt32 M_x2();
	public:
		System::Int64 M_x12();
	public:
		System::UInt64 M_x9();
	public:
		array<System::Byte>^ M_x8(System::Int32 A_0);
	public:
		System::String^ M_x2(System::Int32 A_0);
	public:
		System::String^ M_x1();
	public:
		void M_x12(System::Int32 A_0);
	public:
		System::Int32 M_x19();
	public:
		void M_x13(System::Int32 A_0);
	public:
		System::Int32 M_x10();
	public:
		void M_x1(System::Int32 A_0);
	public:
		virtual System::String^ M_x14()  = System::Object::ToString;
		//System::Object^::ToString by M_x14
	};
}
