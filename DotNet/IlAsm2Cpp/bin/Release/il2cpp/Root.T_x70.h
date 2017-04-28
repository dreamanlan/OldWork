#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x70 sealed  : Root::T_x66
	{
	private:
		System::String^ F_x1;
	private:
		System::Windows::Forms::TextBox^ F_x2;
	private:
		System::Windows::Forms::TextBox^ F_x12;
	public:
		T_x70();
	public:
		void M_x1(System::String^ A_0);
	public:
		System::String^ M_x2();
	public:
		void M_x2(System::String^ A_0);
	public:
		System::String^ M_x1();
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	};
}
