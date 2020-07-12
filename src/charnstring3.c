#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char grade;

	printf("\n************   OUTPUT *********************");
	printf("\n\n");

  for(int i=0;i<=255;i++)	
	{
		grade = i;
		printf("\n %d =>  \t %c", grade, grade);
	}

	printf("************   ****** *********************\n");

	return 0;
}
