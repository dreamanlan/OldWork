#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x46  : Root::T_x10
	{
	private:
		Reflector::CodeModel::ITypeReference^ F_x1;
	public:
		Reflector::CodeModel::ITypeReference^ M_x8();
	public:
		void M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		Reflector::CodeModel::ITypeReference^ M_x5();
	public:
		void M_x2(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	public:
		void M_x9();
	private:
		void M_x12();
	protected:
		virtual void M_x12(System::EventArgs^ A_0) override;
	private:
		void M_x1();
	private:
		void M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Collections::ICollection^ A_2);
	public:
		T_x46();
	};
}
