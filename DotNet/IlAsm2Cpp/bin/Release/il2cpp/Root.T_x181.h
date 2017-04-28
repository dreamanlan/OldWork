#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x181  : Root::T_x129
	{
	private:
		System::Boolean F_x1;
	private:
		System::Boolean F_x2;
	private:
		System::Collections::IDictionary^ F_x12;
	private:
		System::Collections::IDictionary^ F_x13;
	private:
		System::Object^ F_x8;
	public:
		T_x181();
	public:
		T_x181(System::Boolean A_0,System::Boolean A_1);
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssembly^ A_0) override;
	public:
		virtual Reflector::CodeModel::IModule^ M_x1(Reflector::CodeModel::IModule^ A_0) override;
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IResource^ M_x1(Reflector::CodeModel::IEmbeddedResource^ A_0) override;
	public:
		virtual Reflector::CodeModel::IResource^ M_x1(Reflector::CodeModel::IFileResource^ A_0) override;
	public:
		virtual Reflector::CodeModel::IMethodReturnType^ M_x1(Reflector::CodeModel::IMethodReturnType^ A_0) override;
	public:
		virtual Reflector::CodeModel::IParameterDeclaration^ M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICastExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITryCastExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IUnaryExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ILiteralExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IConditionStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IExpressionStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForEachStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IUsingStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IFixedStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ILockStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IWhileStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IDoStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBreakStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IContinueStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ISwitchStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ILabeledStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICanCastExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IConditionExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0) override;
	public:
		virtual Reflector::CodeModel::IConditionCase^ M_x1(Reflector::CodeModel::IConditionCase^ A_0) override;
	public:
		virtual Reflector::CodeModel::IDefaultCase^ M_x1(Reflector::CodeModel::IDefaultCase^ A_0) override;
	public:
		virtual Reflector::CodeModel::ICatchClause^ M_x1(Reflector::CodeModel::ICatchClause^ A_0) override;
	public:
		virtual Reflector::CodeModel::IArrayDimension^ M_x1(Reflector::CodeModel::IArrayDimension^ A_0) override;
	public:
		virtual Reflector::CodeModel::IVariableReference^ M_x1(Reflector::CodeModel::IVariableReference^ A_0) override;
	public:
		virtual Reflector::CodeModel::IVariableDeclaration^ M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IOptionalModifier^ A_0) override;
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IRequiredModifier^ A_0) override;
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IPointerType^ A_0) override;
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IReferenceType^ A_0) override;
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IArrayType^ A_0) override;
	};
}
