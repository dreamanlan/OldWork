#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x187
	{
		ref class T_x2;
		ref class T_x12;
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		private:
			System::Collections::IDictionary^ F_x1;
		private:
			System::Collections::IDictionary^ F_x2;
		public:
			T_x1(array<Reflector::CodeModel::IInstruction^>^ A_0,array<Reflector::CodeModel::IExceptionHandler^>^ A_1);
		public:
			void M_x8(System::Int32 A_0);
		private:
			void M_x1(System::Int32 A_0);
		public:
			void M_x5(System::Int32 A_0);
		public:
			System::Boolean M_x13(System::Int32 A_0);
		public:
			System::Boolean M_x2(System::Int32 A_0);
		public:
			System::Int32 M_x12(System::Int32 A_0);
		public:
			void M_x2(System::String^ A_0);
		public:
			System::Boolean M_x1(System::String^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : System::Collections::IComparer
			{
			public:
				virtual System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
				//System::Collections::IComparer^::Compare by M_x1
			public:
				T_x1();
			};
		private:
			array<Reflector::CodeModel::IInstruction^>^ F_x1;
		private:
			System::Int32 F_x2;
		private:
			System::Int32 F_x12;
		private:
			Root::T_x187::T_x12::T_x1^ F_x13;
		private:
			System::Int32 F_x8;
		public:
			T_x12(array<Reflector::CodeModel::IInstruction^>^ A_0);
		public:
			Reflector::CodeModel::IInstruction^ M_x1();
		public:
			Reflector::CodeModel::IInstruction^ M_x12();
		public:
			System::Int32 M_x2();
		public:
			void M_x1(System::Int32 A_0);
		public:
			System::Int32 M_x13();
		private:
			Reflector::CodeModel::IInstruction^ M_x1(System::Int32 A_0,System::Boolean A_1);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Root::T_x129
		{
		private:
			Reflector::CodeModel::IAssignExpression^ F_x1;
		private:
			System::Boolean F_x2;
		public:
			T_x2(Reflector::CodeModel::IAssignExpression^ A_0);
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IVariableReferenceExpression^ A_0) override;
		};
	private:
		Reflector::CodeModel::IMethodDeclaration^ F_x1;
	private:
		Reflector::CodeModel::IMethodBody^ F_x2;
	private:
		array<Reflector::CodeModel::IExceptionHandler^>^ F_x12;
	private:
		Root::T_x187::T_x12^ F_x13;
	private:
		array<Reflector::CodeModel::IVariableDeclaration^>^ F_x8;
	private:
		System::Collections::IList^ F_x5;
	private:
		System::Int32 F_x9;
	private:
		System::Collections::Stack^ F_x4;
	private:
		System::Collections::Stack^ F_x15;
	private:
		System::Collections::Stack^ F_x11;
	private:
		Root::T_x187::T_x1^ F_x10;
	private:
		System::Collections::Hashtable^ F_x7;
	public:
		void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IMethodBody^ A_1);
	private:
		Reflector::CodeModel::IMethodDeclaration^ M_x33();
	private:
		Reflector::CodeModel::ITypeDeclaration^ M_x81();
	private:
		System::Boolean M_x57();
	private:
		System::Boolean M_x55();
	private:
		System::Boolean M_x48();
	private:
		System::Boolean M_x56();
	private:
		Reflector::CodeModel::IExpression^ M_x17();
	private:
		Reflector::CodeModel::IStatement^ M_x11(System::Int32 A_0);
	private:
		void M_x15(System::Int32 A_0);
	private:
		System::Int32 M_x13(System::Int32 A_0,System::Int32 A_1);
	private:
		Reflector::CodeModel::ITypeReference^ M_x1(System::String^ A_0,System::String^ A_1);
	private:
		static Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,System::String^ A_1,System::String^ A_2);
	private:
		Reflector::CodeModel::IPropertyDeclaration^ M_x13(Reflector::CodeModel::IMethodReference^ A_0);
	private:
		Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::String^ A_1,array<Reflector::CodeModel::IType^>^ A_2);
	private:
		Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::String^ A_1);
	private:
		Reflector::CodeModel::IStatement^ M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IStatement^ M_x19();
	private:
		Reflector::CodeModel::IStatement^ M_x4(System::Int32 A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x18();
	private:
		Reflector::CodeModel::IExpression^ M_x14();
	private:
		Reflector::CodeModel::IExpression^ M_x9(System::Int32 A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x6();
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IInstruction^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		System::Boolean M_x16();
	private:
		Reflector::CodeModel::IExpression^ M_x7();
	private:
		Reflector::CodeModel::IExpression^ M_x10();
	private:
		Reflector::CodeModel::IExpression^ M_x11();
	private:
		Reflector::CodeModel::IExpression^ M_x55(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0);
	private:
		Reflector::CodeModel::IVariableReference^ M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
	private:
		Reflector::CodeModel::IVariableDeclaration^ M_x8(Reflector::CodeModel::IType^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x48(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x56(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x13(Reflector::CodeModel::IType^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x15();
	private:
		Reflector::CodeModel::IExpression^ M_x12(Reflector::CodeModel::IMethodReference^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x12(Reflector::CodeModel::IType^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x4();
	private:
		Reflector::CodeModel::IExpression^ M_x17(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x9();
	private:
		Reflector::CodeModel::IExpression^ M_x5(Reflector::CodeModel::IExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x19(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0,array<System::Int32>^ A_1,System::Int32% A_2);
	private:
		Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IStatement^ M_x18(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x13(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IExpression^ M_x12(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IStatement^ M_x5();
	private:
		Reflector::CodeModel::IStatement^ M_x8();
	private:
		Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IExpression^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x5(System::Int32 A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x8(System::Int32 A_0);
	private:
		System::Boolean M_x2(Reflector::CodeModel::IBlockStatement^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x14(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IMethodReference^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x2(Reflector::CodeModel::IType^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x13();
	private:
		Reflector::CodeModel::IStatement^ M_x12();
	private:
		Reflector::CodeModel::IExpression^ M_x6(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x16(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x7(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x10(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReference^ A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x13(Reflector::CodeModel::IExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x13(System::Int32 A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::BinaryOperator A_0,System::Int32 A_1);
	private:
		System::Int32 M_x12(System::Int32 A_0);
	private:
		Reflector::CodeModel::IStatement^ M_x1(array<System::Int32>^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::UnaryOperator A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::BinaryOperator A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x11(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x15(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x4(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x9(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x5(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x12(Reflector::CodeModel::IExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IInstruction^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::IBlockStatement^ M_x12(System::Int32 A_0,System::Int32 A_1);
	private:
		Reflector::CodeModel::ITryCatchFinallyStatement^ M_x1(Reflector::CodeModel::IExceptionHandler^ A_0);
	private:
		Reflector::CodeModel::IExceptionHandler^ M_x2(System::Int32 A_0,System::Int32 A_1);
	private:
		Reflector::CodeModel::IStatement^ M_x2(System::Int32 A_0);
	private:
		Reflector::CodeModel::IExceptionHandler^ M_x1(Reflector::CodeModel::IExceptionHandler^ A_0,Reflector::CodeModel::ExceptionHandlerType A_1);
	private:
		System::Int32 M_x1(System::Int32 A_0,System::Int32 A_1);
	internal:
		static void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
	private:
		static void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1,Root::T_x187::T_x1^ A_2);
	private:
		System::Int32 M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
	private:
		System::Int32 M_x2(Reflector::CodeModel::IExpression^ A_0);
	private:
		System::Int32 M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	private:
		System::String^ M_x1(Reflector::CodeModel::IType^ A_0);
	private:
		System::Int32 M_x13(Reflector::CodeModel::IInstruction^ A_0);
	private:
		System::Int32 M_x12(Reflector::CodeModel::IInstruction^ A_0);
	private:
		System::Int32 M_x2(Reflector::CodeModel::IInstruction^ A_0);
	private:
		System::Boolean M_x1(System::Int32 A_0,System::Boolean A_1);
	private:
		System::Boolean M_x1(System::Int32 A_0);
	private:
		System::Boolean M_x1(System::Int32 A_0,System::Int32 A_1,System::Collections::IDictionary^ A_2);
	private:
		System::Boolean M_x1(Reflector::CodeModel::IInstruction^ A_0);
	private:
		System::Boolean M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IBlockStatement^ A_0);
	private:
		static System::Boolean M_x1(array<System::Int32>^ A_0,array<System::Int32>^ A_1,System::Int32 A_2);
	private:
		static array<System::Int32>^ M_x1(Reflector::CodeModel::IExpressionCollection^ A_0);
	private:
		static Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IExpression^ A_2,array<System::Int32>^ A_3);
	private:
		static System::Boolean M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0,array<System::Int32>^ A_1,Reflector::CodeModel::IExpression^ A_2);
	private:
		static System::Boolean M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0);
	private:
		static Reflector::CodeModel::ILiteralExpression^ M_x1(System::Object^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x2();
	private:
		Reflector::CodeModel::IExpression^ M_x1();
	private:
		void M_x1(Reflector::CodeModel::IExpression^ A_0);
	public:
		T_x187();
	};
}
