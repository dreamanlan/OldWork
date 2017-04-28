#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x84  : System::EventArgs
	{
	private:
		System::String^ F_x1;
	public:
		T_x84(System::String^ A_0);
	public:
		System::String^ M_x1();
	};
}
