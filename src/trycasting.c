#include <stdio.h>

int main(int argc, char const *argv[])
{
    float input, after_point = 0.0;
    int before_point;
    printf("Enter a floating point value\t");
    scanf("%f", &input);
    before_point = input;

    after_point = input - before_point;
    printf("\nafter_point=%f", after_point);
    if (after_point >= 0.5)
    {
        before_point++;
    }
    printf("\nafter rounding=%d", before_point);

    return 0;
}
