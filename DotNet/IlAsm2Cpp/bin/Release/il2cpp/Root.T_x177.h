#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x177
	{
	private:
		System::String^ F_x1;
	private:
		System::String^ F_x2;
	public:
		System::String^ M_x12();
	public:
		void M_x2(System::String^ A_0);
	public:
		System::String^ M_x1();
	public:
		void M_x1(System::String^ A_0);
	public:
		virtual System::String^ M_x2()  = System::Object::ToString;
		//System::Object^::ToString by M_x2
	public:
		T_x177();
	};
}
