#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x11  : Reflector::CodeModel::ICustomAttributeCollection
	{
	private:
		static Reflector::CodeModel::ICustomAttributeCollection^ F_x1;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x2;
	public:
		T_x11(array<Reflector::CodeModel::ICustomAttribute^>^ A_0);
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
	public:
		virtual void M_x2() sealed  = Reflector::CodeModel::ICustomAttributeCollection::Clear;
		//Reflector::CodeModel::ICustomAttributeCollection^::Clear by M_x2
	public:
		virtual void M_x12(Reflector::CodeModel::ICustomAttribute^ A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::Add;
		//Reflector::CodeModel::ICustomAttributeCollection^::Add by M_x12
	public:
		virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::AddRange;
		//Reflector::CodeModel::ICustomAttributeCollection^::AddRange by M_x1
	public:
		virtual void M_x13(Reflector::CodeModel::ICustomAttribute^ A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::Remove;
		//Reflector::CodeModel::ICustomAttributeCollection^::Remove by M_x13
	public:
		virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::ICustomAttribute^ A_1) sealed  = Reflector::CodeModel::ICustomAttributeCollection::Insert;
		//Reflector::CodeModel::ICustomAttributeCollection^::Insert by M_x1
	public:
		virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::RemoveAt;
		//Reflector::CodeModel::ICustomAttributeCollection^::RemoveAt by M_x2
	public:
		virtual System::Boolean M_x2(Reflector::CodeModel::ICustomAttribute^ A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::Contains;
		//Reflector::CodeModel::ICustomAttributeCollection^::Contains by M_x2
	public:
		virtual System::Int32 M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::IndexOf;
		//Reflector::CodeModel::ICustomAttributeCollection^::IndexOf by M_x1
	public:
		virtual Reflector::CodeModel::ICustomAttribute^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::ICustomAttributeCollection::default::get;
		//Reflector::CodeModel::ICustomAttributeCollection^::get_Item by M_x1
	public:
		virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::ICustomAttribute^ A_1) sealed  = Reflector::CodeModel::ICustomAttributeCollection::default::set;
		//Reflector::CodeModel::ICustomAttributeCollection^::set_Item by M_x2
	public:
		virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
	public:
		static Reflector::CodeModel::ICustomAttributeCollection^ M_x1();
	private:
		static T_x11();
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
