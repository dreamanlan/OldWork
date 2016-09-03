/* A Bison parser, made by GNU Bison 2.1.  */

/* C++ Skeleton parser for LALR(1) parsing with Bison,
   Copyright (C) 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */


#include "scriptc_syntax.hpp"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* A pseudo ostream that takes yydebug_ into account. */
# define YYCDEBUG							\
  for (bool yydebugcond_ = yydebug_; yydebugcond_; yydebugcond_ = false)	\
    (*yycdebug_)

/* Enable debugging if requested.  */
#if YYDEBUG

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << (Title) << ' ';			\
      yysymprint_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (0)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yyreduce_print_ (Rule);		\
} while (0)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (0)

#else /* !YYDEBUG */

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab

#if YYERROR_VERBOSE

/* Return YYSTR after stripping away unnecessary quotes and
   backslashes, so that it's suitable for yyerror.  The heuristic is
   that double-quoting is unnecessary unless the string contains an
   apostrophe, a comma, or backslash (other than backslash-backslash).
   YYSTR is taken from yytname.  */
std::string
yy::Scriptc_parser::yytnamerr_ (const char *yystr)
{
  if (*yystr == '"')
    {
      std::string yyr = "";
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    yyr += *yyp;
	    break;

	  case '"':
	    return yyr;
	  }
    do_not_strip_quotes: ;
    }

  return yystr;
}

#endif

#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

void
yy::Scriptc_parser::yysymprint_ (int yytype,
                         const semantic_type* yyvaluep, const location_type* yylocationp)
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;
  /* Backward compatibility, but should be removed eventually. */
  std::ostream& cdebug_ = *yycdebug_;
  (void) cdebug_;

  *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	     << ' ' << yytname_[yytype] << " ("
             << *yylocationp << ": ";
  switch (yytype)
    {
      default:
        break;
    }
  *yycdebug_ << ')';
}
#endif /* ! YYDEBUG */

void
yy::Scriptc_parser::yydestruct_ (const char* yymsg,
                         int yytype, semantic_type* yyvaluep, location_type* yylocationp)
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yymsg;
  (void) yyvaluep;
  (void) yylocationp;

  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}

void
yy::Scriptc_parser::yypop_ (unsigned int n)
{
  yystate_stack_.pop (n);
  yysemantic_stack_.pop (n);
  yylocation_stack_.pop (n);
}

std::ostream&
yy::Scriptc_parser::debug_stream () const
{
  return *yycdebug_;
}

void
yy::Scriptc_parser::set_debug_stream (std::ostream& o)
{
  yycdebug_ = &o;
}


yy::Scriptc_parser::debug_level_type
yy::Scriptc_parser::debug_level () const
{
  return yydebug_;
}

void
yy::Scriptc_parser::set_debug_level (debug_level_type l)
{
  yydebug_ = l;
}


int
yy::Scriptc_parser::parse ()
{
  /* Look-ahead and look-ahead in internal form.  */
  int yylooka;
  int yyilooka;

  /// Semantic value of the look-ahead.
  semantic_type yylval;
  /// Location of the look-ahead.
  location_type yylloc;
  /// The locations where the error started and ended.
  location yyerror_range[2];

  /// $$.
  semantic_type yyval;
  /// @$.
  location_type yyloc;

  int yyresult_;

  YYCDEBUG << "Starting parse" << std::endl;

  yynerrs_ = 0;
  yyerrstatus_ = 0;

  /* Start.  */
  yystate_ = 0;
  yylooka = yyempty_;


  /* Initialize the stacks.  The initial state will be pushed in
     yynewstate, since the latter expects the semantical and the
     location values to have been already stored, initialize these
     stacks with a primary value.  */
  yystate_stack_ = state_stack_type (0);
  yysemantic_stack_ = semantic_stack_type (0);
  yylocation_stack_ = location_stack_type (0);
  yysemantic_stack_.push (yylval);
  yylocation_stack_.push (yylloc);

  /* New state.  */
yynewstate:
  yystate_stack_.push (yystate_);
  YYCDEBUG << "Entering state " << yystate_ << std::endl;
  goto yybackup;

  /* Backup.  */
yybackup:

  /* Try to take a decision without look-ahead.  */
  yyn_ = yypact_[yystate_];
  if (yyn_ == yypact_ninf_)
    goto yydefault;

  /* Read a look-ahead token.  */
  if (yylooka == yyempty_)
    {
      YYCDEBUG << "Reading a token: ";
      yylooka = yylex (&yylval);
    }


  /* Convert token to internal form.  */
  if (yylooka <= yyeof_)
    {
      yylooka = yyilooka = yyeof_;
      YYCDEBUG << "Now at end of input." << std::endl;
    }
  else
    {
      yyilooka = yytranslate_ (yylooka);
      YY_SYMBOL_PRINT ("Next token is", yyilooka, &yylval, &yylloc);
    }

  /* If the proper action on seeing token ILOOKA_ is to reduce or to
     detect an error, take that action.  */
  yyn_ += yyilooka;
  if (yyn_ < 0 || yylast_ < yyn_ || yycheck_[yyn_] != yyilooka)
    goto yydefault;

  /* Reduce or error.  */
  yyn_ = yytable_[yyn_];
  if (yyn_ < 0)
    {
      if (yyn_ == yytable_ninf_)
	goto yyerrlab;
      else
	{
	  yyn_ = -yyn_;
	  goto yyreduce;
	}
    }
  else if (yyn_ == 0)
    goto yyerrlab;

  /* Accept?  */
  if (yyn_ == yyfinal_)
    goto yyacceptlab;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yyilooka, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yylooka != yyeof_)
    yylooka = yyempty_;

  yysemantic_stack_.push (yylval);
  yylocation_stack_.push (yylloc);

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus_)
    --yyerrstatus_;

  yystate_ = yyn_;
  goto yynewstate;

/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn_ = yydefact_[yystate_];
  if (yyn_ == 0)
    goto yyerrlab;
  goto yyreduce;

/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  yylen_ = yyr2_[yyn_];
  /* If LEN_ is nonzero, implement the default value of the action:
     `$$ = $1'.  Otherwise, use the top of the stack.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  */
  if (yylen_)
    yyval = yysemantic_stack_[yylen_ - 1];
  else
    yyval = yysemantic_stack_[0];

  {
    slice<location_type, location_stack_type> slice (yylocation_stack_, yylen_);
    YYLLOC_DEFAULT (yyloc, slice, yylen_);
  }
  YY_REDUCE_PRINT (yyn_);
  switch (yyn_)
    {
        case 2:

    {
			GenPushCstr((yysemantic_stack_[0]));
		;}
    break;

  case 8:

    {
			PushNamespace((yysemantic_stack_[0]));
			(yyval)=1;
		;}
    break;

  case 9:

    {
			PushNamespace((yysemantic_stack_[0]));
			(yyval)=(yysemantic_stack_[2])+1;
		;}
    break;

  case 10:

    {
			GenPush(PopNamespace((yysemantic_stack_[0])),0,(yysemantic_stack_[0])-1);
		;}
    break;

  case 11:

    {
			GenPush((yysemantic_stack_[0]),0);
		;}
    break;

  case 14:

    {
			GenPushConst(12);
		;}
    break;

  case 16:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 19:

    {
	  	(yyval)=0;
		;}
    break;

  case 20:

    {
	  	(yyval)=(yysemantic_stack_[1]);
		;}
    break;

  case 21:

    {
	  	(yyval)=0;
	  ;}
    break;

  case 22:

    {
	  	(yyval)=(yysemantic_stack_[1]);
	  ;}
    break;

  case 23:

    {
    	(yyval)=0;
    ;}
    break;

  case 24:

    {
    	(yyval)=(yysemantic_stack_[1]);
    ;}
    break;

  case 27:

    {
			GenObjGetAttr();
		;}
    break;

  case 28:

    {		
	  	GenObjCall((yysemantic_stack_[0]));
		;}
    break;

  case 29:

    {
			GenCall((yysemantic_stack_[0]));
		;}
    break;

  case 30:

    {
			GenArg();
		;}
    break;

  case 31:

    {
			GenPtrCalc();
		;}
    break;

  case 33:

    {
    	(yyval)=1;
    ;}
    break;

  case 34:

    {
    	(yyval)=(yysemantic_stack_[2])+1;
    ;}
    break;

  case 35:

    {
			GenPush(PopNamespace((yysemantic_stack_[0])),1,(yysemantic_stack_[0])-1);
		;}
    break;

  case 36:

    {
			GenArg(1);
		;}
    break;

  case 37:

    {
			GenPtrInfo();
		;}
    break;

  case 39:

    {
			GenCalc((yysemantic_stack_[1]),1);
		;}
    break;

  case 40:

    {
			GenCalc((yysemantic_stack_[1]),1);
		;}
    break;

  case 41:

    {
    	GenCalc((yysemantic_stack_[0]),1);
    ;}
    break;

  case 42:

    {
    	GenCalc((yysemantic_stack_[0]),1);
    ;}
    break;

  case 43:

    {
			GenCalc((yysemantic_stack_[1]),1);
		;}
    break;

  case 44:

    {  		
			GenAddress(PopNamespace((yysemantic_stack_[0])),(yysemantic_stack_[0])-1);
  	;}
    break;

  case 50:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 51:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 52:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 54:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 55:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 57:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 58:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 60:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 61:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 62:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 63:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 65:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 66:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 68:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 70:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 72:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 74:

    {PushLogicCheck(0);;}
    break;

  case 75:

    {
			GenCalc((yysemantic_stack_[1]));
			PopLogicCheck(0);
		;}
    break;

  case 77:

    {PushLogicCheck(1);;}
    break;

  case 78:

    {
			GenCalc((yysemantic_stack_[1]));
			PopLogicCheck(1);
		;}
    break;

  case 80:

    {
			GenObjSetAttr();
		;}
    break;

  case 81:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 94:

    {
			GenCalc((yysemantic_stack_[1]));
		;}
    break;

  case 104:

    {GenCase((yysemantic_stack_[0]));;}
    break;

  case 106:

    {GenDefault();;}
    break;

  case 113:

    {
			GenPop();
		;}
    break;

  case 114:

    {
			GenPop();
		;}
    break;

  case 115:

    {
			PushIfThen();
		;}
    break;

  case 116:

    {
			PopIfThen();
		;}
    break;

  case 117:

    {PushIfElse();PopIfThen();;}
    break;

  case 118:

    {
			PopIfElse();
		;}
    break;

  case 119:

    {PushSwitch();;}
    break;

  case 120:

    {
			PopSwitch();
		;}
    break;

  case 121:

    {
			GenPop();
			PushLoop(2);
			GenLoopLogicStart();
		;}
    break;

  case 122:

    {
			PushLoop(2);
			GenLoopLogicStart();
		;}
    break;

  case 123:

    {
			GenLoopLogicEnd();
		;}
    break;

  case 124:

    {
			GenPushConst(1);
			GenLoopLogicEnd();			
		;}
    break;

  case 125:

    {PushLoop(0);GenLoopLogicStart();;}
    break;

  case 126:

    {GenLoopLogicEnd();;}
    break;

  case 127:

    {
			PopLoop();
		;}
    break;

  case 128:

    {PushLoop(1);;}
    break;

  case 129:

    {GenLoopLogicStart();;}
    break;

  case 130:

    {GenLoopLogicEnd();;}
    break;

  case 131:

    {
			PopLoop();
		;}
    break;

  case 132:

    {
			PushFor3thExp();
			PauseFor3thExp();
			PopFor3thExp();
			PopLoop();
		;}
    break;

  case 133:

    {PushFor3thExp();;}
    break;

  case 134:

    {GenPop();PauseFor3thExp();;}
    break;

  case 135:

    {
			PopFor3thExp();
			PopLoop();
		;}
    break;

  case 136:

    {
			GenContinue();
		;}
    break;

  case 137:

    {
			GenBreak();
		;}
    break;

  case 138:

    {
			GenReturn();
		;}
    break;

  case 148:

    {
			DeclOuterFunc((yysemantic_stack_[5]),(yysemantic_stack_[3]),(yysemantic_stack_[4]),(yysemantic_stack_[3]),true);
		;}
    break;

  case 149:

    {
			DeclOuterFunc((yysemantic_stack_[6]),(yysemantic_stack_[4]),(yysemantic_stack_[5]),(yysemantic_stack_[4]));
		;}
    break;

  case 150:

    {
			DeclOuterFunc((yysemantic_stack_[6]),(yysemantic_stack_[4]),(yysemantic_stack_[5]),(yysemantic_stack_[1]),true);
		;}
    break;

  case 151:

    {
			DeclOuterFunc((yysemantic_stack_[7]),(yysemantic_stack_[5]),(yysemantic_stack_[6]),(yysemantic_stack_[1]));
		;}
    break;

  case 152:

    {			
			OuterArgSize((yysemantic_stack_[0]),true);
		;}
    break;

  case 153:

    {
			OuterArgSize((yysemantic_stack_[0]));
		;}
    break;

  case 154:

    {
			GenInclude((yysemantic_stack_[1]));
		;}
    break;

  case 156:

    {
			DeclFunction(PopNamespace((yysemantic_stack_[0])));
		;}
    break;

  case 157:

    {
			DeclFunction(PopNamespace((yysemantic_stack_[0])));
		;}
    break;

  case 159:

    {
			DefConst((yysemantic_stack_[2]),(yysemantic_stack_[0]));
		;}
    break;

  case 160:

    {
			DefConst((yysemantic_stack_[2]),(yysemantic_stack_[0]));
		;}
    break;

  case 168:

    {
			DefVar((yysemantic_stack_[0]));
		;}
    break;

  case 169:

    {
			DefVar((yysemantic_stack_[0]));
		;}
    break;

  case 170:

    {
			DefVar((yysemantic_stack_[2]),(yysemantic_stack_[0]));
		;}
    break;

  case 171:

    {
			DefVar((yysemantic_stack_[2]),(yysemantic_stack_[0]));
		;}
    break;

  case 172:

    {(yyval)=PopNamespace((yysemantic_stack_[0]));StartNamespace((yyval));;}
    break;

  case 173:

    {
			EndNamespace((yysemantic_stack_[3]));
		;}
    break;

  case 183:

    {
			DeclArg((yysemantic_stack_[0]));
		;}
    break;

  case 184:

    {
			DeclArg((yysemantic_stack_[0]));
		;}
    break;

  case 185:

    {
			StartFunction((yysemantic_stack_[0]));
			(yyval)=(yysemantic_stack_[0]);
		;}
    break;

  case 186:

    {
			StartFunction((yysemantic_stack_[2]));
			(yyval)=(yysemantic_stack_[2]);
		;}
    break;

  case 187:

    {
			StartFunction((yysemantic_stack_[3]));
			(yyval)=(yysemantic_stack_[3]);
		;}
    break;

  case 188:

    {
	 		EndFunction((yysemantic_stack_[1]));
	 	;}
    break;

  case 189:

    {PushQuery((yysemantic_stack_[1]));;}
    break;

  case 190:

    {PopQuery();;}
    break;

  case 192:

    {
			GenExecQuery((yysemantic_stack_[3]));
		;}
    break;

  case 196:

    {
      	AddSelect((yysemantic_stack_[0]));
      ;}
    break;

  case 197:

    {
				AddSelect((yysemantic_stack_[0]));
			;}
    break;

  case 199:

    {AddFrom((yysemantic_stack_[0]));;}
    break;

  case 200:

    {
				AddFromExp((yysemantic_stack_[0]));				
			;}
    break;

  case 201:

    {AddFrom((yysemantic_stack_[0]));;}
    break;

  case 202:

    {
				AddFromExp((yysemantic_stack_[0]));
			;}
    break;

  case 203:

    {
			(yyval)=GenExpression();
		;}
    break;

  case 204:

    {
			(yyval)=-1;
		;}
    break;

  case 205:

    {
				GenJoin(GenExpression());
			;}
    break;

  case 209:

    {
				GenSort(GenExpression(),0);
			;}
    break;

  case 210:

    {
				GenSort(GenExpression(),1);
			;}
    break;

  case 211:

    {
				GenSort(GenExpression(),0);
			;}
    break;

  case 212:

    {
				GenSort(GenExpression(),2);
			;}
    break;

  case 213:

    {
				GenSort(GenExpression(),3);
			;}
    break;

  case 214:

    {
			GenTextBlock((yysemantic_stack_[0]));
		;}
    break;


      default: break;
    }

/* Line 676 of lalr1.cc.  */


  yypop_ (yylen_);

  YY_STACK_PRINT ();

  yysemantic_stack_.push (yyval);
  yylocation_stack_.push (yyloc);

  /* Shift the result of the reduction.  */
  yyn_ = yyr1_[yyn_];
  yystate_ = yypgoto_[yyn_ - yyntokens_] + yystate_stack_[0];
  if (0 <= yystate_ && yystate_ <= yylast_
      && yycheck_[yystate_] == yystate_stack_[0])
    yystate_ = yytable_[yystate_];
  else
    yystate_ = yydefgoto_[yyn_ - yyntokens_];
  goto yynewstate;

/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus_)
    {
      ++yynerrs_;
      error (yylloc, yysyntax_error_ (YYERROR_VERBOSE_IF (yyilooka)));
    }

  yyerror_range[0] = yylloc;
  if (yyerrstatus_ == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yylooka <= yyeof_)
        {
	  /* Return failure if at end of input.  */
	  if (yylooka == yyeof_)
	    YYABORT;
        }
      else
        {
          yydestruct_ ("Error: discarding", yyilooka, &yylval, &yylloc);
          yylooka = yyempty_;
        }
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (false)
    goto yyerrorlab;

  yyerror_range[0] = yylocation_stack_[yylen_ - 1];
  yypop_ (yylen_);
  yystate_ = yystate_stack_[0];
  goto yyerrlab1;

/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn_ = yypact_[yystate_];
      if (yyn_ != yypact_ninf_)
	{
	  yyn_ += yyterror_;
	  if (0 <= yyn_ && yyn_ <= yylast_ && yycheck_[yyn_] == yyterror_)
	    {
	      yyn_ = yytable_[yyn_];
	      if (0 < yyn_)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yystate_stack_.height () == 1)
	YYABORT;

      yyerror_range[0] = yylocation_stack_[0];
      yydestruct_ ("Error: popping",
                   yystos_[yystate_],
                   &yysemantic_stack_[0], &yylocation_stack_[0]);
      yypop_ ();
      yystate_ = yystate_stack_[0];
      YY_STACK_PRINT ();
    }

  if (yyn_ == yyfinal_)
    goto yyacceptlab;

  yyerror_range[1] = yylloc;
  // Using YYLLOC is tempting, but would change the location of
  // the look-ahead.  YYLOC is available though.
  YYLLOC_DEFAULT (yyloc, yyerror_range - 1, 2);
  yysemantic_stack_.push (yylval);
  yylocation_stack_.push (yyloc);

  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos_[yyn_],
		   &yysemantic_stack_[0], &yylocation_stack_[0]);

  yystate_ = yyn_;
  goto yynewstate;

  /* Accept.  */
yyacceptlab:
  yyresult_ = 0;
  goto yyreturn;

  /* Abort.  */
yyabortlab:
  yyresult_ = 1;
  goto yyreturn;

yyreturn:
  if (yylooka != yyeof_ && yylooka != yyempty_)
    yydestruct_ ("Cleanup: discarding lookahead", yyilooka, &yylval, &yylloc);

  while (yystate_stack_.height () != 1)
    {
      yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
      yypop_ ();
    }

  return yyresult_;
}

// Generate an error message.
std::string
yy::Scriptc_parser::yysyntax_error_ (YYERROR_VERBOSE_IF (int tok))
{
  std::string res;
#if YYERROR_VERBOSE
  yyn_ = yypact_[yystate_];
  if (yypact_ninf_ < yyn_ && yyn_ < yylast_)
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  */
      int yyxbegin = yyn_ < 0 ? -yyn_ : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = yylast_ - yyn_;
      int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
      int count = 0;
      for (int x = yyxbegin; x < yyxend; ++x)
        if (yycheck_[x + yyn_] == x && x != yyterror_)
          ++count;

      // FIXME: This method of building the message is not compatible
      // with internationalization.  It should work like yacc.c does it.
      // That is, first build a string that looks like this:
      // "syntax error, unexpected %s or %s or %s"
      // Then, invoke YY_ on this string.
      // Finally, use the string as a format to output
      // yytname_[tok], etc.
      // Until this gets fixed, this message appears in English only.
      res = "syntax error, unexpected ";
      res += yytnamerr_ (yytname_[tok]);
      if (count < 5)
        {
          count = 0;
          for (int x = yyxbegin; x < yyxend; ++x)
            if (yycheck_[x + yyn_] == x && x != yyterror_)
              {
                res += (!count++) ? ", expecting " : " or ";
                res += yytnamerr_ (yytname_[x]);
              }
        }
    }
  else
#endif
    res = YY_("syntax error");
  return res;
}


/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
const short int yy::Scriptc_parser::yypact_ninf_ = -295;
const short int
yy::Scriptc_parser::yypact_[] =
{
     333,    10,    33,    36,  -295,  -295,    55,    62,   255,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,    70,    67,  -295,   342,
      77,   -24,   -52,   158,    -4,    96,   107,    -2,  -295,  -295,
    -295,   158,   269,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
     189,   342,   192,  -295,     6,   197,    70,  -295,  -295,   342,
     201,  -295,   130,  -295,  -295,  -295,  -295,  -295,    13,    13,
     701,  -295,   342,  -295,   170,   172,   188,  -295,   190,   169,
     185,   701,   195,   221,   701,   261,   261,    70,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,    28,    75,   202,   548,  -295,
     209,  -295,  -295,    73,   569,  -295,   141,   122,   143,   208,
      -7,   266,   222,   218,   229,   302,   303,  -295,    69,  -295,
    -295,  -295,   352,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,   259,  -295,   243,  -295,  -295,   -23,  -295,   158,  -295,
     244,   214,   158,  -295,  -295,  -295,  -295,    83,  -295,   262,
     701,   701,  -295,   435,   450,  -295,  -295,    99,   321,   326,
      -3,   158,  -295,   270,   158,   596,   261,   701,   701,   332,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,   701,  -295,  -295,  -295,    73,   701,   701,
     701,   701,   701,   701,   701,   701,   701,   701,   701,   701,
     701,   701,   701,   701,   319,   320,   701,  -295,  -295,  -295,
     232,   342,  -295,   335,   342,  -295,  -295,  -295,  -295,   -14,
    -295,  -295,  -295,   285,   435,   299,   308,   299,   701,   329,
    -295,   100,   481,  -295,   304,   305,  -295,   261,  -295,    88,
    -295,  -295,  -295,   110,  -295,   311,  -295,   287,  -295,  -295,
    -295,   122,   122,   143,   143,   208,   208,   208,   208,    -7,
      -7,   266,   222,   218,   701,   701,  -295,    19,   101,  -295,
    -295,  -295,  -295,  -295,  -295,   435,  -295,   435,   313,   299,
     315,  -295,  -295,   106,   316,  -295,   701,  -295,  -295,   701,
     318,   611,   229,   302,   293,  -295,    24,   342,  -295,   340,
     435,   322,  -295,  -295,   435,   701,   337,   303,   324,  -295,
     628,  -295,   138,  -295,   297,  -295,  -295,  -295,  -295,   435,
     701,  -295,   299,   381,  -295,   348,  -295,  -295,   147,  -295,
    -295,   435,  -295,   299,   330,  -295,   -42,   339,   349,  -295,
    -295,  -295,   341,   435,   402,   403,   355,   323,   701,   325,
    -295,  -295,   345,  -295,   350,  -295,  -295,    60,  -295,  -295,
     360,   415,   701,  -295,  -295,  -295,  -295,   701,  -295,  -295,
    -295,  -295,   360,  -295
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
const unsigned char
yy::Scriptc_parser::yydefact_[] =
{
       0,     0,     0,     0,   175,   174,     0,     0,     0,   139,
     141,   142,   143,   144,   145,   147,     0,     0,   146,     0,
     168,     0,     8,   156,     0,     0,     0,     0,     1,   140,
       8,   172,     0,   188,   166,   165,   164,   163,   161,   162,
       0,     0,     0,   167,     0,     0,     0,   155,   154,     0,
       0,   158,     0,     7,     6,     5,     3,     4,     0,     0,
       0,   214,     0,   106,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
      47,    48,   108,   112,    11,    10,    25,    30,    31,    32,
      27,    28,    29,    38,     0,    49,     0,    53,    56,    59,
      64,    67,    69,    71,    73,    76,    79,    93,     0,   110,
      96,    97,     0,    98,    99,   100,   101,    95,   102,    26,
     103,     0,   170,   169,   183,   186,     0,     9,   157,   159,
       0,     0,    35,    36,    37,    39,    40,     0,   104,     0,
       0,     0,   125,     0,     0,   136,   137,     0,     0,     0,
       0,    10,    13,    14,    44,     0,     0,     0,     0,     0,
      41,    42,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    82,     0,    30,    31,    27,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   109,   111,
       0,     0,   187,     0,     0,   178,   179,   180,   182,     0,
     176,   181,   114,     0,     0,   115,     0,   119,     0,     0,
     122,     0,     0,   138,     0,     0,    12,     0,    23,     0,
      33,    16,    80,     0,     2,    18,    81,     0,    50,    51,
      52,    54,    55,    57,    58,    62,    63,    60,    61,    65,
      66,    68,    70,    72,     0,     0,    94,     0,     0,   152,
     171,   184,   160,   173,   177,     0,   107,     0,     0,   126,
       0,   121,   124,     0,   133,   189,     0,    15,    24,     0,
      17,     0,    75,    78,     0,   148,     0,     0,   105,   116,
       0,     0,   129,   123,     0,     0,     0,   208,     0,    34,
       0,    21,     0,   150,     0,   149,   153,   117,   120,     0,
       0,   132,   134,     0,   190,   193,   192,    19,     0,    22,
     151,     0,   127,   130,     0,   196,     0,     0,     0,   194,
      20,   118,     0,     0,     0,     0,   206,     0,     0,     0,
     135,   199,   198,   197,     0,   195,   191,   211,   207,   131,
     204,     0,     0,   209,   210,   212,   213,     0,   200,   201,
     205,   203,   204,   202
};

/* YYPGOTO[NTERM-NUM].  */
const short int
yy::Scriptc_parser::yypgoto_[] =
{
    -295,  -295,  -295,    97,   -50,   -17,    16,  -295,   -94,  -295,
    -295,   334,  -266,   -58,    63,  -295,   120,   135,    74,   114,
     228,   230,   227,   167,   173,  -295,  -200,  -295,   -93,  -295,
     -39,  -100,  -295,  -295,  -295,   412,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,   423,  -295,  -295,  -295,  -127,  -295,
       5,  -295,   -38,  -102,  -295,  -101,  -295,  -295,  -295,   223,
    -295,  -295,   -98,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,    71,  -295,  -295,  -294,  -295,  -295
};

/* YYDEFGOTO[NTERM-NUM].  */
const short int
yy::Scriptc_parser::yydefgoto_[] =
{
      -1,   235,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   229,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   194,   106,   195,   107,   173,
     108,   109,   110,   213,   139,   111,   112,   113,   216,   114,
     321,   268,   222,   274,   115,   218,   291,   143,   310,   332,
     295,   324,   116,     8,     9,    10,   258,    11,    12,    24,
     117,    27,    40,    14,    21,    15,    52,    16,   209,   210,
     126,    17,    18,   118,   296,   327,   119,   314,   315,   326,
     336,   342,   350,   362,   358,   345,   329,   298,   348,   120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.  */
const short int yy::Scriptc_parser::yytable_ninf_ = -186;
const short int
yy::Scriptc_parser::yytable_[] =
{
     135,   136,   176,   122,   205,    13,   185,   186,   334,   124,
      44,   129,   199,    13,    19,   302,    30,     2,     3,     4,
       5,   137,   284,     7,   138,   152,   153,   304,   335,   207,
     208,  -185,   147,   211,   318,   150,    20,   -35,   -35,    22,
     202,   133,   133,   219,   347,    45,    42,   203,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   360,    25,
     226,    43,   230,   361,   232,    26,    46,   196,    50,   125,
     263,   187,   188,    30,   134,   134,   297,    75,    76,   174,
     236,    47,   205,    51,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
      23,   215,   217,   256,   285,   221,   231,   207,   208,   305,
     -35,   211,   175,    31,   266,   353,   354,   355,   356,   233,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   206,   155,   297,   196,
     158,   156,   159,   128,    30,    53,    54,    55,    56,    57,
      32,   278,   297,   196,   197,   132,   132,   297,   279,    41,
     176,   176,   259,   260,   286,   288,   262,   289,   212,   196,
     196,   287,   151,   151,   154,    45,   196,   277,   280,   269,
     196,    48,   176,   273,   223,   271,   299,   178,   230,    49,
     308,   293,   121,   151,   311,   123,   237,   237,   179,   180,
     127,   319,    73,    74,   130,    75,    76,   230,   279,   322,
     330,   -36,   -36,   131,   206,   181,   182,   279,   237,   183,
     184,   331,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   140,   340,   141,    34,    35,    36,    37,    38,
      39,   238,   239,   240,   176,     2,     3,     4,     5,   306,
     142,     7,   144,   151,   145,    28,   312,   148,   176,   245,
     246,   247,   248,   176,    30,    53,    54,    55,    56,    57,
     146,   323,    30,    53,    54,    55,    56,    57,    58,    59,
     237,   189,   190,   149,   -36,     1,     2,     3,     4,     5,
       6,   157,     7,   191,   237,   257,   160,   161,   192,   237,
      60,   241,   242,   249,   250,    61,     7,    62,    63,    64,
     193,    65,    66,    67,    68,    69,    70,    71,   243,   244,
     -74,   200,   -77,    74,   151,   201,   204,   224,   214,    72,
      73,    74,   225,    75,    76,   234,   227,   254,   261,   255,
      77,    78,    79,    80,    81,    34,    35,    36,    37,    38,
      39,   265,    32,    82,    83,    30,    53,    54,    55,    56,
      57,    58,    59,     1,     2,     3,     4,     5,     6,   196,
       7,   267,   270,   281,   275,   276,   290,   292,   303,   294,
     300,   307,   320,    60,   325,   309,   313,   316,    61,     7,
      62,    63,    64,   333,    65,    66,    67,    68,    69,    70,
      71,   328,   337,   338,   339,   341,   343,   344,   346,   352,
     349,   357,    72,    73,    74,   351,    75,    76,   359,   251,
     253,   282,   252,    77,    78,    79,    80,    81,   283,    33,
     177,    29,   264,   363,     0,    32,   198,    83,    30,    53,
      54,    55,    56,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    30,    53,    54,    55,    56,    57,    58,
      59,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,    61,     7,    62,    63,    64,     0,    65,    66,    67,
      68,    69,    70,    71,    30,    53,    54,    55,    56,    57,
      58,    59,     0,     0,     0,    72,    73,    74,     0,    75,
      76,     0,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    73,    74,     0,    75,    76,     0,     0,    32,     0,
      83,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,   272,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   160,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,    30,
      53,    54,    55,    56,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    30,    53,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,    30,    53,    54,    55,    56,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,     0,     0,    73,    74,   228,
      75,    76,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    73,    74,   301,    75,    76,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,     0,     0,    73,
      74,   317,    75,    76,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    30,    53,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,     0,    75,    76,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81
};

/* YYCHECK.  */
const short int
yy::Scriptc_parser::yycheck_[] =
{
      58,    59,    96,    41,   131,     0,    13,    14,    50,     3,
      62,    49,   112,     8,     4,   281,     3,    31,    32,    33,
      34,    60,     3,    37,    62,    75,    76,     3,    70,   131,
     131,    83,    71,   131,   300,    74,     3,     9,    10,     3,
      63,    58,    59,   143,   338,    17,    70,    70,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   352,     4,
      63,    85,   155,   357,   157,     3,    70,    70,    70,    63,
      84,    78,    79,     3,    58,    59,   276,    64,    65,    96,
     173,    85,   209,    85,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
       3,   140,   141,   196,    85,   144,   156,   209,   209,    85,
      82,   209,    96,    16,   214,    55,    56,    57,    58,   158,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   131,    62,   338,    70,
      67,    66,    69,    46,     3,     4,     5,     6,     7,     8,
      83,    63,   352,    70,    85,    58,    59,   357,    70,    82,
     254,   255,   200,   201,    63,   265,   204,   267,    85,    70,
      70,    70,    75,    76,    77,    17,    70,   227,    68,   218,
      70,    85,   276,   222,    85,    85,   279,    65,   281,    82,
     290,    85,     3,    96,   294,     3,   254,   255,    76,    77,
       3,    63,    61,    62,     3,    64,    65,   300,    70,   309,
      63,     9,    10,    83,   209,    72,    73,    70,   276,    11,
      12,   321,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    62,   333,    62,     3,     4,     5,     6,     7,
       8,   178,   179,   180,   338,    31,    32,    33,    34,   287,
      62,    37,    62,   156,    85,     0,   295,    62,   352,   185,
     186,   187,   188,   357,     3,     4,     5,     6,     7,     8,
      85,   310,     3,     4,     5,     6,     7,     8,     9,    10,
     338,    15,    16,    62,    82,    30,    31,    32,    33,    34,
      35,    82,    37,    71,   352,    63,     9,    10,    80,   357,
      31,   181,   182,   189,   190,    36,    37,    38,    39,    40,
      81,    42,    43,    44,    45,    46,    47,    48,   183,   184,
      18,    62,    19,    62,   227,    82,    82,     6,    66,    60,
      61,    62,     6,    64,    65,     3,    66,    18,     3,    19,
      71,    72,    73,    74,    75,     3,     4,     5,     6,     7,
       8,    66,    83,    84,    85,     3,     4,     5,     6,     7,
       8,     9,    10,    30,    31,    32,    33,    34,    35,    70,
      37,    63,    43,    62,    70,    70,    63,    62,    85,    63,
      62,    41,    85,    31,     3,    63,    49,    63,    36,    37,
      38,    39,    40,    63,    42,    43,    44,    45,    46,    47,
      48,    53,    63,    54,    63,     3,     3,    52,    85,    59,
      85,    51,    60,    61,    62,    70,    64,    65,     3,   191,
     193,   254,   192,    71,    72,    73,    74,    75,   255,    17,
      96,     8,   209,   362,    -1,    83,    84,    85,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    60,    61,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    61,    62,    -1,    64,    65,    -1,    -1,    83,    -1,
      85,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75
};

/* STOS_[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
const unsigned char
yy::Scriptc_parser::yystos_[] =
{
       0,    30,    31,    32,    33,    34,    35,    37,   139,   140,
     141,   143,   144,   146,   149,   151,   153,   157,   158,     4,
       3,   150,     3,    89,   145,     4,     3,   147,     0,   140,
       3,    89,    83,   121,     3,     4,     5,     6,     7,     8,
     148,    82,    70,    85,    62,    17,    70,    85,    85,    82,
      70,    85,   152,     4,     5,     6,     7,     8,     9,    10,
      31,    36,    38,    39,    40,    42,    43,    44,    45,    46,
      47,    48,    60,    61,    62,    64,    65,    71,    72,    73,
      74,    75,    84,    85,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   112,   114,   116,   117,
     118,   121,   122,   123,   125,   130,   138,   146,   159,   162,
     175,     3,   148,     3,     3,    63,   156,     3,    89,   148,
       3,    83,    89,    91,    92,    99,    99,   116,   148,   120,
      62,    62,    62,   133,    62,    85,    85,   116,    62,    62,
     116,    89,    90,    90,    89,    62,    66,    82,    67,    69,
       9,    10,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    82,   115,    91,    92,    94,    97,    65,    76,
      77,    72,    73,    11,    12,    13,    14,    78,    79,    15,
      16,    71,    80,    81,   111,   113,    70,    85,    84,   117,
      62,    82,    63,    70,    82,   144,   146,   149,   151,   154,
     155,   158,    85,   119,    66,   116,   124,   116,   131,   117,
      85,   116,   128,    85,     6,     6,    63,    66,    63,    98,
     114,    90,   114,   116,     3,    87,   114,    99,   100,   100,
     100,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   107,   108,    18,    19,   114,    63,   142,   148,
     148,     3,   148,    84,   155,    66,   117,    63,   127,   116,
      43,    85,    85,   116,   129,    70,    70,    90,    63,    70,
      68,    62,   109,   110,     3,    85,    63,    70,   117,   117,
      63,   132,    62,    85,    63,   136,   160,   112,   173,   114,
      62,    63,    98,    85,     3,    85,   148,    41,   117,    63,
     134,   117,   116,    49,   163,   164,    63,    63,    98,    63,
      85,   126,   117,   116,   137,     3,   165,   161,    53,   172,
      63,   117,   135,    63,    50,    70,   166,    63,    54,    63,
     117,     3,   167,     3,    52,   171,    85,   173,   174,    85,
     168,    70,    59,    55,    56,    57,    58,    51,   170,     3,
     173,   173,   169,   170
};

#if YYDEBUG
/* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
   to YYLEX-NUM.  */
const unsigned short int
yy::Scriptc_parser::yytoken_number_[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    63,    42,    58,    91,    93,    46,
      44,    38,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    61,   123,   125,    59
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
const unsigned char
yy::Scriptc_parser::yyr1_[] =
{
       0,    86,    87,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    91,    92,    92,    93,    94,    94,    95,
      95,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   102,   103,   103,   103,   104,   104,   104,   105,
     105,   105,   105,   105,   106,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   111,   110,   112,   113,   112,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   119,   118,   120,   118,   121,   121,
     122,   122,   123,   123,   123,   124,   125,   126,   125,   127,
     125,   128,   128,   129,   129,   131,   132,   130,   133,   134,
     135,   130,   130,   136,   137,   130,   138,   138,   138,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   141,   142,   142,   143,   144,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   148,   148,   149,   150,   150,
     150,   150,   152,   151,   153,   153,   154,   154,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   157,   158,   160,
     161,   159,   162,   163,   163,   164,   165,   165,   166,   168,
     167,   169,   167,   170,   170,   171,   171,   172,   173,   174,
     174,   174,   174,   174,   175
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
const unsigned char
yy::Scriptc_parser::yyr2_[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     2,     2,     4,     3,     4,     3,     6,
       7,     5,     6,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     0,     4,     1,     0,     4,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     0,     4,     2,     3,
       1,     2,     1,     2,     3,     1,     5,     0,     8,     0,
       6,     2,     1,     2,     1,     0,     0,     7,     0,     0,
       0,    10,     6,     0,     0,     9,     2,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     7,     8,
       8,     9,     1,     3,     3,     3,     1,     3,     3,     3,
       5,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     5,     0,     6,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     2,     4,     5,     2,     0,
       0,     9,     6,     1,     2,     4,     1,     3,     2,     0,
       3,     0,     5,     2,     0,     3,     0,     3,     1,     2,
       2,     1,     2,     2,     1
};

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at \a yyntokens_, nonterminals. */
const char*
const yy::Scriptc_parser::yytname_[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "FLOATINGconstant", "INTEGERconstant", "OCTALconstant", "HEXconstant",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "CLCL_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "EXTERN", "VAR", "FUNCTION",
  "CLASS", "NAMESPACE", "INCLUDE", "TEXTBLOCK", "CONSTKEY", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "CONTINUE",
  "BREAK", "RETURN", "SELECT", "FROM", "WHERE", "JOIN", "ORDER", "BY",
  "ASC", "DESC", "MAX", "MIN", "ON", "DEFQUERY", "EXECQUERY", "'('", "')'",
  "'?'", "'*'", "':'", "'['", "']'", "'.'", "','", "'&'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'='", "'{'",
  "'}'", "';'", "$accept", "constname", "constant_expression",
  "namespace_expression", "primary_expression", "arg_expression",
  "ptr_expression", "cast_expression", "objattr_expression",
  "objcall_expression", "call_expression", "postfix_expression",
  "argument_expression_list", "lvalue_expression", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "@1", "logical_or_expression", "@2",
  "assignment_expression", "assignment_operator", "expression",
  "statement", "labeled_statement", "@3", "@4", "compound_statement",
  "statement_list", "expression_statement", "ifexp", "selection_statement",
  "@5", "@6", "for1thexp_statement", "for2thexp_statement",
  "iteration_statement", "@7", "@8", "@9", "@10", "@11", "@12", "@13",
  "jump_statement", "translation_unit", "external_declaration",
  "extern_declaration", "integer_list", "include_declaration",
  "function_declaration", "function_list", "const_definition",
  "const_list", "defed_constant", "var_definition", "var_list",
  "namespace_definition", "@14", "namespace_keyword", "namespace_body",
  "namespace_body_list", "arg_list", "function_head",
  "function_definition", "loadquery_statement", "@15", "@16",
  "execquery_expression", "select_no_parens", "simple_select",
  "target_list", "from_clause", "from_list", "@17", "@18", "where_clause",
  "join_clause", "sort_clause", "a_expr", "sortby", "textblock_statement", 0
};
#endif

#if YYDEBUG
/* YYRHS -- A `-1'-separated list of the rules' RHS. */
const yy::Scriptc_parser::rhs_number_type
yy::Scriptc_parser::yyrhs_[] =
{
     139,     0,    -1,     3,    -1,     7,    -1,     8,    -1,     6,
      -1,     5,    -1,     4,    -1,     3,    -1,    89,    17,     3,
      -1,    89,    -1,    88,    -1,    62,   116,    63,    -1,    64,
      90,    -1,    65,    90,    -1,    65,    90,    66,    90,    -1,
      90,    66,    90,    -1,    97,    67,   116,    68,    -1,    97,
      69,    87,    -1,    97,    67,   116,    68,    62,    63,    -1,
      97,    67,   116,    68,    62,    98,    63,    -1,    97,    69,
      87,    62,    63,    -1,    97,    69,    87,    62,    98,    63,
      -1,    90,    62,    63,    -1,    90,    62,    98,    63,    -1,
      90,    -1,   162,    -1,    94,    -1,    95,    -1,    96,    -1,
      91,    -1,    92,    -1,    93,    -1,   114,    -1,    98,    70,
     114,    -1,    89,    -1,    91,    -1,    92,    -1,    97,    -1,
       9,    99,    -1,    10,    99,    -1,    99,     9,    -1,    99,
      10,    -1,   101,    97,    -1,    71,    89,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,   100,    -1,   102,    65,
     100,    -1,   102,    76,   100,    -1,   102,    77,   100,    -1,
     102,    -1,   103,    72,   102,    -1,   103,    73,   102,    -1,
     103,    -1,   104,    11,   103,    -1,   104,    12,   103,    -1,
     104,    -1,   105,    78,   104,    -1,   105,    79,   104,    -1,
     105,    13,   104,    -1,   105,    14,   104,    -1,   105,    -1,
     106,    15,   105,    -1,   106,    16,   105,    -1,   106,    -1,
     107,    71,   106,    -1,   107,    -1,   108,    80,   107,    -1,
     108,    -1,   109,    81,   108,    -1,   109,    -1,    -1,   110,
     111,    18,   109,    -1,   110,    -1,    -1,   112,   113,    19,
     110,    -1,   112,    -1,    94,    82,   114,    -1,    99,   115,
     114,    -1,    82,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,   114,    -1,   116,    70,   114,    -1,
     146,    -1,   118,    -1,   121,    -1,   123,    -1,   125,    -1,
     130,    -1,   138,    -1,   159,    -1,   175,    -1,    -1,    38,
     148,   119,    66,   117,    -1,    -1,    39,   120,    66,   117,
      -1,    83,    84,    -1,    83,   122,    84,    -1,   117,    -1,
     122,   117,    -1,    85,    -1,   116,    85,    -1,    31,   116,
      85,    -1,   116,    -1,    40,    62,   124,    63,   117,    -1,
      -1,    40,    62,   124,    63,   117,    41,   126,   117,    -1,
      -1,    42,    62,   116,   127,    63,   117,    -1,   116,    85,
      -1,    85,    -1,   116,    85,    -1,    85,    -1,    -1,    -1,
      43,    62,   131,   116,   132,    63,   117,    -1,    -1,    -1,
      -1,    44,   133,   117,    43,    62,   134,   116,   135,    63,
      85,    -1,    45,    62,   128,   129,    63,   117,    -1,    -1,
      -1,    45,    62,   128,   129,   136,   116,   137,    63,   117,
      -1,    46,    85,    -1,    47,    85,    -1,    48,   116,    85,
      -1,   140,    -1,   139,   140,    -1,   141,    -1,   143,    -1,
     144,    -1,   146,    -1,   149,    -1,   158,    -1,   151,    -1,
      30,     4,   148,     3,    62,    63,    85,    -1,    30,     4,
     148,     3,    62,   142,    63,    85,    -1,    30,     4,   148,
       3,    62,    63,     3,    85,    -1,    30,     4,   148,     3,
      62,   142,    63,     3,    85,    -1,   148,    -1,   142,    70,
     148,    -1,    35,     4,    85,    -1,    32,   145,    85,    -1,
      89,    -1,   145,    70,    89,    -1,    37,   147,    85,    -1,
       3,    82,   148,    -1,   147,    70,     3,    82,   148,    -1,
       7,    -1,     8,    -1,     6,    -1,     5,    -1,     4,    -1,
       3,    -1,    31,   150,    85,    -1,     3,    -1,   150,    70,
       3,    -1,     3,    82,   148,    -1,   150,    70,     3,    82,
     148,    -1,    -1,   153,    89,   152,    83,   154,    84,    -1,
      34,    -1,    33,    -1,   155,    -1,   154,   155,    -1,   144,
      -1,   146,    -1,   149,    -1,   158,    -1,   151,    -1,     3,
      -1,   156,    70,     3,    -1,    32,     3,    -1,    32,     3,
      62,    63,    -1,    32,     3,    62,   156,    63,    -1,   157,
     121,    -1,    -1,    -1,    60,    62,     6,    70,   160,   163,
     161,    63,    85,    -1,    61,    62,     6,    70,   173,    63,
      -1,   164,    -1,   164,   172,    -1,    49,   165,   166,   171,
      -1,     3,    -1,   165,    70,     3,    -1,    50,   167,    -1,
      -1,     3,   168,   170,    -1,    -1,   167,    70,     3,   169,
     170,    -1,    51,   173,    -1,    -1,    52,    59,   173,    -1,
      -1,    53,    54,   174,    -1,   112,    -1,   173,    55,    -1,
     173,    56,    -1,   173,    -1,   173,    57,    -1,   173,    58,
      -1,    36,    -1
};

/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
const unsigned short int
yy::Scriptc_parser::yyprhs_[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      21,    23,    25,    29,    32,    35,    40,    44,    49,    53,
      60,    68,    74,    81,    85,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   112,   114,   116,   118,   120,
     123,   126,   129,   132,   135,   138,   140,   142,   144,   146,
     148,   152,   156,   160,   162,   166,   170,   172,   176,   180,
     182,   186,   190,   194,   198,   200,   204,   208,   210,   214,
     216,   220,   222,   226,   228,   229,   234,   236,   237,   242,
     244,   248,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   299,   305,   306,   311,   314,
     318,   320,   323,   325,   328,   332,   334,   340,   341,   350,
     351,   358,   361,   363,   366,   368,   369,   370,   378,   379,
     380,   381,   392,   399,   400,   401,   411,   414,   417,   421,
     423,   426,   428,   430,   432,   434,   436,   438,   440,   448,
     457,   466,   476,   478,   482,   486,   490,   492,   496,   500,
     504,   510,   512,   514,   516,   518,   520,   522,   526,   528,
     532,   536,   542,   543,   550,   552,   554,   556,   559,   561,
     563,   565,   567,   569,   571,   575,   578,   583,   589,   592,
     593,   594,   604,   611,   613,   616,   621,   623,   627,   630,
     631,   635,   636,   642,   645,   646,   650,   651,   655,   657,
     660,   663,   665,   668,   671
};

/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
const unsigned short int
yy::Scriptc_parser::yyrline_[] =
{
       0,    39,    39,    46,    47,    48,    49,    50,    54,    59,
      67,    71,    75,    79,    83,    87,    92,    99,   100,   104,
     108,   112,   116,   123,   127,   134,   135,   136,   140,   144,
     148,   152,   156,   160,   164,   171,   175,   179,   187,   188,
     192,   196,   200,   204,   208,   215,   216,   217,   218,   222,
     223,   227,   231,   238,   239,   243,   250,   251,   255,   262,
     263,   267,   271,   275,   282,   283,   287,   294,   295,   302,
     303,   310,   311,   318,   319,   319,   327,   328,   328,   336,
     337,   341,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   362,   363,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   382,   382,   383,   383,   387,   388,
     392,   393,   397,   398,   402,   409,   416,   420,   420,   424,
     424,   431,   437,   445,   449,   457,   457,   457,   461,   461,
     461,   461,   465,   472,   472,   472,   480,   484,   488,   495,
     496,   500,   501,   502,   503,   504,   505,   506,   510,   514,
     518,   522,   529,   533,   540,   547,   550,   554,   560,   563,
     567,   574,   575,   576,   577,   578,   579,   583,   587,   591,
     595,   599,   606,   606,   613,   614,   618,   619,   623,   624,
     625,   626,   627,   631,   635,   642,   647,   652,   660,   668,
     668,   668,   672,   679,   680,   684,   689,   693,   700,   704,
     704,   708,   708,   715,   720,   726,   730,   734,   738,   742,
     746,   750,   754,   758,   765
};

// Print the state stack on the debug stream.
void
yy::Scriptc_parser::yystack_print_ ()
{
  *yycdebug_ << "Stack now";
  for (state_stack_type::const_iterator i = yystate_stack_.begin ();
       i != yystate_stack_.end (); ++i)
    *yycdebug_ << ' ' << *i;
  *yycdebug_ << std::endl;
}

// Report on the debug stream that the rule \a yyrule is going to be reduced.
void
yy::Scriptc_parser::yyreduce_print_ (int yyrule)
{
  unsigned int yylno = yyrline_[yyrule];
  /* Print the symbols being reduced, and their result.  */
  *yycdebug_ << "Reducing stack by rule " << yyn_ - 1
             << " (line " << yylno << "), ";
  for (unsigned short int i = yyprhs_[yyn_];
       0 <= yyrhs_[i]; ++i)
    *yycdebug_ << yytname_[yyrhs_[i]] << ' ';
  *yycdebug_ << "-> " << yytname_[yyr1_[yyn_]] << std::endl;
}
#endif // YYDEBUG

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
yy::Scriptc_parser::token_number_type
yy::Scriptc_parser::yytranslate_ (int token)
{
  static
  const token_number_type
  translate_table[] =
  {
         0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    77,    71,     2,
      62,    63,    65,    72,    70,    73,    69,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    85,
      78,    82,    79,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    81,    84,    74,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
  };
  if ((unsigned int) token <= yyuser_token_number_max_)
    return translate_table[token];
  else
    return yyundef_token_;
}

const int yy::Scriptc_parser::yyeof_ = 0;
const int yy::Scriptc_parser::yylast_ = 776;
const int yy::Scriptc_parser::yynnts_ = 90;
const int yy::Scriptc_parser::yyempty_ = -2;
const int yy::Scriptc_parser::yyfinal_ = 28;
const int yy::Scriptc_parser::yyterror_ = 1;
const int yy::Scriptc_parser::yyerrcode_ = 256;
const int yy::Scriptc_parser::yyntokens_ = 86;

const unsigned int yy::Scriptc_parser::yyuser_token_number_max_ = 316;
const yy::Scriptc_parser::token_number_type yy::Scriptc_parser::yyundef_token_ = 2;




