#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x94  : Root::T_x66
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::ListViewItem
		{
		private:
			System::String^ F_x1;
		private:
			System::Exception^ F_x2;
		public:
			T_x1(System::String^ A_0,System::Exception^ A_1);
		public:
			System::String^ M_x2();
		public:
			System::Exception^ M_x1();
		};
	private:
		System::Windows::Forms::ListView^ F_x1;
	private:
		System::Windows::Forms::TextBox^ F_x2;
	public:
		T_x94();
	public:
		void M_x1(System::String^ A_0,System::Exception^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1();
	private:
		System::String^ M_x1(System::Exception^ A_0);
	};
}
