#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x160
	{
	private:
		System::Int32 F_x1;
	private:
		System::UInt16 F_x2;
	private:
		array<System::Byte>^ F_x12;
	private:
		array<System::Byte>^ F_x13;
	public:
		T_x160(Root::T_x139^ A_0,System::Byte A_1);
	public:
		System::Boolean M_x8();
	public:
		System::Int32 M_x2();
	public:
		System::UInt16 M_x12();
	public:
		array<System::Byte>^ M_x13();
	public:
		array<System::Byte>^ M_x1();
	};
}
