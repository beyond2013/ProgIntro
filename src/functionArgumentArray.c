#include <stdio.h>

// Passing several values to a function can be efficiently achieved using arrays

int sumArray(const int []);

int main(int argc, char *argv[])
{
  const int array[]={23, 32, 12, 44, 45, 67};

  printf("The sum of array :\t");

	for(size_t count = 0; count <= 5; count++)
     printf("%d \t", array[count]);

	printf(" is %d \n", sumArray(array));

	return 0;
}

int sumArray(const int array[])
{
  int sum=0;

	for(size_t count =0; count <= 5; count++)
     sum += array[count];
	return sum;
}

