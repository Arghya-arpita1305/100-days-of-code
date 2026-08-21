//swapping numbers using third variable
#include<stdio.h>
int main()
{
int a, b, c;
printf("enter value of a : ");
scanf("%d", &a);
printf("enter value of b : ");
scanf("%d", &b);
c = a + b;
printf("after swapping \n");
printf("new value of a : %d\n", c-a);
printf("new value of b : %d\n", c-b);
return 0;
}
