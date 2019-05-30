#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];

    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");

    printf("str = %s\n", str); // tire-d-or-wired?

    return 0;
}
