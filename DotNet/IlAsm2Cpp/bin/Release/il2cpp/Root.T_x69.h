#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x69  : Root::T_x66
	{
		ref class T_x13;
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::ListViewItem
		{
		public:
			T_x1(Reflector::CodeModel::IAssemblyLocation^ A_0);
		public:
			System::String^ M_x1();
		private:
			System::String^ M_x1(array<System::Byte>^ A_0);
		};
	internal:
		delegate void T_x12();
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13 sealed  : System::Collections::IComparer
		{
		private:
			System::Int32 F_x1;
		public:
			T_x13(System::Int32 A_0);
		public:
			virtual System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
			//System::Collections::IComparer^::Compare by M_x1
		};
	internal:
		delegate void T_x2(System::Windows::Forms::ListViewItem^ A_0);
	private:
		Reflector::CodeModel::IAssemblyCache^ F_x1;
	private:
		System::Collections::IEnumerator^ F_x2;
	private:
		System::Windows::Forms::TextBox^ F_x12;
	private:
		System::Windows::Forms::ListView^ F_x13;
	private:
		System::Collections::ArrayList^ F_x8;
	private:
		System::IAsyncResult^ F_x5;
	private:
		System::IAsyncResult^ F_x9;
	private:
		System::IAsyncResult^ F_x4;
	private:
		System::Boolean F_x15;
	private:
		System::Boolean F_x11;
	private:
		System::Boolean F_x10;
	private:
		System::Int32 F_x7;
	private:
		System::String^ F_x16;
	public:
		T_x69(Reflector::CodeModel::IAssemblyCache^ A_0);
	public:
		array<System::String^>^ M_x8();
	private:
		void M_x12();
	private:
		void M_x1(System::Windows::Forms::ListViewItem^ A_0);
	private:
		void M_x2();
	private:
		System::Boolean M_x1(Root::T_x69::T_x1^ A_0);
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::ColumnClickEventArgs^ A_1);
	protected:
		virtual void M_x1(System::ComponentModel::CancelEventArgs^ A_0)  = System::Windows::Forms::Form::OnClosing;
		//System::Windows::Forms::Form^::OnClosing by M_x1
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Form::OnLoad;
		//System::Windows::Forms::Form^::OnLoad by M_x1
	private:
		void M_x1();
	public:
		void M_x13();
	};
}
