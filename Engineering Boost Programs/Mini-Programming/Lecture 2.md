

#   Instructions

*   Instructions in C are terminated by a semi-colon (;).
*   Line changes and tabs are not important to the C compiler.
*   a = 3; b = 4; c = 5; are the same as:
    -   a = 3;
    -   b = 4;
    -   c = 5;

#   Skeleton of a Program

```C

#include <stdio.h>
/* optional additional includes */
/* optional constant macros */

int main(void) // int is shorthand for integer & main funtion is a pathway connection to the system & void is a data type used to define none data type.

{
    /* optional declarative statements */
    /* one or more executable statements */
    return (0);
}

```

##  Sample Programs

```C

/* Program # 1 */

#include <stdio.h>
/* This is my first C program */
/* It'll print a message to the display */

int main(void)

{
    printf("Welcome to the C programming language! \n");
    printf("This is our very first C program. \n");
    printf("We wish you a very pleasant experience with C");

    return (0);
}

```

```C

/* Program # 2 */

int main(void)
{
    printf("Hello World \n");
    printf("Sayeed Ahamad is in the Mini Course");
    printf("\n Hello World \n Sayeed Ahamad is in the Mini Course");    /* This command renders the same as the commands on the two lines above */
    return 0;
}

```

#   Variables

*   In programming, we often need to have places to store data. these receptacles are called **variables**. they are called that because they can change values.
*   All variables must be declared at the top of the program. There are three types of variables in C:
    -   int:    for integer (whole numbers)
    -   double (or float):  for real (floating point numbers)
    -   char:   for characters

##  Declaring Variables in "C"

All variables in "C" must be declared.

Compiler should know:

*   The variable name
*   Type of variable

This is because, it needs to know the above information to allocate enough enough memory to it.

##  Declaration Process

```C

/* declaring variable of type character */

char a_character;
char letter;

/* declaring variable of type integer */

int an_integer;
int number;

/* declaring variable of type float */

float floating_point_number;
float average;

/* The following is also valid */

int age, number, mark;

```

##  Identifiers

*   All variables must have names. There are strict rules for naming variables


### Hard Rules for Identifiers

*   Rule # 1:   An identifier must not be a reserved word. reserved words are used by C exclusively. Here are a few: double, char, int, do, float, if, return, sizeof, void, while, typedef, struct, switch, for, else.
*   Rule # 2:   
*   Rule # 3:   An identifier must never begin with a digit U238 and _765 are valid, 7abc and 67_q are not.

### Soft Rules for Identifiers

*   Rule # 1:   An identifier should not be a standard identifier. A standard identifier is a name used by C but is not reserved word.
*   Rule # 2:   All capital names should be used only for constant macros. Variables and functions ahould never use capital letters. Never mix uppercase and lowecase names in a variable.

#   C Operators

*   Arithemetic
*   Assignment and Compound Assignment
*   Sizeof
*   Relational
*   Logical
*   Conditional
*   Increment / Decrement

#   C Expressions

A valid sequence of operands and operators to calculate a value, usually expressing a mathematical logic calculation

#   Escape Sequences

Are used to format the print out. ( \\ ) symbol is referred to as the escape charecter and is used to signify a escape sequence.

![Escape Sequence Table](./Images/Escape%20Seq.jpg)

#   Placeholders in I/O Statements

*   Placeholders (or conversion specifiers) will substitute the value of the variable inside the output string (printf).
*   You must absolutely match the placeholder with the variable type.
*   %lf:    long floating point (double).
*   %d: decimal (int).
*   %c: character (char).
*   \n: a special character meaning that a new line will be inserted.


