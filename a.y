/*                              |***********************************************|
                                |             LaTeX  to HTML Converter          |
                                |                  COP701                       |
                                |                BISON FILE                     |
                                |                                               |
                                *************************************************
*/


/*                             |***********************************************|
                               |                DEFINITION SECTION             |
                               *************************************************                   
*/
%{                                           
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
%}


%union{
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

      }


%start begindoc                                                      //start symbol of the grammar

//****************************************************************************

                 //token declaration

//****************************************************************************

%token ENDT            LBEGINT      INTE        TABLE

%token SECTION         SUBS         SUM        BR

%token PARA            LABEL        REF        OPB

%token BOLD            UNDL         CLB        ITALIC

%token ENUM            ITEM         TAB        FIG

%token GRAPHIC         SUP          SUB        LEFT

%token CAPTION         RIGHT        CENTER     LARGE

%token MTHOP           MTHCL        HUGE       TINY

%token FRAC            CBCTO        CBCTC      SQBT

%token SQRT            SQBC         TYPE       DOCUMENT

%token COMMENT         SMALL        ESCCHAR    DLR

%token ARTICLE         DOCCLS       WORD       WS

%token AMP             COL          PIP        HLINE 

%token NUMBER          USEPKG       ITEMIZE    BEGFIG   

%token ENDFIG          BEGTAB       ENDTAB     COLON

//**************************************************************************************************************

//declaring type of node used for various non terminal symbols

//***************************************************************************************************************
                                                                     

%type<trans>           simpletext  paragraph   WORD    

%type<trans>           sqr         integral    sum     

%type<trans>           wows        PARA        frac

%type<root2>           begindoc    docclass  latexfile

%type<contype>         content

%type<subcont>         subcontent

%type<com>             comment

%type<feat>            features 

%type<grap>            graphics

%type<sect>            section

%type<ocfeat>          ocfeatures 

%type<enuma>           enumerate  enumes

%type<itema>           itemize    itumes

%type<eni>             enittext

%type<mathm>           math

%type<mathcont>        mathcontent

%type<mathft>          mathfeatures

%type<ibl>             italicboldundl

%type<figf>            fig

%type<figc>            figcontent

%type<cap>             caption

%type<tabc>            tabcontent

%type<rcnt>            rowcontent 

%type<tab>             tabular

%type<refe>            ref

%type<labl>            label       
%%



/*                                                                                              
                      |***********************************************|
                      |                GRAMMAR SECTION                |
                      *************************************************                   
*/
begindoc        :   latexfile                     

 
latexfile       :   docclass   usepackage startst content  endst 
                                                          {
                                                          addcontenttoRoot($$,$4);
                                                          strcat(root->a,"</body>\n</html>\n");
                                                          fprintf(fileout,"%s",root->a);
                                                          }             
                ;


docclass        :   DOCCLS  {root=createTreeRoot();
                             $$=root;
                            }
                ;


usepackage      :  USEPKG  usepackage
                |  
                ;

startst         :   LBEGINT    CBCTO     DOCUMENT    CBCTC 
                                               {
                                                strcat(root->a,"<html>\n<body>\n");
                                                }
                ;


endst           :   ENDT       CBCTO     DOCUMENT   CBCTC 
                ;


content         :   subcontent content     {
                                           $$=createcontent($2,$1);
                                           }
                |                          {
                                           $$=createemptycontent();
                                           }
                ;


subcontent      :   comment                {
                                            $$=createsubcontent0($1);
                                           }
                | simpletext               {
                                             $$=createsubcontent($1);
                                           } 
                
                |  features                {
                                           $$=createsubcontent1($1);
                                           }
                ;


features        : section                  {
                                           $$=createfeatures0($1);
                                           }
                | ocfeatures               {
                                           $$=createfeatures1($1);
                                           }
                | italicboldundl           {
                                           $$=createfeature2($1);
                                            }
                
                | math                     {
                                           $$=createfeatures3($1);
                                           }

                | br                       {
                                            $$=createbr();
                                            }
                                                  
                                                  
                | graphics                  {
                                            $$=createfeatures5($1);
                                             }
                | paragraph                  {
                                            $$=createpar();
                                             }
                | tabular                    {
                                             $$=createfeaturet($1);
                                              }
                | fig                             {
                                                   $$=createfeaturef($1);
                                                  }
                | label                           {$$=createfeaturel($1);

                }
                | ref                             {
                                                   $$=createfeaturer($1);
                                                  }
                ;

br              :   BR         

section         :   SECTION  CBCTO  simpletext CBCTC 
                                { ++seccount;
                                    subs=0;
                                  $$=createsection($3,seccount,0,0);
                                } 
                |   SUBS     CBCTO  simpletext CBCTC {subs++;
                                                      $$=createsection($3,seccount,subs,1);
                                                      }
                ;


ocfeatures      :   enumerate   {$$=createoc($1);}
                

                |   itemize     {$$=createoc1($1);}
                

                ;

itemize         :   itumes  enittext      ENDT   ITEMIZE {
                                                          $$=concatCon2($1,$2);
                                                          }

itumes          :   LBEGINT     ITEMIZE                   {                  
                            $$=createnewitemize();
                                                          }               
                ;                                       
enumerate       :   enumes   enittext     ENDT   ENUM   {     
                                                        $$=concatCon($1,$2);
                                                        } 
                ; 

enumes          :   LBEGINT    ENUM    {
                                         $$=createnewenumerate();
                                        }
enittext        :    ITEM simpletext enittext  {
                                               $$=addtoenittext($3,$2);
                                               }
                |   ITEM  simpletext   {
                                      $$=addSimpleText($2);
                                       }
                
                ;

tabular         :   begintab       format  tabcontent  endtab {$$=createTabular($3);}
                ;  

begintab        :   LBEGINT  TABLE       
                ;

format          :   CBCTO  colno PIP CBCTC
                ;

colno           :   colno  COL 
                |   COL 
                ;

tabcontent      :   tabcontent  BR rowcontent    {$$=addtrtT($1,$3);}
                |   rowcontent   {$$=addRtT($1);}      
                ;

rowcontent      :    rowcontent    AMP  simpletext  {$$=addRAS($1,$3);}
                            
                |    simpletext        {$$=addSimpleTRow($1);} 
                ;

endtab          :   ENDT     TABLE      
                ;

 
italicboldundl  :   

                     UNDL  CBCTO  simpletext CBCTC    
                    {$$=createIBU($3,0);
                    }

                |   ITALIC   CBCTO  simpletext CBCTC    
                    {$$=createIBU($3,1);
                     }

                |   BOLD  CBCTO  simpletext CBCTC    
                    {$$=createIBU($3,2);
                     }

                ;


comment         :   commentbegin  simpletext   commentend   
                    {$$=createcomment($2);
                     }
                ;


commentbegin    :   LBEGINT         COMMENT       
                ;


commentend      :   ENDT            COMMENT       
                ;


simpletext      :   simpletext wows     {char a[40000];
                                        strcpy(a,$1);
                                        strcat(a,$2);
                                        strcpy($$,a);} 

                |    wows               {strcpy($$,yytext);}

                
                             
                ;


graphics        :   GRAPHIC   CBCTO  simpletext   CBCTC     { $$=creategraphics($3);
                                                            }
                ;


paragraph       :   PARA                                
                ;


wows            :   WS  {strcpy($$," ");}   
                |   WORD  {strcpy($$,yytext);}
                ;   

math            :   DLR  mathcontent  DLR         {$$=createmath($2);}
                ;

mathcontent     :   mathcontent mathfeatures      {
                                                   $$=createc($1,$2);
                                                  }
                |   mathfeatures                  {
                                                   $$=createsingle($1);
                                                  }
                ;

mathfeatures    :   sqr                           { $$=createmathf($1,0);}
                |   sum                           { $$=createmathf($1,1);}
                |   integral                      { $$=createmathf($1,2);}
                |   frac                          { $$=createmathf($1,3);}
                ;

sqr             :   SQRT    CBCTO   simpletext    CBCTC      { 
                                                            strcpy($$,$3);
                                                             }
                ;
   
sum             :   SUM     CBCTO   simpletext   CBCTC   {strcpy($$,$3);
                                                          }
                ;

integral        :   INTE     CBCTO   simpletext   CBCTC   {strcpy($$,$3);
                                                          }
                ;

frac            :   FRAC     CBCTO   simpletext   CBCTC  CBCTO   simpletext   CBCTC  {
                                                                                     strcpy($$,"<h3><sup>");
                                                                                     strcat($$,$3);
                                                                                     strcat($$,"</sup>&frasl;<sub>");
                                                                                     strcat($$,$6);
                                                                                     strcat($$,"</sub></h3>");  
                                                                                     }
                ;

fig             :  BEGFIG{figp=1; figc=1;}  figcontent   ENDFIG{figp=0;}{$$=convertTofig($3);}
                ;



figcontent      :  figcontent  graphics    {$$=figcogr($1,$2);}
                |  figcontent  caption     {$$=figcocap($1,$2);}
                |  graphics                {$$=gr($1);}
                |  caption                 {$$=ca($1);}
                ;


caption         :  CAPTION   CBCTO  simpletext   CBCTC   { if(tabp==1){
                                                         }
                                                          else if(figp==1){
                                                          $$=fcaptionc($3,figc); 
                                                          }}
                ;

label           :  LABEL     CBCTO    simpletext   COLON   simpletext   CBCTC       {
                                                                                    $$=createlabel($3,$5);
                                                                                    }
                ;

ref             :  REF       CBCTO     simpletext    COLON    simpletext    CBCTC   {
                                                                                    $$=createref($3,$5);
                                                                                    }
                ;                

%%
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
