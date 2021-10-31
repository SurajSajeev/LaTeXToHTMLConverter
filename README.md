# LaTeXToHTMLConverter
first assignment in the COP 701 course.In this assignment, main objective is to convert a LaTeX document to an equivalent HTML document.
In pursuance of this objective, had to write a LaTeX to HTML converter from scratch.

## Prerequisites:

1. Flex
2. Bison
3. Compiler Design
4. C or C++

## Tags Implemented are: 

* \section
* \subsection
* \par
* \label
* \ref
* \textbf
* \textit
* \underline
* \enumerate
* \item
* tabular environment
* figure environment
* \includegraphics
* \caption
* Math mode with $...$
* \frac{numerator}{denominator}
* \sqrt
* $\sum... $
* $\int...   $

To execute the program do the following:

```
flex a.l
bison a.y 
gcc lex.yy.c a.tab.c -o out
./out <Input file name> <Output File name>
```
