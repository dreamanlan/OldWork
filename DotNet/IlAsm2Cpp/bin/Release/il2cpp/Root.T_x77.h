#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x77  : Root::T_x66
	{
		ref class T_x1;
		ref class T_x2;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::CheckBox
		{
		private:
			System::String^ F_x1;
		private:
			System::String^ F_x2;
		private:
			System::String^ F_x12;
		public:
			T_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2);
		public:
			void M_x2(Reflector::IConfigurationManager^ A_0);
		public:
			void M_x1(Reflector::IConfigurationManager^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : System::Windows::Forms::UserControl
		{
			ref class T_x2_8;
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : System::Windows::Forms::ComboBox
			{
			private:
				literal System::String^ F_x1="--";
			private:
				static initonly array<System::Single>^ F_x2;
			public:
				T_x1();
			public:
				System::Single M_x1();
			public:
				void M_x1(System::Single A_0);
			private:
				static T_x1();
			};
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x2_8  : System::Windows::Forms::ComboBox
			{
			private:
				literal System::String^ F_x1="-- Default Font --";
			private:
				System::Boolean F_x2;
			public:
				T_x2_8();
			public:
				System::String^ M_x2();
			public:
				void M_x1(System::String^ A_0);
			protected:
				virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::ComboBox::OnDropDown;
				//System::Windows::Forms::ComboBox^::OnDropDown by M_x12
			protected:
				virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ComboBox::OnHandleCreated;
				//System::Windows::Forms::ComboBox^::OnHandleCreated by M_x1
			protected:
				virtual void OnKeyDown(System::Windows::Forms::KeyEventArgs^ e) override;
			protected:
				virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::ComboBox::OnHandleDestroyed;
				//System::Windows::Forms::ComboBox^::OnHandleDestroyed by M_x2
			private:
				void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
			private:
				void M_x1();
			};
		private:
			Root::T_x77::T_x2::T_x2_8^ F_x1;
		private:
			Root::T_x77::T_x2::T_x1^ F_x2;
		public:
			T_x2();
		public:
			System::String^ M_x1();
		public:
			void M_x1(System::String^ A_0);
		};
	private:
		System::Collections::ArrayList^ F_x1;
	private:
		System::Windows::Forms::GroupBox^ F_x2;
	private:
		Root::T_x77::T_x1^ F_x12;
	private:
		Root::T_x77::T_x1^ F_x13;
	private:
		Root::T_x77::T_x1^ F_x8;
	private:
		Root::T_x77::T_x1^ F_x5;
	private:
		Root::T_x77::T_x1^ F_x9;
	private:
		Root::T_x77::T_x2^ F_x4;
	private:
		Root::T_x77::T_x2^ F_x15;
	private:
		System::Windows::Forms::ComboBox^ F_x11;
	private:
		System::Windows::Forms::GroupBox^ F_x10;
	private:
		Root::T_x77::T_x1^ F_x7;
	private:
		Root::T_x77::T_x1^ F_x16;
	private:
		Root::T_x77::T_x1^ F_x6;
	private:
		Root::T_x77::T_x1^ F_x14;
	private:
		Root::T_x77::T_x1^ F_x18;
	private:
		Root::T_x77::T_x1^ F_x19;
	private:
		System::Windows::Forms::GroupBox^ F_x17;
	private:
		System::Windows::Forms::RadioButton^ F_x56;
	private:
		System::Windows::Forms::RadioButton^ F_x48;
	private:
		System::Windows::Forms::RadioButton^ F_x55;
	private:
		System::Windows::Forms::TextBox^ F_x57;
	private:
		System::Windows::Forms::TextBox^ F_x81;
	private:
		System::Windows::Forms::TextBox^ F_x33;
	public:
		T_x77();
	public:
		void M_x2(Reflector::IConfigurationManager^ A_0,Reflector::ILanguageManager^ A_1);
	public:
		void M_x1(Reflector::IConfigurationManager^ A_0,Reflector::ILanguageManager^ A_1);
	public:
		void M_x12();
	public:
		void M_x2();
	public:
		void M_x1();
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	};
}
