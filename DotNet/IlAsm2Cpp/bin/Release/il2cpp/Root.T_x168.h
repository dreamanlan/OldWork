#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x168
	{
	private:
		T_x168();
	public:
		static void M_x1(System::String^ A_0,System::String^ A_1);
	public:
		static void M_x1(System::String^ A_0,array<System::Byte>^ A_1);
	public:
		static array<System::Byte>^ M_x1(System::String^ A_0);
	public:
		static array<System::Byte>^ M_x1(array<System::Byte>^ A_0);
	private:
		[DllImport("mscoree.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::StdCall,EntryPoint="StrongNameGetPublicKey")]
		[PreserveSig]
		static System::Boolean M_x2(System::String^ A_0,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=3)]array<System::Byte>^ A_1,System::Int32 A_2,[Out]System::IntPtr% A_3,[Out]System::Int32% A_4);
	private:
		[DllImport("mscorsn.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::StdCall,EntryPoint="StrongNameGetPublicKey")]
		[PreserveSig]
		static System::Boolean M_x1(System::String^ A_0,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=3)]array<System::Byte>^ A_1,System::Int32 A_2,[Out]System::IntPtr% A_3,[Out]System::Int32% A_4);
	private:
		[DllImport("mscorsn.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::StdCall,EntryPoint="StrongNameSignatureGeneration")]
		[PreserveSig]
		static System::Boolean M_x2(System::String^ A_0,System::String^ A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=4)]array<System::Byte>^ A_2,System::Int32 A_3,System::IntPtr A_4,System::IntPtr A_5);
	private:
		[DllImport("mscoree.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::StdCall,EntryPoint="StrongNameSignatureGeneration")]
		[PreserveSig]
		static System::Boolean M_x1(System::String^ A_0,System::String^ A_1,[MarshalAs(UnmanagedType::LPArray,SizeParamIndex=4)]array<System::Byte>^ A_2,System::Int32 A_3,System::IntPtr A_4,System::IntPtr A_5);
	};
}
