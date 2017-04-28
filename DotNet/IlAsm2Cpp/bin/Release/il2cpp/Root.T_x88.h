#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x88  : System::Windows::Forms::ContainerControl
	{
		ref class T_x1;
		ref class T_x12;
		ref class T_x13;
		ref class T_x2;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::TextBox
		{
		private:
			array<System::Byte>^ F_x1;
		public:
			T_x1();
		public:
			void M_x1(array<System::Byte>^ A_0);
		public:
			array<System::Byte>^ M_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : System::Windows::Forms::TextBox
		{
		private:
			System::String^ F_x1;
		public:
			T_x12();
		public:
			System::String^ M_x1();
		public:
			void M_x1(System::String^ A_0);
		protected:
			virtual void OnVisibleChanged(System::EventArgs^ e) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : System::Windows::Forms::ScrollableControl
		{
		private:
			System::Windows::Forms::PictureBox^ F_x1;
		public:
			T_x13();
		public:
			System::Drawing::Image^ M_x1();
		public:
			void M_x1(System::Drawing::Image^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : System::Windows::Forms::ListView
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : System::Collections::IComparer
			{
			private:
				System::Int32 F_x1;
			public:
				T_x1(System::Int32 A_0);
			public:
				virtual System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
				//System::Collections::IComparer^::Compare by M_x1
			};
		private:
			Root::T_x127^ F_x1;
		private:
			Reflector::ICommandBarItem^ F_x2;
		public:
			T_x2(Reflector::ICommandBarManager^ A_0);
		public:
			Root::T_x127^ M_x1();
		public:
			void M_x1(Root::T_x127^ A_0);
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ListView::OnItemActivate;
			//System::Windows::Forms::ListView^::OnItemActivate by M_x1
		protected:
			virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::ListView::OnSelectedIndexChanged;
			//System::Windows::Forms::ListView^::OnSelectedIndexChanged by M_x2
		private:
			void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			static System::String^ M_x2(System::String^ A_0);
		private:
			static System::String^ M_x1(System::String^ A_0);
		private:
			static array<System::Byte>^ M_x2(System::Object^ A_0);
		private:
			static System::Boolean M_x1(System::Object^ A_0);
		private:
			static System::String^ M_x1(array<System::Byte>^ A_0);
		protected:
			virtual void M_x1(System::Windows::Forms::ColumnClickEventArgs^ A_0)  = System::Windows::Forms::ListView::OnColumnClick;
			//System::Windows::Forms::ListView^::OnColumnClick by M_x1
		};
	private:
		Reflector::IAssemblyBrowser^ F_x1;
	private:
		Reflector::ICommandBarManager^ F_x2;
	private:
		System::Object^ F_x12;
	public:
		T_x88(Reflector::IAssemblyBrowser^ A_0,Reflector::ICommandBarManager^ A_1);
	protected:
		virtual void OnParentChanged(System::EventArgs^ e) override;
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2();
	private:
		void M_x1(System::String^ A_0,array<System::Byte>^ A_1);
	public:
		void M_x1(System::String^ A_0);
	public:
		void M_x1(System::IO::Stream^ A_0);
	public:
		void M_x1(System::Windows::Forms::Cursor^ A_0);
	private:
		void M_x1(System::Drawing::Image^ A_0);
	private:
		System::Windows::Forms::Control^ M_x1();
	private:
		void M_x1(System::Windows::Forms::Control^ A_0);
	};
}
