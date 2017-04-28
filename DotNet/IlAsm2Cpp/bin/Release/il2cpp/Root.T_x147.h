#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x147  : System::Collections::IEnumerator
	{
	private:
		static Root::T_x147^ F_x1;
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
		static System::Collections::IEnumerator^ M_x1();
	private:
		static T_x147();
	public:
		T_x147();
	};
}
