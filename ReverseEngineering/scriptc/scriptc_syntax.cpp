/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     STRING_LITERAL = 259,
     FLOATINGconstant = 260,
     INTEGERconstant = 261,
     OCTALconstant = 262,
     HEXconstant = 263,
     INC_OP = 264,
     DEC_OP = 265,
     LEFT_OP = 266,
     RIGHT_OP = 267,
     LE_OP = 268,
     GE_OP = 269,
     EQ_OP = 270,
     NE_OP = 271,
     CLCL_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     EXTERN = 285,
     VAR = 286,
     FUNCTION = 287,
     CLASS = 288,
     NAMESPACE = 289,
     INCLUDE = 290,
     TEXTBLOCK = 291,
     CONSTKEY = 292,
     CASE = 293,
     DEFAULT = 294,
     IF = 295,
     ELSE = 296,
     SWITCH = 297,
     WHILE = 298,
     DO = 299,
     FOR = 300,
     CONTINUE = 301,
     BREAK = 302,
     RETURN = 303,
     SELECT = 304,
     FROM = 305,
     WHERE = 306,
     JOIN = 307,
     ORDER = 308,
     BY = 309,
     ASC = 310,
     DESC = 311,
     MAX = 312,
     MIN = 313,
     ON = 314,
     DEFQUERY = 315,
     EXECQUERY = 316
   };
#endif
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define FLOATINGconstant 260
#define INTEGERconstant 261
#define OCTALconstant 262
#define HEXconstant 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define CLCL_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define EXTERN 285
#define VAR 286
#define FUNCTION 287
#define CLASS 288
#define NAMESPACE 289
#define INCLUDE 290
#define TEXTBLOCK 291
#define CONSTKEY 292
#define CASE 293
#define DEFAULT 294
#define IF 295
#define ELSE 296
#define SWITCH 297
#define WHILE 298
#define DO 299
#define FOR 300
#define CONTINUE 301
#define BREAK 302
#define RETURN 303
#define SELECT 304
#define FROM 305
#define WHERE 306
#define JOIN 307
#define ORDER 308
#define BY 309
#define ASC 310
#define DESC 311
#define MAX 312
#define MIN 313
#define ON 314
#define DEFQUERY 315
#define EXECQUERY 316




/* Copy the first part of user declarations.  */
#line 1 "scriptc.y"

#include "Parser.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 212 "scriptc_syntax.cpp"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   776

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  90
/* YYNRULES -- Number of rules. */
#define YYNRULES  214
/* YYNRULES -- Number of states. */
#define YYNSTATES  364

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
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

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
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

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,    34,    34,    41,    42,    43,    44,    45,    49,    54,
      62,    66,    70,    74,    78,    82,    87,    94,    95,    99,
     103,   107,   111,   118,   122,   129,   130,   131,   135,   139,
     143,   147,   151,   155,   159,   166,   170,   174,   182,   183,
     187,   191,   195,   199,   203,   210,   211,   212,   213,   217,
     218,   222,   226,   233,   234,   238,   245,   246,   250,   257,
     258,   262,   266,   270,   277,   278,   282,   289,   290,   297,
     298,   305,   306,   313,   314,   314,   322,   323,   323,   331,
     332,   336,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   357,   358,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   377,   377,   378,   378,   382,   383,
     387,   388,   392,   393,   397,   404,   411,   415,   415,   419,
     419,   426,   432,   440,   444,   452,   452,   452,   456,   456,
     456,   456,   460,   467,   467,   467,   475,   479,   483,   490,
     491,   495,   496,   497,   498,   499,   500,   501,   505,   509,
     513,   517,   524,   528,   535,   542,   545,   549,   555,   558,
     562,   569,   570,   571,   572,   573,   574,   578,   582,   586,
     590,   594,   601,   601,   608,   609,   613,   614,   618,   619,
     620,   621,   622,   626,   630,   637,   642,   647,   655,   663,
     663,   663,   667,   674,   675,   679,   684,   688,   695,   699,
     699,   703,   703,   710,   715,   721,   725,   729,   733,   737,
     741,   745,   749,   753,   760
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
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
  "ASC", "DESC", "MAX", "MIN", "ON", "DEFQUERY", "EXECQUERY", "'('", 
  "')'", "'?'", "'*'", "':'", "'['", "']'", "'.'", "','", "'&'", "'+'", 
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'='", 
  "'{'", "'}'", "';'", "$accept", "constname", "constant_expression", 
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
  "statement_list", "expression_statement", "ifexp", 
  "selection_statement", "@5", "@6", "for1thexp_statement", 
  "for2thexp_statement", "iteration_statement", "@7", "@8", "@9", "@10", 
  "@11", "@12", "@13", "jump_statement", "translation_unit", 
  "external_declaration", "extern_declaration", "integer_list", 
  "include_declaration", "function_declaration", "function_list", 
  "const_definition", "const_list", "defed_constant", "var_definition", 
  "var_list", "namespace_definition", "@14", "namespace_keyword", 
  "namespace_body", "namespace_body_list", "arg_list", "function_head", 
  "function_definition", "loadquery_statement", "@15", "@16", 
  "execquery_expression", "select_no_parens", "simple_select", 
  "target_list", "from_clause", "from_list", "@17", "@18", "where_clause", 
  "join_clause", "sort_clause", "a_expr", "sortby", "textblock_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
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
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
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
static const unsigned char yyr2[] =
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
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

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -295
static const short yypact[] =
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

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -186
static const short yytable[] =
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

static const short yycheck[] =
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

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
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

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/
#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


//---------------------------------------------------------------------------------------------
//为了通过宏定义#define yyparse yyparserclass::yyparse与#define yylex yyparserclass::yylex
//来生成C++分析器类（将词法分析器作为成员变量，从而使分析器真正可重入）,必须去掉这些C原型声明
/* Prevent warnings from -Wmissing-prototypes.  */
//#ifdef YYPARSE_PARAM
//# if defined (__STDC__) || defined (__cplusplus)
//int yyparse (void *YYPARSE_PARAM);
//# else
//int yyparse ();
//# endif
//#else /* ! YYPARSE_PARAM */
/*#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif*/
//#endif /* ! YYPARSE_PARAM */
//----------------------------------------------------------------------------------------------






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
yyparseret yyparse (void *YYPARSE_PARAM)
# else
yyparseret yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
yyparseret
yyparse (void)
#else
yyparseret
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 35 "scriptc.y"
    {
			GenPushCstr(yyvsp[0]);
		;}
    break;

  case 8:
#line 50 "scriptc.y"
    {
			PushNamespace(yyvsp[0]);
			yyval=1;
		;}
    break;

  case 9:
#line 55 "scriptc.y"
    {
			PushNamespace(yyvsp[0]);
			yyval=yyvsp[-2]+1;
		;}
    break;

  case 10:
#line 63 "scriptc.y"
    {
			GenPush(PopNamespace(yyvsp[0]),0,yyvsp[0]-1);
		;}
    break;

  case 11:
#line 67 "scriptc.y"
    {
			GenPush(yyvsp[0],0);
		;}
    break;

  case 14:
#line 79 "scriptc.y"
    {
			GenPushConst(12);
		;}
    break;

  case 16:
#line 88 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 19:
#line 100 "scriptc.y"
    {
	  	yyval=0;
		;}
    break;

  case 20:
#line 104 "scriptc.y"
    {
	  	yyval=yyvsp[-1];
		;}
    break;

  case 21:
#line 108 "scriptc.y"
    {
	  	yyval=0;
	  ;}
    break;

  case 22:
#line 112 "scriptc.y"
    {
	  	yyval=yyvsp[-1];
	  ;}
    break;

  case 23:
#line 119 "scriptc.y"
    {
    	yyval=0;
    ;}
    break;

  case 24:
#line 123 "scriptc.y"
    {
    	yyval=yyvsp[-1];
    ;}
    break;

  case 27:
#line 132 "scriptc.y"
    {
			GenObjGetAttr();
		;}
    break;

  case 28:
#line 136 "scriptc.y"
    {		
	  	GenObjCall(yyvsp[0]);
		;}
    break;

  case 29:
#line 140 "scriptc.y"
    {
			GenCall(yyvsp[0]);
		;}
    break;

  case 30:
#line 144 "scriptc.y"
    {
			GenArg();
		;}
    break;

  case 31:
#line 148 "scriptc.y"
    {
			GenPtrCalc();
		;}
    break;

  case 33:
#line 156 "scriptc.y"
    {
    	yyval=1;
    ;}
    break;

  case 34:
#line 160 "scriptc.y"
    {
    	yyval=yyvsp[-2]+1;
    ;}
    break;

  case 35:
#line 167 "scriptc.y"
    {
			GenPush(PopNamespace(yyvsp[0]),1,yyvsp[0]-1);
		;}
    break;

  case 36:
#line 171 "scriptc.y"
    {
			GenArg(1);
		;}
    break;

  case 37:
#line 175 "scriptc.y"
    {
			GenPtrInfo();
		;}
    break;

  case 39:
#line 184 "scriptc.y"
    {
			GenCalc(yyvsp[-1],1);
		;}
    break;

  case 40:
#line 188 "scriptc.y"
    {
			GenCalc(yyvsp[-1],1);
		;}
    break;

  case 41:
#line 192 "scriptc.y"
    {
    	GenCalc(yyvsp[0],1);
    ;}
    break;

  case 42:
#line 196 "scriptc.y"
    {
    	GenCalc(yyvsp[0],1);
    ;}
    break;

  case 43:
#line 200 "scriptc.y"
    {
			GenCalc(yyvsp[-1],1);
		;}
    break;

  case 44:
#line 204 "scriptc.y"
    {  		
			GenAddress(PopNamespace(yyvsp[0]),yyvsp[0]-1);
  	;}
    break;

  case 50:
#line 219 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 51:
#line 223 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 52:
#line 227 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 54:
#line 235 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 55:
#line 239 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 57:
#line 247 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 58:
#line 251 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 60:
#line 259 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 61:
#line 263 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 62:
#line 267 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 63:
#line 271 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 65:
#line 279 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 66:
#line 283 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 68:
#line 291 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 70:
#line 299 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 72:
#line 307 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 74:
#line 314 "scriptc.y"
    {PushLogicCheck(0);;}
    break;

  case 75:
#line 315 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
			PopLogicCheck(0);
		;}
    break;

  case 77:
#line 323 "scriptc.y"
    {PushLogicCheck(1);;}
    break;

  case 78:
#line 324 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
			PopLogicCheck(1);
		;}
    break;

  case 80:
#line 333 "scriptc.y"
    {
			GenObjSetAttr();
		;}
    break;

  case 81:
#line 337 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 94:
#line 359 "scriptc.y"
    {
			GenCalc(yyvsp[-1]);
		;}
    break;

  case 104:
#line 377 "scriptc.y"
    {GenCase(yyvsp[0]);;}
    break;

  case 106:
#line 378 "scriptc.y"
    {GenDefault();;}
    break;

  case 113:
#line 394 "scriptc.y"
    {
			GenPop();
		;}
    break;

  case 114:
#line 398 "scriptc.y"
    {
			GenPop();
		;}
    break;

  case 115:
#line 405 "scriptc.y"
    {
			PushIfThen();
		;}
    break;

  case 116:
#line 412 "scriptc.y"
    {
			PopIfThen();
		;}
    break;

  case 117:
#line 415 "scriptc.y"
    {PushIfElse();PopIfThen();;}
    break;

  case 118:
#line 416 "scriptc.y"
    {
			PopIfElse();
		;}
    break;

  case 119:
#line 419 "scriptc.y"
    {PushSwitch();;}
    break;

  case 120:
#line 420 "scriptc.y"
    {
			PopSwitch();
		;}
    break;

  case 121:
#line 427 "scriptc.y"
    {
			GenPop();
			PushLoop(2);
			GenLoopLogicStart();
		;}
    break;

  case 122:
#line 433 "scriptc.y"
    {
			PushLoop(2);
			GenLoopLogicStart();
		;}
    break;

  case 123:
#line 441 "scriptc.y"
    {
			GenLoopLogicEnd();
		;}
    break;

  case 124:
#line 445 "scriptc.y"
    {
			GenPushConst(1);
			GenLoopLogicEnd();			
		;}
    break;

  case 125:
#line 452 "scriptc.y"
    {PushLoop(0);GenLoopLogicStart();;}
    break;

  case 126:
#line 452 "scriptc.y"
    {GenLoopLogicEnd();;}
    break;

  case 127:
#line 453 "scriptc.y"
    {
			PopLoop();
		;}
    break;

  case 128:
#line 456 "scriptc.y"
    {PushLoop(1);;}
    break;

  case 129:
#line 456 "scriptc.y"
    {GenLoopLogicStart();;}
    break;

  case 130:
#line 456 "scriptc.y"
    {GenLoopLogicEnd();;}
    break;

  case 131:
#line 457 "scriptc.y"
    {
			PopLoop();
		;}
    break;

  case 132:
#line 461 "scriptc.y"
    {
			PushFor3thExp();
			PauseFor3thExp();
			PopFor3thExp();
			PopLoop();
		;}
    break;

  case 133:
#line 467 "scriptc.y"
    {PushFor3thExp();;}
    break;

  case 134:
#line 467 "scriptc.y"
    {GenPop();PauseFor3thExp();;}
    break;

  case 135:
#line 468 "scriptc.y"
    {
			PopFor3thExp();
			PopLoop();
		;}
    break;

  case 136:
#line 476 "scriptc.y"
    {
			GenContinue();
		;}
    break;

  case 137:
#line 480 "scriptc.y"
    {
			GenBreak();
		;}
    break;

  case 138:
#line 484 "scriptc.y"
    {
			GenReturn();
		;}
    break;

  case 148:
#line 506 "scriptc.y"
    {
			DeclOuterFunc(yyvsp[-5],yyvsp[-3],yyvsp[-4],yyvsp[-3],true);
		;}
    break;

  case 149:
#line 510 "scriptc.y"
    {
			DeclOuterFunc(yyvsp[-6],yyvsp[-4],yyvsp[-5],yyvsp[-4]);
		;}
    break;

  case 150:
#line 514 "scriptc.y"
    {
			DeclOuterFunc(yyvsp[-6],yyvsp[-4],yyvsp[-5],yyvsp[-1],true);
		;}
    break;

  case 151:
#line 518 "scriptc.y"
    {
			DeclOuterFunc(yyvsp[-7],yyvsp[-5],yyvsp[-6],yyvsp[-1]);
		;}
    break;

  case 152:
#line 525 "scriptc.y"
    {			
			OuterArgSize(yyvsp[0],true);
		;}
    break;

  case 153:
#line 529 "scriptc.y"
    {
			OuterArgSize(yyvsp[0]);
		;}
    break;

  case 154:
#line 536 "scriptc.y"
    {
			GenInclude(yyvsp[-1]);
		;}
    break;

  case 156:
#line 546 "scriptc.y"
    {
			DeclFunction(PopNamespace(yyvsp[0]));
		;}
    break;

  case 157:
#line 550 "scriptc.y"
    {
			DeclFunction(PopNamespace(yyvsp[0]));
		;}
    break;

  case 159:
#line 559 "scriptc.y"
    {
			DefConst(yyvsp[-2],yyvsp[0]);
		;}
    break;

  case 160:
#line 563 "scriptc.y"
    {
			DefConst(yyvsp[-2],yyvsp[0]);
		;}
    break;

  case 168:
#line 583 "scriptc.y"
    {
			DefVar(yyvsp[0]);
		;}
    break;

  case 169:
#line 587 "scriptc.y"
    {
			DefVar(yyvsp[0]);
		;}
    break;

  case 170:
#line 591 "scriptc.y"
    {
			DefVar(yyvsp[-2],yyvsp[0]);
		;}
    break;

  case 171:
#line 595 "scriptc.y"
    {
			DefVar(yyvsp[-2],yyvsp[0]);
		;}
    break;

  case 172:
#line 601 "scriptc.y"
    {yyval=PopNamespace(yyvsp[0]);StartNamespace(yyval);;}
    break;

  case 173:
#line 602 "scriptc.y"
    {
			EndNamespace(yyvsp[-3]);
		;}
    break;

  case 183:
#line 627 "scriptc.y"
    {
			DeclArg(yyvsp[0]);
		;}
    break;

  case 184:
#line 631 "scriptc.y"
    {
			DeclArg(yyvsp[0]);
		;}
    break;

  case 185:
#line 638 "scriptc.y"
    {
			StartFunction(yyvsp[0]);
			yyval=yyvsp[0];
		;}
    break;

  case 186:
#line 643 "scriptc.y"
    {
			StartFunction(yyvsp[-2]);
			yyval=yyvsp[-2];
		;}
    break;

  case 187:
#line 648 "scriptc.y"
    {
			StartFunction(yyvsp[-3]);
			yyval=yyvsp[-3];
		;}
    break;

  case 188:
#line 657 "scriptc.y"
    {
	 		EndFunction(yyvsp[-1]);
	 	;}
    break;

  case 189:
#line 663 "scriptc.y"
    {PushQuery(yyvsp[-1]);;}
    break;

  case 190:
#line 663 "scriptc.y"
    {PopQuery();;}
    break;

  case 192:
#line 668 "scriptc.y"
    {
			GenExecQuery(yyvsp[-3]);
		;}
    break;

  case 196:
#line 685 "scriptc.y"
    {
      	AddSelect(yyvsp[0]);
      ;}
    break;

  case 197:
#line 689 "scriptc.y"
    {
				AddSelect(yyvsp[0]);
			;}
    break;

  case 199:
#line 699 "scriptc.y"
    {AddFrom(yyvsp[0]);;}
    break;

  case 200:
#line 700 "scriptc.y"
    {
				AddFromExp(yyvsp[0]);				
			;}
    break;

  case 201:
#line 703 "scriptc.y"
    {AddFrom(yyvsp[0]);;}
    break;

  case 202:
#line 704 "scriptc.y"
    {
				AddFromExp(yyvsp[0]);
			;}
    break;

  case 203:
#line 711 "scriptc.y"
    {
			yyval=GenExpression();
		;}
    break;

  case 204:
#line 715 "scriptc.y"
    {
			yyval=-1;
		;}
    break;

  case 205:
#line 722 "scriptc.y"
    {
				GenJoin(GenExpression());
			;}
    break;

  case 209:
#line 738 "scriptc.y"
    {
				GenSort(GenExpression(),0);
			;}
    break;

  case 210:
#line 742 "scriptc.y"
    {
				GenSort(GenExpression(),1);
			;}
    break;

  case 211:
#line 746 "scriptc.y"
    {
				GenSort(GenExpression(),0);
			;}
    break;

  case 212:
#line 750 "scriptc.y"
    {
				GenSort(GenExpression(),2);
			;}
    break;

  case 213:
#line 754 "scriptc.y"
    {
				GenSort(GenExpression(),3);
			;}
    break;

  case 214:
#line 761 "scriptc.y"
    {
			GenTextBlock(yyvsp[0]);
		;}
    break;


    }

/* Line 994 of yacc.c.  */
#line 2377 "scriptc_syntax.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 766 "scriptc.y"



