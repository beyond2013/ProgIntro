#include <stdio.h>
struct Student
{
	int RollNo;
	char Name[10];
};

int main(void)
{
	struct Student s1 = {1, "Imran"};

	printf("%d", s1.RollNo);
	printf("%s", s1.Name);

	return 0;
}
