//to calculate area and circumference of a circle
#include <stdio.h>
int main()
{
float radius, area, circumference;
printf("radius of the circle is : ");
scanf("%f", &radius);
area = 3.14 * radius * radius;
printf("area of the circle is : %.2f\n", area);
circumference = 2 * 3.14 * radius;
printf("circumference of the circle is : %.2f\n", circumference);
return 0;
}

