#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x6  : System::Windows::Forms::ComboBox
	{
	private:
		Root::T_x118^ F_x1;
	public:
		T_x6(Root::T_x118^ A_0);
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ComboBox::OnSelectedIndexChanged;
		//System::Windows::Forms::ComboBox^::OnSelectedIndexChanged by M_x1
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2();
	private:
		void M_x1();
	};
}
