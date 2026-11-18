Q39. Product of Odd Digits of a Number
#include <stdio.h>

int main()
{
    int n, digit;
    long long product = 1;
    int found = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (found)
        printf("%lld", product);
    else
        printf("0");

    return 0;
}
