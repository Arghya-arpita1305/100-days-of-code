//program to assign grade by checking percentage

#include<stdio.h>
int main()
{
int percentage;
printf("Enter percentage : ");
scanf("%d", &percentage);
if (percentage < 0 || percentage > 100)
{
printf("invalid input ! Enter a value between 0 and 100 \n");
}
else if (percentage >= 90)
{
printf("Grade A \n");
}
else if (percentage >= 80)
{
printf("Grade B \n");
}
else if (percentage >= 70)
{
printf("Grade c \n");
}
else if (percentage >= 60)
{
printf("Grade D \n");
}
else {
printf("Grade F \n");
}
return 0;
}
