// C program to illustate fputc() function
#include<stdio.h> 
int main() 
{ 
    int i = 0; 
		char filename[]="output.txt";
		char filemode[]="w";

    FILE *fp = fopen(filename,filemode); 
  
    // Return if could not open file 
    if (fp == NULL) 
      return 0; 
  
    char string[] = "Department of Computer Science & Information Technology "; 
  
    for (i = 0; string[i]!='\0'; i++) 
  
        // Input string into the file 
        // single character at a time 
        fputc(string[i], fp); 
  
    fclose(fp); 

		printf("\n string successfully written to file %s \n", filename);
    return 0; 
} 
