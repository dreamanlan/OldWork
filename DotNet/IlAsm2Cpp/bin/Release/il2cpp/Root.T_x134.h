#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x134
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		private:
			array<System::Byte>^ F_x1;
		private:
			System::UInt32 F_x2;
		private:
			System::UInt16 F_x12;
		private:
			System::Int32 F_x13;
		private:
			System::UInt32 F_x8;
		private:
			System::UInt32 F_x5;
		private:
			System::UInt16 F_x9;
		private:
			System::UInt16 F_x4;
		private:
			System::UInt16 F_x15;
		private:
			System::Byte F_x11;
		private:
			System::Byte F_x10;
		private:
			System::Int32 F_x7;
		private:
			System::Int32 F_x16;
		private:
			System::Int32 F_x6;
		private:
			System::UInt32 F_x14;
		private:
			System::UInt32 F_x18;
		private:
			System::UInt32 F_x19;
		private:
			System::UInt64 F_x17;
		private:
			System::Int32 F_x56;
		private:
			System::Int32 F_x48;
		private:
			System::UInt16 F_x55;
		private:
			System::UInt16 F_x57;
		private:
			System::UInt16 F_x81;
		private:
			System::UInt16 F_x33;
		private:
			System::UInt16 F_x49;
		private:
			System::UInt16 F_x158;
		private:
			System::UInt32 F_x26;
		private:
			System::UInt32 F_x176;
		private:
			System::UInt32 F_x134;
		private:
			System::UInt32 F_x148;
		private:
			System::UInt16 F_x173;
		private:
			System::UInt16 F_x113;
		private:
			System::UInt64 F_x3;
		private:
			System::UInt64 F_x47;
		private:
			System::UInt64 F_x43;
		private:
			System::UInt64 F_x35;
		private:
			System::UInt32 F_x93;
		public:
			T_x1(System::IO::BinaryReader^ A_0);
		private:
			static System::UInt16 M_x1(System::UInt16 A_0);
		public:
			System::Int32 M_x1();
		};
	private:
		Reflector::IConfigurationManager^ F_x1;
	public:
		T_x134(Reflector::IConfigurationManager^ A_0);
	public:
		[System::Diagnostics::DebuggerHidden()]
		System::Boolean M_x8();
	public:
		[System::Diagnostics::DebuggerHidden()]
		System::Boolean M_x13();
	private:
		[System::Diagnostics::DebuggerHidden()]
		System::Boolean M_x1(System::Boolean A_0,System::Boolean A_1);
	private:
		[System::Diagnostics::DebuggerHidden()]
		System::Boolean M_x1(System::String^ A_0);
	public:
		[System::Diagnostics::DebuggerHidden()]
		void M_x12();
	private:
		[System::Diagnostics::DebuggerHidden()]
		System::Boolean M_x2();
	private:
		[System::Diagnostics::DebuggerHidden()]
		System::DateTime M_x1();
	};
}
