#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x182  : Root::T_x129
	{
	private:
		Reflector::CodeModel::IType^ F_x1;
	private:
		Reflector::CodeModel::IMethodDeclaration^ F_x2;
	private:
		Reflector::CodeModel::IType^ F_x12;
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssembly^ A_0) override;
	public:
		virtual Reflector::CodeModel::IModule^ M_x1(Reflector::CodeModel::IModule^ A_0) override;
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x12(Reflector::CodeModel::IFieldDeclaration^ A_0)  = Root::T_x129::M_x1;
		//Root::T_x129^::M_x1 by M_x12
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ISwitchStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IUnaryExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x13(Reflector::CodeModel::ICastExpression^ A_0)  = Root::T_x129::M_x1;
		//Root::T_x129^::M_x1 by M_x13
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IConditionExpression^ A_0)  = Root::T_x129::M_x1;
		//Root::T_x129^::M_x1 by M_x8
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0) override;
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
	protected:
		Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IExpression^ A_0);
	protected:
		Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
	protected:
		Reflector::CodeModel::ITypeReference^ M_x1(System::String^ A_0,System::String^ A_1);
	protected:
		Reflector::CodeModel::IType^ M_x1();
	protected:
		Reflector::CodeModel::IType^ M_x2();
	protected:
		void M_x12(Reflector::CodeModel::IType^ A_0);
	protected:
		Reflector::CodeModel::IMethodDeclaration^ M_x13();
	protected:
		Reflector::CodeModel::ITypeDeclaration^ M_x12();
	public:
		T_x182();
	};
}
