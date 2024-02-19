#include <stdio.h>
#include "mycube.h"


int main()
{
  int number=0; 
  int cube=0;
	printf("Enter numeric value \t ");
	scanf("%d", &number);
  cube = mycube(number);   // function call()

	printf("The cube of %d is %d", number ,cube );  
	return 0;
}





