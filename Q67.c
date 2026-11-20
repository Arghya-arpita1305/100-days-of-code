#include <stdio.h>

int main()
{
    int n, pos, value;

    scanf("%d", &n);

    int a[n + 1];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d%d", &pos, &value);

    for(int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;

    for(int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
