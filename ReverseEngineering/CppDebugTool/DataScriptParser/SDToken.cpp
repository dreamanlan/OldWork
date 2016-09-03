/*****************************************************************************

SDToken.cpp

******************************************************************************/
#include <sstream>
#include "SDLog.h"
#include "SDParse.h"

namespace DataScript
{
	static inline bool myisdigit(char c,bool isHex)
	{
		bool ret=false;
		if(true==isHex)
		{
			if((c>='0' && c<='9') || (c>='a' && c<='f') || (c>='A' && c<='F'))
				ret=true;
			else
				ret=false;
		}
		else
		{
			if((c>='0' && c<='9'))
				ret=true;
			else
				ret=false;
		}
		return ret;
	}

	void SDToken::getOperatorToken(void)
	{
		std::stringstream token;
		switch(*mIterator)
		{
		case '+':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='+' || *mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
			}
			break;
		case '-':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='-' || *mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
			}
			break;
		case '>':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
				else if(*mIterator=='>')
				{
					token<<(*mIterator);
					++mIterator;				
					if(*mIterator=='>')
					{
						token<<(*mIterator);
						++mIterator;				
					}
					if(*mIterator=='=')
					{
						token<<(*mIterator);
						++mIterator;				
					}
				}
			}
			break;
		case '<':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
				else if(*mIterator=='<')
				{
					token<<(*mIterator);
					++mIterator;
					if(*mIterator=='=')
					{
						token<<(*mIterator);
						++mIterator;				
					}
				}
			}
			break;
		case '&':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
				else if(*mIterator=='&')
				{
					token<<(*mIterator);
					++mIterator;
					if(*mIterator=='=')
					{
						token<<(*mIterator);
						++mIterator;
					}
				}
			}
			break;
		case '|':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
				else if(*mIterator=='|')
				{
					token<<(*mIterator);
					++mIterator;
					if(*mIterator=='=')
					{
						token<<(*mIterator);
						++mIterator;
					}
				}
			}
			break;			
		case '=':
		case '!':
		case '^':
		case '*':
		case '/':
		case '%':
			{
				token<<(*mIterator);
				++mIterator;
				if(*mIterator=='=')
				{
					token<<(*mIterator);
					++mIterator;				
				}
			}
			break;
		default:
			{
				token<<(*mIterator);
				++mIterator;
			}
			break;
		}
		mCurToken=token.str();
	}

	short SDToken::getOperatorTokenValue(void)const
	{
		const char* pOperator=mCurToken.c_str();
		const char* pLastToken=mLastToken.c_str();
		bool lastIsOperator=true;
		if(pLastToken && pLastToken[0])
		{
			if(isDelimiter(pLastToken[0]))
			{
				lastIsOperator=true;
			}
			else
			{
				lastIsOperator=isOperator(pLastToken[0]);
			}
		}
		short val=OP_TOKEN_0_;
		if(pOperator && pOperator[0])
		{
			if((pOperator[0]=='?' || pOperator[0]==':') && pOperator[1]=='\0')
			{
				val=OP_TOKEN_1_;
			}
			else if(pOperator[0]=='|' && pOperator[1]=='|')
			{
				val=OP_TOKEN_2_;
			}
			else if(pOperator[0]=='&' && pOperator[1]=='&')
			{
				val=OP_TOKEN_3_;
			}
			else if(pOperator[0]=='|' && pOperator[1]=='\0')
			{
				val=OP_TOKEN_4_;
			}
			else if(pOperator[0]=='^' && pOperator[1]=='\0')
			{
				val=OP_TOKEN_5_;
			}
			else if(pOperator[0]=='&' && pOperator[1]=='\0')
			{
				val=OP_TOKEN_6_;
			}
			else if((pOperator[0]=='=' || pOperator[0]=='!') && pOperator[1]=='=')
			{
				val=OP_TOKEN_7_;
			}
			else if((pOperator[0]=='<' || pOperator[0]=='>') && (pOperator[1]=='=' || pOperator[1]=='\0'))
			{
				val=OP_TOKEN_8_;
			}
			else if((pOperator[0]=='<' && pOperator[1]=='<') || (pOperator[0]=='>' && pOperator[1]=='>') || (pOperator[0]=='>' && pOperator[1]=='>' && pOperator[2]=='>'))
			{
				val=OP_TOKEN_9_;
			}
			else if((pOperator[0]=='+' || pOperator[0]=='-') && pOperator[1]=='\0')
			{
				if(lastIsOperator)
					val=OP_TOKEN_12_;
				else
					val=OP_TOKEN_10_;
			}
			else if((pOperator[0]=='*' || pOperator[0]=='/' || pOperator[0]=='%') && pOperator[1]=='\0')
			{
				val=OP_TOKEN_11_;
			}
			else if((pOperator[0]=='+' && pOperator[1]=='+') || (pOperator[0]=='-' && pOperator[1]=='-') || (pOperator[0]=='~' && pOperator[1]=='\0') || (pOperator[0]=='!' && pOperator[1]=='\0'))
			{
				val=OP_TOKEN_12_;
			}
			else
			{
				val=OP_TOKEN_0_;
			}
		}
		return val;
	}

	bool SDToken::isWhiteSpace(char c) const
	{
		if(0==c)
			return false;
		else
			return std::string::npos!=mWhiteSpaces.find(c);
	}

	bool SDToken::isOperator(char c) const
	{
		if(0==c)
			return false;
		else
			return std::string::npos!=mOperators.find(c);
	}

	bool SDToken::isDelimiter(char c) const
	{
		if(0==c)
			return false;
		else
			return std::string::npos!=mDelimiters.find(c);
	}

	short SDToken::get(void)
	{
		mLastToken=mCurToken;
		mLastLineNumber=mLineNumber;
		std::stringstream token;
		bool isSkip=true;
		//跳过注释与白空格
		for(;isSkip && mIterator!=mInput.end();)
		{
			isSkip=false;
			for(;mIterator!=mInput.end() && mWhiteSpaces.find(*mIterator)!=std::string::npos;++mIterator)
			{
				if(*mIterator=='\n')++mLineNumber;
				isSkip=true;
			}
			//#引导的单行注释
			if(mIterator!=mInput.end() && *mIterator=='#')
			{
				for(;mIterator!=mInput.end() && *mIterator!='\n';++mIterator);
				isSkip=true;
			}
			//C++风格的单行注释与多行注释
			if(mIterator!=mInput.end() && *mIterator=='/' && mIterator+1!=mInput.end() && (*(mIterator+1)=='/' || *(mIterator+1)=='*'))
			{
				++mIterator;
				if(mIterator!=mInput.end() && *mIterator=='/')
				{
					++mIterator;
					for(;mIterator!=mInput.end() && *mIterator!='\n';++mIterator);
					isSkip=true;
				}
				else if(mIterator!=mInput.end() && *mIterator=='*')
				{
					++mIterator;
					for(;mIterator!=mInput.end();++mIterator)
					{
						if(*mIterator=='\n')++mLineNumber;
						if(*mIterator=='*' && mIterator+1!=mInput.end() && *(mIterator+1)=='/')
						{
							++mIterator;
							++mIterator;
							break;
						}
					}
					isSkip=true;
				}
			}
		}	
		if(mIterator==mInput.end())//输入结束
		{
			mCurToken="<<eof>>";
			return END_OF_SLK_INPUT_;
		}		
		else if(*mIterator=='{' && mIterator+1!=mInput.end() && *(mIterator+1)==':')
		{
			++mIterator;
			++mIterator;
			int line=mLineNumber;
			//搜索脚本结束 :}
			for(;mIterator!=mInput.end();)
			{
				while(mIterator!=mInput.end() && *mIterator!=':')
				{
					if(*mIterator=='\n')++mLineNumber;
					token<<*mIterator;
					++mIterator;
				}
				if(mIterator==mInput.end())
					break;
				std::string::const_iterator tempIt=mIterator+1;
				if(*tempIt=='}')
				{
					++mIterator;
					++mIterator;
					break;
				}
				else
				{
					token<<*mIterator;
					++mIterator;
				}
			}
			if(mIterator==mInput.end())
			{
				::printf("[行 %d ]：外部脚本无法结束！\n",line);
			}
			mCurToken=token.str();			
			return SCRIPT_CONTENT_;
		}
		else if(mOperators.find(*mIterator)!=std::string::npos)
		{
			getOperatorToken();
			return getOperatorTokenValue();
		}
		else if(*mIterator=='.' && (mIterator+1)!=mInput.end() && 0==myisdigit(*(mIterator+1),false))
		{
			char c=*mIterator;
			++mIterator;

			token<<c;
			mCurToken=token.str();
			return DOT_;
		}
		else if(mDelimiters.find(*mIterator)!=std::string::npos)//分隔符
		{
			char c=*mIterator;
			++mIterator;

			token<<c;
			mCurToken=token.str();
			switch(c)
			{
			case '{':
				return LBRACE_;
			case '}':
				return RBRACE_;
			case '[':
				return LBRACK_;
			case ']':
				return RBRACK_;
			case '(':
				return LPAREN_;
			case ')':
				return RPAREN_;
			case ',':
				return COMMA_;
			case ';':
				return SEMI_;
			default:
				return c;
			}
		}
		else//关键字、标识符或常数
		{
			if(*mIterator=='"' || *mIterator=='\'')//引号括起来的名称或关键字
			{
				int line=mLineNumber;
				char c=*mIterator;
				for(++mIterator;mIterator!=mInput.end() && *mIterator!=c;++mIterator)
				{
					if(*mIterator=='\n')++mLineNumber;
					if(*mIterator=='\\')
					{					
						token<<*mIterator;
						++mIterator;
						if(mIterator==mInput.end())
							break;
					}
					token<<*mIterator;
				}
				if(mIterator!=mInput.end())
				{
					++mIterator;
				}
				else
				{
					::printf("[行 %d ]：字符串无法结束！\n",line);
				}
				mCurToken=token.str();
				return STRING_;
			}
			else
			{
				bool isNum=true;
				bool isHex=false;
				if(*mIterator=='0' && mIterator+1!=mInput.end() && *(mIterator+1)=='x')
				{
					isHex=true;
					token<<*mIterator;
					++mIterator;
					token<<*mIterator;
					++mIterator;
				}
				for(;mIterator!=mInput.end() && (mDelimiters.find(*mIterator)==std::string::npos && mWhiteSpaces.find(*mIterator)==std::string::npos && mOperators.find(*mIterator)==std::string::npos);++mIterator)
				{
					if(*mIterator=='#')
						break;
					else if(*mIterator=='/')
					{
						std::string::const_iterator next=mIterator+1;
						if(next!=mInput.end() && (*next=='/' || *next=='*'))
						{
							break;
						}
					}
					else if(*mIterator=='.')
					{
						if(!isNum)
						{
							break;
						}
						else
						{
							std::string::const_iterator next=mIterator+1;
							if(next!=mInput.end() && 0==myisdigit(*next,isHex))
							{
								break;
							}
						}
					}
					else if(0==isdigit(*mIterator))
					{
						isNum=false;
					}
					token<<*mIterator;
				}
				mCurToken=token.str();	
				Keywords::const_iterator it=mKeywords.find(mCurToken);
				if(it!=mKeywords.end())
					return it->second;
				else
				{				
					if(isNum)
						return NUMBER_;
					else
						return IDENTIFIER_;
				}
			}
		}
	}

	short SDToken::peek(int level)
	{
		short     token = 0;

		printf ( "peek_token is not called in an LL(1) grammar\n" );

		return  token;
	}

	SDToken::SDToken(const char* input,SDLog &log)
		: mLog(&log),mInput(input)
	{
		mIterator=mInput.begin();
		mWhiteSpaces=" \t\r\n";
		mDelimiters="{}()[],;";
		mOperators="~`!%^&*-+=|:<>?/";

		mLineNumber=1;
		mLastLineNumber=1;

		mKeywords["true"]=TRUE_;
		mKeywords["false"]=FALSE_;
	}
}