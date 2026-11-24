#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int start = 0;

    for(int i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            for(int j = i - 1; j >= start; j--)
            {
                printf("%c", str[j]);
            }

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    return 0;
}
