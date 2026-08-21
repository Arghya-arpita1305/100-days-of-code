//to check for positive , negative, or zero using nested if else
#include<stdio.h>
int main()
{
int a;
printf("enter a number : ");
scanf("%d", &a);
if (a >= 0) {
    if (a == 0) {
    printf("%d is zero \n", a);
    }
    else {
    printf("%d is positive \n", a);
    }
} else {
  printf("%d is negative \n", a);
  }
    
return 0;
}
