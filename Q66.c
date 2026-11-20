#include <stdio.h>

int main()
{
    int n, value;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    int i = n - 1;

    while(i >= 0 && a[i] > value)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = value;

    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
