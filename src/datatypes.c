#include <stdio.h>
#include <limits.h>

int main()
{
	printf("char ranges from %d to %d \n ", CHAR_MIN, CHAR_MAX);
	printf("unsigned char ranges from %d to %d \n ", 0, UCHAR_MAX);
	printf("int ranges from %d to %d \n ", INT_MIN, INT_MAX);
	printf("unsigned int ranges from %d to %u \n ", 0, (unsigned int) UINT_MAX);
	printf("short ranges from %d to %d \n ", SHRT_MAX, SHRT_MAX);
	printf("unsigned short ranges from %d to %d \n ", 0, (unsigned short) USHRT_MAX);
	printf("long ranges from %d to %d \n ", 0, UCHAR_MAX);
  printf("\n Floating Point Types \n ");
	printf("float ranges from %d to %d \n ", 0, UCHAR_MAX);
	printf("double ranges from %d to %d \n ", 0, UCHAR_MAX);
	printf("long double ranges from %d to %d \n ", 0, UCHAR_MAX);


	return 0;
}

