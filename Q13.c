//to check if an year is leap year or not
#include<stdio.h>
int main()
{
int yr;
printf("enter an year : ");
scanf("%d", &yr);
if
(yr % 400 == 0)
{
printf("%d is leap year \n", yr);
}
else 
    if
      (yr % 100 == 0)
      {
      printf("%d is not a leap year \n", yr);
      }
      else
           if
             (yr % 4 ==0)
             {
             printf("%d is leap year \n", yr);
             }
      else
     {
     printf("%d is not leap year \n", yr);
     }
     return 0;
     }
