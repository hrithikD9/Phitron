#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n , m;
        scanf("%d %d",&n,&m);

        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d",&a[i][j]);
            }
        }

        
        

    }

    return 0;
}