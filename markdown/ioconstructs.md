# Input Output Constructs

- For displaying data/information on the standard output (i.e. display screen) `printf()` function is used. 
- For taking input from standard input (i.e. keyboard) `scanf()` function is used.

- both `printf()` and `scanf()` functions are provided by the **standard input/output header** `<stdio.h>`
- `printf()` function usually involves using **escape sequences** and **format specifiers**

## Escape Sequences

- The backslash in `\n` is called the escape character. 
- When the compiler sees a backslash in a string, it combines backslash with the next character to form an **escape sequence**
- The escape sequence `\n` means newline

Following table lists escape sequences and their description:


| Escape Sequence | Description     | Escape Sequence | Description  | Escape Sequence | Description        |
|:---------------:|-----------------|:---------------:|--------------|:---------------:|--------------------|
| \a              | Alarm           | \t              | tab          | \?              | question mark      |
| \b              | backspace       | \v              | vertical tab | \000            | octal number       |
| \f              | Form feed       | \\              | backslash    | \xhh            | hexadecimal number |
| \n              | new line        | \'              | single quote | \0              | Null               |
| \r              | carriage return | \"              | double quote |                 |                    |


## Format specifiers

- are used during the input or output
- `scanf()` function accepts 2 arguments
- 1st argument is a format control string, which indicates what type of data should be entered
- e.g. in `scanf("%d", &numb)` `%d` indicates that the data should be an integer

Following table lists the format specifiers and their description:


| Format Specifier | Description                       |
|:----------------:|-----------------------------------|
| %d               | Integer Format Specifier          |
| %f               | Float Format Specifier            |
| %c               | Character Format Specifier        |
| %s               | String Format Specifier           |
| %u               | Unsigned Integer Format Specifier |
| %ld              | Long Int Format Specifier         |




