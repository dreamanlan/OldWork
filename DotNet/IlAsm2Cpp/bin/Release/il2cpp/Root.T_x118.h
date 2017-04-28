#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x118  : Reflector::ILanguageManager
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::CollectionBase , Reflector::ILanguageCollection
		{
		public:
			void M_x1(Reflector::CodeModel::ILanguage^ A_0);
		public:
			void M_x2(Reflector::CodeModel::ILanguage^ A_0);
		public:
			virtual Reflector::CodeModel::ILanguage^ M_x1(System::Int32 A_0) sealed  = Reflector::ILanguageCollection::default::get;
			//Reflector::ILanguageCollection^::get_Item by M_x1
		public:
			T_x1();
		};
	private:
		System::EventHandler^ F_x1;
	private:
		System::EventHandler^ F_x2;
	private:
		System::EventHandler^ F_x12;
	private:
		Reflector::CodeModel::ILanguage^ F_x13;
	private:
		Root::T_x118::T_x1^ F_x8;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x5(System::EventHandler^ A_0) sealed  = Reflector::ILanguageManager::ActiveLanguageChanged::add;
		//Reflector::ILanguageManager^::add_ActiveLanguageChanged by M_x5
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::ILanguageManager::ActiveLanguageChanged::remove;
		//Reflector::ILanguageManager^::remove_ActiveLanguageChanged by M_x1
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x13(System::EventHandler^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x12(System::EventHandler^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(System::EventHandler^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x8(System::EventHandler^ A_0);
	public:
		virtual Reflector::CodeModel::ILanguage^ M_x1() sealed  = Reflector::ILanguageManager::ActiveLanguage::get;
		//Reflector::ILanguageManager^::get_ActiveLanguage by M_x1
	public:
		virtual void M_x2(Reflector::CodeModel::ILanguage^ A_0) sealed  = Reflector::ILanguageManager::ActiveLanguage::set;
		//Reflector::ILanguageManager^::set_ActiveLanguage by M_x2
	public:
		virtual void M_x12(Reflector::CodeModel::ILanguage^ A_0) sealed  = Reflector::ILanguageManager::RegisterLanguage;
		//Reflector::ILanguageManager^::RegisterLanguage by M_x12
	public:
		virtual void M_x1(Reflector::CodeModel::ILanguage^ A_0) sealed  = Reflector::ILanguageManager::UnregisterLanguage;
		//Reflector::ILanguageManager^::UnregisterLanguage by M_x1
	public:
		virtual Reflector::ILanguageCollection^ M_x2() sealed  = Reflector::ILanguageManager::Languages::get;
		//Reflector::ILanguageManager^::get_Languages by M_x2
	protected:
		virtual void M_x12(System::EventArgs^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0);
	protected:
		virtual void M_x1(System::EventArgs^ A_0);
	public:
		T_x118();
	};
}
