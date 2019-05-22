#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = *&i;
    int k, *p = &k;

    k = 11;

    printf("i = %d, j = %d, k = %d, *p = %d\n", i, j, k, *p);

    return 0;
}
