#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x131  : Root::T_x130 , Reflector::ITranslator
	{
	public:
		T_x131();
	public:
		T_x131(System::Boolean A_0,System::Boolean A_1);
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x2(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::ITranslator::TranslateAssembly;
		//Reflector::ITranslator^::TranslateAssembly by M_x2
	public:
		virtual Reflector::CodeModel::IModule^ M_x2(Reflector::CodeModel::IModule^ A_0) sealed  = Reflector::ITranslator::TranslateModule;
		//Reflector::ITranslator^::TranslateModule by M_x2
	public:
		virtual Reflector::CodeModel::IAssemblyReference^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0) sealed  = Reflector::ITranslator::TranslateAssemblyReference;
		//Reflector::ITranslator^::TranslateAssemblyReference by M_x1
	public:
		virtual Reflector::CodeModel::IModuleReference^ M_x1(Reflector::CodeModel::IModuleReference^ A_0) sealed  = Reflector::ITranslator::TranslateModuleReference;
		//Reflector::ITranslator^::TranslateModuleReference by M_x1
	public:
		virtual Reflector::CodeModel::INamespace^ M_x1(Reflector::CodeModel::INamespace^ A_0) sealed  = Reflector::ITranslator::TranslateNamespace;
		//Reflector::ITranslator^::TranslateNamespace by M_x1
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0) sealed  = Reflector::ITranslator::TranslateTypeDeclaration;
		//Reflector::ITranslator^::TranslateTypeDeclaration by M_x2
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x2(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::ITranslator::TranslateFieldDeclaration;
		//Reflector::ITranslator^::TranslateFieldDeclaration by M_x2
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::ITranslator::TranslateMethodDeclaration;
		//Reflector::ITranslator^::TranslateMethodDeclaration by M_x2
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x2(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::ITranslator::TranslatePropertyDeclaration;
		//Reflector::ITranslator^::TranslatePropertyDeclaration by M_x2
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x2(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::ITranslator::TranslateEventDeclaration;
		//Reflector::ITranslator^::TranslateEventDeclaration by M_x2
	};
}
