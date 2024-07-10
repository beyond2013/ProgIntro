Write a c program which can perform currency coversion

    Input in PKR,
    Convert into USD, POUND, UAE

                             1 usd = 278.43 PKR 1 Pound = 354.18 PKR 1 UAE = 75.82 PKR

#include <stdio.h> // pre-processor directive

                             int
                             main()
{

    int number1, number2;

    printf("\n Enter a number\t"); // \n and \t are escape sequence
    // user input
    scanf("%d", &number1); // %d is format specifier for integers, & is address operator

    printf("\n Enter another number\t");
    scanf("%d", &number2);

    printf("%d + %d = %d\n", number1, number2, number1 + number2);
    printf("%d * %d = %d\n", number1, number2, number1 * number2);
    printf("%d - %d = %d\n", number1, number2, number1 - number2);
    printf("%d / %d = %d\n", number1, number2, number1 / number2);
    printf("%d %% %d = %d\n", number1, number2, number1 % number2);

    return 0;
}