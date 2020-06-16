#include<stdio.h>
struct Student
{
	int RollNo;
	char Name[10];
};

int main (void)
{

  struct Student s[2];
	int counter;

	for(counter=0;counter<2;counter++)
	{
		printf("\n Enter Value for RollNo\t");
		scanf("%d", &s[counter].RollNo);
		printf("\n Enter Value for Name \t");
		scanf("%s", s[counter].Name);
	}

	for(counter=0;counter<2;counter++)
	{
		printf("\n RollNo = %d \t", s[counter].RollNo);
		printf("\n Name = %s \t", s[counter].Name);
	}



	return 0;
}

