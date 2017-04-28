#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x151  : Reflector::CodeModel::IFieldReference
	{
	private:
		System::WeakReference^ F_x1;
	private:
		Root::T_x2^ F_x2;
	private:
		Reflector::CodeModel::IGenericArgumentProvider^ F_x12;
	private:
		Reflector::CodeModel::IGenericArgumentProvider^ F_x13;
	private:
		System::Int32 F_x8;
	private:
		System::String^ F_x5;
	private:
		System::Int32 F_x9;
	public:
		T_x151(Root::T_x2^ A_0,System::Int32 A_1,System::String^ A_2,System::Int32 A_3,Reflector::CodeModel::IGenericArgumentProvider^ A_4,Reflector::CodeModel::IGenericArgumentProvider^ A_5);
	public:
		virtual Reflector::CodeModel::IType^ M_x12() sealed  = Reflector::CodeModel::IFieldReference::FieldType::get;
		//Reflector::CodeModel::IFieldReference^::get_FieldType by M_x12
	public:
		virtual void M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::IFieldReference::FieldType::set;
		//Reflector::CodeModel::IFieldReference^::set_FieldType by M_x1
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x1() sealed  = Reflector::CodeModel::IFieldReference::Resolve;
		//Reflector::CodeModel::IFieldReference^::Resolve by M_x1
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x2()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x2
	public:
		virtual System::String^ M_x13()  = System::Object::ToString;
		//System::Object^::ToString by M_x13
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		property virtual Reflector::CodeModel::IType^ DeclaringType
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
