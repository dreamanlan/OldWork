#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x91  : Root::T_x90
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::CollectionBase , Root::T_x92
		{
		public:
			void M_x1(Reflector::IPackage^ A_0);
		public:
			virtual Reflector::IPackage^ M_x1(System::Int32 A_0) sealed;
		public:
			T_x1();
		};
	private:
		System::String^ F_x1;
	private:
		System::Reflection::Assembly^ F_x2;
	private:
		Root::T_x91::T_x1^ F_x12;
	public:
		T_x91(System::String^ A_0,System::Reflection::Assembly^ A_1);
	public:
		~T_x91();
		//System::IDisposable^::Dispose by M_x2
	public:
		void M_x1(System::IServiceProvider^ A_0);
	public:
		void M_x13();
	public:
		virtual System::String^ M_x8() sealed  = Root::T_x90::M_x1;
		//Root::T_x90^::M_x1 by M_x8
	public:
		virtual System::String^ M_x12() sealed  = Root::T_x90::M_x2;
		//Root::T_x90^::M_x2 by M_x12
	public:
		virtual Root::T_x92^ M_x1() sealed  = Root::T_x90::M_x12;
		//Root::T_x90^::M_x12 by M_x1
	};
}
