#include<stdio.h>
void factorial(int num);
void factorial(int num)
{
  int result =1, counter;
	for(counter=1;counter<=num;counter++)
	{
		result *= counter;
	}
	printf("factorial of %d is %d ", num, result);
}
int main()
{
	int num;
	printf("\nEnter any number \t ");
	scanf("%d", &num);
	factorial(num);

	return 0;
}

