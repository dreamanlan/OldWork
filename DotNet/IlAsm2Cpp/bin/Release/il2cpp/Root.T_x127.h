#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x127
	{
	internal:
		enum class T_x1
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
			,F_x12=(System::Int32)0x00000002
			,F_x13=(System::Int32)0x00000003
			,F_x8=(System::Int32)0x00000004
			,F_x5=(System::Int32)0x00000005
			,F_x9=(System::Int32)0x00000006
			,F_x4=(System::Int32)0x00000007
			,F_x15=(System::Int32)0x00000008
			,F_x11=(System::Int32)0x00000009
			,F_x10=(System::Int32)0x0000000A
			,F_x7=(System::Int32)0x0000000B
			,F_x16=(System::Int32)0x0000000C
			,F_x6=(System::Int32)0x0000000D
			,F_x14=(System::Int32)0x0000000E
			,F_x18=(System::Int32)0x0000000F
			,F_x19=(System::Int32)0x00000010
			,F_x17=(System::Int32)0x00000020
			,F_x56=(System::Int32)0x00000021
			,F_x48=(System::Int32)0x00000040
		};
	private:
		array<Root::T_x126^>^ F_x1;
	public:
		T_x127(System::IO::Stream^ A_0);
	public:
		System::Collections::IEnumerator^ M_x1();
	private:
		System::Int32 M_x1(System::IO::BinaryReader^ A_0);
	private:
		void M_x1(Root::T_x126^ A_0,System::IO::BinaryReader^ A_1,array<System::String^>^ A_2);
	private:
		void M_x1(Root::T_x126^ A_0,System::IO::BinaryReader^ A_1);
	private:
		void M_x1(Root::T_x126^ A_0,System::IO::Stream^ A_1);
	};
}
