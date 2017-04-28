#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x121  : System::Collections::IEnumerator , Root::T_x20
	{
	private:
		Root::T_x133^ F_x1;
	private:
		System::Collections::IEnumerator^ F_x2;
	private:
		System::Boolean F_x12;
	private:
		System::Boolean F_x13;
	public:
		T_x121(array<Reflector::CodeModel::IAssembly^>^ A_0,System::Boolean A_1,System::Boolean A_2);
	public:
		T_x121(array<Reflector::CodeModel::IAssembly^>^ A_0);
	public:
		T_x121(array<Reflector::CodeModel::IModule^>^ A_0);
	public:
		T_x121(array<Reflector::CodeModel::ITypeDeclaration^>^ A_0);
	public:
		virtual void M_x12() sealed  = System::Collections::IEnumerator::Reset;
		//System::Collections::IEnumerator^::Reset by M_x12
	public:
		virtual System::Boolean M_x13() sealed  = System::Collections::IEnumerator::MoveNext;
		//System::Collections::IEnumerator^::MoveNext by M_x13
	public:
		virtual System::Object^ M_x2() sealed  = System::Collections::IEnumerator::Current::get;
		//System::Collections::IEnumerator^::get_Current by M_x2
	public:
		virtual System::Int32 M_x1() sealed;
	};
}
