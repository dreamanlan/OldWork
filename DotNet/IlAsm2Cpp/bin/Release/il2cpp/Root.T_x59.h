#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x59  : Reflector::CodeModel::ILanguage
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::ILanguageWriter
		{
			ref class T_x1_2;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1_2  : Reflector::CodeModel::IFormatter
			{
			private:
				System::IO::StringWriter^ F_x1;
			private:
				System::Boolean F_x2;
			private:
				System::Int32 F_x12;
			public:
				virtual System::String^ M_x13()  = System::Object::ToString;
				//System::Object^::ToString by M_x13
			public:
				virtual void M_x12(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::Write;
				//Reflector::CodeModel::IFormatter^::Write by M_x12
			public:
				virtual void M_x13(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteDeclaration;
				//Reflector::CodeModel::IFormatter^::WriteDeclaration by M_x13
			public:
				virtual void M_x5(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteComment;
				//Reflector::CodeModel::IFormatter^::WriteComment by M_x5
			public:
				virtual void M_x2(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteLiteral;
				//Reflector::CodeModel::IFormatter^::WriteLiteral by M_x2
			public:
				virtual void M_x8(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteKeyword;
				//Reflector::CodeModel::IFormatter^::WriteKeyword by M_x8
			public:
				virtual void M_x12() sealed  = Reflector::CodeModel::IFormatter::WriteIndent;
				//Reflector::CodeModel::IFormatter^::WriteIndent by M_x12
			public:
				virtual void M_x2() sealed  = Reflector::CodeModel::IFormatter::WriteLine;
				//Reflector::CodeModel::IFormatter^::WriteLine by M_x2
			public:
				virtual void M_x8() sealed  = Reflector::CodeModel::IFormatter::WriteOutdent;
				//Reflector::CodeModel::IFormatter^::WriteOutdent by M_x8
			public:
				virtual void M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2) sealed  = Reflector::CodeModel::IFormatter::WriteReference;
				//Reflector::CodeModel::IFormatter^::WriteReference by M_x1
			public:
				virtual void M_x1(System::String^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IFormatter::WriteProperty;
				//Reflector::CodeModel::IFormatter^::WriteProperty by M_x1
			private:
				void M_x1(System::String^ A_0);
			private:
				void M_x1(System::String^ A_0,System::Int32 A_1);
			private:
				void M_x1();
			public:
				T_x1_2();
			};
		private:
			Reflector::CodeModel::IFormatter^ F_x1;
		private:
			Reflector::CodeModel::ILanguageWriterConfiguration^ F_x2;
		private:
			static System::Collections::Hashtable^ F_x12;
		private:
			static System::Collections::Hashtable^ F_x13;
		private:
			System::Boolean F_x8;
		private:
			System::Boolean F_x5;
		private:
			System::Int32 F_x9;
		private:
			System::Int32 F_x4;
		private:
			System::Collections::ArrayList^ F_x15;
		public:
			T_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguageWriterConfiguration^ A_1);
		private:
			static T_x1();
		public:
			virtual void M_x1(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteAssembly;
			//Reflector::CodeModel::ILanguageWriter^::WriteAssembly by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IAssemblyReference^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteAssemblyReference;
			//Reflector::CodeModel::ILanguageWriter^::WriteAssemblyReference by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IModule^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteModule;
			//Reflector::CodeModel::ILanguageWriter^::WriteModule by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IModuleReference^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteModuleReference;
			//Reflector::CodeModel::ILanguageWriter^::WriteModuleReference by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IResource^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteResource;
			//Reflector::CodeModel::ILanguageWriter^::WriteResource by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::INamespace^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteNamespace;
			//Reflector::CodeModel::ILanguageWriter^::WriteNamespace by M_x1
		public:
			System::Boolean M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
		public:
			virtual void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteTypeDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteTypeDeclaration by M_x1
		public:
			void M_x1(Reflector::CodeModel::TypeVisibility A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			void M_x1(Reflector::CodeModel::FieldVisibility A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			void M_x1(Reflector::CodeModel::MethodVisibility A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			virtual void M_x2(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteFieldDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteFieldDeclaration by M_x2
		public:
			virtual void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteMethodDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteMethodDeclaration by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WritePropertyDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WritePropertyDeclaration by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteEventDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteEventDeclaration by M_x12
		private:
			void M_x12(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			System::String^ M_x13(Reflector::CodeModel::ITypeReference^ A_0);
		private:
			void M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1,Reflector::CodeModel::ILanguageWriterConfiguration^ A_2);
		private:
			void M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1,Reflector::CodeModel::ILanguageWriterConfiguration^ A_2);
		private:
			void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::ITypeCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			virtual void M_x1(Reflector::CodeModel::IExpression^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteExpression;
			//Reflector::CodeModel::ILanguageWriter^::WriteExpression by M_x1
		private:
			void M_x12(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IExpressionCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IGenericDefaultExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeOfTypedReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMemberReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IFieldOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IBaseReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITryCastExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICanCastExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICastExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IConditionExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IDelegateCreateExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArgumentReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArgumentListExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IVariableReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IDelegateInvokeExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IThisReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAddressReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAddressOutExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ISizeOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IStackAllocateExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ISnippetExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IUnaryExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IBinaryExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IExpressionStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::BinaryOperator A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			System::String^ M_x12(System::String^ A_0);
		private:
			void M_x1(Reflector::CodeModel::ILiteralExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::String^ A_1,System::Object^ A_2,Reflector::CodeModel::IFormatter^ A_3);
		private:
			void M_x1(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			virtual void M_x1(Reflector::CodeModel::IStatement^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteStatement;
			//Reflector::CodeModel::ILanguageWriter^::WriteStatement by M_x1
		private:
			void M_x1(Reflector::CodeModel::IStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1,System::Boolean A_2);
		private:
			void M_x2(Reflector::CodeModel::IFormatter^ A_0);
		private:
			void M_x1();
		private:
			void M_x1(Reflector::CodeModel::IFormatter^ A_0);
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IStatementCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMemoryCopyStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMemoryInitializeStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IObjectInitializeExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ILockStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IStatementCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IStatementCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1,System::Boolean A_2,System::Boolean A_3);
		private:
			void M_x1(Reflector::CodeModel::ICommentStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1,System::Boolean A_2);
		private:
			void M_x1(Reflector::CodeModel::IConditionStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAssignExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IExpressionStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IForStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IForEachStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IUsingStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IFixedStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IWhileStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IDoStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IBreakStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IContinueStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IThrowExceptionStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IVariableDeclarationExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAttachEventStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IRemoveEventStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IGotoStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			System::String^ M_x12(Reflector::CodeModel::ITypeReference^ A_0);
		private:
			System::String^ M_x1(Reflector::CodeModel::IFieldReference^ A_0);
		private:
			System::String^ M_x2(Reflector::CodeModel::IMethodReference^ A_0);
		private:
			System::String^ M_x1(Reflector::CodeModel::IPropertyReference^ A_0);
		private:
			System::String^ M_x1(Reflector::CodeModel::IEventReference^ A_0);
		private:
			Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			System::String^ M_x2(System::String^ A_0);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IMethodReference^ A_0);
		private:
			System::Boolean M_x2(Reflector::CodeModel::IEventDeclaration^ A_0);
		private:
			Reflector::CodeModel::MethodVisibility M_x1(Reflector::CodeModel::IEventDeclaration^ A_0);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0);
		private:
			System::Boolean M_x1(System::String^ A_0);
		private:
			void M_x2(System::String^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(System::String^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2,Reflector::CodeModel::IFormatter^ A_3);
		public:
			static System::Boolean M_x2(Reflector::CodeModel::ITypeReference^ A_0);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::ITypeReference^ A_0);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
		};
	public:
		virtual System::String^ M_x12() sealed  = Reflector::CodeModel::ILanguage::Name::get;
		//Reflector::CodeModel::ILanguage^::get_Name by M_x12
	public:
		virtual System::String^ M_x2() sealed  = Reflector::CodeModel::ILanguage::FileExtension::get;
		//Reflector::CodeModel::ILanguage^::get_FileExtension by M_x2
	public:
		virtual System::Boolean M_x1() sealed  = Reflector::CodeModel::ILanguage::Translate::get;
		//Reflector::CodeModel::ILanguage^::get_Translate by M_x1
	public:
		virtual Reflector::CodeModel::ILanguageWriter^ M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguageWriterConfiguration^ A_1) sealed  = Reflector::CodeModel::ILanguage::GetWriter;
		//Reflector::CodeModel::ILanguage^::GetWriter by M_x1
	public:
		T_x59();
	};
}
