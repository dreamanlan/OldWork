#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x33  : Root::T_x10
	{
	public:
		Reflector::CodeModel::IMemberReference^ M_x8();
	public:
		void M_x1(Reflector::CodeModel::IMemberReference^ A_0);
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	public:
		T_x33();
	};
}
