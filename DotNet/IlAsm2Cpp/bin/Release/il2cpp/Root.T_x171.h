#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x171
	{
	private:
		System::Int32 F_x1;
	private:
		System::Int32 F_x2;
	private:
		Root::T_x172^ F_x12;
	private:
		Root::T_x139^ F_x13;
	private:
		System::Boolean F_x8;
	private:
		System::Boolean F_x5;
	private:
		System::Boolean F_x9;
	public:
		T_x171(System::Int32 A_0,Root::T_x172^ A_1,System::IO::BinaryReader^ A_2,System::Int32 A_3);
	public:
		System::Int32 M_x5();
	public:
		void M_x2(System::Int32 A_0);
	public:
		System::Int32 M_x12();
	public:
		void M_x9();
	public:
		System::UInt16 M_x4();
	public:
		System::Int32 M_x8();
	public:
		System::UInt32 M_x2();
	public:
		System::Int32 M_x15();
	public:
		System::Int32 M_x13();
	public:
		System::Int32 M_x1();
	public:
		System::Int32 M_x1(System::Int32 A_0);
	public:
		System::Int32 M_x12(System::Int32 A_0);
	};
}
