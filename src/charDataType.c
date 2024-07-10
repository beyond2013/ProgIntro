/*
 * In this program we will
 * learn to declare char variable
 * and write different statements
 * which will help us understand
 * char data type
 */

#include <stdio.h>

int main()
{

	char alphabet = 'Z';
	/*
	char alphabet;
	alphabet='A';
	*/

	// let us try to print the value using %d
	printf("\nvalue of alphabet is %c\n", alphabet);
	printf("\nvalue of alphabet in integer is %d\n", alphabet);
	printf("\nvalue of alphabet + 2 is %d\n", alphabet + 2);
	printf("\nchar  alphabet + 2 is %c\n", alphabet + 2);
	// printf("\nvalue of alphabet + 2 as character is %c\n", alphabet + 2);

	// what will happen if we write the following lines

	alphabet = -1;
	printf("\n current value of alphabet is %c", alphabet);

	// try to guess without compile and run
	// check your answer after running the program
	// did you get the right answer??

	// to find out how many bytes are alloted to char variable
	// printf("\n Memory alloted to char variable alphabet is %lu byte\n", sizeof(alphabet));

	// list of all valid integer values and their corresponding characters

	/*for (int i = -128; i <= 127; i++)
		printf("\n %d  is mapped to %c ", i, i);

	printf("\n");
	*/
	return 0;
}
