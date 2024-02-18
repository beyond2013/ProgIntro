# Functions

**Note: Following content is generated using ChatGPT**

In C language, functions play a vital role in modularizing code and promoting code reuse. Here's a detailed explanation of how functions are declared, defined, and called:

1. **Function Declaration:**
   - A function declaration specifies the name, return type, parameters, and sometimes storage class of a function.
   - It tells the compiler about the existence of a function before its actual implementation, allowing the compiler to perform type checking.
   - Function declarations typically appear in header files (.h files) or at the beginning of source files (.c files) before their first use.
   - The syntax for function declaration is:
     ```c
     return_type function_name(parameter_type parameter1, parameter_type parameter2, ...);
     ```

2. **Function Definition:**
   - A function definition provides the actual implementation of the function.
   - It includes the function header (name, return type, and parameters) followed by the function body enclosed in curly braces `{}`.
   - The function body contains the statements that define the behavior of the function.
   - Function definitions typically appear in source files (.c files).
   - The syntax for function definition is:
     ```c
     return_type function_name(parameter_type parameter1, parameter_type parameter2, ...) {
         // Function body
         // Statements defining the behavior of the function
     }
     ```

3. **Function Call:**
   - Function calls are used to execute the code inside a function from other parts of the program.
   - To call a function, you specify its name followed by parentheses `()` containing arguments (if any).
   - If the function has a return value, you can assign it to a variable or use it in an expression.
   - The syntax for function call is:
     ```c
     return_value = function_name(argument1, argument2, ...);
     ```
   - Example:
     ```c
     int result;
     result = add(3, 5); // Calling the function add with arguments 3 and 5
     ```

4. **Example:**
   ```c
   // Function declaration
   int add(int num1, int num2);

   int main() {
       int result;
       // Function call
       result = add(3, 5); // Calling the function add with arguments 3 and 5
       return 0;
   }

   // Function definition
   int add(int num1, int num2) {
       return num1 + num2; // Function body: returning the sum of num1 and num2
   }
   ```

In summary, function declaration provides information about the function to the compiler, function definition contains the actual implementation, and function calls execute the code inside the function. Understanding how to declare, define, and call functions is fundamental in C programming for building modular and reusable code.

