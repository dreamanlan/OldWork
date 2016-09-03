#include <stdexcept>
#include <stdarg.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "ScriptData.h"
#include "SDParse.h"

namespace DataScript
{
	extern std::string getResourceAsString(const std::string& file,const std::string& group);

	std::string& getEmptyStringRef(void)
	{
		static std::string s_String;
		s_String = "";
		return s_String;
	}

	bool needQuote(const std::string& str)
	{
		static std::string escapeChars=" \t\r\n{}()[],;~`!%^&*-+=|:<>?/#\\";
		if(str.length()==0)
		{
			return true;
		}
		bool haveDot=false;
		bool notNum=false;
		for(std::string::const_iterator it=str.begin();it!=str.end();++it)
		{
			if(escapeChars.find(*it)!=std::string::npos)
			{
				return true;
			}
			if(*it=='.')
			{
				haveDot=true;
			}
			else if(!notNum && !isdigit(*it))
			{
				notNum=true;
			}
			if(haveDot && notNum)
			{
				return true;
			}
		}
		return false;
	}

	static std::string quoteString(const std::string& str,int m_Type)
	{
		switch(m_Type)
		{
		case FunctionData::STRING_TOKEN:
			{
				return "\""+str+"\"";
			}
			break;
		case FunctionData::NUM_TOKEN:
		case FunctionData::BOOL_TOKEN:
				return str;
			break;
		}
		if(needQuote(str))
		{
			return "\""+str+"\"";
		}
		return str;
	}

	static std::string unquoteString(const std::string& str)
	{
		std::string::size_type len=str.length();
		if(len>2 && (str[0]=='\"' && str[len-1]=='\"' || str[0]=='\'' && str[len-1]=='\'') && !needQuote(str))
		{
			return str.substr(1,len-2);
		}
		return str;
	}

	static std::string formatString(const char* format,...)
	{
		char str[1025];
		va_list argList;
		va_start( argList, format );
#ifdef __WINDOWS__
		int num=::_vscprintf(format,argList);
#else
		int num=::vsnprintf(str,0,format,argList);
#endif
		if(num>1024)
			return "";
		num=::vsnprintf(str,1024,format,argList);
		if(num<0)
			return "";
		str[num]=0;
		va_end( argList );
		return str;
	}

	static std::string getFunction(const FunctionData& data)
	{
		std::string lineNo="";//formatString("/* %d */",data.getLine());
		std::string line;
		if(data.nameIsFunction())
		{
			line=getFunction(data.getFunctionAsName());
		}
		else if(data.haveId())
		{
			line=quoteString(data.getId(),data.getType());
		}
		if(data.haveParam())
		{
			int paramClass=data.getParamClass();
			if(FunctionData::PARAM_CLASS_OPERATOR==paramClass)
			{
				switch(data.getParamNum())
				{
				case 1:
					return line+" "+data.getParam(0).toString();
				case 2:
					return data.getParam(0).toString()+" "+line+" "+data.getParam(1).toString();
				default:
					return line;
				}
			}
			else
			{				
				std::string lbracket;
				std::string rbracket;
				switch(paramClass)
				{
				case FunctionData::PARAM_CLASS_PARENTHESIS:
					lbracket="(";
					rbracket=")";
					break;
				case FunctionData::PARAM_CLASS_BRACKET:
					lbracket="[";
					rbracket="]";
					break;
				case FunctionData::PARAM_CLASS_PERIOD:
					lbracket=".";
					rbracket="";
					break;
				case FunctionData::PARAM_CLASS_PERIOD_PARENTHESIS:
					lbracket=".(";
					rbracket=")";
					break;
				case FunctionData::PARAM_CLASS_PERIOD_BRACKET:
					lbracket=".[";
					rbracket="]";
					break;
				case FunctionData::PARAM_CLASS_PERIOD_BRACE:
					lbracket=".{";
					rbracket="}";
					break;
				}
				std::string pstr=lbracket;
				std::string prestr="";			
				ParamDatas::const_iterator it=data.getParams().begin();
				for(;it!=data.getParams().end();++it)
				{
					if(FunctionData::PARAM_CLASS_PERIOD==paramClass)
						pstr+=prestr+unquoteString(it->toString());
					else
						pstr+=prestr+it->toString();
					prestr=",";
				}
				pstr+=rbracket;
				return lineNo+line+pstr;
			}
		}
		else
		{
			return lineNo+line;
		}
	}

	static void writeContent(std::ostream& stream,const std::string& line,int indent)
	{
		for(int i=0;i<indent;++i)
		{
			stream.put('\t');
		}
		stream.write(line.c_str(),(std::streamsize)line.length());
	}

	static void writeLine(std::ostream& stream,const std::string& line,int indent)
	{
		writeContent(stream,line,indent);
		stream.write("\r\n",2);
	}

	static void writeStatementData(std::ostream& stream,const StatementData& data,int indent);
	static void writeFunctionData(std::ostream& stream,const FunctionData& data,int indent)
	{
		writeLine(stream,data.toString(),indent);
	}

	static void writeFunctionExData(std::ostream& stream,const FunctionExData& data,int indent,bool isLastOfStatement)
	{
		std::string line=data.FunctionData::toString();
		if(data.haveStatement())
		{
			if(line.length()>0)
			{
				writeLine(stream,line,indent);
			}
			writeLine(stream,"{",indent);
			++indent;

			for(StatementDatas::const_iterator it=data.getStatements().begin();it!=data.getStatements().end();++it)
			{
				writeStatementData(stream,*it,indent);
			}

			--indent;
			if(isLastOfStatement)
				writeLine(stream,"};",indent);
			else
				writeLine(stream,"}",indent);
		}
		else if(data.haveExternScript())
		{
			if(line.length()>0)
			{
				writeLine(stream,line,indent);
			}
			writeLine(stream,"{:",indent);
			++indent;

			for(int i=0;i<indent;++i)
			{
				stream.put('\t');
			}
			stream.write(data.getScript().c_str(),(std::streamsize)data.getScript().length());
			stream.write("\r\n",2);

			--indent;
			if(isLastOfStatement)
				writeLine(stream,":};",indent);
			else
				writeLine(stream,":}",indent);
		}
		else
		{
			if(isLastOfStatement)
				writeLine(stream,line+";",indent);
			else
				writeLine(stream,line,indent);
		}
	}

	static void writeStatementData(std::ostream& stream,const StatementData& data,int indent)
	{
		if(data.getParamClass()==FunctionData::PARAM_CLASS_TERNARY_OPERATOR)
		{
			if(data.haveId() && data.haveParam() && data.haveStatement())
			{
				std::string line=data.getParam(0).toString()+" "+data.getId()+" "+data.getStatement(0).toString();
				if(data.getSubsequentFunctionNum()==1)
				{
					const FunctionExData& funcEx=data.getSubsequentFunction(0);
					if(funcEx.haveId() && funcEx.haveStatement())
						line+=" "+funcEx.getId()+" "+funcEx.getStatement(0).toString();
				}
				writeLine(stream,line+";",indent);
			}
		}
		else
		{
			bool isLastOfStatement=false;
			if(data.getSubsequentFunctions().size()==0)
				isLastOfStatement=true;
			writeFunctionExData(stream,data,indent,isLastOfStatement);
			for(FunctionExDatas::const_iterator it=data.getSubsequentFunctions().begin();it!=data.getSubsequentFunctions().end();++it)
			{
				if(it+1==data.getSubsequentFunctions().end())
					isLastOfStatement=true;
				writeFunctionExData(stream,*it,indent,isLastOfStatement);
			}
		}
	}

	std::string FunctionData::toString(void) const
	{
		return getFunction(*this);
	}

	std::string FunctionExData::toString(void) const
	{
		//与write方法不同，这里输出无缩进单行表示
		std::string line=FunctionData::toString();
		if(haveStatement())
		{
			line+="{";
			for(StatementDatas::const_iterator it=getStatements().begin();it!=getStatements().end();++it)
			{
				line+=it->toString()+";";
			}
			line+="}";
		}
		else if(haveExternScript())
		{
			line+="{:";
			line+=getScript();
			line+=":}";
		}
		return line;
	}

	std::string StatementData::toString(void) const
	{
		//与write方法不同，这里输出无缩进单行表示
		if(getParamClass()==FunctionData::PARAM_CLASS_TERNARY_OPERATOR)
		{
			if(haveId() && haveParam() && haveStatement())
			{
				std::string line=getParam(0).toString()+" "+getId()+" "+getStatement(0).toString();
				if(getSubsequentFunctionNum()==1)
				{
					const FunctionExData& funcEx=getSubsequentFunction(0);
					if(funcEx.haveId() && funcEx.haveStatement())
						line+=" "+funcEx.getId()+" "+funcEx.getStatement(0).toString();
				}
				return line;
			}
			else
			{
				return std::string();
			}
		}
		else
		{
			std::string line=FunctionExData::toString();
			for(FunctionExDatas::const_iterator it=getSubsequentFunctions().begin();it!=getSubsequentFunctions().end();++it)
			{
				line+=it->toString();
			}
			return line;
		}
	}

	std::string ScriptData::toString(void) const
	{
		std::ostringstream stream;
		writeStatementData(stream,*this,0);
		return stream.str();
	}

	bool ScriptDataFile::load(const std::string& file)
	{
		std::stringstream str;
		std::fstream stream;
		stream.open(file.c_str(),std::ios_base::in|std::ios_base::binary);
		if(stream.fail())
			return false;
		char line[1025];
		while(!stream.eof())
		{
			stream.getline(line,1024);
			line[stream.gcount()]=0;
			str<<line<<"\r\n";
		}
		stream.close();
		std::string content=str.str();
		return loadFromString(content,file);
	}

	bool ScriptDataFile::load(const std::string& res,const std::string& group)
	{
		std::string content=getResourceAsString(res,group);
		return loadFromString(content,res);
	}
	
	bool ScriptDataFile::loadFromString(const std::string& content,const std::string& resourceName)
	{
		SDLog log;
		SDToken tokens(content.c_str(),log);
		SDError error(tokens,log);
		SDAction action(tokens,log,&mScriptDatas);
		SDParse(0,action,tokens,error,log,0);
		if(error.HasError())
		{
			for(ScriptDatas::iterator it=mScriptDatas.begin();it!=mScriptDatas.end();++it)
			{
				it->second.clear();
			}
		}
		else
		{
			for(ScriptDatas::iterator it=mScriptDatas.begin();it!=mScriptDatas.end();++it)
			{
				it->second.setResourceName(resourceName);
			}
		}
		return !error.HasError();
	}

	void ScriptDataFile::save(const char* file)
	{	
		std::ofstream stream;
		stream.open(file,std::ios_base::out|std::ios_base::binary);
		if(stream.fail())
			return;

		for(ScriptDatas::const_iterator it=mScriptDatas.begin();it!=mScriptDatas.end();++it)
		{
			std::string str=it->second.toString();
			stream.write((const char*)str.c_str(),(std::streamsize)str.length());
			stream.write((const char*)"\r\n",2);
		}
		stream.close();
	}

	//-----------------------------------------------------------------------------	
	//-----------------------------------------------------------------------------	
	//-----------------------------------------------------------------------------	
	//-----------------------------------------------------------------------------	
	//-----------------------------------------------------------------------------	
}
