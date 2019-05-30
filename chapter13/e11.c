#include <stdio.h>

int my_strcmp(const char *s, const char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] == '\0') {
            return 0;
        }
    }

    return s[i] - t[i];
}

int my_strcmp1(const char *s, const char *t)
{
    while (*s == *t) {
        if (*s == '\0') {
            return 0;
        }
        s++;
        t++;
    }

    return *s - *t;
}

int main(void)
{
    printf("str cmp res = %d\n", my_strcmp1("abc", "abcd"));
    printf("str cmp res = %d\n", my_strcmp1("abc", "abc"));
    printf("str cmp res = %d\n", my_strcmp1("abcd", "abc"));

    return 0;
}
