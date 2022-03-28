#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
  char str[100];	
  char name[]="Imran";
  char lname[]="Ali";
  
	printf("str = %s", str);
  strcat(str, name);
	printf("str = %s", str);
	strcat(str, " ");
  strcat(str, lname);
	printf("str = %s", str);


	return 0;
}
