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
