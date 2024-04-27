#include <stdio.h>

union number
{
    int x;
    double y;
};

int main(int argc, char const *argv[])
{
    union number value;

    value.x = 100;
    printf("\n Integer member has the value:%d and \n double member has the value:%f ",
           value.x, value.y);
    value.y = 100.0;

    printf("\n Integer member has the value:%d and \n double member has the value:%f ",
           value.x, value.y);
    return 0;
}
