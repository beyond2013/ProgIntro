#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char convert(char blockletter)
{
	char convertedletter[0];
	if(tolower(blockletter))
	{
		convertedletter=tolower(blockletter);
	}
	return convertedletter;
}

int main()
{
  char uppercaseletter[0];
	printf("Enter an uppercase letter");
	scanf("%c", &uppercaseletter);
	printf("%c in lower case is %c", uppercaseletter, convert(uppercaseletter));
	return 0;
}
