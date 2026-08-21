//input time in second and display in hours minutes and seconds
#include<stdio.h>
int main()
{
int hr, min, sec;
printf("enter time in seconds : ");
scanf("%d", &sec);
hr = sec / 3600;
sec = sec % 3600;
min = sec / 60;
sec = sec % 60;
printf("TIME = %02d : %02d : %02d\n", hr, min, sec);
return 0;
}
