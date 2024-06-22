#include<stdio.h>

int main(){

    char x;
    scanf("%c",&x);

    if ( x >= '0' && x <= '9') printf("IS DIGIT");
    else{
        printf("ALPHA\n");
        if(x >= 'A' && x <= 'Z') printf("IS CAPITAL");
        else printf("IS SMALL");
    }
    
    return 0;
}