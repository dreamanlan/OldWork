#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x41  : Root::T_x10
	{
	public:
		Reflector::CodeModel::INamespace^ M_x1();
	public:
		void M_x1(Reflector::CodeModel::INamespace^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	internal:
		void M_x1(Reflector::CodeModel::ITypeDeclarationCollection^ A_0);
	internal:
		Root::T_x45^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	protected:
		virtual void M_x1(System::EventArgs^ A_0) override;
	protected:
		virtual void M_x2(System::EventArgs^ A_0) override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	public:
		T_x41();
	};
}
