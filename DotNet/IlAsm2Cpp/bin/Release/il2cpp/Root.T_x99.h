#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x99 sealed
	{
	private:
		System::Collections::ArrayList^ F_x1;
	private:
		Root::T_x98^ F_x2;
	public:
		Root::T_x98^ M_x2(System::String^ A_0);
	public:
		void M_x1(System::String^ A_0,System::String^ A_1);
	public:
		void M_x2(Root::T_x98^ A_0);
	public:
		void M_x2();
	public:
		Root::T_x98^ M_x13();
	public:
		void M_x1(Root::T_x98^ A_0);
	public:
		Root::T_x98^ M_x1(System::String^ A_0);
	public:
		System::Collections::IEnumerator^ M_x12();
	public:
		void M_x2(Reflector::IConfigurationManager^ A_0);
	public:
		void M_x1(Reflector::IConfigurationManager^ A_0);
	public:
		static Root::T_x99^ M_x1();
	public:
		T_x99();
	};
}
