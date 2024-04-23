#include <stdio.h>
int main(void)
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;
	printf("The address of a is %p ", &a);
	printf("\n The same can be achieved using pointer %p", aPtr);
	printf("\n we have been accessing variable directly using its name");
	printf("\n Indirectly accessing the value of a %d", *aPtr);
	printf("\n");

	return 0;
}
