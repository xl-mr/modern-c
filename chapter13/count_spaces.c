#include <stdio.h>

int count_spaces(const char *s)
{
    int count = 0;
    while (*s != '\n') {
        if (*s == ' ') {
            count++;
        }
        s++;
    }

    return count;
}

int main(void)
{
    count_spaces("   dadad ");
    return 0;
}
