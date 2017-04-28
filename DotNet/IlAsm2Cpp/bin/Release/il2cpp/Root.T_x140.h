#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x140
	{
	private:
		array<System::Byte>^ F_x1;
	private:
		System::Int32 F_x2;
	private:
		System::Int32 F_x12;
	public:
		T_x140();
	public:
		void M_x1(System::Boolean A_0);
	public:
		void M_x1(System::SByte A_0);
	public:
		void M_x1(System::Byte A_0);
	public:
		void M_x1(System::Int16 A_0);
	public:
		void M_x1(System::UInt16 A_0);
	public:
		void M_x12(System::Int32 A_0);
	public:
		void M_x1(System::UInt32 A_0);
	public:
		void M_x1(System::Int64 A_0);
	public:
		void M_x1(System::UInt64 A_0);
	public:
		void M_x1(System::Single A_0);
	public:
		void M_x1(System::Double A_0);
	public:
		void M_x1(System::Char A_0);
	public:
		void M_x2(System::Int32 A_0);
	public:
		void M_x1(array<System::Byte>^ A_0);
	public:
		System::Int32 M_x2();
	public:
		void M_x13(System::Int32 A_0);
	public:
		System::Int32 M_x12();
	public:
		void M_x1(System::IO::Stream^ A_0);
	public:
		array<System::Byte>^ M_x1();
	private:
		void M_x1(System::Int32 A_0);
	};
}
