#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x72  : System::EventArgs
	{
	private:
		System::String^ F_x1;
	private:
		System::Boolean F_x2;
	public:
		T_x72(System::String^ A_0);
	public:
		System::String^ M_x2();
	public:
		System::Boolean M_x1();
	public:
		void M_x1(System::Boolean A_0);
	};
}
