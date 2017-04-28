#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x145 sealed
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1 sealed
		{
		private:
			T_x1();
		public:
			static System::String^ M_x1(System::Object^ A_0);
		private:
			static System::String^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
		private:
			static System::String^ M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::MethodCallingConvention A_1);
		private:
			static System::String^ M_x1(Reflector::CodeModel::IType^ A_0);
		private:
			static System::String^ M_x2(Reflector::CodeModel::ITypeReference^ A_0);
		private:
			static System::String^ M_x1(Reflector::CodeModel::ITypeReference^ A_0);
		};
	private:
		System::Collections::IDictionary^ F_x1;
	private:
		Reflector::CodeModel::IAssembly^ F_x2;
	public:
		void M_x1(Reflector::CodeModel::IAssembly^ A_0);
	public:
		System::String^ M_x1(System::Object^ A_0);
	private:
		System::String^ M_x1(System::String^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1);
	private:
		void M_x1(Reflector::CodeModel::IAssemblyReference^ A_0);
	private:
		static Reflector::CodeModel::IAssemblyReference^ M_x1(Reflector::CodeModel::IType^ A_0);
	public:
		T_x145();
	};
}
