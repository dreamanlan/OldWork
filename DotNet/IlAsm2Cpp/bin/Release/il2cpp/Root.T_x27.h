#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x27  : Root::T_x10
	{
	private:
		Reflector::CodeModel::IModule^ F_x1;
	public:
		Reflector::CodeModel::IModule^ M_x12();
	public:
		void M_x1(Reflector::CodeModel::IModule^ A_0);
	public:
		Reflector::CodeModel::IAssemblyReference^ M_x8();
	public:
		void M_x1(Reflector::CodeModel::IAssemblyReference^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	protected:
		virtual void M_x2(System::EventArgs^ A_0) override;
	protected:
		virtual void M_x1(System::EventArgs^ A_0) override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	private:
		void M_x1();
	public:
		T_x27();
	};
}
