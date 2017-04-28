#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x108  : Root::T_x107
	{
	private:
		System::Collections::ArrayList^ F_x1;
	public:
		virtual void M_x1(System::String^ A_0) sealed;
	public:
		virtual System::Boolean M_x2(System::String^ A_0) sealed;
	public:
		virtual void M_x2(Root::T_x24^ A_0) sealed  = Root::T_x107::M_x1;
		//Root::T_x107^::M_x1 by M_x2
	public:
		virtual void M_x1(Root::T_x24^ A_0) sealed  = Root::T_x107::M_x2;
		//Root::T_x107^::M_x2 by M_x1
	public:
		T_x108();
	};
}
