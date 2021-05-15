#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2; // variable declaration
  num1 = 20, num2 = 3;  // initialization

      printf("\n %d + %d = %d and %d + %d = %d",num1,num2,num1 + num2 ,num2,num1,num2 + num1);
      printf("\n %d - %d = %d and %d - %d = %d",num1,num2,num1 - num2 ,num2,num1,num2 - num1);
      printf("\n %d * %d = %d and %d * %d = %d",num1,num2,num1 * num2 ,num2,num1,num2 * num1);
      printf("\n %d / %d = %d and %d / %d = %d",num1,num2,num1 / num2 ,num2,num1,num2 / num1);
      printf("\n %d %% %d = %d and %d %% %d = %d",num1,num2,num1 % num2 ,num2,num1,num2 % num1);
}
