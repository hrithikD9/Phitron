#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowest = arr[0], position = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            if (arr[j] < lowest)
            {
                lowest = arr[j];
                position = j;
            }
        }
    }
    printf("%d %d\n", lowest, position + 1);

    return 0;
}