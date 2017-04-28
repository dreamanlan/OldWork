#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x137  : Reflector::CodeModel::IAssemblyResolver
	{
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x1;
	private:
		Reflector::CodeModel::IAssemblyCache^ F_x2;
	public:
		T_x137(Reflector::CodeModel::IAssemblyManager^ A_0,Reflector::CodeModel::IAssemblyCache^ A_1);
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyResolver::Resolve;
		//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x1
	};
}
