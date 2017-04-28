#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x132  : Reflector::ITranslatorManager
	{
	private:
		Reflector::ITranslator^ F_x1;
	public:
		virtual Reflector::ITranslator^ M_x1() sealed  = Reflector::ITranslatorManager::Disassembler::get;
		//Reflector::ITranslatorManager^::get_Disassembler by M_x1
	public:
		virtual void M_x1(Reflector::ITranslator^ A_0) sealed  = Reflector::ITranslatorManager::Disassembler::set;
		//Reflector::ITranslatorManager^::set_Disassembler by M_x1
	public:
		T_x132();
	};
}
