#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x119  : Reflector::CodeModel::ILanguageWriterConfiguration
	{
	private:
		Reflector::CodeModel::IVisibilityConfiguration^ F_x1;
	private:
		Reflector::IConfiguration^ F_x2;
	private:
		System::Collections::IDictionary^ F_x12;
	public:
		virtual Reflector::CodeModel::IVisibilityConfiguration^ M_x2() sealed  = Reflector::CodeModel::ILanguageWriterConfiguration::Visibility::get;
		//Reflector::CodeModel::ILanguageWriterConfiguration^::get_Visibility by M_x2
	public:
		void M_x1(Reflector::CodeModel::IVisibilityConfiguration^ A_0);
	public:
		Reflector::IConfiguration^ M_x1();
	public:
		void M_x1(Reflector::IConfiguration^ A_0);
	public:
		virtual System::String^ M_x1(System::String^ A_0) sealed  = Reflector::CodeModel::ILanguageWriterConfiguration::default::get;
		//Reflector::CodeModel::ILanguageWriterConfiguration^::get_Item by M_x1
	public:
		void M_x1(System::String^ A_0,System::String^ A_1);
	public:
		T_x119();
	};
}
