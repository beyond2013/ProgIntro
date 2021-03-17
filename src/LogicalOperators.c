#include<stdio.h>
int main(void)
{
   int day, working;

   printf("\n Enter a number \n 1. \t Monday ");
   printf("\n 2. \t Tuesday \n 3. \t Wednesday ");
   printf("\n 4. \t Thursday \n 5. \t Friday ");

   scanf("%d", &day);
   //printf("\n Value of day is %d", day);
   printf("Enter 1 or 0, Working=1 or Holiday=0");
   scanf("%d", &working);
   if(day==1 && working==1)
   {
    printf("\n Value of day is %d and value of working is %d", day, working);
    printf("\nEnglish Class");
   }
   else
    {
   printf("\nNow on line 19");
   if(day==2 && working==1)
   {
       printf("\n Value of day is %d and value of working is %d", day, working);
    printf("\nICT Class");
   }
   else
    {
printf("\nNow on line 25");
   if(day==3 && working==1)
   {
       printf("\n Value of day is %d and value of working is %d", day, working);
    printf("\n Fundamentals of Programming");
   }
printf("\nNow on line 31");
   if(day==4 && working==1)
   {
       printf("\n Value of day is %d and value of working is %d", day, working);
    printf("\n Applied Physics");
   }
printf("\nNow on line 37");
   if(day==5 && working==1)
   {
       printf("\n Value of day is %d and value of working is %d", day, working);
    printf("\nMathematics");
   }
    }
    }
   return 0;
}
