#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // VARIABLE DECLARATION AREA
    int numb_one, numb_two;
    int result;
    char choice;

    printf("Enter first number");
    scanf("%d", &numb_one);
    printf("Enter second number");
    scanf("%d", &numb_two);
    printf("Enter choice");

    scanf(" %c", &choice);
    if(choice == '+')
    {
        result = numb_one + numb_two;
    }
    else if(choice == '-')
    {
        result = numb_one - numb_two;
    }
    else if(choice == '*')
    {
        result = numb_one * numb_two;
    }
    else if(choice == '/')
    {
        result = numb_one / numb_two;
    }
    printf("Result of %d %c %d = %d", numb_one, choice, numb_two, result);
    return 0;
}
