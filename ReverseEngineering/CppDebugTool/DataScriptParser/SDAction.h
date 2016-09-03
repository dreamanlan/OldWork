/*************************************************************************

    SDAction.h

*************************************************************************/

#ifndef _SLK_SLKACTION_H
#define _SLK_SLKACTION_H

#include <stack>
#include <map>
#include <string>

#define STACKSIZE   511

#include "ScriptData.h"

namespace DataScript
{
	class SDToken;
	class SDLog;
	class SDAction
	{
	public:
		struct SemanticInfo
		{
			std::string token;
			int value;

			SemanticInfo(void):value(0)
			{}
			SemanticInfo(const std::string& _token,int _value):token(_token),value(_value)
			{}
		};
		typedef std::stack<StatementData> StatementSemanticStack;
		typedef std::stack<SemanticInfo> SemanticStack;
	public:

		SDAction(SDToken &scanner,SDLog &log,ScriptDatas* pScriptDatas)
		{
			mScanner=&scanner;
			mLog=&log;
			initialize_table();
			mScriptDatas=pScriptDatas;
		}

		#include "SDTable.h"

	private:
		void push(const std::string& s,int val);
		std::string pop(int* pVal=NULL);
		StatementData popStatement(void);
		StatementData& getCurStatement(void);
		FunctionExData& getLastFunction(void);
	private:
		SDToken*		mScanner;
		SDLog*			mLog;
		SemanticStack	mSemanticStack;
		StatementSemanticStack mStatementSemanticStack;

		ScriptDatas* mScriptDatas;
	private:
		static inline StatementData& nullStatementInfoRef(void)
		{
			static StatementData info;
			return info;
		}
	};
}

#endif

