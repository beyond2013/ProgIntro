#include <stdio.h>

int main(int argc, char *argv[])
{
	int  n, oldn;
	int lower=0, upper=0;
  int col=1, row=1;
	printf("Enter a number: ");
	scanf("%d", &n);
  int max = 2*n -1; 

	for(row=1;row <= max; row++)
	{
		lower = row + 1;
		upper = max - row;
		if(lower <= max -1)
		{
			if(lower  <= upper)
			{
//				printf("lower = %d, upper = %d: ", lower, upper);
				for(int k = lower; k <= upper; k++) 
				{
					printf("%d ", n-1); 
				}
				n--;
			}
			else if(lower > upper)
			{
				for(int k = lower; k >= upper; k--) 
				{
					printf("%d ", n+1); 
				}
				n++;
			}
		}
		printf("\n");
	}

	return 0;
}
