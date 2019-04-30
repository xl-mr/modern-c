#include <stdio.h>

int main()
{
    int i = 1, j = 0;
    for (; i <= 128; i *= 2, j++) 
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("%d %d\n", i, j);

    return 0;
}
