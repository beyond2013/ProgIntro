#include <stdio.h>
#define SIZE 80
void reverse( const char * const sPtr ); // prototype
int main( void )
{
	char sentence[ SIZE ]; // create char array
	puts( "Enter a line of text:" );
	// use fgets to read line of text
	fgets( sentence, SIZE, stdin );
	puts( "\nThe line printed backward is:" );
	reverse( sentence );
} // end main

// recursively outputs characters in string in reverse order
void reverse( const char * const sPtr )
{
	// if end of the string
	if ( '\0' == sPtr[ 0 ] ) { // base case
		return;
	} // end if
	else { // if not end of the string
		reverse( &sPtr[ 1 ] ); // recursion step
		putchar( sPtr[ 0 ] ); // use putchar to display character
	} // end else
}
