#include <stdio.h>

int main()
{
    int i = 1, j = 0;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
        j++;
    }
    printf("\n");
    printf("%d %d\n", i, j);

    return 0;
}
