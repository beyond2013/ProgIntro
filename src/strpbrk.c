#include <stdio.h>
#include <string.h>
int main( void )
{
	const char *string1 = "This is a test"; // initialize char pointer
	const char *string2 = "beware"; // initialize char pointer
	printf( "%s\"%s\"\n'%c'%s\n\"%s\"\n",
			"Of the characters in ", string2,
			*strpbrk( string1, string2 ) ,
			" appears earliest in ", string1 );
	return 0;
} // end main
