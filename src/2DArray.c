#include<stdio.h>
int main(void)
{
	int matrixA[2][2]={{1, 3}, {6, 7}};
	int matrixB[2][2]={{1, 0}, {0, 1}};
	int matrixC[2][2];
	int row, col;

  for(row=0;row<2; row++)
	{
		for(col=0;col < 2; col++)
		{
			matrixC[row][col] = matrixA[row][col] + matrixB[row][col];
		}
		printf("\n");
	}


  for(row=0;row<2; row++)
	{
		for(col=0;col < 2; col++)
		{
      printf("%d\t ", matrixC[row][col]);
		}
		printf("\n");
	}


	return 0;
}


