#include <stdio.h>

int chkArguments(char *email, char *blacklist);
int chkSpam(char *email, char *blacklist);
int main(int argc, char *argv[])
{
  int chkArg = 0;
  int chkMail = 0;
  switch(argc)
	{
		case 1:
		case 2:
			printf("\n This programs expects two arguments \n ");
		break;

		case 3:
		printf("\n arguments supplied %s and %s \n", argv[1], argv[2]);
		chkArg = chkArguments(argv[1], argv[2]);
		if(chkArg == 1)
		{
			printf("\n Ready to detect spam \n");
			chkMail= chkSpam(argv[1], argv[2]);
			if(chkMail==0)
			{
			  printf("\n email is a spam");
			}
			else
			{
			 printf("\n email is not a spam");
			}
		}

		break;
	}

	return 0;
}

int chkArguments(char *email, char *blacklist)
{
 int returnValue =1;
 FILE *fp, *fp2;
 fp = fopen(blacklist, "r");
 fp2 = fopen(email, "r");
 if( fp == NULL || fp2 == NULL )
 {
	 printf("\n Cannot open one of the files %s %s \n", blacklist, email);
	 returnValue =0;
	 if(fp != NULL) fclose(fp);
	 if(fp2 != NULL) fclose(fp2);
 }

 return returnValue;
}

int chkSpam(char *email, char *blacklist)
{


//
//	place your logic to check spam here
//
  return 0;
}

