//program to implement basic calculator using switch case

#include <stdio.h>
int main()
{
char op;
printf("enter operator");
scanf("%c", &op);
int a,b;
printf("enter two numbers : ");
scanf("%d %d", &a, &b);
switch (op) {
case '+' :
printf("%d\n", a + b);
break;

case'-' :
printf("%d\n", a - b);
break;

case'*' :
printf("%d\n", a * b);
break;

case'/':
if (b != 0)
{ printf("%d\n", a / b); }
else
{ printf("division by zero error !\n"); }
break;

case'%' :
if (b!=0)
{ printf("%d\n", a % b);}
else {
printf("modulo by zero operator\n");}
break;

default :
printf("invalid operator\n");
}

return 0;
}
