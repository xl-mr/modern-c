#include <stdio.h>
#include <ctype.h>

char *capitalize(char *str);

int main(void)
{
    char str[50];

    printf("Enter str: ");
    scanf("%[^\n]", str);

    printf("toupper str = %s\n", capitalize(str));

    return 0;
}

char *capitalize(char *str)
{
    char *p = str;
    while (*p) {
        *p = (char)toupper(*p);
        p++;
    }

    return str;
}
