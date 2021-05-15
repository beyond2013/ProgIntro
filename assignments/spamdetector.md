# Assignment 

## Background
Have you ever seen Junk or Spam link in your inbox? These are emails sent in bulk, and most of them are not only annoying but may also contain links that lead to phishing websites or site that are hosting malware, or include malware as file attachments. (see [Spamming](https://en.wikipedia.org/wiki/Spamming) for details)

Most of the email services provide a mechanism to automatically detect spam email, and for doing this various techniques are used (see [Anti-Spam techniques](https://en.wikipedia.org/wiki/Anti-spam_techniques) for details). 


## Objective

In this assignment you will create a very simple spam detection program which will check the email contents against a list of blacklisted domains. Both the email and the black list will be placed in separate files and will be passed to the program as command line arguments.

Following is the incomplete C program you are required to complete by writing the code for **chkSpam** function. The function should return 0 if the email file does not contain any of the domain names present in the blacklist file, otherwise it should return 1. 

```{.c .numberLines}
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
  //	place your logic to check spam here
  return 0;
}
```


## Instructions

1. Do not re-write the entire program from scratch.
2. For completing **chkSpam** function read the file blacklist and load the domain names in an array.
3. Loop through the array and return 1 if any domain name is found in the email file.
4. Hint: You can use **strstr** function to search for a domain name.
5. After completing assignment only upload the **C** file on LMS.


## Due date: 16th August 2020
