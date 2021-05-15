#include <stdio.h>
int main()
{
	int marks[5]; //declare 
  int index=0, sum=0;
	for(index=0; index < 5; index++)
	{
    printf("\nEnter value for marks[%d]\t ", index);
    scanf("%d",&marks[index]);
		sum = sum + marks[index];
	}

		printf("\nThe sum of array marks is %d", sum);
		printf("\nThe average of array marks is %d", sum/5);
	return 0;
}


