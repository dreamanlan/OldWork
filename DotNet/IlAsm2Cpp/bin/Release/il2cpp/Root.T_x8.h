#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x8
	{
	private:
		Root::T_x179^ F_x1;
	private:
		Root::T_x178^ F_x2;
	private:
		System::String^ F_x12;
	private:
		System::String^ F_x13;
	public:
		Root::T_x179^ M_x12();
	public:
		Root::T_x178^ M_x1();
	public:
		System::String^ M_x8();
	public:
		void M_x2(System::String^ A_0);
	public:
		System::String^ M_x2();
	public:
		void M_x1(System::String^ A_0);
	public:
		virtual System::String^ M_x13()  = System::Object::ToString;
		//System::Object^::ToString by M_x13
	public:
		T_x8();
	};
}
