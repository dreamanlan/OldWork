#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x96  : Root::T_x95
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::CollectionBase , Root::T_x56
		{
		public:
			void M_x1(Root::T_x90^ A_0);
		public:
			void M_x2(Root::T_x90^ A_0);
		public:
			virtual Root::T_x90^ M_x1(System::Int32 A_0) sealed;
		public:
			T_x1();
		};
	private:
		System::IServiceProvider^ F_x1;
	private:
		Root::T_x94^ F_x2;
	private:
		Root::T_x96::T_x1^ F_x12;
	public:
		T_x96(System::IServiceProvider^ A_0);
	public:
		virtual void M_x2(System::String^ A_0) sealed  = Root::T_x95::M_x1;
		//Root::T_x95^::M_x1 by M_x2
	public:
		virtual void M_x1(array<System::String^>^ A_0) sealed;
	public:
		virtual void M_x1(Root::T_x90^ A_0) sealed;
	private:
		Root::T_x90^ M_x1(System::String^ A_0);
	private:
		void M_x1(System::String^ A_0,System::Exception^ A_1);
	private:
		void M_x1();
	public:
		virtual Root::T_x56^ M_x2() sealed  = Root::T_x95::M_x1;
		//Root::T_x95^::M_x1 by M_x2
	};
}
