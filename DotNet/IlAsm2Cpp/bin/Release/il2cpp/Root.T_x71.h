#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x71  : Root::T_x66
	{
	private:
		literal System::String^ F_x1="-- Default --";
	private:
		Root::T_x99^ F_x2;
	private:
		System::Windows::Forms::ListView^ F_x12;
	private:
		System::Windows::Forms::Label^ F_x13;
	private:
		System::Windows::Forms::Button^ F_x8;
	private:
		System::Windows::Forms::Button^ F_x5;
	private:
		System::Boolean F_x9;
	private:
		System::Boolean F_x4;
	public:
		T_x71();
	public:
		void M_x1(Root::T_x99^ A_0);
	public:
		Root::T_x99^ M_x5();
	public:
		System::Boolean M_x13();
	public:
		void M_x1(System::Boolean A_0);
	public:
		System::String^ M_x9();
	public:
		void M_x12(System::String^ A_0);
	public:
		System::String^ M_x8();
	public:
		void M_x13(System::String^ A_0);
	public:
		System::String^ M_x4();
	public:
		void M_x2(System::String^ A_0);
	protected:
		virtual System::Boolean M_x1(System::Windows::Forms::Keys A_0)  = System::Windows::Forms::Form::ProcessDialogKey;
		//System::Windows::Forms::Form^::ProcessDialogKey by M_x1
	private:
		void M_x8(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::Windows::Forms::LabelEditEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::LabelEditEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12();
	private:
		void M_x2();
	private:
		System::String^ M_x1();
	private:
		System::Boolean M_x1(System::String^ A_0);
	private:
		System::Boolean M_x1(System::Windows::Forms::ListViewItem^ A_0);
	};
}
