//program to calculate library fine as follows : 
//first five days late 2rs/ day
//next five days late 4 rs/ day
//next twenty days late 6 rs/ day
//more than 30 days : membership cancelled

 #include <stdio.h>
 int main()
 {
 int days , fine = 0 ;
 printf("Enter number of late days : ");
 scanf("%d", &days); 
 if (days <= 0)
 {
 printf("No fine");
 }
 else
 if (days <= 5) 
  {
 fine = days * 2;
 printf("Fine of Rs.%d\n", fine);
 }
 else 
 if (days > 5 && days <= 10)
 {
 fine = 10 + ((days - 5) * 4);
 printf("Fine of Rs.%d\n", fine);
 }
 else 
 if (days > 10 && days <= 30)
 {
 fine = 30 + ((days - 10) * 6);
 printf("Fine of Rs.%d\n", fine);
 } 
 else 
 {
 printf("Membership cancelled");
 }
 return 0;
 }
