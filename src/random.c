#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int randomNumber = 0;
    int low = 1, high = 47; // low is inclusive and high is exclusive
    srand(time(NULL));      // Seed with current time, used to generate different sequence of random numbers at every execution
    for (size_t i = 0; i < 9; i++)
    {
        randomNumber = low + rand() % (high - low + 1); // generate a random number between 1 and 46
        printf("Random number: %d\n", randomNumber);
    }

    return 0;
}
