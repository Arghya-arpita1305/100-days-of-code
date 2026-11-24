#include <stdio.h>

int main()
{
    char str[200];
    char longest[100];
    int len = 0, maxLen = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                start = i - len;
            }

            len = 0;
        }

        if(str[i] == '\0')
            break;
    }

    for(int i = 0; i < maxLen; i++)
    {
        longest[i] = str[start + i];
    }

    longest[maxLen] = '\0';

    printf("%s", longest);

    return 0;
}
