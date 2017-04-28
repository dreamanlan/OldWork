#pragma once

namespace Root
{
	[System::Reflection::DefaultMember("Item")]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x110  : Reflector::IConfigurationManager
	{
	private:
		System::Collections::SortedList^ F_x1;
	public:
		virtual Reflector::IConfiguration^ M_x2(System::String^ A_0) sealed  = Reflector::IConfigurationManager::default::get;
		//Reflector::IConfigurationManager^::get_Item by M_x2
	public:
		void M_x12(System::String^ A_0);
	public:
		void M_x1(System::String^ A_0);
	public:
		void M_x2(System::IO::Stream^ A_0);
	public:
		void M_x1(System::IO::Stream^ A_0);
	public:
		virtual System::String^ M_x1()  = System::Object::ToString;
		//System::Object^::ToString by M_x1
	public:
		T_x110();
	};
}
