#pragma once

namespace Root
{
	[System::AttributeUsage((System::AttributeTargets)1)]
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class DotfuscatorAttribute sealed  : System::Attribute
	{
	private:
		System::String^ a;
	public:
		DotfuscatorAttribute(System::String^ a);
	public:
		property System::String^ A
		{
			System::String^ get();
		}
	};
}
