#include<stdio.h>
#include<ctype.h>

int length(char array[]);
int strongpwd(char array[]);

int main()
{

	char password[]="123456";
  char password2[]="qwerty";
  char password3[]="qwerty123";
	char password4[]="14July_2020!";

  printf("\n1. Length of password:\t %s is %d", password, length(password));
  printf("\n2. Length of password2:\t %s is %d", password2, length(password2));
  printf("\n3. Length of password3:\t %s is %d", password3, length(password3));
  printf("\n4. Length of password4:\t %s is %d", password4, length(password4));


  printf("\n1. Strength of password:\t %s is %d", password, strongpwd(password));
  printf("\n2. Strength of password2:\t %s is %d", password2, strongpwd(password2));
  printf("\n3. Strength of password3:\t %s is %d", password3, strongpwd(password3));
  printf("\n4. Strength of password4:\t %s is %d", password4, strongpwd(password4));



	printf("\n");
	return 0;
}

int length(char array[])
{
	int length=0;
	int count=0;

	while(array[count] != '\0')
	{
		length++;
		count++;
	}

	return length;
}


int strongpwd(char array[])
{
   int strong=0;

	/* complete the program by 
	 * writing this function
	 * you may use the character handling 
	 * functions taught in the class
	 */

   return strong;
}
