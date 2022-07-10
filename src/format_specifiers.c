#include <stdio.h>

/* 
 * This program shows how to use format specifiers in printf function
 * Information contained related to Quetta has been taken from Wikipedia 
 * https://en.wikipedia.org/wiki/Quetta
*/

/*
  %c	        Character
  %d	        Signed integer
  %e or %E	  Scientific notation of floats
  %f	        Float values
  %g or %G	  Similar as %e or %E
  %hi	        Signed integer (short)
  %hu	        Unsigned Integer (short)
  %i	        Unsigned integer
  %l 	        Long
  %lf	        Double
  %Lf	        Long double
  %lu	        Unsigned int or unsigned long
  %lld	      Long long
  %llu	      Unsigned long long
  %o	        Octal representation
  %p	        Pointer
  %s	        String
  %u	        Unsigned int
  %x or %X	  Hexadecimal representation
  %n	        Prints nothing
  %%	        Prints % character
*/

int main(int argc, char *argv[])
{
  printf("\n %s is the provincial capital of %s ","Quetta", "Balochistan");	
  printf("\n It was largely destroyed in %d earthquake", 1935);
  printf("\n Highest rainfall during 24 hours in Quetta is %f inches which was recroded in 17 December 2000",4.4);
	printf("\n Lowest temperature in Quetta is %.2f %c which was recroded on 8 January %d", -18.3, 'C', 1970);

	return 0;
}
