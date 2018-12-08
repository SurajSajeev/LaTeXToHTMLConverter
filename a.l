/*                                             *************************************************
                                               |          LaTeX  to HTML Converter             |
                                               |                  COP701                       |
                                               |                 FLEX FILE                     |
                                               |                                               |
                                               *************************************************
*/

%{
#include<stdio.h>                                                                      //definition section
%}

                                                                                       //Basic regular expression
spac		     [ ]+
punc             (\.|\,|\!|\?%)
word		     ({punc}|[a-zA-Z0-9])+
number           [0-9]+

%%                                                                                     //generating tokens
"\\documentclass{article}"          {
                                     printf("DOCBEG");
                                     return DOCCLS;
                                    }

"\documentclass[sigconf]{acmart}"   {
                                     printf("DOCBEG");
                                     return DOCCLS;
                                    }   

"\usepackage{balance}"              {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{graphicx}"             {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{url}"                  {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{amsmath}"              {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }                                    

"\usepackage{mathtools}"            {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{tabularx}"             {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{caption}"              {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{subcaption}"           {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{multirow}"             {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }

"\usepackage{graphics}"             {
                                     printf("USEPKG");
                                     return USEPKG;
                                    }
                                                                      
"\\section"                         {
                                     printf("SECTION\n");
                                     return SECTION;
                                    }

"\\subsection"                      {
                                     printf("SUBSECTION\n");
                                     return SUBS;
                                    }

"\\paragraph"                       {
                                     printf("PARA\n");
                                     return PARA;
                                    }

"\\label"                           {
                                     printf("LABEL\n");
                                     return LABEL;
                                    }

"\\ref"                             {
                                     printf("REF\n");
                                     return REF;
                                    }

"\\textbf"                          {
                                     printf("BOLD\n");
                                     return BOLD;
                                    }

"\\textit"                          {
                                     printf("TEXTIT\n");
                                     return ITALIC;
                                    }

"\\underline"                       {
                                     printf("UNDL\n");
                                     return UNDL;
                                    }

"{enumerate}"                       {
                                     printf("ENUM\n");
                                     return ENUM;
                                    }

"{tabular}"                         {
                                     printf("TABLE\n");
                                     return TABLE;
                                    }

"\\item"                            {
                                     printf("ITEM\n");
                                     return ITEM;
                                    }

"\\includegraphics"                 {
                                     printf("GRAPHIC\n");
                                     return GRAPHIC;
                                    }

"\\caption"                         {
                                     printf("CAPTION\n");
                                     return CAPTION;
                                    }

"\\sqrt"                            {
                                     printf("SQRT\n");
                                     return SQRT;
                                    }
"+"                                  {
                                      return WORD;
                                     }
"-"                                  {
                                      return WORD;
                                     }
"*"                                  {
                                      return WORD;
                                     }
"\\sum"                             {
                                     printf("SUM\n");
                                     return SUM;
                                    }

"\\hline"                           {
                                     printf("HLINE\n");
                                     //return HLINE;
                                    }

"\\int"                            {
                                     printf("INT\n");
                                     return INTE;
                                    }
"\\begin{figure}"                   {
                                     printf("BEGFIG\n");
                                     return BEGFIG;
                                    }
"\\end{figure}"                     {
                                     printf("ENDFIG\n");
                                     return ENDFIG;
                                    }
"\\begin{table}"                    {
                                     printf("BEGTAB\n");
                                     return BEGTAB;
                                    }
"\\end{table}"                      {
                                     printf("ENDTAB\n");
                                     return ENDTAB;
                                    }
"document"                          {
                                     printf("DOUMENT\n");
                                     return DOCUMENT;
                                    }

"\\begin"                           {
                                     printf("LBEGINT\n");
                                     return LBEGINT;
                                    }

"\\end"                             {
                                     printf("ENDT\n");
                                     return ENDT;
                                    }

"\\\\"                              {
                                     printf("BR\n");
                                     return BR;
                                    }

"{center}"                          {
                                     printf("CENTER\n");
                                     return CENTER;
                                    }
"{itemize}"                          {
                                     printf("ITEMIZE\n");
                                     return ITEMIZE;
                                    }

"^"                                 {
                                     printf("SUP\n");
                                     return SUP;
                                    }

"_"                                 {
                                     printf("SUB\n");
                                     return SUB;
                                    }

"$"                                 {
                                     printf("DLR\n");
                                     return DLR;
                                    }

"&"                                 {
                                    printf("AMP\n");
                                    return AMP;
                                    }

"\\flushleft"                       {
                                     printf("LEFT\n");
                                     return LEFT;
                                    }

"\\flushright"                      {
                                     printf("RIGHT\n");
                                     return RIGHT;
                                    }

"large"                             {
                                     printf("LARGE\n");
                                     return LARGE;
                                    }

"huge"                              {
                                     printf("HUGE\n");
                                     return HUGE;
                                    }

"tiny"                              {
                                     printf("TINY\n");
                                     return TINY;
                                    }

"small"                             {
                                     printf("SMALL\n");
                                     return SMALL;
                                    }

"{"                                 {
                                     printf("CBCTO\n");
                                     return CBCTO;
                                    }

"}"                                 {
                                     printf("CBCTC\n");
                                     return CBCTC;
                                    }

"{comment}"                           {printf("COMMENT\n");
                                     return COMMENT;
                                    }

{spac}                              {
                                     //printf("WS\n");
                                     return WS;
                                    }

{word}                              {
                                     printf("WORD\n");
                                     return WORD;
                                    }

(\%|\_|\&|\$|\#)                    {
                                     printf("ESCCHAR\n");
                                     return ESCCHAR;
                                    }

"|c"                                {
                                     printf("COL\n");
                                     return COL;
                                    }
"|l"                                {
                                     printf("COL\n");
                                     return COL;
                                    }
"|r"                                {
                                     printf("COL\n");
                                     return COL;
                                    }
"|"                                 {
                                     printf("PIP\n");
                                     return PIP;
                                    }

":"                                 {
                                     printf("COLON\n");
                                     return COLON;
                                    }
"\\frac"                             {
                                     printf("FRAC\n");
                                     return FRAC;
                                    
                                    }

%%
