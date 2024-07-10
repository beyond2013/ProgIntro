#include <stdio.h>

char input[25]; // global array - not a good practice

void toUpper(); // declaration of function

int main()
{
    printf("\nEnter your name in small alphabets\t");
    scanf("%s", input);

    toUpper(); // call to function
    printf("\n Input now contains: %s", input);
    return 0;
}

void toUpper() // definition of function
{
    for (size_t i = 0; i < 25; i++)
    {
        input[i] -= 32;
    }
}