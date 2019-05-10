#include <stdio.h>

#define N 10

int main(void)
{
    int i;
    int a[N] = {0};

    i = 0;
    for (; i < N; i++) {
        printf("%d ", *(a + i));
    }

    printf("\n");

    return 0;
}
