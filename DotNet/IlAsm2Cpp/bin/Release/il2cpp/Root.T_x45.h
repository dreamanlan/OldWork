#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x45  : Root::T_x10
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::IComparer
		{
		public:
			virtual System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
			//System::Collections::IComparer^::Compare by M_x1
		public:
			T_x1();
		};
	public:
		Reflector::CodeModel::ITypeDeclaration^ M_x15();
	public:
		void M_x12(Reflector::CodeModel::ITypeDeclaration^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	internal:
		Root::T_x45^ M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0);
	internal:
		Root::T_x31^ M_x1(Reflector::CodeModel::IMemberDeclaration^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0) override;
	private:
		void M_x1(System::Boolean A_0);
	private:
		array<System::Windows::Forms::TreeNode^>^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		array<System::Windows::Forms::TreeNode^>^ M_x13(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1);
	private:
		array<System::Windows::Forms::TreeNode^>^ M_x12(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1);
	private:
		array<System::Windows::Forms::TreeNode^>^ M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1);
	private:
		array<System::Windows::Forms::TreeNode^>^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Boolean A_1);
	protected:
		virtual void M_x1(System::EventArgs^ A_0) override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	private:
		void M_x4();
	private:
		void M_x9();
	private:
		void M_x5();
	private:
		void M_x8();
	private:
		void M_x12();
	private:
		System::Boolean M_x1();
	public:
		T_x45();
	};
}
