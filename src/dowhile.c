#include<stdio.h>

int main()
{
   int num1, num2, result=0;
   int operation;  // to store one of + , - , * or /
   int loop;
   char op;

   puts("New program");
do{
   printf("\n Enter a number\t");
   scanf("%d", &num1);
   printf("\n Enter another number\t");
   scanf("%d", &num2);

   printf("\n Enter operator [1: +, 2: -, 3: *, 4:/]");
   scanf(" %c", &op);

   switch(op)
   {

        //case 2:
        case '-':
            result = num1 - num2;
            printf("\n The result is %d", result);
        break;

        //case 1:
        case '+':
            result = num1 + num2;
            printf("\n The result is %d", result);
        break;

        //case 3:
        case '*':
            result = num1 * num2;
            printf("\n The result is %d", result);
        break;

        //case 4:
        case '/':
            result = num1 / num2;
            printf("\n The result is %d", result);
        break;

        default:
            printf("\n %c not in menu",op);
   }

   printf("\n Press 1 to continue");
   scanf("%d", &loop);
}
while(loop == 1);
   return 0;
}

