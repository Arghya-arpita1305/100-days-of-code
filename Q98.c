#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    int lastSpace = -1;

    printf("%c.", str[0]);

    for(int i = 1; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            lastSpace = i;
            if(str[i + 1] != '\0')
                printf("%c.", str[i + 1]);
        }
    }

    printf("\b");

    for(int i = lastSpace + 1;
        str[i] != '\n' && str[i] != '\0';
        i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
