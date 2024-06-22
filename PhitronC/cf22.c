#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minimum(int arr[], int n)
{
    int m = arr[0], a = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
            a = i;
        }
    }
    return a;
}

int maximum(int arr[], int n)
{
    int m = arr[0], a = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
            a = i;
        }
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mini = minimum(arr, n);
    int maxi = maximum(arr,n);

    int temp = arr[maxi];
    arr[maxi] = arr[mini];
    arr[mini] = temp;

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}