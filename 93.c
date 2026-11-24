#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int freq[26] = {0};

    scanf("%s", s1);
    scanf("%s", s2);

    int i = 0;

    while(s1[i] != '\0')
    {
        freq[s1[i] - 'a']++;
        i++;
    }

    i = 0;

    while(s2[i] != '\0')
    {
        freq[s2[i] - 'a']--;
        i++;
    }

    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
