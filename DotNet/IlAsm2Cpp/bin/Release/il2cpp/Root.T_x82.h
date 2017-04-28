#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x82  : Root::T_x66
	{
		ref class T_x1;
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : System::Windows::Forms::ListViewItem
		{
		public:
			Reflector::CodeModel::IAssembly^ M_x1();
		public:
			void M_x1(Reflector::CodeModel::IAssembly^ A_0);
		private:
			System::String^ M_x1(array<System::Byte>^ A_0);
		public:
			T_x1();
		};
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x1;
	private:
		System::Windows::Forms::ListView^ F_x2;
	public:
		T_x82(Reflector::CodeModel::IAssemblyManager^ A_0);
	public:
		System::Collections::IEnumerable^ M_x2();
	public:
		void M_x1();
	};
}
