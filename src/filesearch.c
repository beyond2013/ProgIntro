#include <stdio.h>
#include <cstring>
int main( void )
{

FILE *fp;
	int line_num = 1;
	int find_result = 0;
	char temp[512];
  char str[]="tenorshare.com"	;
	
	if((fp = fopen("email.txt", "r")) == NULL)
	{
		return(-1);
	}

	while(fgets(temp, 512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			printf("A match found on line: %d\n", line_num);
			printf("\n%s\n", temp);
			find_result++;
		}
		line_num++;
	}

	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}
	
	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
} // end main
