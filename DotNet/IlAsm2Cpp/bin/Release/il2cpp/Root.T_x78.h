#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x78  : System::Windows::Forms::Control
	{
		ref class T_x2;
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::Control
		{
		private:
			System::Boolean F_x1;
		private:
			System::Boolean F_x2;
		public:
			T_x1();
		protected:
			virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseEnter;
			//System::Windows::Forms::Control^::OnMouseEnter by M_x2
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseLeave;
			//System::Windows::Forms::Control^::OnMouseLeave by M_x1
		protected:
			virtual void M_x12(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseMove;
			//System::Windows::Forms::Control^::OnMouseMove by M_x12
		protected:
			virtual void M_x2(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseDown;
			//System::Windows::Forms::Control^::OnMouseDown by M_x2
		protected:
			virtual void M_x1(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseUp;
			//System::Windows::Forms::Control^::OnMouseUp by M_x1
		protected:
			virtual void M_x1(System::Windows::Forms::PaintEventArgs^ A_0)  = System::Windows::Forms::Control::OnPaint;
			//System::Windows::Forms::Control^::OnPaint by M_x1
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2  : System::Windows::Forms::Control
		{
		private:
			Root::T_x78::T_x1^ F_x1;
		private:
			System::Windows::Forms::Label^ F_x2;
		public:
			T_x2();
		protected:
			virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnSizeChanged;
			//System::Windows::Forms::Control^::OnSizeChanged by M_x1
		protected:
			virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnBackColorChanged;
			//System::Windows::Forms::Control^::OnBackColorChanged by M_x2
		protected:
			virtual void M_x12(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnForeColorChanged;
			//System::Windows::Forms::Control^::OnForeColorChanged by M_x12
		protected:
			virtual void M_x13(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnTextChanged;
			//System::Windows::Forms::Control^::OnTextChanged by M_x13
		protected:
			virtual void M_x1(System::Windows::Forms::MouseEventArgs^ A_0)  = System::Windows::Forms::Control::OnMouseDown;
			//System::Windows::Forms::Control^::OnMouseDown by M_x1
		private:
			void M_x1(System::Object^ A_0,System::EventArgs^ A_1);
		};
	private:
		System::ComponentModel::CancelEventHandler^ F_x1;
	private:
		Root::T_x78::T_x2^ F_x2;
	private:
		System::Windows::Forms::Label^ F_x12;
	private:
		System::Windows::Forms::ContainerControl^ F_x13;
	private:
		Reflector::IWindow^ F_x8;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x2(System::ComponentModel::CancelEventHandler^ A_0);
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		void M_x1(System::ComponentModel::CancelEventHandler^ A_0);
	public:
		T_x78();
	public:
		Reflector::IWindow^ M_x2();
	public:
		void M_x1(Reflector::IWindow^ A_0);
	public:
		void M_x1();
	protected:
		virtual void M_x1(System::ComponentModel::CancelEventArgs^ A_0);
	protected:
		virtual void M_x2(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnEnter;
		//System::Windows::Forms::Control^::OnEnter by M_x2
	protected:
		virtual void M_x1(System::EventArgs^ A_0)  = System::Windows::Forms::Control::OnLeave;
		//System::Windows::Forms::Control^::OnLeave by M_x1
	};
}
