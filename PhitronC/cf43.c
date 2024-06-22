#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int sum = 0;
    for(int i = 0; i <= k; i++){
        sum += a[i];
    }

    printf("%d",sum);

    return 0;
}