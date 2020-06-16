#include <stdio.h>
#define SIZE 80
int main( void )
{
	char s[ SIZE ]; // create char array
	int x; // x value to be input
	double y; // y value to be input
	puts( "Enter an integer and a double:" );
	scanf( "%d%lf", &x, &y );
	sprintf( s, "integer:%6d\ndouble:%8.2f", x, y );
	printf( "%s\n%s\n",
			"The formatted output stored in array s is:", s );
}
