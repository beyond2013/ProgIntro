#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h> // for system() 

int add_nums(int count, ...)
{
    int result = 0;
    va_list args; // list of the args passed to ...
    va_start(args, count); // start the list for args after the count argument
    for (int i = 0; i < count; ++i) {
        int value = va_arg(args, int); // get the next argument as an int (the datatype can be anything eg. char, float)
        result += value;
    }
    va_end(args); // clear the list of args
    return result;
}

int main()
{
    int sum = add_nums(4, 25, 25, 50, 50);
    printf("%d\n", sum);
	system("PAUSE");
	return 0;
}