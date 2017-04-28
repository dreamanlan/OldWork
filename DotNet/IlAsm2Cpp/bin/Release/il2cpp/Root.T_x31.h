#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x31  : Root::T_x10
	{
	public:
		Reflector::CodeModel::IMemberDeclaration^ M_x5();
	public:
		void M_x2(Reflector::CodeModel::IMemberDeclaration^ A_0);
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	public:
		void M_x8();
	public:
		void M_x12();
	public:
		T_x31();
	};
}
