//program to calculate profit or loss percentage using given cost price and selling price

#include <stdio.h>
int main()
{
float cp, sp, profitloss;
printf("Enter cost price : \n");
scanf("%f", &cp);
printf("Enter selling price : \n");
scanf("%f", &sp);
if (sp > cp)
{
profitloss = ((sp - cp) / cp) * 100;
printf("Profit of %.2f%%\n", profitloss);
}
else if (cp > sp)
{
profitloss = ((cp - sp) / cp) * 100;
printf("Loss of %.2f%%\n", profitloss);
}
else {
printf("No profit no loss\n");
}
return 0;
}
