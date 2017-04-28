#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x169
	{
		interface class T_x1;
		ref class T_x4;
		ref class T_x10;
		ref class T_x11;
		interface class T_x5;
		interface class T_x15;
		interface class T_x2;
		interface class T_x9;
		interface class T_x13;
		interface class T_x12;
		interface class T_x8;
	internal:
		[System::Runtime::InteropServices::Guid("AA544D41-28CB-11d3-BD22-0000F80849BD")]
		[ComImport]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x10
		{
		public:
			[MethodImpl(MethodImplOptions::InternalCall,MethodCodeType=MethodCodeType::Runtime)]
			T_x10();
		};
	internal:
		[System::Runtime::InteropServices::Guid("7DAC8207-D3AE-4c75-9B67-92801A497D44")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x1
		{
		};
	internal:
		[System::Runtime::InteropServices::Guid("0A29FF9E-7F9C-4437-8B11-F424491E3931")]
		[ComImport]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x11
		{
		public:
			[MethodImpl(MethodImplOptions::InternalCall,MethodCodeType=MethodCodeType::Runtime)]
			T_x11();
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("9F60EEBE-2D9A-3F7C-BF58-80BC991C60BB")]
		[ComImport]
		interface class T_x12
		{
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::Char>^ A_2) abstract;
		public:
			virtual System::UInt32 M_x1() abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::Byte>^ A_2) abstract;
		public:
			virtual System::UInt32 M_x2() abstract;
		public:
			virtual System::UInt32 M_x12() abstract;
		public:
			virtual System::UInt32 M_x13() abstract;
		public:
			virtual System::UInt32 M_x8() abstract;
		public:
			virtual System::UInt32 M_x5() abstract;
		public:
			virtual System::UInt32 M_x9() abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("40DE4037-7C81-3E1E-B022-AE1ABFF2CA08")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x13
		{
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::Char>^ A_2) abstract;
		public:
			virtual void M_x1([Out]System::Guid% A_0) abstract;
		public:
			virtual void M_x2([Out]System::Guid% A_0) abstract;
		public:
			virtual void M_x12([Out]System::Guid% A_0) abstract;
		public:
			virtual void M_x13([Out]System::Guid% A_0) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::Byte>^ A_2) abstract;
		public:
			virtual System::UInt32 M_x1(System::UInt32 A_0) abstract;
		public:
			virtual System::Boolean M_x1() abstract;
		public:
			virtual System::UInt32 M_x2() abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,System::UInt32 A_1,System::UInt32 A_2,System::UInt32 A_3,System::UInt32 A_4,[Out]System::UInt32% A_5,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=4)]array<System::Byte>^ A_6) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("68005D0F-B8E0-3B01-84D5-A11A94154942")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x8
		{
		public:
			virtual Root::T_x169::T_x9^ M_x1() abstract;
		public:
			virtual Root::T_x169::T_x8^ M_x2() abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::IntPtr>^ A_2) abstract;
		public:
			virtual System::UInt32 M_x12() abstract;
		public:
			virtual System::UInt32 M_x13() abstract;
		public:
			virtual System::UInt32 M_x8() abstract;
		public:
			virtual void M_x2(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::IntPtr>^ A_2) abstract;
		public:
			virtual void M_x12(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::IntPtr>^ A_2) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("B62B923C-B500-3158-A543-24F307A8B7E1")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x9
		{
		public:
			virtual System::UInt32 M_x1() abstract;
		public:
			virtual System::UInt32 M_x2() abstract;
		public:
			virtual Root::T_x169::T_x8^ M_x12() abstract;
		public:
			virtual Root::T_x169::T_x8^ M_x1(System::UInt32 A_0) abstract;
		public:
			virtual System::UInt32 M_x1(Root::T_x169::T_x13^ A_0,System::UInt32 A_1,System::UInt32 A_2) abstract;
		public:
			virtual void M_x1(Root::T_x169::T_x13^ A_0,System::UInt32 A_1,System::UInt32 A_2,System::UInt32 A_3,[Out]System::UInt32% A_4,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=3)]array<System::UInt32>^ A_5) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<Root::T_x169::T_x12^>^ A_2) abstract;
		public:
			virtual System::IntPtr M_x13() abstract;
		public:
			virtual System::Boolean M_x1([MarshalAs(UnmanagedType::LPArray,SizeConst=2)]array<Root::T_x169::T_x13^>^ A_0,[MarshalAs(UnmanagedType::LPArray)]array<System::UInt32>^ A_1,[MarshalAs(UnmanagedType::LPArray)]array<System::UInt32>^ A_2) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::UInt32>^ A_2,[MarshalAs(UnmanagedType::LPArray,ArraySubType=UnmanagedType::IUnknown)]array<System::IntPtr>^ A_3,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::UInt32>^ A_4,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::UInt32>^ A_5,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::UInt32>^ A_6,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::UInt32>^ A_7) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("B4CE6286-2A6B-3712-A3B7-1EE1DAD467B5")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x2
		{
		public:
			virtual Root::T_x169::T_x13^ M_x1(System::String^ A_0,System::Guid% A_1,System::Guid% A_2,System::Guid% A_3) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<Root::T_x169::T_x13^>^ A_2) abstract;
		public:
			virtual System::UInt32 M_x1() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1(System::UInt32 A_0,Root::T_x169::T_x9^% A_1) abstract;
		public:
			virtual Root::T_x169::T_x9^ M_x1(System::UInt32 A_0,System::Int32 A_1) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,System::UInt32 A_1,[Out]System::UInt32% A_2,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=1)]array<Root::T_x169::T_x12^>^ A_3) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<Root::T_x169::T_x12^>^ A_2) abstract;
		public:
			virtual Root::T_x169::T_x9^ M_x1(Root::T_x169::T_x13^ A_0,System::UInt32 A_1,System::UInt32 A_2) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,System::String^ A_1,System::UInt64 A_2,System::UInt32% A_3,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=2)]array<System::Byte>^ A_4) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::IntPtr>^ A_2) abstract;
		public:
			virtual void M_x1([MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_0,System::String^ A_1,System::String^ A_2,[MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_3) abstract;
		public:
			virtual void M_x1(System::String^ A_0,[MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_1) abstract;
		public:
			virtual void M_x2(System::String^ A_0,[MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_1) abstract;
		public:
			virtual void M_x1(System::UInt32 A_0,[Out]System::UInt32% A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=0)]array<System::Char>^ A_2) abstract;
		public:
			virtual void M_x1(Root::T_x169::T_x13^ A_0,System::UInt32 A_1,System::UInt32 A_2,System::UInt32 A_3,[Out]System::UInt32% A_4,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=3)]array<Root::T_x169::T_x9^>^ A_5) abstract;
		public:
			virtual void M_x1(Root::T_x169::T_x13^ A_0,[Out]System::Int32% A_1,[Out]System::Boolean% A_2) abstract;
		public:
			virtual void M_x1(Root::T_x169::T_x9^ A_0,[Out]System::Int32% A_1) abstract;
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("AA544D42-28CB-11d3-BD22-0000F80849BD")]
		[ComImport]
		interface class T_x5
		{
		public:
			virtual System::Int32 M_x1([MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_0,System::String^ A_1,System::String^ A_2,[Out]Root::T_x169::T_x2^% A_3) abstract;
		public:
			virtual System::Int32 M_x1([MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_0,[MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_1,[Out]Root::T_x169::T_x2^% A_2) abstract;
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::ComVisible(false)]
		[System::Runtime::InteropServices::Guid("ACCEE350-89AF-4ccb-8B40-1C2C4C6F9434")]
		[ComImport]
		interface class T_x15  : Root::T_x169::T_x5
		{
		public:
			virtual void M_x1(System::IntPtr A_0,[MarshalAs(UnmanagedType::LPWStr)]System::String^ A_1,[MarshalAs(UnmanagedType::LPWStr)]System::String^ A_2,[Out,MarshalAs(UnmanagedType::Interface)]Root::T_x169::T_x2^% A_3) abstract;
		public:
			virtual void M_x1(System::IntPtr A_0,System::IntPtr A_1,[Out,MarshalAs(UnmanagedType::Interface)]Root::T_x169::T_x2^% A_2) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([MarshalAs(UnmanagedType::IUnknown)]System::Object^ A_0,[MarshalAs(UnmanagedType::LPWStr)]System::String^ A_1,[MarshalAs(UnmanagedType::LPWStr)]System::String^ A_2,System::Int32 A_3,[Out,MarshalAs(UnmanagedType::Interface)]Root::T_x169::T_x2^% A_4) abstract;
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x4  : Root::T_x169::T_x1
		{
		public:
			T_x4();
		};
	private:
		T_x169();
	public:
		static System::Collections::IDictionary^ M_x1(System::String^ A_0,System::Int32 A_1);
	private:
		static void M_x1(Root::T_x169::T_x8^ A_0,System::Collections::IDictionary^ A_1);
	};
}
