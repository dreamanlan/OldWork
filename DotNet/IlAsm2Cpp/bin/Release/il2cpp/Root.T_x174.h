#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x174  : Reflector::CodeModel::ITypeDeclaration
	{
		ref class T_x12;
		ref class T_x13;
		ref class T_x1;
		ref class T_x2;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IPropertyDeclarationCollection
		{
		private:
			array<Reflector::CodeModel::IPropertyDeclaration^>^ F_x1;
		public:
			T_x1(array<Reflector::CodeModel::IPropertyDeclaration^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::Clear;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::Add;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::AddRange;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::Remove;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IPropertyDeclaration^ A_1) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::Insert;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::Contains;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::default::get;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IPropertyDeclaration^ A_1) sealed  = Reflector::CodeModel::IPropertyDeclarationCollection::default::set;
			//Reflector::CodeModel::IPropertyDeclarationCollection^::set_Item by M_x2
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
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Reflector::CodeModel::IFieldDeclarationCollection
		{
		private:
			array<Reflector::CodeModel::IFieldDeclaration^>^ F_x1;
		public:
			T_x12(array<Reflector::CodeModel::IFieldDeclaration^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IFieldDeclarationCollection::Clear;
			//Reflector::CodeModel::IFieldDeclarationCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::Add;
			//Reflector::CodeModel::IFieldDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::AddRange;
			//Reflector::CodeModel::IFieldDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IFieldDeclaration^ A_1) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::Insert;
			//Reflector::CodeModel::IFieldDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::Remove;
			//Reflector::CodeModel::IFieldDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IFieldDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::Contains;
			//Reflector::CodeModel::IFieldDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IFieldDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::default::get;
			//Reflector::CodeModel::IFieldDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IFieldDeclaration^ A_1) sealed  = Reflector::CodeModel::IFieldDeclarationCollection::default::set;
			//Reflector::CodeModel::IFieldDeclarationCollection^::set_Item by M_x2
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
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Reflector::CodeModel::IMethodDeclarationCollection
		{
		private:
			array<Reflector::CodeModel::IMethodDeclaration^>^ F_x1;
		public:
			T_x13(array<Reflector::CodeModel::IMethodDeclaration^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IMethodDeclarationCollection::Clear;
			//Reflector::CodeModel::IMethodDeclarationCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::Add;
			//Reflector::CodeModel::IMethodDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::AddRange;
			//Reflector::CodeModel::IMethodDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::Remove;
			//Reflector::CodeModel::IMethodDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IMethodDeclaration^ A_1) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::Insert;
			//Reflector::CodeModel::IMethodDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IMethodDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::Contains;
			//Reflector::CodeModel::IMethodDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IMethodDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::default::get;
			//Reflector::CodeModel::IMethodDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IMethodDeclaration^ A_1) sealed  = Reflector::CodeModel::IMethodDeclarationCollection::default::set;
			//Reflector::CodeModel::IMethodDeclarationCollection^::set_Item by M_x2
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
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Reflector::CodeModel::IEventDeclarationCollection
		{
		private:
			array<Reflector::CodeModel::IEventDeclaration^>^ F_x1;
		public:
			T_x2(array<Reflector::CodeModel::IEventDeclaration^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IEventDeclarationCollection::Clear;
			//Reflector::CodeModel::IEventDeclarationCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::Add;
			//Reflector::CodeModel::IEventDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::AddRange;
			//Reflector::CodeModel::IEventDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::Remove;
			//Reflector::CodeModel::IEventDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IEventDeclaration^ A_1) sealed  = Reflector::CodeModel::IEventDeclarationCollection::Insert;
			//Reflector::CodeModel::IEventDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IEventDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::Contains;
			//Reflector::CodeModel::IEventDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IEventDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IEventDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IEventDeclarationCollection::default::get;
			//Reflector::CodeModel::IEventDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IEventDeclaration^ A_1) sealed  = Reflector::CodeModel::IEventDeclarationCollection::default::set;
			//Reflector::CodeModel::IEventDeclarationCollection^::set_Item by M_x2
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
		Root::T_x2^ F_x1;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x2;
	private:
		Reflector::CodeModel::ITypeDeclaration^ F_x12;
	private:
		Reflector::CodeModel::ITypeDeclarationCollection^ F_x13;
	private:
		array<Reflector::CodeModel::IMethodDeclaration^>^ F_x8;
	private:
		array<Reflector::CodeModel::IFieldDeclaration^>^ F_x5;
	private:
		array<Reflector::CodeModel::IPropertyDeclaration^>^ F_x9;
	private:
		array<Reflector::CodeModel::IEventDeclaration^>^ F_x4;
	private:
		Reflector::CodeModel::ITypeReferenceCollection^ F_x15;
	private:
		array<Reflector::CodeModel::IGenericParameter^>^ F_x11;
	private:
		System::UInt32 F_x10;
	private:
		System::String^ F_x7;
	private:
		System::String^ F_x16;
	private:
		System::Int32 F_x6;
	public:
		T_x174(Root::T_x2^ A_0,System::UInt32 A_1,System::String^ A_2,System::String^ A_3,System::Int32 A_4);
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ Resolve() sealed;
	internal:
		Root::T_x2^ M_x4();
	public:
		virtual Reflector::CodeModel::ITypeReference^ M_x18() sealed  = Reflector::CodeModel::ITypeDeclaration::BaseType::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_BaseType by M_x18
	public:
		virtual void M_x2(Reflector::CodeModel::ITypeReference^ A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::BaseType::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_BaseType by M_x2
	public:
		virtual Reflector::CodeModel::ITypeReferenceCollection^ M_x8() sealed  = Reflector::CodeModel::ITypeDeclaration::Interfaces::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Interfaces by M_x8
	public:
		virtual Reflector::CodeModel::ITypeDeclarationCollection^ M_x6() sealed  = Reflector::CodeModel::ITypeDeclaration::NestedTypes::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_NestedTypes by M_x6
	public:
		virtual Reflector::CodeModel::IMethodDeclarationCollection^ M_x16() sealed  = Reflector::CodeModel::ITypeDeclaration::Methods::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Methods by M_x16
	public:
		virtual Reflector::CodeModel::IFieldDeclarationCollection^ M_x14() sealed  = Reflector::CodeModel::ITypeDeclaration::Fields::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Fields by M_x14
	public:
		virtual Reflector::CodeModel::IPropertyDeclarationCollection^ M_x7() sealed  = Reflector::CodeModel::ITypeDeclaration::Properties::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Properties by M_x7
	public:
		virtual Reflector::CodeModel::IEventDeclarationCollection^ M_x11() sealed  = Reflector::CodeModel::ITypeDeclaration::Events::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Events by M_x11
	public:
		virtual Reflector::CodeModel::TypeVisibility M_x19() sealed  = Reflector::CodeModel::ITypeDeclaration::Visibility::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Visibility by M_x19
	public:
		virtual void M_x1(Reflector::CodeModel::TypeVisibility A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::Visibility::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_Visibility by M_x1
	public:
		virtual System::Boolean M_x9() sealed  = Reflector::CodeModel::ITypeDeclaration::Interface::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Interface by M_x9
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::Interface::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_Interface by M_x1
	public:
		virtual System::Boolean M_x5() sealed  = Reflector::CodeModel::ITypeDeclaration::Abstract::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Abstract by M_x5
	public:
		virtual void M_x2(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::Abstract::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_Abstract by M_x2
	public:
		virtual System::Boolean M_x13() sealed  = Reflector::CodeModel::ITypeDeclaration::Sealed::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_Sealed by M_x13
	public:
		virtual void M_x12(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::Sealed::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_Sealed by M_x12
	public:
		virtual System::Boolean M_x1() sealed  = Reflector::CodeModel::ITypeDeclaration::SpecialName::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_SpecialName by M_x1
	public:
		virtual void M_x13(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::SpecialName::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_SpecialName by M_x13
	public:
		virtual System::Boolean M_x2() sealed  = Reflector::CodeModel::ITypeDeclaration::RuntimeSpecialName::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_RuntimeSpecialName by M_x2
	public:
		virtual void M_x8(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::RuntimeSpecialName::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_RuntimeSpecialName by M_x8
	public:
		virtual System::Boolean M_x15() sealed  = Reflector::CodeModel::ITypeDeclaration::BeforeFieldInit::get;
		//Reflector::CodeModel::ITypeDeclaration^::get_BeforeFieldInit by M_x15
	public:
		virtual void M_x5(System::Boolean A_0) sealed  = Reflector::CodeModel::ITypeDeclaration::BeforeFieldInit::set;
		//Reflector::CodeModel::ITypeDeclaration^::set_BeforeFieldInit by M_x5
	internal:
		void M_x1(array<Reflector::CodeModel::IFieldDeclaration^>^ A_0);
	internal:
		void M_x1(array<Reflector::CodeModel::IMethodDeclaration^>^ A_0);
	internal:
		void M_x1(array<Reflector::CodeModel::IPropertyDeclaration^>^ A_0);
	internal:
		void M_x1(array<Reflector::CodeModel::IEventDeclaration^>^ A_0);
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	internal:
		void M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0);
	internal:
		void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	internal:
		void M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		void M_x1(System::Int32 A_0,Reflector::CodeModel::IGenericParameter^ A_1);
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x10()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x10
	public:
		virtual System::String^ M_x12()  = System::Object::ToString;
		//System::Object^::ToString by M_x12
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	public:
		property virtual System::String^ Documentation
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual Reflector::CodeModel::ITypeCollection^ GenericArguments
		{
			virtual Reflector::CodeModel::ITypeCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::ITypeReference^ GenericType
		{
			virtual Reflector::CodeModel::ITypeReference^ get() sealed;
			virtual void set(Reflector::CodeModel::ITypeReference^ value) sealed;
		}
	public:
		property virtual System::String^ Name
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual System::String^ Namespace
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual System::Object^ Owner
		{
			virtual System::Object^ get() sealed;
			virtual void set(System::Object^ value) sealed;
		}
	};
}
