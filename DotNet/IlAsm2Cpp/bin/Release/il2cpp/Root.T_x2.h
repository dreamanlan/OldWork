#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x2  : Reflector::CodeModel::IModule
	{
		ref class T_x1;
	internal:
		enum class T_x2_13
		{
			F_x1=(System::Int32)0x00000000
			,F_x2=(System::Int32)0x00000001
			,F_x12=(System::Int32)0x00000002
			,F_x13=(System::Int32)0x00000003
			,F_x8=(System::Int32)0x00000004
			,F_x5=(System::Int32)0x00000005
			,F_x9=(System::Int32)0x00000006
			,F_x4=(System::Int32)0x00000007
			,F_x15=(System::Int32)0x00000008
			,F_x11=(System::Int32)0x00000009
		};
	internal:
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1
		{
		private:
			System::String^ F_x1;
		private:
			System::Boolean F_x2;
		private:
			array<System::Byte>^ F_x12;
		public:
			System::String^ M_x12();
		public:
			void M_x1(System::String^ A_0);
		public:
			System::Boolean M_x1();
		public:
			void M_x1(System::Boolean A_0);
		public:
			array<System::Byte>^ M_x2();
		public:
			void M_x1(array<System::Byte>^ A_0);
		public:
			T_x1();
		};
	private:
		System::String^ F_x1;
	private:
		Root::T_x136^ F_x2;
	private:
		Reflector::CodeModel::IAssemblyManager^ F_x12;
	private:
		Reflector::CodeModel::HashAlgorithm F_x13;
	private:
		Reflector::CodeModel::IAssemblyReference^ F_x8;
	private:
		array<Reflector::CodeModel::ITypeDeclaration^>^ F_x5;
	private:
		array<Reflector::CodeModel::ICustomAttribute^>^ F_x9;
	private:
		array<System::Object^>^ F_x4;
	private:
		array<array<System::Byte>^>^ F_x15;
	private:
		Reflector::CodeModel::AssemblyType F_x11;
	private:
		System::String^ F_x10;
	private:
		System::UInt16 F_x7;
	private:
		System::Guid F_x16;
	private:
		System::Guid F_x6;
	private:
		System::Guid F_x14;
	private:
		System::String^ F_x18;
	private:
		Reflector::CodeModel::IAssemblyReferenceCollection^ F_x19;
	private:
		Reflector::CodeModel::IModuleReferenceCollection^ F_x17;
	private:
		Reflector::CodeModel::IUnmanagedResourceCollection^ F_x56;
	private:
		array<Root::T_x2::T_x1^>^ F_x48;
	private:
		array<Reflector::CodeModel::IResource^>^ F_x55;
	private:
		Reflector::CodeModel::IAssemblyReference^ F_x57;
	private:
		array<System::Int32>^ F_x81;
	private:
		array<System::Int32>^ F_x33;
	private:
		array<System::Int32>^ F_x49;
	private:
		array<System::Int32>^ F_x158;
	private:
		array<System::Int32>^ F_x26;
	private:
		array<Root::T_x174^>^ F_x176;
	private:
		array<Root::T_x161^>^ F_x134;
	private:
		array<Root::T_x9^>^ F_x148;
	private:
		array<Root::T_x165^>^ F_x173;
	private:
		array<Root::T_x150^>^ F_x113;
	private:
		array<Root::T_x175^>^ F_x3;
	private:
		array<Reflector::CodeModel::IMemberReference^>^ F_x47;
	private:
		array<System::Object^>^ F_x43;
	private:
		System::Collections::IDictionary^ F_x35;
	private:
		System::Collections::IDictionary^ F_x93;
	private:
		array<Root::T_x152^>^ F_x139;
	private:
		array<Reflector::CodeModel::ITypeReference^>^ F_x149;
	private:
		array<Reflector::CodeModel::ITypeReference^>^ F_x172;
	private:
		Reflector::CodeModel::IMethodReturnType^ F_x96;
	private:
		array<System::Int32>^ F_x51;
	private:
		array<System::Int32>^ F_x87;
	private:
		array<System::Int32>^ F_x146;
	private:
		array<System::Int32>^ F_x45;
	private:
		Reflector::CodeModel::IMethodReference^ F_x67;
	private:
		Reflector::CodeModel::IMethodReference^ F_x145;
	private:
		Reflector::CodeModel::IMethodReference^ F_x114;
	private:
		Reflector::CodeModel::IMethodReference^ F_x165;
	private:
		Reflector::CodeModel::IMethodReference^ F_x60;
	private:
		Reflector::CodeModel::IMethodReference^ F_x108;
	private:
		Reflector::CodeModel::IMethodReference^ F_x75;
	private:
		Reflector::CodeModel::IMethodReference^ F_x84;
	private:
		Reflector::CodeModel::IMethodReference^ F_x22;
	private:
		Reflector::CodeModel::IMethodReference^ F_x177;
	private:
		Reflector::CodeModel::IMethodReference^ F_x116;
	private:
		Reflector::CodeModel::IMethodReference^ F_x147;
	private:
		Reflector::CodeModel::IMethodReference^ F_x181;
	private:
		System::Boolean F_x183;
	private:
		System::Boolean F_x137;
	private:
		System::Boolean F_x95;
	private:
		Root::T_x167^ F_x121;
	private:
		System::UInt32 F_x182;
	private:
		System::UInt32 F_x54;
	private:
		System::Int32 F_x42;
	private:
		System::Int32 F_x136;
	private:
		System::Int32 F_x138;
	private:
		System::Int32 F_x141;
	private:
		array<System::Byte>^ F_x64;
	private:
		Root::T_x139^ F_x122;
	private:
		Root::T_x139^ F_x167;
	private:
		Root::T_x139^ F_x62;
	private:
		Root::T_x139^ F_x58;
	private:
		Root::T_x139^ F_x28;
	private:
		Root::T_x139^ F_x125;
	private:
		Root::T_x139^ F_x187;
	private:
		Root::T_x172^ F_x72;
	private:
		System::Boolean F_x20;
	public:
		T_x2(Reflector::CodeModel::IAssemblyManager^ A_0,Root::T_x136^ A_1,System::String^ A_2);
	public:
		virtual System::Boolean M_x2(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x2
	public:
		virtual System::Int32 M_x6()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x6
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::String^ M_x56()  = System::Object::ToString;
		//System::Object^::ToString by M_x56
	internal:
		Reflector::CodeModel::HashAlgorithm M_x11();
	internal:
		Reflector::CodeModel::IAssemblyReference^ M_x13();
	internal:
		System::Boolean M_x57();
	internal:
		System::String^ M_x12(System::Object^ A_0);
	internal:
		System::Int32 M_x16(System::Int32 A_0);
	public:
		virtual Reflector::CodeModel::IModule^ Resolve() sealed;
	public:
		virtual System::String^ M_x55() sealed  = Reflector::CodeModel::IModule::Location::get;
		//Reflector::CodeModel::IModule^::get_Location by M_x55
	public:
		virtual void M_x12(System::String^ A_0) sealed  = Reflector::CodeModel::IModule::Location::set;
		//Reflector::CodeModel::IModule^::set_Location by M_x12
	public:
		virtual Reflector::CodeModel::IAssembly^ M_x10() sealed  = Reflector::CodeModel::IModule::Assembly::get;
		//Reflector::CodeModel::IModule^::get_Assembly by M_x10
	public:
		virtual void M_x1(Reflector::CodeModel::IAssembly^ A_0) sealed  = Reflector::CodeModel::IModule::Assembly::set;
		//Reflector::CodeModel::IModule^::set_Assembly by M_x1
	public:
		virtual System::Guid M_x15() sealed  = Reflector::CodeModel::IModule::Version::get;
		//Reflector::CodeModel::IModule^::get_Version by M_x15
	public:
		virtual void M_x1(System::Guid A_0) sealed  = Reflector::CodeModel::IModule::Version::set;
		//Reflector::CodeModel::IModule^::set_Version by M_x1
	public:
		virtual System::String^ M_x81() sealed  = Reflector::CodeModel::IModule::TargetRuntimeVersion::get;
		//Reflector::CodeModel::IModule^::get_TargetRuntimeVersion by M_x81
	public:
		virtual void M_x13(System::String^ A_0) sealed  = Reflector::CodeModel::IModule::TargetRuntimeVersion::set;
		//Reflector::CodeModel::IModule^::set_TargetRuntimeVersion by M_x13
	public:
		virtual Reflector::CodeModel::IUnmanagedResourceCollection^ M_x19() sealed  = Reflector::CodeModel::IModule::UnmanagedResources::get;
		//Reflector::CodeModel::IModule^::get_UnmanagedResources by M_x19
	public:
		virtual Reflector::CodeModel::IAssemblyReferenceCollection^ M_x16() sealed  = Reflector::CodeModel::IModule::AssemblyReferences::get;
		//Reflector::CodeModel::IModule^::get_AssemblyReferences by M_x16
	public:
		virtual Reflector::CodeModel::IModuleReferenceCollection^ M_x4() sealed  = Reflector::CodeModel::IModule::ModuleReferences::get;
		//Reflector::CodeModel::IModule^::get_ModuleReferences by M_x4
	public:
		virtual Reflector::CodeModel::ITypeDeclarationCollection^ M_x14() sealed  = Reflector::CodeModel::IModule::Types::get;
		//Reflector::CodeModel::IModule^::get_Types by M_x14
	private:
		void M_x1(Reflector::CodeModel::ICustomAttribute^ A_0);
	internal:
		Reflector::CodeModel::AssemblyType M_x18();
	internal:
		void M_x1(Reflector::CodeModel::AssemblyType A_0);
	internal:
		array<System::String^>^ M_x2();
	internal:
		array<Reflector::CodeModel::IResource^>^ M_x5();
	private:
		void M_x2(Root::T_x139^ A_0);
	internal:
		void M_x17();
	internal:
		void M_x8();
	internal:
		void M_x9();
	internal:
		void M_x12();
	internal:
		Reflector::CodeModel::ITypeReference^ M_x13(System::String^ A_0,System::String^ A_1);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::ITypeReference^ A_0,System::String^ A_1);
	private:
		Reflector::CodeModel::IFieldReference^ M_x2(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1,System::String^ A_2);
	private:
		Reflector::CodeModel::IPropertyReference^ M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1,System::String^ A_2);
	private:
		Reflector::CodeModel::IMethodReference^ M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::IType^ A_1,array<Reflector::CodeModel::IType^>^ A_2);
	private:
		Root::T_x143^ M_x2(System::Int32 A_0,System::Int32 A_1);
	private:
		Reflector::CodeModel::ICustomAttribute^ M_x10(System::Int32 A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IExpression^ A_0,Reflector::CodeModel::IExpression^ A_1);
	private:
		Reflector::CodeModel::ICustomAttribute^ M_x1(System::UInt32 A_0,System::UInt32 A_1,System::UInt16 A_2);
	private:
		Reflector::CodeModel::IExpression^ M_x2(System::Int16 A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x11(System::Int32 A_0);
	private:
		Root::T_x143^ M_x1(Reflector::CodeModel::IMemberDeclaration^ A_0,System::UInt16 A_1,System::Int32 A_2,System::Int32 A_3,System::Boolean A_4);
	private:
		Reflector::CodeModel::IExpression^ M_x15(System::Int32 A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x4(System::Int32 A_0);
	private:
		Root::T_x143^ M_x9(System::Int32 A_0);
	private:
		System::Collections::ICollection^ M_x1(Root::T_x139^ A_0);
	private:
		Reflector::CodeModel::IExpression^ M_x1(System::Int16 A_0);
	private:
		array<Root::T_x143^>^ M_x1(System::UInt16 A_0,System::Int32 A_1);
	private:
		Reflector::CodeModel::IExpression^ M_x1(System::UInt16 A_0);
	private:
		Root::T_x143^ M_x1(Reflector::CodeModel::IExpression^ A_0,Root::T_x8^ A_1);
	private:
		System::Collections::ICollection^ M_x1(Reflector::CodeModel::IMethodReference^ A_0,Root::T_x8^ A_1,System::String^ A_2);
	private:
		Reflector::CodeModel::IMethodReference^ M_x12(System::String^ A_0,System::String^ A_1);
	internal:
		Reflector::CodeModel::IType^ M_x5(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IMethodReference^ M_x12(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IFieldReference^ M_x5(System::Int32 A_0);
	private:
		Reflector::CodeModel::IType^ M_x2(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IAssemblyReference^ M_x1();
	private:
		Reflector::CodeModel::ITypeReference^ M_x1(Root::T_x146 A_0);
	private:
		Reflector::CodeModel::ITypeReference^ M_x1(Root::T_x2::T_x2_13 A_0);
	private:
		System::Boolean M_x8(System::Int32 A_0);
	private:
		System::Object^ M_x13(System::Int32 A_0);
	internal:
		System::Object^ M_x8(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	internal:
		Reflector::CodeModel::IMemberReference^ M_x13(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IMethodReference^ M_x1(Reflector::CodeModel::IType^ A_0,System::Int32 A_1,System::String^ A_2,System::Int32 A_3,Reflector::CodeModel::IGenericArgumentProvider^ A_4,Reflector::CodeModel::IGenericArgumentProvider^ A_5);
	private:
		Reflector::CodeModel::IMethodReference^ M_x1(System::Int32 A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		System::Boolean M_x12(System::Int32 A_0);
	private:
		Root::T_x139^ M_x2(System::Int32 A_0);
	private:
		System::Int32 M_x1(Root::T_x139^ A_0,array<System::Int32>^ A_1);
	internal:
		Reflector::CodeModel::IType^ M_x5(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	internal:
		Reflector::CodeModel::IType^ M_x1(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2,System::Boolean% A_3);
	private:
		array<Reflector::CodeModel::IType^>^ M_x8(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IType^ M_x13(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	internal:
		Reflector::CodeModel::IType^ M_x13(Root::T_x139^ A_0);
	private:
		Reflector::CodeModel::IType^ M_x2(System::String^ A_0);
	private:
		Reflector::CodeModel::IType^ M_x2(System::String^ A_0,System::String^ A_1);
	private:
		Reflector::CodeModel::IType^ M_x1(System::String^ A_0,System::String^ A_1);
	private:
		Reflector::CodeModel::IType^ M_x1(System::String^ A_0,Reflector::CodeModel::IType^ A_1);
	private:
		Reflector::CodeModel::IAssemblyReference^ M_x1(System::String^ A_0);
	private:
		System::Int32 M_x1(System::String^ A_0,System::Char A_1);
	private:
		Reflector::CodeModel::IType^ M_x12(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::IType^ M_x2(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		Reflector::CodeModel::ITypeReference^ M_x1(Root::T_x139^ A_0,Reflector::CodeModel::IGenericArgumentProvider^ A_1,Reflector::CodeModel::IGenericArgumentProvider^ A_2);
	private:
		System::Int32 M_x1(System::Int32 A_0);
	private:
		System::Boolean M_x1(System::Int32 A_0,System::Int32 A_1);
	private:
		void M_x2(System::IO::Stream^ A_0);
	private:
		void M_x1(System::IO::Stream^ A_0);
	internal:
		Reflector::CodeModel::IMethodDeclaration^ M_x48();
	internal:
		System::String^ M_x17(System::Int32 A_0);
	internal:
		array<System::Byte>^ M_x18(System::Int32 A_0);
	internal:
		Root::T_x139^ M_x14(System::Int32 A_0);
	internal:
		void M_x12(Root::T_x139^ A_0);
	internal:
		System::Guid M_x19(System::Int32 A_0);
	internal:
		System::String^ M_x7(System::Int32 A_0);
	internal:
		Reflector::CodeModel::IMethodReturnType^ M_x7();
	internal:
		Reflector::CodeModel::IExpression^ M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0);
	internal:
		array<Reflector::CodeModel::ICustomAttribute^>^ M_x2(Reflector::CodeModel::IParameterDeclaration^ A_0);
	internal:
		array<Reflector::CodeModel::ICustomAttribute^>^ M_x6(System::Int32 A_0);
	private:
		void M_x1(Reflector::CodeModel::IParameterDeclaration^ A_0,Reflector::CodeModel::ICustomAttribute^ A_1);
	private:
		static System::String^ M_x1(array<System::Byte>^ A_0);
	private:
		static Reflector::CodeModel::ILiteralExpression^ M_x1(System::Object^ A_0);
	private:
		static Reflector::CodeModel::INamedArgumentExpression^ M_x1(Reflector::CodeModel::IMemberReference^ A_0,Reflector::CodeModel::IExpression^ A_1);
	public:
		property virtual Reflector::CodeModel::ICustomAttributeCollection^ Attributes
		{
			virtual Reflector::CodeModel::ICustomAttributeCollection^ get() sealed;
		}
	public:
		property virtual Reflector::CodeModel::IModule^ Context
		{
			virtual Reflector::CodeModel::IModule^ get() sealed;
			virtual void set(Reflector::CodeModel::IModule^ value) sealed;
		}
	public:
		property virtual System::String^ Name
		{
			virtual System::String^ get() sealed;
			virtual void set(System::String^ value) sealed;
		}
	};
}
