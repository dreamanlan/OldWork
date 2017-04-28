#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x150  : Reflector::CodeModel::IEventDeclaration
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
		System::Int32 F_x8;
	private:
		Reflector::CodeModel::IMethodReference^ F_x5;
	private:
		Reflector::CodeModel::IMethodReference^ F_x9;
	private:
		Reflector::CodeModel::IMethodReference^ F_x4;
	public:
		T_x150(Root::T_x174^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3);
	public:
		virtual System::Int32 M_x13()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x13
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::String^ M_x5()  = System::Object::ToString;
		//System::Object^::ToString by M_x5
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x12() sealed  = Reflector::CodeModel::IEventDeclaration::AddMethod::get;
		//Reflector::CodeModel::IEventDeclaration^::get_AddMethod by M_x12
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IEventDeclaration::AddMethod::set;
		//Reflector::CodeModel::IEventDeclaration^::set_AddMethod by M_x1
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x2() sealed  = Reflector::CodeModel::IEventDeclaration::InvokeMethod::get;
		//Reflector::CodeModel::IEventDeclaration^::get_InvokeMethod by M_x2
	public:
		virtual void M_x5(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IEventDeclaration::InvokeMethod::set;
		//Reflector::CodeModel::IEventDeclaration^::set_InvokeMethod by M_x5
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x1() sealed  = Reflector::CodeModel::IEventDeclaration::RemoveMethod::get;
		//Reflector::CodeModel::IEventDeclaration^::get_RemoveMethod by M_x1
	public:
		virtual void M_x12(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::IEventDeclaration::RemoveMethod::set;
		//Reflector::CodeModel::IEventDeclaration^::set_RemoveMethod by M_x12
	public:
		virtual System::Boolean M_x9() sealed  = Reflector::CodeModel::IEventDeclaration::SpecialName::get;
		//Reflector::CodeModel::IEventDeclaration^::get_SpecialName by M_x9
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IEventDeclaration::SpecialName::set;
		//Reflector::CodeModel::IEventDeclaration^::set_SpecialName by M_x1
	public:
		virtual System::Boolean M_x8() sealed  = Reflector::CodeModel::IEventDeclaration::RuntimeSpecialName::get;
		//Reflector::CodeModel::IEventDeclaration^::get_RuntimeSpecialName by M_x8
	public:
		virtual void M_x2(System::Boolean A_0) sealed  = Reflector::CodeModel::IEventDeclaration::RuntimeSpecialName::set;
		//Reflector::CodeModel::IEventDeclaration^::set_RuntimeSpecialName by M_x2
	internal:
		void M_x2(Reflector::CodeModel::IMethodReference^ A_0);
	internal:
		void M_x13(Reflector::CodeModel::IMethodReference^ A_0);
	internal:
		void M_x8(Reflector::CodeModel::IMethodReference^ A_0);
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
		property virtual Reflector::CodeModel::ITypeReference^ EventType
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
	};
}
