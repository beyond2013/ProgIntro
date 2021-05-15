```{#char .c .numberLines}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char grade = 'A';

	printf("\n************   OUTPUT *********************");
	printf("\n\n");

	printf("\n Character stored in grade variable is \t %c", grade);

	printf("\n int value represented by char variable grade is \t %d", grade);

	grade = 66;

	printf("\n new Character value of  grade variable is \t %c", grade);

	grade++;


	printf("\n Character value of  grade variable after increment \t %c", grade);

	printf("\n\n");

	printf("************   ****** *********************\n");

	return 0;
}
```
