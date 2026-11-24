#include <stdio.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    printf("%c.", str[0]);

    for(int i = 1; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("%c.", str[i + 1]);
        }
    }

    return 0;
}
