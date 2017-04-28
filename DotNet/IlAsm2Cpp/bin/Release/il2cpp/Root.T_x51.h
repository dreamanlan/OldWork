#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x51  : System::ComponentModel::CancelEventArgs
	{
	private:
		System::String^ F_x1;
	public:
		T_x51(System::String^ A_0,System::Boolean A_1);
	public:
		System::String^ M_x1();
	};
}
