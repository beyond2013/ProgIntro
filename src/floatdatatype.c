#include<stdio.h>

int main(void){

 float numb_one, numb_two, result;

 printf("\n Enter value for first number");
 scanf("%f", &numb_one);

 printf("\n Enter value for second number");
 scanf("%f", &numb_two);

 printf("\n%f + %f = %f", numb_one, numb_two, numb_one + numb_two);
 printf("\n%f - %f = %f", numb_one, numb_two, numb_one - numb_two);
 printf("\n%f * %f = %f", numb_one, numb_two, numb_one * numb_two);
 printf("\n%f / %f = %.2f", numb_two, numb_one, numb_two / numb_one);

 return 0;
}
