# Unions

- A union is a derived data type (like a structure)  
- members of union share the same storage space
- for different situations in a program, some variables may not be relevant, but other variables are  
- A union shares the space instead of wasting storage on variables that are not being used  
- Members of a union can be of any data type
- The number of bytes used to store a union must be at least enough to hold the largest member  
- In most cases, unions contain 2 or more data types  
- Only one member, and thus one data type, can be referenced at a time.
- It is the responsibility of the programmer to ensure that the data in a union is referenced with the proper data type  

## Union Declarations

- A union defintion has the same format as a structure definition  

```c
  union number {
    int x;
    double y;
  };
```
- Union definition is normally placed in a header  

## Operations that can be performed on unions

- Assigning a union to another union of the same type  
- taking the address(&) of a union variable  
- accessing union members using the arrow or dot operator  
- unions may not be compared using == and !=   


