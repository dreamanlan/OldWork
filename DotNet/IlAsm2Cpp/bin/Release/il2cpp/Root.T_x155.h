#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x155
	{
	private:
		Root::T_x172^ F_x1;
	private:
		array<System::Byte>^ F_x2;
	private:
		array<System::Byte>^ F_x12;
	private:
		array<System::Byte>^ F_x13;
	private:
		array<System::Byte>^ F_x8;
	private:
		System::Boolean F_x5;
	public:
		T_x155(System::IO::BinaryReader^ A_0,System::Int32 A_1);
	public:
		System::Boolean M_x12();
	public:
		Root::T_x172^ M_x13();
	public:
		array<System::Byte>^ M_x1();
	public:
		array<System::Byte>^ M_x8();
	public:
		array<System::Byte>^ M_x2();
	public:
		array<System::Byte>^ M_x5();
	};
}
