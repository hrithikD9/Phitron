#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    int sum = 0, i = 0;
    while (str[i] != '\0')
    {
        sum += (str[i] - 48);
        i++;
    }

    printf("%d", sum);

    return 0;
}