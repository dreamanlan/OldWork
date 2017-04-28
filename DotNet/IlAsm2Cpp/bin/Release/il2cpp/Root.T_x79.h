#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x79 sealed  : System::Windows::Forms::StatusBar
	{
	private:
		System::Windows::Forms::ProgressBar^ F_x1;
	public:
		T_x79();
	public:
		System::Int32 M_x2();
	public:
		void M_x2(System::Int32 A_0);
	public:
		System::Int32 M_x1();
	public:
		void M_x12(System::Int32 A_0);
	public:
		System::Int32 M_x12();
	public:
		void M_x1(System::Int32 A_0);
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::StatusBar::OnResize;
		//System::Windows::Forms::StatusBar^::OnResize by M_x1
	};
}
