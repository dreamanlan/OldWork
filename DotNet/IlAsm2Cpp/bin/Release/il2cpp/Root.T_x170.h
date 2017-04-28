#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x170
	{
		value class T_x1;
	internal:
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		value class T_x1 sealed
		{
		public:
			System::Int32 F_x1;
		public:
			System::Int32 F_x2;
		public:
			System::Int16 F_x12;
		public:
			System::Int16 F_x13;
		public:
			System::Int32 F_x8;
		public:
			System::Int32 F_x5;
		public:
			System::Int32 F_x9;
		public:
			System::Int32 F_x4;
		};
	private:
		T_x170();
	public:
		void M_x1(System::IO::BinaryWriter^ A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3);
	};
}
