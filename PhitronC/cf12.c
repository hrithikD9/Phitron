#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    long long sum = 0; 

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if( sum < 0) printf("%lld",abs(sum));
    else printf("%lld",sum);

    return 0;
}