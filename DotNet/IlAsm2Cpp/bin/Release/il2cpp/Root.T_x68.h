#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x68  : System::Windows::Forms::Form , Reflector::IWindowManager
	{
		value class T_x2;
		ref class T_x13;
		ref class T_x1;
	internal:
		enum class T_x12
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
			,F_x12=(System::Int32)0x00000002
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::IWindow
		{
		private:
			Root::T_x68^ F_x1;
		private:
			System::String^ F_x2;
		private:
			System::Windows::Forms::Control^ F_x12;
		private:
			System::String^ F_x13;
		private:
			System::Boolean F_x8;
		public:
			T_x1(Root::T_x68^ A_0,System::String^ A_1,System::Windows::Forms::Control^ A_2,System::String^ A_3);
		public:
			virtual System::String^ M_x1() sealed  = Reflector::IWindow::Caption::get;
			//Reflector::IWindow^::get_Caption by M_x1
		public:
			void M_x1(System::String^ A_0);
		public:
			virtual System::Windows::Forms::Control^ M_x2() sealed  = Reflector::IWindow::Content::get;
			//Reflector::IWindow^::get_Content by M_x2
		public:
			void M_x1(System::Windows::Forms::Control^ A_0);
		public:
			virtual System::Boolean M_x12() sealed  = Reflector::IWindow::Visible::get;
			//Reflector::IWindow^::get_Visible by M_x12
		public:
			virtual void M_x1(System::Boolean A_0) sealed  = Reflector::IWindow::Visible::set;
			//Reflector::IWindow^::set_Visible by M_x1
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Reflector::IWindowCollection
		{
		private:
			Root::T_x68^ F_x1;
		private:
			System::Collections::Hashtable^ F_x2;
		public:
			T_x13(Root::T_x68^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual Reflector::IWindow^ M_x1(System::String^ A_0,System::Windows::Forms::Control^ A_1,System::String^ A_2) sealed  = Reflector::IWindowCollection::Add;
			//Reflector::IWindowCollection^::Add by M_x1
		public:
			virtual void M_x2(System::String^ A_0) sealed  = Reflector::IWindowCollection::Remove;
			//Reflector::IWindowCollection^::Remove by M_x2
		public:
			virtual Reflector::IWindow^ M_x1(System::String^ A_0) sealed  = Reflector::IWindowCollection::default::get;
			//Reflector::IWindowCollection^::get_Item by M_x1
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
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
	internal:
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		value class T_x2 sealed
		{
		public:
			System::IntPtr F_x1;
		public:
			System::Int32 F_x2;
		public:
			System::IntPtr F_x12;
		public:
			T_x2(System::IntPtr A_0,System::Int32 A_1,System::IntPtr A_2);
		};
	private:
		Root::T_x73^ F_x1;
	private:
		Reflector::IConfiguration^ F_x2;
	private:
		Root::T_x68::T_x13^ F_x12;
	private:
		System::Windows::Forms::Control^ F_x13;
	private:
		System::Windows::Forms::Control^ F_x8;
	private:
		System::Windows::Forms::Splitter^ F_x5;
	private:
		Root::T_x78^ F_x9;
	private:
		Root::T_x68::T_x12 F_x4;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x1(Root::T_x73^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(Root::T_x73^ A_0);
	public:
		T_x68();
	public:
		virtual void M_x12(System::String^ A_0) sealed  = Reflector::IWindowManager::ShowMessage;
		//Reflector::IWindowManager^::ShowMessage by M_x12
	public:
		virtual Reflector::IWindowCollection^ M_x4() sealed  = Reflector::IWindowManager::Windows::get;
		//Reflector::IWindowManager^::get_Windows by M_x4
	public:
		virtual System::Windows::Forms::Control^ M_x5() sealed  = Reflector::IWindowManager::Content::get;
		//Reflector::IWindowManager^::get_Content by M_x5
	public:
		virtual void M_x1(System::Windows::Forms::Control^ A_0) sealed  = Reflector::IWindowManager::Content::set;
		//Reflector::IWindowManager^::set_Content by M_x1
	public:
		virtual System::Windows::Forms::Control^ M_x15() sealed  = Reflector::IWindowManager::CommandBarManager::get;
		//Reflector::IWindowManager^::get_CommandBarManager by M_x15
	public:
		virtual void M_x2(System::Windows::Forms::Control^ A_0) sealed  = Reflector::IWindowManager::CommandBarManager::set;
		//Reflector::IWindowManager^::set_CommandBarManager by M_x2
	public:
		Reflector::IConfiguration^ M_x12();
	public:
		void M_x1(Reflector::IConfiguration^ A_0);
	protected:
		virtual System::Boolean M_x1(System::Windows::Forms::Message% A_0,System::Windows::Forms::Keys A_1)  = System::Windows::Forms::Form::ProcessCmdKey;
		//System::Windows::Forms::Form^::ProcessCmdKey by M_x1
	protected:
		virtual System::Boolean M_x1(System::Windows::Forms::Keys A_0)  = System::Windows::Forms::Form::ProcessDialogKey;
		//System::Windows::Forms::Form^::ProcessDialogKey by M_x1
	protected:
		virtual void M_x1(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Form::WndProc;
		//System::Windows::Forms::Form^::WndProc by M_x1
	private:
		void M_x2(System::String^ A_0);
	private:
		void M_x1(System::String^ A_0);
	private:
		void M_x1(System::Object^ A_0,System::ComponentModel::CancelEventArgs^ A_1);
	private:
		void M_x2();
	private:
		void M_x1();
	protected:
		virtual void OnLocationChanged(System::EventArgs^ e) override;
	protected:
		virtual void OnSizeChanged(System::EventArgs^ e) override;
	protected:
		virtual void M_x1(Root::T_x72^ A_0);
	protected:
		virtual void M_x9()  = Reflector::IWindowManager::Activate;
		//Reflector::IWindowManager^::Activate by M_x9
	protected:
		virtual void M_x13()  = Reflector::IWindowManager::Close;
		//Reflector::IWindowManager^::Close by M_x13
	protected:
		virtual System::Boolean M_x8()  = Reflector::IWindowManager::Visible::get;
		//Reflector::IWindowManager^::get_Visible by M_x8
	protected:
		virtual void M_x1(System::Boolean A_0)  = Reflector::IWindowManager::Visible::set;
		//Reflector::IWindowManager^::set_Visible by M_x1
	protected:
		virtual void M_x12(System::EventHandler^ A_0)  = Reflector::IWindowManager::Load::add;
		//Reflector::IWindowManager^::add_Load by M_x12
	protected:
		virtual void M_x2(System::EventHandler^ A_0)  = Reflector::IWindowManager::Load::remove;
		//Reflector::IWindowManager^::remove_Load by M_x2
	protected:
		virtual void M_x1(System::EventHandler^ A_0)  = Reflector::IWindowManager::Closed::add;
		//Reflector::IWindowManager^::add_Closed by M_x1
	protected:
		virtual void M_x13(System::EventHandler^ A_0)  = Reflector::IWindowManager::Closed::remove;
		//Reflector::IWindowManager^::remove_Closed by M_x13
	};
}
