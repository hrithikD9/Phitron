#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;

        else if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;

        else if (s[i] == ',')  s[i] = ' ';
            
    }
    printf("%s", s);

    return 0;
}