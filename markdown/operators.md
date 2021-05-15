# Operators

- An operator is a symbol that operates on one or more values or variables.
- e.g + is an operator which performs addition.
- C provides a wide range of operators for performing various tasks.

## Arithmetic Operators

- arithmetic operators perform mathematical operations such as addition, subtraction, multiplication, division etc.

- Assume variables `num1` holds the value `20` and `num2` has holds the value `3`
- Following table lists arithmetic operators, their description and sample usage:

| Operator |                          Description                         |   Example  |
|:--------:|:------------------------------------------------------------:|:----------:|
|     +    | Adds two operands.                                           | A + B = 23 |
|     −    | Subtracts second operand from the first.                     | A − B = 17 |
|     *    | Multiplies both operands.                                    | A * B = 60 |
|     /    | Divides numerator by de-numerator.                           |  A / B = 6 |
|     %    | Modulus Operator and remainder of after an integer division. | A % B = 2  |

- changing the position of operands (i.e. A and B) may change the result in some cases
- e.g. `A - B = 17` but `B - A = -17`similarly `/` and `%` will give different values when the position of `A` and `B` is changed.
- operators which operate on two operands are known as `binary operators`

[link to c program on arithmetic operators](src/arithmeticOperators.c)

## Arithmetic Assignment Operators

- C also provides arithmetic assignment operator which provide a concise way of writing expressions involving arithmetic and assignment.
- e.g. if `a=4` then `a = a + 2` (which means add 2 to `a` and assign the result to `a`) may be written as `a+=2`, note that `a` is not repeated.
- `+=, -=, *=, /=` and `%=` are all arithmetic assignment operators

[link to c program on arithmetic assignment operators](src/arithmeticAssignmentOperators.c)


## Relational Operators

| Operator |                                                              Description                                                             |        Example        |
|:--------:|:------------------------------------------------------------------------------------------------------------------------------------:|:---------------------:|
|    ==    | Checks if the values of two operands are equal or not. If yes, then the condition becomes true.                                      | (A == B) is not true. |
|    !=    | Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.                 | (A != B) is true.     |
|     >    | Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.             | (A > B) is not true.  |
|     <    | Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.                | (A < B) is true.      |
|    >=    | Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true. | (A >= B) is not true. |
|    <=    | Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.    | (A <= B) is true.     |


[link to c program on relational operators](src/relationalOperators.c)

## Logical Operators

| Operator |                                                                         Description                                                                        |       Example       |
|:--------:|:----------------------------------------------------------------------------------------------------------------------------------------------------------:|:-------------------:|
|    &&    | Called Logical AND operator. If both the operands are non-zero, then the condition becomes true.                                                           | (A && B) is false.  |
|   \|\|   | Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true.                                                       | (A \|\| B) is true. |
|     !    | Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. | !(A && B) is true.  |

## Bitwise Operators

Bitwise operator works on bits and perform bit-by-bit operation. The truth tables for `&, |,` and `^` is as follows:

| p | q | p & q | p \| q | p ^ q |
|:-:|:-:|:-----:|:------:|:-----:|
| 0 | 0 |   0   |    0   |   0   |
| 0 | 1 |   0   |    1   |   1   |
| 1 | 1 |   1   |    1   |   0   |
| 1 | 0 |   0   |    1   |   1   |


- Assume `A = 60` and `B = 13`, their binary equivalent is `A = 0011 1100`,  `B = 0000 1101`
- The following table lists the bitwise operators supported by C

| Operator |                                                        Description                                                        |             Example            |
|:--------:|:-------------------------------------------------------------------------------------------------------------------------:|:------------------------------:|
|     &    | Binary AND Operator copies a bit to the result if it exists in both operands.                                             | (A & B) = 12, i.e., 0000 1100  |
|    \|    | Binary OR Operator copies a bit if it exists in either operand.                                                           | (A \| B) = 61, i.e., 0011 1101 |
|     ^    | Binary XOR Operator copies the bit if it is set in one operand but not both.                                              | (A ^ B) = 49, i.e., 0011 0001  |
|     ~    | Binary One's Complement Operator is unary and has the effect of 'flipping' bits.                                          | (~A ) = ~(60), i.e,. -0111101  |
|    <<    | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.   | A << 2 = 240 i.e., 1111 0000   |
|    >>    | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. | A >> 2 = 15 i.e., 0000 1111    |


