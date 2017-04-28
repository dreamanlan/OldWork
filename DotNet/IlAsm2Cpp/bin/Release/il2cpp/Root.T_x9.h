#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x9  : Reflector::CodeModel::IFieldDeclaration
	{
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
		Reflector::CodeModel::IExpression^ F_x5;
	public:
		T_x9(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3);
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::FieldVisibility M_x8() sealed  = Reflector::CodeModel::IFieldDeclaration::Visibility::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_Visibility by M_x8
	public:
		virtual void M_x1(Reflector::CodeModel::FieldVisibility A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::Visibility::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_Visibility by M_x1
	public:
		virtual System::Boolean M_x2() sealed  = Reflector::CodeModel::IFieldDeclaration::Static::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_Static by M_x2
	public:
		virtual void M_x12(System::Boolean A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::Static::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_Static by M_x12
	public:
		virtual System::Boolean M_x9() sealed  = Reflector::CodeModel::IFieldDeclaration::ReadOnly::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_ReadOnly by M_x9
	public:
		virtual void M_x2(System::Boolean A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::ReadOnly::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_ReadOnly by M_x2
	public:
		virtual System::Boolean M_x12() sealed  = Reflector::CodeModel::IFieldDeclaration::Literal::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_Literal by M_x12
	public:
		virtual void M_x8(System::Boolean A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::Literal::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_Literal by M_x8
	public:
		virtual System::Boolean M_x13() sealed  = Reflector::CodeModel::IFieldDeclaration::SpecialName::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_SpecialName by M_x13
	public:
		virtual void M_x13(System::Boolean A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::SpecialName::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_SpecialName by M_x13
	public:
		virtual System::Boolean M_x15() sealed  = Reflector::CodeModel::IFieldDeclaration::RuntimeSpecialName::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_RuntimeSpecialName by M_x15
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::RuntimeSpecialName::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_RuntimeSpecialName by M_x1
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1() sealed  = Reflector::CodeModel::IFieldDeclaration::Initializer::get;
		//Reflector::CodeModel::IFieldDeclaration^::get_Initializer by M_x1
	public:
		virtual void M_x1(Reflector::CodeModel::IExpression^ A_0) sealed  = Reflector::CodeModel::IFieldDeclaration::Initializer::set;
		//Reflector::CodeModel::IFieldDeclaration^::set_Initializer by M_x1
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x5()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x5
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
		property virtual Reflector::CodeModel::IType^ FieldType
		{
			virtual Reflector::CodeModel::IType^ get() sealed;
			virtual void set(Reflector::CodeModel::IType^ value) sealed;
		}
	public:
		property virtual System::String^ Name
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	};
}
