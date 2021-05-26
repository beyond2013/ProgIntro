#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2;

	puts("Enter 2 numbers to find relationship between them");
	scanf("%d%d", &num1, &num2);

	if(num1 == num2)
	{
		printf("\n %d is equal to %d", num1, num2);
	}

	if(num1 != num2)
	{
		printf("\n %d is not equal to %d", num1, num2);
	}

	if(num1 < num2)
	{
		printf("\n %d is less than %d", num1, num2);
	}

	if(num1 > num2)
	{
		printf("\n %d is greater than %d", num1, num2);
	}

	if(num1 <= num2)
	{
		printf("\n %d is less than OR equal to %d", num1, num2);
	}

	if(num1 >= num2)
	{
		printf("\n %d is greater than OR equal to %d", num1, num2);
	}

  printf("\n");
	return 0;
}
