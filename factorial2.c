#include<stdio.h>
int factorial(int num);
int factorial(int num)
{
  int result =1, counter;
	for(counter=1;counter<=num;counter++)
	{
		result *= counter;
	}
	return result;
}
int main()
{
	int num,result;
	printf("\nEnter any number \t ");
	scanf("%d", &num);
	result=factorial(num);
	printf("factorial of %d is %d ", num, result);
	return 0;
}

