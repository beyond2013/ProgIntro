#include <stdio.h>
#define SIZE 80
int main( void )
{
	int c; // variable to hold character input by user
	char sentence[ SIZE ]; // create char array
	int i = 0; // initialize counter i
	// prompt user to enter line of text
	puts( "Enter a line of text:" );
	// use getchar to read each character
	while ( i < SIZE - 1 && ( c = getchar() ) != '\n' ) {
		sentence[ i++ ] = c;
	} // end while
	sentence[ i ] = '\0'; // terminate string
	// use puts to display sentence
	puts( "\nThe line entered was:" );
	puts( sentence );
} // end main
