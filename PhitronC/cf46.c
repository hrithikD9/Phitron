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
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long mul = (a * b * c);
        long long div;

        if (mul == 0)
        {
            if (m == 0)  printf("0\n");
            else printf("-1\n");
        }
        else
        {
            div = m / mul;
            if (m % mul == 0) printf("%lld\n", div);
            else printf("-1\n");
        }
    }

    return 0;
}