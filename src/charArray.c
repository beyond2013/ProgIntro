#include <stdio.h>
int main()
{
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	const char *cname = "BSIT-2020-2024";
	char myname[5] = {'I', 'M', 'R', 'A', 'N'};

	// char student[15];
	//	printf("%s\n", vowels);
	//	printf("vowel[6]= %c\n", vowels[6]); // 'I'

	for (int i = 0; i < 5; i++)
	{
		printf("%c\t", ++vowels[i]);
	}

	// printf("%s\n", cname);
	// printf("%s\n", myname);
	//	printf("\n Enter name of your student: ");
	//	scanf("%s", student);
	//	printf("\nThe name of your student is %s", student);
	//	printf("\nYour student's name starts with %c", student[0]);
	printf("\n");

	// char name_in_small[25];
	//	name_in_small[0] = name_in_small[0] - 32;
	// name_in_small[1] = name_in_small[1] - 32;
	// name_in_small[2] = name_in_small[2] - 32;

	/*for (size_t i = 0; i < 25; i++)
	{

		name_in_small[i] -= 32;
	}
*/
	return 0;
}
