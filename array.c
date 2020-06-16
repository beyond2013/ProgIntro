#include<stdio.h>
int main(void)
{
	int matrix[2][2]={{1, 3}, {6, 7}};

	int row, col;

  for(row=0;row<2; row++)
	{
		for(col=0;col < 2; col++)
		{
      printf("%d ", matrix[row][col]);
		}
	}


	return 0;
}


