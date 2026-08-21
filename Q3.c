//area and perimeter
#include<stdio.h>
int main()
{
int length, breadth, area, perimeter;
printf("enter value of length : ");
scanf("%d", &length);
printf("enter value of breadth : ");
scanf("%d", &breadth);
area = length * breadth;
printf("area of rectangle is : %d\n", area);
perimeter = 2 * (length + breadth);
printf("perimeter of rectangle is : %d\n", perimeter);
return 0;
}

