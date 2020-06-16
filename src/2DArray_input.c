#include<stdio.h>
int main(void)
{
	int matrix[2][2];

	int row, col;

	printf("\nEnter value for matrix\n");

  for(row=0;row<2; row++)
	{
		for(col=0;col < 2; col++)
		{
      scanf("%d", &matrix[row][col]);
		}
	}


  for(row=0;row<2; row++)
	{
		for(col=0;col < 2; col++)
		{
      printf("%d\t ", matrix[row][col]);
		}
		printf("\n");
	}


	return 0;
}


