#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x86  : System::Windows::Forms::Control
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		private:
			System::IO::TextWriter^ F_x1;
		private:
			System::Xml::XmlDocument^ F_x2;
		public:
			T_x1(System::Xml::XmlDocument^ A_0);
		private:
			void M_x1();
		private:
			void M_x1(System::Xml::XmlNode^ A_0);
		private:
			void M_x12(System::Xml::XmlNode^ A_0,System::String^ A_1);
		private:
			void M_x1(System::Xml::XmlNodeList^ A_0);
		private:
			void M_x8(System::Xml::XmlElement^ A_0);
		private:
			void M_x13(System::Xml::XmlElement^ A_0);
		private:
			void M_x12(System::Xml::XmlElement^ A_0);
		private:
			void M_x2(System::Xml::XmlElement^ A_0);
		private:
			void M_x1(System::Xml::XmlElement^ A_0);
		private:
			static System::String^ M_x2(System::Xml::XmlNode^ A_0,System::String^ A_1);
		private:
			static System::Boolean M_x1(System::Xml::XmlNode^ A_0,System::String^ A_1);
		private:
			static array<System::Xml::XmlNode^>^ M_x1(System::Xml::XmlElement^ A_0,System::String^ A_1);
		private:
			static System::String^ M_x1(System::String^ A_0);
		public:
			virtual System::String^ M_x2()  = System::Object::ToString;
			//System::Object^::ToString by M_x2
		};
	private:
		Root::T_x85^ F_x1;
	private:
		Root::T_x47^ F_x2;
	private:
		System::String^ F_x12;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(Root::T_x85^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x1(Root::T_x85^ A_0);
	public:
		T_x86(Reflector::ICommandBarManager^ A_0);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	public:
		System::String^ M_x1();
	public:
		void M_x1(System::String^ A_0);
	private:
		void M_x1(System::Object^ A_0,Root::T_x49^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x51^ A_1);
	protected:
		virtual void M_x1(Root::T_x84^ A_0);
	};
}
