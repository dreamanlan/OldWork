#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x159  : Reflector::CodeModel::IMethodBody
	{
		ref class T_x12;
		ref class T_x13;
		ref class T_x8;
		ref class T_x2;
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IExceptionHandlerCollection
		{
		private:
			static Reflector::CodeModel::IExceptionHandlerCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IExceptionHandler^>^ F_x2;
		public:
			T_x1(array<Reflector::CodeModel::IExceptionHandler^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IExceptionHandlerCollection::Clear;
			//Reflector::CodeModel::IExceptionHandlerCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IExceptionHandler^ A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::Add;
			//Reflector::CodeModel::IExceptionHandlerCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IExceptionHandler^ A_1) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::Insert;
			//Reflector::CodeModel::IExceptionHandlerCollection^::Insert by M_x1
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::AddRange;
			//Reflector::CodeModel::IExceptionHandlerCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IExceptionHandler^ A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::Remove;
			//Reflector::CodeModel::IExceptionHandlerCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::RemoveAt;
			//Reflector::CodeModel::IExceptionHandlerCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IExceptionHandler^ A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::Contains;
			//Reflector::CodeModel::IExceptionHandlerCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IExceptionHandler^ A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::IndexOf;
			//Reflector::CodeModel::IExceptionHandlerCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IExceptionHandler^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::default::get;
			//Reflector::CodeModel::IExceptionHandlerCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IExceptionHandler^ A_1) sealed  = Reflector::CodeModel::IExceptionHandlerCollection::default::set;
			//Reflector::CodeModel::IExceptionHandlerCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			static Reflector::CodeModel::IExceptionHandlerCollection^ M_x1();
		private:
			static T_x1();
		public:
			property virtual System::Int32 Count
			{
				virtual System::Int32 get() sealed;
			}
		public:
			property virtual System::Boolean IsSynchronized
			{
				virtual System::Boolean get() sealed;
			}
		public:
			property virtual System::Object^ SyncRoot
			{
				virtual System::Object^ get() sealed;
			}
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Reflector::CodeModel::IVariableDeclarationCollection
		{
		private:
			static Reflector::CodeModel::IVariableDeclarationCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IVariableDeclaration^>^ F_x2;
		private:
			System::Int32 F_x12;
		private:
			System::String^ F_x13;
		public:
			T_x13(array<Reflector::CodeModel::IVariableDeclaration^>^ A_0,System::String^ A_1,System::Int32 A_2);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IVariableDeclarationCollection::Clear;
			//Reflector::CodeModel::IVariableDeclarationCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IVariableDeclaration^ A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::Add;
			//Reflector::CodeModel::IVariableDeclarationCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IVariableDeclaration^ A_1) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::Insert;
			//Reflector::CodeModel::IVariableDeclarationCollection^::Insert by M_x1
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::AddRange;
			//Reflector::CodeModel::IVariableDeclarationCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IVariableDeclaration^ A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::Remove;
			//Reflector::CodeModel::IVariableDeclarationCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::RemoveAt;
			//Reflector::CodeModel::IVariableDeclarationCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IVariableDeclaration^ A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::Contains;
			//Reflector::CodeModel::IVariableDeclarationCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IVariableDeclaration^ A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::IndexOf;
			//Reflector::CodeModel::IVariableDeclarationCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IVariableDeclaration^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::default::get;
			//Reflector::CodeModel::IVariableDeclarationCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IVariableDeclaration^ A_1) sealed  = Reflector::CodeModel::IVariableDeclarationCollection::default::set;
			//Reflector::CodeModel::IVariableDeclarationCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			void M_x12();
		public:
			static Reflector::CodeModel::IVariableDeclarationCollection^ M_x1();
		private:
			static T_x13();
		public:
			property virtual System::Int32 Count
			{
				virtual System::Int32 get() sealed;
			}
		public:
			property virtual System::Boolean IsSynchronized
			{
				virtual System::Boolean get() sealed;
			}
		public:
			property virtual System::Object^ SyncRoot
			{
				virtual System::Object^ get() sealed;
			}
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Reflector::CodeModel::IVariableDeclaration
		{
		private:
			Root::T_x159::T_x13^ F_x1;
		private:
			System::Boolean F_x2;
		private:
			System::String^ F_x12;
		private:
			Reflector::CodeModel::IType^ F_x13;
		private:
			System::Int32 F_x8;
		public:
			T_x12(Root::T_x159::T_x13^ A_0);
		public:
			Reflector::CodeModel::IVariableDeclaration^ M_x2();
		public:
			virtual System::Boolean M_x13() sealed  = Reflector::CodeModel::IVariableDeclaration::Pinned::get;
			//Reflector::CodeModel::IVariableDeclaration^::get_Pinned by M_x13
		public:
			virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IVariableDeclaration::Pinned::set;
			//Reflector::CodeModel::IVariableDeclaration^::set_Pinned by M_x1
		public:
			virtual Reflector::CodeModel::IType^ M_x1() sealed  = Reflector::CodeModel::IVariableDeclaration::VariableType::get;
			//Reflector::CodeModel::IVariableDeclaration^::get_VariableType by M_x1
		public:
			virtual void M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::IVariableDeclaration::VariableType::set;
			//Reflector::CodeModel::IVariableDeclaration^::set_VariableType by M_x1
		public:
			virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
			//System::Object^::Equals by M_x1
		public:
			virtual System::Int32 M_x12()  = System::Object::GetHashCode;
			//System::Object^::GetHashCode by M_x12
		public:
			virtual System::String^ M_x8()  = System::Object::ToString;
			//System::Object^::ToString by M_x8
		public:
			property virtual System::Int32 Identifier
			{
				virtual System::Int32 get() sealed;
				virtual void set(System::Int32 value) sealed;
			}
		public:
			property virtual System::String^ Name
			{
				virtual System::String^ get() sealed;
				virtual void set(System::String^ value) sealed;
			}
		public:
			property virtual Reflector::CodeModel::IVariableDeclaration^ Variable
			{
				virtual Reflector::CodeModel::IVariableDeclaration^ get() sealed;
				virtual void set(Reflector::CodeModel::IVariableDeclaration^ value) sealed;
			}
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Reflector::CodeModel::IInstructionCollection
		{
		private:
			static Reflector::CodeModel::IInstructionCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IInstruction^>^ F_x2;
		public:
			T_x2(array<Reflector::CodeModel::IInstruction^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IInstructionCollection::Clear;
			//Reflector::CodeModel::IInstructionCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IInstruction^ A_0) sealed  = Reflector::CodeModel::IInstructionCollection::Add;
			//Reflector::CodeModel::IInstructionCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IInstruction^ A_1) sealed  = Reflector::CodeModel::IInstructionCollection::Insert;
			//Reflector::CodeModel::IInstructionCollection^::Insert by M_x1
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IInstructionCollection::AddRange;
			//Reflector::CodeModel::IInstructionCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IInstruction^ A_0) sealed  = Reflector::CodeModel::IInstructionCollection::Remove;
			//Reflector::CodeModel::IInstructionCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IInstructionCollection::RemoveAt;
			//Reflector::CodeModel::IInstructionCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IInstruction^ A_0) sealed  = Reflector::CodeModel::IInstructionCollection::Contains;
			//Reflector::CodeModel::IInstructionCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IInstruction^ A_0) sealed  = Reflector::CodeModel::IInstructionCollection::IndexOf;
			//Reflector::CodeModel::IInstructionCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IInstruction^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IInstructionCollection::default::get;
			//Reflector::CodeModel::IInstructionCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IInstruction^ A_1) sealed  = Reflector::CodeModel::IInstructionCollection::default::set;
			//Reflector::CodeModel::IInstructionCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			static Reflector::CodeModel::IInstructionCollection^ M_x1();
		private:
			static T_x2();
		public:
			property virtual System::Int32 Count
			{
				virtual System::Int32 get() sealed;
			}
		public:
			property virtual System::Boolean IsSynchronized
			{
				virtual System::Boolean get() sealed;
			}
		public:
			property virtual System::Object^ SyncRoot
			{
				virtual System::Object^ get() sealed;
			}
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8
		{
		private:
			System::Collections::ArrayList^ F_x1;
		private:
			System::Collections::Hashtable^ F_x2;
		public:
			T_x8(array<System::String^>^ A_0);
		public:
			System::String^ M_x2(Reflector::CodeModel::IType^ A_0);
		private:
			static System::String^ M_x1(Reflector::CodeModel::IType^ A_0);
		private:
			static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,System::String^ A_1,System::String^ A_2);
		};
	private:
		Root::T_x161^ F_x1;
	private:
		System::Object^ F_x2;
	public:
		T_x159(Root::T_x161^ A_0,System::Object^ A_1);
	public:
		virtual System::Int32 M_x2() sealed  = Reflector::CodeModel::IMethodBody::MaxStack::get;
		//Reflector::CodeModel::IMethodBody^::get_MaxStack by M_x2
	public:
		virtual void M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IMethodBody::MaxStack::set;
		//Reflector::CodeModel::IMethodBody^::set_MaxStack by M_x1
	public:
		virtual System::Boolean M_x8() sealed  = Reflector::CodeModel::IMethodBody::InitializeLocalVariables::get;
		//Reflector::CodeModel::IMethodBody^::get_InitializeLocalVariables by M_x8
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IMethodBody::InitializeLocalVariables::set;
		//Reflector::CodeModel::IMethodBody^::set_InitializeLocalVariables by M_x1
	public:
		virtual Reflector::CodeModel::IVariableDeclarationCollection^ M_x12() sealed  = Reflector::CodeModel::IMethodBody::LocalVariables::get;
		//Reflector::CodeModel::IMethodBody^::get_LocalVariables by M_x12
	public:
		virtual Reflector::CodeModel::IExceptionHandlerCollection^ M_x13() sealed  = Reflector::CodeModel::IMethodBody::ExceptionHandlers::get;
		//Reflector::CodeModel::IMethodBody^::get_ExceptionHandlers by M_x13
	public:
		virtual Reflector::CodeModel::IInstructionCollection^ M_x1() sealed  = Reflector::CodeModel::IMethodBody::Instructions::get;
		//Reflector::CodeModel::IMethodBody^::get_Instructions by M_x1
	private:
		Reflector::CodeModel::IInstruction^ M_x1(Root::T_x139^ A_0);
	};
}
