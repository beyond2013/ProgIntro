#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("sizeof char = %u bytes\n", sizeof(char));
	printf("sizeof short = %u bytes\n", sizeof(short));
	printf("sizeof int = %u bytes\n", sizeof(int));
	printf("sizeof long = %u bytes\n", sizeof(long));
	printf("sizeof long long = %u bytes\n", sizeof(long long));
	printf("sizeof float = %u bytes\n", sizeof(float));
	printf("sizeof double = %u bytes\n", sizeof(double));
	printf("sizeof long double = %u bytes\n", sizeof(long double));
	printf("sizeof int[20] = %u bytes\n", sizeof(int[20]));
	printf("sizeof int* = %u bytes\n", sizeof(int*));
	system("PAUSE");
}
