#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x105  : System::Windows::Forms::Control , Reflector::ICommandBarManager
	{
		ref class T_x1;
		ref class T_x12;
		ref class T_x15;
		ref class T_x4;
		ref class T_x10;
		ref class T_x7;
		ref class T_x5;
		ref class T_x11;
		ref class T_x13;
		ref class T_x6;
		ref class T_x8;
		ref class T_x9;
		ref class T_x16;
	internal:
		enum class T_x2
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::ICommandBarCollection
		{
		private:
			Root::T_x105^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		public:
			T_x1(Root::T_x105^ A_0);
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
			virtual Reflector::ICommandBar^ M_x1(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddMenuBar;
			//Reflector::ICommandBarCollection^::AddMenuBar by M_x1
		public:
			virtual Reflector::ICommandBar^ M_x13(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddToolBar;
			//Reflector::ICommandBarCollection^::AddToolBar by M_x13
		public:
			virtual Reflector::ICommandBar^ M_x12(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::AddContextMenu;
			//Reflector::ICommandBarCollection^::AddContextMenu by M_x12
		public:
			virtual void M_x13(Reflector::ICommandBar^ A_0) sealed  = Reflector::ICommandBarCollection::Remove;
			//Reflector::ICommandBarCollection^::Remove by M_x13
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::ICommandBarCollection::RemoveAt;
			//Reflector::ICommandBarCollection^::RemoveAt by M_x2
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
			virtual Reflector::ICommandBar^ M_x1(System::Int32 A_0) sealed  = Reflector::ICommandBarCollection::default::get;
			//Reflector::ICommandBarCollection^::get_Item by M_x1
		public:
			virtual Reflector::ICommandBar^ M_x2(System::String^ A_0) sealed  = Reflector::ICommandBarCollection::default::get;
			//Reflector::ICommandBarCollection^::get_Item by M_x2
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
		ref class T_x15  : System::ComponentModel::Component , Reflector::ICommandBarItem
		{
		private:
			System::ComponentModel::PropertyChangedEventHandler^ F_x1;
		private:
			System::Drawing::Image^ F_x2;
		private:
			System::String^ F_x12;
		private:
			System::Boolean F_x13;
		private:
			System::Boolean F_x8;
		private:
			System::Object^ F_x5;
		protected:
			T_x15();
		protected:
			T_x15(System::String^ A_0);
		protected:
			T_x15(System::Drawing::Image^ A_0);
		protected:
			T_x15(System::Drawing::Image^ A_0,System::String^ A_1);
		public:
			virtual void M_x1(System::Object^ A_0)  = Reflector::ICommandBarItem::Value::set;
			//Reflector::ICommandBarItem^::set_Value by M_x1
		public:
			virtual System::Object^ M_x5()  = Reflector::ICommandBarItem::Value::get;
			//Reflector::ICommandBarItem^::get_Value by M_x5
		public:
			virtual void M_x1(System::Drawing::Image^ A_0) sealed  = Reflector::ICommandBarItem::Image::set;
			//Reflector::ICommandBarItem^::set_Image by M_x1
		public:
			virtual System::Drawing::Image^ M_x8() sealed  = Reflector::ICommandBarItem::Image::get;
			//Reflector::ICommandBarItem^::get_Image by M_x8
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBarItem::Text::set;
			//Reflector::ICommandBarItem^::set_Text by M_x1
		public:
			virtual System::String^ M_x9() sealed  = Reflector::ICommandBarItem::Text::get;
			//Reflector::ICommandBarItem^::get_Text by M_x9
		protected:
			virtual void M_x1(System::ComponentModel::PropertyChangedEventArgs^ A_0);
		public:
			property virtual System::Boolean Enabled
			{
				virtual System::Boolean get();
				virtual void set(System::Boolean value);
			}
		public:
			property virtual System::Boolean Visible
			{
				virtual System::Boolean get();
				virtual void set(System::Boolean value);
			}
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
		ref class T_x10  : Root::T_x105::T_x15 , Reflector::ICommandBarMenu
		{
		private:
			System::EventHandler^ F_x1;
		private:
			System::String^ F_x2;
		private:
			Reflector::ICommandBarItemCollection^ F_x12;
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarMenu::DropDown::add;
			//Reflector::ICommandBarMenu^::add_DropDown by M_x1
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x2(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarMenu::DropDown::remove;
			//Reflector::ICommandBarMenu^::remove_DropDown by M_x2
		protected:
			virtual void M_x2(System::EventArgs^ A_0);
		internal:
			void M_x1(System::EventArgs^ A_0);
		public:
			T_x10();
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
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x5 abstract  : Root::T_x105::T_x15 , Reflector::ICommandBarControl
		{
		private:
			System::EventHandler^ F_x1;
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x1(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarControl::Click::add;
			//Reflector::ICommandBarControl^::add_Click by M_x1
		public:
			[MethodImpl(MethodImplOptions::Synchronized)]
			virtual void M_x2(System::EventHandler^ A_0) sealed  = Reflector::ICommandBarControl::Click::remove;
			//Reflector::ICommandBarControl^::remove_Click by M_x2
		protected:
			T_x5(System::String^ A_0);
		protected:
			T_x5(System::Drawing::Image^ A_0);
		protected:
			T_x5(System::Drawing::Image^ A_0,System::String^ A_1);
		protected:
			virtual void M_x1(System::EventArgs^ A_0);
		public:
			virtual void M_x13() sealed  = Reflector::ICommandBarControl::PerformClick;
			//Reflector::ICommandBarControl^::PerformClick by M_x13
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x11  : Root::T_x105::T_x5 , Reflector::ICommandBarButton
		{
		private:
			System::Windows::Forms::Keys F_x1;
		public:
			T_x11(System::String^ A_0);
		public:
			virtual System::String^ M_x1()  = System::ComponentModel::Component::ToString;
			//System::ComponentModel::Component^::ToString by M_x1
		public:
			virtual System::Windows::Forms::Keys M_x12() sealed  = Reflector::ICommandBarButton::KeyBinding::get;
			//Reflector::ICommandBarButton^::get_KeyBinding by M_x12
		public:
			virtual void M_x1(System::Windows::Forms::Keys A_0) sealed  = Reflector::ICommandBarButton::KeyBinding::set;
			//Reflector::ICommandBarButton^::set_KeyBinding by M_x1
		};
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x4  : Reflector::ICommandBarItemCollection
		{
		private:
			Root::T_x105::T_x12^ F_x1;
		private:
			System::Collections::ArrayList^ F_x2;
		internal:
			T_x4();
		internal:
			T_x4(Root::T_x105::T_x12^ A_0);
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
			void M_x1(array<Root::T_x105::T_x15^>^ A_0,System::Int32 A_1);
		internal:
			array<Reflector::ICommandBarItem^>^ M_x1(System::Windows::Forms::Keys A_0);
		internal:
			array<Reflector::ICommandBarItem^>^ M_x1(System::Char A_0);
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
		ref class T_x9
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1 sealed
			{
				value class T_x1_9;
			public:
				[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
				value class T_x1_9 sealed
				{
				public:
					System::Int32 F_x1;
				public:
					System::Int32 F_x2;
				public:
					System::Int32 F_x12;
				public:
					System::Int32 F_x13;
				};
			public:
				literal System::Int32 F_x1=(System::Int32)0x00000001;
			public:
				literal System::Int32 F_x2=(System::Int32)0x00000002;
			public:
				literal System::Int32 F_x12=(System::Int32)0x00000020;
			public:
				literal System::Int32 F_x13=(System::Int32)0x00000000;
			public:
				literal System::Int32 F_x8=(System::Int32)0x00000004;
			public:
				literal System::Int32 F_x5=(System::Int32)0x00000400;
			private:
				T_x1();
			public:
				[DllImport("gdi32.dll",CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Int32 SetBkMode(System::IntPtr A_0,System::Int32 A_1);
			public:
				[DllImport("gdi32.dll",CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Int32 SetTextColor(System::IntPtr A_0,System::Int32 A_1);
			public:
				[DllImport("gdi32.dll",CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::IntPtr SelectObject(System::IntPtr A_0,System::IntPtr A_1);
			public:
				[DllImport("gdi32.dll",CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean DeleteObject(System::IntPtr A_0);
			public:
				[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Int32 DrawText(System::IntPtr A_0,System::String^ A_1,System::Int32 A_2,Root::T_x105::T_x9::T_x1::T_x1_9% A_3,System::Int32 A_4);
			};
		private:
			System::Drawing::Graphics^ F_x1;
		private:
			System::IntPtr F_x2;
		public:
			T_x9(System::Drawing::Graphics^ A_0);
		public:
			T_x9(System::IntPtr A_0);
		public:
			~T_x9();
			//System::IDisposable^::Dispose by M_x1
		public:
			System::Drawing::Size M_x1(System::String^ A_0,System::Drawing::Font^ A_1);
		public:
			void M_x1(System::String^ A_0,System::Drawing::Point A_1,System::Drawing::Font^ A_2,System::Drawing::Color A_3);
		private:
			System::Drawing::Size M_x1(System::String^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x8  : System::Windows::Forms::ContextMenu , Reflector::ICommandBar
		{
			ref class T_x1;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1  : System::Windows::Forms::MenuItem
			{
			private:
				Reflector::ICommandBarItem^ F_x1;
			private:
				System::Drawing::Size F_x2;
			private:
				System::Drawing::Font^ F_x12;
			private:
				System::Boolean F_x13;
			public:
				T_x1(Reflector::ICommandBarItem^ A_0,System::Drawing::Size A_1,System::Drawing::Font^ A_2,System::Boolean A_3);
			protected:
				virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnPopup;
				//System::Windows::Forms::MenuItem^::OnPopup by M_x2
			private:
				void M_x2();
			protected:
				virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnClick;
				//System::Windows::Forms::MenuItem^::OnClick by M_x12
			protected:
				virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnSelect;
				//System::Windows::Forms::MenuItem^::OnSelect by M_x1
			private:
				System::Boolean M_x1();
			protected:
				virtual void M_x1(System::Windows::Forms::MeasureItemEventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnMeasureItem;
				//System::Windows::Forms::MenuItem^::OnMeasureItem by M_x1
			protected:
				virtual void M_x1(System::Windows::Forms::DrawItemEventArgs^ A_0)  = System::Windows::Forms::MenuItem::OnDrawItem;
				//System::Windows::Forms::MenuItem^::OnDrawItem by M_x1
			private:
				void M_x1(System::Drawing::Graphics^ A_0,System::Drawing::Rectangle A_1,System::Boolean A_2);
			private:
				void M_x1(System::Drawing::Graphics^ A_0,System::Drawing::Rectangle A_1,System::Drawing::Color A_2);
			private:
				void M_x1(System::Drawing::Graphics^ A_0,System::Drawing::Rectangle A_1,System::Boolean A_2,System::Boolean A_3);
			private:
				void M_x1(Root::T_x105::T_x9^ A_0,System::String^ A_1,System::Drawing::Point A_2,System::Boolean A_3,System::Boolean A_4);
			};
		private:
			System::String^ F_x1;
		private:
			Root::T_x105::T_x4^ F_x2;
		private:
			System::Drawing::Font^ F_x12;
		private:
			System::Windows::Forms::Menu^ F_x13;
		private:
			System::Boolean F_x8;
		public:
			virtual System::String^ M_x8() sealed  = Reflector::ICommandBar::Identifier::get;
			//Reflector::ICommandBar^::get_Identifier by M_x8
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBar::Identifier::set;
			//Reflector::ICommandBar^::set_Identifier by M_x1
		public:
			virtual Reflector::ICommandBarItemCollection^ M_x5() sealed  = Reflector::ICommandBar::Items::get;
			//Reflector::ICommandBar^::get_Items by M_x5
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::ContextMenu::OnPopup;
			//System::Windows::Forms::ContextMenu^::OnPopup by M_x1
		protected:
			virtual System::Boolean ProcessCmdKey(System::Windows::Forms::Message% message,System::Windows::Forms::Keys keyData) override;
		private:
			void M_x2();
		private:
			void M_x1();
		internal:
			System::Drawing::Font^ M_x12();
		internal:
			void M_x1(System::Drawing::Font^ A_0);
		internal:
			void M_x1(System::Boolean A_0);
		internal:
			void M_x1(System::Windows::Forms::Menu^ A_0);
		internal:
			System::Windows::Forms::Menu^ M_x13();
		private:
			static System::Drawing::Size M_x1(Reflector::ICommandBarItemCollection^ A_0);
		public:
			T_x8();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x16 sealed
		{
			ref class T_x1;
			value class T_x4;
			value class T_x8;
			value class T_x15;
			value class T_x10;
			value class T_x12;
			value class T_x7;
			value class T_x13;
			value class T_x9;
			value class T_x6;
			value class T_x11;
			value class T_x19;
			value class T_x16_10;
			value class T_x18;
			value class T_x5;
			value class T_x2;
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi,Pack=1,Size=0)]
			ref class T_x1
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				T_x1();
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x15 sealed
			{
			public:
				System::IntPtr F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi,Pack=1,Size=0)]
			value class T_x6 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Byte F_x12;
			public:
				System::Byte F_x13;
			public:
				System::Byte F_x8;
			public:
				System::Byte F_x5;
			public:
				System::Int32 F_x9;
			public:
				System::Int32 F_x4;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x10 sealed
			{
			public:
				Root::T_x105::T_x16::T_x15 F_x1;
			public:
				System::Int32 F_x2;
			public:
				Root::T_x105::T_x16::T_x6 F_x12;
			public:
				System::Int32 F_x13;
			public:
				System::IntPtr F_x8;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Auto)]
			value class T_x11 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::Int32 F_x13;
			public:
				System::Byte F_x8;
			public:
				System::Byte F_x5;
			public:
				System::Int16 F_x9;
			public:
				System::IntPtr F_x4;
			public:
				System::IntPtr F_x15;
			public:
				System::Int32 F_x11;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x8 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::Int32 F_x13;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x12 sealed
			{
			public:
				Root::T_x105::T_x16::T_x15 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::IntPtr F_x12;
			public:
				Root::T_x105::T_x16::T_x8 F_x13;
			public:
				System::Int32 F_x8;
			public:
				System::Int32 F_x5;
			public:
				System::Int32 F_x9;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Auto)]
			value class T_x13 sealed
			{
			public:
				Root::T_x105::T_x16::T_x15 F_x1;
			public:
				System::IntPtr F_x2;
			public:
				[MarshalAs(UnmanagedType::ByValTStr,SizeConst=80)]
				System::String^ F_x12;
			public:
				System::IntPtr F_x13;
			public:
				System::Int32 F_x8;
			};
		internal:
			delegate System::IntPtr T_x14(System::Int32 A_0,System::IntPtr A_1,System::IntPtr A_2);
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x16_10 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::Int32 F_x13;
			public:
				System::Int32 F_x8;
			public:
				System::IntPtr F_x5;
			public:
				System::Int32 F_x9;
			public:
				System::Int32 F_x4;
			public:
				System::IntPtr F_x15;
			public:
				System::Int32 F_x11;
			public:
				System::Int32 F_x10;
			public:
				System::Int32 F_x7;
			public:
				System::IntPtr F_x16;
			public:
				System::Int32 F_x6;
			public:
				System::Int32 F_x14;
			public:
				System::Int32 F_x18;
			public:
				System::Int32 F_x19;
			public:
				System::Int32 F_x17;
			public:
				System::Int32 F_x56;
			public:
				System::Int32 F_x48;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x18 sealed
			{
			public:
				Root::T_x105::T_x16::T_x15 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::Int32 F_x13;
			public:
				Root::T_x105::T_x16::T_x8 F_x8;
			public:
				System::Int32 F_x5;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x19 sealed
			{
			public:
				System::IntPtr F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::IntPtr F_x12;
			public:
				System::IntPtr F_x13;
			public:
				System::Int32 F_x8;
			public:
				System::Int32 F_x5;
			public:
				System::Int32 F_x9;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x2 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::Int32 F_x13;
			public:
				System::Int32 F_x8;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x4 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::Int32 F_x2;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x5 sealed
			{
			public:
				System::Int32 F_x1;
			public:
				System::IntPtr F_x2;
			public:
				System::Int32 F_x12;
			public:
				System::IntPtr F_x13;
			public:
				System::Int32 F_x8;
			public:
				System::Int32 F_x5;
			public:
				System::Int32 F_x9;
			public:
				System::Int32 F_x4;
			public:
				System::Int32 F_x15;
			public:
				System::Int32 F_x11;
			public:
				System::Int32 F_x10;
			public:
				System::Int32 F_x7;
			public:
				System::Int32 F_x16;
			public:
				System::Int32 F_x6;
			public:
				System::Int32 F_x14;
			public:
				System::Int32 F_x18;
			public:
				System::Int32 F_x19;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x7 sealed
			{
			public:
				Root::T_x105::T_x16::T_x12 F_x1;
			public:
				System::IntPtr F_x2;
			public:
				System::IntPtr F_x12;
			public:
				System::IntPtr F_x13;
			public:
				System::Int32 F_x8;
			public:
				System::Int32 F_x5;
			public:
				System::Int32 F_x9;
			public:
				System::Int32 F_x4;
			public:
				System::Int32 F_x15;
			public:
				System::Int32 F_x11;
			public:
				Root::T_x105::T_x16::T_x8 F_x10;
			public:
				System::Int32 F_x7;
			public:
				System::Int32 F_x16;
			};
		internal:
			[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
			value class T_x9 sealed
			{
			public:
				Root::T_x105::T_x16::T_x15 F_x1;
			public:
				System::IntPtr F_x2;
			public:
				[MarshalAs(UnmanagedType::ByValTStr,SizeConst=80)]
				System::String^ F_x12;
			public:
				System::IntPtr F_x13;
			public:
				System::Int32 F_x8;
			};
		public:
			literal System::String^ F_x1="ToolbarWindow32";
		public:
			literal System::Int32 F_x2=(System::Int32)0x40000000;
		public:
			literal System::Int32 F_x12=(System::Int32)0x10000000;
		public:
			literal System::Int32 F_x13=(System::Int32)0x02000000;
		public:
			literal System::Int32 F_x8=(System::Int32)0x04000000;
		public:
			literal System::Int32 F_x5=(System::Int32)0x00800000;
		public:
			literal System::Int32 F_x9=(System::Int32)0x00000040;
		public:
			literal System::Int32 F_x4=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x15=(System::Int32)0x00000008;
		public:
			literal System::Int32 F_x11=(System::Int32)0xFFFFFFFF;
		public:
			literal System::Int32 F_x10=(System::Int32)0xFFFFFFFE;
		public:
			literal System::Int32 F_x7=(System::Int32)0x00000100;
		public:
			literal System::Int32 F_x16=(System::Int32)0x00000800;
		public:
			literal System::Int32 F_x6=(System::Int32)0x00001000;
		public:
			literal System::Int32 F_x14=(System::Int32)0x00008000;
		public:
			literal System::Int32 F_x18=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x19=(System::Int32)0x00000010;
		public:
			literal System::Int32 F_x17=(System::Int32)0x00000080;
		public:
			literal System::Int32 F_x56=(System::Int32)0x00000000;
		public:
			literal System::Int32 F_x48=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x55=(System::Int32)0x00000020;
		public:
			literal System::Int32 F_x57=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x81=(System::Int32)0x00010000;
		public:
			literal System::Int32 F_x33=(System::Int32)0x00010001;
		public:
			literal System::Int32 F_x49=(System::Int32)0x00000040;
		public:
			literal System::Int32 F_x158=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x26=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x176=(System::Int32)0x0000000B;
		public:
			literal System::Int32 F_x134=(System::Int32)0x0000001F;
		public:
			literal System::Int32 F_x148=(System::Int32)0x0000004E;
		public:
			literal System::Int32 F_x173=(System::Int32)0x00000100;
		public:
			literal System::Int32 F_x113=(System::Int32)0x00000101;
		public:
			literal System::Int32 F_x3=(System::Int32)0x00000102;
		public:
			literal System::Int32 F_x47=(System::Int32)0x00000104;
		public:
			literal System::Int32 F_x43=(System::Int32)0x00000105;
		public:
			literal System::Int32 F_x35=(System::Int32)0x00000111;
		public:
			literal System::Int32 F_x93=(System::Int32)0x00000120;
		public:
			literal System::Int32 F_x139=(System::Int32)0x00000200;
		public:
			literal System::Int32 F_x149=(System::Int32)0x00000201;
		public:
			literal System::Int32 F_x172=(System::Int32)0x0000020A;
		public:
			literal System::Int32 F_x96=(System::Int32)0x00000400;
		public:
			literal System::Int32 F_x51=(System::Int32)0x00002000;
		public:
			literal System::Int32 F_x87=(System::Int32)0xFFFFFFF4;
		public:
			literal System::Int32 F_x146=(System::Int32)0xFFFFFDF8;
		public:
			literal System::Int32 F_x45=(System::Int32)0xFFFFFDEE;
		public:
			literal System::Int32 F_x67=(System::Int32)0xFFFFFD3E;
		public:
			literal System::Int32 F_x145=(System::Int32)0xFFFFFD3A;
		public:
			literal System::Int32 F_x114=(System::Int32)0xFFFFFD37;
		public:
			literal System::Int32 F_x165=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x60=(System::Int32)0x00000002;
		public:
			literal System::Int32 F_x108=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x75=(System::Int32)0x00000008;
		public:
			literal System::Int32 F_x84=(System::Int32)0x00000020;
		public:
			literal System::Int32 F_x22=(System::Int32)0x00000040;
		public:
			literal System::Int32 F_x177=(System::Int32)0x00000002;
		public:
			literal System::Int32 F_x116=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x147=(System::Int32)0x00000400;
		public:
			literal System::Int32 F_x181=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x183=(System::Int32)0x00000403;
		public:
			literal System::Int32 F_x137=(System::Int32)0x00000415;
		public:
			literal System::Int32 F_x95=(System::Int32)0x00000416;
		public:
			literal System::Int32 F_x121=(System::Int32)0x00000418;
		public:
			literal System::Int32 F_x182=(System::Int32)0x0000041D;
		public:
			literal System::Int32 F_x54=(System::Int32)0x0000041E;
		public:
			literal System::Int32 F_x42=(System::Int32)0x00000420;
		public:
			literal System::Int32 F_x136=(System::Int32)0x00000430;
		public:
			literal System::Int32 F_x138=(System::Int32)0x00000433;
		public:
			literal System::Int32 F_x141=(System::Int32)0x00000440;
		public:
			literal System::Int32 F_x64=(System::Int32)0x00000445;
		public:
			literal System::Int32 F_x122=(System::Int32)0x00000447;
		public:
			literal System::Int32 F_x167=(System::Int32)0x00000448;
		public:
			literal System::Int32 F_x62=(System::Int32)0x00000454;
		public:
			literal System::Int32 F_x58=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x28=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x125=(System::Int32)0x00000008;
		public:
			literal System::Int32 F_x187=(System::Int32)0x00000000;
		public:
			literal System::Int32 F_x72=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x20=(System::Int32)0x00000008;
		public:
			literal System::Int32 F_x78=(System::Int32)0x00000010;
		public:
			literal System::Int32 F_x38=(System::Int32)0x00000080;
		public:
			literal System::Int32 F_x133=(System::Int32)0xFFFFFFFF;
		public:
			literal System::Int32 F_x106=(System::Int32)0x00000002;
		public:
			literal System::String^ F_x65="ReBarWindow32";
		public:
			literal System::Int32 F_x144=(System::Int32)0x00000200;
		public:
			literal System::Int32 F_x162=(System::Int32)0x00000400;
		public:
			literal System::Int32 F_x153=(System::Int32)0x00002000;
		public:
			literal System::Int32 F_x88=(System::Int32)0xFFFFFCC1;
		public:
			literal System::Int32 F_x129=(System::Int32)0xFFFFFCC1;
		public:
			literal System::Int32 F_x90=(System::Int32)0xFFFFFCBE;
		public:
			literal System::Int32 F_x185=(System::Int32)0xFFFFFCB7;
		public:
			literal System::Int32 F_x32=(System::Int32)0x00000405;
		public:
			literal System::Int32 F_x61=(System::Int32)0x00000406;
		public:
			literal System::Int32 F_x111=(System::Int32)0x00000409;
		public:
			literal System::Int32 F_x103=(System::Int32)0x0000040A;
		public:
			literal System::Int32 F_x23=(System::Int32)0x0000041B;
		public:
			literal System::Int32 F_x52=(System::Int32)0x00000010;
		public:
			literal System::Int32 F_x110=(System::Int32)0x00000020;
		public:
			literal System::Int32 F_x73=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x168=(System::Int32)0x00000100;
		public:
			literal System::Int32 F_x175=(System::Int32)0x00000040;
		public:
			literal System::Int32 F_x44=(System::Int32)0x00000200;
		public:
			literal System::Int32 F_x152=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x184=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x155=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x142=(System::Int32)0x00000020;
		public:
			literal System::Int32 F_x124=(System::Int32)0x00000080;
		public:
			literal System::Int32 F_x82=(System::Int32)0x00000200;
		public:
			literal System::Int32 F_x159=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x37=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x31=(System::Int32)0x00001022;
		public:
			literal System::Int32 F_x86=(System::Int32)0xFFFFFFFE;
		public:
			literal System::Int32 F_x89=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x135=(System::Int32)0x00000010;
		public:
			literal System::Int32 F_x53=(System::Int32)0x00000002;
		public:
			literal System::Int32 F_x154=(System::Int32)0x00000001;
		public:
			literal System::Int32 F_x186=(System::Int32)0x00000004;
		public:
			literal System::Int32 F_x100=(System::Int32)0x00000040;
		private:
			T_x16();
		public:
			[DllImport("comctl32.dll",CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Boolean InitCommonControlsEx(Root::T_x105::T_x16::T_x1^ A_0);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Int32 SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::IntPtr SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,System::IntPtr A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static void SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,Root::T_x105::T_x16::T_x8% A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Int32 SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,Root::T_x105::T_x16::T_x4% A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static void SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,Root::T_x105::T_x16::T_x6% A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static void SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,Root::T_x105::T_x16::T_x11% A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static void SendMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,Root::T_x105::T_x16::T_x16_10% A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::IntPtr PostMessage(System::IntPtr A_0,System::Int32 A_1,System::Int32 A_2,System::Int32 A_3);
		public:
			[DllImport("kernel32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Int32 GetCurrentThreadId();
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::IntPtr SetWindowsHookEx(System::Int32 A_0,Root::T_x105::T_x16::T_x14^ A_1,System::IntPtr A_2,System::Int32 A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Boolean UnhookWindowsHookEx(System::IntPtr A_0);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::IntPtr CallNextHookEx(System::IntPtr A_0,System::Int32 A_1,System::IntPtr A_2,System::IntPtr A_3);
		public:
			[DllImport("comctl32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Boolean ImageList_DrawIndirect(Root::T_x105::T_x16::T_x5% A_0);
		public:
			[DllImport("comctl32.dll",CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Int32 DllGetVersion(Root::T_x105::T_x16::T_x2% A_0);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Int32 SystemParametersInfo(System::Int32 A_0,System::Int32 A_1,System::Int32% A_2,System::Int32 A_3);
		public:
			[DllImport("user32.dll",CharSet=CharSet::Auto,CallingConvention=CallingConvention::Winapi)]
			[PreserveSig]
			static System::Boolean MessageBeep(System::Int32 A_0);
		public:
			static void M_x1(System::Drawing::Graphics^ A_0,System::Drawing::Image^ A_1,System::Drawing::Point A_2,System::Boolean A_3);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12  : System::Windows::Forms::Control , Reflector::ICommandBar
		{
		internal:
			enum class T_x1
			{
				F_x1=(System::Int32)0x00000000
				,F_x2=(System::Int32)0x00000001
				,F_x12=(System::Int32)0x00000002
			};
		private:
			System::String^ F_x1;
		private:
			Root::T_x105^ F_x2;
		private:
			Root::T_x105::T_x4^ F_x12;
		private:
			Root::T_x105::T_x2 F_x13;
		private:
			Root::T_x105::T_x8^ F_x8;
		private:
			System::IntPtr F_x5;
		private:
			System::Drawing::Point F_x9;
		private:
			System::Int32 F_x4;
		private:
			System::Int32 F_x15;
		private:
			System::Boolean F_x11;
		private:
			Root::T_x105::T_x12::T_x1 F_x10;
		private:
			Root::T_x105::T_x12::T_x1 F_x7;
		private:
			System::Windows::Forms::ImageList^ F_x16;
		public:
			T_x12(Root::T_x105^ A_0);
		public:
			virtual System::String^ M_x7() sealed  = Reflector::ICommandBar::Identifier::get;
			//Reflector::ICommandBar^::get_Identifier by M_x7
		public:
			virtual void M_x1(System::String^ A_0) sealed  = Reflector::ICommandBar::Identifier::set;
			//Reflector::ICommandBar^::set_Identifier by M_x1
		public:
			virtual Reflector::ICommandBarItemCollection^ M_x14() sealed  = Reflector::ICommandBar::Items::get;
			//Reflector::ICommandBar^::get_Items by M_x14
		public:
			void M_x1(Root::T_x105::T_x2 A_0);
		public:
			Root::T_x105::T_x2 M_x11();
		protected:
			virtual System::Drawing::Size M_x10()  = System::Windows::Forms::Control::DefaultSize::get;
			//System::Windows::Forms::Control^::get_DefaultSize by M_x10
		protected:
			virtual void M_x16()  = System::Windows::Forms::Control::CreateHandle;
			//System::Windows::Forms::Control^::CreateHandle by M_x16
		protected:
			//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
			virtual System::Windows::Forms::CreateParams^ M_x6()  = System::Windows::Forms::Control::CreateParams::get;
			//System::Windows::Forms::Control^::get_CreateParams by M_x6
		protected:
			virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleCreated;
			//System::Windows::Forms::Control^::OnHandleCreated by M_x2
		public:
			//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
			virtual System::Boolean M_x11(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::PreProcessMessage;
			//System::Windows::Forms::Control^::PreProcessMessage by M_x11
		protected:
			virtual void M_x1(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseDown;
			//System::Windows::Forms::Control^::OnMouseDown by M_x1
		protected:
			virtual void M_x2(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseMove;
			//System::Windows::Forms::Control^::OnMouseMove by M_x2
		private:
			System::Boolean M_x15(System::Windows::Forms::Message% A_0);
		private:
			System::Boolean M_x1(System::Windows::Forms::Keys A_0);
		private:
			System::Boolean M_x9(System::Int32 A_0);
		private:
			System::Int32 M_x1(System::Drawing::Point A_0);
		private:
			System::Int32 M_x5(System::Int32 A_0);
		private:
			System::Int32 M_x8(System::Int32 A_0);
		private:
			System::Int32 M_x4();
		private:
			void M_x13(System::Int32 A_0);
		private:
			void M_x1(Root::T_x105::T_x12::T_x1 A_0,System::Int32 A_1);
		private:
			void M_x12(System::Int32 A_0);
		private:
			void M_x2(System::Int32 A_0);
		public:
			void M_x1(System::Windows::Forms::Control^ A_0,System::Drawing::Point A_1);
		private:
			System::Boolean M_x4(System::Windows::Forms::Message% A_0);
		private:
			System::IntPtr M_x1(System::Int32 A_0,System::IntPtr A_1,System::IntPtr A_2);
		protected:
			//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
			virtual void M_x10(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::WndProc;
			//System::Windows::Forms::Control^::WndProc by M_x10
		private:
			void M_x9(System::Windows::Forms::Message% A_0);
		private:
			void M_x5(System::Windows::Forms::Message% A_0);
		private:
			void M_x8(System::Windows::Forms::Message% A_0);
		private:
			void M_x13(System::Windows::Forms::Message% A_0);
		private:
			void M_x12(System::Windows::Forms::Message% A_0);
		private:
			void M_x2(System::Windows::Forms::Message% A_0);
		private:
			void M_x1(System::Windows::Forms::Message% A_0);
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnFontChanged;
			//System::Windows::Forms::Control^::OnFontChanged by M_x1
		private:
			System::Boolean M_x1(Reflector::ICommandBarItem^ A_0);
		private:
			void M_x9();
		private:
			void M_x5();
		private:
			Root::T_x105::T_x16::T_x11 M_x1(System::Int32 A_0);
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
		internal:
			void M_x12(Reflector::ICommandBarItem^ A_0);
		internal:
			void M_x2(Reflector::ICommandBarItem^ A_0);
		internal:
			Root::T_x105::T_x8^ M_x15();
		private:
			void M_x1(System::Object^ A_0,System::ComponentModel::PropertyChangedEventArgs^ A_1);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x13  : Root::T_x105::T_x11 , Reflector::ICommandBarCheckBox
		{
		private:
			System::Boolean F_x1;
		public:
			T_x13(System::String^ A_0);
		public:
			virtual void M_x1(System::Boolean A_0) sealed  = Reflector::ICommandBarCheckBox::Checked::set;
			//Reflector::ICommandBarCheckBox^::set_Checked by M_x1
		public:
			virtual System::Boolean M_x2() sealed  = Reflector::ICommandBarCheckBox::Checked::get;
			//Reflector::ICommandBarCheckBox^::get_Checked by M_x2
		protected:
			virtual void M_x1(System::EventArgs^ A_0) override;
		public:
			virtual System::String^ M_x1() override;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x6  : Root::T_x105::T_x5 , Reflector::ICommandBarComboBox
		{
		private:
			System::Windows::Forms::ComboBox^ F_x1;
		public:
			T_x6(System::String^ A_0,System::Windows::Forms::ComboBox^ A_1);
		protected:
			virtual void M_x15(System::Boolean A_0) override;
		public:
			virtual System::Windows::Forms::ComboBox^ M_x2() sealed  = Reflector::ICommandBarComboBox::ComboBox::get;
			//Reflector::ICommandBarComboBox^::get_ComboBox by M_x2
		public:
			virtual System::String^ M_x12()  = System::ComponentModel::Component::ToString;
			//System::ComponentModel::Component^::ToString by M_x12
		private:
			void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
		public:
			property virtual System::Boolean Enabled
			{
				virtual System::Boolean get() override;
				virtual void set(System::Boolean value) override;
			}
		public:
			property virtual System::Boolean Visible
			{
				virtual System::Boolean get() override;
				virtual void set(System::Boolean value) override;
			}
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x7  : Root::T_x105::T_x15 , Reflector::ICommandBarSeparator
		{
		public:
			T_x7();
		};
	private:
		Root::T_x105::T_x1^ F_x1;
	public:
		T_x105();
	public:
		virtual Reflector::ICommandBarCollection^ M_x4() sealed  = Reflector::ICommandBarManager::CommandBars::get;
		//Reflector::ICommandBarManager^::get_CommandBars by M_x4
	public:
		//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
		virtual System::Boolean M_x2(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::PreProcessMessage;
		//System::Windows::Forms::Control^::PreProcessMessage by M_x2
	protected:
		virtual System::Drawing::Size M_x5()  = System::Windows::Forms::Control::DefaultSize::get;
		//System::Windows::Forms::Control^::get_DefaultSize by M_x5
	protected:
		virtual void M_x15()  = System::Windows::Forms::Control::CreateHandle;
		//System::Windows::Forms::Control^::CreateHandle by M_x15
	protected:
		//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
		virtual System::Windows::Forms::CreateParams^ M_x11()  = System::Windows::Forms::Control::CreateParams::get;
		//System::Windows::Forms::Control^::get_CreateParams by M_x11
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnHandleCreated;
		//System::Windows::Forms::Control^::OnHandleCreated by M_x1
	protected:
		//SecurityAction::LinkDemand = "<PermissionSet class=\"System.Security.PermissionSe"+"t\"\r\n               version=\"1\">\r\n   <IPermission class=\"Syst"+"em.Security.Permissions.SecurityPermission, mscorlib, Versio"+"n=1.0.3300.0, Culture=neutral, PublicKeyToken=b77a5c561934e0"+"89\"\r\n                version=\"1\"\r\n                Flags=\"Unm"+"anagedCode\"/>\r\n</PermissionSet>\r\n"
		virtual void M_x12(System::Windows::Forms::Message% A_0)  = System::Windows::Forms::Control::WndProc;
		//System::Windows::Forms::Control^::WndProc by M_x12
	private:
		void M_x1(System::Windows::Forms::Message% A_0);
	private:
		void M_x8();
	private:
		void M_x13();
	private:
		void M_x1(Root::T_x105::T_x12^ A_0);
	private:
		void M_x12();
	private:
		Root::T_x105::T_x16::T_x16_10 M_x1(System::Int32 A_0);
	internal:
		void M_x9();
	private:
		void M_x12(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
	private:
		void M_x2();
	private:
		void M_x1();
	};
}
