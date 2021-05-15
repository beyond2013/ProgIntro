#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2;

	printf("\n The value of a is %d",a);
	a = a + 2;

	printf("\n The value of a is %d",a);
	a += 2;

	printf("\n The value of a is %d",a);
	printf("\n The value of a-=2 is %d", a-=2);
	printf("\n The value of a*=2 is %d", a*=2);
	printf("\n The value of a/=2 is %d", a/=2);
	printf("\n The value of a%%=2 is %d", a%=2);

}


