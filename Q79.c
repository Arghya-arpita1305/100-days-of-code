#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf("%d%d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        int row = i;
        int col = 0;

        while(row >= 0 && col < c)
        {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
    }

    for(i = 1; i < c; i++)
    {
        int row = r - 1;
        int col = i;

        while(row >= 0 && col < c)
        {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
    }

    return 0;
}
