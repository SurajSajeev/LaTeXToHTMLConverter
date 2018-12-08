/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_A_TAB_H_INCLUDED
# define YY_YY_A_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDT = 258,
    LBEGINT = 259,
    INTE = 260,
    TABLE = 261,
    SECTION = 262,
    SUBS = 263,
    SUM = 264,
    BR = 265,
    PARA = 266,
    LABEL = 267,
    REF = 268,
    OPB = 269,
    BOLD = 270,
    UNDL = 271,
    CLB = 272,
    ITALIC = 273,
    ENUM = 274,
    ITEM = 275,
    TAB = 276,
    FIG = 277,
    GRAPHIC = 278,
    SUP = 279,
    SUB = 280,
    LEFT = 281,
    CAPTION = 282,
    RIGHT = 283,
    CENTER = 284,
    LARGE = 285,
    MTHOP = 286,
    MTHCL = 287,
    HUGE = 288,
    TINY = 289,
    FRAC = 290,
    CBCTO = 291,
    CBCTC = 292,
    SQBT = 293,
    SQRT = 294,
    SQBC = 295,
    TYPE = 296,
    DOCUMENT = 297,
    COMMENT = 298,
    SMALL = 299,
    ESCCHAR = 300,
    DLR = 301,
    ARTICLE = 302,
    DOCCLS = 303,
    WORD = 304,
    WS = 305,
    AMP = 306,
    COL = 307,
    PIP = 308,
    HLINE = 309,
    NUMBER = 310,
    USEPKG = 311,
    ITEMIZE = 312,
    BEGFIG = 313,
    ENDFIG = 314,
    BEGTAB = 315,
    ENDTAB = 316,
    COLON = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "a.y" /* yacc.c:1909  */

       char trans[18000];                                             //declared a type  trans for storing strings
       int numeral;
       struct ltDoc*            root2;
       struct CONTENT*          contype; 
       struct SUBCONTENT*       subcont;
       struct COMMENT*          com;
       struct FEATURES*         feat;
       struct GRAPHICS*         grap;
       struct SECTION*          sect;
       struct OCFEAT*           ocfeat;
       struct ENUMER*           enuma;
       struct ITEMIZE*          itema; 
       struct ENITTEXT*         eni;
       struct MATH*             mathm;
       struct MATHC*            mathcont;
       struct MATHF*            mathft;
       struct IBL*              ibl;
       struct FIGF*             figf;
       struct FIGC*             figc;
       struct CAPTION*          cap;
       struct TABULAR*          tab;
       struct TABCONTENT*       tabc;
       struct RCNT*             rcnt;
       struct REF*              refe;
       struct LABEL*            labl;

      

#line 147 "a.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A_TAB_H_INCLUDED  */
