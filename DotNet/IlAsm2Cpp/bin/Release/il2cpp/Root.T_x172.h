#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x172
	{
	private:
		System::Int32 F_x1;
	private:
		System::Int32 F_x2;
	private:
		System::Int32 F_x12;
	private:
		array<System::Int32>^ F_x13;
	private:
		array<System::Int32>^ F_x8;
	private:
		array<Root::T_x171^>^ F_x5;
	private:
		System::Int16 F_x9;
	public:
		T_x172(System::IO::BinaryReader^ A_0);
	public:
		void M_x13(System::Int32 A_0);
	public:
		Root::T_x171^ M_x1(System::Int32 A_0);
	public:
		System::Int16 M_x1();
	public:
		System::Int32 M_x8(System::Int32 A_0);
	public:
		System::Int32 M_x12();
	public:
		System::Int32 M_x13();
	public:
		System::Int32 M_x2();
	public:
		System::Int32 M_x2(System::Int32 A_0);
	public:
		System::Int32 M_x12(System::Int32 A_0);
	private:
		void M_x1(System::Int32 A_0,System::IO::BinaryReader^ A_1,System::Int32 A_2);
	};
}
