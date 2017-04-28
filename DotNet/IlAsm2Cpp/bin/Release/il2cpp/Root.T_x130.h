#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x130  : Root::T_x129
	{
	private:
		System::Boolean F_x1;
	private:
		System::Boolean F_x2;
	private:
		System::Collections::IDictionary^ F_x12;
	private:
		System::Object^ F_x13;
	public:
		T_x130();
	public:
		T_x130(System::Boolean A_0,System::Boolean A_1);
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssembly^ A_0) override;
	public:
		virtual Reflector::CodeModel::IModule^ M_x1(Reflector::CodeModel::IModule^ A_0) override;
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
	};
}
