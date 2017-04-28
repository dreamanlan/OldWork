#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x76  : System::Windows::Forms::Label
	{
	public:
		T_x76();
	protected:
		virtual void OnMouseEnter(System::EventArgs^ e) override;
	protected:
		virtual void OnMouseLeave(System::EventArgs^ e) override;
	protected:
		virtual void OnMouseDown(System::Windows::Forms::MouseEventArgs^ e) override;
	public:
		property virtual System::String^ Text
		{
			virtual System::String^ get() override;
			virtual void set(System::String^ value) override;
		}
	};
}
