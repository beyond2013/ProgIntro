#include<stdio.h>

int main()
{
   int num1, num2, result=0;
   int operation;  // to store one of + , - , * or /

   printf("\n Enter a number\t");
   scanf("%d", &num1);
   printf("\n Enter another number\t");
   scanf("%d", &num2);

   printf("\n Enter operator [1: +, 2: -, 3: *, 4:/]\t");
   scanf("%d", &operation);

   switch(operation)
   {

        case 2:
            result = num1 - num2;
            printf("\n The result is %d", result);
        break;

        case 1:
            result = num1 + num2;
            printf("\n The result is %d", result);
        break;

        case 3:
            result = num1 * num2;
            printf("\n The result is %d", result);
        break;

        case 4:
            result = num1 / num2;
            printf("\n The result is %d", result);
        break;

        default:
            printf("\n %d not in menu",operation);
   }


   return 0;
   }
