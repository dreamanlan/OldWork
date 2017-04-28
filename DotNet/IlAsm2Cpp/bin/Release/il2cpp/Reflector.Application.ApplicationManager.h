#pragma once

namespace Reflector
{
namespace Application
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class ApplicationManager  : Root::T_x97 , System::IServiceProvider , Root::T_x24
	{
		ref class T_x1;
		ref class T_x2;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IAssemblyResolver
		{
		internal:
			delegate Reflector::CodeModel::IAssembly^ T_x1_0(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1);
		private:
			System::ComponentModel::ISynchronizeInvoke^ F_x1;
		private:
			Reflector::CodeModel::IAssemblyCache^ F_x2;
		private:
			Reflector::CodeModel::IAssemblyManager^ F_x12;
		public:
			T_x1(System::ComponentModel::ISynchronizeInvoke^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::CodeModel::IAssemblyCache^ A_2);
		public:
			virtual Reflector::CodeModel::IAssembly^ M_x2(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IAssemblyResolver::Resolve;
			//Reflector::CodeModel::IAssemblyResolver^::Resolve by M_x2
		private:
			Reflector::CodeModel::IAssembly^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,System::String^ A_1);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Reflector::CodeModel::IAssemblyComparer
		{
		public:
			virtual System::Boolean M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1) sealed  = Reflector::CodeModel::IAssemblyComparer::Equals;
			//Reflector::CodeModel::IAssemblyComparer^::Equals by M_x1
		public:
			T_x2();
		};
	private:
		System::String^ F_x1;
	private:
		System::Collections::IDictionary^ F_x2;
	private:
		System::Boolean F_x12;
	private:
		Reflector::IWindowManager^ F_x13;
	private:
		Root::T_x110^ F_x8;
	private:
		Root::T_x134^ F_x5;
	private:
		Root::T_x25^ F_x9;
	private:
		Root::T_x75^ F_x4;
	public:
		[System::Diagnostics::DebuggerHidden()]
		ApplicationManager(Reflector::IWindowManager^ A_0);
	public:
		~ApplicationManager();
		//System::IDisposable^::Dispose by M_x158
	public:
		virtual System::Object^ M_x1(System::Type^ A_0) sealed  = System::IServiceProvider::GetService;
		//System::IServiceProvider^::GetService by M_x1
	public:
		void Run();
	public:
		virtual void M_x13(System::String^ A_0) sealed  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x13
	public:
		virtual System::Boolean M_x8(System::String^ A_0) sealed  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x8
	private:
		void M_x11(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		System::String^ M_x12(System::String^ A_0);
	private:
		array<System::String^>^ M_x2(System::String^ A_0);
	private:
		void M_x49();
	private:
		void M_x15(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x4(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x72^ A_1);
	private:
		void M_x33();
	private:
		void M_x9(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::Windows::Forms::DragEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::Windows::Forms::DragEventArgs^ A_1);
	private:
		void M_x5(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x8(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x124^ A_1);
	private:
		void M_x2(Reflector::ICommandBar^ A_0);
	private:
		void M_x1(Reflector::ICommandBar^ A_0);
	private:
		Reflector::ICommandBarMenu^ M_x1(Reflector::ICommandBar^ A_0,System::String^ A_1,System::String^ A_2);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(Reflector::ICommandBar^ A_0,System::Drawing::Image^ A_1,System::String^ A_2,System::Windows::Forms::Keys A_3,System::String^ A_4);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x81();
	private:
		void M_x57();
	private:
		void M_x55();
	private:
		void M_x48();
	private:
		void M_x56();
	private:
		void M_x17();
	private:
		void M_x19();
	private:
		void M_x18();
	private:
		void M_x14();
	private:
		void M_x6();
	private:
		void M_x16();
	private:
		void M_x7();
	private:
		void M_x10();
	private:
		void M_x11();
	private:
		void M_x15();
	private:
		void M_x4();
	private:
		void M_x9();
	private:
		void M_x5();
	private:
		void M_x8();
	private:
		void M_x13();
	private:
		void M_x12();
	private:
		void M_x2();
	private:
		void M_x1();
	private:
		void M_x1(System::String^ A_0);
	private:
		void M_x1(System::Object^ A_0,System::Threading::ThreadExceptionEventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::UnhandledExceptionEventArgs^ A_1);
	public:
		virtual void M_x13(System::Exception^ A_0) sealed  = Root::T_x97::M_x1;
		//Root::T_x97^::M_x1 by M_x13
	private:
		System::String^ M_x1(System::Exception^ A_0,Reflector::IConfigurationManager^ A_1);
	private:
		System::String^ M_x12(System::Exception^ A_0);
	private:
		System::String^ M_x2(System::Exception^ A_0);
	private:
		System::String^ M_x1(System::Exception^ A_0);
	};
}
}
