#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
  size_t col=1, row=1;
	printf("Enter a number: ");
	scanf("%d", &n);
  int max = 2*n -1; 

		while(row <= max)
		{
			while(col <= max)
			{
				printf("%d ", n);
				col++;
			}
			printf("\n");
			row++;
		}

	return 0;
}
