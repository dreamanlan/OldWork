#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x28  : Root::T_x10
	{
	private:
		Reflector::CodeModel::ITypeDeclaration^ F_x1;
	public:
		Reflector::CodeModel::ITypeDeclaration^ M_x12();
	public:
		void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	private:
		void M_x1();
	private:
		void M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Windows::Forms::TreeNodeCollection^ A_2);
	protected:
		virtual void M_x2(System::EventArgs^ A_0) override;
	protected:
		virtual void M_x1(System::EventArgs^ A_0) override;
	private:
		void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,Root::T_x10^ A_1);
	public:
		T_x28();
	};
}
