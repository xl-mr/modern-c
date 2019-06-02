#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ((c) >= 'a' && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void)
{
    int i;
    char s[30];
    
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));   // s[3] = d => D

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));   //s[2] = 2

    return 0;
}
