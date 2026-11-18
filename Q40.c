Q40. 1's Complement of a Binary Number
#include <stdio.h>

int main()
{
    long long n, digit, result = 0, place = 1;

    scanf("%lld", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
            result += 1 * place;
        else
            result += 0 * place;

        place *= 10;
        n /= 10;
    }

    printf("%lld", result);

    return 0;
}
