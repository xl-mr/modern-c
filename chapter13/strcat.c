#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    char *p = dest;
    while (*p) {
        p++;
    }

    while ((*p++ = *src++)) {
    
    }

    return dest;
}

int main(void)
{
    char dest[30] = "abc";

    printf("%s\n", my_strcat(dest, "def"));

    return 0;
}

