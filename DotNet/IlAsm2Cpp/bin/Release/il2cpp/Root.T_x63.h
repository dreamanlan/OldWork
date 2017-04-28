#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x63  : Reflector::CodeModel::ILanguage
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::ILanguageWriter
		{
		internal:
			enum class T_x1_5
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
			Reflector::CodeModel::IFormatter^ F_x1;
		private:
			Reflector::CodeModel::ILanguageWriterConfiguration^ F_x2;
		private:
			static System::Collections::Hashtable^ F_x12;
		private:
			static System::Collections::IDictionary^ F_x13;
		private:
			Reflector::CodeModel::IAssemblyReference^ F_x8;
		private:
			array<System::String^>^ F_x5;
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
			virtual void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteTypeDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteTypeDeclaration by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteFieldDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteFieldDeclaration by M_x1
		public:
			virtual void M_x2(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteMethodDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteMethodDeclaration by M_x2
		private:
			void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
		public:
			virtual void M_x1(Reflector::CodeModel::IPropertyDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WritePropertyDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WritePropertyDeclaration by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IEventDeclaration^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteEventDeclaration;
			//Reflector::CodeModel::ILanguageWriter^::WriteEventDeclaration by M_x1
		private:
			void M_x12(Reflector::CodeModel::ICustomAttributeProvider^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(System::Collections::IEnumerable^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(array<System::Byte>^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x12(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IParameterDeclarationCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1,Reflector::CodeModel::ILanguageWriterConfiguration^ A_2);
		private:
			void M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1,Reflector::CodeModel::ILanguageWriterConfiguration^ A_2);
		private:
			void M_x2(Reflector::CodeModel::IMethodSignature^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodSignature^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(Reflector::CodeModel::ICustomAttributeProvider^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IGenericArgumentProvider^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IFieldReferenceExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArrayCreateExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IArrayInitializerExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ISnippetExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ILiteralExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::INamedArgumentExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ICastExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::ITypeOfExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(Reflector::CodeModel::IExpressionCollection^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		public:
			virtual void M_x1(Reflector::CodeModel::IStatement^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteStatement;
			//Reflector::CodeModel::ILanguageWriter^::WriteStatement by M_x1
		public:
			virtual void M_x2(Reflector::CodeModel::IExpression^ A_0) sealed  = Reflector::CodeModel::ILanguageWriter::WriteExpression;
			//Reflector::CodeModel::ILanguageWriter^::WriteExpression by M_x2
		private:
			void M_x2(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x2(System::String^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			System::Collections::ICollection^ M_x1(System::Collections::ICollection^ A_0);
		private:
			System::String^ M_x2(System::String^ A_0);
		private:
			void M_x1();
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::ITypeReference^ A_0);
		private:
			Reflector::CodeModel::ICustomAttribute^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0,System::String^ A_1,System::String^ A_2);
		private:
			void M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			System::Int32 M_x1(Reflector::CodeModel::IExpression^ A_0);
		private:
			System::Int32 M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
		private:
			System::String^ M_x1(System::String^ A_0);
		private:
			void M_x1(System::String^ A_0,Reflector::CodeModel::IFormatter^ A_1);
		private:
			void M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2,Reflector::CodeModel::IFormatter^ A_3);
		private:
			static System::String^ M_x2(System::Int32 A_0);
		private:
			static Root::T_x63::T_x1::T_x1_5 M_x1(System::Int32 A_0);
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
		T_x63();
	};
}
