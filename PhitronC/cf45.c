#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d",&n);

        char s[n];
        scanf("%s",s);

        int tiger = 0 , pathan = 0 , i = 0;
        while(s[i] != '\0'){
            if(s[i] == 'P') pathan++;
            else if(s[i] == 'T') tiger++;

            i++;
        }

        if(pathan > tiger) printf("Pathaan\n");
        else if(tiger > pathan) printf("Tiger\n");
        else printf("Draw\n");
    }

    return 0;
}