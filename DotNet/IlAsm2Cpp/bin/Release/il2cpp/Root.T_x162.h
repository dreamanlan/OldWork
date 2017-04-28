#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x162  : Reflector::CodeModel::IMethodReference
	{
		ref class T_x1;
		ref class T_x2;
		ref class T_x12;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IParameterDeclaration
		{
		private:
			Reflector::CodeModel::IType^ F_x1;
		public:
			T_x1(Reflector::CodeModel::IType^ A_0);
		public:
			virtual Reflector::CodeModel::IParameterDeclaration^ Resolve() sealed;
		public:
			virtual Reflector::CodeModel::IType^ M_x1() sealed  = Reflector::CodeModel::IParameterDeclaration::ParameterType::get;
			//Reflector::CodeModel::IParameterDeclaration^::get_ParameterType by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::IParameterDeclaration::ParameterType::set;
			//Reflector::CodeModel::IParameterDeclaration^::set_ParameterType by M_x1
		public:
			virtual Reflector::CodeModel::IExpression^ M_x2() sealed  = Reflector::CodeModel::IParameterDeclaration::DefaultValue::get;
			//Reflector::CodeModel::IParameterDeclaration^::get_DefaultValue by M_x2
		public:
			virtual void M_x1(Reflector::CodeModel::IExpression^ A_0) sealed  = Reflector::CodeModel::IParameterDeclaration::DefaultValue::set;
			//Reflector::CodeModel::IParameterDeclaration^::set_DefaultValue by M_x1
		public:
			property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
			{
				virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
			}
		public:
			property virtual System::String^ Name
			{
				virtual System::String^ get() sealed;
				virtual void set(System::String^ value) sealed;
			}
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Reflector::CodeModel::ITypeCollection
		{
		private:
			System::Int32 F_x1;
		private:
			Reflector::CodeModel::IMethodReference^ F_x2;
		public:
			T_x12(Reflector::CodeModel::IMethodReference^ A_0,System::Int32 A_1);
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
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Reflector::CodeModel::IParameterDeclarationCollection
		{
		private:
			static Reflector::CodeModel::IParameterDeclarationCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IType^>^ F_x2;
		public:
			T_x2(array<Reflector::CodeModel::IType^>^ A_0);
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
			static T_x2();
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
		Root::T_x2^ F_x2;
	private:
		System::Int32 F_x12;
	private:
		Reflector::CodeModel::IType^ F_x13;
	private:
		System::String^ F_x8;
	private:
		System::Int32 F_x5;
	private:
		Reflector::CodeModel::IGenericArgumentProvider^ F_x9;
	private:
		Reflector::CodeModel::IGenericArgumentProvider^ F_x4;
	private:
		System::Byte F_x15;
	private:
		System::Int32 F_x11;
	private:
		Reflector::CodeModel::IType^ F_x10;
	private:
		array<Reflector::CodeModel::IType^>^ F_x7;
	public:
		T_x162(Root::T_x2^ A_0,System::Int32 A_1,Reflector::CodeModel::IType^ A_2,System::String^ A_3,System::Int32 A_4,Reflector::CodeModel::IGenericArgumentProvider^ A_5,Reflector::CodeModel::IGenericArgumentProvider^ A_6);
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x12() sealed  = Reflector::CodeModel::IMethodReference::GenericMethod::get;
		//Reflector::CodeModel::IMethodReference^::get_GenericMethod by M_x12
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IMethodReference::GenericMethod::set;
		//Reflector::CodeModel::IMethodReference^::set_GenericMethod by M_x1
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x2() sealed  = Reflector::CodeModel::IMethodReference::Resolve;
		//Reflector::CodeModel::IMethodReference^::Resolve by M_x2
	public:
		virtual System::String^ M_x8()  = System::Object::ToString;
		//System::Object^::ToString by M_x8
	private:
		void M_x1();
	internal:
		void M_x1(Reflector::CodeModel::IType^ A_0);
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x13()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x13
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		property virtual Reflector::CodeModel::MethodCallingConvention CallingConvention
		{
			virtual Reflector::CodeModel::MethodCallingConvention get() sealed;
			virtual void set(Reflector::CodeModel::MethodCallingConvention value) sealed;
		}
	public:
		property virtual Reflector::CodeModel::IType^ DeclaringType
		{
			virtual Reflector::CodeModel::IType^ get() sealed;
			virtual void set(Reflector::CodeModel::IType^ value) sealed;
		}
	public:
		property virtual System::Boolean ExplicitThis
		{
			virtual System::Boolean get() sealed;
			virtual void set(System::Boolean value) sealed;
		}
	public:
		property virtual Reflector::CodeModel::ITypeCollection^ GenericArguments
		{
			virtual Reflector::CodeModel::ITypeCollection^ get() sealed;
		}
	public:
		property virtual System::Boolean HasThis
		{
			virtual System::Boolean get() sealed;
			virtual void set(System::Boolean value) sealed;
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
		property virtual Reflector::CodeModel::IMethodReturnType^ ReturnType
		{
			virtual Reflector::CodeModel::IMethodReturnType^ get() sealed;
			virtual void set(Reflector::CodeModel::IMethodReturnType^ value) sealed;
		}
	};
}
