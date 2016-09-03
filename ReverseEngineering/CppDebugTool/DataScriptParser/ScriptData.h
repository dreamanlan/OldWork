#pragma once
#include <string>
#include <set>
#include <map>
#include <vector>

#define DataScript_RepeatArg1_1(X) X##1
#define DataScript_RepeatArg1_2(X) DataScript_RepeatArg1_1(X),X##2
#define DataScript_RepeatArg1_3(X) DataScript_RepeatArg1_2(X),X##3
#define DataScript_RepeatArg1_4(X) DataScript_RepeatArg1_3(X),X##4
#define DataScript_RepeatArg1_5(X) DataScript_RepeatArg1_4(X),X##5
#define DataScript_RepeatArg1_6(X) DataScript_RepeatArg1_5(X),X##6
#define DataScript_RepeatArg1_7(X) DataScript_RepeatArg1_6(X),X##7
#define DataScript_RepeatArg1_8(X) DataScript_RepeatArg1_7(X),X##8
#define DataScript_RepeatArg1_9(X) DataScript_RepeatArg1_8(X),X##9
#define DataScript_RepeatArg1_10(X) DataScript_RepeatArg1_9(X),X##10
#define DataScript_RepeatArg1_11(X) DataScript_RepeatArg1_10(X),X##11
#define DataScript_RepeatArg1_12(X) DataScript_RepeatArg1_11(X),X##12
#define DataScript_RepeatArg1_13(X) DataScript_RepeatArg1_12(X),X##13
#define DataScript_RepeatArg1_14(X) DataScript_RepeatArg1_13(X),X##14
#define DataScript_RepeatArg1_15(X) DataScript_RepeatArg1_14(X),X##15
#define DataScript_RepeatArg1_16(X) DataScript_RepeatArg1_15(X),X##16

#define DataScript_RepeatArg2_1(X,Y) X Y##1
#define DataScript_RepeatArg2_2(X,Y) DataScript_RepeatArg2_1(X,Y),X Y##2
#define DataScript_RepeatArg2_3(X,Y) DataScript_RepeatArg2_2(X,Y),X Y##3
#define DataScript_RepeatArg2_4(X,Y) DataScript_RepeatArg2_3(X,Y),X Y##4
#define DataScript_RepeatArg2_5(X,Y) DataScript_RepeatArg2_4(X,Y),X Y##5
#define DataScript_RepeatArg2_6(X,Y) DataScript_RepeatArg2_5(X,Y),X Y##6
#define DataScript_RepeatArg2_7(X,Y) DataScript_RepeatArg2_6(X,Y),X Y##7
#define DataScript_RepeatArg2_8(X,Y) DataScript_RepeatArg2_7(X,Y),X Y##8
#define DataScript_RepeatArg2_9(X,Y) DataScript_RepeatArg2_8(X,Y),X Y##9
#define DataScript_RepeatArg2_10(X,Y) DataScript_RepeatArg2_9(X,Y),X Y##10
#define DataScript_RepeatArg2_11(X,Y) DataScript_RepeatArg2_10(X,Y),X Y##11
#define DataScript_RepeatArg2_12(X,Y) DataScript_RepeatArg2_11(X,Y),X Y##12
#define DataScript_RepeatArg2_13(X,Y) DataScript_RepeatArg2_12(X,Y),X Y##13
#define DataScript_RepeatArg2_14(X,Y) DataScript_RepeatArg2_13(X,Y),X Y##14
#define DataScript_RepeatArg2_15(X,Y) DataScript_RepeatArg2_14(X,Y),X Y##15
#define DataScript_RepeatArg2_16(X,Y) DataScript_RepeatArg2_15(X,Y),X Y##16

#define DataScript_Define_Find(R,N,P,X)	\
inline R& N(DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(ps,sizeof(ps)/sizeof(P));\
}\
inline const R& N(DataScript_RepeatArg2_##X(P,p))const\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(ps,sizeof(ps)/sizeof(P));\
}

#define DataScript_Define_Static_Find(R,N,O,P,X)	\
static inline R& N(O& o,DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(o,ps,sizeof(ps)/sizeof(P));\
}\
static inline const R& N(const O& o,DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(o,ps,sizeof(ps)/sizeof(P));\
}

#define DataScript_Define_FindIterator(R,N,P,X)	\
inline R::iterator N(DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(ps,sizeof(ps)/sizeof(P));\
}\
inline R::const_iterator N(DataScript_RepeatArg2_##X(P,p))const\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(ps,sizeof(ps)/sizeof(P));\
}

#define DataScript_Define_Static_FindIterator(R,N,O,P,X)	\
static inline R::iterator N(O& o,DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(o,ps,sizeof(ps)/sizeof(P));\
}\
static inline R::const_iterator N(const O& o,DataScript_RepeatArg2_##X(P,p))\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(o,ps,sizeof(ps)/sizeof(P));\
}

#define DataScript_Define_Match(R,N,P,X)	\
inline R N(DataScript_RepeatArg2_##X(P,p))const\
{\
	P ps[] = {DataScript_RepeatArg1_##X(p)};\
	return N(ps,sizeof(ps)/sizeof(P));\
}

namespace DataScript
{
	extern std::string& getEmptyStringRef(void);
	extern bool needQuote(const std::string& str);
	typedef const std::string* ConstStringPtr;

	class StatementData;
	class FunctionData
	{
	public:
		enum
		{
			PARAM_CLASS_MIN = 0,
			PARAM_CLASS_NOTHING = PARAM_CLASS_MIN, 
			PARAM_CLASS_PARENTHESIS,
			PARAM_CLASS_BRACKET,
			PARAM_CLASS_PERIOD,
			PARAM_CLASS_PERIOD_PARENTHESIS,
			PARAM_CLASS_PERIOD_BRACKET,
			PARAM_CLASS_PERIOD_BRACE,
			PARAM_CLASS_OPERATOR,
			PARAM_CLASS_TERNARY_OPERATOR,
			PARAM_CLASS_MAX,
		};
		static const int ID_TOKEN=0;
		static const int NUM_TOKEN=1;
		static const int STRING_TOKEN=2;
		static const int BOOL_TOKEN=3;
		static const int FUNCTION_TOKEN=4;

		typedef std::vector<StatementData> ParamDatas;
	public:
		inline void setType(int _type);
		inline int getType(void)const;
		inline bool nameIsId(void)const;
		inline bool nameIsNumber(void)const;
		inline bool nameIsString(void)const;
		inline bool nameIsBoolean(void)const;
		inline bool nameIsFunction(void)const;
		inline void setId(const std::string& id);
		inline const std::string& getId(void) const;
		inline void setFunctionAsName(const FunctionData& data);
		inline const FunctionData& getFunctionAsName(void)const;
		inline void setLine(int line);
		inline int getLine(void)const;
		inline void setHaveId(bool val);
		inline bool haveId(void)const;
		inline void setParamClass(int type);
		inline int getParamClass(void)const;
		inline bool haveParam(void)const;
		inline void setParams(const ParamDatas& _params);		
		inline const ParamDatas& getParams(void)const;
		inline ParamDatas& getParams(void);
	public:
		std::string toString(void) const;
		inline void clear(void);
		inline virtual bool isValid(void)const;
		inline int getParamNum(void) const;
		inline void setParam(int index,const StatementData& data);
		inline StatementData& getParam(int index);
		inline const StatementData& getParam(int index) const;
		inline const std::string& getParamId(int index) const;
		inline void clearParams(void);
		inline void addParam(const std::string& id);
		inline void addParam(const std::string& id,int type);
		inline void addParam(const StatementData& param);
	public:
		inline FunctionData(void);
		inline explicit FunctionData(const std::string& _Function);
		inline FunctionData(const std::string& _Function,int _type);
		inline FunctionData(const FunctionData& data);
		inline FunctionData& operator = (const FunctionData& data);
		inline virtual ~FunctionData(void);
		inline bool operator == (const FunctionData& other) const;
		inline bool operator != (const FunctionData& other) const;
	public:
		/*inline FunctionData& findParam(ConstStringPtr p1)
		{
			ConstStringPtr ps[] = {p1};
			return findParam(ps,sizeof(ps)/sizeof(ConstStringPtr));
		}
		inline const FunctionData& findParam(ConstStringPtr p1)const
		{
			ConstStringPtr ps[] = {p1};
			return findParam(ps,sizeof(ps)/sizeof(ConstStringPtr));
		}*/
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,1)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,2)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,3)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,4)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,5)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,6)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,7)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,8)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,9)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,10)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,11)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,12)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,13)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,14)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,15)
		DataScript_Define_Find(StatementData,findParam,ConstStringPtr,16)
	public:
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,1)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,2)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,3)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,4)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,5)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,6)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,7)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,8)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,9)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,10)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,11)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,12)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,13)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,14)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,15)
		DataScript_Define_Static_Find(StatementData,findParam,ParamDatas,ConstStringPtr,16)
	public:
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,1)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,2)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,3)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,4)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,5)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,6)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,7)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,8)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,9)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,10)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,11)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,12)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,13)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,14)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,15)
		DataScript_Define_FindIterator(ParamDatas,findParamIterator,ConstStringPtr,16)
	public:
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,1)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,2)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,3)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,4)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,5)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,6)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,7)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,8)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,9)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,10)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,11)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,12)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,13)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,14)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,15)
		DataScript_Define_Static_FindIterator(ParamDatas,findParamIterator,ParamDatas,ConstStringPtr,16)
	public:
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,1)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,2)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,3)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,4)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,5)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,6)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,7)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,8)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,9)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,10)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,11)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,12)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,13)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,14)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,15)
		DataScript_Define_Find(StatementData,searchParam,ConstStringPtr,16)
	public:
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,1)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,2)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,3)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,4)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,5)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,6)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,7)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,8)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,9)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,10)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,11)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,12)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,13)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,14)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,15)
		DataScript_Define_Static_Find(StatementData,searchParam,ParamDatas,ConstStringPtr,16)
	public:
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,1)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,2)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,3)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,4)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,5)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,6)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,7)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,8)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,9)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,10)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,11)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,12)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,13)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,14)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,15)
		DataScript_Define_Match(bool,isMatch,ConstStringPtr,16)
	public:
		template<typename PredT>
		inline StatementData& findParamByPredicate(const PredT& pred)
		{
			return findParamByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline const StatementData& findParamByPredicate(const PredT& pred)const
		{
			return findParamByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline ParamDatas::iterator findParamIteratorByPredicate(const PredT& pred)
		{
			return findParamIteratorByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline ParamDatas::const_iterator findParamIteratorByPredicate(const PredT& pred)const
		{
			return findParamIteratorByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline StatementData& searchParamByPredicate(const PredT& pred)
		{
			return searchParamByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline const StatementData& searchParamByPredicate(const PredT& pred)const
		{
			return searchParamByPredicate(m_Params,pred);
		}
		template<typename PredT>
		inline bool isMatchParamByPredicate(const PredT& pred)const
		{
			return pred(*this);
		}
		template<typename PredT>
		static inline StatementData& findParamByPredicate(ParamDatas& m_Params,const PredT& pred);
		template<typename PredT>
		static inline const StatementData& findParamByPredicate(const ParamDatas& m_Params,const PredT& pred);
		template<typename PredT>
		static inline ParamDatas::iterator findParamIteratorByPredicate(ParamDatas& m_Params,const PredT& pred);
		template<typename PredT>
		static inline ParamDatas::const_iterator findParamIteratorByPredicate(const ParamDatas& m_Params,const PredT& pred);
		template<typename PredT>
		static inline StatementData& searchParamByPredicate(ParamDatas& m_Params,const PredT& pred);
		template<typename PredT>
		static inline const StatementData& searchParamByPredicate(const ParamDatas& m_Params,const PredT& pred);
	protected:
		class FindPredicate
		{
		public:
			FindPredicate(ConstStringPtr const* pps, int num):m_ppStr(pps),m_Num(num)
			{}
		public:
			bool operator()(const FunctionData& data)const
			{
				return data.isMatch(m_ppStr,m_Num);
			}
		private:
			ConstStringPtr const* m_ppStr;
			int m_Num;
		};
		friend class FindPredicate;
	protected:
		inline StatementData& findParam(ConstStringPtr const* pps, int num)
		{
			return findParamByPredicate(FindPredicate(pps,num));
		}
		inline const StatementData& findParam(ConstStringPtr const* pps, int num)const
		{
			return findParamByPredicate(FindPredicate(pps,num));
		}
		inline ParamDatas::iterator findParamIterator(ConstStringPtr const* pps, int num)
		{
			return findParamIteratorByPredicate(FindPredicate(pps,num));
		}
		inline ParamDatas::const_iterator findParamIterator(ConstStringPtr const* pps, int num)const
		{
			return findParamIteratorByPredicate(FindPredicate(pps,num));
		}
		inline StatementData& searchParam(ConstStringPtr const* pps, int num)
		{
			return searchParamByPredicate(FindPredicate(pps,num));
		}
		inline const StatementData& searchParam(ConstStringPtr const* pps, int num)const
		{
			return searchParamByPredicate(FindPredicate(pps,num));
		}
		inline bool isMatch(ConstStringPtr const* pps, int num)const
		{
			if(num<=0)
				return true;
			if(pps[0]!=NULL && *pps[0]!=getId())
				return false;
			for(int i=1;i<num;++i)
			{
				if(i>getParamNum())
					return false;
				if(pps[i]!=NULL && *pps[i]!=getParamId(i-1))
					return false;
			}
			return true;
		}
		static inline StatementData& findParam(ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return findParamByPredicate(m_Params,FindPredicate(pps,num));
		}
		static inline const StatementData& findParam(const ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return findParamByPredicate(m_Params,FindPredicate(pps,num));
		}
		static inline ParamDatas::iterator findParamIterator(ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return findParamIteratorByPredicate(m_Params,FindPredicate(pps,num));
		}
		static inline ParamDatas::const_iterator findParamIterator(const ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return findParamIteratorByPredicate(m_Params,FindPredicate(pps,num));
		}
		static inline StatementData& searchParam(ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return searchParamByPredicate(m_Params,FindPredicate(pps,num));
		}
		static inline const StatementData& searchParam(const ParamDatas& m_Params,ConstStringPtr const* pps, int num)
		{
			return searchParamByPredicate(m_Params,FindPredicate(pps,num));
		}
	private:
		int m_Type;
		FunctionData* m_FunctionPtr;
		std::string m_Id;
		bool m_HaveId;
		ParamDatas m_Params;
		int m_ParamClass;
	private:
		int m_Line;
	public:
		static inline FunctionData& getInvalidFunctionDataRef(void)
		{
			static FunctionData s_Data;
			s_Data.clear();
			return s_Data;
		}
	};
	typedef FunctionData::ParamDatas ParamDatas;
	class FunctionExData : public FunctionData
	{
	public:
		enum
		{
			EXTENT_CLASS_MIN = 0,
			EXTENT_CLASS_NOTHING = EXTENT_CLASS_MIN,
			EXTENT_CLASS_STATEMENT,
			EXTENT_CLASS_EXTERN_SCRIPT,
			EXTENT_CLASS_MAX,
		};
		typedef std::vector<StatementData> StatementDatas;
	public:
		inline void setExtentClass(int type);
		inline int getExtentClass(void)const;
	public:
		inline bool haveStatement(void)const;
		inline void setStatements(const StatementDatas& _statements);
		inline const StatementDatas& getStatements(void)const;
		inline StatementDatas& getStatements(void);
		std::string toString(void) const;
		inline void clear(void);
		inline virtual bool isValid(void)const;
		inline int getStatementNum(void) const;
		inline void setStatement(int index,const StatementData& data);
		inline StatementData& getStatement(int index);
		inline const StatementData& getStatement(int index) const;
		inline const std::string& getStatementId(int index) const;
		inline void clearStatements(void);
		inline void addStatement(const std::string& id);
		inline void addStatement(const std::string& id,int type);
		inline void addStatement(const FunctionData& statement);
		inline void addStatement(const FunctionExData& statement);
		inline void addStatement(const StatementData& statement);
	public:
		inline bool haveExternScript(void)const;
		inline void setScript(const std::string& _script);
		inline const std::string& getScript(void)const;
		inline std::string& getScript(void);
	public:
		inline FunctionExData(void);
		inline explicit FunctionExData(const std::string& _Function);
		inline FunctionExData(const std::string& _Function,int _type);
		inline explicit FunctionExData(const FunctionData& FunctionData);
		inline FunctionExData(const FunctionExData& other);
		inline FunctionExData& operator=(const FunctionExData& other);
		inline bool operator == (const FunctionExData& other) const;
		inline bool operator != (const FunctionExData& other) const;
	public:
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,1)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,2)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,3)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,4)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,5)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,6)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,7)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,8)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,9)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,10)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,11)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,12)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,13)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,14)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,15)
		DataScript_Define_Find(StatementData,findStatement,ConstStringPtr,16)
	public:
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,1)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,2)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,3)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,4)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,5)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,6)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,7)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,8)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,9)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,10)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,11)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,12)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,13)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,14)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,15)
		DataScript_Define_Static_Find(StatementData,findStatement,StatementDatas,ConstStringPtr,16)
	public:
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,1)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,2)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,3)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,4)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,5)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,6)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,7)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,8)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,9)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,10)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,11)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,12)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,13)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,14)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,15)
		DataScript_Define_FindIterator(StatementDatas,findStatementIterator,ConstStringPtr,16)
	public:
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,1)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,2)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,3)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,4)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,5)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,6)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,7)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,8)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,9)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,10)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,11)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,12)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,13)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,14)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,15)
		DataScript_Define_Static_FindIterator(StatementDatas,findStatementIterator,StatementDatas,ConstStringPtr,16)
	public:
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,1)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,2)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,3)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,4)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,5)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,6)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,7)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,8)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,9)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,10)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,11)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,12)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,13)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,14)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,15)
		DataScript_Define_Find(StatementData,searchStatement,ConstStringPtr,16)
	public:
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,1)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,2)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,3)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,4)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,5)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,6)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,7)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,8)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,9)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,10)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,11)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,12)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,13)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,14)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,15)
		DataScript_Define_Static_Find(StatementData,searchStatement,StatementDatas,ConstStringPtr,16)
	public:
		template<typename PredT>
		inline StatementData& findStatementByPredicate(const PredT& pred)
		{
			return findStatementByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline const StatementData& findStatementByPredicate(const PredT& pred)const
		{
			return findStatementByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline StatementDatas::iterator findStatementIteratorByPredicate(const PredT& pred)
		{
			return findStatementIteratorByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline StatementDatas::const_iterator findStatementIteratorByPredicate(const PredT& pred)const
		{
			return findStatementIteratorByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline StatementData& searchStatementByPredicate(const PredT& pred)
		{
			return searchStatementByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline const StatementData& searchStatementByPredicate(const PredT& pred)const
		{
			return searchStatementByPredicate(m_Statements,pred);
		}
		template<typename PredT>
		inline bool isMatchStatementByPredicate(const PredT& pred)const
		{
			return pred(*this);
		}
		template<typename PredT>
		static inline StatementData& findStatementByPredicate(StatementDatas& m_Statements,const PredT& pred);
		template<typename PredT>
		static inline const StatementData& findStatementByPredicate(const StatementDatas& m_Statements,const PredT& pred);
		template<typename PredT>
		static inline StatementDatas::iterator findStatementIteratorByPredicate(StatementDatas& m_Statements,const PredT& pred);
		template<typename PredT>
		static inline StatementDatas::const_iterator findStatementIteratorByPredicate(const StatementDatas& m_Statements,const PredT& pred);
		template<typename PredT>
		static inline StatementData& searchStatementByPredicate(StatementDatas& m_Statements,const PredT& pred);
		template<typename PredT>
		static inline const StatementData& searchStatementByPredicate(const StatementDatas& m_Statements,const PredT& pred);
	protected:
		inline StatementData& findStatement(ConstStringPtr const* pps, int num)
		{
			return findStatementByPredicate(FindPredicate(pps,num));
		}
		inline const StatementData& findStatement(ConstStringPtr const* pps, int num)const
		{
			return findStatementByPredicate(FindPredicate(pps,num));
		}
		inline StatementDatas::iterator findStatementIterator(ConstStringPtr const* pps, int num)
		{
			return findStatementIteratorByPredicate(FindPredicate(pps,num));
		}
		inline StatementDatas::const_iterator findStatementIterator(ConstStringPtr const* pps, int num)const
		{
			return findStatementIteratorByPredicate(FindPredicate(pps,num));
		}
		inline StatementData& searchStatement(ConstStringPtr const* pps, int num)
		{
			return searchStatementByPredicate(FindPredicate(pps,num));
		}
		inline const StatementData& searchStatement(ConstStringPtr const* pps, int num)const
		{
			return searchStatementByPredicate(FindPredicate(pps,num));
		}
		static inline StatementData& findStatement(StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return findStatementByPredicate(m_Statements,FindPredicate(pps,num));
		}
		static inline const StatementData& findStatement(const StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return findStatementByPredicate(m_Statements,FindPredicate(pps,num));
		}
		static inline StatementDatas::iterator findStatementIterator(StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return findStatementIteratorByPredicate(m_Statements,FindPredicate(pps,num));
		}
		static inline StatementDatas::const_iterator findStatementIterator(const StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return findStatementIteratorByPredicate(m_Statements,FindPredicate(pps,num));
		}
		static inline StatementData& searchStatement(StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return searchStatementByPredicate(m_Statements,FindPredicate(pps,num));
		}
		static inline const StatementData& searchStatement(const StatementDatas& m_Statements,ConstStringPtr const* pps, int num)
		{
			return searchStatementByPredicate(m_Statements,FindPredicate(pps,num));
		}
	private:
		StatementDatas m_Statements;
		std::string m_Script;
		int	m_ExtentClass;
	public:
		static inline FunctionExData& getInvalidFunctionExDataRef(void)
		{
			static FunctionExData s_Data;
			s_Data.clear();
			return s_Data;
		}
	};
	typedef FunctionExData::StatementDatas StatementDatas;
	typedef std::vector<FunctionExData> FunctionExDatas;
	class StatementData : public FunctionExData
	{
	public:
		inline void setSubsequentFunctions(const FunctionExDatas& _FunctionExDatas);
		inline const FunctionExDatas& getSubsequentFunctions(void) const;
		inline FunctionExDatas& getSubsequentFunctions(void);
		std::string toString(void) const;
		inline void clear(void);
		inline virtual bool isValid(void)const;
		inline int getSubsequentFunctionNum(void) const;
		inline void setSubsequentFunction(int index,const FunctionExData& data);
		inline FunctionExData& getSubsequentFunction(int index);
		inline const FunctionExData& getSubsequentFunction(int index) const;
		inline const std::string& getSubsequentFunctionId(int index) const;
		inline void clearSubsequentFunctions(void);
		inline void addSubsequentFunction(const std::string& id);
		inline void addSubsequentFunction(const std::string& id,int type);
		inline void addSubsequentFunction(const FunctionData& func);
		inline void addSubsequentFunction(const FunctionExData& func);
	public:
		inline StatementData(void);
		inline explicit StatementData(const std::string& _Function);
		inline StatementData(const std::string& _Function,int _type);
		inline explicit StatementData(const FunctionData& functionData);
		inline explicit StatementData(const FunctionExData& functionExData);
		inline StatementData(const StatementData& other);
		inline StatementData& operator=(const StatementData& other);
		inline bool operator == (const StatementData& other) const;
		inline bool operator != (const StatementData& other) const;
	private:
		FunctionExDatas m_SubsequentFunctions;
	public:
		static inline StatementData& getInvalidStatementDataRef(void)
		{
			static StatementData s_Data;
			s_Data.clear();
			return s_Data;
		}
	};
	typedef StatementData::StatementDatas StatementDatas;

	class ScriptData : public StatementData
	{
	public:
		std::string toString(void) const;
		inline void clear(void)
		{
			mLoaded=false;
			mResourceName="";

			StatementData::clear();
		}
	public:
		inline void setLoaded(bool loaded)
		{
			mLoaded=loaded;
		}
		inline bool isLoaded(void)const
		{
			return mLoaded;
		}
		inline void setResourceName(const std::string& name)
		{
			mResourceName=name;
		}
		inline const std::string& getResourceName(void) const
		{
			return mResourceName;
		}
	public:
		ScriptData()
		{
			mLoaded=false;
			mResourceName="";
		}
		explicit ScriptData(const std::string& _Function):StatementData(_Function)
		{}
		ScriptData(const std::string& _Function,int _type):StatementData(_Function,_type)
		{}
		explicit ScriptData(const FunctionData& functionData):StatementData(functionData)
		{}
		explicit ScriptData(const FunctionExData& functionExData):StatementData(functionExData)
		{}
		explicit ScriptData(const StatementData& statementData):StatementData(statementData)
		{}
		ScriptData(const ScriptData& other):StatementData(static_cast<const StatementData&>(other))
		{
			mLoaded=other.mLoaded;
			mResourceName=other.mResourceName;
		}
		inline ScriptData& operator=(const ScriptData& other)
		{
			if(this==&other)
				return *this;
			StatementData::operator =(static_cast<const StatementData&>(other));
			//
			mLoaded = other.mLoaded;
			mResourceName = other.mResourceName;
			return *this;
		}
		inline bool operator == (const ScriptData& other) const
		{
			bool r=(StatementData::operator ==(static_cast<const StatementData&>(other)) && 
				mLoaded==other.mLoaded && 
				mResourceName==other.mResourceName);
			return r;
		}
		inline bool operator != (const ScriptData& other) const
		{
			return !(operator == (other));
		}
	private:
		bool mLoaded;
		std::string mResourceName;
	public:
		static inline ScriptData& getInvalidScriptDataRef(void)
		{
			static ScriptData s_Data;
			s_Data.clear();
			return s_Data;
		}
	};
	typedef std::map<std::string,ScriptData> ScriptDatas;

	class ScriptDataFile
	{
	public:
		inline const ScriptData& getScriptData(const std::string& name) const
		{
			ScriptDatas::const_iterator it=mScriptDatas.find(name);
			if(it==mScriptDatas.end())
				return ScriptData::getInvalidScriptDataRef();
			return it->second;
		}
		inline ScriptData& getScriptData(const std::string& name)
		{
			ScriptDatas::iterator it=mScriptDatas.find(name);
			if(it==mScriptDatas.end())
				return ScriptData::getInvalidScriptDataRef();
			return it->second;
		}
		inline void setScriptData(const ScriptData& data)
		{
			ScriptDatas::iterator it=mScriptDatas.find(data.getId());
			if(it==mScriptDatas.end())
				mScriptDatas.insert(std::make_pair(data.getId(),data));
			else
				it->second=data;
		}
		inline const ScriptDatas& getScriptDatas(void) const
		{
			return mScriptDatas;
		}
		inline ScriptDatas& getScriptDatas(void)
		{
			return mScriptDatas;
		}
	public:
		bool load(const std::string& file);
		bool load(const std::string& res,const std::string& group);
		bool loadFromString(const std::string& content,const std::string& resourceName="");
		void save(const char* file);
	public:
		ScriptDataFile()
		{}
		virtual ~ScriptDataFile(){}
	private:
		ScriptDatas mScriptDatas;
	};
	//-----------------------------------------------------------------------------	
	inline void FunctionData::setType(int _type)
	{
		m_Type=_type;
	}
	inline int FunctionData::getType(void)const
	{
		return m_Type;
	}
	inline bool FunctionData::nameIsId(void)const
	{
		return m_Type==ID_TOKEN;
	}
	inline bool FunctionData::nameIsNumber(void)const
	{
		return m_Type==NUM_TOKEN;
	}
	inline bool FunctionData::nameIsString(void)const
	{
		return m_Type==STRING_TOKEN;
	}
	inline bool FunctionData::nameIsBoolean(void)const
	{
		return m_Type==BOOL_TOKEN;
	}
	inline bool FunctionData::nameIsFunction(void)const
	{
		return m_Type==FUNCTION_TOKEN;
	}
	inline void FunctionData::setId(const std::string& id)
	{
		if(m_Type==FUNCTION_TOKEN)
			m_FunctionPtr->setId(id);
		else
			m_Id=id;
	}
	inline const std::string& FunctionData::getId(void) const
	{
		if(m_Type==FUNCTION_TOKEN)
			return m_FunctionPtr->getId();
		else
			return m_Id;
	}
	inline void FunctionData::setFunctionAsName(const FunctionData& data)
	{
		FunctionData* oldFunctionPtr=m_FunctionPtr;

		m_Type=FUNCTION_TOKEN;
		m_FunctionPtr=new FunctionData(data);
		m_HaveId=false;
		
		if(oldFunctionPtr!=NULL)
		{
			delete oldFunctionPtr;
		}
	}
	inline const FunctionData& FunctionData::getFunctionAsName(void)const
	{
		if(m_Type!=FUNCTION_TOKEN || m_FunctionPtr==NULL)
			return getInvalidFunctionDataRef();
		return *m_FunctionPtr;
	}
	inline void FunctionData::setLine(int line)
	{
		m_Line = line;
	}
	inline int FunctionData::getLine(void)const
	{
		return m_Line;
	}
	inline void FunctionData::setHaveId(bool val)
	{
		m_HaveId=val;
	}
	inline bool FunctionData::haveId(void)const
	{
		if(m_Type==FUNCTION_TOKEN)
			return m_FunctionPtr->haveId();
		else
			return m_HaveId;
	}
	inline void FunctionData::setParamClass(int type)
	{
		if(type>=PARAM_CLASS_MIN && type<PARAM_CLASS_MAX)
		{
			m_ParamClass=type;
		}
	}
	inline int FunctionData::getParamClass(void)const
	{
		return m_ParamClass;
	}
	inline bool FunctionData::haveParam(void)const
	{
		return m_ParamClass!=PARAM_CLASS_NOTHING;
	}
	inline void FunctionData::setParams(const ParamDatas& _params)
	{
		m_Params=_params;
		if(_params.size()>0)
		{
			if(PARAM_CLASS_NOTHING==m_ParamClass)
			{
				m_ParamClass=PARAM_CLASS_PARENTHESIS;
			}
		}
	}		
	inline const ParamDatas& FunctionData::getParams(void)const
	{
		return m_Params;
	}
	inline ParamDatas& FunctionData::getParams(void)
	{
		return m_Params;
	}	
	inline void FunctionData::clear(void)
	{
		if(m_Type==FUNCTION_TOKEN && m_FunctionPtr!=NULL)
		{
			delete m_FunctionPtr;
			m_FunctionPtr=NULL;
		}
		m_Type=ID_TOKEN;
		m_Id="";
		m_HaveId=false;
		clearParams();
		m_ParamClass=PARAM_CLASS_NOTHING;
		m_Line = -1;
	}
	inline bool FunctionData::isValid(void)const
	{
		if(NULL!=m_FunctionPtr)
			return true;
		else if(haveId())
			return true;
		else if(haveParam())
			return true;
		else
			return false;
	}
	inline int FunctionData::getParamNum(void) const
	{
		return (int)m_Params.size();
	}
	inline void FunctionData::setParam(int index,const StatementData& data)
	{
		if(index<0 || index>=(int)m_Params.size())
			return;
		m_Params[index]=data;
	}	
	inline StatementData& FunctionData::getParam(int index)
	{
		return const_cast<StatementData&>(static_cast<const FunctionData*>(this)->getParam(index));
	}
	inline const StatementData& FunctionData::getParam(int index) const
	{
		if(index<0 || index>=(int)m_Params.size())
			return StatementData::getInvalidStatementDataRef();
		return m_Params[index];
	}	
	inline void FunctionData::clearParams(void)
	{
		m_Params.clear();
	}
	inline const std::string& FunctionData::getParamId(int index) const
	{
		if(index<0 || index>=(int)m_Params.size())
			return getEmptyStringRef();
		return m_Params[index].getId();
	}
	inline void FunctionData::addParam(const std::string& id)
	{
		m_Params.push_back(StatementData(id));
		if(PARAM_CLASS_NOTHING==m_ParamClass)
		{
			m_ParamClass=PARAM_CLASS_PARENTHESIS;
		}
	}
	inline void FunctionData::addParam(const std::string& id,int type)
	{
		m_Params.push_back(StatementData(id,type));
		if(PARAM_CLASS_NOTHING==m_ParamClass)
		{
			m_ParamClass=PARAM_CLASS_PARENTHESIS;
		}
	}
	inline void FunctionData::addParam(const StatementData& param)
	{
		m_Params.push_back(param);
		if(PARAM_CLASS_NOTHING==m_ParamClass)
		{
			m_ParamClass=PARAM_CLASS_PARENTHESIS;
		}
	}
	//-----------------------------------------------------------------------------
	inline FunctionData::FunctionData(void)
	{
		m_Type=ID_TOKEN;
		m_FunctionPtr=NULL;
		m_Id="";
		m_HaveId=false;
		m_ParamClass=PARAM_CLASS_NOTHING;
		m_Line = -1;
	}
	inline FunctionData::FunctionData(const std::string& _Function)
	{
		if(_Function=="true" || _Function=="false")
			m_Type=BOOL_TOKEN;
		else if(needQuote(_Function))
			m_Type=STRING_TOKEN;
		else if(_Function.length()>0 && (_Function[0]>='0' && _Function[0]<='9' || _Function[0]=='.' || _Function[0]=='-'))
			m_Type=NUM_TOKEN;
		else
			m_Type=ID_TOKEN;

		m_FunctionPtr=NULL;
		m_Id=_Function;
		m_HaveId=true;
		m_ParamClass=PARAM_CLASS_NOTHING;
		m_Line = -1;
	}
	inline FunctionData::FunctionData(const std::string& _Function,int _type)
	{
		m_Type=_type;
		m_FunctionPtr=NULL;
		m_Id=_Function;
		m_HaveId=true;
		m_ParamClass=PARAM_CLASS_NOTHING;
		m_Line = -1;
	}
	inline FunctionData::FunctionData(const FunctionData& data)
	{
		m_Type=data.m_Type;
		m_Id=data.m_Id;
		m_HaveId=data.m_HaveId;
		m_Params=data.m_Params;
		if(data.m_FunctionPtr!=NULL)
		{
			m_FunctionPtr=new FunctionData(*(data.m_FunctionPtr));
		}
		else
		{
			m_FunctionPtr=NULL;
		}
		m_ParamClass = data.m_ParamClass;
		m_Line = data.m_Line;
	}
	inline FunctionData& FunctionData::operator = (const FunctionData& data)
	{
		if(this==&data)
			return *this;
		FunctionData* oldFunctionPtr=m_FunctionPtr;

		m_Type=data.m_Type;
		m_Id=data.m_Id;
		m_HaveId=data.m_HaveId;
		m_Params=data.m_Params;
		m_ParamClass = data.m_ParamClass;
		if(data.m_FunctionPtr!=NULL)
		{
			m_FunctionPtr=new FunctionData(*(data.m_FunctionPtr));
		}
		else
		{
			m_FunctionPtr=NULL;
		}

		if(oldFunctionPtr!=NULL)
		{
			delete oldFunctionPtr;
		}
		
		m_Line = data.m_Line;
		return *this;
	}
	inline FunctionData::~FunctionData(void)
	{
		clear();
	}
	inline bool FunctionData::operator == (const FunctionData& other) const
	{
		bool r=(m_Line==other.m_Line && 
			m_Type==other.m_Type &&  
			m_Params==other.m_Params && 
			m_ParamClass==other.m_ParamClass);
		if(m_Type==FUNCTION_TOKEN)
		{
			return r && (*m_FunctionPtr==*other.m_FunctionPtr);
		}
		else
		{
			return r && (m_Id==other.m_Id && m_HaveId==other.m_HaveId);
		}
	}
	inline bool FunctionData::operator != (const FunctionData& other) const
	{
		return !(operator == (other));
	}
	//-----------------------------------------------------------------------------
	template<typename PredT>
	inline StatementData& FunctionData::findParamByPredicate(ParamDatas& m_Params,const PredT& pred)
	{
		return const_cast<StatementData&>(findParamByPredicate(static_cast<const ParamDatas&>(m_Params),pred));
	}
	template<typename PredT>
	inline const StatementData& FunctionData::findParamByPredicate(const ParamDatas& m_Params,const PredT& pred)
	{
		int size = (int)m_Params.size();
		for(int i=0;i<size;++i)
		{
			const StatementData& _param = m_Params[i];
			if(pred(_param))
			{
				return _param;
			}
		}
		return StatementData::getInvalidStatementDataRef();
	}
	template<typename PredT>
	inline ParamDatas::iterator FunctionData::findParamIteratorByPredicate(ParamDatas& m_Params,const PredT& pred)
	{
		for(ParamDatas::iterator it=m_Params.begin();it!=m_Params.end();++it)
		{
			const StatementData& _param = *it;
			if(pred(_param))
			{
				return it;
			}
		}
		return m_Params.end();
	}
	template<typename PredT>
	inline ParamDatas::const_iterator FunctionData::findParamIteratorByPredicate(const ParamDatas& m_Params,const PredT& pred)
	{
		for(ParamDatas::const_iterator it=m_Params.begin();it!=m_Params.end();++it)
		{
			const StatementData& _param = *it;
			if(pred(_param))
			{
				return it;
			}
		}
		return m_Params.end();
	}
	template<typename PredT>
	inline StatementData& FunctionData::searchParamByPredicate(ParamDatas& m_Params,const PredT& pred)
	{
		return const_cast<StatementData&>(searchParamByPredicate(static_cast<const ParamDatas&>(m_Params),pred));
	}
	template<typename PredT>
	inline const StatementData& FunctionData::searchParamByPredicate(const ParamDatas& m_Params,const PredT& pred)
	{
		const StatementData& res = findParamByPredicate(m_Params,pred);
		if(res.isValid())
			return res;
		int size = (int)m_Params.size();
		for(int i=0;i<size;++i)
		{
			const StatementData& _param = m_Params[i];
			const StatementData& _res = _param.searchParamByPredicate(pred);
			if(_res.isValid())
				return _res;
		}
		return StatementData::getInvalidStatementDataRef();
	}
	//-----------------------------------------------------------------------------
	inline void FunctionExData::setExtentClass(int type)
	{
		if(type>=EXTENT_CLASS_MIN && type<EXTENT_CLASS_MAX)
		{
			m_ExtentClass=type;
		}
	}
	inline int FunctionExData::getExtentClass(void)const
	{
		return m_ExtentClass;
	}
	inline bool FunctionExData::haveStatement(void)const
	{
		return EXTENT_CLASS_STATEMENT==m_ExtentClass;
	}
	inline void FunctionExData::setStatements(const StatementDatas& _statements)
	{
		m_Statements=_statements;
		if(_statements.size()>0)
		{
			if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
			{
				m_ExtentClass=EXTENT_CLASS_STATEMENT;
			}
		}
	}
	inline const StatementDatas& FunctionExData::getStatements(void)const
	{
		return m_Statements;
	}
	inline StatementDatas& FunctionExData::getStatements(void)
	{
		return m_Statements;
	}
	inline void FunctionExData::clear(void)
	{
		FunctionData::clear();
		clearStatements();
		m_Script="";
		m_ExtentClass=EXTENT_CLASS_NOTHING;
	}
	inline bool FunctionExData::isValid(void) const
	{
		if(FunctionData::isValid())
			return true;
		else if(haveStatement())
			return true;
		else if(haveExternScript())
			return true;
		else
			return false;
	}
	inline int FunctionExData::getStatementNum(void) const
	{
		return (int)m_Statements.size();
	}
	inline void FunctionExData::setStatement(int index,const StatementData& data)
	{
		if(index<0 || index>=(int)m_Statements.size())
			return;
		m_Statements[index]=data;
	}
	inline StatementData& FunctionExData::getStatement(int index)
	{
		return const_cast<StatementData&>(static_cast<const FunctionExData*>(this)->getStatement(index));
	}
	inline const StatementData& FunctionExData::getStatement(int index) const
	{
		if(index<0 || index>=(int)m_Statements.size())
			return StatementData::getInvalidStatementDataRef();
		return m_Statements[index];
	}
	inline const std::string& FunctionExData::getStatementId(int index) const
	{
		if(index<0 || index>=(int)m_Statements.size())
			return getEmptyStringRef();
		return m_Statements[index].getId();
	}
	inline void FunctionExData::clearStatements(void)
	{
		m_Statements.clear();
	}
	inline void FunctionExData::addStatement(const std::string& id)
	{
		m_Statements.push_back(StatementData(id));
		if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_STATEMENT;
		}
	}
	inline void FunctionExData::addStatement(const std::string& id,int type)
	{
		m_Statements.push_back(StatementData(id,type));
		if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_STATEMENT;
		}
	}
	inline void FunctionExData::addStatement(const FunctionData& statement)
	{
		m_Statements.push_back(StatementData(statement));
		if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_STATEMENT;
		}
	}
	inline void FunctionExData::addStatement(const FunctionExData& statement)
	{
		m_Statements.push_back(StatementData(statement));
		if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_STATEMENT;
		}
	}
	inline void FunctionExData::addStatement(const StatementData& statement)
	{
		m_Statements.push_back(statement);
		if(EXTENT_CLASS_STATEMENT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_STATEMENT;
		}
	}
	inline bool FunctionExData::haveExternScript(void)const
	{
		return EXTENT_CLASS_EXTERN_SCRIPT==m_ExtentClass;
	}
	inline void FunctionExData::setScript(const std::string& _script)
	{
		m_Script=_script;
		if(EXTENT_CLASS_EXTERN_SCRIPT!=m_ExtentClass)
		{
			m_ExtentClass=EXTENT_CLASS_EXTERN_SCRIPT;
		}
	}
	inline const std::string& FunctionExData::getScript(void)const
	{
		return m_Script;
	}
	inline std::string& FunctionExData::getScript(void)
	{
		return m_Script;
	}
	//-----------------------------------------------------------------------------
	inline FunctionExData::FunctionExData(void)
	{
		m_Script="";
		m_ExtentClass=EXTENT_CLASS_NOTHING;
	}
	inline FunctionExData::FunctionExData(const std::string& _Function):FunctionData(_Function)
	{
		m_Script="";
		m_ExtentClass=EXTENT_CLASS_NOTHING;
	}
	inline FunctionExData::FunctionExData(const std::string& _Function,int _type):FunctionData(_Function,_type)
	{
		m_Script="";
		m_ExtentClass=EXTENT_CLASS_NOTHING;
	}
	inline FunctionExData::FunctionExData(const FunctionData& functionData):FunctionData(functionData)
	{
		m_Script="";
		m_ExtentClass=EXTENT_CLASS_NOTHING;
	}
	inline FunctionExData::FunctionExData(const FunctionExData& other):FunctionData(static_cast<const FunctionData&>(other))
	{
		m_Statements = other.m_Statements;
		m_Script = other.m_Script;
		m_ExtentClass = other.m_ExtentClass;
	}
	inline FunctionExData& FunctionExData::operator=(const FunctionExData& other)
	{
		if(this==&other)
			return *this;
		FunctionData::operator =(static_cast<const FunctionData&>(other));
		m_Statements = other.m_Statements;
		m_Script = other.m_Script;
		m_ExtentClass = other.m_ExtentClass;
		return *this;
	}
	inline bool FunctionExData::operator == (const FunctionExData& other) const
	{
		bool r=(FunctionData::operator ==(static_cast<const FunctionData&>(other)) && 
			m_Statements==other.m_Statements && 
			m_Script==other.m_Script && 
			m_ExtentClass==other.m_ExtentClass);
		return r;
	}
	inline bool FunctionExData::operator != (const FunctionExData& other) const
	{
		return !(operator == (other));
	}
	//-----------------------------------------------------------------------------	
	template<typename PredT>
	inline StatementData& FunctionExData::findStatementByPredicate(StatementDatas& m_Statements,const PredT& pred)
	{
		return const_cast<StatementData&>(findStatementByPredicate(static_cast<const StatementDatas&>(m_Statements),pred));
	}
	template<typename PredT>
	inline const StatementData& FunctionExData::findStatementByPredicate(const StatementDatas& m_Statements,const PredT& pred)
	{
		int size = (int)m_Statements.size();
		for(int i=0;i<size;++i)
		{
			const StatementData& _statement = m_Statements[i];
			if(pred(_statement))
			{
				return _statement;
			}
		}
		return StatementData::getInvalidStatementDataRef();
	}
	template<typename PredT>
	inline StatementDatas::iterator FunctionExData::findStatementIteratorByPredicate(StatementDatas& m_Statements,const PredT& pred)
	{
		for(StatementDatas::iterator it=m_Statements.begin();it!=m_Statements.end();++it)
		{
			const StatementData& _statement = *it;
			if(pred(_statement))
			{
				return it;
			}
		}
		return m_Statements.end();
	}
	template<typename PredT>
	inline StatementDatas::const_iterator FunctionExData::findStatementIteratorByPredicate(const StatementDatas& m_Statements,const PredT& pred)
	{
		for(StatementDatas::const_iterator it=m_Statements.begin();it!=m_Statements.end();++it)
		{
			const StatementData& _statement = *it;
			if(pred(_statement))
			{
				return it;
			}
		}
		return m_Statements.end();
	}
	template<typename PredT>
	inline StatementData& FunctionExData::searchStatementByPredicate(StatementDatas& m_Statements,const PredT& pred)
	{
		return const_cast<StatementData&>(searchStatementByPredicate(static_cast<const StatementDatas&>(m_Statements),pred));
	}
	template<typename PredT>
	inline const StatementData& FunctionExData::searchStatementByPredicate(const StatementDatas& m_Statements,const PredT& pred)
	{
		const StatementData& res = findStatementByPredicate(m_Statements,pred);
		if(res.isValid())
			return res;
		int size = (int)m_Statements.size();
		for(int i=0;i<size;++i)
		{
			const StatementData& _statement = m_Statements[i];
			const StatementData& _res = _statement.searchStatementByPredicate(pred);
			if(_res.isValid())
				return _res;
		}
		return StatementData::getInvalidStatementDataRef();
	}
	//-----------------------------------------------------------------------------
	inline void StatementData::setSubsequentFunctions(const FunctionExDatas& _FunctionExDatas)
	{
		m_SubsequentFunctions=_FunctionExDatas;
	}
	inline const FunctionExDatas& StatementData::getSubsequentFunctions(void) const
	{
		return m_SubsequentFunctions;
	}
	inline FunctionExDatas& StatementData::getSubsequentFunctions(void)
	{
		return m_SubsequentFunctions;
	}
	inline void StatementData::clear(void)
	{
		FunctionExData::clear();
		m_SubsequentFunctions.clear();
	}
	inline bool StatementData::isValid(void) const
	{
		//从语法看，语句有效等价于首元函数有效。
		return FunctionExData::isValid();
	}
	inline int StatementData::getSubsequentFunctionNum(void) const
	{
		return (int)m_SubsequentFunctions.size();
	}
	inline void StatementData::setSubsequentFunction(int index,const FunctionExData& data)
	{
		if(index<0 || index>=(int)m_SubsequentFunctions.size())
			return;
		m_SubsequentFunctions[index]=data;
	}
	inline FunctionExData& StatementData::getSubsequentFunction(int index)
	{
		return const_cast<FunctionExData&>(static_cast<const StatementData*>(this)->getSubsequentFunction(index));
	}
	inline const FunctionExData& StatementData::getSubsequentFunction(int index) const
	{
		if(index<0 || index>=(int)m_SubsequentFunctions.size())
			return FunctionExData::getInvalidFunctionExDataRef();
		return m_SubsequentFunctions[index];
	}
	inline const std::string& StatementData::getSubsequentFunctionId(int index) const
	{		
		if(index<0 || index>=(int)m_SubsequentFunctions.size())
			return getEmptyStringRef();
		return m_SubsequentFunctions[index].getId();
	}
	inline void StatementData::clearSubsequentFunctions(void)
	{
		m_SubsequentFunctions.clear();
	}
	inline void StatementData::addSubsequentFunction(const std::string& id)
	{
		m_SubsequentFunctions.push_back(FunctionExData(id));
	}
	inline void StatementData::addSubsequentFunction(const std::string& id,int type)
	{
		m_SubsequentFunctions.push_back(FunctionExData(id,type));
	}
	inline void StatementData::addSubsequentFunction(const FunctionData& func)
	{
		m_SubsequentFunctions.push_back(FunctionExData(func));
	}
	inline void StatementData::addSubsequentFunction(const FunctionExData& func)
	{
		m_SubsequentFunctions.push_back(FunctionExData(func));
	}
	//-----------------------------------------------------------------------------
	inline StatementData::StatementData(void)
	{}
	inline StatementData::StatementData(const std::string& _Function):FunctionExData(_Function)
	{}
	inline StatementData::StatementData(const std::string& _Function,int _type):FunctionExData(_Function,_type)
	{}
	inline StatementData::StatementData(const FunctionData& functionData):FunctionExData(functionData)
	{}
	inline StatementData::StatementData(const FunctionExData& functionExData):FunctionExData(functionExData)
	{}
	inline StatementData::StatementData(const StatementData& other):FunctionExData(static_cast<const FunctionExData&>(other))
	{
		m_SubsequentFunctions=other.m_SubsequentFunctions;
	}
	inline StatementData& StatementData::operator=(const StatementData& other)
	{
		if(this==&other)
			return *this;
		FunctionExData::operator =(static_cast<const FunctionExData&>(other));
		m_SubsequentFunctions=other.m_SubsequentFunctions;
		return *this;
	}
	inline bool StatementData::operator == (const StatementData& other) const
	{
		bool r=(FunctionExData::operator ==(static_cast<const FunctionExData&>(other)) && 
			m_SubsequentFunctions==other.m_SubsequentFunctions);
		return r;
	}
	inline bool StatementData::operator != (const StatementData& other) const
	{
		return !(operator == (other));
	}
	//-----------------------------------------------------------------------------
	//-----------------------------------------------------------------------------
	//-----------------------------------------------------------------------------
	//-----------------------------------------------------------------------------
	//-----------------------------------------------------------------------------
	//-----------------------------------------------------------------------------

}

using namespace DataScript;
