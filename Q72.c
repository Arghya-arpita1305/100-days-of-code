#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d%d", &rows, &cols);

    int a[rows][cols];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
