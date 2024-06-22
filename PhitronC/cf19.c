#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[20], b[20];

    scanf("%s", &a);
    scanf("%s", &b);

    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }

    int size_a = strlen(a);
    int size_b = strlen(b);

    printf("%d ", size_a);
    printf("%d\n", size_b);

    strcat(a, b);
    printf("%s\n", a);

    a[count] = '\0';
    char c[10];

    c[0] = a[0];
    a[0] = b[0];
    b[0] = c[0];

    printf("%s %s", a, b);

    return 0;
}