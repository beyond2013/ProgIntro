#include <stdio.h>

int number=0;
void mycube();

int main()
{
  int cube=0;
	printf("Enter numeric value \t ");
	scanf("%d", &number);

  mycube();

	return 0;
}


void mycube()
{


	printf("The cube of %d is %d", number , number * number * number );
}


