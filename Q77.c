#include <stdio.h>

int main()
{
    int n, i, j;
    int flag = 1;

    scanf("%d%d", &n, &n);

    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}
