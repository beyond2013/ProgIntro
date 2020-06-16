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
