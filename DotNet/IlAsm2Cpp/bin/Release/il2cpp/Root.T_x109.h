#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x109  : Reflector::IConfiguration
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		public:
			System::String^ F_x1;
		public:
			System::String^ F_x2;
		public:
			T_x1(System::String^ A_0,System::String^ A_1);
		};
	private:
		System::ComponentModel::PropertyChangedEventHandler^ F_x1;
	private:
		System::Collections::ArrayList^ F_x2;
	public:
		virtual void M_x1() sealed  = Reflector::IConfiguration::Clear;
		//Reflector::IConfiguration^::Clear by M_x1
	public:
		virtual System::Boolean M_x2(System::String^ A_0) sealed  = Reflector::IConfiguration::HasProperty;
		//Reflector::IConfiguration^::HasProperty by M_x2
	public:
		virtual void M_x1(System::String^ A_0) sealed  = Reflector::IConfiguration::ClearProperty;
		//Reflector::IConfiguration^::ClearProperty by M_x1
	public:
		virtual void M_x1(System::String^ A_0,System::String^ A_1) sealed  = Reflector::IConfiguration::SetProperty;
		//Reflector::IConfiguration^::SetProperty by M_x1
	public:
		virtual void M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2) sealed  = Reflector::IConfiguration::SetProperty;
		//Reflector::IConfiguration^::SetProperty by M_x1
	public:
		virtual System::String^ M_x12(System::String^ A_0) sealed  = Reflector::IConfiguration::GetProperty;
		//Reflector::IConfiguration^::GetProperty by M_x12
	public:
		virtual System::String^ M_x2(System::String^ A_0,System::String^ A_1) sealed  = Reflector::IConfiguration::GetProperty;
		//Reflector::IConfiguration^::GetProperty by M_x2
	protected:
		virtual void M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0);
	internal:
		System::Boolean M_x2();
	internal:
		void M_x1(System::IO::StreamReader^ A_0);
	internal:
		void M_x1(System::IO::StreamWriter^ A_0);
	public:
		T_x109();
	public:
		virtual event System::ComponentModel::PropertyChangedEventHandler^ PropertyChanged
		{
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void add(System::ComponentModel::PropertyChangedEventHandler^ value) sealed;
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void remove(System::ComponentModel::PropertyChangedEventHandler^ value) sealed;
		}
	};
}
