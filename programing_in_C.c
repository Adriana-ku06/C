//###Types of program ming languages###
    //LANGUAGE C
    
/*Languages, their characteristics and  applications:

- Low level A low level language has a lower level of abstraction, whereas a high level language a higher level has,
is a programming language that provides no abstraction from the hardware, and it is represented in 0 or 1 forms, 
which are the machine instructions.The languages that come under this category are the Machine level language and Assembly language.*/
-

/* - High level: is related to the level of abstraction of the two languages. programmers can easily understand
or interpret or compile the high level language in comparison of machine. On the other hand, Machine can easily
understand the low level language in comparison of human beings.
Examples of high level languages are C, C++, Java, Python, etc

*/

     //PROGRAM STRUCTURE
     
     /*
- Headboard: A header of the function, consisting of the name of the function,
followed by an optional list of arguments enclosed in parentheses, 
All header files (files with extension .h) corresponding to the function libraries used must be specified.
They are libraries implemented and ready for us to use, just by calling the function that has been implemented 
within that library. For example: the printf instruction is included in stdio.h, therefore, when we decide to use it,
we will have to put in this section: #include <stdio.h> * /
for example:
*/
#include <stdio.h>
#include <conio.h>

/*
- Bookstores: are a group of files that have a functionality pre-built by third parties, and that can be used by any executable. 
The libraries contain variables and functions inside, known as libraries to certain types of files that we can import or include in our program.
Below we can see some of these libraries :    */
#include <iostream.h> //contains the functions of entering and displaying data.
#include <math.h>// contains the common mathematical functions.
#include <time.h>// contains the functions for processing and conversion between date and time formats.
#include <iostream.h>/*we have to, the most common functions that we are going to use are data input / output. 
And the most common operations such as addition / subtraction / multiplication / division.*/
#include <stdio.h> /*we have a standard library of the programming language C
in essence it is the header file that contains the definitions of macros, constants, 
function declarations and the definition of types used by several standard operations of entry and exit.*/
#include <conio.h>/* is used to change the wallpaper, color the text, and when you finish all the operations 
clean the screen (getch (), or, getche ()), among others.*/

/*
- Variables: Compilers reserve certain terms or keywords (keywords), for the syntactic use of language, such as: asm, auto, break, case, char, do, for, etc. 
Although these words are defined for ANSI C, different compilers extend this definition to other terms, 
so it is advisable to read the complete table of reserved words of the compiler to be used, not to use them in variable names.
There are three sites where you can define variables:
*****out of all functions (global variables).*/

#include <stdio.h>
int x;//variable outside the main
main()
{
}

/*

*****within the functions (local variables)

*/
#include <stdio.h>

main()
{
    int x;//variable in the main
}



/*

*****in the definition of function parameters (formal parameters)


 Types and  sizes in memory
 **char Character 8 (normally) 0 to 255
**int Integer signed 16 (depends on implementation) -32 768 to 32 767
**Float simple float 32 (normally) 3.4E-38 to 3.4E + 38 (approx. 6 digits of precision)
***double Floating double 64 (normally) 1.7E-308 to 1.7E + 308 (approx. 12 digits of precision)
**void nothing Generic 0 without value
*/
int number; /* create the variable number, of type integer */
char letter; /* create the letter variable, of type character */
float a, b; /* creates two variables a and b, of type floating point number */
For example:

int number = 0; /* create the integer variable number and initializes it to 0 */
char letter = 'p'; /* create the variable character letterand initializes it to 'p' */
float a = 57.1, b = 1.2E-5; /* create the variables a and b, of type floating point number, and initializes them
to 57.1 and 0.000012, respectively */

//////////////////////////////////////////////////////////////////





/////////////////////////////////////


 /*
-////////////// Start-- Body-- The end   of programing in C///////////////

A program in the main function is defined, which is the one that the operating system executes when calling a program C.
The name of a function C is always followed by parentheses, whether it has arguments or not. The function definition 
consists of a block of sentences, which is enclosed in braces {}.

*/
#include <stdio.h> /*start------The first line indicates that the functions and types defined in the stdio library 
(standard input / output) are taken into account. These definitions are found in the header file*/
main (){// the principal funtion 
printf("Welcome to programming in C \ n language"); /* The {} keys that frame the body of this 
    function define the beginning and end of the program.*/
return 0;
}// end


/*------------------------------------------- Elements of the computer programs:--------------------------------
- Reserved words
Word that has a specific meaning in the programming language, without the need to assign it to us.

auto --break-- case --char
const --continue --default --do
enum --extern --float --for
goto --if --int --long
else --return-- short-- signed
sizeof-- static --struct --double
register --switch --typedef-- union
unsigned --void --volatile --while
*/  

if(){
    printf("hello"); // if is a reserved words
        }
else (){// else is a reserved words
    
    }





/*

- Identifiers

Word we can use to name something in language.

C identifiers

- The first symbol of the identifier will be an alphabetic character (a,…, z, A,…, Z, ‘_’). 
After that first character we can put alphanumeric characters (a,…, z) and (0, 1,…, 9) and the underscore script ‘_’.
- Upper and lower case letters are considered different.
- The underscore script is interpreted as one more letter.
- The identifiers cannot match the reserved words.
*/
    int a=0; // (a) is a indentifier
    char name='Adriana';// (name) is a indentifier
    
    
    /*
- Constants

*/

/*

- Operators

As in Mathematics, they perform a specific action:
- They are usually defined in the core of the compiler
(although they can also be defined in external libraries)
- They are usually represented with tokens formed by symbols.
- They usually use infix notation.
- They can be applied to one or several operands (arguments).
- They usually return a value.
(=)---->Assignment Operator


Operadores aritméticos

+ -------------cast-expression
- ---------------cast-expression
 * -------------- multiplicative-expression multiplicative
 /---------exprcast-expr division-expr 
% --------------- residue

postfix-expression ++	(postincremento)
++ unary-expression	(preincremento)
postfix-expression --	(postdecremento)
-- unary-expression	(predecremento)





-------------Comparison operators--------------------

<  --------------------Less than ...
<=  ------------------ Less than or equal to
>  --------------------Greater than ..
>= --------------------Greater than or equal…
---------------------------------
--------------------Arithmetic operators--------------------------------
+ cast-expression
- cast-expression
add-expression + multiplicative-expression
add-expression - multiplicative-expression 
multiplicative-expr * cast-expr multiplicative-expr / cast-expr multiplicative-expr% cast-expr
postfix-expression ++ (post-growth)
++ unary-expression (preincrement)
postfix-expression - (postdecrement)
- unary-expression (predecrement)

-----------------------Boolean operators-----------------------

AND-expression & equality-expression 
exclusive-OR-expr ^ AND-expression 
inclusive-OR-expr | exclusive-OR-expression
~cast-expression
shift-expression << additive-expression 
shift-expression >> additive-expression

example of operators
*/
int operators_sum(int A, int B){
//int A=10,B=20;
A + B //= 30
}
////////////////////////////////////////7
int operators_subt(int A, int B){
//int A=10,B=20;
A - B // = -10
}
//////////////////////////////////////////////
int operators_mult(int A, int B){
//int A=10,B=20;
A * B //= 200
}
////////////////////////////////////////////

int operators_div(int A, int B){
//int A=10,B=20;
B / A //= 2
}

///////////////////////////

int operators_resd(int A, int B){
//int A=10,B=20;

B % A //= 0
}

///////////////

int operators_increment_decrement(int A, int B){
//int A=10,B=20;
A++ //= 11
B-- //= 19
}

////////////////////////////////////////////////////////////////77
/*

- ----------------------Punctuation marks--------------------
     Symbols used as separators of the different constructions of a programming language (that is, the punctuation marks of a programming language.

[] () {},; : ... * = #

•Brackets []: They are used to specify the subscripts of the arrays.
• Parenthesis(): They group expressions and indicate the parameters of the functions.
• Keys{}:They delimit compound sentences (blocks of code).
• Commas(,):Separate the elements of a list.
•Semicolon(;):Indicates the end of a sentence.
•Two points(:):Labels
•Ellipse (...):Functions with a variable number of arguments.
• Asterisks (*): Pointers
• Initializer (=):Separate the declaration of variable initialization.
• Pad (#): Preprocessor directives.
     
     */
    int mat[3][4]; // Matriz of 3 x 4.
    int func (); // declare function. semicolon
    if (statement)
     {...}; // illegal semicolon !!
      else
     void func (int n, float f, char ch);
    start: x = 0; // start is the tag
     
     
     
     /*
In C there are some special characters that are frequently used. These characters have a special representation. Some of them are:
Code          Meaning          ASCII value(decimal)         ASCII value(hexadecimal)
'\ n'            new line                       10                                     0x0A
'\ r'        carriage return                 13                                     0x0D
'\ f'        new page (form feed)        2                                      x0C
'\ t'        horizontal tab                    9                                      0x09
'\ b'           backspace                      8                                      0x08
'\' '           single quote                   39                                      0x27
'\ "'               quotes                         4                                      0x22
'\\'            backslash                      92                                      0x5C
'\? '       interrogation                     63                                      0x3F
'\ nnn' any character (where nnn is the ASCII code expressed in octal)
'\ xnn' any character (where nn is the ASCII code expressed in hexadecimal)

*/
     
     main()
{	int numero = 1;
	printf("%d\n", numero); //new line   
}



/*        debugging a program
-TYPES OF ERRPRS  IN COMPUTERS PROGRAMS:
/*----------------------------------------------------------- Execution  --------------------           


Syntax errors: Errors that occur when you violate the C / C ++ syntax writing rules are known as syntax errors. This compiler error indicates something that needs to be repaired before the code can be compiled. All these errors are detected by the compiler and, therefore, are known as compile-time errors.
The most frequent syntax errors are:

Missing parentheses (})
Print the value of the variable without declaring it
Missing a semicolon like this: // C program to illustrate
// syntax error */

#include <stdio.h>
void main ()
{int x = 10;
int y = 15;
 printf ("% d", (x, y)) // semicolon missed
    
/*Error: error: expected ';' before the token '}
Runtime errors: Errors that occur during program execution (runtime) 
    after a successful compilation are called runtime errors. One of the most common 
    runtime errors is division by zero, also known as division error. These types of errors 
    are difficult to find since the compiler does not point to the line where the error occurs.
For a better understanding, run the example below.*/

// C program to illustrate

//-------------- -------------------------------------------run-time error----------------

#include <stdio.h>
void main ()
{ int n = 9, div = 0;
 div = n / 0;
 printf ("resut =% d", div);
}
/*
Error:

warning: division by zero [-Wdiv-by-zero]
 div = n / 0;

Linker errors: This error occurs when, after compilation, 
we link the different object files with the main object using Ctrl + F9 (RUN).
These are errors generated when the program executable cannot be generated. 
This may be due to prototypes of incorrect functions, incorrect header files. 
One of the most common link errors is to write Main () instead of main ().
*/
// C program to illustrate

// -------------linker error--------------------

#include <stdio.h>
void Main () // Here Main () should be main ()
{
 int a = 10;
 printf ("% d", a);
}

/*Error:

(.text + 0x20): undefined reference to `main '

Logical errors: in the compilation and execution of a program,
the desired output is not obtained when certain input values ??are given. 
These types of errors that provide incorrect results but that appear to be error free are called logical errors.
These are one of the most common mistakes made by programming beginners.
These errors depend solely on the logical thinking of the programmer and are easy to detect if we follow the execution
line and determine why the program takes that execution path.*/

// C program to illustrate

// ---------------------------------------------------------------------------------logical error--------------------------------

int main ()
{int i = 0;
 // logical error: a semicolon after loop
 for (i = 0; i <3; i ++);
 { printf ("loop");
 continue;
 }
 getchar ();
 return 0;
}
/* Error ;
No way out

Semantic errors: this error occurs when the statements written in the program are not significant for the compiler.*/

// C program to illustrate

//----------------------------------------------------------------------------------- Semantic error----------------------------

void main ()
{
 int a, b, c;
 a + b = c; // semantic error
}

/*Error error:

lvalue required as left operand of assignment*/

 a + b = c; // semantic error
