#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *str);

int main(void)
{
    char *str = "hello world!";
    char *dup = duplicate(str);

    printf("dup str = %s\n", dup);

    free(dup);

    return 0;
}

char *duplicate(const char *str)
{
    size_t len;
    char *new_str;

    len = strlen(str);
    new_str = (char *)malloc(len + 1);
    if (NULL == new_str) {
        return NULL;
    }

    new_str = (char *)memcpy(new_str, str, len + 1);

    return new_str;
}
