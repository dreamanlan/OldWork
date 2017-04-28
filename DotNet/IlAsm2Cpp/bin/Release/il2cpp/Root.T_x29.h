#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x29
	{
	private:
		System::Collections::IDictionary^ F_x1;
	public:
		T_x29(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::CodeModel::IVisibilityConfiguration^ A_1);
	public:
		System::Collections::IEnumerable^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		void M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1);
	};
}
