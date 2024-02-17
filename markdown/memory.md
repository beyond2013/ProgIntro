# Static and Dynamic Memory Allocation

Sure! Let's start with a brief explanation of static and dynamic memory allocation in C.

Static Memory Allocation:
- Static memory allocation refers to the allocation of memory at compile time. 
- Memory for variables declared with static storage class (using the `static` keyword) and global variables is allocated statically.
- Memory for these variables is allocated once, and it persists throughout the program's execution.
- The size of statically allocated memory is fixed and cannot be changed during runtime.

Dynamic Memory Allocation:
- Dynamic memory allocation refers to the allocation of memory at runtime.
- In C, dynamic memory allocation is done using functions like `malloc()`, `calloc()`, `realloc()`, and `free()` from the `<stdlib.h>` library.
- Memory allocated dynamically resides in the heap memory area.
- It allows for more flexible memory management as the size of memory can be adjusted during runtime.
- However, it's the responsibility of the programmer to deallocate dynamically allocated memory using the `free()` function to avoid memory leaks.

Now, let's look at sample programs to illustrate both concepts:

1. Static Memory Allocation:

```c
#include <stdio.h>

// Static allocation of array
void staticArrayExample() {
    // Static array declaration
    int staticArray[5];

    // Assigning values to the array elements
    for (int i = 0; i < 5; i++) {
        staticArray[i] = i * 2;
    }

    // Accessing and printing array elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", staticArray[i]);
    }
    printf("\n");
}

// Static allocation of global variable
int globalVar = 10;

int main() {
    staticArrayExample();
    printf("Global variable: %d\n", globalVar);
    return 0;
}
```

In this program, `staticArray` is statically allocated memory, and `globalVar` is also an example of static memory allocation.

2. Dynamic Memory Allocation:

```c
#include <stdio.h>
#include <stdlib.h>

// Dynamic allocation of array
void dynamicArrayExample() {
    // Pointer to int to hold base address of dynamically allocated memory
    int *dynamicArray;
    int size = 5;

    // Dynamically allocating memory for array
    dynamicArray = (int *)malloc(size * sizeof(int));

    // Check if memory allocation is successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Assigning values to the dynamically allocated array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2;
    }

    // Accessing and printing array elements
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Freeing dynamically allocated memory
    free(dynamicArray);
}

int main() {
    dynamicArrayExample();
    return 0;
}
```

In this program, `dynamicArray` is dynamically allocated memory using the `malloc()` function. We allocate memory for an array of integers, assign values to it, and then free the memory using the `free()` function to prevent memory leaks.

These examples should provide a basic understanding of static and dynamic memory allocation in C.
