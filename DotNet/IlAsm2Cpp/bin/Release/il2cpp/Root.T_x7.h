#pragma once

namespace Root
{
	public 
	interface class T_x7
	{
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x1(System::EventHandler^ A_0) abstract;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x2(System::EventHandler^ A_0) abstract;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x12(System::EventHandler^ A_0) abstract;
	public:
		[MethodImpl(MethodImplOptions::Synchronized)]
		virtual void M_x13(System::EventHandler^ A_0) abstract;
	public:
		virtual Root::T_x102^ M_x1() abstract;
	};
}
