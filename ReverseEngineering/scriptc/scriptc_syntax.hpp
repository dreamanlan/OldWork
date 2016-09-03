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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif





