#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x143  : Reflector::CodeModel::ICustomAttribute
	{
	private:
		Root::T_x2^ F_x1;
	private:
		Reflector::CodeModel::IMethodReference^ F_x2;
	private:
		array<Reflector::CodeModel::IExpression^>^ F_x12;
	private:
		System::Object^ F_x13;
	public:
		T_x143(Root::T_x2^ A_0,Reflector::CodeModel::IMethodReference^ A_1,System::Int32 A_2);
	public:
		T_x143(Reflector::CodeModel::IMethodReference^ A_0,array<Reflector::CodeModel::IExpression^>^ A_1);
	public:
		T_x143(Root::T_x2^ A_0,Reflector::CodeModel::IMethodReference^ A_1,array<Reflector::CodeModel::IExpression^>^ A_2,array<System::Byte>^ A_3);
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x2() sealed  = Reflector::CodeModel::ICustomAttribute::Constructor::get;
		//Reflector::CodeModel::ICustomAttribute^::get_Constructor by M_x2
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodReference^ A_0) sealed  = Reflector::CodeModel::ICustomAttribute::Constructor::set;
		//Reflector::CodeModel::ICustomAttribute^::set_Constructor by M_x1
	public:
		virtual Reflector::CodeModel::IExpressionCollection^ M_x1() sealed  = Reflector::CodeModel::ICustomAttribute::Arguments::get;
		//Reflector::CodeModel::ICustomAttribute^::get_Arguments by M_x1
	private:
		Reflector::CodeModel::IExpression^ M_x1(Root::T_x139^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Root::T_x139^ A_0,Reflector::CodeModel::IType^ A_1);
	private:
		static Reflector::CodeModel::ILiteralExpression^ M_x1(System::Object^ A_0);
	internal:
		static System::Boolean M_x12(Reflector::CodeModel::IType^ A_0);
	private:
		Reflector::CodeModel::IType^ M_x2(Reflector::CodeModel::IType^ A_0);
	private:
		static Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IType^ A_0);
	public:
		virtual System::String^ M_x12()  = System::Object::ToString;
		//System::Object^::ToString by M_x12
	};
}
