// C program for writing 
// struct to file 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// a struct to read and write 
struct person 
{ 
	int id; 
	char fname[20]; 
	char lname[20]; 
}; 

int main () 
{ 
	FILE *outfile; 
  size_t result;	
	// open file for writing 
	outfile = fopen ("person.dat", "a"); 
	if (outfile == NULL) 
	{ 
		fprintf(stderr, "\nError opening file\n"); 
		exit (1); 
	} 

//	struct person p1 = {1, "Imran", "Ali"}; 
//	struct person p2 = {2, "Abdul", "Basit"}; 
	struct person p3 = {3, "Junaid", "Baber"}; 
	struct person p4 = {4, "Asfand", "Yar"}; 

	printf("\n The size of struct person = %ld", sizeof(struct person));
  /* printf("\n fwrite before call = %ld", fwrite); */	
	// write struct to file 
	fwrite (&p3, sizeof(struct person), 1, outfile); 
  /* printf("\n fwrite after 1st call = %ld", fwrite); */	
	result = fwrite (&p4, sizeof(struct person), 1, outfile); 
  /* printf("\n fwrite after 2nd call = %ld", fwrite); */	

	if(result == 1) 
		printf("contents written to file successfully !\n"); 
	else
		printf("error writing file !\n"); 

	// close file 
	fclose (outfile); 

	return 0; 
} 

