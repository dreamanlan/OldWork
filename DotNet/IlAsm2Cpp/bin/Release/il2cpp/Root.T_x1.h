#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x1
	{
	private:
		Reflector::CodeModel::IResource^ F_x1;
	public:
		T_x1(Reflector::CodeModel::IResource^ A_0);
	public:
		array<System::Byte>^ M_x1();
	};
}
