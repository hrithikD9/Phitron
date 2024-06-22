#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s;
    int count[26] = {0};

    while (scanf("%c", &s) != EOF) count[s - 'a']++;
    
    for (char j = 'a'; j <= 'z'; j++)
    {
        if (count[j - 'a'] > 0)  printf("%c - %d\n", j , count[j - 'a']);
    }

    return 0;
}