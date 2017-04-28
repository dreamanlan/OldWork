#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x136  : Reflector::CodeModel::IAssembly
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IResourceCollection
		{
		private:
			array<Reflector::CodeModel::IResource^>^ F_x1;
		public:
			T_x1(array<Reflector::CodeModel::IResource^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IResourceCollection::Clear;
			//Reflector::CodeModel::IResourceCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IResource^ A_0) sealed  = Reflector::CodeModel::IResourceCollection::Add;
			//Reflector::CodeModel::IResourceCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IResourceCollection::AddRange;
			//Reflector::CodeModel::IResourceCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IResource^ A_0) sealed  = Reflector::CodeModel::IResourceCollection::Remove;
			//Reflector::CodeModel::IResourceCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IResource^ A_1) sealed  = Reflector::CodeModel::IResourceCollection::Insert;
			//Reflector::CodeModel::IResourceCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IResourceCollection::RemoveAt;
			//Reflector::CodeModel::IResourceCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IResource^ A_0) sealed  = Reflector::CodeModel::IResourceCollection::Contains;
			//Reflector::CodeModel::IResourceCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IResource^ A_0) sealed  = Reflector::CodeModel::IResourceCollection::IndexOf;
			//Reflector::CodeModel::IResourceCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IResource^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IResourceCollection::default::get;
			//Reflector::CodeModel::IResourceCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IResource^ A_1) sealed  = Reflector::CodeModel::IResourceCollection::default::set;
			//Reflector::CodeModel::IResourceCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
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
	private:
		System::String^ F_x1;
	private:
		System::Exception^ F_x2;
	private:
		Reflector::CodeModel::HashAlgorithm F_x12;
	private:
		Reflector::CodeModel::IAssemblyReference^ F_x13;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x8;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x5;
	private:
		Reflector::CodeModel::IModuleCollection^ F_x9;
	private:
		static Root::T_x145^ F_x4;
	public:
		T_x136(Reflector::CodeModel::IAssemblyManager^ A_0,System::String^ A_1);
	public:
		~T_x136();
		//System::IDisposable^::Dispose by M_x1
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 M_x15()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x15
	public:
		virtual Reflector::CodeModel::IAssembly^ Resolve() sealed;
	public:
		virtual Reflector::CodeModel::IModuleCollection^ M_x8() sealed  = Reflector::CodeModel::IAssembly::Modules::get;
		//Reflector::CodeModel::IAssembly^::get_Modules by M_x8
	public:
		virtual Reflector::CodeModel::IResourceCollection^ M_x9() sealed  = Reflector::CodeModel::IAssembly::Resources::get;
		//Reflector::CodeModel::IAssembly^::get_Resources by M_x9
	public:
		virtual Reflector::CodeModel::IAssemblyManager^ M_x12() sealed  = Reflector::CodeModel::IAssembly::AssemblyManager::get;
		//Reflector::CodeModel::IAssembly^::get_AssemblyManager by M_x12
	public:
		virtual void M_x1(Reflector::CodeModel::IAssemblyManager^ A_0) sealed  = Reflector::CodeModel::IAssembly::AssemblyManager::set;
		//Reflector::CodeModel::IAssembly^::set_AssemblyManager by M_x1
	public:
		virtual System::String^ M_x5() sealed  = Reflector::CodeModel::IAssembly::Status::get;
		//Reflector::CodeModel::IAssembly^::get_Status by M_x5
	public:
		virtual Reflector::CodeModel::HashAlgorithm M_x2() sealed  = Reflector::CodeModel::IAssembly::HashAlgorithm::get;
		//Reflector::CodeModel::IAssembly^::get_HashAlgorithm by M_x2
	public:
		virtual void M_x1(Reflector::CodeModel::HashAlgorithm A_0) sealed  = Reflector::CodeModel::IAssembly::HashAlgorithm::set;
		//Reflector::CodeModel::IAssembly^::set_HashAlgorithm by M_x1
	public:
		virtual Reflector::CodeModel::AssemblyType M_x11() sealed  = Reflector::CodeModel::IAssembly::Type::get;
		//Reflector::CodeModel::IAssembly^::get_Type by M_x11
	public:
		virtual void M_x1(Reflector::CodeModel::AssemblyType A_0) sealed  = Reflector::CodeModel::IAssembly::Type::set;
		//Reflector::CodeModel::IAssembly^::set_Type by M_x1
	public:
		virtual Reflector::CodeModel::IMethodDeclaration^ M_x13() sealed  = Reflector::CodeModel::IAssembly::EntryPoint::get;
		//Reflector::CodeModel::IAssembly^::get_EntryPoint by M_x13
	public:
		virtual void M_x1(Reflector::CodeModel::IMethodDeclaration^ A_0) sealed  = Reflector::CodeModel::IAssembly::EntryPoint::set;
		//Reflector::CodeModel::IAssembly^::set_EntryPoint by M_x1
	public:
		virtual System::String^ M_x4()  = System::Object::ToString;
		//System::Object^::ToString by M_x4
	internal:
		System::String^ M_x2(System::Object^ A_0);
	internal:
		void M_x1(System::String^ A_0,System::String^ A_1);
	internal:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	private:
		static T_x136();
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::IModule^ Context
		{
			virtual Reflector::CodeModel::IModule^ get() sealed;
			virtual void set(Reflector::CodeModel::IModule^ value) sealed;
		}
	public:
		property virtual System::String^ Culture
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual array<System::Byte>^ HashValue
		{
			virtual array<System::Byte>^ get() sealed;
			virtual void set(array<System::Byte>^ value) sealed;
		}
	public:
		property virtual System::String^ Location
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual System::String^ Name
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	public:
		property virtual array<System::Byte>^ PublicKey
		{
			virtual array<System::Byte>^ get() sealed;
			virtual void set(array<System::Byte>^ value) sealed;
		}
	public:
		property virtual array<System::Byte>^ PublicKeyToken
		{
			virtual array<System::Byte>^ get() sealed;
			virtual void set(array<System::Byte>^ value) sealed;
		}
	public:
		property virtual System::Boolean Retargetable
		{
			virtual System::Boolean get() sealed;
			virtual void set(System::Boolean value) sealed;
		}
	public:
		property virtual System::Version^ Version
		{
			virtual System::Version^ get() sealed;
			virtual void set(System::Version^ value) sealed;
		}
	};
}
