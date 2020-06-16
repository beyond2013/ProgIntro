#include <stdio.h>

int main( void )
{
	char s[] = "31298 87.375"; // initialize array s
	int x; // x value to be input
	double y; // y value to be input
	sscanf( s, "%d%lf", &x, &y );
	printf( "%s\n%s%6d\n%s%8.3f\n",
			"The values stored in character array s are:",
			"integer:", x, "double:", y );
}
