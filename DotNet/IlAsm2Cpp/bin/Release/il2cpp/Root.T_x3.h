#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x3  : System::Windows::Forms::UserControl
	{
		ref class T_x4;
		ref class T_x5;
		ref class T_x6;
		ref class T_x7;
		ref class T_x8;
		ref class T_x9;
		ref class T_x10;
		ref class T_x2;
		ref class T_x11;
		ref class T_x12;
		ref class T_x13;
		ref class T_x14;
		ref class T_x15;
		ref class T_x16;
		ref class T_x17;
		ref class T_x1;
		ref class T_x18;
		ref class T_x19;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x16 abstract  : System::Windows::Forms::TreeNode
		{
		public:
			virtual void M_x1() abstract;
		protected:
			void M_x12();
		protected:
			void M_x1(array<System::Windows::Forms::TreeNode^>^ A_0);
		protected:
			Reflector::CodeModel::IAssemblyManager^ M_x8();
		protected:
			Root::T_x79^ M_x13();
		protected:
			T_x16();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x3::T_x16
		{
		private:
			System::Object^ F_x1;
		private:
			Reflector::CodeModel::IAssembly^ F_x2;
		public:
			T_x1(System::Object^ A_0,System::Object^ A_1);
		public:
			virtual void M_x1() override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x6  : System::Windows::Forms::TreeNode , System::IComparable
		{
		private:
			System::Object^ F_x1;
		public:
			System::Object^ M_x1();
		public:
			void M_x12(System::Object^ A_0);
		public:
			virtual System::Int32 M_x2(System::Object^ A_0) sealed  = System::IComparable::CompareTo;
			//System::IComparable^::CompareTo by M_x2
		public:
			virtual void M_x1(System::Object^ A_0);
		public:
			T_x6();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x10  : Root::T_x3::T_x6
		{
		public:
			T_x10(Reflector::CodeModel::ITypeReference^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Root::T_x3::T_x6
		{
		public:
			T_x2();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x11  : Root::T_x3::T_x2
		{
		public:
			T_x11(Reflector::CodeModel::IMethodReference^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Root::T_x3::T_x2
		{
		public:
			T_x12(Reflector::CodeModel::IFieldReference^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Root::T_x3::T_x2
		{
		public:
			T_x13(Reflector::CodeModel::IPropertyReference^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x14  : Root::T_x3::T_x2
		{
		public:
			T_x14(Reflector::CodeModel::IEventReference^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x15  : Root::T_x3::T_x6
		{
		public:
			T_x15(System::Exception^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x17  : Root::T_x3::T_x16
		{
		private:
			System::Object^ F_x1;
		public:
			T_x17(System::Object^ A_0);
		public:
			virtual void M_x1() override;
		private:
			Root::T_x21^ M_x2();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x18  : Root::T_x3::T_x16
		{
		private:
			Reflector::CodeModel::IMethodDeclaration^ F_x1;
		public:
			T_x18(Reflector::CodeModel::IMethodDeclaration^ A_0);
		public:
			virtual void M_x1() override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x19  : Root::T_x3::T_x16
		{
		private:
			System::Object^ F_x1;
		public:
			T_x19(System::Object^ A_0);
		public:
			virtual void M_x1() override;
		private:
			System::String^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
		private:
			Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x4
		{
		private:
			T_x4();
		public:
			static Root::T_x3::T_x6^ M_x1(System::Object^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x5  : System::Windows::Forms::TreeView
		{
		private:
			Reflector::IAssemblyBrowser^ F_x1;
		private:
			Reflector::CodeModel::IAssemblyManager^ F_x2;
		private:
			Root::T_x79^ F_x12;
		public:
			T_x5(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2,Root::T_x79^ A_3);
		public:
			Reflector::CodeModel::IAssemblyManager^ M_x2();
		public:
			Root::T_x79^ M_x1();
		protected:
			virtual void M_x1(System::Windows::Forms::KeyEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnKeyDown;
			//System::Windows::Forms::TreeView^::OnKeyDown by M_x1
		protected:
			virtual void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
		protected:
			virtual System::Boolean ProcessDialogKey(System::Windows::Forms::Keys key) override;
		protected:
			virtual void M_x1(System::Windows::Forms::TreeViewCancelEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnBeforeExpand;
			//System::Windows::Forms::TreeView^::OnBeforeExpand by M_x1
		private:
			void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
		private:
			void M_x1(System::IO::StringWriter^ A_0,System::String^ A_1,System::Windows::Forms::TreeNodeCollection^ A_2);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x7  : Root::T_x3::T_x6
		{
		public:
			T_x7(Reflector::CodeModel::IAssemblyReference^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8  : Root::T_x3::T_x6
		{
		public:
			T_x8(Reflector::CodeModel::IModuleReference^ A_0);
		public:
			T_x8(System::String^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x9  : Root::T_x3::T_x6
		{
		public:
			T_x9(Reflector::CodeModel::INamespace^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0) override;
		};
	private:
		Root::T_x3::T_x5^ F_x1;
	private:
		Root::T_x79^ F_x2;
	private:
		Reflector::IAssemblyBrowser^ F_x12;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x13;
	public:
		T_x3(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2);
	public:
		System::Collections::IEnumerable^ M_x1();
	public:
		void M_x2(System::Collections::IEnumerable^ A_0);
	protected:
		virtual void OnVisibleChanged(System::EventArgs^ e) override;
	protected:
		virtual void OnParentChanged(System::EventArgs^ e) override;
	private:
		void M_x1(System::Collections::IEnumerable^ A_0);
	};
}
