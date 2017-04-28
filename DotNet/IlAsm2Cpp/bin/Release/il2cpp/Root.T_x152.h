#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x152  : Reflector::CodeModel::IGenericParameter
	{
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x1;
	private:
		Reflector::CodeModel::IGenericArgumentProvider^ F_x2;
	private:
		System::Int32 F_x12;
	private:
		System::UInt16 F_x13;
	private:
		System::String^ F_x8;
	private:
		array<Reflector::CodeModel::IType^>^ F_x5;
	public:
		T_x152(Reflector::CodeModel::IGenericArgumentProvider^ A_0,System::Int32 A_1,System::UInt16 A_2,System::String^ A_3);
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x2()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x2
	public:
		virtual Reflector::CodeModel::IType^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::GenericParameterVariance M_x8() sealed  = Reflector::CodeModel::IGenericParameter::Variance::get;
		//Reflector::CodeModel::IGenericParameter^::get_Variance by M_x8
	public:
		virtual void M_x1(Reflector::CodeModel::GenericParameterVariance A_0) sealed  = Reflector::CodeModel::IGenericParameter::Variance::set;
		//Reflector::CodeModel::IGenericParameter^::set_Variance by M_x1
	public:
		virtual System::String^ M_x12() sealed  = Reflector::CodeModel::IGenericParameter::Name::get;
		//Reflector::CodeModel::IGenericParameter^::get_Name by M_x12
	public:
		virtual void M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::IGenericParameter::Name::set;
		//Reflector::CodeModel::IGenericParameter^::set_Name by M_x1
	public:
		virtual Reflector::CodeModel::ITypeCollection^ M_x1() sealed  = Reflector::CodeModel::IGenericParameter::Constraints::get;
		//Reflector::CodeModel::IGenericParameter^::get_Constraints by M_x1
	public:
		virtual System::String^ M_x13()  = System::Object::ToString;
		//System::Object^::ToString by M_x13
	internal:
		void M_x1(Reflector::CodeModel::IType^ A_0);
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::IGenericArgumentProvider^ Owner
		{
			virtual Reflector::CodeModel::IGenericArgumentProvider^ get() sealed;
			virtual void set(Reflector::CodeModel::IGenericArgumentProvider^ value) sealed;
		}
	public:
		property virtual System::Int32 Position
		{
			virtual System::Int32 get() sealed;
			virtual void set(System::Int32 value) sealed;
		}
	};
}
