#include <stdio.h>


int main(int argc, char *argv[])
{
	int decnumb;
	char bin[17];

  printf("Enter a number\t");
	scanf("%d", &decnumb);
  int count = 16;
	while(decnumb > 0)
	{
		/* printf("%d", decnumb%2); */
		bin[count--]=decnumb%2;
		decnumb/=2;
	}

	for(count = 0; count < 17; count++)
		printf("%d", bin[count]);
	printf("\n");
	return 0;
}

