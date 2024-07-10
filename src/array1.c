/*
Array: is a data structure.
It allows to store multiple values
of a single type.
Values are stored in contiguous memory
locations.
*/

#include <stdio.h>

int main(void)
{
	int array[] = {12, 5, 7, 9, 13};

	int sum;

	printf("%d \n", array[0]);

	array[1] = array[1] + 1;

	printf("%d \n", array[1]);

	printf("Enter a value to replace first element in array: ");
	scanf("%d", &array[0]);
	printf("\n First element after replacement is %d", array[0]);
	return 0;
}
