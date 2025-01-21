#include <stdio.h>

float calculate_gpa(int[2][5], int);

int main(int argc, char const *argv[])
{
    int scores[2][5] = {{60, 70, 75, 80, 55}, {3, 3, 3, 3, 4}};

    float result = calculate_gpa(scores, 5);
    printf("result = %f", result);

    return 0;
}

float calculate_gpa(int array[2][5], int size)
{
    float result = 0.0;
    int quotient = 0;
    for (int i = 0; i < size; i++)
    {
        result += array[0][i] * array[1][i];
        quotient += array[1][i];
    }
    return result / quotient;
}