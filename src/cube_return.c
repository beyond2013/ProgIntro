#include <stdio.h>

int mycube(int);  // function declare

int main()
{
  int number=0; 
  int cube=0;
	printf("Enter numeric value \t ");
	scanf("%d", &number);

	printf("The cube of %d is %d", number , mycube(number));  // function call()

	return 0;
}


int mycube(int num)  // function definition 
{

  return num * num * num ;
}



