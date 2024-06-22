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
        char s[10000];
        scanf("%s", s);

        int i = 0, capital = 0, small = 0, num = 0;
        while (s[i] != '\0')
        {
            if (s[i] >= 'A' && s[i] <= 'Z') capital++;
                
            else if (s[i] >= 'a' && s[i] <= 'z') small++;
                
            else if (s[i] >= '0' && s[i] <= '9') num++;

            i++;
        }

        printf("%d %d %d\n", capital, small, num);
    }

    return 0;
}