#include <stdio.h>

int main(int argc, char *argv[])
{
	int input,number,remainder;
  int binarynum=0, i = 1, octalnum=0;
	printf("\n Enter a number to convert to binary\t");
	scanf("%d", &input);


	number = input;
	while(number > 0)
	{
		remainder = number % 2;
		number/=2;
	  binarynum += remainder * i; 	
		i*=10;
	}

	printf("\n Binary Equivalent of %d is %d\n", input, binarynum);

  i = 1;
	number = input;
	while(number > 0)
	{
		remainder = number % 8;
		number/=8;
	  octalnum += remainder * i; 	
		i*=10;
	}

	printf("\n Octal Equivalent of %d is %d\n", input, octalnum);
	return 0;
}
