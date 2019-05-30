#include <stdio.h>
#include <string.h>

char *duplicate(const char *p)
{
    char q[50];

    return strcpy(q, p);
}

int main(void)
{
    char *str = "hello world!";

    printf("copy str = %s\n", duplicate(str));

    return 0;
}
