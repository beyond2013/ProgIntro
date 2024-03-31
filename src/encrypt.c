#include <stdio.h>
#include "encryption.h"


int main(int argc, char *argv[])
{
	char message[] = "No class today";

//	int length= 15;
//	printf("\n sizeof message = %lu", sizeof(message));

	printf("\n message before encrypt()");
	printf("\n %s", message);



	printf("\n message after encrypt()");
	encrypt(message);
	printf("\n %s", message);

	printf("\n message after decrypt()");
	decrypt(message);
	printf("\n %s", message);


	printf("\n");

	return 0;
}

