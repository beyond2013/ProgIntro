#include <stdio.h>

int main()
{
  int number=0;
  int cube=0;
	printf("Enter numeric value \t ");
	scanf("%d", &number);

  cube = number * number * number;

	printf("The cube of %d is %d", number , cube);


	return 0;
}
