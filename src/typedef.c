#include <stdio.h>

int main(int argc, char const *argv[])
{
    typedef int Length;
    typedef int Width;
    typedef int Area;
    Length lengthOfRectangle = 20;
    Width widthOfRectangle = 10;
    Area area = 0;
    area = lengthOfRectangle * widthOfRectangle;

    printf("Area of Rectangle = %d\n", area);
    return 0;
}
