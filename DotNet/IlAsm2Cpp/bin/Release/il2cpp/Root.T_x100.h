#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x100  : Reflector::CodeModel::IAssemblyResolver
	{
	private:
		System::Collections::IDictionary^ F_x1;
	private:
		Reflector::CodeModel::IAssemblyResolver^ F_x2;
	public:
		T_x100(Reflector::CodeModel::IAssemblyResolver^ A_0);
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyResolver::Resolve;
		//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x1
	};
}
