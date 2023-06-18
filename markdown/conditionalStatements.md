# Conditional Statements and Execution Flow for Conditional Statements

- Conditionals or conditional statements are programming language commands for handling decisions. 
- e.g. to determine if a student's grade is greater than or equal to 50 and whether the program should print "Congratulations! You passed"

## Simple if statement

A simple if statement is written as shown below:

```

if(grade >= 50)
{
  printf("\n Congratulations! You passed");
}

```

- Suppose the value in grade is 60, then the condition grade >= 50 will evaluate to true, and the message **Congratulations! You passed** will be displayed
- However if the value in grade is 40, then the condition grade >= 50 will evaluate to false, and the message will not be displayed.

- [See this program for a complete example of using simple if statement](../src/simpleif.c) 

## if else 

- if else selection statement allows to specify different actions to be performed when the condition is true and when it is false.

- e.g. the following code will display message **Congratulations! You passed** if the condition is true, otherwise it will display message **Failed**.


```
if(grade >= 50)
{
  puts("Congratulations! You passed");
}
else
{
	puts("Failed");
}
```

### Flow chart single selection if vs if else

![Flow chart comparing if vs if else](../figs/conditionals.png "Flow chart compaing if vs if else")

**Note: following explanation is AI generated**

## else if

In C, the "else if" construct is used when we have multiple conditions that we want to check in a sequential manner. It allows us to test multiple conditions and execute different blocks of code based on the outcome of those conditions.

Here's how the "else if" construct works:

1. We start with an "if" statement to test the first condition. If the condition is true, the code block associated with that "if" statement is executed, and the program moves on to the next statement after the "if-else" construct.

2. If the condition of the first "if" statement is false, the program moves to the next "else if" statement. It checks the condition associated with this "else if" statement. If the condition is true, the code block associated with that "else if" statement is executed, and the program again moves on to the next statement after the "if-else" construct.

3. If the condition of the current "else if" statement is false, the program moves to the next "else if" statement, and the process repeats. It checks the condition associated with this new "else if" statement, and if it is true, the code block associated with that "else if" statement is executed.

4. This process continues until either one of the conditions is true, or there are no more "else if" statements to check. If none of the conditions in the "if" and "else if" statements are true, the code block associated with the final "else" statement (if present) will be executed.

Here's an example to illustrate the "else if" construct:

```c
int num = 10;

if (num > 10) {
    printf("The number is greater than 10.\n");
}
else if (num < 10) {
    printf("The number is less than 10.\n");
}
else {
    printf("The number is equal to 10.\n");
}
```

In this example, the program first checks if `num` is greater than 10. Since it's not, the first condition is false, and the program moves to the next "else if" statement. Here, it checks if `num` is less than 10. Again, this condition is false. Finally, the program reaches the "else" statement, and since none of the previous conditions were true, it executes the code block associated with the "else" statement, which prints "The number is equal to 10."

The "else if" construct allows us to handle multiple conditions and make decisions based on the outcome of those conditions, providing more flexibility and control over the program's behavior. 


**Note: following explanation is AI generated**

## Switch statement

In C, the switch statement is a control flow statement that allows you to compare the value of a variable or expression against multiple cases and execute different blocks of code based on the matching case.

Here's how the switch statement works:

1. You start with the keyword `switch` followed by the variable or expression you want to compare. This variable or expression is often called the "switch expression" or "switch condition."

2. After the switch expression, you enclose the case blocks within curly braces `{}`. Each case block represents a specific value or set of values that you want to compare against the switch expression.

3. Inside each case block, you specify the value or values that you want to match with the switch expression. If the switch expression matches a case value, the code block associated with that case is executed.

4. After executing the code block of a matched case, the program "falls through" to the next case block unless you include a `break` statement. The `break` statement is used to exit the switch statement and continue execution after the switch block.

5. Optionally, you can include a `default` case at the end of the switch statement. The code block associated with the `default` case will be executed if none of the previous cases match the switch expression.

Here's an example to illustrate the switch statement:

```c
int day = 3;

switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    default:
        printf("Weekend\n");
        break;
}
```

In this example, the switch expression is `day`, which has a value of 3. The code checks each case block one by one. When it finds a match, it executes the corresponding code block. In this case, the code block associated with `case 3` is executed, which prints "Wednesday" to the console.

If the `break` statement were missing after each code block, the program would continue executing the code in the subsequent case blocks until it encounters a `break` statement or reaches the end of the switch statement.

If the value of `day` didn't match any of the cases, the code block associated with the `default` case would be executed, printing "Weekend" to the console.

The switch statement is useful when you have multiple cases to compare against a single variable or expression and want to execute different blocks of code based on the matching case. It provides a concise and structured way to handle such scenarios.

## Conditional operator ?: | Ternary operator

- C provides the Conditional operator `?:` which is closely related to the if else statement
- it takes three operands
- the 1st operand is the condition
- 2nd operand is the value if the condition is true
- 3rd operand is the value if the condition is false
- e.g. `2 < 3 ? "two is less than three" : "two is not less than three"`
- [C program using ternary operator](../src/ternaryoperator.c)


