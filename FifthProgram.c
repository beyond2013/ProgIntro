#include<stdio.h>

int main(void){

 float numb_one, numb_two, result;
 char choice;

 printf("\n Enter value for first number");
 scanf("%f", &numb_one);

 printf("\n Enter value for second number");
 scanf("%f", &numb_two);

 printf("\n Enter choice +, -, *, /");
 scanf(" %c", &choice);

 if(choice == '+')
 {
    printf("\n%f + %f = %f", numb_one, numb_two, numb_one + numb_two);
 }
 if(choice == '-')
 {
    printf("\n%f - %f = %f", numb_one, numb_two, numb_one - numb_two);
 }
 if(choice == '*')
 {
    printf("\n%f * %f = %f", numb_one, numb_two, numb_one * numb_two);
 }
 if(choice == '/')
 {
    printf("\n%f / %f = %f", numb_one, numb_two, numb_one / numb_two);
 }

 return 0;
}
