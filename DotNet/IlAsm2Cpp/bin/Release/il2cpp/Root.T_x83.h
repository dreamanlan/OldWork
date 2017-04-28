#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x83  : System::Windows::Forms::Control
	{
	private:
		Reflector::IAssemblyBrowser^ F_x1;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x2;
	private:
		Reflector::ICommandBarManager^ F_x12;
	private:
		Root::T_x97^ F_x13;
	private:
		Reflector::ILanguageManager^ F_x8;
	private:
		Reflector::CodeModel::ILanguage^ F_x5;
	private:
		Reflector::ITranslatorManager^ F_x9;
	private:
		Reflector::IConfigurationManager^ F_x4;
	private:
		Reflector::CodeModel::IVisibilityConfiguration^ F_x15;
	private:
		Root::T_x75^ F_x11;
	private:
		System::Boolean F_x10;
	public:
		T_x83(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ILanguageManager^ A_2,Reflector::ITranslatorManager^ A_3,Reflector::ICommandBarManager^ A_4,Reflector::IConfigurationManager^ A_5,Root::T_x97^ A_6,System::Boolean A_7);
	protected:
		virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnGotFocus;
		//System::Windows::Forms::Control^::OnGotFocus by M_x2
	public:
		virtual System::Drawing::Font^ M_x1()  = System::Windows::Forms::Control::Font::get;
		//System::Windows::Forms::Control^::get_Font by M_x1
	public:
		virtual void M_x1(System::Drawing::Font^ A_0)  = System::Windows::Forms::Control::Font::set;
		//System::Windows::Forms::Control^::set_Font by M_x1
	public:
		Reflector::CodeModel::ILanguage^ M_x12();
	public:
		void M_x1(Reflector::CodeModel::ILanguage^ A_0);
	public:
		Reflector::CodeModel::IVisibilityConfiguration^ M_x2();
	public:
		void M_x1(Reflector::CodeModel::IVisibilityConfiguration^ A_0);
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnParentChanged;
		//System::Windows::Forms::Control^::OnParentChanged by M_x1
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x124^ A_1);
	private:
		void M_x1(System::Boolean A_0);
	private:
		void M_x1(Reflector::CodeModel::IFormatter^ A_0,System::Exception^ A_1,System::String^ A_2,Reflector::CodeModel::IAssemblyReference^ A_3);
	private:
		void M_x1(Reflector::CodeModel::IFormatter^ A_0,System::Exception^ A_1,System::String^ A_2,System::String^ A_3);
	private:
		System::Boolean M_x2(Reflector::CodeModel::IAssembly^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::IAssembly^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::INamespace^ A_0);
	private:
		System::Boolean M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		System::Int32 M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
	};
}
