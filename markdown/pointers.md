# Pointers

## Introduction
- A pointer in C is a way to share a memory address among different contexts (primarily functions). 
- They are primarily used whenever a function needs to modify the content of a variable that it does not own.
- Pointer is one of the most powerful features of the C programming language. 
- Pointers enable programs to:-   
     i- simulate call-by-reference and  
     ii- to create and manipulate dynamic data structures (i.e. data structures that can grow and shrink at execution time, such as linked lists, queues, stacks and trees).  

## Pointer Variable Definitions and Initialization
- Pointers are variables whose values are memory addresses. 
- Normally a variable directly contains a specific value. A pointer, contains an address of a variable that contains a specific value.
- In this sense, a variable name directly references a value, and a pointer indirectly references a value.
- Referencing a value through a pointer is called indirection.
- Pointers must be defined before they can be used.

```c
 int *countPtr, count;
 ```
- The definition above	specifies that variable countPtr is of type int * and is read "countPtr is a pointer to int" or "countPtr points to an object of type int"
.
- Note that the variable count is defined to be an int, not a pointer to an int.
- The * only applies to countPtr in the definition.
- Pointers can be defined to point to objects of any type.
- Pointers should be initialized when they are defined or in an assignment statement. 
- A pointer may be initialized to 0, NULL or an address. 
- A pointer with the value NULL points to nothing.
- NULL is a symbolic constant defined in the <stddef.h> header and several other headers, such as <stdio.h>
- Initializing a pointer to 0 is equivalent to initializing with NULL.

## Pointer Operators

The & or address operator is a unary operator that returns the address of its operand. For example

```c 
int y =5
int *yPtr;

yPtr = &y
```
The third statement assigns the address of the variable y to pointer variable yPtr.

```c

#include<stdio.h>
int main (void)
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;
	printf("The address of a is %p \nThe value of aPtr is %p", &a, aPtr);
	printf("The value of a is %d \nThe value of *aPtr is %d", a, *aPtr);
	printf("\n\nShowing that * and & are compelements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
 
  return 0;
}

```


