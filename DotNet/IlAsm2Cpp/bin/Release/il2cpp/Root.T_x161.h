#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x161  : Reflector::CodeModel::IMethodDeclaration
	{
		ref class T_x12;
		ref class T_x2;
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IMethodReferenceCollection
		{
		private:
			static Reflector::CodeModel::IMethodReferenceCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IMethodReference^>^ F_x2;
		public:
			T_x1(array<Reflector::CodeModel::IMethodReference^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IMethodReferenceCollection::Clear;
			//Reflector::CodeModel::IMethodReferenceCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::Add;
			//Reflector::CodeModel::IMethodReferenceCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::AddRange;
			//Reflector::CodeModel::IMethodReferenceCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::Remove;
			//Reflector::CodeModel::IMethodReferenceCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IMethodReference^ A_1) sealed  = Reflector::CodeModel::IMethodReferenceCollection::Insert;
			//Reflector::CodeModel::IMethodReferenceCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::RemoveAt;
			//Reflector::CodeModel::IMethodReferenceCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::Contains;
			//Reflector::CodeModel::IMethodReferenceCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::IndexOf;
			//Reflector::CodeModel::IMethodReferenceCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IMethodReference^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IMethodReferenceCollection::default::get;
			//Reflector::CodeModel::IMethodReferenceCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IMethodReference^ A_1) sealed  = Reflector::CodeModel::IMethodReferenceCollection::default::set;
			//Reflector::CodeModel::IMethodReferenceCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			static Reflector::CodeModel::IMethodReferenceCollection^ M_x1();
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
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Reflector::CodeModel::IParameterDeclaration
		{
		private:
			Root::T_x161^ F_x1;
		private:
			Reflector::CodeModel::IType^ F_x2;
		private:
			System::UInt32 F_x12;
		public:
			T_x12(Root::T_x161^ A_0);
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
		internal:
			void M_x2(Reflector::CodeModel::IType^ A_0);
		internal:
			void M_x1(System::Int32 A_0);
		internal:
			void M_x1(System::UInt16 A_0);
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
		ref class T_x2  : Reflector::CodeModel::IParameterDeclarationCollection
		{
		private:
			static Reflector::CodeModel::IParameterDeclarationCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IParameterDeclaration^>^ F_x2;
		public:
			T_x2(array<Reflector::CodeModel::IParameterDeclaration^>^ A_0);
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
		System::Int32 F_x1;
	private:
		System::String^ F_x2;
	private:
		System::Int32 F_x12;
	private:
		System::UInt16 F_x13;
	private:
		Root::T_x174^ F_x8;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x5;
	private:
		Reflector::CodeModel::MethodCallingConvention F_x9;
	private:
		Root::T_x163^ F_x4;
	private:
		array<Reflector::CodeModel::IMethodReference^>^ F_x15;
	private:
		array<Root::T_x161::T_x12^>^ F_x11;
	private:
		array<Root::T_x152^>^ F_x10;
	private:
		System::Object^ F_x7;
	public:
		T_x161(Root::T_x174^ A_0,System::Int32 A_1,System::UInt16 A_2,System::String^ A_3,System::Int32 A_4,System::Object^ A_5);
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::IMethodReferenceCollection^ M_x19() sealed  = Reflector::CodeModel::IMethodDeclaration::Overrides::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Overrides by M_x19
	public:
		virtual System::Object^ M_x16() sealed  = Reflector::CodeModel::IMethodDeclaration::Body::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Body by M_x16
	public:
		virtual void M_x1(System::Object^ A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Body::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Body by M_x1
	public:
		virtual Reflector::CodeModel::MethodVisibility M_x17() sealed  = Reflector::CodeModel::IMethodDeclaration::Visibility::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Visibility by M_x17
	public:
		virtual void M_x1(Reflector::CodeModel::MethodVisibility A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Visibility::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Visibility by M_x1
	public:
		virtual System::Boolean M_x14() sealed  = Reflector::CodeModel::IMethodDeclaration::Static::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Static by M_x14
	public:
		virtual void M_x4(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Static::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Static by M_x4
	public:
		virtual System::Boolean M_x5() sealed  = Reflector::CodeModel::IMethodDeclaration::Final::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Final by M_x5
	public:
		virtual void M_x12(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Final::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Final by M_x12
	public:
		virtual System::Boolean M_x10() sealed  = Reflector::CodeModel::IMethodDeclaration::Virtual::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Virtual by M_x10
	public:
		virtual void M_x5(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Virtual::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Virtual by M_x5
	public:
		virtual System::Boolean M_x18() sealed  = Reflector::CodeModel::IMethodDeclaration::HideBySignature::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_HideBySignature by M_x18
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::HideBySignature::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_HideBySignature by M_x1
	public:
		virtual System::Boolean M_x15() sealed  = Reflector::CodeModel::IMethodDeclaration::NewSlot::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_NewSlot by M_x15
	public:
		virtual void M_x2(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::NewSlot::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_NewSlot by M_x2
	public:
		virtual System::Boolean M_x12() sealed  = Reflector::CodeModel::IMethodDeclaration::Abstract::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_Abstract by M_x12
	public:
		virtual void M_x8(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::Abstract::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_Abstract by M_x8
	public:
		virtual System::Boolean M_x2() sealed  = Reflector::CodeModel::IMethodDeclaration::SpecialName::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_SpecialName by M_x2
	public:
		virtual void M_x9(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::SpecialName::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_SpecialName by M_x9
	public:
		virtual System::Boolean M_x8() sealed  = Reflector::CodeModel::IMethodDeclaration::RuntimeSpecialName::get;
		//Reflector::CodeModel::IMethodDeclaration^::get_RuntimeSpecialName by M_x8
	public:
		virtual void M_x13(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodDeclaration::RuntimeSpecialName::set;
		//Reflector::CodeModel::IMethodDeclaration^::set_RuntimeSpecialName by M_x13
	public:
		System::Int32 M_x9();
	internal:
		Root::T_x2^ M_x11();
	internal:
		System::Int32 M_x13();
	internal:
		Reflector::CodeModel::IParameterDeclaration^ M_x1(System::Int32 A_0);
	internal:
		void M_x1(System::Int32 A_0,System::Int32 A_1);
	internal:
		void M_x1(Reflector::CodeModel::IMethodReference^ A_0);
	internal:
		void M_x1(System::Int32 A_0,System::UInt16 A_1);
	internal:
		void M_x1(System::Int32 A_0,Root::T_x152^ A_1);
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	internal:
		System::Boolean M_x2(Reflector::CodeModel::IMethodReference^ A_0);
	private:
		void M_x1();
	internal:
		void M_x7();
	public:
		virtual System::Boolean M_x2(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x2
	public:
		virtual System::Int32 M_x6()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x6
	public:
		virtual System::String^ M_x4()  = System::Object::ToString;
		//System::Object^::ToString by M_x4
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
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
		property virtual System::String^ Documentation
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
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
		property virtual Reflector::CodeModel::IMethodReference^ GenericMethod
		{
			virtual Reflector::CodeModel::IMethodReference^ get() sealed;
			virtual void set(Reflector::CodeModel::IMethodReference^ value) sealed;
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
