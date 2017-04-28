#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x178  : System::Collections::ICollection
	{
	private:
		System::Collections::ArrayList^ F_x1;
	public:
		void M_x1(Root::T_x177^ A_0);
	public:
		Root::T_x177^ M_x1(System::String^ A_0);
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
	public:
		virtual System::Int32 M_x2() sealed  = System::Collections::ICollection::Count::get;
		//System::Collections::ICollection^::get_Count by M_x2
	public:
		virtual System::Boolean M_x1() sealed  = System::Collections::ICollection::IsSynchronized::get;
		//System::Collections::ICollection^::get_IsSynchronized by M_x1
	public:
		virtual System::Object^ M_x12() sealed  = System::Collections::ICollection::SyncRoot::get;
		//System::Collections::ICollection^::get_SyncRoot by M_x12
	public:
		virtual void M_x1(System::Array^ A_0,System::Int32 A_1) sealed  = System::Collections::ICollection::CopyTo;
		//System::Collections::ICollection^::CopyTo by M_x1
	public:
		T_x178();
	};
}
