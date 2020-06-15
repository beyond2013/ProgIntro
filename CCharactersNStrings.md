**NOTE: Contents presented here have been taken from the book C How to program by Deitel and Deitel (5th Edition)** 

# C Characters and Strings

## Introduction
Topics covered here include C Standard Library functions that facilitate string and character processing. The functions enable pograms to process characters, strings, lines of text and blocks of memory.

Techniques discussed here can be used to develop editors, word processors, page layout software, computerized typesetting systems and other kinds of text processing software. 

## Fundamentals of Strings and Characters
Characters are the fundamental building blocks of source programs. Every program is composed of a sequence of characters that is interpreted by the computer as a series of instructions used to accomplish a task. A program may contain character constants. **A character constant is an int value represented as a character in single quotes. The value of a character constant is the integer value of the character in the machine's character set.** For example, 'z' represents the integer value of z, and '\n' the integer value of newline(122 and 10 in ASCII respectively)

A **string** is a series of characters treated as a single unit. A string may include letters, digits and various special characters such as +, -, \*, \/ and \$. String literals, or string constants in C are written in double quotation marks e.g. "University of Balochistan". 

A string in C is an array of characters ending in the null character ('\0'). A string is accessed via a pointer to the first character in the string. The value of a string is the address of its first character. Thus in C it is appropriate to say that a string is a pointer, in fact, a pointer to the string's first character. In this sense strings are like arrays, because an array is also a pointer to its first element.

A character array or a variable of type char * can be initialized with a string in a definition. The definitions

```c
 char color[]= "blue";
 const char *colorPtr = "blue";
 ```
 each initialize a variable to the string blue.
 The first definition creates a 5 element array color containing the characters 'b', 'l', 'u', 'e', and '\0'. 
 The second definition creates pointer variable colorPtr that points to the string "blue" somewhere in memory.

 The preceding array definition could also have been written

 ```c
  char color[] = {'b', 'l', 'u', 'e', '\0'};
```

When defining a character array to contain a string, the array must be large enough to store the string and its terminating null character. The preceding definition automatically determines the size of the array based on the number of initializers in the initializer list.

## Character-Handling Library
The character-handling library (<ctype.h>) includes several functions that perform useful tests and manipulations of character data. Each function receives an unsigned char (represented as an int) or EOF as an argument. Characters
are often manipulated as integers, because a character in C is a one-byte integer. EOF normally has the value –1. Following table summarizes the functions of the character-handling library.

|Prototype             | Function description                                        |
|-----|--------|
|int isblank( int c ); |Returns a true value if c is a blank character that separates words in a line of text and 0 (false) otherwise.             |
|int isdigit( int c ); |Returns a true value if c is a digit and 0 (false) otherwise.|
|int isalpha( int c ); |Returns a true value if c is a letter and 0 otherwise.       |
|int isalnum( int c ); |Returns a true value if c is a digit or a letter and 0 otherwise. |                                  |int isxdigit( int c );| Returns a true value if c is a hexadecimal digit character and  0 otherwise.|
|int islower( int c ); | int isxdigit( int c ); Returns a true value if c is a hexadecimal digit character and 0 otherwise.|
|int islower( int c ); |Returns a true value if c is a lowercase letter and 0 otherwise|
|int isupper( int c ); |Returns a true value if c is an uppercase letter and 0 otherwise.|
|int tolower( int c ); |If c is an uppercase letter, tolower returns c as a lowercase letter. Otherwise, tolower returns the argument unchanged.|
|int toupper( int c ); |If c is a lowercase letter, toupper returns c as an uppercase letter.Otherwise, toupper returns the argument unchanged. |
|int isspace( int c );| Returns a true value if c is a whitespace character—newline ('\n'), space (' '), form feed ('\f'), carriage return ('\r'), horizontal tab ('\t') or vertical tab ('\v')—and 0 otherwise.|
|int iscntrl( int c ); |Returns a true value if c is a control character and 0 otherwise.|
|int ispunct( int c ); |Returns a true value if c is a printing character other than a space, a digit, or a letter and returns 0 otherwise.|
|int isprint( int c ); | Returns a true value if c is a printing character including a space and returns 0 otherwise. |
|int isgraph( int c ); | Returns a true value if c is a printing character other than a space and returns 0 otherwise. |
