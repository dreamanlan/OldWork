#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x47  : System::Windows::Forms::Control
	{
		ref class T_x2;
		ref class T_x1;
		ref class T_x12;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x48::T_x2
		{
		private:
			Root::T_x47^ F_x1;
		public:
			T_x1(Root::T_x47^ A_0);
		public:
			virtual void M_x1(System::String^ A_0,System::Int32 A_1,System::String^ A_2,System::Object^% A_3,System::String^ A_4,System::Boolean% A_5) sealed;
		public:
			virtual void M_x1(System::String^ A_0) sealed;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Root::T_x48::T_x1
		{
		private:
			Root::T_x47^ F_x1;
		public:
			T_x12(Root::T_x47^ A_0);
		public:
			virtual void M_x1(System::Object^ A_0,System::String^% A_1) sealed;
		};
	internal:
		//SecurityAction::InheritanceDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\"\r\n               Unrestricted="+"\"true\"/>\r\n"
		//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\"\r\n               Unrestricted="+"\"true\"/>\r\n"
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2
		{
		private:
			Root::T_x18::T_x5^ F_x1;
		private:
			System::Int32 F_x2;
		public:
			T_x2(System::Object^ A_0,System::Object^ A_1,System::Type^ A_2);
		protected:
			!T_x2();
			//System::Object^::Finalize by M_x2
		public:
			void M_x1();
		};
	private:
		Root::T_x52^ F_x1;
	private:
		Root::T_x50^ F_x2;
	private:
		Root::T_x50^ F_x12;
	private:
		System::String^ F_x13;
	private:
		System::String^ F_x8;
	private:
		System::Boolean F_x5;
	private:
		System::Boolean F_x9;
	private:
		Root::T_x58^ F_x4;
	private:
		Root::T_x47::T_x2^ F_x15;
	private:
		Root::T_x47::T_x2^ F_x11;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(Root::T_x52^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x1(Root::T_x52^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x13(Root::T_x50^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x1(Root::T_x50^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(Root::T_x50^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x12(Root::T_x50^ A_0);
	public:
		T_x47();
	public:
		System::Boolean M_x13();
	public:
		void M_x2(System::Boolean A_0);
	public:
		void M_x9();
	public:
		void M_x12();
	public:
		void M_x5();
	protected:
		virtual System::Drawing::Size M_x8()  = System::Windows::Forms::Control::DefaultSize::get;
		//System::Windows::Forms::Control^::get_DefaultSize by M_x8
	protected:
		virtual void M_x1(System::Int32 A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3,System::Windows::Forms::BoundsSpecified A_4)  = System::Windows::Forms::Control::SetBoundsCore;
		//System::Windows::Forms::Control^::SetBoundsCore by M_x1
	protected:
		virtual void M_x13(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnGotFocus;
		//System::Windows::Forms::Control^::OnGotFocus by M_x13
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnLostFocus;
		//System::Windows::Forms::Control^::OnLostFocus by M_x1
	public:
		void M_x1(System::String^ A_0);
	public:
		System::String^ M_x2();
	public:
		void M_x2(System::String^ A_0);
	public:
		Root::T_x53^ M_x4();
	public:
		virtual System::Boolean M_x1(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::PreProcessMessage;
		//System::Windows::Forms::Control^::PreProcessMessage by M_x1
	protected:
		virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleCreated;
		//System::Windows::Forms::Control^::OnHandleCreated by M_x12
	protected:
		virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleDestroyed;
		//System::Windows::Forms::Control^::OnHandleDestroyed by M_x2
	protected:
		virtual void M_x2(Root::T_x51^ A_0);
	protected:
		virtual void M_x12(Root::T_x49^ A_0);
	protected:
		virtual void M_x13(Root::T_x49^ A_0);
	protected:
		virtual System::Boolean M_x1(System::Windows::Forms::Keys A_0)  = System::Windows::Forms::Control::IsInputKey;
		//System::Windows::Forms::Control^::IsInputKey by M_x1
	private:
		void M_x1(Root::T_x51^ A_0);
	private:
		void M_x2(Root::T_x49^ A_0);
	private:
		void M_x1(Root::T_x49^ A_0);
	private:
		System::String^ M_x1();
	};
}
