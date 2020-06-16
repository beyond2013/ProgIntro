#include<stdio.h>
int area(int h, int w); // function declaration
int area(int h, int w)
{
  return h*w;
}

int main(void)
{
   int height, width;
   int result;
   
   printf("Enter value for height");
   scanf("%d", &height);
   
   printf("Enter value for width");
   scanf("%d", &width);
   
   result = area(height, width);
   
   printf("The area of rectangle is %d", result);
   
   return 0;
 }
   

  

