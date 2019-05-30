#include <stdio.h>
#include <ctype.h>

int read_line(char *str, int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i == 0 && isspace(ch)) {
            // ignore
        } else if (i < n) {
            str[i++] = (char)ch;
        }
    } 
    str[i++] = '\n';
    str[i] = '\0';

    return i;
}

int main(void) {
    return 0;
}
