#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2);

int main(void)
{
    printf("%s\n", concat("abc", "def"));

    return 0;
}

char *concat(const char *s1, const char *s2)
{
    char *res;

    res = (char *)malloc(strlen(s1) + strlen(s2) + 1);
    
    if (res == NULL) {
        return NULL;
    }
    
    strcpy(res, s1);
    strcat(res, s2);

    return res;
}

