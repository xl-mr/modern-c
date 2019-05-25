#include <stdio.h>

void store_zero(int *a, int n);

int main(void)
{
    int a[10], i;

    store_zero(a, 10);

    for (i = 0; i < 10; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    return 0;
}

void store_zero(int *a, int n)
{
    int *p = a;

    for (; p < a + n; p++) {
        *p = 0;
    }
}
