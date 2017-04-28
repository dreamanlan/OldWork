#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x129
	{
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssembly^ A_0);
	public:
		virtual Reflector::CodeModel::IAssemblyReference^ M_x2(Reflector::CodeModel::IAssemblyReference^ A_0);
	public:
		virtual Reflector::CodeModel::IModule^ M_x1(Reflector::CodeModel::IModule^ A_0);
	public:
		virtual Reflector::CodeModel::IModuleReference^ M_x2(Reflector::CodeModel::IModuleReference^ A_0);
	public:
		virtual Reflector::CodeModel::INamespace^ M_x2(Reflector::CodeModel::INamespace^ A_0);
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::ITypeReference^ M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IMethodReference^ M_x2(Reflector::CodeModel::IMethodReference^ A_0);
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IFieldReference^ M_x2(Reflector::CodeModel::IFieldReference^ A_0);
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IPropertyReference^ M_x1(Reflector::CodeModel::IPropertyReference^ A_0);
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IEventReference^ M_x1(Reflector::CodeModel::IEventReference^ A_0);
	public:
		virtual Reflector::CodeModel::IMethodReturnType^ M_x1(Reflector::CodeModel::IMethodReturnType^ A_0);
	public:
		virtual Reflector::CodeModel::IParameterDeclaration^ M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IResource^ M_x1(Reflector::CodeModel::IResource^ A_0);
	public:
		virtual Reflector::CodeModel::IResource^ M_x1(Reflector::CodeModel::IEmbeddedResource^ A_0);
	public:
		virtual Reflector::CodeModel::IResource^ M_x1(Reflector::CodeModel::IFileResource^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x13(Reflector::CodeModel::IType^ A_0);
	public:
		virtual Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x12(Reflector::CodeModel::IStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ICommentStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IConditionStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IExpressionStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForEachStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IUsingStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IFixedStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ILockStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IWhileStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IDoStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBreakStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IContinueStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ISwitchStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ILabeledStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITryCastExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICanCastExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICastExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IConditionExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INullCoalescingExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IUnaryExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ILiteralExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IValueOfTypedReferenceExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypedReferenceCreateExpression^ A_0);
	public:
		virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ISnippetExpression^ A_0);
	public:
		virtual Reflector::CodeModel::ISwitchCase^ M_x1(Reflector::CodeModel::ISwitchCase^ A_0);
	public:
		virtual Reflector::CodeModel::IConditionCase^ M_x1(Reflector::CodeModel::IConditionCase^ A_0);
	public:
		virtual Reflector::CodeModel::IDefaultCase^ M_x1(Reflector::CodeModel::IDefaultCase^ A_0);
	public:
		virtual Reflector::CodeModel::ICatchClause^ M_x1(Reflector::CodeModel::ICatchClause^ A_0);
	public:
		virtual Reflector::CodeModel::IVariableDeclaration^ M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0);
	public:
		virtual Reflector::CodeModel::IVariableReference^ M_x1(Reflector::CodeModel::IVariableReference^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IOptionalModifier^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IRequiredModifier^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IPointerType^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IReferenceType^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IArrayType^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IFunctionPointer^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IGenericParameter^ A_0);
	public:
		virtual Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IGenericArgument^ A_0);
	public:
		virtual Reflector::CodeModel::IArrayDimension^ M_x1(Reflector::CodeModel::IArrayDimension^ A_0);
	public:
		virtual Reflector::CodeModel::IModuleCollection^ M_x2(Reflector::CodeModel::IModuleCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IResourceCollection^ M_x1(Reflector::CodeModel::IResourceCollection^ A_0);
	public:
		virtual Reflector::CodeModel::ITypeDeclarationCollection^ M_x2(Reflector::CodeModel::ITypeDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::ITypeCollection^ M_x1(Reflector::CodeModel::ITypeCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IFieldDeclarationCollection^ M_x2(Reflector::CodeModel::IFieldDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IMethodDeclarationCollection^ M_x2(Reflector::CodeModel::IMethodDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IPropertyDeclarationCollection^ M_x2(Reflector::CodeModel::IPropertyDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IEventDeclarationCollection^ M_x2(Reflector::CodeModel::IEventDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::ICustomAttributeCollection^ M_x2(Reflector::CodeModel::ICustomAttributeCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IParameterDeclarationCollection^ M_x2(Reflector::CodeModel::IParameterDeclarationCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IMethodReferenceCollection^ M_x2(Reflector::CodeModel::IMethodReferenceCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IStatementCollection^ M_x2(Reflector::CodeModel::IStatementCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IExpressionCollection^ M_x2(Reflector::CodeModel::IExpressionCollection^ A_0);
	public:
		virtual Reflector::CodeModel::ICatchClauseCollection^ M_x2(Reflector::CodeModel::ICatchClauseCollection^ A_0);
	public:
		virtual Reflector::CodeModel::ISwitchCaseCollection^ M_x2(Reflector::CodeModel::ISwitchCaseCollection^ A_0);
	public:
		virtual Reflector::CodeModel::IArrayDimensionCollection^ M_x1(Reflector::CodeModel::IArrayDimensionCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IModuleCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::ITypeDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IFieldDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IMethodDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IPropertyDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IEventDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::ICustomAttributeCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IMethodReferenceCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IStatementCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::IExpressionCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::ICatchClauseCollection^ A_0);
	private:
		void M_x1(Reflector::CodeModel::ISwitchCaseCollection^ A_0);
	public:
		T_x129();
	};
}
