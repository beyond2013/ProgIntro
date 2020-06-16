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

|Prototype                     | Function description                                        |
|------------------|------------------------------------|
| int isblank( int c ); |Returns a true value if c is a blank character that separates words in a line of text and 0 (false) otherwise.|
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

### Functions isdigit, isalpha, isalnum and isxdigit

1. Function isdigit determines whether its argument is a digit (0-9).
2. Function isalpha determines whether its argument is an uppercase (A-Z) or lowercase letter (a-z)
3. Function isalnum determines whether its argument is an uppercase letter, a lowercase letter, or a digit.
4. Function isxdigit determines whether its argument is a hexadecimal digit (A-F, a-f, 0-9).

```c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf( "%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
isdigit('8') ? "8 is a " : "8 is not a ", "digit", 
isdigit('#') ? "# is a " : "# is not a ", "digit" );

 printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
 "According to isalpha:",
 isalpha( 'A' ) ? "A is a " : "A is not a ", "letter",
 isalpha( 'b' ) ? "b is a " : "b is not a ", "letter",
 isalpha( '&' ) ? "& is a " : "& is not a ", "letter",
 isalpha( '4' ) ? "4 is a " : "4 is not a ", "letter" );

 printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
"According to isalnum:",
isalnum( 'A' ) ? "A is a " : "A is not a ",
"digit or a letter",
isalnum( '8' ) ? "8 is a " : "8 is not a ",
"digit or a letter",
isalnum( '#' ) ? "# is a " : "# is not a ",
"digit or a letter" );

printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
"According to isxdigit:",
isxdigit( 'F' )	? "F is a " : "F is not a ",
"hexadecimal digit",
isxdigit( 'J' ) ? "J is a " : "J is not a ",
"hexadecimal digit",
isxdigit( '7' ) ? "7 is a " : "7 is not a ",
"hexadecimal digit",
isxdigit( '$' )	? "$ is a " : "$ is not a ",
"hexadecimal digit",
isxdigit( 'f' ) ? "f is a " : "f is not a ",
"hexadecimal digit" );

	return 0;
}
```
### Functions islower, isupper, tolower and toupper

1. Function islower determines whether its argument is a lowercase letter ( a – z ).
2. Function isupper determines whether its argument is an uppercase letter ( A – Z ).
3. Function tolower converts an uppercase letter to a lowercase letter and returns the lowercase letter. If the argument is not an uppercase letter, tolower returns the argument unchanged.
4. Function toupper converts a lowercase letter to an uppercase letter and returns the uppercase letter. If the argument is not a lowercase letter, toupper returns the argument unchanged. 

```c
#include <stdio.h>
#include <ctype.h>

int main( void )
{
	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
			"According to islower:",
			islower( 'p' ) ? "p is a " : "p is not a ", 
			"lowercase letter",
			islower( 'P' ) ? "P is a " : "P is not a ",
			"lowercase letter",
			islower( '5' ) ? "5 is a " : "5 is not a ",
			"lowercase letter",
			islower( '!' ) ? "! is a " : "! is not a ",
			"lowercase letter" );

	printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
			"According to isupper:",
			isupper( 'D' ) ? "D is an " : "D is not an ",
			"uppercase letter",
			isupper( 'd' ) ? "d is an " : "d is not an ",
			"uppercase letter",
			isupper( '8' ) ? "8 is an " : "8 is not an ",
			"uppercase letter",
			isupper( '$' ) ? "$ is an " : "$ is not an ",
			"uppercase letter" );
	printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
			"u converted to uppercase is ", toupper('u') ,
			"7 converted to uppercase is ", toupper('7') ,
			"$ converted to uppercase is ", toupper('$') ,
			"L converted to lowercase is ", tolower('L') );
	return 0;
}
```
### Functions isspace, iscntrl, ispunct, isprint and isgraph
1. Function isspace determines whether a character is one of the following whitespace characters: space ( ' ' ), form feed ( '\f' ), newline ( '\n' ), carriage return ( '\r' ), horizontal tab( '\t' ) or vertical tab ( '\v' ).
2. Function iscntrl determines whether a character is one of the following control characters: horizontal tab ( '\t' ), vertical tab ( '\v' ), form feed( '\f' ), alert ( '\a' ), backspace ( '\b' ), carriage return ( '\r' ) or newline ( '\n' ).
3. Function ispunct determines whether a character is a printing character other than a space, a digit or a letter, such as $ , # , ( , ) , [ , ] , { , } , ; , : or % 
4. Function isprint determines whether a character can be displayed on the screen (including the space character). 
5. Function isgraph is the same as isprint , except that the space character is not included

```c 
#include <stdio.h>
#include <ctype.h>
int main( void )
{
	printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
			"According to isspace:",
			"Newline", isspace( '\n' ) ? " is a " : " is not a ",
			"whitespace character", "Horizontal tab",
			isspace( '\t' ) ? " is a " : " is not a ",
			"whitespace character",
			isspace( '%' ) ? "% is a " : "% is not a ",
			"whitespace character" );
	printf( "%s\n%s%s%s\n%s%s\n\n", "According to iscntrl:",
			"Newline", iscntrl( '\n' ) ? " is a " : " is not a ",
			"control character", iscntrl( '$' ) ? "$ is a " :
			"$ is not a ", "control character" );
	printf( "%s\n%s%s\n%s%s\n%s%s\n\n",
			"According to ispunct:",
			ispunct( ';' ) ? "; is a " : "; is not a ",
			"punctuation character",
			ispunct( 'Y' ) ? "Y is a " : "Y is not a ",
			"punctuation character",
			ispunct( '#' ) ? "# is a " : "# is not a ",
			"punctuation character" );
	printf( "%s\n%s%s\n%s%s%s\n\n", "According to isprint:",
			isprint( '$' ) ? "$ is a " : "$ is not a ",
			"printing character",
			"Alert", isprint( '\a' ) ? " is a " : " is not a ",
			"printing character" );
	printf( "%s\n%s%s\n%s%s%s\n", "According to isgraph:",
			isgraph( 'Q' ) ? "Q is a " : "Q is not a ",
			"printing character other than a space",
			"Space", isgraph( ' ' ) ? " is a " : " is not a ",
			"printing character other than a space" );
	return 0;
}

```
## String Conversion Functions 

This section presents the string-conversion functions from the general utilities library
(<stdlib.h>) . These functions convert strings of digits to integer and floating-point values. Table below summarizes the string-conversion functions. 

|Function prototype |  Function description |
|---------|------------|
|double strtod( const char \*nPtr, char \*\*endPtr );| Converts the string nPtr to double |
|long strtol( const char \*nPtr, char \*\*endPtr, int base );|Converts the string nPtr to long |
|unsigned long strtoul( const char \*nPtr, char \*\*endPtr, int base );|
Converts the string nPtr to unsigned long |

The C standard also includes strtoll and strtoull for converting strings to long long int and unsigned long long respectively. Note the use of const to declare variable nPtr in the function headers (read from right to left as "nPtr is a pointer to a character constant"); const specifies that the argument value will not be modified.

### Function strtod

Function strtod converts a sequence of characters representing a floating-point value to double . The function returns 0 if it’s unable to convert any portion of its first argument to double . 
The function receives two arguments—a string ( char \* ) and a pointer to a
string ( char \*\* ). The string argument contains the character sequence to be converted to double any whitespace characters at the beginning of the string are ignored. The function uses the char \*\* argument to modify a char \* in the calling function ( stringPtr ) so that it points to the location of the first character after the converted portion of the string or to the entire string if no portion can be converted.

[Link to programming example](https://github.com/beyond2013/ProgIntro/tree/master/src/strtod.c)

### Function strtol

Function strtol converts to long int a sequence of characters representing an integer.The function returns 0 if it’s unable to convert any portion of its first argument to long int . The function receives three arguments—a string ( char * ), a pointer to a string and an integer. The string argument contains the character sequence to be converted to double any whitespace characters at the beginning of the string are ignored. The function uses the char ** argument to modify a char * in the calling function ( remainderPtr ) so that it points to the location of the first character after the converted portion of the string or to the entire string if no portion can be converted.

[Link to programming example](https://github.com/beyond2013/ProgIntro/tree/master/src/strtol.c)

### Function strtoul
Function strtoul converts to unsigned long int a sequence of characters representing an unsigned long int value. The function works identically to function strtol. The statement x = strtoul( string, &remainderPtr, 0 ); in line 12 of example code indicates that x is assigned the unsigned long int value converted from string . The second argument, &remainderPtr , is assigned the remainder of string after the conversion. The third argument, 0 , indicates that the value to be converted can be in octal, decimal or hexadecimal format

[Link to programming example](https://github.com/beyond2013/ProgIntro/tree/master/src/strtoul.c)

## Standard Input/Output Library Functions
This section presents several functions from the standard input/output library ( <stdio.h> ) specifically for manipulating character and string data. Table below summarizes the character and string input/output functions of the standard input/output library.


### Functions fgets and putchar

[Example code](https://github.com/beyond2013/ProgIntro/tree/master/src/fgetsputs.c) uses functions fgets and putchar to read a line of text from the standard input (keyboard) and recursively output the characters of the line in reverse order. 
Function fgets reads characters from the standard input into its first argument an array of chars until a newline or the end-of-file indicator is encountered, or until the maximum number of characters is read. 
The maximum number of characters is one fewer than the value specified in fgets’s second argument. 
The third argument specifies the stream from which to read characters—in this case, we use the standard input stream ( stdin ). A null character ( '\0' ) is appended to the array when reading terminates.

Function putchar prints its character argument. The program calls recursive function reverse to print the line of text backward. 
If the first character of the array received by reverse is the null character '\0' , reverse returns. Otherwise, reverse is called again with the address of the subarray beginning at element sPtr[1] , and character sPtr[0] is output with putchar when the recursive call is completed. 
The order of the two statements in the else portion of the if statement causes reverse to walk to the terminating null character of the string before a character is printed.
As the recursive calls are completed, the characters are output in reverse order.

### Function getchar
[Example code](https://github.com/beyond2013/ProgIntro/tree/master/src/getchar.c) uses functions getchar and puts to read characters from the standard input into character array sentence and display the characters as a string. Function getchar reads a character from the standard input and returns the character as an integer. As you
know, function puts takes a string as an argument and displays the string followed by a
newline character. The program stops inputting characters when either 79 characters have
been read or when getchar reads the newline character entered by the user to end the line of text. A null character is appended to array sentence (line 14) so that the array may be treated as a string. Then, line 17 uses puts to display the string contained in sentence. 

### Function sprintf
[Example code](https://github.com/beyond2013/ProgIntro/tree/master/src/sprintf.c)uses function sprintf to print formatted data into array s —an array of characters. The function uses the same conversion specifiers as printf (see Chapter 9 for a detailed discussion of formatting). The program inputs an int value and a double value to be formatted and printed to array s . Array s is the first argument of sprintf . [Note: If your system supports snprintf\_s, then use that in preference to sprintf . If your system doesn’t support snprintf\_s but does support snprintf , then use that in preference to sprintf.

### Function sscanf
[Example code](https://github.com/beyond2013/ProgIntro/tree/master/src/sscanf.c) uses function sscanf to read formatted data from character array s . The function uses the same conversion specifiers as scanf . The program reads an int and a double from array s and stores the values in x and y , respectively. The values of x and y are printed.
Array s is the first argument of sscanf.

## String-Manipulation Functions of the String-Handling Library
The string-handling library ( <string.h> ) provides many useful functions for manipulat-
ing string data (copying strings and concatenating strings), comparing strings, searching strings for characters and other strings, tokenizing strings (separating strings into logical pieces) and determining the length of strings. This section presents the string-manipulation functions of the string-handling library. The functions are summarized in table below:

TABLE GOES HERE PAGE 350


Every function—except for strncpy —appends the null character to its result.
