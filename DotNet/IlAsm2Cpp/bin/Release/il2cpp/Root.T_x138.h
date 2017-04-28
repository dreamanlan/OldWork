#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x138
	{
	public:
		static void M_x1(Reflector::CodeModel::IAssembly^ A_0,System::String^ A_1);
	private:
		static void M_x1(Reflector::CodeModel::IModule^ A_0,System::String^ A_1,System::Boolean A_2,System::String^ A_3,System::String^ A_4);
	private:
		static System::Int32 M_x1(System::IO::BinaryWriter^ A_0,Root::T_x166^ A_1,Root::T_x142^ A_2,Reflector::CodeModel::AssemblyType A_3);
	private:
		static array<System::Byte>^ M_x1(System::String^ A_0);
	private:
		static Reflector::CodeModel::AssemblyType M_x1(Reflector::CodeModel::IModule^ A_0);
	public:
		T_x138();
	};
}
