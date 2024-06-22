#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int mini = a[0];
    for(int i = 1; i < n; i++){
       if(a[i] < mini) mini = a[i];
    }

    int frequency = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == mini) frequency++;
    }

    if(frequency % 2 == 1) printf("Lucky");
    else printf("Unlucky");

    return 0;
}