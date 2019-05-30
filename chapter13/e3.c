#include <stdio.h>

int main(void)
{
    int i, j;
    char s[20];

    printf("enter: ");
    scanf("%d%s%d", &i, s, &j);

    printf("i = %d s = %s j = %d\n", i, s, j);

    return 0;
}
