#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x153  : Reflector::CodeModel::IInstruction
	{
	private:
		Root::T_x161^ F_x1;
	private:
		System::Int32 F_x2;
	private:
		System::Int32 F_x12;
	private:
		System::Object^ F_x13;
	internal:
		T_x153(Root::T_x161^ A_0,System::Int32 A_1,System::Int32 A_2,System::Object^ A_3);
	public:
		virtual System::Int32 M_x13() sealed  = Reflector::CodeModel::IInstruction::Offset::get;
		//Reflector::CodeModel::IInstruction^::get_Offset by M_x13
	public:
		virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IInstruction::Offset::set;
		//Reflector::CodeModel::IInstruction^::set_Offset by M_x2
	public:
		virtual System::Int32 M_x12() sealed  = Reflector::CodeModel::IInstruction::Code::get;
		//Reflector::CodeModel::IInstruction^::get_Code by M_x12
	public:
		virtual void M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IInstruction::Code::set;
		//Reflector::CodeModel::IInstruction^::set_Code by M_x1
	public:
		virtual System::Object^ M_x2() sealed  = Reflector::CodeModel::IInstruction::Value::get;
		//Reflector::CodeModel::IInstruction^::get_Value by M_x2
	public:
		virtual void M_x1(System::Object^ A_0) sealed  = Reflector::CodeModel::IInstruction::Value::set;
		//Reflector::CodeModel::IInstruction^::set_Value by M_x1
	public:
		virtual System::Boolean M_x2(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x2
	public:
		virtual System::Int32 M_x1()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x1
	public:
		virtual System::String^ M_x8()  = System::Object::ToString;
		//System::Object^::ToString by M_x8
	};
}
