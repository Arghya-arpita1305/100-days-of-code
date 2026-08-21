//sum of first n natural numbers
#include<stdio.h>
int main()
{
int n, sum;
printf("the number of natural numbers to be added (n) =  ");
scanf("%d", &n);
sum = (n * (n + 1)) / 2;
printf("sum of the given natural numbers = %d\n", sum);
return 0;
}
