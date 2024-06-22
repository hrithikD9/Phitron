#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == j || i + j == n - 1) && matrix[i][j] != 1)
            {
                flag = 1;
                break;
            }
    
            if ((i != j && i + j != n - 1) && matrix[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }
    if (flag == 1) printf("NO\n");
    else printf("YES\n");

    return 0;
}
