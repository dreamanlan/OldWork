/*****************************************************************************

  SDLog.cpp
 
******************************************************************************/

#include <iostream>
#include "SDLog.h"
#include "SDString.h"

#define GET_PRODUCTION_NAME  SDGetProductionName
#define GET_SYMBOL_NAME    SDGetSymbolName

namespace DataScript
{
	void SDLog::trace ( char* message )
	{
		std::cout<<message;
	}

	void SDLog::trace_depth ( char* message, int depth )
	{
		int   i;

		for ( i = 0; i < depth; ++i ) {
			std::cout<<"  ";
		}
		std::cout<<message;
	}

	void SDLog::trace_production ( int production_number )
	{
		std::cout<<GET_PRODUCTION_NAME ( production_number );
		std::cout<<std::endl;
	}

	void SDLog::trace_action ( int action_number )
	{
		std::cout<<std::endl;
		std::cout<<GET_SYMBOL_NAME ( action_number );
		std::cout<<std::endl;
		std::cout<<std::endl;
	}
}