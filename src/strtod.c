#include <stdio.h>
#include <stdlib.h>
int main( void )
{
	// initialize string pointer
	const char *string = "admitted are 51.2"; // initialize string
	double d; // variable to hold converted sequence
	char *stringPtr; // create char pointer
	d = strtod( string, &stringPtr );
	printf( "The string \"%s\" is converted to the\n", string );
	printf( "double value %.2f and the string \"%s\"\n", d, stringPtr );
	return 0;
}
