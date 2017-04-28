#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x173  : Reflector::CodeModel::ITypeCollection
	{
	private:
		static Reflector::CodeModel::ITypeCollection^ F_x1;
	private:
		array<Reflector::CodeModel::IType^>^ F_x2;
	public:
		T_x173(array<Reflector::CodeModel::IType^>^ A_0);
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
	public:
		virtual void M_x2() sealed  = Reflector::CodeModel::ITypeCollection::Clear;
		//Reflector::CodeModel::ITypeCollection^::Clear by M_x2
	public:
		virtual void M_x12(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::ITypeCollection::Add;
		//Reflector::CodeModel::ITypeCollection^::Add by M_x12
	public:
		virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::ITypeCollection::AddRange;
		//Reflector::CodeModel::ITypeCollection^::AddRange by M_x1
	public:
		virtual void M_x13(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::ITypeCollection::Remove;
		//Reflector::CodeModel::ITypeCollection^::Remove by M_x13
	public:
		virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IType^ A_1) sealed  = Reflector::CodeModel::ITypeCollection::Insert;
		//Reflector::CodeModel::ITypeCollection^::Insert by M_x1
	public:
		virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::ITypeCollection::RemoveAt;
		//Reflector::CodeModel::ITypeCollection^::RemoveAt by M_x2
	public:
		virtual System::Boolean M_x2(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::ITypeCollection::Contains;
		//Reflector::CodeModel::ITypeCollection^::Contains by M_x2
	public:
		virtual System::Int32 M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::ITypeCollection::IndexOf;
		//Reflector::CodeModel::ITypeCollection^::IndexOf by M_x1
	public:
		virtual Reflector::CodeModel::IType^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::ITypeCollection::default::get;
		//Reflector::CodeModel::ITypeCollection^::get_Item by M_x1
	public:
		virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IType^ A_1) sealed  = Reflector::CodeModel::ITypeCollection::default::set;
		//Reflector::CodeModel::ITypeCollection^::set_Item by M_x2
	public:
		virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
	public:
		static Reflector::CodeModel::ITypeCollection^ M_x1();
	private:
		static T_x173();
	public:
		property virtual System::Int32 Count
		{
			virtual System::Int32 get() sealed;
		}
	public:
		property virtual System::Boolean IsSynchronized
		{
			virtual System::Boolean get() sealed;
		}
	public:
		property virtual System::Object^ SyncRoot
		{
			virtual System::Object^ get() sealed;
		}
	};
}
