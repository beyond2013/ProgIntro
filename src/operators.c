#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 2;
  int num1, num2; // variable declaration
  num1 = 20, num2 = 3;  // initialization
//    printf(" %f + %f = %f", 3.5, 5.5, 3.5 + 5.5);
//    printf("\nMy name starts with the alphabet %c", 'I');
//    printf("\n and my name is %s", "Imran");

// arithmetic operators

      printf("\n %d + %d = %d and %d + %d = %d",num1,num2,num1 + num2 ,num2,num1,num2 + num1);
      printf("\n %d - %d = %d and %d - %d = %d",num1,num2,num1 - num2 ,num2,num1,num2 - num1);
      printf("\n %d * %d = %d and %d * %d = %d",num1,num2,num1 * num2 ,num2,num1,num2 * num1);
      printf("\n %d / %d = %d and %d / %d = %d",num1,num2,num1 / num2 ,num2,num1,num2 / num1);
      printf("\n %d %% %d = %d and %d %% %d = %d",num1,num2,num1 % num2 ,num2,num1,num2 % num1);
			
      printf("\n %d - %d = %d and %d - %d = %d",3,5,3-5,5,3,5-3);
      printf("\n %d * %d = %d and %d * %d = %d",3,5,3*5,5,3,5*3);
      printf("\n %d / %d = %d and %d / %d = %d",3,5,3/5,5,3,5/3);
      printf("\n %d %% %d = %d and %d %% %d = %d",3,5,3%5,5,3,5%3);

// arithmetic assignment operators

      printf("\n The value of a is %d",a);
      a = a + 2;
            printf("\n The value of a is %d",a);
      a += 2;
            printf("\n The value of a is %d",a);
       printf("\n The value of a+=2 is %d", a+=2);

			 printf("\n The value of a%%=5 is %d", a%=5);

       //Relational Operators

       printf("\nThe result of a<2 is %d", a<2);
       printf("\nThe result of a>2 is %d", a>2);
       printf("\nThe result of a==2 is %d", a==2);
       printf("\nThe result of a<=2 is %d", a<=2);
       printf("\nThe result of a>=2 is %d", a>=2);
       printf("\nThe result of a!=2 is %d", a!=2);
    return 0;
}
