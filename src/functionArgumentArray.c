#include <stdio.h>

// Passing several values to a function can be efficiently achieved using arrays

int sumArray(int, int[]);

int main(int argc, char *argv[])
{
  int array[6]; //= {23, 32, 12, 44, 45, 67};

  printf("Enter 6 values \t ");
  for (size_t count = 0; count <= 5; count++)
    scanf("%d", &array[count]);

  printf("The sum of array :\t");

  for (size_t count = 0; count <= 5; count++)
    printf("%d \t", array[count]);

  printf(" is %d \n", sumArray(6, array));

  return 0;
}

int sumArray(int size, int inputarray[])
{
  int sum = 0;

  for (size_t count = 0; count < size; count++)
    ++inputarray[count];

  for (size_t count = 0; count < size; count++)
    sum += inputarray[count];
  return sum;
}
