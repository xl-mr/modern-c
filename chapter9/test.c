#include <stdio.h>

char *
getStr(char *str)
{
    printf("%s\n", str);
    return str;
}

int main(void)
{
    char *str = "hello world!";
    str = getStr(str);

    printf("%s\n", str);

    return 0;
}
