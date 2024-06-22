#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100000];
    scanf("%s", s);

    int i = 0, consonant = 0;
    while (s[i] != '\0')
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonant++;
        }
        i++;
    }

    printf("%d", consonant);

    return 0;
}