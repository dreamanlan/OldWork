#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x111
	{
	private:
		System::String^ F_x1;
	private:
		System::String^ F_x2;
	private:
		System::String^ F_x12;
	private:
		System::String^ F_x13;
	private:
		System::String^ F_x8;
	private:
		T_x111();
	public:
		T_x111(System::Object^ A_0);
	public:
		T_x111(System::String^ A_0);
	public:
		System::String^ M_x13();
	public:
		System::String^ M_x12();
	public:
		System::Object^ M_x1(Reflector::CodeModel::IAssemblyManager^ A_0);
	private:
		void M_x12(Reflector::CodeModel::ITypeReference^ A_0);
	private:
		System::String^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
	private:
		System::String^ M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::MethodCallingConvention A_1);
	private:
		System::String^ M_x2();
	private:
		System::String^ M_x1();
	private:
		System::String^ M_x1(Reflector::CodeModel::IType^ A_0);
	private:
		static System::String^ M_x2(Reflector::CodeModel::ITypeReference^ A_0);
	private:
		static System::String^ M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	private:
		static Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::IModule^ A_0,System::String^ A_1,System::String^ A_2);
	};
}
