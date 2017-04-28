#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x149
	{
	internal:
		static System::Boolean M_x1(Reflector::CodeModel::IType^ A_0,Reflector::CodeModel::IType^ A_1);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeReference^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::ITypeReference^ A_0,Reflector::CodeModel::ITypeReference^ A_1);
	internal:
		static Reflector::CodeModel::ITypeDeclaration^ M_x2(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		static System::String^ M_x1(Reflector::CodeModel::ITypeReference^ A_0);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFieldReference^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IFieldReference^ A_0,Reflector::CodeModel::IFieldReference^ A_1);
	internal:
		static System::Boolean M_x12(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1);
	private:
		static System::Boolean M_x1(Reflector::CodeModel::IMethodSignature^ A_0,Reflector::CodeModel::IMethodSignature^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IMethodReference^ A_0,Reflector::CodeModel::IMethodReference^ A_1);
	internal:
		static System::String^ M_x1(Reflector::CodeModel::IMethodReference^ A_0);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IEventReference^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IEventReference^ A_0,Reflector::CodeModel::IEventReference^ A_1);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IPropertyReference^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IPropertyReference^ A_0,Reflector::CodeModel::IPropertyReference^ A_1);
	internal:
		static System::Boolean M_x2(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IAssemblyReference^ A_0,Reflector::CodeModel::IAssemblyReference^ A_1);
	internal:
		static System::String^ M_x1(Reflector::CodeModel::IAssemblyReference^ A_0);
	private:
		static System::String^ M_x1(array<System::Byte>^ A_0);
	internal:
		static System::Int32 M_x1(Reflector::CodeModel::IArrayType^ A_0,Reflector::CodeModel::IArrayType^ A_1);
	internal:
		static System::String^ M_x1(Reflector::CodeModel::IArrayType^ A_0);
	public:
		T_x149();
	};
}
