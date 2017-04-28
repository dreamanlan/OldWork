#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x35  : Root::T_x31
	{
	public:
		Reflector::CodeModel::IFieldDeclaration^ M_x1();
	public:
		void M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	public:
		virtual void M_x5(System::String^ A_0) override;
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override;
	public:
		T_x35();
	};
}
