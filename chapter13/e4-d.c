#include <stdio.h>
#include <ctype.h>

int read_line(char *str, int n)
{
    int ch, i = 0;

    for (; i < n; i++) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }
        str[i] = (char)ch;
    }
    str[i] = '\0';

    return i;
}

int main(void) {
    return 0;
}
