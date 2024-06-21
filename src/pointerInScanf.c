#include <stdio.h>

int main()
{
    int age;
    int *ptr_age;
    const char *format = "%d";
    ptr_age = &age;

    printf("\n Enter your age in years\t");
    scanf(format, ptr_age);

    printf("\n You are %d years old", *ptr_age);
    printf("\n You are %d years old", age);

    return 0;
}
