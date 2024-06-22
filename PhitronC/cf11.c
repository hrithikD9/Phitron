#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int total = m;
    if (n > 0 && k > 0)
    {
        int a = n - m;
        int b = k - m;

        if (a > 0)
        {
            a = a / 2;
            if (a >= b)
            {
                total += a;
            }
            else
                total += b;
        }

        printf("%d", total);
    }

    else
    {
        printf("0");
    }

    return 0;
}