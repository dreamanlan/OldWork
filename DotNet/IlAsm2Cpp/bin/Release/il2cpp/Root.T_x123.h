#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x123
	{
	private:
		System::Object^ F_x1;
	private:
		System::IServiceProvider^ F_x2;
	public:
		T_x123(System::Object^ A_0,System::IServiceProvider^ A_1);
	public:
		void M_x1();
	public:
		System::Boolean M_x2();
	private:
		System::String^ M_x2(System::Object^ A_0);
	private:
		System::Boolean M_x1(System::Object^ A_0);
	private:
		void M_x2(System::String^ A_0,System::IServiceProvider^ A_1);
	private:
		void M_x1(System::String^ A_0,System::IServiceProvider^ A_1);
	};
}
