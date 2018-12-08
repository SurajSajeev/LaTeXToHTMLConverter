/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 14 "a.y" /* yacc.c:339  */
                                           
#include<stdio.h>                                                   //including various files to the bison file
#include<ctype.h>
#include<string.h>
#include"node.h"
#include"labelr.h"
#include"table.h"
#include"capiub.h"
#include"math.h"
#include"rootfunc.h"
#include"features.h"
#include"feature.h"
#include"list.h"
void yyerror(const char *);
FILE *fileout;                                                       //creating pointer for input and output file
FILE *yyin;
int yylex();
extern char * yytext;                                               //yytext for scanning the current token's values
struct ltDoc* root;
int seccount=0;
int subs=0;
int column=0;
int colc=0;
int tabp=0;
int figp=0;
int figc=0;
int tabc=0;

#line 95 "a.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "a.tab.h".  */
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
#line 44 "a.y" /* yacc.c:355  */

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

      

#line 228 "a.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "a.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   179,   179,   182,   191,   197,   198,   201,   208,   212,
     215,   221,   224,   228,   234,   237,   240,   244,   248,   253,
     256,   259,   262,   265,   268,   273,   275,   280,   286,   289,
     294,   298,   302,   307,   310,   313,   319,   322,   325,   328,
     329,   332,   333,   336,   338,   341,   347,   351,   355,   362,
     368,   372,   376,   381,   388,   393,   397,   398,   401,   404,
     407,   412,   413,   414,   415,   418,   423,   427,   431,   440,
     440,   440,   445,   446,   447,   448,   452,   459,   464
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDT", "LBEGINT", "INTE", "TABLE",
  "SECTION", "SUBS", "SUM", "BR", "PARA", "LABEL", "REF", "OPB", "BOLD",
  "UNDL", "CLB", "ITALIC", "ENUM", "ITEM", "TAB", "FIG", "GRAPHIC", "SUP",
  "SUB", "LEFT", "CAPTION", "RIGHT", "CENTER", "LARGE", "MTHOP", "MTHCL",
  "HUGE", "TINY", "FRAC", "CBCTO", "CBCTC", "SQBT", "SQRT", "SQBC", "TYPE",
  "DOCUMENT", "COMMENT", "SMALL", "ESCCHAR", "DLR", "ARTICLE", "DOCCLS",
  "WORD", "WS", "AMP", "COL", "PIP", "HLINE", "NUMBER", "USEPKG",
  "ITEMIZE", "BEGFIG", "ENDFIG", "BEGTAB", "ENDTAB", "COLON", "$accept",
  "begindoc", "latexfile", "docclass", "usepackage", "startst", "endst",
  "content", "subcontent", "features", "br", "section", "ocfeatures",
  "itemize", "itumes", "enumerate", "enumes", "enittext", "tabular",
  "begintab", "format", "colno", "tabcontent", "rowcontent", "endtab",
  "italicboldundl", "comment", "commentbegin", "commentend", "simpletext",
  "graphics", "paragraph", "wows", "math", "mathcontent", "mathfeatures",
  "sqr", "sum", "integral", "frac", "fig", "$@1", "$@2", "figcontent",
  "caption", "label", "ref", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -47,   -70,    13,   -70,   -41,   -70,   -41,    17,   -70,    -9,
      18,    -7,    53,    27,    30,   -70,   -70,    43,    50,    57,
      62,    67,    73,     3,   -70,   -70,   -70,    68,    18,   -70,
     -70,   -70,   -70,   -70,    86,   -70,    86,   -70,    82,   -70,
     -70,   -30,   -30,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
      84,   -70,   -70,   -70,   -70,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,    96,   115,   117,   120,    69,   -70,   -70,
     -70,   -70,   -70,   -17,   123,   -70,   -70,   -30,   122,   124,
      71,   -30,    11,   -70,   -70,   -32,   -26,    35,    52,    38,
      70,    80,    87,   -30,   -30,   -30,   -30,   -70,   -70,   130,
     -70,   -20,   -70,   107,    45,   110,   149,   -70,   112,     6,
     118,   -30,   127,   -70,   -70,   -70,   -30,   -30,   -70,   -70,
     -70,   -70,    89,    91,    94,    97,   -30,   -70,   -70,   -70,
     134,   -70,   -70,   -70,   -70,   135,   167,   -30,   -70,   -30,
     -70,   105,   108,   -70,   -70,   138,   -70,   111,   -70,   -70,
     -70,   -70,   118,   -30,   -70,   -70,   -30,   -70,   113,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     2,     6,     1,     6,     0,     5,     0,
      10,     0,     0,     0,     0,    25,    55,     0,     0,     0,
       0,     0,     0,     0,    57,    56,    69,     0,    10,    13,
      18,    14,    15,    29,     0,    28,     0,    21,     0,    16,
      11,     0,    12,    19,    20,    53,    17,    22,    23,    24,
       0,    37,    33,    50,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,     0,     0,     3,     9,     0,     0,     0,
       0,     0,     0,    52,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,    59,     0,
      74,     0,    75,     0,    35,     0,     0,    40,     0,     0,
      42,    44,     0,    49,    26,    27,     0,     0,    48,    46,
      47,    54,     0,     0,     0,     0,     0,    70,    72,    73,
       0,    34,    30,    32,    39,     0,     0,     0,    36,     0,
      51,     0,     0,    67,    66,     0,    65,     0,    71,     8,
      38,    45,    41,    43,    77,    78,     0,    76,     0,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -70,   169,   -70,   -70,   148,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -34,   -70,   -70,
     -70,   -70,   -70,    40,   -70,   -70,   -70,   -70,   -70,    -4,
     -69,   -70,   -42,   -70,   -70,   114,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,    77,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     7,    10,    75,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    78,    37,    38,
      81,   108,   109,   110,   138,    39,    40,    41,   113,    42,
      43,    44,    45,    46,    67,    68,    69,    70,    71,    72,
      47,    73,   148,   101,   102,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      83,     1,    79,    22,   100,   114,    22,    99,    63,   136,
      99,   115,    64,     5,   112,     6,   137,    24,    25,    24,
      25,     9,    12,    24,    25,    13,    14,    11,    15,    16,
      17,    18,   128,    19,    20,    50,    21,    82,    65,   127,
      83,    22,    66,    83,    83,    83,    83,    83,    83,    83,
      83,    85,    86,    87,    88,    89,    90,    91,    92,    51,
      24,    25,    83,    55,    23,    77,    56,    24,    25,    83,
     131,    74,    52,   104,    63,   118,    26,   111,    64,    57,
      83,    83,    83,    83,    24,    25,    58,    24,    25,   122,
     123,   124,   125,    59,    24,    25,    53,   116,    60,    83,
      83,    24,    25,    61,    65,    83,    77,   119,    66,    62,
      54,    83,   141,   142,   117,    97,    83,   120,    80,    24,
      25,    84,   147,   107,   121,   105,   143,   106,   144,    24,
      25,   145,    93,   111,   146,   153,    24,    25,    24,    25,
      24,    25,   154,    24,    25,   155,    24,    25,   157,   130,
     159,    94,   158,    95,    24,    25,    96,    24,    25,   103,
      24,    25,    24,    25,   134,   135,   126,   132,   133,   139,
     140,   149,   150,   151,   156,     8,    76,   152,   129,     0,
       0,    98
};

static const yytype_int16 yycheck[] =
{
      42,    48,    36,    23,    73,    37,    23,    27,     5,     3,
      27,    37,     9,     0,     3,    56,    10,    49,    50,    49,
      50,     4,     4,    49,    50,     7,     8,    36,    10,    11,
      12,    13,   101,    15,    16,    42,    18,    41,    35,    59,
      82,    23,    39,    85,    86,    87,    88,    89,    90,    91,
      92,    55,    56,    57,    58,    59,    60,    61,    62,     6,
      49,    50,   104,    36,    46,    20,    36,    49,    50,   111,
     104,     3,    19,    77,     5,    37,    58,    81,     9,    36,
     122,   123,   124,   125,    49,    50,    36,    49,    50,    93,
      94,    95,    96,    36,    49,    50,    43,    62,    36,   141,
     142,    49,    50,    36,    35,   147,    20,    37,    39,    36,
      57,   153,   116,   117,    62,    46,   158,    37,    36,    49,
      50,    37,   126,    52,    37,     3,    37,     3,    37,    49,
      50,    37,    36,   137,    37,   139,    49,    50,    49,    50,
      49,    50,    37,    49,    50,    37,    49,    50,    37,    42,
      37,    36,   156,    36,    49,    50,    36,    49,    50,    36,
      49,    50,    49,    50,    52,    53,    36,    57,    19,    51,
      43,    37,    37,     6,    36,     6,    28,   137,   101,    -1,
      -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    64,    65,    66,     0,    56,    67,    67,     4,
      68,    36,     4,     7,     8,    10,    11,    12,    13,    15,
      16,    18,    23,    46,    49,    50,    58,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    81,    82,    88,
      89,    90,    92,    93,    94,    95,    96,   103,   108,   109,
      42,     6,    19,    43,    57,    36,    36,    36,    36,    36,
      36,    36,    36,     5,     9,    35,    39,    97,    98,    99,
     100,   101,   102,   104,     3,    69,    70,    20,    80,    80,
      36,    83,    92,    95,    37,    92,    92,    92,    92,    92,
      92,    92,    92,    36,    36,    36,    36,    46,    98,    27,
      93,   106,   107,    36,    92,     3,     3,    52,    84,    85,
      86,    92,     3,    91,    37,    37,    62,    62,    37,    37,
      37,    37,    92,    92,    92,    92,    36,    59,    93,   107,
      42,    80,    57,    19,    52,    53,     3,    10,    87,    51,
      43,    92,    92,    37,    37,    37,    37,    92,   105,    37,
      37,     6,    86,    92,    37,    37,    36,    37,    92,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    69,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    74,    75,    75,
      76,    77,    78,    79,    80,    80,    81,    82,    83,    84,
      84,    85,    85,    86,    86,    87,    88,    88,    88,    89,
      90,    91,    92,    92,    93,    94,    95,    95,    96,    97,
      97,    98,    98,    98,    98,    99,   100,   101,   102,   104,
     105,   103,   106,   106,   106,   106,   107,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     1,     2,     0,     4,     4,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       4,     2,     4,     2,     3,     2,     4,     2,     4,     2,
       1,     3,     1,     3,     1,     2,     4,     4,     4,     3,
       2,     2,     2,     1,     4,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     4,     4,     4,     7,     0,
       0,     5,     2,     2,     1,     1,     4,     6,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 183 "a.y" /* yacc.c:1646  */
    {
                                                          addcontenttoRoot((yyval.root2),(yyvsp[-1].contype));
                                                          strcat(root->a,"</body>\n</html>\n");
                                                          fprintf(fileout,"%s",root->a);
                                                          }
#line 1450 "a.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 191 "a.y" /* yacc.c:1646  */
    {root=createTreeRoot();
                             (yyval.root2)=root;
                            }
#line 1458 "a.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 202 "a.y" /* yacc.c:1646  */
    {
                                                strcat(root->a,"<html>\n<body>\n");
                                                }
#line 1466 "a.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 212 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.contype)=createcontent((yyvsp[0].contype),(yyvsp[-1].subcont));
                                           }
#line 1474 "a.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 215 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.contype)=createemptycontent();
                                           }
#line 1482 "a.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "a.y" /* yacc.c:1646  */
    {
                                            (yyval.subcont)=createsubcontent0((yyvsp[0].com));
                                           }
#line 1490 "a.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 224 "a.y" /* yacc.c:1646  */
    {
                                             (yyval.subcont)=createsubcontent((yyvsp[0].trans));
                                           }
#line 1498 "a.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 228 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.subcont)=createsubcontent1((yyvsp[0].feat));
                                           }
#line 1506 "a.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 234 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.feat)=createfeatures0((yyvsp[0].sect));
                                           }
#line 1514 "a.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 237 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.feat)=createfeatures1((yyvsp[0].ocfeat));
                                           }
#line 1522 "a.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 240 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.feat)=createfeature2((yyvsp[0].ibl));
                                            }
#line 1530 "a.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 244 "a.y" /* yacc.c:1646  */
    {
                                           (yyval.feat)=createfeatures3((yyvsp[0].mathm));
                                           }
#line 1538 "a.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 248 "a.y" /* yacc.c:1646  */
    {
                                            (yyval.feat)=createbr();
                                            }
#line 1546 "a.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 253 "a.y" /* yacc.c:1646  */
    {
                                            (yyval.feat)=createfeatures5((yyvsp[0].grap));
                                             }
#line 1554 "a.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 256 "a.y" /* yacc.c:1646  */
    {
                                            (yyval.feat)=createpar();
                                             }
#line 1562 "a.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 259 "a.y" /* yacc.c:1646  */
    {
                                             (yyval.feat)=createfeaturet((yyvsp[0].tab));
                                              }
#line 1570 "a.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 262 "a.y" /* yacc.c:1646  */
    {
                                                   (yyval.feat)=createfeaturef((yyvsp[0].figf));
                                                  }
#line 1578 "a.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 265 "a.y" /* yacc.c:1646  */
    {(yyval.feat)=createfeaturel((yyvsp[0].labl));

                }
#line 1586 "a.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 268 "a.y" /* yacc.c:1646  */
    {
                                                   (yyval.feat)=createfeaturer((yyvsp[0].refe));
                                                  }
#line 1594 "a.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 276 "a.y" /* yacc.c:1646  */
    { ++seccount;
                                    subs=0;
                                  (yyval.sect)=createsection((yyvsp[-1].trans),seccount,0,0);
                                }
#line 1603 "a.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 280 "a.y" /* yacc.c:1646  */
    {subs++;
                                                      (yyval.sect)=createsection((yyvsp[-1].trans),seccount,subs,1);
                                                      }
#line 1611 "a.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 286 "a.y" /* yacc.c:1646  */
    {(yyval.ocfeat)=createoc((yyvsp[0].enuma));}
#line 1617 "a.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 289 "a.y" /* yacc.c:1646  */
    {(yyval.ocfeat)=createoc1((yyvsp[0].itema));}
#line 1623 "a.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 294 "a.y" /* yacc.c:1646  */
    {
                                                          (yyval.itema)=concatCon2((yyvsp[-3].itema),(yyvsp[-2].eni));
                                                          }
#line 1631 "a.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "a.y" /* yacc.c:1646  */
    {                  
                            (yyval.itema)=createnewitemize();
                                                          }
#line 1639 "a.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 302 "a.y" /* yacc.c:1646  */
    {     
                                                        (yyval.enuma)=concatCon((yyvsp[-3].enuma),(yyvsp[-2].eni));
                                                        }
#line 1647 "a.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 307 "a.y" /* yacc.c:1646  */
    {
                                         (yyval.enuma)=createnewenumerate();
                                        }
#line 1655 "a.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 310 "a.y" /* yacc.c:1646  */
    {
                                               (yyval.eni)=addtoenittext((yyvsp[0].eni),(yyvsp[-1].trans));
                                               }
#line 1663 "a.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 313 "a.y" /* yacc.c:1646  */
    {
                                      (yyval.eni)=addSimpleText((yyvsp[0].trans));
                                       }
#line 1671 "a.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 319 "a.y" /* yacc.c:1646  */
    {(yyval.tab)=createTabular((yyvsp[-1].tabc));}
#line 1677 "a.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 332 "a.y" /* yacc.c:1646  */
    {(yyval.tabc)=addtrtT((yyvsp[-2].tabc),(yyvsp[0].rcnt));}
#line 1683 "a.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 333 "a.y" /* yacc.c:1646  */
    {(yyval.tabc)=addRtT((yyvsp[0].rcnt));}
#line 1689 "a.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 336 "a.y" /* yacc.c:1646  */
    {(yyval.rcnt)=addRAS((yyvsp[-2].rcnt),(yyvsp[0].trans));}
#line 1695 "a.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 338 "a.y" /* yacc.c:1646  */
    {(yyval.rcnt)=addSimpleTRow((yyvsp[0].trans));}
#line 1701 "a.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 348 "a.y" /* yacc.c:1646  */
    {(yyval.ibl)=createIBU((yyvsp[-1].trans),0);
                    }
#line 1708 "a.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 352 "a.y" /* yacc.c:1646  */
    {(yyval.ibl)=createIBU((yyvsp[-1].trans),1);
                     }
#line 1715 "a.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 356 "a.y" /* yacc.c:1646  */
    {(yyval.ibl)=createIBU((yyvsp[-1].trans),2);
                     }
#line 1722 "a.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 363 "a.y" /* yacc.c:1646  */
    {(yyval.com)=createcomment((yyvsp[-1].trans));
                     }
#line 1729 "a.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 376 "a.y" /* yacc.c:1646  */
    {char a[40000];
                                        strcpy(a,(yyvsp[-1].trans));
                                        strcat(a,(yyvsp[0].trans));
                                        strcpy((yyval.trans),a);}
#line 1738 "a.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 381 "a.y" /* yacc.c:1646  */
    {strcpy((yyval.trans),yytext);}
#line 1744 "a.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 388 "a.y" /* yacc.c:1646  */
    { (yyval.grap)=creategraphics((yyvsp[-1].trans));
                                                            }
#line 1751 "a.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 397 "a.y" /* yacc.c:1646  */
    {strcpy((yyval.trans)," ");}
#line 1757 "a.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 398 "a.y" /* yacc.c:1646  */
    {strcpy((yyval.trans),yytext);}
#line 1763 "a.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 401 "a.y" /* yacc.c:1646  */
    {(yyval.mathm)=createmath((yyvsp[-1].mathcont));}
#line 1769 "a.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 404 "a.y" /* yacc.c:1646  */
    {
                                                   (yyval.mathcont)=createc((yyvsp[-1].mathcont),(yyvsp[0].mathft));
                                                  }
#line 1777 "a.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 407 "a.y" /* yacc.c:1646  */
    {
                                                   (yyval.mathcont)=createsingle((yyvsp[0].mathft));
                                                  }
#line 1785 "a.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 412 "a.y" /* yacc.c:1646  */
    { (yyval.mathft)=createmathf((yyvsp[0].trans),0);}
#line 1791 "a.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 413 "a.y" /* yacc.c:1646  */
    { (yyval.mathft)=createmathf((yyvsp[0].trans),1);}
#line 1797 "a.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 414 "a.y" /* yacc.c:1646  */
    { (yyval.mathft)=createmathf((yyvsp[0].trans),2);}
#line 1803 "a.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 415 "a.y" /* yacc.c:1646  */
    { (yyval.mathft)=createmathf((yyvsp[0].trans),3);}
#line 1809 "a.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "a.y" /* yacc.c:1646  */
    { 
                                                            strcpy((yyval.trans),(yyvsp[-1].trans));
                                                             }
#line 1817 "a.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 423 "a.y" /* yacc.c:1646  */
    {strcpy((yyval.trans),(yyvsp[-1].trans));
                                                          }
#line 1824 "a.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 427 "a.y" /* yacc.c:1646  */
    {strcpy((yyval.trans),(yyvsp[-1].trans));
                                                          }
#line 1831 "a.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 431 "a.y" /* yacc.c:1646  */
    {
                                                                                     strcpy((yyval.trans),"<h3><sup>");
                                                                                     strcat((yyval.trans),(yyvsp[-4].trans));
                                                                                     strcat((yyval.trans),"</sup>&frasl;<sub>");
                                                                                     strcat((yyval.trans),(yyvsp[-1].trans));
                                                                                     strcat((yyval.trans),"</sub></h3>");  
                                                                                     }
#line 1843 "a.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 440 "a.y" /* yacc.c:1646  */
    {figp=1; figc=1;}
#line 1849 "a.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 440 "a.y" /* yacc.c:1646  */
    {figp=0;}
#line 1855 "a.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 440 "a.y" /* yacc.c:1646  */
    {(yyval.figf)=convertTofig((yyvsp[-2].figc));}
#line 1861 "a.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 445 "a.y" /* yacc.c:1646  */
    {(yyval.figc)=figcogr((yyvsp[-1].figc),(yyvsp[0].grap));}
#line 1867 "a.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 446 "a.y" /* yacc.c:1646  */
    {(yyval.figc)=figcocap((yyvsp[-1].figc),(yyvsp[0].cap));}
#line 1873 "a.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 447 "a.y" /* yacc.c:1646  */
    {(yyval.figc)=gr((yyvsp[0].grap));}
#line 1879 "a.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 448 "a.y" /* yacc.c:1646  */
    {(yyval.figc)=ca((yyvsp[0].cap));}
#line 1885 "a.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 452 "a.y" /* yacc.c:1646  */
    { if(tabp==1){
                                                         }
                                                          else if(figp==1){
                                                          (yyval.cap)=fcaptionc((yyvsp[-1].trans),figc); 
                                                          }}
#line 1895 "a.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 459 "a.y" /* yacc.c:1646  */
    {
                                                                                    (yyval.labl)=createlabel((yyvsp[-3].trans),(yyvsp[-1].trans));
                                                                                    }
#line 1903 "a.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 464 "a.y" /* yacc.c:1646  */
    {
                                                                                    (yyval.refe)=createref((yyvsp[-3].trans),(yyvsp[-1].trans));
                                                                                    }
#line 1911 "a.tab.c" /* yacc.c:1646  */
    break;


#line 1915 "a.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 469 "a.y" /* yacc.c:1906  */

/*                                            |***********************************************|
                                              |                USER SUBROUTINES               |
                                              *************************************************                   
*/

#include"lex.yy.c"                                                 //include the lexical analyzer file


int main(int argc,char *argv[]){                                     //driver function (main function )


if(!(yyin=fopen(argv[1],"r"))){                                    //open the file, if not found print error

 perror("a.tex");   

}
fileout=fopen(argv[2],"w+");
if(fileout==NULL)
printf("Failed to open the write file"); 
yyparse();                                                            //parse the file   

}

void yyerror(const char *s){                                                     //if syntax error occured print error

printf("Syntax error");
 
}
