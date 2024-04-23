#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
    *ptr +=10;
        printf("Value at address %p: %d\n", ptr, *ptr);
        ptr++; // Move pointer to the next element
    }
    
    return 0;
}

