#include <stdio.h>
int main()
{
	// char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0'};
	// char cname[] = "BSIT-2020-2024";
	//  char myname[6] = {'I', 'M', 'R', 'A', 'N', '\0'};
	char myname[6] = {'I', 'M', '\0', 'R', 'A', 'N'};

	char student[15];
	// printf("%s\n", vowels);
	// printf("%s\n", cname);
	// printf("%s\n", myname);
	printf("\n Enter name of your student: ");
	scanf("%s", student);
	printf("\nThe name of your student is %s", student);
	printf("\nYour student's name starts with %c", student[0]);
	printf("\n");
	return 0;
}
