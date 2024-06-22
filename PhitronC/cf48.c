#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        printf("%d ", a[n - 1][j]);
    }
    printf("\n");

    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j][m - 1]);
    }
    printf("\n");

    return 0;
}