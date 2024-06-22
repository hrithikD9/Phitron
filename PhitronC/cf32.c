#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x = m + 1;
    int count[9] = {0};
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (a[j] == a[k]) count[j]++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}