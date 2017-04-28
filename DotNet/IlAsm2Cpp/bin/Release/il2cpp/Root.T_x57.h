#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x57 sealed  : Root::T_x66
	{
	private:
		System::Windows::Forms::TextBox^ F_x1;
	private:
		System::Windows::Forms::TextBox^ F_x2;
	private:
		System::Windows::Forms::TextBox^ F_x12;
	private:
		System::Windows::Forms::TextBox^ F_x13;
	private:
		System::Windows::Forms::Button^ F_x8;
	private:
		System::Windows::Forms::Button^ F_x5;
	public:
		T_x57();
	protected:
		virtual void OnSizeChanged(System::EventArgs^ e) override;
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Form::OnVisibleChanged;
		//System::Windows::Forms::Form^::OnVisibleChanged by M_x1
	public:
		System::String^ M_x13();
	public:
		void M_x2(System::String^ A_0);
	public:
		System::String^ M_x12();
	public:
		void M_x13(System::String^ A_0);
	public:
		System::String^ M_x2();
	public:
		void M_x1(System::String^ A_0);
	public:
		System::String^ M_x1();
	public:
		void M_x12(System::String^ A_0);
	};
}
