#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15
int main( void )
{
	char x[] = "Happy Birthday to You"; // initialize char array x
	char y[ SIZE1 ]; // create char array y
	char z[ SIZE2 ]; // create char array z
	// copy
	printf(
			"The
			"The
			contents of x into y
			"%s%s\n%s%s\n",
			string in array x is: ", x,
			string in array y is: ", strcpy( y, x ) );
	// copy first 14 characters of x into z. Does not copy null
	// character
	strncpy( z, x, SIZE2 - 1 );
	z[ SIZE2 - 1 ] = '\0'; // terminate string in z
	printf( "The string in array z is: %s\n", z );
	return 0;
}
