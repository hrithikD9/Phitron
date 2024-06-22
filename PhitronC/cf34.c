#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }

        for (int col = 0; col < (2 * row) + 1; col++)
        {
            printf("*");
        }

        for (int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

/* for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        for (int col = 0; col < (2 * row) + 1; col++)
        {
            cout << "*";
        }

        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        cout << endl;
    }*/