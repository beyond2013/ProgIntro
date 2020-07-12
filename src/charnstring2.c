#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char course[] = "Programming Fundamentals";

	char course2[] = {'D', 'B', 'M', 'S', '\0'};

	const char *instructor = "Imran Ali";

	printf("\n************   OUTPUT *********************");

	printf("\n\n");

	printf("\n value stored in course character Array %s ", course);

	printf("\n value stored in course2 character Array %s ", course2);

	printf("\n value stored in pointer variable %s ", instructor);

	printf("\n\n");

	printf("************   ****** *********************\n");

	return 0;
}


