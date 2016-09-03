%{
#include "scriptc_syntax.cpp"
%}

%option outfile="scriptc_compiler.cpp"

%option c++
%option noyywrap
%option yylineno

%x comment
%x cppcomment
%x scriptcomment
%x textout

identifier [a-zA-Z_][0-9a-zA-Z_]*
floating_constant ([0-9]*"."[0-9]+)|([0-9]+".")
decimal_constant ([1-9][0-9]*)|"0"
octal_constant "0"[0-7]+
hex_constant "0x"[0-9a-fA-F]+
simple_escape [abfnrtv'"?\\]
octal_escape  [0-7]{1,3}
hex_escape "x"[0-9a-fA-F]+
escape_sequence [\\]({simple_escape}|{octal_escape}|{hex_escape})
c_char [^'\\\n]|{escape_sequence}
s_char [^"\\\n]|{escape_sequence}
h_tab [\011]
form_feed [\014]
v_tab [\013]
c_return [\015]
horizontal_white [ ]|{h_tab}

%%

{horizontal_white}+    {
			}


({v_tab}|{c_return}|{form_feed})+	   {
			}


({horizontal_white}|{v_tab}|{c_return}|{form_feed})*"\n"   {			
			}

"break"								{ return(BREAK); }
"case"								{ return(CASE); }
"continue"						{ return(CONTINUE); }
"default"							{ return(DEFAULT); }
"do"									{ return(DO); }
"else"								{ return(ELSE); }
"extern"							{ return(EXTERN); }
"for"									{ return(FOR); }
"if"									{ return(IF); }
"return"							{ return(RETURN); }
"switch"							{ return(SWITCH); }
"while"								{ return(WHILE); }
"var"									{ return(VAR); }
"const"								{ return(CONSTKEY); }
"function"  					{ return(FUNCTION); }
"class"								{ return(CLASS); }
"namespace"						{ return(NAMESPACE); }
"include"							{ return(INCLUDE); }

defquery							{return(DEFQUERY);}
execquery							{return(EXECQUERY);}
select               	{return(SELECT);}
from              		{return(FROM);}
where              		{return(WHERE);}
join 									{return(JOIN);}
on									 	{return(ON);}
order            			{return(ORDER);}
by            				{return(BY);}
asc             			{return(ASC);}
desc              		{return(DESC);}
max            				{return(MAX);}
min           				{return(MIN);}

{identifier}          {return(IDENTIFIER);}

{decimal_constant}  	{return(INTEGERconstant);}
{octal_constant}    	{return(OCTALconstant);}
{hex_constant}      	{return(HEXconstant);}
{floating_constant} 	{return(FLOATINGconstant);}

[']{c_char}*[']   		{return(STRING_LITERAL);}
["]{s_char}*["]   		{return(STRING_LITERAL);}

"/*"									{BEGIN(comment);}
<comment>[^*]*      	{}
<comment>"*"+[^*/]* 	{}
<comment>"*"+"/"      BEGIN(INITIAL);

"//"									{BEGIN(cppcomment);}
<cppcomment>[^\n]*		{}
<cppcomment>\n				{BEGIN(INITIAL);}

"#"										{BEGIN(scriptcomment);}
<scriptcomment>[^\n]*	{}
<scriptcomment>\n			{BEGIN(INITIAL);}

"@"														{BEGIN(textout);}
<textout>"$"				  				{BEGIN(INITIAL);}
<textout>([^@\$]"@@"?"$$"?)*	{return(TEXTBLOCK);}

">>="						{ return(RIGHT_ASSIGN); }
"<<="						{ return(LEFT_ASSIGN); }
"+="						{ return(ADD_ASSIGN); }
"-="						{ return(SUB_ASSIGN); }
"*="						{ return(MUL_ASSIGN); }
"/="						{ return(DIV_ASSIGN); }
"%="						{ return(MOD_ASSIGN); }
"&="						{ return(AND_ASSIGN); }
"^="						{ return(XOR_ASSIGN); }
"|="						{ return(OR_ASSIGN); }
">>"						{ return(RIGHT_OP); }
"<<"						{ return(LEFT_OP); }
"++"						{ return(INC_OP); }
"--"						{ return(DEC_OP); }
"&&"						{ return(AND_OP); }
"||"						{ return(OR_OP); }
"<="						{ return(LE_OP); }
">="						{ return(GE_OP); }
"=="						{ return(EQ_OP); }
"!="						{ return(NE_OP); }
"::"						{ return(CLCL_OP); }
";"							{ return(';'); }
"{"							{ return('{'); }
"}"							{ return('}'); }
","							{ return(','); }
"="							{ return('='); }
"("							{ return('('); }
")"							{ return(')'); }
"["							{ return('['); }
"]"							{ return(']'); }
"."							{ return('.'); }
"&"							{ return('&'); }
"!"							{ return('!'); }
"~"							{ return('~'); }
"-"							{ return('-'); }
"+"							{ return('+'); }
"*"							{ return('*'); }
"/"							{ return('/'); }
"%"							{ return('%'); }
"<"							{ return('<'); }
">"							{ return('>'); }
"^"							{ return('^'); }
"|"							{ return('|'); }
":"							{ return(':'); }
"?"							{ return('?'); }

.			{ /* ignore bad characters */ }

%%