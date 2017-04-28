#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x183
	{
	internal:
		enum class T_x1
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x0000000F
			,F_x12=(System::Int32)0x00000001
			,F_x13=(System::Int32)0x00000002
			,F_x8=(System::Int32)0x00000003
			,F_x5=(System::Int32)0x00000004
			,F_x9=(System::Int32)0x00000005
			,F_x4=(System::Int32)0x00000006
			,F_x15=(System::Int32)0x00000007
			,F_x11=(System::Int32)0x00000009
			,F_x10=(System::Int32)0x0000000A
			,F_x7=(System::Int32)0x0000000B
			,F_x16=(System::Int32)0x0000000C
			,F_x6=(System::Int32)0x0000000D
			,F_x14=(System::Int32)0x0000000E
			,F_x18=(System::Int32)0x00000010
			,F_x19=(System::Int32)0x00000011
			,F_x17=(System::Int32)0x00000012
		};
	private:
		T_x183();
	public:
		static Reflector::CodeModel::ITypeReference^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::String^ A_1,System::String^ A_2);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
	public:
		static System::Boolean M_x8(Reflector::CodeModel::IType^ A_0);
	public:
		static System::Boolean M_x13(Reflector::CodeModel::IType^ A_0);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0);
	public:
		static System::Boolean M_x13(Reflector::CodeModel::IStatement^ A_0);
	public:
		static System::Boolean M_x12(Reflector::CodeModel::IStatement^ A_0);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,System::String^ A_1,System::String^ A_2,System::String^ A_3,System::Int32 A_4);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::BinaryOperator A_1);
	public:
		static System::Boolean M_x12(Reflector::CodeModel::IType^ A_0);
	public:
		static System::Boolean M_x2(Reflector::CodeModel::IExpression^ A_0);
	public:
		static System::Boolean M_x2(Reflector::CodeModel::IType^ A_0);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::IExpression^ A_1);
	public:
		static System::Boolean M_x2(Reflector::CodeModel::ISwitchStatement^ A_0);
	public:
		static Reflector::CodeModel::IDefaultCase^ M_x1(Reflector::CodeModel::ISwitchStatement^ A_0);
	public:
		static Reflector::CodeModel::IStatement^ M_x12(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
	public:
		static System::Int32 M_x2(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
	public:
		static System::Int32 M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
	public:
		static Reflector::CodeModel::IVariableReferenceExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,System::Boolean A_1);
	public:
		static Reflector::CodeModel::IAssignExpression^ M_x2(Reflector::CodeModel::IStatement^ A_0);
	public:
		static Reflector::CodeModel::IUnaryExpression^ M_x1(Reflector::CodeModel::IStatement^ A_0);
	public:
		static Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0);
	public:
		static Reflector::CodeModel::BinaryOperator M_x1(Reflector::CodeModel::BinaryOperator A_0);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1);
	public:
		static Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1);
	public:
		static Reflector::CodeModel::ILabeledStatement^ M_x2(Reflector::CodeModel::IGotoStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1);
	private:
		static Reflector::CodeModel::ILabeledStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1);
	public:
		static System::Boolean M_x2(System::Int32 A_0);
	public:
		static System::Int32 M_x1(Reflector::CodeModel::IInstruction^ A_0);
	private:
		static Root::T_x183::T_x1 M_x1(System::Int32 A_0);
	public:
		static System::Boolean M_x13(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0);
	public:
		static System::Boolean M_x12(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		static System::String^ M_x2(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		static System::String^ M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	};
}
