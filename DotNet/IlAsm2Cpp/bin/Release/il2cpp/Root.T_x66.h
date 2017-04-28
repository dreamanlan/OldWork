#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x66  : System::Windows::Forms::Form
	{
	public:
		T_x66();
	protected:
		virtual void M_x1(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Form::WndProc;
		//System::Windows::Forms::Form^::WndProc by M_x1
	public:
		System::Boolean M_x15();
	};
}
