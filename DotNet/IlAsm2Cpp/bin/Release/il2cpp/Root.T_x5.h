#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x5  : Reflector::CodeModel::IVisibilityConfiguration
	{
	private:
		Reflector::IConfiguration^ F_x1;
	private:
		System::Boolean F_x2;
	private:
		System::Boolean F_x12;
	private:
		System::Boolean F_x13;
	private:
		System::Boolean F_x8;
	private:
		System::Boolean F_x5;
	private:
		System::Boolean F_x9;
	public:
		Reflector::IConfiguration^ M_x2();
	public:
		void M_x1(Reflector::IConfiguration^ A_0);
	public:
		virtual System::Boolean M_x12() sealed  = Reflector::CodeModel::IVisibilityConfiguration::Public::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_Public by M_x12
	public:
		virtual System::Boolean M_x5() sealed  = Reflector::CodeModel::IVisibilityConfiguration::Private::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_Private by M_x5
	public:
		virtual System::Boolean M_x4() sealed  = Reflector::CodeModel::IVisibilityConfiguration::Family::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_Family by M_x4
	public:
		virtual System::Boolean M_x8() sealed  = Reflector::CodeModel::IVisibilityConfiguration::Assembly::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_Assembly by M_x8
	public:
		virtual System::Boolean M_x13() sealed  = Reflector::CodeModel::IVisibilityConfiguration::FamilyAndAssembly::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_FamilyAndAssembly by M_x13
	public:
		virtual System::Boolean M_x9() sealed  = Reflector::CodeModel::IVisibilityConfiguration::FamilyOrAssembly::get;
		//Reflector::CodeModel::IVisibilityConfiguration^::get_FamilyOrAssembly by M_x9
	private:
		void M_x1(System::Object^ A_0,System::ComponentModel::PropertyChangedEventArgs^ A_1);
	private:
		void M_x1();
	public:
		T_x5();
	};
}
