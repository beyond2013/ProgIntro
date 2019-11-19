/*
Array: is a data structure. 
It allows to store multiple values 
of a single type.
Values are stored in contiguous memory
locations. 
*/

#include<stdio.h>

int main(void)
{
	int array[10];

	int count;

  for(count=0;count<10 ; count++)
		scanf("%d", &array[count]);

  for(count=0;count<10 ; count++)
		printf("%d\n", array[count]);




	return 0;
}


