#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }

        if (row % 2 == 0)
        {
            for (int col = 0; col < 2 * row + 1; col++)
            {
                printf("#");
            }
        }
        else
        {
            printf("-");
            for (int col = 0; col < 2 * row - 1; col++)
            {
                printf("-");
            }
            printf("-");
        }

        printf("\n");
    }

    for (int row = n - 2; row >= 0; row--)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }

        if (row % 2 == 0)
        {
            for (int col = 0; col < 2 * row + 1; col++)
            {
                printf("#");
            }
        }
        else
        {
            printf("-");
            for (int col = 0; col < 2 * row - 1; col++)
            {
                printf("-");
            }
            printf("-");
        }

        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    print(n);

    return 0;
}