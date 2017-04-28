#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x93  : Root::T_x66
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::ListViewItem
		{
		public:
			Root::T_x90^ M_x1();
		public:
			void M_x1(Root::T_x90^ A_0);
		public:
			T_x1();
		};
	private:
		Root::T_x95^ F_x1;
	private:
		System::Windows::Forms::ListView^ F_x2;
	private:
		System::Windows::Forms::Button^ F_x12;
	private:
		System::Windows::Forms::Button^ F_x13;
	public:
		T_x93();
	public:
		Root::T_x95^ M_x2();
	public:
		void M_x1(Root::T_x95^ A_0);
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1();
	};
}
