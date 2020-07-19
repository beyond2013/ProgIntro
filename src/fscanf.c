#include <stdio.h>
int main()
{
   FILE *fp;
   char buff[255];

   fp = fopen("test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("%s", buff );

	 return 0;
}

