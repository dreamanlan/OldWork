#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x13  : Reflector::CodeModel::IAssemblyManager
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IAssemblyCollection
		{
		private:
			Root::T_x13^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		public:
			T_x1(Root::T_x13^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			void M_x1(array<Reflector::CodeModel::IAssembly^>^ A_0,System::Int32 A_1);
		public:
			virtual void M_x1() sealed  = Reflector::CodeModel::IAssemblyCollection::Clear;
			//Reflector::CodeModel::IAssemblyCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::Add;
			//Reflector::CodeModel::IAssemblyCollection^::Add by M_x12
		public:
			void M_x1(System::Collections::ICollection^ A_0);
		public:
			virtual void M_x13(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::Remove;
			//Reflector::CodeModel::IAssemblyCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::RemoveAt;
			//Reflector::CodeModel::IAssemblyCollection^::RemoveAt by M_x2
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IAssembly^ A_1) sealed  = Reflector::CodeModel::IAssemblyCollection::Insert;
			//Reflector::CodeModel::IAssemblyCollection^::Insert by M_x1
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::Contains;
			//Reflector::CodeModel::IAssemblyCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::IndexOf;
			//Reflector::CodeModel::IAssemblyCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IAssembly^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IAssemblyCollection::default::get;
			//Reflector::CodeModel::IAssemblyCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IAssembly^ A_1) sealed  = Reflector::CodeModel::IAssemblyCollection::default::set;
			//Reflector::CodeModel::IAssemblyCollection^::set_Item by M_x2
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
		System::EventHandler^ F_x1;
	private:
		System::EventHandler^ F_x2;
	private:
		Reflector::CodeModel::IAssemblyCollection^ F_x12;
	private:
		Reflector::CodeModel::IAssemblyResolver^ F_x13;
	private:
		Reflector::CodeModel::IAssemblyComparer^ F_x8;
	private:
		System::Boolean F_x5;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x12(System::EventHandler^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::AssemblyLoaded::add;
		//Reflector::CodeModel::IAssemblyManager^::add_AssemblyLoaded by M_x12
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(System::EventHandler^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::AssemblyLoaded::remove;
		//Reflector::CodeModel::IAssemblyManager^::remove_AssemblyLoaded by M_x2
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::AssemblyUnloaded::add;
		//Reflector::CodeModel::IAssemblyManager^::add_AssemblyUnloaded by M_x1
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x13(System::EventHandler^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::AssemblyUnloaded::remove;
		//Reflector::CodeModel::IAssemblyManager^::remove_AssemblyUnloaded by M_x13
	public:
		T_x13();
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyManager::Load;
		//Reflector::CodeModel::IAssemblyManager^::Load by M_x1
	public:
		virtual void M_x1(Reflector::CodeModel::IAssembly^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyManager::SaveFile;
		//Reflector::CodeModel::IAssemblyManager^::SaveFile by M_x1
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::LoadFile;
		//Reflector::CodeModel::IAssemblyManager^::LoadFile by M_x1
	public:
		virtual void M_x1(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::Unload;
		//Reflector::CodeModel::IAssemblyManager^::Unload by M_x1
	public:
		virtual Reflector::CodeModel::IAssemblyCollection^ M_x12() sealed  = Reflector::CodeModel::IAssemblyManager::Assemblies::get;
		//Reflector::CodeModel::IAssemblyManager^::get_Assemblies by M_x12
	public:
		virtual Reflector::CodeModel::IAssemblyResolver^ M_x13() sealed  = Reflector::CodeModel::IAssemblyManager::Resolver::get;
		//Reflector::CodeModel::IAssemblyManager^::get_Resolver by M_x13
	public:
		virtual void M_x1(Reflector::CodeModel::IAssemblyResolver^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::Resolver::set;
		//Reflector::CodeModel::IAssemblyManager^::set_Resolver by M_x1
	public:
		virtual Reflector::CodeModel::IAssemblyComparer^ M_x2() sealed  = Reflector::CodeModel::IAssemblyManager::Comparer::get;
		//Reflector::CodeModel::IAssemblyManager^::get_Comparer by M_x2
	public:
		virtual void M_x1(Reflector::CodeModel::IAssemblyComparer^ A_0) sealed  = Reflector::CodeModel::IAssemblyManager::Comparer::set;
		//Reflector::CodeModel::IAssemblyManager^::set_Comparer by M_x1
	public:
		virtual System::Boolean M_x1() sealed  = Reflector::CodeModel::IAssemblyManager::Symbols::get;
		//Reflector::CodeModel::IAssemblyManager^::get_Symbols by M_x1
	public:
		virtual void M_x1(System::Boolean A_0) sealed  = Reflector::CodeModel::IAssemblyManager::Symbols::set;
		//Reflector::CodeModel::IAssemblyManager^::set_Symbols by M_x1
	protected:
		virtual void M_x1(System::EventArgs^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0);
	};
}
