#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        for (int col = row; col >= 1; col--)
        {
            printf("%d", col);
        }

        printf("\n");
    }

    return 0;
}