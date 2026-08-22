//to classify a triangle as isosceles, equilateral or scalene based on length of its side
 
 #include<stdio.h>
 int main()
 {
 int a, b, c;
 printf("Enter three sides of triangle : ");
 scanf("%d %d %d", &a, &b, &c);
 if 
 (a + b <= c || b + c <= a || a + c <= b)
{
printf("Not a valid triangle ! \n");
 }
 else if (a == b && b == c)
 { 
 printf("It's an equilateral triangle \n");
 }
else if (a == b || b == c || c == a)
 {
 printf("It's an isosceles triangle \n");
 }
else 
{
printf("It's a scalene triangle \n");
}
return 0;
}
