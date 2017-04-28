#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x176
	{
		ref class T_x12;
		ref class T_x2;
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Collections::IComparer
		{
		public:
			virtual System::Int32 M_x2(System::Object^ A_0,System::Object^ A_1) sealed  = System::Collections::IComparer::Compare;
			//System::Collections::IComparer^::Compare by M_x2
		private:
			static System::Int32 M_x1(System::Object^ A_0,System::Object^ A_1);
		public:
			T_x1();
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x12
		{
		private:
			System::Int32 F_x1;
		private:
			System::UInt32 F_x2;
		private:
			System::UInt32 F_x12;
		private:
			System::UInt32 F_x13;
		private:
			System::UInt16 F_x8;
		private:
			System::UInt16 F_x5;
		private:
			System::Collections::Specialized::ListDictionary^ F_x9;
		public:
			T_x12(System::Int32 A_0);
		public:
			void M_x1(Root::T_x140^ A_0,System::UInt32 A_1);
		private:
			void M_x1(Root::T_x140^ A_0);
		private:
			array<Root::T_x176::T_x12^>^ M_x1(System::Int32 A_0);
		public:
			System::Int32 M_x1();
		public:
			void M_x1(Reflector::CodeModel::IUnmanagedResource^ A_0,System::Int32 A_1);
		private:
			Root::T_x176::T_x12^ M_x1(System::Object^ A_0);
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x2
		{
		private:
			System::Int32 F_x1;
		private:
			System::Int32 F_x2;
		private:
			System::Int32 F_x12;
		public:
			T_x2(System::Int32 A_0,System::Int32 A_1,System::Int32 A_2);
		public:
			void M_x1(Root::T_x140^ A_0,System::UInt32 A_1);
		};
	private:
		Reflector::CodeModel::IUnmanagedResourceCollection^ F_x1;
	public:
		T_x176(Reflector::CodeModel::IUnmanagedResourceCollection^ A_0);
	public:
		T_x176(Root::T_x139^ A_0,Root::T_x167^ A_1);
	public:
		Reflector::CodeModel::IUnmanagedResourceCollection^ M_x1();
	private:
		static System::Int32 M_x1(Root::T_x139^ A_0);
	private:
		static System::String^ M_x1(Root::T_x139^ A_0,System::Int32 A_1);
	private:
		static Reflector::CodeModel::IUnmanagedResource^ M_x1(Root::T_x139^ A_0,Root::T_x167^ A_1,System::Int32 A_2,System::Object^ A_3,System::Object^ A_4,System::Int32 A_5);
	public:
		void M_x1(System::IO::BinaryWriter^ A_0,System::UInt32 A_1);
	private:
		static void M_x1(Root::T_x140^ A_0,System::Int32 A_1);
	private:
		static void M_x1(Root::T_x140^ A_0,System::String^ A_1);
	};
}
