#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x144
	{
	private:
		System::UInt32 F_x1;
	private:
		System::Int32 F_x2;
	public:
		T_x144(System::UInt32 A_0,System::Int32 A_1);
	public:
		T_x144(System::IO::BinaryReader^ A_0);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0);
	public:
		System::UInt32 M_x1();
	public:
		void M_x1(System::UInt32 A_0);
	public:
		System::Int32 M_x12();
	public:
		void M_x1(System::Int32 A_0);
	public:
		virtual System::String^ M_x2()  = System::Object::ToString;
		//System::Object^::ToString by M_x2
	};
}
