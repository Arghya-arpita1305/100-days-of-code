Q41. Swap First and Last Digit of a Number
#include <stdio.h>

int main()
{
    int n, first, last, digits = 0, temp;
    int power = 1;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;

    int middle = (n % power) / 10;

    int result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
