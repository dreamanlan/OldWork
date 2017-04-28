#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x116 sealed
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1 sealed
		{
		private:
			static System::Int32 F_x1;
		private:
			static System::Int32 F_x2;
		private:
			static T_x1();
		public:
			static System::Int32 M_x12();
		public:
			static System::Int32 M_x2();
		public:
			static System::Int32 M_x1();
		public:
			static System::Byte M_x1(System::Byte A_0,System::Byte A_1);
		public:
			T_x1();
		};
	private:
		T_x116();
	internal:
		static System::Int32 M_x12(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		static System::Int32 M_x12(Reflector::CodeModel::IMemberReference^ A_0);
	internal:
		static System::Int32 M_x2(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		static System::Int32 M_x2(Reflector::CodeModel::IMemberReference^ A_0);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IMemberReference^ A_0);
	private:
		static System::Boolean M_x1(Reflector::CodeModel::IFieldReference^ A_0);
	};
}
