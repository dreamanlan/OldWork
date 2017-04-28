#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x16  : System::Windows::Forms::Control , Root::T_x75
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IFormatter
		{
		private:
			System::Text::StringBuilder^ F_x1;
		private:
			System::Text::StringBuilder^ F_x2;
		private:
			System::Boolean F_x12;
		private:
			System::Boolean F_x13;
		private:
			System::Int32 F_x8;
		private:
			System::String^ F_x5;
		private:
			System::Collections::Hashtable^ F_x9;
		private:
			System::Int32 F_x4;
		public:
			T_x1(System::Single A_0,System::Boolean A_1);
		private:
			System::String^ M_x1(System::Object^ A_0);
		public:
			System::Object^ M_x9(System::String^ A_0);
		public:
			System::String^ M_x12();
		public:
			virtual void M_x13(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::Write;
			//Reflector::CodeModel::IFormatter^::Write by M_x13
		public:
			virtual void M_x8(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteDeclaration;
			//Reflector::CodeModel::IFormatter^::WriteDeclaration by M_x8
		public:
			virtual void M_x4(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteComment;
			//Reflector::CodeModel::IFormatter^::WriteComment by M_x4
		public:
			virtual void M_x12(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteLiteral;
			//Reflector::CodeModel::IFormatter^::WriteLiteral by M_x12
		public:
			virtual void M_x5(System::String^ A_0) sealed  = Reflector::CodeModel::IFormatter::WriteKeyword;
			//Reflector::CodeModel::IFormatter^::WriteKeyword by M_x5
		public:
			virtual void M_x13() sealed  = Reflector::CodeModel::IFormatter::WriteIndent;
			//Reflector::CodeModel::IFormatter^::WriteIndent by M_x13
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IFormatter::WriteLine;
			//Reflector::CodeModel::IFormatter^::WriteLine by M_x2
		public:
			virtual void M_x8() sealed  = Reflector::CodeModel::IFormatter::WriteOutdent;
			//Reflector::CodeModel::IFormatter^::WriteOutdent by M_x8
		public:
			virtual void M_x1(System::String^ A_0,System::String^ A_1,System::Object^ A_2) sealed  = Reflector::CodeModel::IFormatter::WriteReference;
			//Reflector::CodeModel::IFormatter^::WriteReference by M_x1
		public:
			virtual void M_x1(System::String^ A_0,System::String^ A_1) sealed  = Reflector::CodeModel::IFormatter::WriteProperty;
			//Reflector::CodeModel::IFormatter^::WriteProperty by M_x1
		public:
			void M_x1(System::Boolean A_0);
		public:
			System::Boolean M_x5();
		private:
			System::String^ M_x2(System::String^ A_0);
		private:
			void M_x1(System::String^ A_0);
		private:
			void M_x1(System::String^ A_0,System::Int32 A_1);
		private:
			void M_x1();
		};
	private:
		Root::T_x125^ F_x1;
	private:
		Reflector::CodeModel::IFormatter^ F_x2;
	private:
		Root::T_x47^ F_x12;
	private:
		System::Boolean F_x13;
	private:
		Reflector::ICommandBar^ F_x8;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(Root::T_x125^ A_0) sealed  = Root::T_x75::M_x1;
		//Root::T_x75^::M_x1 by M_x2
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(Root::T_x125^ A_0) sealed  = Root::T_x75::M_x2;
		//Root::T_x75^::M_x2 by M_x1
	public:
		T_x16(Reflector::ICommandBarManager^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleCreated;
		//System::Windows::Forms::Control^::OnHandleCreated by M_x2
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleDestroyed;
		//System::Windows::Forms::Control^::OnHandleDestroyed by M_x1
	public:
		virtual Reflector::CodeModel::IFormatter^ M_x1(System::Boolean A_0) sealed;
	public:
		virtual Reflector::CodeModel::IFormatter^ M_x13() sealed  = Root::T_x75::M_x1;
		//Root::T_x75^::M_x1 by M_x13
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0) sealed;
	public:
		virtual System::Boolean M_x12() sealed  = Root::T_x75::M_x2;
		//Root::T_x75^::M_x2 by M_x12
	public:
		virtual void M_x2(System::Boolean A_0) sealed;
	public:
		virtual System::Drawing::Font^ M_x1()  = System::Windows::Forms::Control::Font::get , Root::T_x75::Font::get;
		//System::Windows::Forms::Control^::get_Font by M_x1
		//Root::T_x75^::get_Font by M_x1
	public:
		virtual void M_x1(System::Drawing::Font^ A_0)  = System::Windows::Forms::Control::Font::set , Root::T_x75::Font::set;
		//System::Windows::Forms::Control^::set_Font by M_x1
		//Root::T_x75^::set_Font by M_x1
	protected:
		virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnGotFocus;
		//System::Windows::Forms::Control^::OnGotFocus by M_x12
	protected:
		virtual void M_x1(Root::T_x124^ A_0);
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x49^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x51^ A_1);
	protected:
		virtual System::Boolean M_x2()  = Root::T_x75::Focus;
		//Root::T_x75^::Focus by M_x2
	};
}
