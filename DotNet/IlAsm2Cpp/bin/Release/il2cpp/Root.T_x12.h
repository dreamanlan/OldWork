#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x12  : Root::T_x10
	{
	public:
		System::String^ M_x1();
	public:
		void M_x1(System::String^ A_0);
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	public:
		T_x12();
	};
}
