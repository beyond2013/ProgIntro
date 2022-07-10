#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

int main()
{
	printf("char ranges from %d to %d \n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char ranges from %d to %u \n\n", 0, UCHAR_MAX);

	printf("short ranges from %d to %d \n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short ranges from %d to %u \n\n", 0, USHRT_MAX);

	printf("int ranges from %d to %d \n", INT_MIN, INT_MAX);
	printf("unsigned int ranges from %d to %u \n\n", 0, UINT_MAX);

	printf("long ranges from %ld to %ld \n", LONG_MIN, LONG_MAX);
	printf("unsigned long ranges from %d to %lu \n\n", 0, ULONG_MAX);

	printf("long long ranges from %lld to %lld \n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long ranges from %d to %llu \n\n", 0, ULLONG_MAX);

	printf("\n\tFloating Point Types\n");
	printf("float ranges from %.10e to %.10e \n", FLT_MIN, FLT_MAX);
	printf("double ranges from %.10e to %.10e \n", DBL_MIN, DBL_MAX);
	printf("long double ranges from %.10e to %.10e \n\n\n\n", LDBL_MIN, LDBL_MAX);
	system("PAUSE");
	return 0;
}

