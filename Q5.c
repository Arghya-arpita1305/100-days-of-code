//code to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main()
{
float temp;
float fahrenheit;
printf("temperature in celsius : ");
scanf("%f", &temp);
fahrenheit = (temp * 9 / 5) + 32;
printf("temperature in fahrenheit = %.2f\n", fahrenheit);
return 0;
}
