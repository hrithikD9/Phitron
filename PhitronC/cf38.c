#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char *s)
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] != s[length - i - 1]) return 0;
    }
    return 1; 
}

int main()
{
    char s[1001];
    scanf("%s", s);

    if (is_palindrome(s))  printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}