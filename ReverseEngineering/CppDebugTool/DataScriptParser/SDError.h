/**************************************************************************

    SDError.h

**************************************************************************/

#ifndef _SLK_SLKERROR_H
#define _SLK_SLKERROR_H

namespace DataScript
{
	class SDToken;
	class SDLog;
	class SDError
	{
	public:
		SDError ( SDToken& tokens,SDLog& log );
		short mismatch ( short symbol,short token );
		short no_entry ( short nonterminal,short token,int level );
		void input_left ( void );
		bool HasError(void) const
		{
			return mHasError;
		}
	private:
		SDToken* tokens;
		SDLog*   log;
		bool mHasError;
	};
}

#endif

