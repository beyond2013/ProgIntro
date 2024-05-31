# Writing user defined functions

This assignment asks the programmers to write a function to calculate check bit of ISBN-13.

## What is ISBN-13

The ISBN-13 (International Standard Book Number) method is a system for uniquely identifying books and other published materials. It's an expansion of the original ISBN system, which used 10 digits. Here's how the ISBN-13 method works:

1. **Prefix**: The ISBN-13 begins with a three-digit prefix known as the "Bookland" or "country code." This prefix identifies the language or geographic area of the publisher.

2. **Group Identifier**: Following the prefix, there is a group identifier of variable length. This identifies the specific publisher or imprint.

3. **Title Identifier**: The title identifier, also known as the item number, comes after the group identifier. It specifies the particular edition, format, or version of the publication.

4. **Check Digit**: The last digit of the ISBN-13 is a "check digit," which is calculated based on the preceding digits. It's used to detect errors in the ISBN and ensure its accuracy.

## The formula for calculating the check digit is as follows:

- Take each digit of the ISBN-13, starting from the left.
- Multiply the first digit by 1, the second digit by 3, the third digit by 1, the fourth digit by 3, and so on, alternating between 1 and 3.
- Add up all the products.
- Find the remainder when dividing the sum by 10.
- Subtract the remainder from 10 to get the check digit.

## For example:

Let's consider the ISBN-13 "978-0-306-40615-7":

1. Sum of products: $(9*1) + (7*3) + (8*1) + (0*3) + (3*1) + (0*3) + (6*1) + (4*3) + (0*1) + (6*3) + (1*1) + (5*3) = 143$.
2. Remainder when divided by 10: 143 % 10 = 3.
3. Check digit: 10 - 3 = 7.

So, the complete ISBN-13 is "978-0-306-40615-7".

The ISBN-13 method improves upon the older ISBN-10 system by providing more digits for increased capacity and by incorporating a check digit for enhanced accuracy. It's widely used in the publishing industry for cataloging and identifying books and other printed materials.

## Assignment - 1

- Create a function `calculateCheckDigit()`. 
- The function should take 1 argument 
- The function should check if the number contains 12 digits
- The function should calculate the 13th digit(Check digit) according to the formula mentioned in the example above.
- The function should append the 13th digit to the end of number passed as argument.
- Finally the function should return the 13 digit number

## Assignment - 2

- Create another function `isValidISBN()`
- The function should take 1 argument 
- The function should check if the number contains 13 digits
- The function should return 1 if the check digit is correct
- otherwise it should return 0

After completing your assignment check whether your code works with the following ISBN

1. 9781108951562
2. 9789812593174



