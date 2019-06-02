#include <stdio.h>

#define LINE_FILE _LINE_FILE(__LINE__, __FILE__)

#define _LINE_FILE(x, y) __LINE_FILE(Line x of the y)

#define __LINE_FILE(x) #x

int main(void)
{
    const char *str = LINE_FILE;

    printf("%s\n", str);

    return 0;
}
