#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x175  : Reflector::CodeModel::ITypeReference
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::ITypeCollection
		{
		private:
			System::Int32 F_x1;
		private:
			Reflector::CodeModel::ITypeReference^ F_x2;
		public:
			T_x1(Reflector::CodeModel::ITypeReference^ A_0,System::Int32 A_1);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::ITypeCollection::Clear;
			//Reflector::CodeModel::ITypeCollection^::Clear by M_x1
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
	private:
		System::WeakReference^ F_x1;
	private:
		System::Object^ F_x2;
	private:
		System::String^ F_x12;
	private:
		System::String^ F_x13;
	private:
		System::Int32 F_x8;
	public:
		T_x175();
	public:
		T_x175(System::Object^ A_0,System::String^ A_1,System::String^ A_2);
	public:
		virtual Reflector::CodeModel::ITypeReference^ M_x9() sealed  = Reflector::CodeModel::ITypeReference::GenericType::get;
		//Reflector::CodeModel::ITypeReference^::get_GenericType by M_x9
	public:
		virtual void M_x1(Reflector::CodeModel::ITypeReference^ A_0) sealed  = Reflector::CodeModel::ITypeReference::GenericType::set;
		//Reflector::CodeModel::ITypeReference^::set_GenericType by M_x1
	public:
		virtual System::Object^ M_x2() sealed  = Reflector::CodeModel::ITypeReference::Owner::get;
		//Reflector::CodeModel::ITypeReference^::get_Owner by M_x2
	public:
		virtual void M_x1(System::Object^ A_0) sealed  = Reflector::CodeModel::ITypeReference::Owner::set;
		//Reflector::CodeModel::ITypeReference^::set_Owner by M_x1
	public:
		virtual System::String^ M_x13() sealed  = Reflector::CodeModel::ITypeReference::Name::get;
		//Reflector::CodeModel::ITypeReference^::get_Name by M_x13
	public:
		virtual void M_x2(System::String^ A_0) sealed  = Reflector::CodeModel::ITypeReference::Name::set;
		//Reflector::CodeModel::ITypeReference^::set_Name by M_x2
	public:
		virtual System::String^ M_x1() sealed  = Reflector::CodeModel::ITypeReference::Namespace::get;
		//Reflector::CodeModel::ITypeReference^::get_Namespace by M_x1
	public:
		virtual void M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::ITypeReference::Namespace::set;
		//Reflector::CodeModel::ITypeReference^::set_Namespace by M_x1
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x5() sealed  = Reflector::CodeModel::ITypeReference::Resolve;
		//Reflector::CodeModel::ITypeReference^::Resolve by M_x5
	public:
		virtual System::Boolean M_x2(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x2
	public:
		virtual System::Int32 M_x12()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x12
	public:
		virtual System::String^ M_x8()  = System::Object::ToString;
		//System::Object^::ToString by M_x8
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	internal:
		void M_x1(System::Object^ A_0,System::String^ A_1,System::String^ A_2);
	public:
		property virtual Reflector::CodeModel::ITypeCollection^ GenericArguments
		{
			virtual Reflector::CodeModel::ITypeCollection^ get() sealed;
		}
	};
}
