/**************************************************************************

    SDToken.h

**************************************************************************/

#ifndef _SLK_SLKTOKEN_H
#define _SLK_SLKTOKEN_H
#include <string>
#include <map>
#include <set>

namespace DataScript
{
	class SDLog;
	class SDToken
	{
	public:
		typedef std::map<std::string,short> Keywords;
	public:
		SDToken(const char* input,SDLog &log);
		short get(void);
		short peek(int level);
		const std::string& getCurToken(void) const
		{
			return mCurToken;
		}
		const std::string& getLastToken(void) const
		{
			return mLastToken;
		}
		int getLineNumber(void) const
		{
			return mLineNumber;
		}
		int getLastLineNumber(void) const
		{
			return mLastLineNumber;
		}
	private:
		void getOperatorToken(void);
		short getOperatorTokenValue(void)const;
		bool isWhiteSpace(char c) const;
		bool isDelimiter(char c) const;
		bool isOperator(char c) const;
	private:
		std::string mInput;
		std::string::const_iterator mIterator;
		std::string mCurToken;
		std::string mLastToken;

		int mLineNumber;
		int mLastLineNumber;

		std::string mWhiteSpaces;
		std::string mDelimiters;
		std::string mOperators;
		Keywords mKeywords;

		SDLog* mLog;
	};
}

#endif

