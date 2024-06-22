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
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int after = (m1 * d) / (m1 + m2);

        int ans = 0;
        if(after > d) ans = after - d;
        else ans = d - after;

        printf("%d\n", ans);
    }

    return 0;
}