#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x55  : Reflector::CodeModel::IAssemblyCache
	{
		ref class T_x2;
		ref class T_x1;
		ref class T_x12;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IAssemblyLocationCollection
		{
			ref class T_x1_12;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1_12  : System::Collections::IEnumerator
			{
			private:
				array<System::String^>^ F_x1;
			private:
				System::Int32 F_x2;
			private:
				System::Object^ F_x12;
			public:
				T_x1_12(array<System::String^>^ A_0);
			public:
				virtual void M_x2() sealed  = System::Collections::IEnumerator::Reset;
				//System::Collections::IEnumerator^::Reset by M_x2
			public:
				virtual System::Boolean M_x12() sealed  = System::Collections::IEnumerator::MoveNext;
				//System::Collections::IEnumerator^::MoveNext by M_x12
			public:
				virtual System::Object^ M_x1() sealed  = System::Collections::IEnumerator::Current::get;
				//System::Collections::IEnumerator^::get_Current by M_x1
			};
		private:
			Root::T_x55^ F_x1;
		public:
			T_x1(Root::T_x55^ A_0);
		public:
			virtual Reflector::CodeModel::IAssemblyLocation^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IAssemblyLocationCollection::default::get;
			//Reflector::CodeModel::IAssemblyLocationCollection^::get_Item by M_x1
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		private:
			array<Reflector::CodeModel::IAssemblyLocation^>^ M_x1();
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
		ref class T_x12  : Reflector::CodeModel::IStringCollection
		{
		private:
			System::Collections::ArrayList^ F_x1;
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x12(System::String^ A_0) sealed  = Reflector::CodeModel::IStringCollection::Add;
			//Reflector::CodeModel::IStringCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IStringCollection::AddRange;
			//Reflector::CodeModel::IStringCollection^::AddRange by M_x1
		public:
			virtual void M_x1(System::Int32 A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IStringCollection::Insert;
			//Reflector::CodeModel::IStringCollection^::Insert by M_x1
		public:
			virtual void M_x13(System::String^ A_0) sealed  = Reflector::CodeModel::IStringCollection::Remove;
			//Reflector::CodeModel::IStringCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IStringCollection::RemoveAt;
			//Reflector::CodeModel::IStringCollection^::RemoveAt by M_x2
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IStringCollection::Clear;
			//Reflector::CodeModel::IStringCollection^::Clear by M_x1
		public:
			virtual System::Boolean M_x2(System::String^ A_0) sealed  = Reflector::CodeModel::IStringCollection::Contains;
			//Reflector::CodeModel::IStringCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::IStringCollection::IndexOf;
			//Reflector::CodeModel::IStringCollection^::IndexOf by M_x1
		public:
			virtual System::String^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IStringCollection::default::get;
			//Reflector::CodeModel::IStringCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IStringCollection::default::set;
			//Reflector::CodeModel::IStringCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			T_x12();
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
		ref class T_x2  : Reflector::CodeModel::IAssemblyLocation
		{
		private:
			Reflector::CodeModel::IAssemblyReference^ F_x1;
		private:
			System::String^ F_x2;
		public:
			T_x2(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1);
		public:
			virtual System::Int32 CompareTo(System::Object^ obj) sealed;
		public:
			virtual System::String^ M_x2() sealed  = Reflector::CodeModel::IAssemblyLocation::Location::get;
			//Reflector::CodeModel::IAssemblyLocation^::get_Location by M_x2
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::IAssemblyLocation::Location::set;
			//Reflector::CodeModel::IAssemblyLocation^::set_Location by M_x1
		public:
			virtual Reflector::CodeModel::IAssembly^ Resolve() sealed;
		public:
			virtual System::String^ M_x1()  = System::Object::ToString;
			//System::Object^::ToString by M_x1
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
	private:
		Root::T_x55::T_x12^ F_x1;
	private:
		Root::T_x55::T_x1^ F_x2;
	public:
		T_x55();
	public:
		virtual System::String^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyCache::QueryLocation;
		//Reflector::CodeModel::IAssemblyCache^::QueryLocation by M_x1
	public:
		virtual Reflector::CodeModel::IAssemblyLocationCollection^ M_x2() sealed  = Reflector::CodeModel::IAssemblyCache::Assemblies::get;
		//Reflector::CodeModel::IAssemblyCache^::get_Assemblies by M_x2
	public:
		virtual Reflector::CodeModel::IStringCollection^ M_x1() sealed  = Reflector::CodeModel::IAssemblyCache::Directories::get;
		//Reflector::CodeModel::IAssemblyCache^::get_Directories by M_x1
	private:
		System::String^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::Collections::IEnumerable^ A_1,System::Int32 A_2);
	private:
		System::Boolean M_x1(System::String^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1);
	private:
		array<System::String^>^ M_x1(System::String^ A_0,System::Int32 A_1);
	private:
		array<System::String^>^ M_x1(System::String^ A_0,System::Collections::IEnumerable^ A_1,System::Int32 A_2);
	private:
		array<System::String^>^ M_x1(System::String^ A_0,System::String^ A_1,System::Int32 A_2);
	};
}
