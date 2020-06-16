#include <stdio.h>
#include <string.h>
int main( void )
{
	// initialize two char pointers
	const char *string1 = "The value is 3.14159";
	const char *string2 = "1234567890";
	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
			"string1 = ", string1, "string2 = ", string2,
			"The length of the initial segment of string1",
			"containing no characters from string2 = ",
			strcspn( string1, string2 ) );
	return 0;
} // end main
