# Task temperature conversion program

You will be writing step by step statements by following the instructions listed below. Upon completion the result program will convert given temperature in required units, Celsius or Fahrenheit.

Formulas for conversion are as under:

1. F = (C * 9 / 5) + 32
2. C = (F - 32) * 5 / 9

## Sample interaction of the desired program


Temperature Conversion Menu
===========================
1. Fahrenheit  
2. Celsius  
Convert from **1**  
Convert to   **2**  
temperature  **32**  
Converting **32** Fahrenheit to Celsius results in **0**  


## Instructions

1. Include header file for standard input output
2. Write main function
3. declare 2 variables of type int with the name **from** and **to** and initialize with value **0**
4. declare 2 variables of type float with the name **temperature** and **result** and initialize with value **0.0**
5. Write 3 **printf** statements to display the menu of the program
6. Display the message **Convert from** using **printf**
7. Use **scanf** to take input in **from** variable
8. Display the message **Convert to** using **printf**
9. Use **scanf** to take input in **to** variable
10. Display the message **temperature** using **printf**
11. Use **scanf** to take input in **temperature** variable
12. Write **if condition**, if value of **from is 1** and **to is 2**, then use formula 2 and store the answer in **result**
13. Write **if condition**, if value of **from is 2** and **to is 1**, then use formula 1 and store the answer in **result**

14. Write **printf** statement to display the last line as shown in the sample interaction above.


## Class Work

Extend your program and include 3rd Option **Kelvin** in the **temperature conversion menu**

Formulas for conversion are as under:

1. K = C + 273.15
2. K = (F - 32) * 5 / 9 + 273.15

Modify the above formulas to so that you may convert from **Celsius and Fahrenheit to Kelvin**
