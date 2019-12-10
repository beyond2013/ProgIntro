#include<stdio.h>
int cubeByReference(int *nPtr);

int main(void)
{
	int number = 5;
	printf("\nThe original value of number is %d", number);
	cubeByReference(&number);
	printf("\nThe new value of number is %d", number);
	return 0;
}
void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}


