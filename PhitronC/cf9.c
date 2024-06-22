#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

        int m = (n % 10);
        int k = n / 10;
        
        if (m != 0 && k % m == 0)  printf("YES");
        else if( k != 0 && m % k == 0) printf("YES");
        else printf("NO");

    return 0;
}