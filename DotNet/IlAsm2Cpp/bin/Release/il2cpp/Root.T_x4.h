#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x4
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Net::IWebProxy
		{
			ref class T_x2;
			ref class T_x1_11;
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x1_11 sealed
			{
				value class T_x2;
				value class T_x12;
				value class T_x1;
			public:
				[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Unicode)]
				value class T_x1 sealed
				{
				public:
					System::Boolean F_x1;
				public:
					System::IntPtr F_x2;
				public:
					System::IntPtr F_x12;
				public:
					System::IntPtr F_x13;
				};
			public:
				[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Unicode)]
				value class T_x12 sealed
				{
				public:
					[MarshalAs(UnmanagedType::U4)]
					System::Int32 F_x1;
				public:
					System::IntPtr F_x2;
				public:
					System::IntPtr F_x12;
				};
			public:
				[StructLayout(LayoutKind::Sequential , CharSet=CharSet::Unicode)]
				value class T_x2 sealed
				{
				public:
					[MarshalAs(UnmanagedType::U4)]
					System::Int32 F_x1;
				public:
					[MarshalAs(UnmanagedType::U4)]
					System::Int32 F_x2;
				public:
					System::String^ F_x12;
				public:
					System::IntPtr F_x13;
				public:
					[MarshalAs(UnmanagedType::U4)]
					System::Int32 F_x8;
				public:
					System::Boolean F_x5;
				};
			public:
				literal System::Int32 F_x1=(System::Int32)0x00000000;
			public:
				literal System::String^ F_x2=nullptr;
			public:
				literal System::String^ F_x12=nullptr;
			public:
				literal System::Int32 F_x13=(System::Int32)0x00000001;
			public:
				literal System::Int32 F_x8=(System::Int32)0x00000002;
			public:
				literal System::Int32 F_x5=(System::Int32)0x00000001;
			public:
				literal System::Int32 F_x9=(System::Int32)0x00000002;
			public:
				literal System::Int32 F_x4=(System::Int32)0x00002EE0;
			public:
				literal System::Int32 F_x15=(System::Int32)0x00002EEF;
			public:
				[DllImport("winhttp.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean WinHttpCheckPlatform();
			public:
				[DllImport("winhttp.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::IntPtr WinHttpOpen(System::String^ A_0,System::Int32 A_1,System::String^ A_2,System::String^ A_3,System::Int32 A_4);
			public:
				[DllImport("winhttp.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean WinHttpGetProxyForUrl(System::IntPtr A_0,System::String^ A_1,Root::T_x4::T_x1::T_x1_11::T_x2% A_2,Root::T_x4::T_x1::T_x1_11::T_x12% A_3);
			public:
				[DllImport("winhttp.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean WinHttpGetIEProxyConfigForCurrentUser(Root::T_x4::T_x1::T_x1_11::T_x1% A_0);
			public:
				[DllImport("winhttp.dll",CharSet=CharSet::Unicode,SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean WinHttpCloseHandle(System::IntPtr A_0);
			public:
				[DllImport("wininet.dll",SetLastError=true,CallingConvention=CallingConvention::Winapi)]
				[PreserveSig]
				static System::Boolean InternetCheckConnection(System::String^ A_0,System::Int32 A_1,System::Int32 A_2);
			public:
				T_x1_11();
			};
		internal:
			[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
			ref class T_x2  : System::Net::IWebProxy
			{
			private:
				System::Net::ICredentials^ F_x1;
			public:
				virtual System::Uri^ M_x2(System::Uri^ A_0) sealed  = System::Net::IWebProxy::GetProxy;
				//System::Net::IWebProxy^::GetProxy by M_x2
			public:
				virtual System::Boolean M_x1(System::Uri^ A_0) sealed  = System::Net::IWebProxy::IsBypassed;
				//System::Net::IWebProxy^::IsBypassed by M_x1
			public:
				virtual System::Net::ICredentials^ M_x1() sealed  = System::Net::IWebProxy::Credentials::get;
				//System::Net::IWebProxy^::get_Credentials by M_x1
			public:
				virtual void M_x1(System::Net::ICredentials^ A_0) sealed  = System::Net::IWebProxy::Credentials::set;
				//System::Net::IWebProxy^::set_Credentials by M_x1
			public:
				T_x2();
			};
		private:
			System::DateTime F_x1;
		private:
			System::TimeSpan F_x2;
		private:
			System::Boolean F_x12;
		private:
			System::Uri^ F_x13;
		private:
			System::Net::IWebProxy^ F_x8;
		private:
			T_x1(System::Boolean A_0,System::Uri^ A_1,System::Net::IWebProxy^ A_2);
		public:
			virtual System::Uri^ M_x12(System::Uri^ A_0) sealed  = System::Net::IWebProxy::GetProxy;
			//System::Net::IWebProxy^::GetProxy by M_x12
		public:
			virtual System::Boolean M_x2(System::Uri^ A_0) sealed  = System::Net::IWebProxy::IsBypassed;
			//System::Net::IWebProxy^::IsBypassed by M_x2
		public:
			virtual System::Net::ICredentials^ M_x13() sealed  = System::Net::IWebProxy::Credentials::get;
			//System::Net::IWebProxy^::get_Credentials by M_x13
		public:
			virtual void M_x1(System::Net::ICredentials^ A_0) sealed  = System::Net::IWebProxy::Credentials::set;
			//System::Net::IWebProxy^::set_Credentials by M_x1
		public:
			static System::Net::IWebProxy^ M_x12();
		private:
			void M_x2();
		private:
			System::Uri^ M_x1(System::Uri^ A_0);
		private:
			static System::Boolean M_x1();
		private:
			static System::Uri^ M_x12(System::String^ A_0);
		private:
			static System::String^ M_x2(System::String^ A_0);
		private:
			static System::Boolean M_x1(System::String^ A_0);
		};
	private:
		static System::String^ F_x1;
	private:
		static System::String^ F_x2;
	private:
		static System::String^ F_x12;
	private:
		static System::String^ F_x13;
	public:
		static System::Net::WebResponse^ M_x2(System::String^ A_0);
	public:
		static void M_x1(System::String^ A_0,array<System::Byte>^ A_1);
	public:
		static void M_x1(System::String^ A_0,System::String^ A_1,System::String^ A_2,System::String^ A_3);
	private:
		static System::Net::WebRequest^ M_x1(System::String^ A_0);
	private:
		static System::Net::IWebProxy^ M_x1();
	public:
		T_x4();
	};
}
