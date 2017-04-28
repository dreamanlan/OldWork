#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x165  : Reflector::CodeModel::IPropertyDeclaration
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IParameterDeclarationCollection
		{
		private:
			static Reflector::CodeModel::IParameterDeclarationCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IParameterDeclaration^>^ F_x2;
		public:
			T_x1(array<Reflector::CodeModel::IParameterDeclaration^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IParameterDeclarationCollection::Clear;
			//Reflector::CodeModel::IParameterDeclarationCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IParameterDeclaration^ A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::Add;
			//Reflector::CodeModel::IParameterDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::AddRange;
			//Reflector::CodeModel::IParameterDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IParameterDeclaration^ A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::Remove;
			//Reflector::CodeModel::IParameterDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::Insert;
			//Reflector::CodeModel::IParameterDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IParameterDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IParameterDeclaration^ A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::Contains;
			//Reflector::CodeModel::IParameterDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IParameterDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IParameterDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::default::get;
			//Reflector::CodeModel::IParameterDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IParameterDeclaration^ A_1) sealed  = Reflector::CodeModel::IParameterDeclarationCollection::default::set;
			//Reflector::CodeModel::IParameterDeclarationCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			static Reflector::CodeModel::IParameterDeclarationCollection^ M_x1();
		private:
			static T_x1();
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
		Root::T_x174^ F_x1;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x2;
	private:
		System::UInt16 F_x12;
	private:
		System::Int32 F_x13;
	private:
		Reflector::CodeModel::IType^ F_x8;
	private:
		array<Reflector::CodeModel::IParameterDeclaration^>^ F_x5;
	private:
		Reflector::CodeModel::IExpression^ F_x9;
	private:
		Reflector::CodeModel::IMethodReference^ F_x4;
	private:
		Reflector::CodeModel::IMethodReference^ F_x15;
	public:
		T_x165(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3);
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::Int32 M_x13()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x13
	public:
		virtual System::String^ M_x5()  = System::Object::ToString;
		//System::Object^::ToString by M_x5
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1() sealed  = Reflector::CodeModel::IPropertyDeclaration::Initializer::get;
		//Reflector::CodeModel::IPropertyDeclaration^::get_Initializer by M_x1
	public:
		virtual void M_x1(Reflector::CodeModel::IExpression^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclaration::Initializer::set;
		//Reflector::CodeModel::IPropertyDeclaration^::set_Initializer by M_x1
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x2() sealed  = Reflector::CodeModel::IPropertyDeclaration::SetMethod::get;
		//Reflector::CodeModel::IPropertyDeclaration^::get_SetMethod by M_x2
	public:
		virtual void M_x2(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclaration::SetMethod::set;
		//Reflector::CodeModel::IPropertyDeclaration^::set_SetMethod by M_x2
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x9() sealed  = Reflector::CodeModel::IPropertyDeclaration::GetMethod::get;
		//Reflector::CodeModel::IPropertyDeclaration^::get_GetMethod by M_x9
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IPropertyDeclaration::GetMethod::set;
		//Reflector::CodeModel::IPropertyDeclaration^::set_GetMethod by M_x1
	public:
		virtual System::Boolean M_x12() sealed  = Reflector::CodeModel::IPropertyDeclaration::SpecialName::get;
		//Reflector::CodeModel::IPropertyDeclaration^::get_SpecialName by M_x12
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IPropertyDeclaration::SpecialName::set;
		//Reflector::CodeModel::IPropertyDeclaration^::set_SpecialName by M_x1
	public:
		virtual System::Boolean M_x8() sealed  = Reflector::CodeModel::IPropertyDeclaration::RuntimeSpecialName::get;
		//Reflector::CodeModel::IPropertyDeclaration^::get_RuntimeSpecialName by M_x8
	public:
		virtual void M_x2(System::Boolean A_0) sealed  = Reflector::CodeModel::IPropertyDeclaration::RuntimeSpecialName::set;
		//Reflector::CodeModel::IPropertyDeclaration^::set_RuntimeSpecialName by M_x2
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::IType^ DeclaringType
		{
			virtual Reflector::CodeModel::IType^ get() sealed;
			virtual void set(Reflector::CodeModel::IType^ value) sealed;
		}
	public:
		property virtual System::String^ Documentation
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual System::String^ Name
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual Reflector::CodeModel::IParameterDeclarationCollection^ Parameters
		{
			virtual Reflector::CodeModel::IParameterDeclarationCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::IType^ PropertyType
		{
			virtual Reflector::CodeModel::IType^ get() sealed;
			virtual void set(Reflector::CodeModel::IType^ value) sealed;
		}
	};
}
