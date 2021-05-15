#include <stdio.h>
int main()
{
	int marks[5]={46,55,60,75,85}; //declare initialize
  int index=0, sum=0;
	for(index=0; index < 5; index++)
	{
		/* printf("\n%d", marks[index]); */
		sum = sum + marks[index];
	}

		printf("\nThe sum of array marks is %d", sum);
	return 0;
}


