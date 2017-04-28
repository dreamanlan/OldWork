#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x185  : Root::T_x129
	{
		ref class T_x5;
		ref class T_x149;
		ref class T_x13;
		ref class T_x60;
		ref class T_x87;
		ref class T_x1;
		ref class T_x33;
		ref class T_x146;
		ref class T_x116;
		ref class T_x2;
		ref class T_x19;
		ref class T_x22;
		ref class T_x67;
		ref class T_x148;
		ref class T_x134;
		ref class T_x43;
		ref class T_x139;
		ref class T_x17;
		ref class T_x9;
		ref class T_x51;
		ref class T_x57;
		ref class T_x47;
		ref class T_x15;
		ref class T_x108;
		ref class T_x4;
		ref class T_x84;
		ref class T_x81;
		ref class T_x55;
		ref class T_x6;
		ref class T_x12;
		ref class T_x26;
		ref class T_x56;
		ref class T_x172;
		ref class T_x145;
		ref class T_x10;
		ref class T_x8;
		ref class T_x75;
		ref class T_x35;
		ref class T_x16;
		ref class T_x113;
		ref class T_x48;
		ref class T_x165;
		ref class T_x158;
		ref class T_x176;
		ref class T_x11;
		ref class T_x173;
		ref class T_x49;
		ref class T_x18;
		ref class T_x147;
		ref class T_x114;
		ref class T_x14;
		ref class T_x3;
		ref class T_x96;
		ref class T_x7;
		ref class T_x93;
		ref class T_x177;
		ref class T_x45;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x149  : Root::T_x129
		{
		private:
			Reflector::CodeModel::ITypeDeclaration^ F_x1;
		private:
			Reflector::CodeModel::IMemberDeclaration^ F_x2;
		public:
			virtual Reflector::CodeModel::ITypeDeclaration^ M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0)  = Root::T_x129::M_x1;
			//Root::T_x129^::M_x1 by M_x2
		public:
			virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0)  = Root::T_x129::M_x1;
			//Root::T_x129^::M_x1 by M_x4
		public:
			virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
		protected:
			Reflector::CodeModel::IMemberDeclaration^ M_x2();
		protected:
			Reflector::CodeModel::ITypeDeclaration^ M_x1();
		public:
			T_x149();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x185::T_x149
		{
		private:
			Reflector::CodeModel::IMethodDeclaration^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			Reflector::CodeModel::IVariableReferenceExpression^ M_x1(Reflector::CodeModel::IForStatement^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1,Reflector::CodeModel::IVariableReferenceExpression^ A_2,Reflector::CodeModel::IType^ A_3);
		private:
			Reflector::CodeModel::IVariableDeclaration^ M_x12(Reflector::CodeModel::IAssignExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IAssignExpression^ A_0);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableDeclaration^ A_1,Reflector::CodeModel::IWhileStatement^ A_2);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IWhileStatement^ A_0,Reflector::CodeModel::IVariableDeclaration^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::IVariableDeclaration^ A_1,System::Int32 A_2);
		private:
			void M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
		public:
			T_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x10  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::ISwitchStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IMethodReference^ A_1,System::Int32 A_2);
		public:
			T_x10();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x108  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0);
		public:
			T_x108();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x7  : Root::T_x61
		{
		private:
			System::Collections::Hashtable^ F_x1;
		private:
			System::Int32 F_x2;
		public:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0);
		public:
			System::Int32 M_x1();
		public:
			virtual void M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IExpression^ A_0) override;
		public:
			T_x7();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x11  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x129
			{
			private:
				Reflector::CodeModel::ILabeledStatement^ F_x1;
			public:
				T_x1(Reflector::CodeModel::ILabeledStatement^ A_0);
			public:
				virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
			};
		private:
			Root::T_x185::T_x7^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			static System::Boolean M_x2(Reflector::CodeModel::IStatement^ A_0);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IStatement^ A_0);
		public:
			T_x11();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x113  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1,Reflector::CodeModel::ILiteralExpression^ A_2);
		public:
			T_x113();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x114  : Root::T_x185::T_x149
		{
		private:
			System::String^ F_x1;
		private:
			System::String^ F_x2;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::IStatement^ A_0,System::String^ A_1,System::String^ A_2);
		public:
			T_x114();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x116  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x129
			{
			private:
				Reflector::CodeModel::IVariableDeclaration^ F_x1;
			public:
				T_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
			public:
				virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICastExpression^ A_0) override;
			};
		private:
			System::Collections::ArrayList^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			Reflector::CodeModel::IAssignExpression^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
		private:
			Reflector::CodeModel::IAssignExpression^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IVariableReferenceExpression^ A_2);
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IStatement^ A_2);
		private:
			Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
		private:
			void M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		public:
			T_x116();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttribute^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0) override;
		private:
			void M_x1(Reflector::CodeModel::IExpressionCollection^ A_0,Reflector::CodeModel::IMethodReference^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1,array<Reflector::CodeModel::IType^>^ A_2);
		private:
			static array<Reflector::CodeModel::IType^>^ M_x1(array<Reflector::CodeModel::IMethodDeclaration^>^ A_0,System::Int32 A_1);
		private:
			static array<Reflector::CodeModel::IMethodDeclaration^>^ M_x1(Reflector::CodeModel::IMethodReference^ A_0);
		public:
			T_x12();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::ITypeDeclaration^ M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
		private:
			System::Boolean M_x2(Reflector::CodeModel::IMethodInvokeExpression^ A_0);
		public:
			T_x13();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x134  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x134();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x139  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		public:
			T_x139();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x14  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForEachStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IForStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IWhileStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IDoStatement^ A_0) override;
		private:
			void M_x2(Reflector::CodeModel::IBlockStatement^ A_0);
		public:
			T_x14();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x145  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0) override;
		public:
			T_x145();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x146  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x146();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x147  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0) override;
		private:
			Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::IExpression^ A_0);
		private:
			Reflector::CodeModel::ITypeReference^ M_x1(Reflector::CodeModel::IMemberReference^ A_0);
		private:
			Reflector::CodeModel::ICastExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::ITypeReference^ A_1);
		public:
			T_x147();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x148  : Root::T_x185::T_x149
		{
		private:
			Reflector::CodeModel::IVariableDeclaration^ F_x1;
		private:
			Reflector::CodeModel::IBlockStatement^ F_x2;
		private:
			System::Int32 F_x12;
		private:
			System::Int32 F_x13;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IUnaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IVariableReference^ M_x1(Reflector::CodeModel::IVariableReference^ A_0) override;
		public:
			T_x148();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x15  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x15();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x158  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x158();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x16  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IConditionExpression^ A_0) override;
		public:
			T_x16();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x93  : Root::T_x61
		{
		private:
			System::Collections::Hashtable^ F_x1;
		public:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
		public:
			virtual void M_x1(Reflector::CodeModel::IVariableReference^ A_0) override;
		public:
			T_x93();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x165  : Root::T_x185::T_x149
		{
		private:
			Root::T_x185::T_x93^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::IAssignExpression^ A_0,Reflector::CodeModel::IAssignExpression^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1,System::Int32 A_2);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IStatement^ A_1);
		public:
			T_x165();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x17  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x17();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x172  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IEventReferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressOfExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0);
		public:
			T_x172();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x173  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		public:
			T_x173();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x176  : Root::T_x129
		{
		private:
			Root::T_x185::T_x7^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			static System::Int32 M_x2(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		public:
			T_x176();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x177  : Root::T_x61
		{
		private:
			Reflector::CodeModel::IVariableReference^ F_x1;
		private:
			Reflector::CodeModel::IBlockStatement^ F_x2;
		private:
			System::Int32 F_x12;
		private:
			System::Boolean F_x13;
		private:
			System::Boolean F_x8;
		public:
			T_x177(Reflector::CodeModel::IVariableReference^ A_0,Reflector::CodeModel::IBlockStatement^ A_1,System::Int32 A_2);
		public:
			virtual void M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IVariableReference^ A_0) override;
		public:
			System::Boolean M_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x18  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x129
			{
			private:
				Reflector::CodeModel::ILabeledStatement^ F_x1;
			private:
				Reflector::CodeModel::IStatementCollection^ F_x2;
			public:
				T_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IStatementCollection^ A_1);
			public:
				virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
			};
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IBlockStatement^ A_1,System::Int32 A_2,System::Int32 A_3,Reflector::CodeModel::IMethodDeclaration^ A_4);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IStatement^ A_0);
		public:
			T_x18();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x19  : Root::T_x185::T_x149
		{
		private:
			System::Collections::IDictionary^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,System::Collections::IDictionary^ A_1);
		private:
			System::Collections::ICollection^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IExpression^ A_1);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::ISwitchStatement^ A_1);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::IExpression^ A_1);
		public:
			static System::IComparable^ M_x13(Reflector::CodeModel::IExpression^ A_0);
		public:
			static System::Object^ M_x12(Reflector::CodeModel::IExpression^ A_0);
		private:
			static array<Reflector::CodeModel::IExpression^>^ M_x2(Reflector::CodeModel::IExpression^ A_0);
		private:
			System::Collections::IDictionary^ M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IFieldReference^ A_0);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IStatement^ A_0,Reflector::CodeModel::IStatement^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0);
		private:
			void M_x1(Reflector::CodeModel::IExpression^ A_0,System::Int32 A_1);
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IStatement^ A_2);
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IStatement^ A_1);
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		public:
			T_x19();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IExpression^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IStatement^ A_0,Reflector::CodeModel::IExpression^ A_1);
		public:
			T_x2();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x22  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x129
			{
			private:
				Reflector::CodeModel::ILabeledStatement^ F_x1;
			public:
				T_x1(Reflector::CodeModel::ILabeledStatement^ A_0);
			public:
				virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IGotoStatement^ A_0) override;
			};
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x2(Reflector::CodeModel::ISwitchStatement^ A_0);
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IStatement^ A_1);
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		public:
			T_x22();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x26  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAddressDereferenceExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
		private:
			Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IExpression^ A_0);
		private:
			Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IExpression^ A_0);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IType^ A_0);
		public:
			T_x26();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x3  : Root::T_x129
		{
		private:
			Root::T_x185::T_x93^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IExpressionStatement^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x3();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x33  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x33();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x35  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IUnaryExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0);
		public:
			T_x35();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x4  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
		public:
			T_x4();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x43  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			static void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		public:
			T_x43();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x45  : Root::T_x61
		{
		private:
			System::Int32 F_x1;
		public:
			System::Int32 M_x1();
		public:
			virtual void M_x1(Reflector::CodeModel::IWhileStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IDoStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IForStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IForEachStatement^ A_0) override;
		public:
			virtual void M_x1(Reflector::CodeModel::IBreakStatement^ A_0) override;
		public:
			T_x45();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x47  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IExpressionStatement^ A_0) override;
		public:
			T_x47();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x48  : Root::T_x129
		{
		private:
			Root::T_x185::T_x93^ F_x1;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x48();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x49  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::String^ A_1);
		public:
			T_x49();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x5  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
		private:
			static void M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0);
		private:
			static Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IPropertyDeclaration^ A_1);
		internal:
			static System::Boolean M_x1(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IPropertyReference^ A_1);
		private:
			static Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IEventDeclaration^ A_1);
		internal:
			static System::Boolean M_x1(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IEventReference^ A_1);
		public:
			T_x5();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x51  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICastExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0);
		public:
			T_x51();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x55  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IBlockStatement^ A_0);
		private:
			void M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IStatement^ A_2);
		public:
			T_x55();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x56  : Root::T_x182
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : System::Collections::IComparer
			{
			private:
				static System::Collections::IComparer^ F_x1;
			public:
				virtual System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
				//System::Collections::IComparer^::Compare by M_x1
			private:
				System::Int32 M_x1(System::Object^ A_0);
			public:
				static System::Collections::IComparer^ M_x1();
			private:
				static T_x1();
			public:
				T_x1();
			};
		public:
			virtual Reflector::CodeModel::IFieldDeclaration^ M_x12(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x13(Reflector::CodeModel::ICastExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::IConditionExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ILiteralExpression^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x4(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x9(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x5(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x8(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x13(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x12(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::ILiteralExpression^ A_0);
		private:
			Reflector::CodeModel::IExpression^ M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ILiteralExpression^ A_0,Reflector::CodeModel::ITypeReference^ A_1);
		private:
			static Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::ILiteralExpression^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1);
		private:
			static Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ILiteralExpression^ A_0,Reflector::CodeModel::ITypeDeclaration^ A_1);
		private:
			static Reflector::CodeModel::IExpression^ M_x1(System::Int64 A_0,Reflector::CodeModel::ITypeDeclaration^ A_1);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			static Reflector::CodeModel::IType^ M_x2(Reflector::CodeModel::IType^ A_0);
		private:
			static System::Boolean M_x2(Reflector::CodeModel::ITypeDeclaration^ A_0);
		private:
			static Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,System::Object^ A_1);
		private:
			static System::Boolean M_x2(System::Object^ A_0);
		private:
			static System::Int64 M_x1(System::Object^ A_0);
		private:
			static Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IType^ A_0);
		private:
			static Reflector::CodeModel::IFieldReferenceExpression^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IFieldDeclaration^ A_1);
		public:
			T_x56();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x57  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ICastExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0) override;
		private:
			void M_x1(Reflector::CodeModel::IExpressionCollection^ A_0);
		private:
			Reflector::CodeModel::IType^ M_x1(Reflector::CodeModel::IType^ A_0);
		public:
			T_x57();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x6  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1,Reflector::CodeModel::IExpression^ A_2);
		private:
			static Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		public:
			T_x6();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x60  : Root::T_x129
		{
		private:
			Reflector::CodeModel::IMethodDeclaration^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0);
		private:
			System::Boolean M_x13(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		private:
			System::Boolean M_x12(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		private:
			System::Boolean M_x2(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::ITryCatchFinallyStatement^ A_0,Reflector::CodeModel::ILabeledStatement^ A_1);
		public:
			T_x60();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x67  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x185::T_x149
			{
			private:
				Reflector::CodeModel::IConditionStatement^ F_x1;
			private:
				Reflector::CodeModel::IBlockStatement^ F_x2;
			private:
				System::Int32 F_x12;
			public:
				virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
			private:
				System::Boolean M_x2(Reflector::CodeModel::IVariableReferenceExpression^ A_0);
			private:
				System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,Reflector::CodeModel::IVariableReferenceExpression^ A_2);
			private:
				static System::Boolean M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
			private:
				static System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
			public:
				T_x1();
			};
		public:
			virtual Reflector::CodeModel::IMethodDeclaration^ M_x4(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,System::Int32 A_1,System::Int32 A_2);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::ISwitchStatement^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1,Reflector::CodeModel::IStatement^ A_2,System::Boolean A_3);
		private:
			static Reflector::CodeModel::IExpression^ M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IBlockStatement^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IVariableReferenceExpression^ A_1);
		public:
			T_x67();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x75  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IBinaryExpression^ A_0) override;
		public:
			T_x75();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IExpressionStatement^ A_0) override;
		public:
			T_x8();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x81  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x81();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x84  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x84();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x87  : Root::T_x185::T_x149
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : Root::T_x61
			{
			private:
				System::Int32 F_x1;
			public:
				System::Int32 M_x1();
			public:
				virtual void M_x1(Reflector::CodeModel::IForEachStatement^ A_0) override;
			public:
				virtual void M_x1(Reflector::CodeModel::IForStatement^ A_0) override;
			public:
				virtual void M_x1(Reflector::CodeModel::IWhileStatement^ A_0) override;
			public:
				virtual void M_x1(Reflector::CodeModel::IDoStatement^ A_0) override;
			public:
				virtual void M_x1(Reflector::CodeModel::IContinueStatement^ A_0) override;
			public:
				T_x1();
			};
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		private:
			System::Int32 M_x1(Reflector::CodeModel::ILabeledStatement^ A_0,Reflector::CodeModel::IMethodDeclaration^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IBlockStatement^ A_1,System::Int32 A_2);
		private:
			Reflector::CodeModel::IVariableReferenceExpression^ M_x1(Reflector::CodeModel::IStatement^ A_0);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0,Reflector::CodeModel::IStatement^ A_1);
		public:
			T_x87();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x9  : Root::T_x185::T_x149
		{
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IAssignExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IObjectCreateExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IPropertyIndexerExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IMethodInvokeExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IArrayIndexerExpression^ A_0) override;
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IMethodReturnStatement^ A_0) override;
		private:
			Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IType^ A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::UnaryOperator A_1);
		private:
			System::Boolean M_x1(Reflector::CodeModel::IType^ A_0);
		public:
			T_x9();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x96  : Root::T_x129
		{
		public:
			virtual Reflector::CodeModel::IStatement^ M_x1(Reflector::CodeModel::IBlockStatement^ A_0) override;
		public:
			T_x96();
		};
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssembly^ A_0) override;
	public:
		virtual Reflector::CodeModel::IModule^ M_x1(Reflector::CodeModel::IModule^ A_0) override;
	public:
		virtual Reflector::CodeModel::ITypeDeclaration^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IFieldDeclaration^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IPropertyDeclaration^ M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) override;
	public:
		virtual Reflector::CodeModel::IEventDeclaration^ M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) override;
	public:
		T_x185();
	};
}
