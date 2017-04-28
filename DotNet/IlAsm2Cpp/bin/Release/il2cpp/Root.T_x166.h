#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x166
	{
	private:
		System::String^ F_x1;
	private:
		System::Int32 F_x2;
	private:
		System::UInt32 F_x12;
	private:
		System::Int32 F_x13;
	private:
		System::UInt32 F_x8;
	private:
		System::Int32 F_x5;
	private:
		System::Int32 F_x9;
	private:
		System::UInt16 F_x4;
	private:
		System::UInt16 F_x15;
	private:
		System::Int32 F_x11;
	public:
		T_x166(System::String^ A_0,System::Int32 A_1);
	public:
		T_x166(System::IO::BinaryReader^ A_0);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0);
	public:
		System::Int32 M_x9();
	public:
		System::Int32 M_x2(System::UInt32 A_0);
	public:
		System::String^ M_x12();
	public:
		System::UInt32 M_x8();
	public:
		void M_x12(System::UInt32 A_0);
	public:
		System::Int32 M_x5();
	public:
		void M_x1(System::Int32 A_0);
	public:
		System::UInt32 M_x2();
	public:
		void M_x1(System::UInt32 A_0);
	public:
		System::Int32 M_x1();
	public:
		void M_x2(System::Int32 A_0);
	public:
		virtual System::String^ M_x13()  = System::Object::ToString;
		//System::Object^::ToString by M_x13
	};
}
