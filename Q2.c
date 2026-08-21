//write a code to enter two numbers to display their sum, difference, product and quotient
#include<stdio.h>
int main()
{
int a, b, sum, difference, product, quotient;
printf("enter value of a : ");
scanf("%d", &a);
printf("enter value of b : ");
scanf("%d", &b);
sum = a + b;
printf("sum of given numbers = %d\n", sum);
difference = a - b;
printf("difference of given numbers = %d\n", difference);
product = a * b;
printf("product of given numbers is : %d\n", product);
quotient = a / b;
printf("quotient of given numbers is : %d\n", quotient);
return 0;
}
