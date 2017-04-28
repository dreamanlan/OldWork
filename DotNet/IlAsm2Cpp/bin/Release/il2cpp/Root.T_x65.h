#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x65  : Root::T_x61
	{
	private:
		Reflector::CodeModel::INamespace^ F_x1;
	private:
		System::Collections::ArrayList^ F_x2;
	public:
		System::Collections::ICollection^ M_x1();
	public:
		virtual void M_x1(Reflector::CodeModel::INamespace^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) override;
	public:
		virtual void M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ICastExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ITryCastExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::ICanCastExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0) override;
	public:
		virtual void M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0) override;
	private:
		void M_x2(Reflector::CodeModel::IExpression^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IType^ A_0);
	private:
		void M_x1(System::String^ A_0);
	public:
		T_x65();
	};
}
