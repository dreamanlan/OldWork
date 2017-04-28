#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x141
	{
	private:
		System::Int32 F_x1;
	private:
		System::UInt16 F_x2;
	private:
		System::UInt16 F_x12;
	private:
		Root::T_x144^ F_x13;
	private:
		System::UInt32 F_x8;
	private:
		System::Int32 F_x5;
	private:
		Root::T_x144^ F_x9;
	private:
		Root::T_x144^ F_x4;
	private:
		Root::T_x144^ F_x15;
	private:
		Root::T_x144^ F_x11;
	private:
		Root::T_x144^ F_x10;
	private:
		Root::T_x144^ F_x7;
	public:
		T_x141();
	public:
		T_x141(System::IO::BinaryReader^ A_0);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0);
	public:
		System::Int32 M_x8();
	public:
		System::Int32 M_x12();
	public:
		void M_x1(System::Int32 A_0);
	public:
		Root::T_x144^ M_x2();
	public:
		Root::T_x144^ M_x13();
	public:
		Root::T_x144^ M_x1();
	};
}
