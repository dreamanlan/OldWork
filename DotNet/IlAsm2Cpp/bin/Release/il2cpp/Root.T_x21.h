#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x21  : System::Collections::IEnumerator , Root::T_x20
	{
		ref class T_x1;
		ref class T_x2;
		ref class T_x12;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::IEnumerator , Root::T_x20
		{
		private:
			array<Reflector::CodeModel::ITypeDeclaration^>^ F_x1;
		private:
			System::Int32 F_x2;
		private:
			System::Collections::IEnumerator^ F_x12;
		public:
			T_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
		public:
			T_x1(Reflector::CodeModel::INamespace^ A_0);
		public:
			T_x1(Reflector::CodeModel::IModule^ A_0);
		public:
			T_x1(Reflector::CodeModel::IAssembly^ A_0);
		public:
			virtual void M_x12() sealed  = System::Collections::IEnumerator::Reset;
			//System::Collections::IEnumerator^::Reset by M_x12
		public:
			virtual System::Boolean M_x13() sealed  = System::Collections::IEnumerator::MoveNext;
			//System::Collections::IEnumerator^::MoveNext by M_x13
		public:
			virtual System::Object^ M_x2() sealed  = System::Collections::IEnumerator::Current::get;
			//System::Collections::IEnumerator^::get_Current by M_x2
		public:
			virtual System::Int32 M_x1() sealed;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12 sealed
		{
		private:
			T_x12();
		public:
			static System::Boolean M_x1(System::Object^ A_0,System::Object^ A_1);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::Object^ A_1);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::INamespace^ A_0,System::Object^ A_1);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::Object^ A_1);
		public:
			static System::Boolean M_x1(Reflector::CodeModel::IMethodReference^ A_0,System::Object^ A_1);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2 sealed
		{
		private:
			T_x2();
		public:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
		public:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0);
		private:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::IFieldDeclaration^ A_0);
		private:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::IMethodReference^ A_0);
		private:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::IFieldReference^ A_0);
		private:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::ICustomAttributeProvider^ A_0);
		private:
			static System::Collections::ICollection^ M_x1(Reflector::CodeModel::IType^ A_0);
		};
	private:
		System::Object^ F_x1;
	private:
		System::Collections::IEnumerator^ F_x2;
	private:
		System::Collections::IDictionary^ F_x12;
	private:
		System::Boolean F_x13;
	public:
		T_x21(System::Object^ A_0);
	public:
		virtual void M_x13() sealed  = System::Collections::IEnumerator::Reset;
		//System::Collections::IEnumerator^::Reset by M_x13
	public:
		virtual System::Boolean M_x8() sealed  = System::Collections::IEnumerator::MoveNext;
		//System::Collections::IEnumerator^::MoveNext by M_x8
	public:
		virtual System::Object^ M_x12() sealed  = System::Collections::IEnumerator::Current::get;
		//System::Collections::IEnumerator^::get_Current by M_x12
	public:
		System::Boolean M_x2();
	public:
		virtual System::Int32 M_x1() sealed;
	};
}
