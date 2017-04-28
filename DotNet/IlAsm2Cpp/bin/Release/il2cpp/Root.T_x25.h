#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x25  : System::Windows::Forms::TreeView , Reflector::IAssemblyBrowser , Root::T_x24
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		public:
			Root::T_x25::T_x1^ F_x1;
		public:
			Root::T_x25::T_x1^ F_x2;
		public:
			System::Windows::Forms::TreeNode^ F_x12;
		public:
			T_x1();
		};
	private:
		System::EventHandler^ F_x1;
	private:
		Reflector::IConfiguration^ F_x2;
	private:
		System::IServiceProvider^ F_x12;
	private:
		Root::T_x10^ F_x13;
	private:
		Root::T_x25::T_x1^ F_x8;
	private:
		System::Boolean F_x5;
	private:
		System::Collections::ArrayList^ F_x9;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(System::EventHandler^ A_0) sealed  = Reflector::IAssemblyBrowser::ActiveItemChanged::add;
		//Reflector::IAssemblyBrowser^::add_ActiveItemChanged by M_x2
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::IAssemblyBrowser::ActiveItemChanged::remove;
		//Reflector::IAssemblyBrowser^::remove_ActiveItemChanged by M_x1
	public:
		T_x25(System::IServiceProvider^ A_0);
	public:
		Reflector::IConfiguration^ M_x5();
	public:
		void M_x1(Reflector::IConfiguration^ A_0);
	internal:
		System::IServiceProvider^ M_x4();
	public:
		virtual System::Object^ M_x9() sealed  = Reflector::IAssemblyBrowser::ActiveItem::get;
		//Reflector::IAssemblyBrowser^::get_ActiveItem by M_x9
	public:
		virtual void M_x1(System::Object^ A_0) sealed  = Reflector::IAssemblyBrowser::ActiveItem::set;
		//Reflector::IAssemblyBrowser^::set_ActiveItem by M_x1
	public:
		virtual void M_x2(System::String^ A_0) sealed  = Root::T_x24::M_x1;
		//Root::T_x24^::M_x1 by M_x2
	public:
		virtual System::Boolean M_x12(System::String^ A_0) sealed  = Root::T_x24::M_x2;
		//Root::T_x24^::M_x2 by M_x12
	public:
		Root::T_x10^ M_x15();
	public:
		void M_x1(Root::T_x10^ A_0);
	protected:
		virtual void M_x1(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::TreeView::WndProc;
		//System::Windows::Forms::TreeView^::WndProc by M_x1
	protected:
		virtual void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
	protected:
		virtual System::Boolean ProcessDialogKey(System::Windows::Forms::Keys key) override;
	protected:
		virtual void M_x1(System::Windows::Forms::KeyEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnKeyDown;
		//System::Windows::Forms::TreeView^::OnKeyDown by M_x1
	protected:
		virtual void M_x1(System::Windows::Forms::TreeViewCancelEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnBeforeExpand;
		//System::Windows::Forms::TreeView^::OnBeforeExpand by M_x1
	protected:
		virtual void M_x1(System::Windows::Forms::TreeViewEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnAfterCollapse;
		//System::Windows::Forms::TreeView^::OnAfterCollapse by M_x1
	protected:
		virtual void M_x1(System::EventArgs^ A_0);
	protected:
		virtual void M_x2(System::Windows::Forms::TreeViewEventArgs^ A_0)  = System::Windows::Forms::TreeView::OnAfterSelect;
		//System::Windows::Forms::TreeView^::OnAfterSelect by M_x2
	public:
		void M_x13();
	public:
		void M_x8();
	public:
		void M_x1();
	private:
		void M_x1(System::Windows::Forms::TreeNode^ A_0);
	private:
		Root::T_x26^ M_x1(Reflector::CodeModel::IAssembly^ A_0);
	private:
		Root::T_x39^ M_x1(Reflector::CodeModel::IModule^ A_0);
	private:
		Root::T_x41^ M_x1(System::String^ A_0);
	private:
		Root::T_x45^ M_x1(Reflector::CodeModel::ITypeDeclaration^ A_0);
	private:
		void M_x1(Reflector::ICommandBar^ A_0);
	private:
		void M_x1(Reflector::ICommandBar^ A_0,System::Drawing::Image^ A_1,System::String^ A_2,System::Windows::Forms::Keys A_3,System::String^ A_4);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	public:
		System::Boolean M_x7();
	public:
		System::Boolean M_x10();
	public:
		void M_x12();
	public:
		void M_x11();
	internal:
		void M_x2(System::Windows::Forms::TreeNode^ A_0);
	public:
		void M_x2();
	};
}
