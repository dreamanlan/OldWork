#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x167
	{
	private:
		array<Root::T_x166^>^ F_x1;
	public:
		T_x167();
	public:
		T_x167(System::IO::BinaryReader^ A_0,System::Int32 A_1);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0);
	public:
		void M_x1(Root::T_x166^ A_0);
	public:
		System::Int32 M_x2();
	public:
		System::Int32 M_x1();
	public:
		Root::T_x166^ M_x1(System::Int32 A_0);
	public:
		Root::T_x166^ M_x1(System::String^ A_0);
	public:
		System::Int32 M_x1(System::UInt32 A_0);
	public:
		System::Boolean M_x2(System::UInt32 A_0);
	};
}
