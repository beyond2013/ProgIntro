#include <stdio.h>
#include <string.h>
int main( void )
{
	// initialize array string
	//char string[] = "This is a sentence with 7 tokens";
	FILE *fp;
  
	//char *tokenPtr; // create char pointer
  char word[60];	
	char *ret;
	fp = fopen("sample.txt", "r");

	if(fp!=NULL)
	{
		puts("Successfully opened file for reading");
    ret = fgets(word, 60,fp);

		if(ret!= NULL){
			puts(word);
		}

	}

/*
  printf( "%s\n%s\n\n%s\n",
			"The string to be tokenized is:", string,
			"The tokens are:" );
	tokenPtr = strtok( string, " " ); // begin tokenizing sentence
	// continue tokenizing sentence until tokenPtr becomes NULL
	while ( tokenPtr != NULL ) {
		printf( "%s\n", tokenPtr );
		tokenPtr = strtok( NULL, " " ); // get next token
	} // end while 
*/

	fclose(fp);
	return 0;
}
