#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x154
	{
	private:
		System::UInt32 F_x1;
	private:
		System::UInt16 F_x2;
	private:
		System::UInt16 F_x12;
	private:
		System::UInt32 F_x13;
	private:
		System::String^ F_x8;
	private:
		System::UInt16 F_x5;
	public:
		T_x154(System::String^ A_0);
	public:
		T_x154(System::IO::BinaryReader^ A_0);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0);
	public:
		System::Int32 M_x2();
	public:
		System::String^ M_x1();
	};
}
