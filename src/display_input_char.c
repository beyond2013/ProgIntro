#include <stdio.h>

int main(int argc, char *argv[])
{
	char input=' ';

	printf("Enter any character: ");
	input = getchar();

	printf("The character you entered is %c\n", input);
	printf("Integer equivalent of %c is %d\n", input, input);

	return 0;
}
