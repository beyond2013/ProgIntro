#include <stdio.h>

int calculateFibonacci(int n)
{
    static int fibPrev = 0, fibNext = 1; // Static variables for Fibonacci sequence
    int temp;

    if (n <= 1)
    {
        return n;
    }

    temp = fibNext;
    fibNext = fibPrev + fibNext;
    fibPrev = temp;

    return fibNext;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", calculateFibonacci(i));
    }
    printf("\n");
    return 0;
}