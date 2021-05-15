# Basic Data types and variables

- computer programs usually store data items, e.g. values representing age, height or weight of a student, temperature of a place, length of a wire, area of a land, volume of a water tank.
- variables are used in programs to store such values
- each variable has a type
- e.g. age is usually recorded as a discrete number i.e. 24, grade may be represented as a single character
- to use a variable it should be declared first
- variable declaration is a statement of the following format

```
data_type name_of_variable;
```

- For example a variable of type integer having name age  can be declared as

```
int age;
```

- variables may be given an initial value when they are declared e.g.

```
int weight=60;
```

Following table displays basic data types available in c, and the amount of memory they reserve 

| Type | size in bytes |
|------|--------------|
| char |     1        |
| short| 2 | 
| int | 4 | 
| long | 8 |
| float | 4 |
| double | 8 |

- the above table may be verified by executing [this program](../src/sizeof.c) which uses `sizeof` operator 
