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
	
	// open file for writing 
	outfile = fopen ("person.dat", "w"); 
	if (outfile == NULL) 
	{ 
		fprintf(stderr, "\nError opening file\n"); 
		exit (1); 
	} 

	struct person p1 = {1, "Imran", "Ali"}; 
	struct person p2 = {2, "Abdul", "Basit"}; 
	
	// write struct to file 
	fwrite (&p1, sizeof(struct person), 1, outfile); 
	fwrite (&p2, sizeof(struct person), 1, outfile); 
	
	if(fwrite != 0) 
		printf("contents written to file successfully !\n"); 
	else
		printf("error writing file !\n"); 

	// close file 
	fclose (outfile); 

	return 0; 
} 

