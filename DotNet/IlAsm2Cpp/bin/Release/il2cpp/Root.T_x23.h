#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x23  : System::Collections::IEnumerator
	{
	private:
		System::Object^ F_x1;
	private:
		Root::T_x121^ F_x2;
	private:
		System::Collections::IEnumerator^ F_x12;
	private:
		System::Int32 F_x13;
	private:
		System::Object^ F_x8;
	public:
		T_x23(System::Object^ A_0,array<Reflector::CodeModel::IAssembly^>^ A_1);
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
		System::Boolean M_x8();
	public:
		System::Int32 M_x1();
	private:
		System::Boolean M_x13(System::Object^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::IType^ A_0);
	private:
		System::Boolean M_x12(System::Object^ A_0);
	private:
		System::Boolean M_x2(System::Object^ A_0);
	private:
		System::Boolean M_x12(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
	private:
		System::Boolean M_x2(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
	private:
		static System::Boolean M_x1(Reflector::CodeModel::IAssembly^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1);
	private:
		static array<Reflector::CodeModel::ITypeDeclaration^>^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		static Reflector::CodeModel::IAssemblyReference^ M_x1(System::Object^ A_0);
	};
}
