#include <stdio.h>
int main(void)
{
	int count;
	for(count=0;count < 10; count++)
	{
		if(count + 2 > 6)
		{
			printf("%d\n", count);
		}
		else
		{
			break;
		}
	}
}

