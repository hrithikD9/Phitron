#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char x[100], y[100];
    scanf("%s", x);
    scanf("%s", y);

    int value = strcmp(x, y);

    if (value < 0)  printf("%s\n", x);
    
    else if (value > 0) printf("%s\n", y);
   
    else printf("%s\n", y);
    
    return 0;
}