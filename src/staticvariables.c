#include <stdio.h>

int callCount()
{
    static int count = 0; // Static variable to store call count
    count++;
    return count;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Function called %d times\n", callCount());
    }
    return 0;
}