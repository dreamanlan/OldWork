#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x101  : Root::T_x7
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x102
		{
		private:
			System::Collections::ArrayList^ F_x1;
		private:
			Root::T_x101^ F_x2;
		public:
			T_x1(Root::T_x101^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			void M_x2();
		public:
			virtual void M_x2(System::String^ A_0) sealed  = Root::T_x102::M_x1;
			//Root::T_x102^::M_x1 by M_x2
		public:
			virtual void M_x12(System::String^ A_0) sealed  = Root::T_x102::M_x2;
			//Root::T_x102^::M_x2 by M_x12
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Root::T_x102::M_x1;
			//Root::T_x102^::M_x1 by M_x2
		public:
			virtual System::Boolean M_x1(System::String^ A_0) sealed  = Root::T_x102::M_x12;
			//Root::T_x102^::M_x12 by M_x1
		public:
			virtual System::String^ M_x1(System::Int32 A_0) sealed  = Root::T_x102::M_x2;
			//Root::T_x102^::M_x2 by M_x1
		public:
			virtual void M_x1(System::Array^ A_0,System::Int32 A_1) sealed  = System::Collections::ICollection::CopyTo;
			//System::Collections::ICollection^::CopyTo by M_x1
		public:
			virtual System::Int32 M_x13() sealed  = System::Collections::ICollection::Count::get;
			//System::Collections::ICollection^::get_Count by M_x13
		public:
			virtual System::Boolean M_x1() sealed  = System::Collections::ICollection::IsSynchronized::get;
			//System::Collections::ICollection^::get_IsSynchronized by M_x1
		public:
			virtual System::Object^ M_x12() sealed  = System::Collections::ICollection::SyncRoot::get;
			//System::Collections::ICollection^::get_SyncRoot by M_x12
		};
	private:
		System::EventHandler^ F_x1;
	private:
		System::EventHandler^ F_x2;
	private:
		Reflector::IConfiguration^ F_x12;
	private:
		Root::T_x101::T_x1^ F_x13;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x13(System::EventHandler^ A_0) sealed  = Root::T_x7::M_x1;
		//Root::T_x7^::M_x1 by M_x13
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x12(System::EventHandler^ A_0) sealed  = Root::T_x7::M_x2;
		//Root::T_x7^::M_x2 by M_x12
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(System::EventHandler^ A_0) sealed  = Root::T_x7::M_x12;
		//Root::T_x7^::M_x12 by M_x2
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(System::EventHandler^ A_0) sealed  = Root::T_x7::M_x13;
		//Root::T_x7^::M_x13 by M_x1
	public:
		T_x101();
	public:
		Reflector::IConfiguration^ M_x1();
	public:
		void M_x1(Reflector::IConfiguration^ A_0);
	public:
		virtual Root::T_x102^ M_x2() sealed  = Root::T_x7::M_x1;
		//Root::T_x7^::M_x1 by M_x2
	internal:
		virtual void M_x2(System::EventArgs^ A_0);
	internal:
		virtual void M_x1(System::EventArgs^ A_0);
	internal:
		void M_x12();
	};
}
