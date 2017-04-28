#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x103  : System::Windows::Forms::ListView
	{
	private:
		Reflector::IAssemblyBrowser^ F_x1;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x2;
	private:
		Root::T_x7^ F_x12;
	public:
		T_x103(Root::T_x7^ A_0,Reflector::CodeModel::IAssemblyManager^ A_1,Reflector::IAssemblyBrowser^ A_2,Reflector::ICommandBarManager^ A_3);
	public:
		Reflector::CodeModel::IAssemblyManager^ M_x12();
	private:
		void M_x13(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2();
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	protected:
		virtual void OnParentChanged(System::EventArgs^ e) override;
	protected:
		virtual System::Boolean ProcessDialogKey(System::Windows::Forms::Keys key) override;
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ListView::OnItemActivate;
		//System::Windows::Forms::ListView^::OnItemActivate by M_x1
	protected:
		virtual void OnKeyDown(System::Windows::Forms::KeyEventArgs^ e) override;
	private:
		void M_x1();
	};
}
