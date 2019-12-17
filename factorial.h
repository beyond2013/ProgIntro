void factorial(int num)
{
  int result =1, counter;
	for(counter=1;counter<=num;counter++)
	{
		result *= counter;
	}
	printf("factorial of %d is %d ", num, result);
}
