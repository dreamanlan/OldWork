/*****************************************************************************

    SDLog.h

******************************************************************************/

#ifndef _SLK_SLKLOG_H
#define _SLK_SLKLOG_H

namespace DataScript
{
	class SDLog
	{
	public:
		void trace ( char* message );
		void trace_depth ( char* message, int depth );
		void trace_production ( int production_number );
		void trace_action ( int action_number );
	};
}

#endif

