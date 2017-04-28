#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x156
	{
	private:
		System::Int32 F_x1;
	private:
		System::Int32 F_x2;
	private:
		System::String^ F_x12;
	public:
		T_x156(System::String^ A_0,System::Int32 A_1);
	public:
		T_x156(System::IO::BinaryReader^ A_0);
	public:
		void M_x1(System::IO::Stream^ A_0);
	public:
		System::Int32 M_x13();
	public:
		System::String^ M_x2();
	public:
		System::Int32 M_x12();
	public:
		void M_x1(System::Int32 A_0);
	public:
		System::Int32 M_x1();
	};
}
