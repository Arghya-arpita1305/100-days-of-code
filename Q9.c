//program to calculte simple and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
float P, R, T, SI, A, CI;
printf("Enter principal amount : ");
scanf("%f", &P);
printf("Enter rate of interest per annum (in %%) : " );
scanf("%f", &R);
printf("Enter time (in years) : ");
scanf("%f", &T);
SI = (P * R * T) / 100;
printf("simple interest for the following years is : %.2f\n", SI);
A = P * (pow ((1 + R / 100), T));
CI = A - P;
printf("compound interest for following years is : %.2f\n", CI);
return 0;
}
