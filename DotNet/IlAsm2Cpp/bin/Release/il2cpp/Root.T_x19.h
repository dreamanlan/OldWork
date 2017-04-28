#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x19  : System::Collections::IEnumerable
	{
	private:
		System::Collections::SortedList^ F_x1;
	public:
		virtual System::Collections::IEnumerator^ M_x1() sealed  = System::Collections::IEnumerable::GetEnumerator;
		//System::Collections::IEnumerable^::GetEnumerator by M_x1
	public:
		void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	public:
		Reflector::CodeModel::INamespace^ M_x1(System::String^ A_0);
	public:
		T_x19();
	};
}
