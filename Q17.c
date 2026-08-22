// program to calculate roots and categorize them 

#include<stdio.h>
#include<math.h>
int main()
{
float a, b, c ;
float D, root1, root2, root;
 
 printf("Enter coefficients a, b, c : ");
 scanf("%f %f %f", &a, &b, &c);
 
 D = b * b - 4 * a * c;
 
 if
 (D > 0 )
 {
 root1 = (- b + sqrt( D )) / (2 * a);
 root2 = (- b - sqrt( D )) / (2 * a);
 printf( "roots are real and distinct : %.2f, %.2f\n", root1, root2 );
 }
 else
 if
 (D == 0)
 {
 root = -b / (2 * a);
 printf("roots are real and same %.2f\n", root);
 }
 else
 {
 printf("roots are imaginary \n");
 }
 return 0;
 }
 
 
 
