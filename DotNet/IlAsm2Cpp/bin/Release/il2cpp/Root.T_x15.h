#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x15  : System::Windows::Forms::ListViewItem
	{
	public:
		System::String^ M_x2();
	public:
		void M_x1(System::String^ A_0);
	public:
		System::Object^ M_x12();
	public:
		virtual System::String^ M_x1()  = System::Windows::Forms::ListViewItem::ToString;
		//System::Windows::Forms::ListViewItem^::ToString by M_x1
	public:
		T_x15();
	};
}
