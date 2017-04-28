#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x163  : Reflector::CodeModel::IMethodReturnType
	{
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x1;
	private:
		System::Object^ F_x2;
	internal:
		T_x163(Root::T_x161^ A_0);
	internal:
		T_x163(Reflector::CodeModel::IType^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1() sealed  = Reflector::CodeModel::IMethodReturnType::Type::get;
		//Reflector::CodeModel::IMethodReturnType^::get_Type by M_x1
	public:
		virtual void M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::IMethodReturnType::Type::set;
		//Reflector::CodeModel::IMethodReturnType^::set_Type by M_x1
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	public:
		virtual System::String^ M_x2()  = System::Object::ToString;
		//System::Object^::ToString by M_x2
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	};
}
