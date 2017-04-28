#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x22  : System::Collections::IEnumerator
	{
	private:
		System::Collections::Stack^ F_x1;
	private:
		System::Collections::ArrayList^ F_x2;
	private:
		System::Collections::IEnumerator^ F_x12;
	public:
		T_x22(Reflector::CodeModel::IMethodDeclaration^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
	public:
		virtual void M_x2() sealed  = System::Collections::IEnumerator::Reset;
		//System::Collections::IEnumerator^::Reset by M_x2
	public:
		virtual System::Boolean M_x12() sealed  = System::Collections::IEnumerator::MoveNext;
		//System::Collections::IEnumerator^::MoveNext by M_x12
	public:
		virtual System::Object^ M_x1() sealed  = System::Collections::IEnumerator::Current::get;
		//System::Collections::IEnumerator^::get_Current by M_x1
	};
}
