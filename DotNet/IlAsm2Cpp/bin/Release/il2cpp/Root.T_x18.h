#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x18 sealed
	{
		ref class T_x15;
		interface class T_x19;
		interface class T_x56;
		interface class T_x9;
		interface class T_x18_1;
		interface class T_x2;
		interface class T_x11;
		interface class T_x48;
		interface class T_x12;
		interface class T_x8;
		interface class T_x1;
		interface class T_x6;
		ref class T_x57;
		ref class T_x7;
		ref class T_x17;
		ref class T_x14;
		ref class T_x16;
		interface class T_x5;
		interface class T_x13;
	internal:
		enum class T_x55
		{
			F_x1=(System::Int32)0x00000001
			,F_x2=(System::Int32)0x00000002
			,F_x12=(System::Int32)0x00000003
			,F_x13=(System::Int32)0x00000004
			,F_x8=(System::Int32)0x00000005
			,F_x5=(System::Int32)0x00000006
			,F_x9=(System::Int32)0x00000007
			,F_x4=(System::Int32)0x00000008
			,F_x15=(System::Int32)0x00000009
			,F_x11=(System::Int32)0x0000000A
			,F_x10=(System::Int32)0x0000000B
			,F_x7=(System::Int32)0x0000000C
			,F_x16=(System::Int32)0x0000000D
			,F_x6=(System::Int32)0x0000000E
			,F_x14=(System::Int32)0x0000000F
			,F_x18=(System::Int32)0x00000010
			,F_x19=(System::Int32)0x00000011
			,F_x17=(System::Int32)0x00000012
			,F_x56=(System::Int32)0x00000013
			,F_x48=(System::Int32)0x00000014
			,F_x55=(System::Int32)0x00000015
			,F_x57=(System::Int32)0x00000016
			,F_x81=(System::Int32)0x00000017
		};
	internal:
		enum class T_x10
		{
			F_x1=(System::Int32)0x00000001
			,F_x2=(System::Int32)0x00000002
			,F_x12=(System::Int32)0x00000004
		};
	internal:
		enum class T_x4
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
			,F_x12=(System::Int32)0x00000002
			,F_x13=(System::Int32)0x00000003
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(true)]
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		ref class T_x14
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
			T_x14();
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(false)]
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		ref class T_x17
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
		public:
			~T_x17();
			//System::IDisposable^::Dispose by M_x1
		public:
			T_x17();
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("00000117-0000-0000-C000-000000000046")]
		[System::Runtime::InteropServices::ComVisible(true)]
		[ComImport]
		interface class T_x48
		{
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out]System::IntPtr% A_0) abstract;
		public:
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::LPStruct)]Root::T_x18::T_x17^ A_0) abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			virtual void M_x12([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			virtual void M_x1([In]Root::T_x18::T_x14^ A_0,[In]System::Object^ A_1,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_2) abstract;
		public:
			virtual void M_x13([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		};
	public:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("00000116-0000-0000-C000-000000000046")]
		[ComImport]
		interface class T_x11
		{
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out]System::IntPtr% A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1(System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out]Root::T_x18::T_x14^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2([In]Root::T_x18::T_x14^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x12([In]Root::T_x18::T_x14^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x48^ A_0,[In,MarshalAs(UnmanagedType::LPWStr)]System::String^ A_1) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]System::IntPtr A_0,[In,Out]System::Object^ A_1) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]System::IntPtr A_0,[In]System::IntPtr A_1,[In]System::IntPtr A_2) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]System::IntPtr A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1(System::Boolean A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]Root::T_x18::T_x17^% A_0,[In,MarshalAs(UnmanagedType::U2)]System::Int16 A_1) abstract;
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(true)]
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		ref class T_x57
		{
		public:
			System::Int32 F_x1;
		public:
			System::Int32 F_x2;
		public:
			T_x57();
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(true)]
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		ref class T_x16
		{
		public:
			[MarshalAs(UnmanagedType::U4)]
			System::Int32 F_x1;
		public:
			[MarshalAs(UnmanagedType::I4)]
			System::Int32 F_x2;
		public:
			[MarshalAs(UnmanagedType::I4)]
			System::Int32 F_x12;
		public:
			[MarshalAs(UnmanagedType::I4)]
			System::Int32 F_x13;
		public:
			[MarshalAs(UnmanagedType::I4)]
			System::Int32 F_x8;
		public:
			T_x16();
		};
	internal:
		[System::Runtime::InteropServices::Guid("BD3F23C0-D43E-11CF-893B-00AA00BDCE1A")]
		[System::Runtime::InteropServices::ComVisible(true)]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x1
		{
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In]Root::T_x18::T_x57^ A_1,[In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_2,[In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_3) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,Out]Root::T_x18::T_x16^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x48^ A_1,[In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_2,[In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x11^ A_3,[In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_4) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Bool)]System::Boolean A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2([In,MarshalAs(UnmanagedType::Bool)]System::Boolean A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x12([In,MarshalAs(UnmanagedType::Bool)]System::Boolean A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]Root::T_x18::T_x14^ A_0,[In]System::Object^ A_1,[In]System::Boolean A_2) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]Root::T_x18::T_x17^ A_0,[In]System::Guid% A_1,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_2) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out,MarshalAs(UnmanagedType::LPArray)]array<System::String^>^ A_0,[In,MarshalAs(UnmanagedType::U4)]System::Int32 A_1) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_0,[Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_1) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::LPWStr)]System::String^ A_1,[Out,MarshalAs(UnmanagedType::LPWStr)]System::String^% A_2) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2([In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_0,[Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_1) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("00000118-0000-0000-C000-000000000046")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::ComVisible(true)]
		interface class T_x12
		{
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1() abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::U4)]System::Int32 A_1,[Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_2) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x2() abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x12() abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("B196B284-BAB4-101A-B69C-00AA00341D07")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x13
		{
		public:
			virtual void M_x1([Out]System::Object^% A_0) abstract;
		public:
			virtual void M_x1([In]System::Guid% A_0,[Out]Root::T_x18::T_x5^% A_1) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("8856f961-340a-11d0-a96b-00c04fd705a2")]
		[System::Runtime::InteropServices::ComVisible(true)]
		[ComImport]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x15
		{
		public:
			[MethodImpl(MethodImplOptions::InternalCall,MethodCodeType=MethodCodeType::Runtime)]
			T_x15();
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(true)]
		[System::Runtime::InteropServices::Guid("00000112-0000-0000-C000-000000000046")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x18_1
		{
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x12^ A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out]Root::T_x18::T_x12^% A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::LPWStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::LPWStr)]System::String^ A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::U4)]System::Int32 A_1,[Out]System::Object^% A_2) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_0,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_1,[In,MarshalAs(UnmanagedType::U4)]System::Int32 A_2) abstract;
		public:
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[Out]System::Object^% A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0,[In]System::IntPtr A_1,[In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x12^ A_2,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_3,[In]System::IntPtr A_4,[In]Root::T_x18::T_x14^ A_5) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out]System::Object^% A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1() abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x2() abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,Out]System::Guid% A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[Out,MarshalAs(UnmanagedType::LPWStr)]System::String^% A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x2([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[In]System::Object^ A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x12([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[Out]System::Object^ A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::Interface)]System::Object^ A_0,[Out]System::Int32% A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x2([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x2([Out]System::Object^% A_0) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Int32 A_0,[Out]System::Int32% A_1) abstract;
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([In]System::Object^ A_0) abstract;
		};
	internal:
		[System::Runtime::InteropServices::Guid("3050F1FF-98B5-11CF-BB82-00AA00BDCE0B")]
		[System::Runtime::InteropServices::ComVisible(true)]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)0)]
		interface class T_x9
		{
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_1,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_2) abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_1,[Out,MarshalAs(UnmanagedType::LPArray)]array<System::Object^>^ A_2) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_1) abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x1() abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x2() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x12() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual Root::T_x18::T_x9^ M_x13() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x8() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x5() abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x9() abstract;
		public:
			virtual void M_x12([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x4() abstract;
		public:
			virtual void M_x13([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x15() abstract;
		public:
			virtual void M_x8([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x11() abstract;
		public:
			virtual void M_x5([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x10() abstract;
		public:
			virtual void M_x9([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x7() abstract;
		public:
			virtual void M_x4([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x16() abstract;
		public:
			virtual void M_x15([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x6() abstract;
		public:
			virtual void M_x11([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x14() abstract;
		public:
			virtual void M_x10([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x18() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x19() abstract;
		public:
			virtual void M_x12([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x17() abstract;
		public:
			virtual void M_x13([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x56() abstract;
		public:
			virtual void M_x7([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x48() abstract;
		public:
			virtual void M_x16([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x1([In,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x9^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x55() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x57() abstract;
		public:
			virtual void M_x8([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x81() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x33() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x49() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x158() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x26() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual Root::T_x18::T_x9^ M_x176() abstract;
		public:
			virtual void M_x5([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x134() abstract;
		public:
			virtual void M_x9([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x148() abstract;
		public:
			virtual void M_x4([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x173() abstract;
		public:
			virtual void M_x15([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x113() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::BStr)]System::String^ A_1) abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::BStr)]System::String^ A_1) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual Root::T_x18::T_x9^ M_x3() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x47() abstract;
		public:
			virtual void M_x43() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x35() abstract;
		public:
			virtual void M_x6([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x93() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x139() abstract;
		public:
			virtual void M_x14([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x149() abstract;
		public:
			virtual void M_x18([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x172() abstract;
		public:
			virtual void M_x19([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x96() abstract;
		public:
			virtual void M_x17([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x51() abstract;
		public:
			virtual void M_x56([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x87() abstract;
		public:
			virtual void M_x48([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x146() abstract;
		public:
			virtual void M_x55([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x45() abstract;
		public:
			virtual void M_x57([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x67() abstract;
		public:
			virtual void M_x81([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x145() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x114() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x165() abstract;
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)0)]
		[System::Runtime::InteropServices::Guid("332C4425-26CB-11D0-B483-00C04FD90119")]
		[System::Runtime::InteropServices::ComVisible(true)]
		interface class T_x56
		{
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x1() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x2() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual Root::T_x18::T_x9^ M_x12() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x13() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x8() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x5() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x9() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x4() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x15() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x11() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x10() abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x7() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x16() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x6() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x14() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x18() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x19() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x17() abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x56() abstract;
		public:
			virtual void M_x12([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x48() abstract;
		public:
			virtual void M_x13([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x55() abstract;
		public:
			virtual void M_x8([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x57() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x81() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x33() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x49() abstract;
		public:
			virtual void M_x12([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x158() abstract;
		public:
			virtual void M_x13([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x26() abstract;
		public:
			virtual void M_x8([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x176() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::Bool)]System::Boolean A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x134() abstract;
		public:
			virtual void M_x5([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x148() abstract;
		public:
			virtual void M_x9([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x173() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x113() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x3() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x47() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x43() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x35() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x93() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x139() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x149() abstract;
		public:
			virtual void M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			virtual void M_x2([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_1,[In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_2,[In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_3) abstract;
		public:
			virtual void M_x172() abstract;
		public:
			virtual void M_x96() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x4([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x15([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x11([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x10([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x7([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x16([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::Bool)]System::Boolean A_1,[In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_2) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Bool)]
			virtual System::Boolean M_x6([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x14([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0) abstract;
		public:
			virtual void M_x5([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x51() abstract;
		public:
			virtual void M_x9([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x87() abstract;
		public:
			virtual void M_x4([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x146() abstract;
		public:
			virtual void M_x15([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x45() abstract;
		public:
			virtual void M_x11([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x67() abstract;
		public:
			virtual void M_x10([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x145() abstract;
		public:
			virtual void M_x7([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x114() abstract;
		public:
			virtual void M_x16([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x165() abstract;
		public:
			virtual void M_x6([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x60() abstract;
		public:
			virtual void M_x14([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x108() abstract;
		public:
			virtual void M_x18([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x75() abstract;
		public:
			virtual void M_x19([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x84() abstract;
		public:
			virtual void M_x17([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x22() abstract;
		public:
			virtual void M_x56([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x177() abstract;
		public:
			virtual void M_x48([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x116() abstract;
		public:
			virtual void M_x55([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x147() abstract;
		public:
			virtual void M_x57([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x181() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x1([In,MarshalAs(UnmanagedType::I4)]System::Int32 A_0,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_1) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x183() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x137() abstract;
		public:
			virtual void M_x81([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x95() abstract;
		public:
			virtual void M_x33([In,MarshalAs(UnmanagedType::LPStruct)]System::Object^ A_0) abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::LPStruct)]
			virtual System::Object^ M_x121() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::BStr)]
			virtual System::String^ M_x182() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual System::Object^ M_x1([In,MarshalAs(UnmanagedType::BStr)]System::String^ A_0,[In,MarshalAs(UnmanagedType::I4)]System::Int32 A_1) abstract;
		};
	public:
		[System::Runtime::InteropServices::Guid("D30C1661-CDAF-11d0-8A3E-00C04FC9E26E")]
		[System::Runtime::InteropServices::TypeLibType((System::Runtime::InteropServices::TypeLibTypeFlags)336)]
		[ComImport]
		interface class T_x19
		{
		public:
			[System::Runtime::InteropServices::DispId(100)]
			virtual void M_x1() abstract;
		public:
			[System::Runtime::InteropServices::DispId(101)]
			virtual void M_x2() abstract;
		public:
			[System::Runtime::InteropServices::DispId(102)]
			virtual void M_x12() abstract;
		public:
			[System::Runtime::InteropServices::DispId(103)]
			virtual void M_x13() abstract;
		public:
			[System::Runtime::InteropServices::DispId(104)]
			virtual void M_x1([In]System::String^ A_0,[In]System::Object^% A_1,[In]System::Object^% A_2,[In]System::Object^% A_3,[In]System::Object^% A_4) abstract;
		public:
			[System::Runtime::InteropServices::DispId(-550)]
			virtual void M_x8() abstract;
		public:
			[System::Runtime::InteropServices::DispId(105)]
			virtual void M_x1([In]System::Object^% A_0) abstract;
		public:
			[System::Runtime::InteropServices::DispId(106)]
			virtual void M_x5() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::IDispatch)]
			virtual System::Object^ M_x9() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::IDispatch)]
			virtual System::Object^ M_x4() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::IDispatch)]
			virtual System::Object^ M_x15() abstract;
		public:
			[returnvalue:MarshalAs(UnmanagedType::Interface)]
			virtual Root::T_x18::T_x56^ M_x11() abstract;
		public:
			virtual System::Boolean M_x10() abstract;
		public:
			virtual System::String^ M_x7() abstract;
		public:
			virtual System::Int32 M_x16() abstract;
		public:
			virtual void M_x1(System::Int32 A_0) abstract;
		public:
			virtual System::Int32 M_x6() abstract;
		public:
			virtual void M_x2(System::Int32 A_0) abstract;
		public:
			virtual System::Int32 M_x14() abstract;
		public:
			virtual void M_x12(System::Int32 A_0) abstract;
		public:
			virtual System::Int32 M_x18() abstract;
		public:
			virtual void M_x13(System::Int32 A_0) abstract;
		public:
			virtual System::String^ M_x19() abstract;
		public:
			virtual System::String^ M_x17() abstract;
		public:
			virtual System::Boolean M_x56() abstract;
		public:
			[System::Runtime::InteropServices::DispId(300)]
			virtual void M_x48() abstract;
		public:
			[System::Runtime::InteropServices::DispId(301)]
			virtual void M_x1([Out]System::Int32% A_0,[Out]System::Int32% A_1) abstract;
		public:
			[System::Runtime::InteropServices::DispId(302)]
			virtual void M_x1([In]System::String^ A_0,[In]System::Object^ A_1) abstract;
		public:
			[System::Runtime::InteropServices::DispId(303)]
			virtual System::Object^ M_x1([In]System::String^ A_0) abstract;
		public:
			virtual System::String^ M_x55() abstract;
		public:
			virtual System::Int32 M_x57() abstract;
		public:
			virtual System::String^ M_x81() abstract;
		public:
			virtual System::String^ M_x33() abstract;
		public:
			virtual System::Boolean M_x49() abstract;
		public:
			virtual void M_x1(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x158() abstract;
		public:
			virtual void M_x2(System::Boolean A_0) abstract;
		public:
			virtual System::String^ M_x26() abstract;
		public:
			virtual void M_x2(System::String^ A_0) abstract;
		public:
			virtual System::Int32 M_x176() abstract;
		public:
			virtual void M_x8(System::Int32 A_0) abstract;
		public:
			virtual System::Boolean M_x134() abstract;
		public:
			virtual void M_x12(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x148() abstract;
		public:
			virtual void M_x13(System::Boolean A_0) abstract;
		public:
			[System::Runtime::InteropServices::DispId(500)]
			virtual void M_x1([In]System::Object^% A_0,[In]System::Object^% A_1,[In]System::Object^% A_2,[In]System::Object^% A_3,[In]System::Object^% A_4) abstract;
		public:
			[System::Runtime::InteropServices::DispId(501)]
			virtual Root::T_x18::T_x10 M_x1(Root::T_x18::T_x55 A_0) abstract;
		public:
			[System::Runtime::InteropServices::DispId(502)]
			virtual void M_x1(Root::T_x18::T_x55 A_0,Root::T_x18::T_x4 A_1,System::Object^% A_2,System::Object^% A_3) abstract;
		public:
			[System::Runtime::InteropServices::DispId(503)]
			virtual void M_x1([In]System::Object^% A_0,[In]System::Object^% A_1,[In]System::Object^% A_2) abstract;
		public:
			virtual System::Object^ M_x173() abstract;
		public:
			virtual System::Boolean M_x113() abstract;
		public:
			virtual void M_x8(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x3() abstract;
		public:
			virtual void M_x5(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x47() abstract;
		public:
			virtual void M_x9(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x43() abstract;
		public:
			virtual void M_x4(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x35() abstract;
		public:
			virtual void M_x15(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x93() abstract;
		public:
			virtual void M_x11(System::Boolean A_0) abstract;
		public:
			virtual System::Boolean M_x139() abstract;
		public:
			virtual void M_x10(System::Boolean A_0) abstract;
		};
	public:
		[System::Runtime::InteropServices::Guid("00000114-0000-0000-C000-000000000046")]
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[ComImport]
		interface class T_x2
		{
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out]System::IntPtr% A_0) abstract;
		public:
			virtual System::Int32 M_x1(System::Int32 A_0) abstract;
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("B196B286-BAB4-101A-B69C-00AA00341D07")]
		[ComImport]
		interface class T_x5
		{
		public:
			virtual void M_x1([Out]System::Guid% A_0) abstract;
		public:
			virtual void M_x1([Out]Root::T_x18::T_x13^% A_0) abstract;
		public:
			virtual void M_x1([MarshalAs(UnmanagedType::Interface)]System::Object^ A_0,[Out]System::Int32% A_1) abstract;
		public:
			virtual void M_x1(System::Int32 A_0) abstract;
		public:
			virtual void M_x1([Out]System::Object^% A_0) abstract;
		};
	internal:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("00000113-0000-0000-C000-000000000046")]
		[ComImport]
		interface class T_x6
		{
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out]System::IntPtr% A_0) abstract;
		public:
			virtual void M_x1(System::Int32 A_0) abstract;
		public:
			virtual void M_x1() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2() abstract;
		public:
			virtual void M_x1([In]Root::T_x18::T_x14^ A_0,[In]Root::T_x18::T_x14^ A_1) abstract;
		public:
			virtual void M_x12() abstract;
		};
	internal:
		[System::Runtime::InteropServices::ComVisible(false)]
		[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Ansi)]
		ref class T_x7 sealed
		{
		public:
			[MarshalAs(UnmanagedType::U4)]
			System::Int32 F_x1;
		public:
			[MarshalAs(UnmanagedType::I4)]
			System::Int32 F_x2;
		public:
			System::IntPtr F_x12;
		public:
			System::IntPtr F_x13;
		public:
			[MarshalAs(UnmanagedType::U4)]
			System::Int32 F_x8;
		public:
			~T_x7();
			//System::IDisposable^::Dispose by M_x1
		public:
			T_x7();
		};
	public:
		[System::Runtime::InteropServices::InterfaceType((System::Runtime::InteropServices::ComInterfaceType)1)]
		[System::Runtime::InteropServices::Guid("00000119-0000-0000-C000-000000000046")]
		[ComImport]
		interface class T_x8
		{
		public:
			[PreserveSig]
			[returnvalue:MarshalAs(UnmanagedType::I4)]
			virtual System::Int32 M_x1([Out]System::IntPtr% A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1(System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x12() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([Out,MarshalAs(UnmanagedType::Interface)]Root::T_x18::T_x11^% A_0,[Out,MarshalAs(UnmanagedType::Interface)]System::Object^% A_1,[Out]Root::T_x18::T_x14^ A_2,[Out]Root::T_x18::T_x14^ A_3,[In,Out]Root::T_x18::T_x7^ A_4) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In,MarshalAs(UnmanagedType::U4)]System::Object^ A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x2(System::Int32 A_0) abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x13() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x8() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x5() abstract;
		public:
			[PreserveSig]
			virtual System::Int32 M_x1([In]Root::T_x18::T_x14^ A_0) abstract;
		};
	public:
		literal System::Int32 F_x1=(System::Int32)0x00000100;
	public:
		literal System::Int32 F_x2=(System::Int32)0x00000000;
	public:
		literal System::Int32 F_x12=(System::Int32)0x00000002;
	public:
		literal System::Int32 F_x13=(System::Int32)0x00000001;
	public:
		literal System::Int32 F_x8=(System::Int32)0x00000200;
	public:
		literal System::Int32 F_x5=(System::Int32)0x00000001;
	public:
		literal System::Int32 F_x9=(System::Int32)0x00000400;
	public:
		literal System::Int32 F_x4=(System::Int32)0x00000002;
	public:
		literal System::Int32 F_x15=(System::Int32)0x00000040;
	public:
		literal System::Int32 F_x11=(System::Int32)0x00000010;
	public:
		literal System::Int32 F_x10=(System::Int32)0x00000100;
	public:
		literal System::Int32 F_x7=(System::Int32)0x00000080;
	public:
		literal System::Int32 F_x16=(System::Int32)0x00000004;
	public:
		literal System::Int32 F_x6=(System::Int32)0x00000020;
	public:
		literal System::Int32 F_x14=(System::Int32)0x00000008;
	public:
		literal System::Int32 F_x18=(System::Int32)0x00010000;
	public:
		literal System::Int32 F_x19=(System::Int32)0x00000000;
	public:
		literal System::Int32 F_x17=(System::Int32)0xFFFFFFFF;
	public:
		literal System::Int32 F_x56=(System::Int32)0xFFFFFFFD;
	public:
		literal System::Int32 F_x48=(System::Int32)0xFFFFFFFC;
	public:
		literal System::Int32 F_x55=(System::Int32)0xFFFFFFFB;
	public:
		literal System::Int32 F_x57=(System::Int32)0xFFFFFFFA;
	public:
		literal System::Int32 F_x81=(System::Int32)0xFFFFFFF9;
	public:
		literal System::Int32 F_x33=(System::Int32)0x00000001;
	public:
		literal System::Int32 F_x49=(System::Int32)0x00000001;
	public:
		literal System::Int32 F_x158=(System::Int32)0x00000000;
	public:
		literal System::Int32 F_x26=(System::Int32)0x80004001;
	public:
		literal System::Int32 F_x176=(System::Int32)0x80004002;
	public:
		literal System::Int32 F_x134=(System::Int32)0x80070057;
	private:
		T_x18();
	};
}
