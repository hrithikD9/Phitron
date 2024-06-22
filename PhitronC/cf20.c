#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[100];
        scanf("%s", &s);

        int length = strlen(s);

        if (length > 10)
        {
            printf("%c", s[0]);
            printf("%d", length - 2);
            printf("%c\n", s[length - 1]);
        }

        else printf("%s\n",s);
    }

    return 0;
}