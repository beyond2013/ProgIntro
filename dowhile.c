#include<stdio.h>
int main(void)
{
	int count;
	char choice;
	count =0;
	do
	{
		printf("%d\n", count);
		count ++;
		printf("\n press y to continue");
		scanf(" %c",&choice);
	}
	while(choice=='y' || choice == 'Y');
}

