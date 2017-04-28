#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x89  : System::Windows::Forms::ContainerControl
	{
		interface class T_x6;
		ref class T_x16;
		ref class T_x5;
		ref class T_x15;
		ref class T_x1;
		ref class T_x19;
		ref class T_x11;
		ref class T_x9;
		ref class T_x13;
		ref class T_x12;
		ref class T_x8;
		ref class T_x7;
		ref class T_x2;
	internal:
		enum class T_x4
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
			,F_x12=(System::Int32)0x00000002
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x19  : System::Windows::Forms::Control
		{
		private:
			System::EventHandler^ F_x1;
		private:
			System::Boolean F_x2;
		private:
			System::Boolean F_x12;
		private:
			System::Boolean F_x13;
		private:
			System::Drawing::Image^ F_x8;
		private:
			System::Windows::Forms::ToolTip^ F_x5;
		private:
			System::Windows::Forms::Keys F_x9;
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x1(System::EventHandler^ A_0);
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x2(System::EventHandler^ A_0);
		public:
			T_x19();
		public:
			void M_x1(System::Drawing::Image^ A_0);
		public:
			System::Drawing::Image^ M_x12();
		public:
			void M_x1(System::Boolean A_0);
		public:
			System::Boolean M_x13();
		public:
			virtual System::String^ M_x8()  = System::Windows::Forms::Control::Text::get;
			//System::Windows::Forms::Control^::get_Text by M_x8
		public:
			virtual void M_x1(System::String^ A_0)  = System::Windows::Forms::Control::Text::set;
			//System::Windows::Forms::Control^::set_Text by M_x1
		public:
			void M_x1(System::Windows::Forms::Keys A_0);
		public:
			System::Windows::Forms::Keys M_x2();
		protected:
			virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseEnter;
			//System::Windows::Forms::Control^::OnMouseEnter by M_x12
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseLeave;
			//System::Windows::Forms::Control^::OnMouseLeave by M_x1
		protected:
			virtual void M_x2(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseDown;
			//System::Windows::Forms::Control^::OnMouseDown by M_x2
		protected:
			virtual void M_x1(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseUp;
			//System::Windows::Forms::Control^::OnMouseUp by M_x1
		protected:
			virtual System::Boolean M_x1(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::ProcessKeyPreview;
			//System::Windows::Forms::Control^::ProcessKeyPreview by M_x1
		protected:
			virtual void M_x1(System::Windows::Forms::PaintEventArgs^ A_0)  = System::Windows::Forms::Control::OnPaintBackground;
			//System::Windows::Forms::Control^::OnPaintBackground by M_x1
		protected:
			virtual void M_x2(System::Windows::Forms::PaintEventArgs^ A_0)  = System::Windows::Forms::Control::OnPaint;
			//System::Windows::Forms::Control^::OnPaint by M_x2
		protected:
			virtual void M_x2(System::EventArgs^ A_0);
		private:
			void M_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::UserControl
		{
		private:
			System::ComponentModel::PropertyChangedEventHandler^ F_x1;
		private:
			System::EventHandler^ F_x2;
		private:
			System::Windows::Forms::TextBox^ F_x12;
		private:
			Root::T_x89::T_x4 F_x13;
		private:
			System::Windows::Forms::ImageList^ F_x8;
		private:
			Root::T_x89::T_x19^ F_x5;
		private:
			Root::T_x89::T_x19^ F_x9;
		private:
			Root::T_x89::T_x19^ F_x4;
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x1(System::ComponentModel::PropertyChangedEventHandler^ A_0);
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x2(System::ComponentModel::PropertyChangedEventHandler^ A_0);
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x1(System::EventHandler^ A_0);
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			void M_x2(System::EventHandler^ A_0);
		public:
			T_x1();
		protected:
			virtual void OnEnter(System::EventArgs^ e) override;
		protected:
			virtual void OnHandleCreated(System::EventArgs^ e) override;
		public:
			void M_x12();
		public:
			System::String^ M_x2();
		public:
			Root::T_x89::T_x4 M_x13();
		protected:
			virtual void M_x1(System::EventArgs^ A_0);
		protected:
			virtual void M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0);
		private:
			void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			void M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1);
		private:
			void M_x1();
		};
	internal:
		delegate void T_x10(System::Exception^ A_0);
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x11  : System::Windows::Forms::ListView
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
			Reflector::IAssemblyBrowser^ F_x1;
		private:
			Reflector::IWindowManager^ F_x2;
		public:
			T_x11();
		public:
			Reflector::IAssemblyBrowser^ M_x12();
		public:
			void M_x1(Reflector::IAssemblyBrowser^ A_0);
		public:
			Reflector::IWindowManager^ M_x2();
		public:
			void M_x1(Reflector::IWindowManager^ A_0);
		protected:
			virtual void M_x1(System::Windows::Forms::ColumnClickEventArgs^ A_0)  = System::Windows::Forms::ListView::OnColumnClick;
			//System::Windows::Forms::ListView^::OnColumnClick by M_x1
		protected:
			virtual System::Boolean ProcessDialogKey(System::Windows::Forms::Keys key) override;
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ListView::OnItemActivate;
			//System::Windows::Forms::ListView^::OnItemActivate by M_x1
		private:
			void M_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x9  : System::Windows::Forms::ListViewItem
		{
		public:
			System::Object^ M_x12();
		public:
			void M_x1(System::Object^ A_0);
		public:
			T_x9();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Root::T_x89::T_x9
		{
		public:
			void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
		public:
			Reflector::CodeModel::IMethodDeclaration^ M_x2();
		public:
			virtual System::String^ M_x1()  = System::Windows::Forms::ListViewItem::ToString;
			//System::Windows::Forms::ListViewItem^::ToString by M_x1
		public:
			T_x12();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Root::T_x89::T_x9
		{
		public:
			void M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0);
		public:
			Reflector::CodeModel::IPropertyDeclaration^ M_x1();
		public:
			virtual System::String^ M_x2()  = System::Windows::Forms::ListViewItem::ToString;
			//System::Windows::Forms::ListViewItem^::ToString by M_x2
		public:
			T_x13();
		};
	internal:
		delegate void T_x14(array<System::Windows::Forms::ListViewItem^>^ A_0,System::Int32 A_1);
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x16
		{
		private:
			array<System::String^>^ F_x1;
		public:
			T_x16(System::String^ A_0);
		protected:
			System::Boolean M_x1(array<System::String^>^ A_0);
		private:
			System::Boolean M_x1(System::String^ A_0,array<System::String^>^ A_1);
		};
	internal:
		interface class T_x6
		{
		public:
			virtual System::Boolean M_x1(System::Object^ A_0) abstract;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x15  : Root::T_x89::T_x16 , Root::T_x89::T_x6
		{
		public:
			T_x15(System::String^ A_0);
		public:
			virtual System::Boolean M_x1(System::Object^ A_0) sealed;
		private:
			System::Boolean M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
		};
	internal:
		delegate void T_x18();
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Root::T_x89::T_x9
		{
		public:
			Reflector::CodeModel::ITypeDeclaration^ M_x2();
		public:
			void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
		public:
			virtual System::String^ M_x1()  = System::Windows::Forms::ListViewItem::ToString;
			//System::Windows::Forms::ListViewItem^::ToString by M_x1
		public:
			T_x2();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x5  : Root::T_x89::T_x16 , Root::T_x89::T_x6
		{
		public:
			T_x5(System::String^ A_0);
		public:
			virtual System::Boolean M_x1(System::Object^ A_0) sealed;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x7  : Root::T_x89::T_x9
		{
		public:
			void M_x1(Reflector::CodeModel::IEventDeclaration^ A_0);
		public:
			Reflector::CodeModel::IEventDeclaration^ M_x1();
		public:
			virtual System::String^ M_x2()  = System::Windows::Forms::ListViewItem::ToString;
			//System::Windows::Forms::ListViewItem^::ToString by M_x2
		public:
			T_x7();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8  : Root::T_x89::T_x9
		{
		public:
			void M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0);
		public:
			Reflector::CodeModel::IFieldDeclaration^ M_x1();
		public:
			virtual System::String^ M_x2()  = System::Windows::Forms::ListViewItem::ToString;
			//System::Windows::Forms::ListViewItem^::ToString by M_x2
		public:
			T_x8();
		};
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x1;
	private:
		Root::T_x97^ F_x2;
	private:
		Reflector::CodeModel::IVisibilityConfiguration^ F_x12;
	private:
		Root::T_x121^ F_x13;
	private:
		Root::T_x79^ F_x8;
	private:
		Root::T_x89::T_x1^ F_x5;
	private:
		Root::T_x89::T_x11^ F_x9;
	private:
		System::String^ F_x4;
	private:
		Root::T_x89::T_x4 F_x15;
	private:
		Root::T_x89::T_x6^ F_x11;
	private:
		System::IAsyncResult^ F_x10;
	private:
		System::IAsyncResult^ F_x7;
	private:
		System::IAsyncResult^ F_x16;
	private:
		System::Int32 F_x6;
	private:
		System::Int32 F_x14;
	public:
		T_x89(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::IAssemblyBrowser^ A_1,Reflector::IWindowManager^ A_2,Reflector::ICommandBarManager^ A_3,Root::T_x97^ A_4,Reflector::CodeModel::IVisibilityConfiguration^ A_5);
	public:
		void M_x8();
	protected:
		virtual void OnEnter(System::EventArgs^ e) override;
	protected:
		virtual void OnParentChanged(System::EventArgs^ e) override;
	private:
		void M_x13();
	private:
		void M_x12();
	private:
		void M_x2();
	private:
		void M_x1(System::Exception^ A_0);
	private:
		void M_x1(System::Collections::ArrayList^ A_0);
	private:
		void M_x1(array<System::Windows::Forms::ListViewItem^>^ A_0,System::Int32 A_1);
	private:
		void M_x1();
	private:
		System::Windows::Forms::ListViewItem^ M_x2(System::Object^ A_0);
	private:
		System::Boolean M_x1(System::Object^ A_0);
	private:
		void M_x1(System::Object^ A_0,System::ComponentModel::PropertyChangedEventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::KeyEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	};
}
