

#   History of Computation

##  Muhammad Ibn Musa Al Khwarizmi

Persian Arab Mathematician and Philosopher, who invented Algebra

##  Charles Babbage

English Mathematician, Philosopher, Inventor known to some as the Father of Computing.

##  Lady Ada Lovelace

Wrote the First Computer program using the Babbage Machine.

##  George Boole

Created a form of Algebra (Boolean Algebra based on Logic Operators) that eveluates statements on Truth Values, AND & OR.

**Refer to the AND & OR Tables**

##  Grace Hopper

Worked on the Mark II computer at the Harvard university. She found the first bug in Computer Systems and created a method to De-Bug Computer Systems

##  Dennis Ritchie

Invented the C programming language as a tool to interface with the Unix OS

##  ANSI (American National Standards Institute)

Published the Standards for the C programming Language

#   Concept of Zero and Decimal System

754 = 700 + 50 + 4 = 7 * 100 + 5 * 10 + 4 * 1

Similarly, 

4050 = 4 * 1000 + 5 * 10 = 4 * 10 ** 3 + 0 * 10 ** 2 + 5 * 10 ** 1 + 10 ** 0

#   Computer Systems

#   Algorithms

An Algorithm is a series of instruction on how to solve the problem. We need Algorithms before we can write programs.

Algorithms have the following charecteristics:

*   Precision: Must give the Correct Results
*   uniqueness: Same Inputs will give the Same Results
*   Finiteness: It must stop eventually
*   Input: Most Algorithms need an Input
*   Output: The Answers are the Outputs
*   Generality: Must work with Multiple Data Sets

#   Hardware

Physical Component that together provide the functionality required by a computing machine.

*   CPU (Central Processing Unit)
    -   ALU (Arithemetic Logic Unit)
    -   Internal Registers
*   Memory
    -   RAM
    -   ROM
    -   Cache
*   I/O Devices
    -   Keyboard
    -   Mouse
    -   Monitor

#   Software

Programming Languages

*   Procedural Languages
    -   Pascal
    -   Fortan
    -   Basic
    -   Turing
    -   C
*   Object Oriented
    -   Java
    -   C++
*   Applications
    -   Word Processors
    -   Spreadsheets
    -   SAS
    -   MATLAB
*   Operating Systems
    -   Windows
    -   Unix
    -   Linux
    -   MAC OS

#   Digital Systems

Systems that use a Binary like Notation.

Number Representation can be done in different bases, the most frequently used include:

*   Base 2 (Binary Number Representation)
*   Base 8 (Octal Representation)
*   Base 10 (Decimal Representaion )
*   Base 16 (Hexadecimal Representation)

*Insert Table Image*

#   Base Conversions

##  Other Bases to Decimal Conversion

Procedure:

*   Number and Label each digit from the right to left starting from 0.
*   Multiply each of the orignal digit to the base exponentiated to the Labed Number
*   Finally add all the Multiplied values together

For Example:    101001)_2 = 1 * 2 ** 5 + 1 * 2 ** 3 + 1 ** 0 = 41)_10

##  Decimal to Other Bases Conversion

Procedure:

*   Divide the Decimal Number by the base that conversion is desired in
*   If the Number perfectly divides the base, term it as 0, else term it as 0
*   When a Number does or does not divide perfectly by the base, Note the reminder, lround the remainder
*   Use the lrounded remainder as the new divisor and continue until you terminate the sequence
*   The sequence of 1's and 0's, backwars is the Binary Number desired

For Example: 25)_10 = 11001)_2

##  Shortcut for Decimal to Other Bases Conversion and Vice Versa

230 = ?

? = 103

#   Memory Management

Bit, Byte, Word, Long Word

Bit:    The smallest storage unit capable of storing either 0 or 1 (Very small and as such hardly ever used for practical purposes)

Byte:   A collection of 8 bits. Represents one Character (ASCII or Unicode)

*Insert Bits & Bytes Table Image*

##  Memory

A collection of 

*   
*   

##  CPU

CPU has two main parts:

*   Registers
*   ALU

### Registers



### ALU


##   Numbers in "C"

There are two general Categories:

*   Integers
    -   Unsigned - 
    -   Signed - 
*   Floats

##  Preprocessor Directives

*   Preprocessor:   A system program that modifies the C program prioe to the compilation.
*   Preprocessor Directive: An instruction to the processor. Begins with #.
*   Library:    A collection of functions, symbols and values.

There are two kinds of preprocessor Directives:

*   Include's
*   Define's

Examples:

*   #include <stdio.h>: stdio.h, which stands for "standard input/output header", is the header in the C standard library that contains macro definitions, constants and declarations of the functions and types used for various standard input and output operations. The #include<stdio.h> directive must be included on top of every C program.
*   #define PI 3.1416: this is a constant macro definition. It associates a name to a value for the duration of the program, in this case it associates the symbol PI to the value 3.1416. It is an optional directive.

##  Comments

*   Comments are line of code that are ignored by the compiler. They are placed for the programmer's benefit.
*   /* this is a comment */
*   /* this is
another comment, it can be spread over multiple lines */

