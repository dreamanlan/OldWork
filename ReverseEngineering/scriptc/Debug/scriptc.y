%{
#include "Parser.h"
%}

%output="scriptc_syntax.cpp"

%verbose 
%debug
%no-lines
%pure-parser 
%error-verbose 
%skeleton "lalr1.cc"
%define "parser_class_name" "Scriptc_parser"
%defines


%token IDENTIFIER              STRING_LITERAL
%token FLOATINGconstant        INTEGERconstant
%token OCTALconstant           HEXconstant

%token INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP CLCL_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 

%token EXTERN VAR FUNCTION CLASS NAMESPACE INCLUDE TEXTBLOCK CONSTKEY

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN 

%token SELECT          FROM            WHERE           JOIN
%token ORDER           BY							 ASC						 DESC
%token MAX						 MIN						 ON
%token DEFQUERY			 EXECQUERY

%start translation_unit

%%
constname
	: IDENTIFIER
		{
			GenPushCstr($1);
		}
	;
	
constant_expression
	: OCTALconstant	
	| HEXconstant
	| INTEGERconstant
	| FLOATINGconstant
	| STRING_LITERAL
	;
		
namespace_expression
	: IDENTIFIER
		{
			PushNamespace($1);
			$$=1;
		}
	| namespace_expression CLCL_OP IDENTIFIER
		{
			PushNamespace($3);
			$$=$1+1;
		}
	;	
	
primary_expression
	: namespace_expression
		{
			GenPush(PopNamespace($1),0,$1-1);
		}
	| constant_expression
		{
			GenPush($1,0);
		}
	| '(' expression ')'
	;
	
arg_expression
	: '?' primary_expression
	;
	
ptr_expression
	: '*' primary_expression
		{
			GenPushConst(12);
		}
	| '*' primary_expression ':' primary_expression
	;

	
cast_expression
	: primary_expression ':' primary_expression
		{
			GenCalc($2);
		}
	;	
			
objattr_expression
	: postfix_expression '[' expression ']'
	| postfix_expression '.' constname
	;
	
objcall_expression
	: postfix_expression '[' expression ']' '(' ')'
		{
	  	$$=0;
		}
	| postfix_expression '[' expression ']' '(' argument_expression_list ')'
		{
	  	$$=$6;
		}
  | postfix_expression '.' constname '(' ')'
	  {
	  	$$=0;
	  }
  | postfix_expression '.' constname '(' argument_expression_list ')'
	  {
	  	$$=$5;
	  }
	;
	
call_expression
	: primary_expression '(' ')'
    {
    	$$=0;
    }
	| primary_expression '(' argument_expression_list ')'
    {
    	$$=$3;
    }
	;	

postfix_expression
	: primary_expression
	| execquery_expression
	| objattr_expression
		{
			GenObjGetAttr();
		}
	| objcall_expression
		{		
	  	GenObjCall($1);
		}
	| call_expression
		{
			GenCall($1);
		}
	| arg_expression	
		{
			GenArg();
		}
	| ptr_expression
		{
			GenPtrCalc();
		}
	| cast_expression
	;

argument_expression_list
	: assignment_expression
    {
    	$$=1;
    }
	| argument_expression_list ',' assignment_expression
    {
    	$$=$1+1;
    }
	;
		
lvalue_expression
	: namespace_expression
		{
			GenPush(PopNamespace($1),1,$1-1);
		}
	| arg_expression	
		{
			GenArg(1);
		}
	| ptr_expression
		{
			GenPtrInfo();
		}
	;		


unary_expression
	: postfix_expression
	| INC_OP lvalue_expression		
		{
			GenCalc($1,1);
		}
	| DEC_OP lvalue_expression
		{
			GenCalc($1,1);
		}
	| lvalue_expression INC_OP
    {
    	GenCalc($2,1);
    }
	| lvalue_expression DEC_OP
    {
    	GenCalc($2,1);
    }
	| unary_operator postfix_expression
		{
			GenCalc($1,1);
		}
  | '&' namespace_expression
  	{  		
			GenAddress(PopNamespace($2),$2-1);
  	}
	;

unary_operator
	: '+'
	| '-'
	| '~'
	| '!'
	;

multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression
		{
			GenCalc($2);
		}
	| multiplicative_expression '/' unary_expression
		{
			GenCalc($2);
		}
	| multiplicative_expression '%' unary_expression
		{
			GenCalc($2);
		}
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
		{
			GenCalc($2);
		}
	| additive_expression '-' multiplicative_expression
		{
			GenCalc($2);
		}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
		{
			GenCalc($2);
		}
	| shift_expression RIGHT_OP additive_expression
		{
			GenCalc($2);
		}
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
		{
			GenCalc($2);
		}
	| relational_expression '>' shift_expression
		{
			GenCalc($2);
		}
	| relational_expression LE_OP shift_expression
		{
			GenCalc($2);
		}
	| relational_expression GE_OP shift_expression
		{
			GenCalc($2);
		}
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
		{
			GenCalc($2);
		}
	| equality_expression NE_OP relational_expression
		{
			GenCalc($2);
		}
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
		{
			GenCalc($2);
		}
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
		{
			GenCalc($2);
		}
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
		{
			GenCalc($2);
		}
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression {PushLogicCheck(0);} AND_OP inclusive_or_expression
		{
			GenCalc($3);
			PopLogicCheck(0);
		}
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression {PushLogicCheck(1);} OR_OP logical_and_expression
		{
			GenCalc($3);
			PopLogicCheck(1);
		}
	;

assignment_expression
	: logical_or_expression
	| objattr_expression '=' assignment_expression
		{
			GenObjSetAttr();
		}
	| lvalue_expression assignment_operator assignment_expression
		{
			GenCalc($2);
		}
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;	

expression
	: assignment_expression
	| expression ',' assignment_expression	
		{
			GenCalc($2);
		}
	;

statement
	: const_definition
	| labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	| loadquery_statement
	| textblock_statement
	;

labeled_statement
	: CASE defed_constant {GenCase($2);} ':' statement
	| DEFAULT {GenDefault();} ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
		{
			GenPop();
		}
	| VAR expression ';'
		{
			GenPop();
		}	
	;
	
ifexp
	: expression
		{
			PushIfThen();
		}
	;	

selection_statement
	: IF '(' ifexp ')' statement
		{
			PopIfThen();
		}
	| IF '(' ifexp ')' statement ELSE {PushIfElse();PopIfThen();} statement
		{
			PopIfElse();
		}
	| SWITCH '(' expression {PushSwitch();} ')' statement
		{
			PopSwitch();
		}
	;

for1thexp_statement
	: expression ';' 
		{
			GenPop();
			PushLoop(2);
			GenLoopLogicStart();
		}
	| ';'
		{
			PushLoop(2);
			GenLoopLogicStart();
		}
	;
	
for2thexp_statement
	: expression ';' 
		{
			GenLoopLogicEnd();
		}
	| ';'
		{
			GenPushConst(1);
			GenLoopLogicEnd();			
		}
	;

iteration_statement
	: WHILE '(' {PushLoop(0);GenLoopLogicStart();} expression {GenLoopLogicEnd();} ')' statement
		{
			PopLoop();
		}
	| DO {PushLoop(1);} statement WHILE '(' {GenLoopLogicStart();} expression {GenLoopLogicEnd();} ')' ';'
		{
			PopLoop();
		}
	| FOR '(' for1thexp_statement for2thexp_statement ')' statement
		{
			PushFor3thExp();
			PauseFor3thExp();
			PopFor3thExp();
			PopLoop();
		}
	| FOR '(' for1thexp_statement for2thexp_statement {PushFor3thExp();} expression {GenPop();PauseFor3thExp();} ')' statement
		{
			PopFor3thExp();
			PopLoop();
		}
	;

jump_statement
	: CONTINUE ';'
		{
			GenContinue();
		}
	| BREAK ';'
		{
			GenBreak();
		}
	| RETURN expression ';'
		{
			GenReturn();
		}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: extern_declaration
	| include_declaration
	| function_declaration
	| const_definition
	| var_definition
	| function_definition
	| namespace_definition
	;
	
extern_declaration
	: EXTERN STRING_LITERAL defed_constant IDENTIFIER '(' ')' ';'
		{
			DeclOuterFunc($2,$4,$3,$4,true);
		}
	| EXTERN STRING_LITERAL defed_constant IDENTIFIER '(' integer_list ')' ';'
		{
			DeclOuterFunc($2,$4,$3,$4);
		}
	| EXTERN STRING_LITERAL defed_constant IDENTIFIER '(' ')' IDENTIFIER ';'
		{
			DeclOuterFunc($2,$4,$3,$7,true);
		}
	| EXTERN STRING_LITERAL defed_constant IDENTIFIER '(' integer_list ')' IDENTIFIER ';'
		{
			DeclOuterFunc($2,$4,$3,$8);
		}
	;

integer_list
	: defed_constant
		{			
			OuterArgSize($1,true);
		}
	| integer_list ',' defed_constant
		{
			OuterArgSize($3);
		}
	;
	
include_declaration
	: INCLUDE STRING_LITERAL ';'
		{
			GenInclude($2);
		}
	;

function_declaration
	: FUNCTION function_list ';'
	
function_list
	: namespace_expression
		{
			DeclFunction(PopNamespace($1));
		}
	| function_list ',' namespace_expression
		{
			DeclFunction(PopNamespace($3));
		}
	;
const_definition
	: CONSTKEY const_list ';'
	
const_list
	: IDENTIFIER '=' defed_constant
		{
			DefConst($1,$3);
		}
	| const_list ',' IDENTIFIER '=' defed_constant
		{
			DefConst($3,$5);
		}
	;
	
defed_constant
	: OCTALconstant	
	| HEXconstant
	| INTEGERconstant
	| FLOATINGconstant
	| STRING_LITERAL
	| IDENTIFIER
	;
	
var_definition
	: VAR var_list ';'
	;
	
var_list
	: IDENTIFIER
		{
			DefVar($1);
		}
	| var_list ',' IDENTIFIER
		{
			DefVar($3);
		}
	| IDENTIFIER '=' defed_constant
		{
			DefVar($1,$3);
		}
	| var_list ',' IDENTIFIER '=' defed_constant
		{
			DefVar($3,$5);
		}
	;
	
namespace_definition
	: namespace_keyword namespace_expression {$$=PopNamespace($2);StartNamespace($$);} '{' namespace_body '}'
		{
			EndNamespace($3);
		}
	;

namespace_keyword
	: NAMESPACE
	| CLASS
	;
	
namespace_body
	: namespace_body_list
	| namespace_body namespace_body_list
	;
	
namespace_body_list
	: function_declaration
	| const_definition
	| var_definition
	| function_definition
	| namespace_definition
	;

arg_list
	: IDENTIFIER
		{
			DeclArg($1);
		}
	| arg_list ',' IDENTIFIER
		{
			DeclArg($3);
		}
	;

function_head
	:	FUNCTION IDENTIFIER
		{
			StartFunction($2);
			$$=$2;
		}
	| FUNCTION IDENTIFIER '(' ')'
		{
			StartFunction($2);
			$$=$2;
		}
	| FUNCTION IDENTIFIER '(' arg_list ')'
		{
			StartFunction($2);
			$$=$2;
		}
	;

function_definition
	: function_head
	 	compound_statement
	 	{
	 		EndFunction($1);
	 	}
	;
	
loadquery_statement
	:	DEFQUERY '(' INTEGERconstant ',' {PushQuery($3);} select_no_parens {PopQuery();} ')' ';'
	;
	
execquery_expression
	: EXECQUERY '(' INTEGERconstant ',' a_expr ')'
		{
			GenExecQuery($3);
		}
	;

select_no_parens:
			simple_select
			| simple_select sort_clause
		;
			
simple_select:
			SELECT target_list
			from_clause join_clause
		;		
		
target_list:
			IDENTIFIER
      {
      	AddSelect($1);
      }				
			| target_list ',' IDENTIFIER
			{
				AddSelect($3);
			}
		;

from_clause:
			FROM from_list
		;

from_list:
			IDENTIFIER {AddFrom($1);} where_clause
			{
				AddFromExp($3);				
			}
			| from_list ',' IDENTIFIER {AddFrom($3);} where_clause
			{
				AddFromExp($5);
			}
		;
		
where_clause:
		WHERE a_expr
		{
			$$=GenExpression();
		}
		|
		{
			$$=-1;
		} 
		;		

join_clause:
			JOIN ON a_expr
			{
				GenJoin(GenExpression());
			}
			| /*EMPTY*/
		;

sort_clause:
			ORDER BY sortby
		;
	
a_expr:
			logical_or_expression
		;
		
sortby:
			a_expr ASC
			{
				GenSort(GenExpression(),0);
			}
			| a_expr DESC
			{
				GenSort(GenExpression(),1);
			}
			| a_expr
			{
				GenSort(GenExpression(),0);
			}
			| a_expr MAX
			{
				GenSort(GenExpression(),2);
			}
			| a_expr MIN
			{
				GenSort(GenExpression(),3);
			}
		;	
		
textblock_statement
	: TEXTBLOCK
		{
			GenTextBlock($1);
		}
	;		
	
%%
