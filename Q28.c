//program to calculate product of first even numbers

#include <stdio.h>
int main()
{
int n ;
printf("Enter a number : ");
scanf("%d", &n);
long long product=1;
for (int i=1; i<=n; i++) {
product=product*(2*i);
}

printf("product of first %d even numbers = %lld\n",n, product);
return 0;
}
