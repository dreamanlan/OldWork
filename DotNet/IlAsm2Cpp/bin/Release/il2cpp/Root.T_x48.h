#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x48 sealed
	{
		interface class T_x2;
		interface class T_x1;
	public:
		[System::Runtime::InteropServices::Guid("34A715A0-6587-11D0-924A-0020AFC7AC4D")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)2)]
		[ComImport]
		interface class T_x1
		{
		public:
			[System::Runtime::InteropServices::DispId(259)]
			virtual void M_x1([In,MarshalAs(UnmanagedType::IDispatch)]System::Object^ A_0,[In]System::String^% A_1) abstract;
		};
	public:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)2)]
		[System::Runtime::InteropServices::Guid("eab22ac2-30c1-11cf-a7eb-0000c05bae0b")]
		[ComImport]
		interface class T_x2
		{
		public:
			[System::Runtime::InteropServices::DispId(100)]
			virtual void M_x1(System::String^ A_0,System::Int32 A_1,System::String^ A_2,System::Object^% A_3,System::String^ A_4,System::Boolean% A_5) abstract;
		public:
			[System::Runtime::InteropServices::DispId(101)]
			virtual void M_x1(System::String^ A_0) abstract;
		};
	private:
		T_x48();
	};
}
