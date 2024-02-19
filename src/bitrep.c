#include <stdio.h>

int main(int argc, char *argv[])
{
	int x;

	printf("\nEnter a number to convert to binary:\t");
	scanf("%d", &x);

   while((x / 2) != 1) // keep printing the remainder of the number with two
	 {                        // loop exits when the number becomes exactly equal to 2
		 printf("%d ", x % 2);
		 x /= 2;
	 }
	printf("%d ", x % 2);  // since the number can still be divided once with 2
	printf("%d ", 1);     // the bit string output by this method is the reverse binary bit representation 

	return 0;
}
