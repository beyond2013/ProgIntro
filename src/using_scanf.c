/*
 * This program shows how to use scanf() function
 *
*/
 
#include <stdio.h>
int main(int argc, char *argv[])
{
	int birth_year=0;

  printf("\nEnter your year of birth in 4 digits [e.g. 1980]: \t");
	scanf("%d", &birth_year);

	printf("\n In 2021 your age is approximately %d years\n", 2021 - birth_year);

	return 0;
}
