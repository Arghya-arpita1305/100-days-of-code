Q44. Sum of Series: 1 + 3/4 + 5/6 + 7/8 + ... up to n Terms
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    scanf("%d", &n);

    int num = 1, den = 1;

    for (int i = 1; i <= n; i++)
    {
        sum += (float)num / den;

        num += 2;
        den += 2;
    }

    printf("%.2f", sum);

    return 0;
}
