//program to calculate electricity bill

#include<stdio.h>
int main()
{
int unit, bill;
printf(" Enter unit : ");
scanf("%d", &unit);
if (unit <= 100)
{
bill = 5 * unit;
printf("bill = %d\n", bill);
}
else if (unit <= 200)
{
bill = 500 + ((unit - 100) * 7);
printf("billl = %d\n", bill);
}
else if (unit <=300)
{
bill = 1200 + ((unit - 200) * 10);
printf("bill = %d\n", bill);
}
else {
bill = 2200 + ((unit - 300) * 12);
printf("bill = %d\n",bill);
}
return 0;
}

