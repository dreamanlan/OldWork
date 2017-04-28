#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x87  : System::Windows::Forms::UserControl
	{
	private:
		Reflector::IAssemblyBrowser^ F_x1;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x2;
	private:
		Root::T_x86^ F_x12;
	public:
		T_x87(Reflector::IAssemblyBrowser^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::ICommandBarManager^ A_2);
	protected:
		virtual void OnParentChanged(System::EventArgs^ e) override;
	private:
		void M_x1();
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,Root::T_x84^ A_1);
	};
}
