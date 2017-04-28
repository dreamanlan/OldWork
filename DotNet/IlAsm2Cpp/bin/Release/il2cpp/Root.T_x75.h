#pragma once

namespace Root
{
	public 
	interface class T_x75
	{
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(Root::T_x125^ A_0) abstract;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(Root::T_x125^ A_0) abstract;
	public:
		virtual Reflector::CodeModel::IFormatter^ M_x1(System::Boolean A_0) abstract;
	public:
		virtual Reflector::CodeModel::IFormatter^ M_x1() abstract;
	public:
		virtual void M_x1(Reflector::CodeModel::IFormatter^ A_0) abstract;
	public:
		virtual System::Boolean M_x2() abstract;
	public:
		virtual void M_x2(System::Boolean A_0) abstract;
	public:
		virtual System::Boolean Focus() abstract;
	public:
		property System::Drawing::Font^ Font
		{
			virtual System::Drawing::Font^ get() abstract;
			virtual void set(System::Drawing::Font^ value) abstract;
		}
	};
}
