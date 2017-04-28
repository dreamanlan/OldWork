#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x10  : System::Windows::Forms::TreeNode , System::IServiceProvider , Root::T_x24
	{
	private:
		System::Boolean F_x1;
	public:
		virtual System::Object^ M_x1(System::Type^ A_0) sealed  = System::IServiceProvider::GetService;
		//System::IServiceProvider^::GetService by M_x1
	public:
		System::Object^ M_x6();
	public:
		void M_x1(System::Object^ A_0);
	public:
		virtual void M_x5(System::String^ A_0)  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0)  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	public:
		virtual System::String^ M_x13();
	public:
		virtual void M_x2();
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1);
	public:
		void M_x10();
	public:
		void M_x14();
	public:
		void M_x7();
	protected:
		virtual void M_x1(System::EventArgs^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0);
	protected:
		virtual void M_x12(System::EventArgs^ A_0);
	protected:
		void M_x11();
	protected:
		void M_x16();
	public:
		T_x10();
	};
}
