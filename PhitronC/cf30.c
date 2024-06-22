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
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int x;
        scanf("%d", &x);

        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i]) check = 1;
        }

        if(check == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}