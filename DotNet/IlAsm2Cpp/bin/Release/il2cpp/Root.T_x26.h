#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x26  : Root::T_x10
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x10
		{
		private:
			Reflector::CodeModel::IAssembly^ F_x1;
		public:
			Reflector::CodeModel::IAssembly^ M_x12();
		public:
			void M_x1(Reflector::CodeModel::IAssembly^ A_0);
		protected:
			virtual void M_x2(System::EventArgs^ A_0) override;
		protected:
			virtual void M_x1(System::EventArgs^ A_0) override;
		private:
			System::Collections::IEnumerable^ M_x1();
		public:
			T_x1();
		};
	public:
		Reflector::CodeModel::IAssembly^ M_x4();
	public:
		void M_x1(Reflector::CodeModel::IAssembly^ A_0);
	public:
		virtual System::String^ M_x13() override;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0,Reflector::CodeModel::ILanguage^ A_1) override;
	public:
		System::Boolean M_x5();
	internal:
		Root::T_x39^ M_x1(Reflector::CodeModel::IModule^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0) override;
	protected:
		virtual void M_x1(System::EventArgs^ A_0) override;
	public:
		virtual void M_x2() override;
	public:
		virtual void M_x5(System::String^ A_0) override  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x5
	public:
		virtual System::Boolean M_x9(System::String^ A_0) override  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x9
	private:
		void M_x8();
	private:
		void M_x12();
	public:
		void M_x9();
	private:
		System::Boolean M_x1();
	public:
		T_x26();
	};
}
