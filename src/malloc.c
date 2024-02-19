// Dynamic memory allocation using malloc function
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array based on user input
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input values into the array
    printf("Enter %d integer values:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Display the values in the array
    printf("Entered values in the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate the allocated memory when done
    free(arr);

    return 0; // Exit the program successfully
}

/* Explaination of the code containing call to malloc
 * Certainly! Let's break down the line of code that contains `malloc` in the provided example:

```c
arr = (int *)malloc(size * sizeof(int));
```

1. **`malloc(size * sizeof(int))`:**
   - `malloc` is a function in C that stands for memory allocation. It dynamically allocates a block of memory of a specified size during program execution.
   - `size * sizeof(int)` calculates the total number of bytes needed for the array. `sizeof(int)` gives the size of one integer in bytes, and multiplying it by `size` gives the total size needed for the array.

2. **`(int *)`:**
   - The result of `malloc` is a void pointer (`void *`). In C, it's a good practice to cast this pointer to the appropriate type. Here, it's cast to `(int *)`, indicating that the allocated memory is expected to be used as an array of integers.

3. **`arr = ...`:**
   - The result of the `malloc` operation is assigned to the pointer variable `arr`. This means that `arr` now points to the beginning of the dynamically allocated memory block.

So, in summary, this line of code dynamically allocates memory for an array of integers and assigns the address of the allocated memory to the pointer variable `arr`. The size of the allocated memory is determined by the user input (`size`).
*/

