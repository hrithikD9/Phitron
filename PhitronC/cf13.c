#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    long long k = 0;
    int check = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            k = i;
            check = 1;
            break;
        }
    }

    if (check == 1)  printf("%d", k);
    else printf("-1");
        

    return 0;
}