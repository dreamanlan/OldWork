#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x122  : Reflector::ICommandBarManager
	{
		ref class T_x12;
		ref class T_x8;
		ref class T_x2;
		ref class T_x13;
		ref class T_x1;
		ref class T_x5;
		ref class T_x9;
		ref class T_x15;
		ref class T_x4;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : System::Windows::Forms::MenuItem , Reflector::ICommandBarItem
		{
		private:
			System::ComponentModel::PropertyChangedEventHandler^ F_x1;
		private:
			System::Object^ F_x2;
		private:
			System::Drawing::Image^ F_x12;
		protected:
			T_x13();
		protected:
			T_x13(System::String^ A_0);
		protected:
			virtual void M_x1(System::Object^ A_0) sealed  = Reflector::ICommandBarItem::Value::set;
			//Reflector::ICommandBarItem^::set_Value by M_x1
		protected:
			virtual System::Object^ M_x8() sealed  = Reflector::ICommandBarItem::Value::get;
			//Reflector::ICommandBarItem^::get_Value by M_x8
		protected:
			virtual void M_x1(System::Boolean A_0) sealed  = Reflector::ICommandBarItem::Visible::set;
			//Reflector::ICommandBarItem^::set_Visible by M_x1
		protected:
			virtual System::Boolean M_x12() sealed  = Reflector::ICommandBarItem::Visible::get;
			//Reflector::ICommandBarItem^::get_Visible by M_x12
		protected:
			virtual void M_x2(System::Boolean A_0) sealed  = Reflector::ICommandBarItem::Enabled::set;
			//Reflector::ICommandBarItem^::set_Enabled by M_x2
		protected:
			virtual System::Boolean M_x9() sealed  = Reflector::ICommandBarItem::Enabled::get;
			//Reflector::ICommandBarItem^::get_Enabled by M_x9
		protected:
			virtual void M_x1(System::Drawing::Image^ A_0) sealed  = Reflector::ICommandBarItem::Image::set;
			//Reflector::ICommandBarItem^::set_Image by M_x1
		protected:
			virtual System::Drawing::Image^ M_x13() sealed  = Reflector::ICommandBarItem::Image::get;
			//Reflector::ICommandBarItem^::get_Image by M_x13
		protected:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBarItem::Text::set;
			//Reflector::ICommandBarItem^::set_Text by M_x1
		protected:
			virtual System::String^ M_x5() sealed  = Reflector::ICommandBarItem::Text::get;
			//Reflector::ICommandBarItem^::get_Text by M_x5
		protected:
			virtual void M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0);
		public:
			virtual event System::ComponentModel::PropertyChangedEventHandler^ PropertyChanged
			{
				[MethodImpl(MethodImplOptions::Synchronized)]
				virtual void add(System::ComponentModel::PropertyChangedEventHandler^ value) sealed;
				[MethodImpl(MethodImplOptions::Synchronized)]
				virtual void remove(System::ComponentModel::PropertyChangedEventHandler^ value) sealed;
			}
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Root::T_x122::T_x13 , Reflector::ICommandBarMenu
		{
		private:
			System::EventHandler^ F_x1;
		private:
			Reflector::ICommandBarItemCollection^ F_x2;
		private:
			System::String^ F_x12;
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarMenu::DropDown::add;
			//Reflector::ICommandBarMenu^::add_DropDown by M_x1
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x2(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarMenu::DropDown::remove;
			//Reflector::ICommandBarMenu^::remove_DropDown by M_x2
		public:
			T_x1();
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnPopup;
			//System::Windows::Forms::MenuItem^::OnPopup by M_x1
		protected:
			virtual void M_x2(System::EventArgs^ A_0);
		public:
			property virtual System::String^ Identifier
			{
				virtual System::String^ get() sealed;
				virtual void set(System::String^ value) sealed;
			}
		public:
			property virtual Reflector::ICommandBarItemCollection^ Items
			{
				virtual Reflector::ICommandBarItemCollection^ get() sealed;
			}
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : Reflector::ICommandBarCollection
		{
		private:
			System::Windows::Forms::Form^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		public:
			T_x12(System::Windows::Forms::Form^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			void M_x1(array<Reflector::ICommandBar^>^ A_0,System::Int32 A_1);
		public:
			virtual System::Int32 M_x12(Reflector::ICommandBar^ A_0) sealed  = Reflector::ICommandBarCollection::Add;
			//Reflector::ICommandBarCollection^::Add by M_x12
		public:
			virtual Reflector::ICommandBar^ M_x12(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddContextMenu;
			//Reflector::ICommandBarCollection^::AddContextMenu by M_x12
		public:
			virtual Reflector::ICommandBar^ M_x1(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddMenuBar;
			//Reflector::ICommandBarCollection^::AddMenuBar by M_x1
		public:
			virtual Reflector::ICommandBar^ M_x13(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddToolBar;
			//Reflector::ICommandBarCollection^::AddToolBar by M_x13
		public:
			virtual void M_x1() sealed  = Reflector::ICommandBarCollection::Clear;
			//Reflector::ICommandBarCollection^::Clear by M_x1
		public:
			virtual System::Boolean M_x2(Reflector::ICommandBar^ A_0) sealed  = Reflector::ICommandBarCollection::Contains;
			//Reflector::ICommandBarCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::ICommandBar^ A_0) sealed  = Reflector::ICommandBarCollection::IndexOf;
			//Reflector::ICommandBarCollection^::IndexOf by M_x1
		public:
			virtual void M_x13(Reflector::ICommandBar^ A_0) sealed  = Reflector::ICommandBarCollection::Remove;
			//Reflector::ICommandBarCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::ICommandBarCollection::RemoveAt;
			//Reflector::ICommandBarCollection^::RemoveAt by M_x2
		public:
			virtual Reflector::ICommandBar^ M_x2(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::default::get;
			//Reflector::ICommandBarCollection^::get_Item by M_x2
		public:
			virtual Reflector::ICommandBar^ M_x1(System::Int32 A_0) sealed  = Reflector::ICommandBarCollection::default::get;
			//Reflector::ICommandBarCollection^::get_Item by M_x1
		private:
			Reflector::ICommandBar^ M_x1(System::Collections::ICollection^ A_0,System::String^ A_1);
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
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x9  : Root::T_x122::T_x13 , Reflector::ICommandBarControl
		{
		public:
			T_x9();
		protected:
			virtual void M_x2()  = Reflector::ICommandBarControl::PerformClick;
			//Reflector::ICommandBarControl^::PerformClick by M_x2
		protected:
			virtual void M_x2(System::EventHandler^ A_0)  = Reflector::ICommandBarControl::Click::add;
			//Reflector::ICommandBarControl^::add_Click by M_x2
		protected:
			virtual void M_x1(System::EventHandler^ A_0)  = Reflector::ICommandBarControl::Click::remove;
			//Reflector::ICommandBarControl^::remove_Click by M_x1
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x15  : Root::T_x122::T_x9 , Reflector::ICommandBarButton
		{
		public:
			virtual System::Windows::Forms::Keys M_x1() sealed  = Reflector::ICommandBarButton::KeyBinding::get;
			//Reflector::ICommandBarButton^::get_KeyBinding by M_x1
		public:
			virtual void M_x1(System::Windows::Forms::Keys A_0) sealed  = Reflector::ICommandBarButton::KeyBinding::set;
			//Reflector::ICommandBarButton^::set_KeyBinding by M_x1
		public:
			T_x15();
		protected:
			virtual void M_x2(System::EventHandler^ A_0) override  = Reflector::ICommandBarControl::Click::add;
			//Reflector::ICommandBarControl^::add_Click by M_x2
		protected:
			virtual void M_x1(System::EventHandler^ A_0) override  = Reflector::ICommandBarControl::Click::remove;
			//Reflector::ICommandBarControl^::remove_Click by M_x1
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : Reflector::ICommandBarItemCollection
		{
		private:
			System::Windows::Forms::Menu^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		internal:
			T_x2(System::Windows::Forms::Menu^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x1() sealed  = Reflector::ICommandBarItemCollection::Clear;
			//Reflector::ICommandBarItemCollection^::Clear by M_x1
		public:
			virtual void M_x12(Reflector::ICommandBarItem^ A_0) sealed  = Reflector::ICommandBarItemCollection::Add;
			//Reflector::ICommandBarItemCollection^::Add by M_x12
		public:
			virtual Reflector::ICommandBarSeparator^ M_x2() sealed  = Reflector::ICommandBarItemCollection::AddSeparator;
			//Reflector::ICommandBarItemCollection^::AddSeparator by M_x2
		public:
			virtual Reflector::ICommandBarMenu^ M_x1(System::String^ A_0,System::String^ A_1) sealed  = Reflector::ICommandBarItemCollection::AddMenu;
			//Reflector::ICommandBarItemCollection^::AddMenu by M_x1
		public:
			virtual Reflector::ICommandBarMenu^ M_x1(System::String^ A_0,System::String^ A_1,System::Drawing::Image^ A_2) sealed  = Reflector::ICommandBarItemCollection::AddMenu;
			//Reflector::ICommandBarItemCollection^::AddMenu by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::String^ A_0,System::EventHandler^ A_1) sealed  = Reflector::ICommandBarItemCollection::AddButton;
			//Reflector::ICommandBarItemCollection^::AddButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::String^ A_0,System::EventHandler^ A_1,System::Windows::Forms::Keys A_2) sealed  = Reflector::ICommandBarItemCollection::AddButton;
			//Reflector::ICommandBarItemCollection^::AddButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::EventHandler^ A_2) sealed  = Reflector::ICommandBarItemCollection::AddButton;
			//Reflector::ICommandBarItemCollection^::AddButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::EventHandler^ A_2,System::Windows::Forms::Keys A_3) sealed  = Reflector::ICommandBarItemCollection::AddButton;
			//Reflector::ICommandBarItemCollection^::AddButton by M_x1
		public:
			virtual Reflector::ICommandBarCheckBox^ M_x1(System::String^ A_0) sealed  = Reflector::ICommandBarItemCollection::AddCheckBox;
			//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
		public:
			virtual Reflector::ICommandBarCheckBox^ M_x1(System::String^ A_0,System::Windows::Forms::Keys A_1) sealed  = Reflector::ICommandBarItemCollection::AddCheckBox;
			//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
		public:
			virtual Reflector::ICommandBarCheckBox^ M_x1(System::String^ A_0,System::Drawing::Image^ A_1,System::Windows::Forms::Keys A_2) sealed  = Reflector::ICommandBarItemCollection::AddCheckBox;
			//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
		public:
			virtual Reflector::ICommandBarCheckBox^ M_x1(System::String^ A_0,System::Drawing::Image^ A_1) sealed  = Reflector::ICommandBarItemCollection::AddCheckBox;
			//Reflector::ICommandBarItemCollection^::AddCheckBox by M_x1
		public:
			virtual Reflector::ICommandBarComboBox^ M_x1(System::String^ A_0,System::Windows::Forms::ComboBox^ A_1) sealed  = Reflector::ICommandBarItemCollection::AddComboBox;
			//Reflector::ICommandBarItemCollection^::AddComboBox by M_x1
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::ICommandBarItemCollection::AddRange;
			//Reflector::ICommandBarItemCollection^::AddRange by M_x1
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::ICommandBarItem^ A_1) sealed  = Reflector::ICommandBarItemCollection::Insert;
			//Reflector::ICommandBarItemCollection^::Insert by M_x1
		public:
			virtual Reflector::ICommandBarSeparator^ M_x2(System::Int32 A_0) sealed  = Reflector::ICommandBarItemCollection::InsertSeparator;
			//Reflector::ICommandBarItemCollection^::InsertSeparator by M_x2
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::Int32 A_0,System::String^ A_1,System::EventHandler^ A_2) sealed  = Reflector::ICommandBarItemCollection::InsertButton;
			//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::Int32 A_0,System::String^ A_1,System::EventHandler^ A_2,System::Windows::Forms::Keys A_3) sealed  = Reflector::ICommandBarItemCollection::InsertButton;
			//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::Int32 A_0,System::String^ A_1,System::Drawing::Image^ A_2,System::EventHandler^ A_3) sealed  = Reflector::ICommandBarItemCollection::InsertButton;
			//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
		public:
			virtual Reflector::ICommandBarButton^ M_x1(System::Int32 A_0,System::String^ A_1,System::Drawing::Image^ A_2,System::EventHandler^ A_3,System::Windows::Forms::Keys A_4) sealed  = Reflector::ICommandBarItemCollection::InsertButton;
			//Reflector::ICommandBarItemCollection^::InsertButton by M_x1
		public:
			virtual Reflector::ICommandBarCheckBox^ M_x1(System::Int32 A_0,System::String^ A_1) sealed  = Reflector::ICommandBarItemCollection::InsertCheckBox;
			//Reflector::ICommandBarItemCollection^::InsertCheckBox by M_x1
		public:
			virtual Reflector::ICommandBarMenu^ M_x1(System::Int32 A_0,System::String^ A_1,System::String^ A_2) sealed  = Reflector::ICommandBarItemCollection::InsertMenu;
			//Reflector::ICommandBarItemCollection^::InsertMenu by M_x1
		public:
			virtual void M_x12(System::Int32 A_0) sealed  = Reflector::ICommandBarItemCollection::RemoveAt;
			//Reflector::ICommandBarItemCollection^::RemoveAt by M_x12
		public:
			virtual void M_x13(Reflector::ICommandBarItem^ A_0) sealed  = Reflector::ICommandBarItemCollection::Remove;
			//Reflector::ICommandBarItemCollection^::Remove by M_x13
		public:
			virtual System::Boolean M_x2(Reflector::ICommandBarItem^ A_0) sealed  = Reflector::ICommandBarItemCollection::Contains;
			//Reflector::ICommandBarItemCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::ICommandBarItem^ A_0) sealed  = Reflector::ICommandBarItemCollection::IndexOf;
			//Reflector::ICommandBarItemCollection^::IndexOf by M_x1
		public:
			virtual Reflector::ICommandBarItem^ M_x1(System::Int32 A_0) sealed  = Reflector::ICommandBarItemCollection::default::get;
			//Reflector::ICommandBarItemCollection^::get_Item by M_x1
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			void M_x1(array<Reflector::ICommandBarItem^>^ A_0,System::Int32 A_1);
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
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x4  : System::Windows::Forms::ContextMenu , Reflector::ICommandBar
		{
		private:
			System::String^ F_x1;
		private:
			Reflector::ICommandBarItemCollection^ F_x2;
		public:
			T_x4();
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBar::Identifier::set;
			//Reflector::ICommandBar^::set_Identifier by M_x1
		public:
			virtual System::String^ M_x1() sealed  = Reflector::ICommandBar::Identifier::get;
			//Reflector::ICommandBar^::get_Identifier by M_x1
		public:
			virtual Reflector::ICommandBarItemCollection^ M_x2() sealed  = Reflector::ICommandBar::Items::get;
			//Reflector::ICommandBar^::get_Items by M_x2
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x5  : Root::T_x122::T_x13 , Reflector::ICommandBarSeparator
		{
		public:
			T_x5();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8  : System::Windows::Forms::MainMenu , Reflector::ICommandBar
		{
		private:
			System::String^ F_x1;
		private:
			Reflector::ICommandBarItemCollection^ F_x2;
		public:
			T_x8();
		public:
			virtual System::String^ M_x1() sealed  = Reflector::ICommandBar::Identifier::get;
			//Reflector::ICommandBar^::get_Identifier by M_x1
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBar::Identifier::set;
			//Reflector::ICommandBar^::set_Identifier by M_x1
		public:
			virtual Reflector::ICommandBarItemCollection^ M_x2() sealed  = Reflector::ICommandBar::Items::get;
			//Reflector::ICommandBar^::get_Items by M_x2
		};
	private:
		Root::T_x122::T_x12^ F_x1;
	public:
		T_x122(System::Windows::Forms::Form^ A_0);
	public:
		virtual Reflector::ICommandBarCollection^ M_x1() sealed  = Reflector::ICommandBarManager::CommandBars::get;
		//Reflector::ICommandBarManager^::get_CommandBars by M_x1
	};
}
